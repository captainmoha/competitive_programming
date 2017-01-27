#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

typedef map<string, string> strMap;
typedef vector<string> strVec;

class Tag {

	public:
		string name;
		strMap attributes;
		vector<Tag*> children;

		string getAttrValue(string attr) {
			// cout << "attr : " << attr << endl;
			strMap::iterator query = attributes.find(attr);
			// cout << "queried!\n";
			if (query != attributes.end()) {
				return query->second;
			}

			return "";
		}

		void addChild(Tag* child) {
			children.push_back(child);
		}

		Tag* getChild(string name) {

			for (int i = 0; i < children.size(); i++) {


				bool b = children.at(i)->name == name;
				// cout << "b " << b << endl;
				// cout << "nloop: " << children.at(i)->name << endl;
				if (b) {
					
					return children.at(i);
				}
			}

			// cout << "gaga\n"; 
			// not found
			return NULL;
		}
};


Tag* buildTag(string line);
strVec tokenizeTags(string query);

int main(void) {

	int nLines, nQuery;

	// root tag contains all tags in the document(doesn't exist in the real document but used here for convenience)
    Tag* root = new Tag;
    root->name = "root";

	cin >> nLines >> nQuery;
	cin.ignore(); // because i need to use getine later and it stops after reaching \n
	
	Tag* currentTag = NULL;
	Tag* outerTag = NULL;

	int currentDepth = 0;

	for (int i = 0; i < nLines; i++) {
		
		string line;
		// cout << "Line# " << i << endl;
		getline(cin, line);
		// cout << "line " << line << endl;

		// if it's the end of a tag
		if (line[1] == '/') {
			// cout << "exiting " << line << endl;
			currentDepth--;
			continue;
		}

		else {

			if (currentDepth == 0) {
				currentTag = buildTag(line);
				outerTag = currentTag;
				root->addChild(currentTag);
				// cout << "Added: " << currentTag->name << " To root" << endl;
				currentDepth++;
			}

			else {
				Tag* newChild = buildTag(line);
				currentTag->addChild(newChild);
				// cout << "1Added: " << newChild->name << " as a child to: " << currentTag->name << endl;
				outerTag = currentTag;
				currentTag = newChild;
				currentDepth++;
			}

			while (true) {
				getline(cin, line);

				if (line[1] == '/') {
					// cout << "/Line# " << i << endl;
					// cout << "line " << line << endl;
					currentDepth--;
					i++;
					currentTag = outerTag;
					break;
				}

				Tag* child = buildTag(line);

				currentTag->addChild(child);

				// cout << "Added: " << child->name << " as a child to: " << currentTag->name << endl;
				currentTag = child;

				// cout << "Line#!! " << i+1 << endl;
				// cout << "line " << line << endl;
				currentDepth++;
				i++;
			}	
		}
	}
			
	

	// handle queries

	while (nQuery--) {
		string query;
		getline(cin, query);
		// cout << "q: " << query << endl;
		string attriute = query.substr(query.find("~") + 1);
		strVec tagsNames = tokenizeTags(query);

		Tag* currTag = root->getChild(tagsNames.at(0));
		Tag* tempTag = currTag;

		if (tagsNames.size() > 1) {
			int i = 1;

			while(currTag != NULL && i < tagsNames.size()) {
				// cout << "nn: " << tagsNames.at(i) << endl;
				tempTag = currTag;
				currTag = currTag->getChild(tagsNames.at(i));
				i++;
			}
		}
		

		if (currTag != NULL) {
			// cout << "Name: " << currTag->name << endl;

			string value = currTag->getAttrValue(attriute);
			if (value != "") {
				cout << value << endl;
				// cout << "---------\n";
				continue;
			}	
		}

		else if (tempTag != NULL) {
			// cout << "NameT: " << tempTag->name << endl;
			cout << "Not Found!\n";
			// cout << "---------\n";
			continue;
		}

		cout << "Not Found!\n";
		// cout << "---------\n";
	}

	return 0;
}


Tag* buildTag(string line) {

	stringstream ss(line);
	strMap attributes;
	string tagName;

	ss >> tagName;
	if (tagName[tagName.size()-1] == '>') {
		tagName = tagName.substr(0, tagName.size()-1);
	}
	// cout << "tsize: " << tagName.size() << endl;
	
	tagName = tagName.substr(1);
	// cout << "TagName " << tagName << endl;
	
	while (!ss.eof()) {
		// cout << "inloop\n";
		string key, value;
		char equalSign;

		ss >> key >> equalSign >> value;
		value = value.substr(1, value.find_last_of('"')-1);
		// cout << "val " << value << endl;
		attributes[key] = value;
	}

	Tag* newTag = new Tag;
	newTag->name = tagName;
	newTag->attributes = attributes;

	return newTag;
}

strVec tokenizeTags(string query) {
	strVec tags;
	string temp = "";

	for (int i = 0; i < query.size(); i++) {
		if (query[i] == '~') {
			break;
		}
		else if (query[i] == '.') {
			tags.push_back(temp);
			temp = "";
		}

		else {
			temp += query[i];
		}
	}

	// last one
	tags.push_back(temp);
	return tags;
}


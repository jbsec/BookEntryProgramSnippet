#include <iostream>
using namespace std;

int main() {
  std::cout << "Hello World!\n";
}

class Image {
  public:
    Image(const string& imageDataFileName);
};

class AudioClip {
  public:
    AudioClip (const string& audioDataFileName);
};

class PhoneNumber {
// idk man
};

class BookEntry {
  public:
    BookEntry(const string& name,
             const string& address = "",
             const string& imageFileName = "",
             const string& audioClipFileName = "");
  ~BookEntry();

  //Phone numbers are added via this function

  private:
    string theName;
    string theAddress;
    list<PhoneNumber> thePhones;
    Image *theImage;
    AudioClip *theAudioClip;
};

BookEntry::BookEntry(const string& name,
                      const string& address,
                        const string& imageFileName,
                          const string& audioClipFileName )
          : theName(name), theAddress(address),
          theImage(0), theAudioClip(0)
          {
            if (imageFileName !="") {
              theImage = new Image(imageFileName);
            }
            if (audioClipFileName !="") {
              theAudioClip = new AudioClip(audioClipFileName);
            }
          }
        BookEntry::~BookEntry()
        {
          delete theImage;
          delete theAudioClip;
        }
/*
if (AudioClipFileName != "") {
  theAudioClip = new AudioClip(audioClipFileName);
}
*/


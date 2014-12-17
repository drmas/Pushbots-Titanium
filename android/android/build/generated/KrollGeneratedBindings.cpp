/* C++ code produced by gperf version 3.0.1 */
/* Command-line: gperf -L C++ -E -t C:/Users/mas/AppData/Local/Temp/mas/pushbots-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "C:/Users/mas/AppData/Local/Temp/mas/pushbots-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "com.pushbots.android.PushbotsModule.h"
#include "com.pushbots.android.ExampleProxy.h"


#line 14 "C:/Users/mas/AppData/Local/Temp/mas/pushbots-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 3, duplicates = 0 */

class PushbotsBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
PushbotsBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
PushbotsBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 33,
      MAX_WORD_LENGTH = 35,
      MIN_HASH_VALUE = 33,
      MAX_HASH_VALUE = 35
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""},
#line 17 "C:/Users/mas/AppData/Local/Temp/mas/pushbots-generated/KrollGeneratedBindings.gperf"
      {"com.pushbots.android.ExampleProxy", ::com::pushbots::android::pushbots::ExampleProxy::bindProxy, ::com::pushbots::android::pushbots::ExampleProxy::dispose},
      {""},
#line 16 "C:/Users/mas/AppData/Local/Temp/mas/pushbots-generated/KrollGeneratedBindings.gperf"
      {"com.pushbots.android.PushbotsModule", ::com::pushbots::android::PushbotsModule::bindProxy, ::com::pushbots::android::PushbotsModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "C:/Users/mas/AppData/Local/Temp/mas/pushbots-generated/KrollGeneratedBindings.gperf"


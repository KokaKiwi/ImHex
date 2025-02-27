#include <hex/helpers/shared_data.hpp>

#include <nlohmann/json.hpp>

namespace hex {

    std::vector<std::function<void()>> SharedData::deferredCalls;

    std::vector<prv::Provider*> SharedData::providers;
    u32 SharedData::currentProvider;

    std::map<std::string, std::vector<ContentRegistry::Settings::Entry>> SharedData::settingsEntries;
    nlohmann::json SharedData::settingsJson;
    std::vector<ContentRegistry::CommandPaletteCommands::Entry> SharedData::commandPaletteCommands;
    std::map<std::string, ContentRegistry::PatternLanguageFunctions::Function> SharedData::patternLanguageFunctions;
    std::vector<View*> SharedData::views;
    std::vector<ContentRegistry::Tools::Entry> SharedData::toolsEntries;
    std::vector<ContentRegistry::DataInspector::Entry> SharedData::dataInspectorEntries;
    u32 SharedData::patternPaletteOffset;
    std::string SharedData::popupMessage;
    std::list<ImHexApi::Bookmarks::Entry> SharedData::bookmarkEntries;
    std::vector<pl::PatternData*> SharedData::patternData;

    std::map<std::string, std::string> SharedData::languageNames;
    std::map<std::string, std::vector<LanguageDefinition>> SharedData::languageDefinitions;
    std::map<std::string, std::string> SharedData::loadedLanguageStrings;

    std::vector<ContentRegistry::Interface::DrawCallback> SharedData::welcomeScreenEntries;
    std::vector<ContentRegistry::Interface::DrawCallback> SharedData::footerItems;
    std::vector<ContentRegistry::Interface::DrawCallback> SharedData::toolbarItems;

    std::vector<ContentRegistry::DataProcessorNode::Entry> SharedData::dataProcessorNodes;
    u32 SharedData::dataProcessorNodeIdCounter = 1;
    u32 SharedData::dataProcessorLinkIdCounter = 1;
    u32 SharedData::dataProcessorAttrIdCounter = 1;

    std::list<std::string> SharedData::recentFilePaths;

    int SharedData::mainArgc;
    char **SharedData::mainArgv;

    ImFontAtlas *SharedData::fontAtlas;
    ImFontConfig SharedData::fontConfig;
    ImVec2 SharedData::windowPos;
    ImVec2 SharedData::windowSize;

    float SharedData::globalScale;
    float SharedData::fontScale;

    std::map<std::string, std::any> SharedData::sharedVariables;
}
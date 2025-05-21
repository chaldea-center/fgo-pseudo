void __fastcall RecommendSupportQuestSelectListMenu___ctor(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B4099B & 1) == 0 )
  {
    sub_1BDB878(&BaseMenu_TypeInfo, method);
    byte_4B4099B = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectListMenu__Init(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1BDBAD4(0LL, method);
  RecommendSupportQuestBoardListViewManager__Init(listViewManager, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall RecommendSupportQuestSelectListMenu__Open(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0
  UILabel_o *explanationLabel; // x20
  System_String_o *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B4099A & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&LocalizationManager_TypeInfo, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1BDB878(&StringLiteral_11030/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, v5);
    byte_4B4099A = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  RecommendSupportQuestBoardListViewManager__InitOpen(listViewManager, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11030/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, 0LL);
  listViewManager = (RecommendSupportQuestBoardListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !listViewManager
    || (v13 = LODWORD(listViewManager->fields.dragParentObject) + 1,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9, v10, v11),
        listViewManager = (RecommendSupportQuestBoardListViewManager_o *)System_String__Format(v8, v12, 0LL),
        !explanationLabel) )
  {
LABEL_9:
    sub_1BDBAD4(listViewManager, method);
  }
  UILabel__set_text(explanationLabel, (System_String_o *)listViewManager, 0LL);
  BaseMenu__Open((BaseMenu_o *)this, 0LL, 0LL);
}


void __fastcall RecommendSupportQuestSelectListMenu__SerializeFieldNotNullCheck(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        WarEntity_o *warEnt,
        int32_t parentId,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.warEntity = warEnt;
  v6 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)((char *)v6 + 16);
  sub_1BDB81C((CGThumbnailListItem_o *)v6, (int32_t)warEnt, v7, v8);
  LODWORD(v6->monitor) = parentId;
}


void __fastcall RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *this,
        QuestEntity_o *questEnt,
        WarEntity_o *warEnt,
        System_String_o *questMessage,
        int32_t questPhase,
        int32_t dispPriority,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v12; // x24
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.questEntity = questEnt;
  sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields, (int32_t)questEnt, v13, v14);
  v12->fields.warEntity = warEnt;
  sub_1BDB81C((CGThumbnailListItem_o *)&v12->fields.warEntity, (int32_t)warEnt, v15, v16);
  v12->fields.message = questMessage;
  v12 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)((char *)v12 + 32);
  sub_1BDB81C((CGThumbnailListItem_o *)v12, (int32_t)questMessage, v17, v18);
  LODWORD(v12->monitor) = questPhase;
  HIDWORD(v12->monitor) = dispPriority;
}
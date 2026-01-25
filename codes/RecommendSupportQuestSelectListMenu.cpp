void RecommendSupportQuestSelectListMenu___ctor(RecommendSupportQuestSelectListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CEA442 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseMenu_TypeInfo);
    byte_4CEA442 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void RecommendSupportQuestSelectListMenu__Init(RecommendSupportQuestSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C7BD40(0, method);
  RecommendSupportQuestBoardListViewManager__Init(listViewManager, method);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void RecommendSupportQuestSelectListMenu__Open(RecommendSupportQuestSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0
  UILabel_o *explanationLabel; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  int v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEA441 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_1C7BAE8(&StringLiteral_11092/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/);
    byte_4CEA441 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  RecommendSupportQuestBoardListViewManager__InitOpen(listViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_11092/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, 0);
  listViewManager = (RecommendSupportQuestBoardListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !listViewManager
    || (v7 = LODWORD(listViewManager->fields.dragParentObject) + 1,
        v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7),
        listViewManager = (RecommendSupportQuestBoardListViewManager_o *)System_String__Format(v5, v6, 0),
        !explanationLabel) )
  {
LABEL_9:
    sub_1C7BD40(listViewManager, method);
  }
  UILabel__set_text(explanationLabel, (System_String_o *)listViewManager, 0);
  BaseMenu__Open((BaseMenu_o *)this, 0, 0);
}


void RecommendSupportQuestSelectListMenu__SerializeFieldNotNullCheck(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo___ctor(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        WarEntity_o *warEnt,
        int32_t parentId,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.warEntity = warEnt;
  v6 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)((char *)v6 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v6, (int32_t)warEnt, v7, v8, v9, v10, v11, v12);
  LODWORD(v6->monitor) = parentId;
}


void RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12->fields.questEntity = questEnt;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields, (int32_t)questEnt, v13, v14, v15, v16, v17, v18);
  v12->fields.warEntity = warEnt;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v12->fields.warEntity, (int32_t)warEnt, v19, v20, v21, v22, v23, v24);
  v12->fields.message = questMessage;
  v12 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)((char *)v12 + 32);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v12, (int32_t)questMessage, v25, v26, v27, v28, v29, v30);
  LODWORD(v12->monitor) = questPhase;
  HIDWORD(v12->monitor) = dispPriority;
}
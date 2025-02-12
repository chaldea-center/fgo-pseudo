void __fastcall RecommendSupportQuestSelectListMenu___ctor(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC3C23 & 1) == 0 )
  {
    sub_1C1ABD4(&BaseMenu_TypeInfo, method);
    byte_4BC3C23 = 1;
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
    sub_1C1AE30(0LL, method);
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

  if ( (byte_4BC3C22 & 1) == 0 )
  {
    sub_1C1ABD4(&int_TypeInfo, method);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1C1ABD4(&StringLiteral_11229/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, v5);
    byte_4BC3C22 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  RecommendSupportQuestBoardListViewManager__InitOpen(listViewManager, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11229/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, 0LL);
  listViewManager = (RecommendSupportQuestBoardListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !listViewManager
    || (v13 = LODWORD(listViewManager->fields.dragParentObject) + 1,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9, v10, v11),
        listViewManager = (RecommendSupportQuestBoardListViewManager_o *)System_String__Format(v8, v12, 0LL),
        !explanationLabel) )
  {
LABEL_9:
    sub_1C1AE30(listViewManager, method);
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
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.warEntity = warEnt;
  v6 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)((char *)v6 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)v6, (int64_t)warEnt, v7, v8, v9, v10, v11, v12);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.questEntity = questEnt;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v12->fields, (int64_t)questEnt, v13, v14, v15, v16, v17, v18);
  v12->fields.warEntity = warEnt;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v12->fields.warEntity, (int64_t)warEnt, v19, v20, v21, v22, v23, v24);
  v12->fields.message = questMessage;
  v12 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)((char *)v12 + 32);
  sub_1C1AB78((PartyOrganizationUtility_o *)v12, (int64_t)questMessage, v25, v26, v27, v28, v29, v30);
  LODWORD(v12->monitor) = questPhase;
  HIDWORD(v12->monitor) = dispPriority;
}
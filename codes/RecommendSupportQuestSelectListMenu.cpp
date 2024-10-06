void __fastcall RecommendSupportQuestSelectListMenu___ctor(
        RecommendSupportQuestSelectListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A6C0F7 & 1) == 0 )
  {
    sub_1B90010(&BaseMenu_TypeInfo, method);
    byte_4A6C0F7 = 1;
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
    sub_1B9026C(0LL, method);
  RecommendSupportQuestBoardListViewManager__Init(listViewManager, method);
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

  if ( (byte_4A6C0F6 & 1) == 0 )
  {
    sub_1B90010(&int_TypeInfo, method);
    sub_1B90010(&LocalizationManager_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__, v4);
    sub_1B90010(&StringLiteral_11032/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, v5);
    byte_4A6C0F6 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  RecommendSupportQuestBoardListViewManager__InitOpen(listViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_11032/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, 0LL);
  listViewManager = (RecommendSupportQuestBoardListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !listViewManager
    || (v13 = LODWORD(listViewManager->fields.dragParentObject) + 1,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v9, v10, v11),
        listViewManager = (RecommendSupportQuestBoardListViewManager_o *)System_String__Format(v8, v12, 0LL),
        !explanationLabel) )
  {
LABEL_9:
    sub_1B9026C(listViewManager, method);
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
  int32_t v8; // w3

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.warEntity = warEnt;
  v6 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)((char *)v6 + 16);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v6, (int32_t)warEnt, v7, v8);
  LODWORD(v6->monitor) = parentId;
}


void __fastcall RecommendSupportQuestSelectListMenu_RecommendQuestInfo___ctor(
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *this,
        QuestEntity_o *questEnt,
        WarEntity_o *warEnt,
        System_String_o *questMessage,
        int32_t questPhase,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.questEntity = questEnt;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)questEnt, v11, v12);
  v10->fields.warEntity = warEnt;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10->fields.warEntity, (int32_t)warEnt, v13, v14);
  v10->fields.message = questMessage;
  v10 = (RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *)((char *)v10 + 32);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v10, (int32_t)questMessage, v15, v16);
  LODWORD(v10->monitor) = questPhase;
}
void RecommendSupportQuestSelectListMenu___ctor(RecommendSupportQuestSelectListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59343C0 & 1) == 0 )
  {
    sub_21FFC50(&BaseMenu_TypeInfo);
    byte_59343C0 = 1;
  }
  if ( !*(&BaseMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method, v2);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void RecommendSupportQuestSelectListMenu__Init(RecommendSupportQuestSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_21FFECC(0, method);
  RecommendSupportQuestBoardListViewManager__Init(listViewManager, method);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


void RecommendSupportQuestSelectListMenu__Open(RecommendSupportQuestSelectListMenu_o *this, const MethodInfo *method)
{
  RecommendSupportQuestBoardListViewManager_o *listViewManager; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *explanationLabel; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x0
  int v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59343BF & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    sub_21FFC50(&StringLiteral_11509/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/);
    byte_59343BF = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  RecommendSupportQuestBoardListViewManager__InitOpen(listViewManager, method);
  explanationLabel = this->fields.explanationLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_11509/*"RECOMMEND_SUPPORT_QUEST_SELECT_MENU_EXPLANATION"*/, 0);
  listViewManager = (RecommendSupportQuestBoardListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !listViewManager
    || (v9 = LODWORD(listViewManager->fields.dragParentObject) + 1,
        v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v9),
        listViewManager = (RecommendSupportQuestBoardListViewManager_o *)System_String__Format(v7, v8, 0),
        !explanationLabel) )
  {
LABEL_9:
    sub_21FFECC(listViewManager, method);
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
        bool isQusetParentFolder,
        const MethodInfo *method)
{
  RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  v8 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v8->fields.warEntity = warEnt;
  v8 = (RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *)((char *)v8 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v8, (int32_t)warEnt, v9, v10, v11, v12, v13, v14);
  LODWORD(v8->monitor) = parentId;
  LOBYTE(v8->fields.parentWarId) = isQusetParentFolder;
}


int64_t RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_ClosedAt(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedAt_k__BackingField;
}


bool RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_IsExpired(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t ClosedAt_k__BackingField; // x19

  if ( (byte_59343C2 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59343C2 = 1;
  }
  if ( RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_IsNoneExpire(this, method) )
    return 0;
  ClosedAt_k__BackingField = this->fields._ClosedAt_k__BackingField;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
  return ClosedAt_k__BackingField <= NetworkManager__getTime(0);
}


bool RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_IsNoneExpire(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t ClosedAt_k__BackingField; // x8
  BalanceConfig_c *v5; // x0

  if ( (byte_59343C1 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_59343C1 = 1;
  }
  ClosedAt_k__BackingField = this->fields._ClosedAt_k__BackingField;
  if ( !ClosedAt_k__BackingField )
    return 1;
  v5 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v5 = BalanceConfig_TypeInfo;
    ClosedAt_k__BackingField = this->fields._ClosedAt_k__BackingField;
  }
  return ClosedAt_k__BackingField >= v5->static_fields->NoneExpireTime;
}


bool RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__get_IsQusetParentFolder(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsQusetParentFolder_k__BackingField;
}


void RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__set_ClosedAt(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._ClosedAt_k__BackingField = value;
}


void RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo__set_IsQusetParentFolder(
        RecommendSupportQuestSelectListMenu_RecommendQuestFolderInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsQusetParentFolder_k__BackingField = value;
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  __int64 v31; // x0
  __int64 v32; // x1

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.questEntity = questEnt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)questEnt, v13, v14, v15, v16, v17, v18);
  this->fields.warEntity = warEnt;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.warEntity,
    (int32_t)warEnt,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  this->fields.message = questMessage;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.message,
    (int32_t)questMessage,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.phase = questPhase;
  this->fields.priority = dispPriority;
  if ( !questEnt )
    sub_21FFECC(v31, v32);
  this->fields._ClosedAt_k__BackingField = QuestEntity__getClosedAt(questEnt, 0);
}


int64_t RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_ClosedAt(
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ClosedAt_k__BackingField;
}


bool RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_IsExpired(
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t ClosedAt_k__BackingField; // x19

  if ( (byte_59343C4 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_59343C4 = 1;
  }
  if ( RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_IsNoneExpire(this, method) )
    return 0;
  ClosedAt_k__BackingField = this->fields._ClosedAt_k__BackingField;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
  return ClosedAt_k__BackingField <= NetworkManager__getTime(0);
}


bool RecommendSupportQuestSelectListMenu_RecommendQuestInfo__get_IsNoneExpire(
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BalanceConfig_c *v4; // x0

  if ( (byte_59343C3 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_59343C3 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method, v2);
    v4 = BalanceConfig_TypeInfo;
  }
  return this->fields._ClosedAt_k__BackingField >= v4->static_fields->NoneExpireTime;
}


void RecommendSupportQuestSelectListMenu_RecommendQuestInfo__set_ClosedAt(
        RecommendSupportQuestSelectListMenu_RecommendQuestInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._ClosedAt_k__BackingField = value;
}
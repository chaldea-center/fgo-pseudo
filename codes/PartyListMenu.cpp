void PartyListMenu___cctor(const MethodInfo *method)
{
  struct PartyListMenu_StaticFields *static_fields; // x8
  PartyListMenu_c *v2; // x8
  struct PartyListMenu_StaticFields *v3; // x9
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  int max_length; // w8
  struct System_Int32_array *v9; // x1
  struct PartyListMenu_StaticFields *v10; // x0
  struct PartyListMenu_StaticFields *v11; // x8
  const MethodInfo *v12; // x3
  int v13; // w8
  struct PartyListMenu_StaticFields *v14; // x0
  const MethodInfo *v15; // x3
  int v16; // w8
  struct PartyListMenu_StaticFields *v17; // x0
  const MethodInfo *v18; // x3
  int v19; // w8
  struct PartyListMenu_StaticFields *v20; // x0
  const MethodInfo *v21; // x3
  int v22; // w8
  struct PartyListMenu_StaticFields *v23; // x0
  const MethodInfo *v24; // x3
  int v25; // w8
  struct PartyListMenu_StaticFields *v26; // x0
  const MethodInfo *v27; // x3
  int v28; // w8
  struct PartyListMenu_StaticFields *v29; // x0
  const MethodInfo *v30; // x3
  int v31; // w8
  struct PartyListMenu_StaticFields *v32; // x0
  const MethodInfo *v33; // x3
  int v34; // w8
  struct PartyListMenu_StaticFields *v35; // x0
  const MethodInfo *v36; // x3
  int v37; // w8
  struct PartyListMenu_StaticFields *v38; // x0
  const MethodInfo *v39; // x3
  int v40; // w8
  struct PartyListMenu_StaticFields *v41; // x0
  const MethodInfo *v42; // x3
  int v43; // w9
  CGThumbnailListItem_o *v44; // x0
  const MethodInfo *v45; // x3
  int v46; // w8
  struct PartyListMenu_StaticFields *v47; // x0
  int32_t v48; // w1
  struct PartyListMenu_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  struct PartyListMenu_StaticFields *v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w1
  struct PartyListMenu_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3

  if ( (byte_4C22BF0 & 1) == 0 )
  {
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&PartyListMenu_TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&StringLiteral_17655/*"buttontxt_battlestart"*/);
    sub_1C2D490(&StringLiteral_17657/*"buttontxt_formation_05"*/);
    sub_1C2D490(&StringLiteral_17662/*"buttontxt_queststart"*/);
    byte_4C22BF0 = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v2 = PartyListMenu_TypeInfo;
  v3 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v3->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v3->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v2->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  max_length = v4->max_length;
  v9 = v4;
  if ( !max_length )
    goto LABEL_43;
  v4->m_Items[0] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 76;
  v10 = PartyListMenu_TypeInfo->static_fields;
  v10->LAYOUT_SIZE_X_TYPE_MIDDLE = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->LAYOUT_SIZE_X_TYPE_MIDDLE, (int32_t)v9, v6, v7);
  v11 = PartyListMenu_TypeInfo->static_fields;
  *(_OWORD *)&v11->LAYOUT_SIZE_X_TYPE_BIG = xmmword_C09440;
  v11->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v13 = v4->max_length;
  v9 = v4;
  if ( !v13 )
    goto LABEL_43;
  v4->m_Items[0] = 181;
  if ( v13 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 187;
  v14 = PartyListMenu_TypeInfo->static_fields;
  v14->LAYOUT_POS_X_HELP = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v14->LAYOUT_POS_X_HELP, (int32_t)v9, v6, v12);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v16 = v4->max_length;
  v9 = v4;
  if ( !v16 )
    goto LABEL_43;
  v4->m_Items[0] = 140;
  if ( v16 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 146;
  v17 = PartyListMenu_TypeInfo->static_fields;
  v17->LAYOUT_POS_X_QUESTINFO = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v17->LAYOUT_POS_X_QUESTINFO, (int32_t)v9, v6, v15);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v19 = v4->max_length;
  v9 = v4;
  if ( !v19 )
    goto LABEL_43;
  v4->m_Items[0] = -45;
  if ( v19 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -94;
  v20 = PartyListMenu_TypeInfo->static_fields;
  v20->LAYOUT_POS_X_AUTOSELL_1 = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v20->LAYOUT_POS_X_AUTOSELL_1, (int32_t)v9, v6, v18);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v22 = v4->max_length;
  v9 = v4;
  if ( !v22 )
    goto LABEL_43;
  v4->m_Items[0] = 55;
  if ( v22 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 2;
  v23 = PartyListMenu_TypeInfo->static_fields;
  v23->LAYOUT_POS_X_AUTOSELL_2 = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v23->LAYOUT_POS_X_AUTOSELL_2, (int32_t)v9, v6, v21);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v25 = v4->max_length;
  v9 = v4;
  if ( !v25 )
    goto LABEL_43;
  v4->m_Items[0] = -40;
  if ( v25 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -85;
  v26 = PartyListMenu_TypeInfo->static_fields;
  v26->LAYOUT_POS_X_EVENT = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v26->LAYOUT_POS_X_EVENT, (int32_t)v9, v6, v24);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v28 = v4->max_length;
  v9 = v4;
  if ( !v28 )
    goto LABEL_43;
  v4->m_Items[0] = -135;
  if ( v28 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -171;
  v29 = PartyListMenu_TypeInfo->static_fields;
  v29->LAYOUT_POS_X_INFOMATION = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v29->LAYOUT_POS_X_INFOMATION, (int32_t)v9, v6, v27);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v31 = v4->max_length;
  v9 = v4;
  if ( !v31 )
    goto LABEL_43;
  v4->m_Items[0] = -225;
  if ( v31 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -248;
  v32 = PartyListMenu_TypeInfo->static_fields;
  v32->LAYOUT_POS_X_REMOVE = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v32->LAYOUT_POS_X_REMOVE, (int32_t)v9, v6, v30);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v34 = v4->max_length;
  v9 = v4;
  if ( !v34 )
    goto LABEL_43;
  v4->m_Items[0] = -315;
  if ( v34 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -325;
  v35 = PartyListMenu_TypeInfo->static_fields;
  v35->LAYOUT_POS_X_SWAP = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v35->LAYOUT_POS_X_SWAP, (int32_t)v9, v6, v33);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v37 = v4->max_length;
  v9 = v4;
  if ( !v37 )
    goto LABEL_43;
  v4->m_Items[0] = 79;
  if ( v37 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -17;
  v38 = PartyListMenu_TypeInfo->static_fields;
  v38->LAYOUT_POS_X_HINT_1 = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v38->LAYOUT_POS_X_HINT_1, (int32_t)v9, v6, v36);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v40 = v4->max_length;
  v9 = v4;
  if ( !v40 )
    goto LABEL_43;
  v4->m_Items[0] = 79;
  if ( v40 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 79;
  v41 = PartyListMenu_TypeInfo->static_fields;
  v41->LAYOUT_POS_X_HINT_2 = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v41->LAYOUT_POS_X_HINT_2, (int32_t)v9, v6, v39);
  v4 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v43 = v4->max_length;
  v9 = v4;
  if ( !v43 || (v4->m_Items[0] = -36, v43 == 1) )
LABEL_43:
    sub_1C2D6F4(v4, v9, v6);
  v4->m_Items[1] = -36;
  v44 = (CGThumbnailListItem_o *)PartyListMenu_TypeInfo->static_fields;
  v44[1].klass = (CGThumbnailListItem_c *)v9;
  sub_1C2D434(v44 + 1, (int32_t)v9, v6, v42);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v4 = (struct System_Int32_array *)sub_1C2D538(float___TypeInfo, 2);
  if ( !v4 )
LABEL_44:
    sub_1C2D6EC(v4, v5);
  v46 = v4->max_length;
  v9 = v4;
  if ( !v46 )
    goto LABEL_43;
  v4->m_Items[0] = 1116209152;
  if ( v46 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 1115815936;
  v47 = PartyListMenu_TypeInfo->static_fields;
  v47->LAYOUT_FS_OFFSET_OLD = (struct System_Single_array *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&v47->LAYOUT_FS_OFFSET_OLD, (int32_t)v9, v6, v45);
  v48 = StringLiteral_17662/*"buttontxt_queststart"*/;
  v49 = PartyListMenu_TypeInfo->static_fields;
  v49->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17662/*"buttontxt_queststart"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v49->START_BUTTON_QUEST_SP, v48, v50, v51);
  v52 = StringLiteral_17655/*"buttontxt_battlestart"*/;
  v53 = PartyListMenu_TypeInfo->static_fields;
  v53->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17655/*"buttontxt_battlestart"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v53->START_BUTTON_BATTLE_SP, v52, v54, v55);
  v56 = StringLiteral_17657/*"buttontxt_formation_05"*/;
  v57 = PartyListMenu_TypeInfo->static_fields;
  v57->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17657/*"buttontxt_formation_05"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&v57->START_BUTTON_WAVE_BATTLE_SP, v56, v58, v59);
}


void PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C22BEF & 1) == 0 )
  {
    sub_1C2D490(&BaseMenu_TypeInfo);
    byte_4C22BEF = 1;
  }
  this->fields.isSelectItemEnable = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0);
}


void PartyListMenu__Awake(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void PartyListMenu__Callback(PartyListMenu_o *this, int32_t result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x21
  __int64 v7; // x1
  ListViewManager_o *partyListViewManager; // x0
  unsigned int CenterIndex; // w0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v7);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      (unsigned int)result,
      CenterIndex,
      0xFFFFFFFFLL,
      callbackFunc->fields.method);
  }
}


int32_t PartyListMenu__CheckEnableAutoOrganizationButton(
        PartyListMenu_o *this,
        QuestRestrictionInfo_o *restrictionInfo,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  int32_t DeckMemberMax; // w20

  if ( (byte_4C22BBA & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    byte_4C22BBA = 1;
  }
  if ( !restrictionInfo )
    return 0;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v4->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsMyServantNum(restrictionInfo, 0) )
  {
    DeckMemberMax = restrictionInfo->fields.myServantNumMax;
  }
  else if ( QuestRestrictionInfo__IsServantNum(restrictionInfo, 0) )
  {
    DeckMemberMax = restrictionInfo->fields.servantNumMax;
  }
  if ( DeckMemberMax <= 0 )
    return 3;
  else
    return 0;
}


void PartyListMenu__CheckQuestUseItemTutorial(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C22BDD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_OpenHintDialog__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C22BDD = 1;
  }
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(102, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu_OpenHintDialog__, 0);
    if ( !Instance )
      sub_1C2D6EC(v5, v6);
    PartyOrganizationUtility__OpenQuestUseItemDialogTutorial((PartyOrganizationUtility_o *)Instance, v4, 0);
  }
  else
  {
LABEL_9:
    PartyListMenu__OpenHintDialog(this, method);
  }
}


void PartyListMenu__Close(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Close_33837952(this, 0, v2);
}


void PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C22BE2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BE2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0);
}


void PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C22BE8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v3);
  CommonUI__CloseCenterEffectDetailDialog((CommonUI_o *)Instance, 0, 0);
}


void PartyListMenu__Close_33837952(PartyListMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4C22BBC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndCloseList__);
    sub_1C2D490(&Method_PartyListMenu_EndClose__);
    byte_4C22BBC = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0);
  if ( !partyListViewManager )
    sub_1C2D6EC(v7, v8);
  PartyListViewManager__SetMode_33915964(partyListViewManager, 1, v6, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v9, v10);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyListMenu__DispInfoPanel(PartyListMenu_o *this, bool disp, const MethodInfo *method)
{
  PartyListViewManager_o *infoPanel; // x0

  if ( disp )
  {
    infoPanel = (PartyListViewManager_o *)this->fields.infoPanel;
    if ( !infoPanel )
      goto LABEL_9;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)infoPanel, 0) && this->fields.state == 3 )
    {
      infoPanel = this->fields.partyListViewManager;
      if ( !infoPanel )
        goto LABEL_9;
      PartyListViewManager__RefreshDrawPartyInfo(infoPanel, 0);
    }
  }
  infoPanel = (PartyListViewManager_o *)this->fields.infoPanel;
  if ( !infoPanel )
LABEL_9:
    sub_1C2D6EC(infoPanel, disp);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0);
}


void PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C22BBE & 1) == 0 )
  {
    sub_1C2D490(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_OnSelectItem__);
    byte_4C22BBE = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v4 = (PartyListViewManager_CallbackFunc_o *)sub_1C2D6DC(PartyListViewManager_CallbackFunc_TypeInfo);
  PartyListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, (intptr_t)Method_PartyListMenu_OnSelectItem__, 0);
  if ( !partyListViewManager )
    sub_1C2D6EC(v5, v6);
  PartyListViewManager__SetMode(partyListViewManager, 2, v4, 0);
}


void PartyListMenu__EndClose(PartyListMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  PartyListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PartyListMenu__EndCloseList(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void PartyListMenu__EndCloseTutorialArrowChange(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x2

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton) == 0)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0)) == 0
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0),
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager,
        this->fields.state = 3,
        !tutorialMaskBase) )
  {
    sub_1C2D6EC(tutorialMaskBase, method);
  }
  PartyListViewManager__SetMode_33915868((PartyListViewManager_o *)tutorialMaskBase, 1, 0);
  PartyListMenu__Callback(this, 2, v4);
}


void PartyListMenu__EndCloseTutorialArrowEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x20

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0) )
  {
    sub_1C2D6EC(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v4, v5);
    ((void (__fastcall *)(intptr_t, __int64, _QWORD, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      17,
      0,
      1,
      callbackFunc->fields.method);
  }
}


void PartyListMenu__EndCloseTutorialArrowStart(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  partyListViewManager = this->fields.partyListViewManager;
  this->fields.state = 3;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0)) == 0 )
  {
    sub_1C2D6EC(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0);
  PartyListMenu__Callback(this, 8, v4);
}


void PartyListMenu__EndEnter(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))closeCallbackFunc->fields.invoke_impl)(
      closeCallbackFunc->fields.method_code,
      closeCallbackFunc->fields.method);
  }
}


void PartyListMenu__EndHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void PartyListMenu__EndOpen(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v4; // x21
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t tutorialMode; // w8
  Il2CppObject *v9; // x20
  UnityEngine_Vector2_o v10; // kr00_8
  Il2CppObject *Instance; // x20
  System_Action_o *v12; // x21
  float v13; // s3 OVERLAPPED
  float v14; // s1
  float v15; // s4
  float v16; // s0 OVERLAPPED
  int v17; // w8
  int v18; // w9
  PartyListViewManager_o *v19; // x20
  PartyListViewManager_CallbackFunc_o *v20; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  int v23; // s5
  int v24; // s6
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  Il2CppObject *v26; // x20
  UnityEngine_Vector2_o v27; // kr10_8
  Il2CppObject *v28; // x20
  System_String_o *v29; // x21
  System_Action_o *v30; // x22
  struct System_Action_o *openCallbackFunc; // x20
  UnityEngine_Vector2_o v32; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v33; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4C22BBB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1C2D490(&FSUtility_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndOpenTutorialArrow__);
    sub_1C2D490(&Method_PartyListMenu_OnSelectItem__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_13589/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/);
    byte_4C22BBB = 1;
  }
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v4 = (PartyListViewManager_CallbackFunc_o *)sub_1C2D6DC(PartyListViewManager_CallbackFunc_TypeInfo);
    PartyListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, (intptr_t)Method_PartyListMenu_OnSelectItem__, 0);
    if ( !partyListViewManager )
      goto LABEL_50;
    PartyListViewManager__SetMode(partyListViewManager, 2, v4, 0);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode == 3 )
    {
      tutorialMaskBase = this->fields.tutorialMaskBase;
      if ( tutorialMaskBase )
      {
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
        if ( tutorialMaskBase )
        {
          tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0);
          if ( tutorialMaskBase )
          {
            UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
            tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
            if ( tutorialMaskBase )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppClass **))tutorialMaskBase->klass[1]._1.nestedTypes)(
                tutorialMaskBase,
                0,
                0,
                tutorialMaskBase->klass[1]._1.implementedInterfaces);
              tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
              if ( tutorialMaskBase )
              {
                Component_object = UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)tutorialMaskBase,
                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0);
                if ( Instance )
                {
                  v14 = AddOffset.fields.y + -231.0;
                  v15 = AddOffset.fields.y + -291.0;
                  v13 = AddOffset.fields.x + 329.0;
                  v16 = AddOffset.fields.x + 422.0;
                  v17 = 1128136704;
                  v18 = 1119092736;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
LABEL_50:
      sub_1C2D6EC(tutorialMaskBase, method);
    }
    if ( tutorialMode != 2 )
    {
      if ( tutorialMode != 1 )
        goto LABEL_47;
      tutorialMaskBase = this->fields.tutorialMaskBase;
      if ( tutorialMaskBase )
      {
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
        if ( tutorialMaskBase )
        {
          tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0);
          if ( tutorialMaskBase )
          {
            UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
            tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
            if ( tutorialMaskBase )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppClass **))tutorialMaskBase->klass[1]._1.nestedTypes)(
                tutorialMaskBase,
                0,
                0,
                tutorialMaskBase->klass[1]._1.implementedInterfaces);
              tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
              if ( tutorialMaskBase )
              {
                v9 = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)tutorialMaskBase,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                v10 = FSUtility__GetAddOffset((FSOffset_o *)v9, 1, 0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
                System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0);
                if ( Instance )
                {
                  v13 = v10.fields.x + -200.0;
                  v14 = v10.fields.y + -255.0;
                  v15 = v10.fields.y + -295.0;
                  v16 = v10.fields.x + -120.0;
                  v17 = 1126170624;
                  v18 = 1117782016;
LABEL_29:
                  v23 = v17;
                  v24 = v18;
                  CommonUI__OpenTutorialArrowMark(
                    (CommonUI_o *)Instance,
                    *(UnityEngine_Vector2_o *)&v16,
                    0.0,
                    *(UnityEngine_Rect_o *)&v13,
                    v12,
                    0);
                  goto LABEL_47;
                }
              }
            }
          }
        }
      }
      goto LABEL_50;
    }
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_50;
    tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0);
    if ( !tutorialMaskBase )
      goto LABEL_50;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_50;
    tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
    tutorialMaskBase = (UnityEngine_GameObject_o *)PartyListViewManager__GetItem(
                                                     (PartyListViewManager_o *)tutorialMaskBase,
                                                     0,
                                                     0);
    if ( !tutorialPartyOrganizationChangeEmptyObject )
      goto LABEL_50;
    PartyOrganizationChangeObject__SetItem(
      tutorialPartyOrganizationChangeEmptyObject,
      (PartyListViewItem_o *)tutorialMaskBase,
      1,
      0,
      0,
      0);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_50;
    PartyListViewManager__SetMode_33915868((PartyListViewManager_o *)tutorialMaskBase, 3, 0);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_50;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)tutorialMaskBase,
                                                     0);
    if ( !tutorialMaskBase )
      goto LABEL_50;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                     (UnityEngine_Transform_o *)tutorialMaskBase,
                                                     0);
    if ( !tutorialMaskBase )
      goto LABEL_50;
    v26 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v27 = FSUtility__GetAddOffset((FSOffset_o *)v26, 1, 0);
    v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13589/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, 0);
    v30 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0);
    if ( !v28 )
      goto LABEL_50;
    v32.fields.x = v27.fields.x + -245.0;
    v32.fields.y = v27.fields.y + 70.0;
    v33.fields.m_XMin = v27.fields.x + -320.0;
    v33.fields.m_YMin = v27.fields.y + -205.0;
    v33.fields.m_Width = 150.0;
    v33.fields.m_Height = 380.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)v28,
      v29,
      v32,
      v33,
      0.0,
      (UnityEngine_Vector2_o)0xC220000042C80000LL,
      -1,
      v30,
      0);
  }
  else
  {
    if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      v19 = this->fields.partyListViewManager;
      v20 = (PartyListViewManager_CallbackFunc_o *)sub_1C2D6DC(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0);
      if ( v19 )
      {
        PartyListViewManager__SetMode(v19, 2, v20, 0);
        goto LABEL_47;
      }
      goto LABEL_50;
    }
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !tutorialMaskBase )
      goto LABEL_50;
    PartyListViewManager__SetMode_33915868((PartyListViewManager_o *)tutorialMaskBase, 1, 0);
  }
LABEL_47:
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))openCallbackFunc->fields.invoke_impl)(
      openCallbackFunc->fields.method_code,
      openCallbackFunc->fields.method);
  }
}


void PartyListMenu__EndOpenTutorialArrow(PartyListMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 7;
}


void PartyListMenu__Enter(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Enter_33838288(this, 0, v2);
}


void PartyListMenu__Enter_33838288(PartyListMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4C22BBD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndEnter__);
    byte_4C22BBD = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, callback);
  PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 5;
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyListMenu_EndEnter__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v8, 0);
}


void PartyListMenu__ExecuteOpenCallback(PartyListMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Action_o *hintDialogCloseCallbackFunc; // x19
  CGThumbnailListItem_o *p_hintDialogCloseCallbackFunc; // x0

  hintDialogCloseCallbackFunc = this->fields.hintDialogCloseCallbackFunc;
  if ( hintDialogCloseCallbackFunc )
  {
    p_hintDialogCloseCallbackFunc = (CGThumbnailListItem_o *)&this->fields.hintDialogCloseCallbackFunc;
    p_hintDialogCloseCallbackFunc->klass = 0;
    sub_1C2D434(p_hintDialogCloseCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))hintDialogCloseCallbackFunc->fields.invoke_impl)(
      hintDialogCloseCallbackFunc->fields.method_code,
      hintDialogCloseCallbackFunc->fields.method);
  }
}


float PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C22BAF & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C22BAF = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(68.0, 1, 0);
}


float PartyListMenu__FSOffsetX_33826640(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  if ( (byte_4C22BB0 & 1) == 0 )
  {
    sub_1C2D490(&FSUtility_TypeInfo);
    byte_4C22BB0 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(ver, 1, 0);
}


void PartyListMenu__ForceSetCenterItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, index);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0);
}


System_String_array *PartyListMenu__GetAssetNameList(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, method);
  return PartyListViewManager__GetAssetNameList(partyListViewManager, 0);
}


PartyListViewItem_o *PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 naturalAligment; // x11

  v2 = this;
  if ( (byte_4C22BB5 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C2D490(&PartyListViewItem_TypeInfo);
    byte_4C22BB5 = 1;
  }
  partyListViewManager = v2->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(this, method);
  centerItem = (PartyListViewItem_o *)partyListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0;
  naturalAligment = PartyListViewItem_TypeInfo->_2.naturalAligment;
  if ( centerItem->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    return 0;
  if ( (PartyListViewItem_c *)centerItem->klass->_2.typeHierarchy[naturalAligment - 1] == PartyListViewItem_TypeInfo )
    return centerItem;
  return 0;
}


PartyListViewItem_o *PartyListMenu__GetItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, index);
  return PartyListViewManager__GetItem(partyListViewManager, index, 0);
}


void PartyListMenu__Init(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C22BB6 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4C22BB6 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_9;
  PartyListViewManager__DestroyList(partyListViewManager, 0);
  partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !partyListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0);
  partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyChangeButton;
  if ( !partyListViewManager )
    goto LABEL_9;
  partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)partyListViewManager,
                                                     0);
  if ( !partyListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0);
  this->fields.setupInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, 0, v4, v5);
  this->fields.questRestrictionInfo = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v6, v7);
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  partyListViewManager = (PartyListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyListViewManager )
LABEL_9:
    sub_1C2D6EC(partyListViewManager, method);
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyListViewManager, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C22BE0 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22BE0 = 1;
  }
  entity = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v4);
  }
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          questRestrictionInfo->fields.questPhase,
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_12;
  return QuestPhaseEntity__IsActiveAssistSkill(entity, 0);
}


bool PartyListMenu__IsActiveCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *v6; // x8
  struct QuestRestrictionInfo_o *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C22BE4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C22BE4 = 1;
  }
  entity = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 || !Master_object )
      goto LABEL_16;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            Master_object,
            &entity,
            v6->fields.eventId,
            (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      LOBYTE(questRestrictionInfo) = 0;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_16;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__GetIgnoreCommandAssistQuestIds(
                                                                    (EventDetailEntity_o *)entity,
                                                                    0);
    if ( !Master_object )
    {
      LOBYTE(questRestrictionInfo) = 1;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    v7 = this->fields.questRestrictionInfo;
    if ( !v7 )
LABEL_16:
      sub_1C2D6EC(Master_object, v5);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_object,
                                      v7->fields.questId,
                                      (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


bool PartyListMenu__IsDisabledAutoOrganizationButton(PartyListMenu_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *autoOrganizationButton; // x8

  autoOrganizationButton = this->fields.autoOrganizationButton;
  if ( !autoOrganizationButton )
    sub_1C2D6EC(this, method);
  return autoOrganizationButton->fields.mState == 3;
}


bool PartyListMenu__IsDisplayAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v6; // x8
  Il2CppObject *v9; // [xsp+8h] [xbp-28h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C22BDF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C22BDF = 1;
  }
  entity = 0;
  v9 = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_22;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Instance,
         &entity,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_22;
    if ( QuestPhaseEntity__IsHideAssistConfButton(entity, 0) )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v6 = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_22:
    sub_1C2D6EC(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v9,
          v6->fields.eventId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    return 0;
  Instance = (DataManager_o *)v9;
  if ( !v9 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag((EventDetailEntity_o *)v9, 0x80000000000LL, 0);
}


bool PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCommandAssistMaster_o *v6; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C22BE3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    byte_4C22BE3 = 1;
  }
  entity = 0;
  if ( this->fields.questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_object )
      goto LABEL_19;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_19;
      v6 = Master_object;
      Master_object = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                      (EventDetailEntity_o *)entity,
                                                      0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v7 = this->fields.questRestrictionInfo;
        if ( v7 )
        {
          if ( v6 )
          {
            Master_object = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetValidEntityList(
                                                            v6,
                                                            v7->fields.eventId,
                                                            -1,
                                                            0);
            if ( Master_object )
              return LODWORD(Master_object->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_19:
        sub_1C2D6EC(Master_object, v4);
      }
    }
  }
  return 0;
}


bool PartyListMenu__IsDisplayLiveConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C22BE6 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_20122/*"icon_center_bg"*/);
    byte_4C22BE6 = 1;
  }
  entity = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_3387DE4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_20122/*"icon_center_bg"*/, 0);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
                                      Instance,
                                      Instance->klass[2]._1.generic_class),
        (v7 = this->fields.questRestrictionInfo) == 0)
    || (Instance = (DataManager_o *)entity) == 0 )
  {
LABEL_17:
    sub_1C2D6EC(Instance, v4);
  }
  return QuestEntity__HasFlag_42234640((QuestEntity_o *)entity, 0x100000000000000LL, v7->fields.questPhase, 0);
}


bool PartyListMenu__IsHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C22BE9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22BE9 = 1;
  }
  entity = 0;
  v11 = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v11, questId, questPhase, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)v11;
      if ( v11 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v11, 0);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
LABEL_17:
      sub_1C2D6EC(Master_object, v7);
    }
    return 0;
  }
  return 1;
}


bool PartyListMenu__IsHintDialogEveryTime(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestHintOverwriteMaster_o *Master_object; // x0
  __int64 v7; // x1
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  int32_t openType; // w8
  QuestPhaseEntity_o *v12; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C22BEA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C22BEA = 1;
  }
  entity = 0;
  v12 = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_27;
  CompleteCondEntity = QuestHintOverwriteMaster__GetCompleteCondEntity(Master_object, questId, questPhase, 0);
  if ( CompleteCondEntity )
  {
    openType = CompleteCondEntity->fields.openType;
    return openType == 0;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
LABEL_27:
    sub_1C2D6EC(Master_object, v7);
  Master_object = (QuestHintOverwriteMaster_o *)QuestHintMaster__TryGetEntity(
                                                  (QuestHintMaster_o *)Master_object,
                                                  &entity,
                                                  questId,
                                                  questPhase,
                                                  0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      openType = entity->fields.openType;
      return openType == 0;
    }
    goto LABEL_27;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v12, questId, questPhase, 0) )
    return 0;
  Master_object = (QuestHintOverwriteMaster_o *)v12;
  if ( !v12 )
    goto LABEL_27;
  return QuestPhaseEntity__getHintOpenType(v12, 0) == 0;
}


bool PartyListMenu__IsNeedHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  unsigned int v4; // w8
  bool result; // w0

  questRestrictionInfo = this->fields.questRestrictionInfo;
  result = questRestrictionInfo
        && EventTutorialMaster__IsTutorialDataExists(
             questRestrictionInfo->fields.eventId,
             45,
             questRestrictionInfo->fields.questId,
             questRestrictionInfo->fields.questPhase,
             0,
             0,
             1,
             0)
        || (v4 = this->fields.menuKind - 1, v4 > 6)
        || (v4 & 0x7F) == 1;
  return result;
}


bool PartyListMenu__IsUseEventLimitEquipUserWill(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, index);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0);
}


void PartyListMenu__Modify(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, method);
  PartyListViewManager__Modify(partyListViewManager, 0);
}


void PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v8; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4C22BE1 & 1) == 0 )
  {
    sub_1C2D490(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__);
    sub_1C2D490(&Method_PartyListMenu_OnClickAssistConfirmButton__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BE1 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickAssistConfirmButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickAssistConfirmButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v8 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v10 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1C2D6DC(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0),
          !v8) )
    {
      sub_1C2D6EC(Instance, v6);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v8, eventId, v10, 0);
  }
}


void PartyListMenu__OnClickAutoOrganization(PartyListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0
  int32_t CenterIndex; // w0
  int32_t v5; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4C22BCB & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickAutoOrganization__);
    byte_4C22BCB = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, method);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0);
    if ( (CenterIndex & 0x80000000) == 0 )
    {
      v5 = CenterIndex;
      v6 = Method_PartyListMenu_OnClickAutoOrganization__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickAutoOrganization__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      PartyListMenu__OpenAutoOrganizationConfirmDialog_33842032(this, v5, 0, v8);
    }
  }
}


void PartyListMenu__OnClickAutoSell(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x20
  DropAutoSellDlgComponent_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4C22BC8 & 1) == 0 )
  {
    sub_1C2D490(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_OnClickAutoSell__);
    sub_1C2D490(&Method_PartyListMenu__OnClickAutoSell_b__130_0__);
    byte_4C22BC8 = 1;
  }
  v3 = Method_PartyListMenu_OnClickAutoSell__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoSell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickAutoSell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v6 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_1C2D6DC(DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__130_0__,
    0);
  if ( !dropAutoSellDialog )
    sub_1C2D6EC(v7, v8);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v6, 0);
}


void PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C22BBF & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickCancel__);
    byte_4C22BBF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 0, v7);
  }
}


void PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v8; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  System_Action_o *v11; // x23

  if ( (byte_4C22BE7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_CloseCenterEffectDetailDialog__);
    sub_1C2D490(&Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BE7 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v8 = (CommonUI_o *)Instance,
          questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0),
          !v8) )
    {
      sub_1C2D6EC(Instance, v6);
    }
    CommonUI__OpenCenterEffectDetailDialog(v8, questId, questPhase, v11, 0);
  }
}


void PartyListMenu__OnClickChange(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v11; // x21

  if ( (byte_4C22BC0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndCloseTutorialArrowChange__);
    sub_1C2D490(&Method_PartyListMenu_OnClickChange__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BC0 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_17;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 1 )
      {
        v8 = Method_PartyListMenu_OnClickChange__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickChange__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C2D474(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowChange__, 0);
        if ( !Instance )
          goto LABEL_17;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v11, 0);
      }
    }
    else if ( state == 2 )
    {
      v5 = Method_PartyListMenu_OnClickChange__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickChange__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 2, v7);
        return;
      }
LABEL_17:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickCommandAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v8; // x19
  int32_t eventId; // w20
  Il2CppObject *v10; // x22
  System_Action_o *v11; // x21

  if ( (byte_4C22BE5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CommonUI_CloseCommandAssistConfirmDialog__);
    sub_1C2D490(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BE5 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v8 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
          System_Action___ctor(v11, v10, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0),
          !v8) )
    {
      sub_1C2D6EC(Instance, v6);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v8, eventId, v11, 0);
  }
}


void PartyListMenu__OnClickDecide(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_7;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C22BC5 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickDeckCopy__);
    byte_4C22BC5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickDeckCopy__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckCopy__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickDeckCopy__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 6, v6);
        return;
      }
LABEL_11:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickDeckName(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C22BC4 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickDeckName__);
    byte_4C22BC4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
      LOBYTE(questRestrictionInfo) = questRestrictionInfo->fields.eventDeckNum > 0;
    if ( ((unsigned __int8)questRestrictionInfo & 1) == 0 && (unsigned int)(this->fields.menuKind - 1) >= 7 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      if ( !partyListViewManager )
        goto LABEL_15;
      if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
      {
        v5 = Method_PartyListMenu_OnClickDeckName__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckName__ + 83) & 2) != 0 )
          v5 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickDeckName__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
        partyListViewManager = this->fields.partyListViewManager;
        this->fields.state = 3;
        if ( partyListViewManager )
        {
          PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
          PartyListMenu__Callback(this, 5, v7);
          return;
        }
LABEL_15:
        sub_1C2D6EC(partyListViewManager, method);
      }
    }
  }
}


void PartyListMenu__OnClickEdit(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C22BC6 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickEdit__);
    byte_4C22BC6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickEdit__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickEdit__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickEdit__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 7, v6);
        return;
      }
LABEL_11:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C22BED & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__);
    byte_4C22BED = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__, 0);
  if ( !friendshipUpItemSwitchComponent )
    sub_1C2D6EC(v5, v6);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v4, 0);
}


void PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v7; // x1
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t eventId; // w20
  System_Action_o *v10; // x21
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t menuKind; // w8
  Il2CppObject *Instance; // x19
  __int64 v14; // x2
  int v15; // w8

  if ( (byte_4C22BDB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TutorialFlag_ImageId___TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndHelp__);
    sub_1C2D490(&Method_PartyListMenu_OnClickHelp__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BDB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( questRestrictionInfo )
    {
      IsTutorialDataExists = EventTutorialMaster__IsTutorialDataExists(
                               questRestrictionInfo->fields.eventId,
                               45,
                               questRestrictionInfo->fields.questId,
                               questRestrictionInfo->fields.questPhase,
                               0,
                               0,
                               this->fields.menuKind != 9,
                               0);
      if ( (IsTutorialDataExists & 1) != 0 )
      {
        v8 = this->fields.questRestrictionInfo;
        if ( v8 )
        {
          eventId = v8->fields.eventId;
          v10 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0);
          v11 = this->fields.questRestrictionInfo;
          if ( v11 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_41941800(
              eventId,
              45,
              v10,
              v11->fields.questId,
              v11->fields.questPhase,
              0,
              0,
              0);
            return;
          }
        }
LABEL_24:
        sub_1C2D6EC(IsTutorialDataExists, v7);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 1);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v7 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( *(_DWORD *)(IsTutorialDataExists + 24) )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 644;
          if ( !Instance )
            goto LABEL_24;
          goto LABEL_23;
        }
      }
      else
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 2);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v15 = *(_DWORD *)(IsTutorialDataExists + 24);
        v7 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v15 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v15 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_24;
LABEL_23:
            CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v7, -1, 0, 0, 0, 0);
            return;
          }
        }
      }
      sub_1C2D6F4(IsTutorialDataExists, v7, v14);
    }
  }
}


void PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C22BEB & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickHintDialogButton__);
    byte_4C22BEB = 1;
  }
  v3 = Method_PartyListMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  PartyListMenu__ShowHintDialogButton(this, v5);
}


void PartyListMenu__OnClickInfomation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C22BCA & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickInfomation__);
    byte_4C22BCA = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickInfomation__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickInfomation__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickInfomation__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 11, v6);
        return;
      }
LABEL_11:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickLimitMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, method);
    PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C22BC1 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickMasterFormation__);
    byte_4C22BC1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 9, v7);
  }
}


void PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C22BCD & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickPointEvent__);
    byte_4C22BCD = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickPointEvent__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickPointEvent__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickPointEvent__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 12, v6);
        return;
      }
LABEL_11:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C22BC9 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickQuestInfo__);
    byte_4C22BC9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 18, v7);
  }
}


void PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C22BC3 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickRemove__);
    byte_4C22BC3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickRemove__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickRemove__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickRemove__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 4, v6);
        return;
      }
LABEL_11:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickStart(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_4C22BC7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndCloseTutorialArrowStart__);
    sub_1C2D490(&Method_PartyListMenu_OnClickStart__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BC7 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_15;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 3 )
      {
        v6 = Method_PartyListMenu_OnClickStart__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickStart__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickStart__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowStart__, 0);
        if ( !Instance )
          goto LABEL_15;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v9, 0);
      }
    }
    else if ( state == 2 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 8, v5);
        return;
      }
LABEL_15:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C22BC2 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickSwap__);
    byte_4C22BC2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickSwap__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickSwap__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickSwap__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 3, v6);
        return;
      }
LABEL_11:
      sub_1C2D6EC(partyListViewManager, method);
    }
  }
}


void PartyListMenu__OnClickTabParty(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD9 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty__);
    byte_4C22BD9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyListMenu_OnClickTabParty__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v7);
    PartyListViewManager__MoveCenterItem(partyListViewManager, index, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BCF & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty1__);
    byte_4C22BCF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty1__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD8 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty10__);
    byte_4C22BD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty10__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty10__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty10__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD0 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty2__);
    byte_4C22BD0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty2__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD1 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty3__);
    byte_4C22BD1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty3__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD2 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty4__);
    byte_4C22BD2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty4__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty4__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty4__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD3 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty5__);
    byte_4C22BD3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty5__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty5__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty5__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD4 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty6__);
    byte_4C22BD4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty6__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty6__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty6__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD5 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty7__);
    byte_4C22BD5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty7__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty7__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty7__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD6 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty8__);
    byte_4C22BD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty8__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty8__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty8__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C22BD7 & 1) == 0 )
  {
    sub_1C2D490(&Method_PartyListMenu_OnClickTabParty9__);
    byte_4C22BD7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty9__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty9__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnClickTabParty9__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C2D6EC(0, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0);
  }
}


void PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C22BDA & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C22BDA = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0);
    if ( !Instance )
      sub_1C2D6EC(v5, v6);
    CommonUI__CloseTutorialNotificationDialogArrow_31193232((CommonUI_o *)Instance, v4, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListMenu__OnSelectItem(PartyListMenu_o *this, int32_t kind, int32_t n, int32_t m, const MethodInfo *method)
{
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x23
  unsigned int v10; // w22
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4C22BCE & 1) == 0 )
  {
    sub_1C2D490(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_OnSelectItem__);
    byte_4C22BCE = 1;
  }
  if ( this->fields.state == 2 && this->fields.isSelectItemEnable )
  {
    if ( (unsigned int)(kind - 1) >= 4 )
    {
      v11 = Method_PartyListMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnSelectItem__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C2D4A8(Method_PartyListMenu_OnSelectItem__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C2D474(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      v14 = (PartyListViewManager_CallbackFunc_o *)sub_1C2D6DC(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0);
      if ( !partyListViewManager )
        sub_1C2D6EC(v15, v16);
      PartyListViewManager__SetMode(partyListViewManager, 2, v14, 0);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v10 = dword_C0A480[kind - 1];
        this->fields.callbackFunc = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, n, *(const MethodInfo **)&m);
        ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
          callbackFunc->fields.method_code,
          v10,
          (unsigned int)n,
          (unsigned int)m,
          callbackFunc->fields.method);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void PartyListMenu__Open(
        PartyListMenu_o *this,
        int32_t menuKind,
        int32_t tutorialMode,
        PartyListViewItem_array *baseDeckItemList,
        int32_t partyNum,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        PartyListMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        int32_t friendBonusVal,
        bool isRetry,
        bool isOpenCallbackAfterCloseHintDialog,
        bool isOpenHelp,
        const MethodInfo *method)
{
  const MethodInfo *v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Action_o **v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Action_o *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Action_o **p_openCallbackFunc; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v49; // x1
  _BOOL4 v50; // w8
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Action_o **v55; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Action_o *v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x1
  _BOOL4 v64; // w22
  struct System_Int32_array *eventIdList; // x8
  __int64 v66; // x9
  int32_t v67; // w24
  PartyListMenu_o *v68; // x0
  const MethodInfo *v69; // x4
  PartyListMenu_c *v70; // x8
  UnityEngine_GameObject_o *v71; // x25
  UnityEngine_GameObject_o *v72; // x24
  const MethodInfo *v73; // x1
  PartyListMenu_o *transform; // x0
  const MethodInfo *v75; // x1
  UnityEngine_Transform_o *v76; // x24
  UnityEngine_Vector2_o v77; // kr08_8 OVERLAPPED
  UnityEngine_GameObject_o *v78; // x24
  const MethodInfo *v79; // x1
  int v80; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v83; // x1
  char v84; // w24
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  UISprite_o *v88; // x24
  Il2CppObject *v89; // x0
  System_String_o *v90; // x25
  const MethodInfo *v91; // x1
  System_String_o *v92; // x1
  const MethodInfo *v93; // x1
  struct UILabel_o *assistCanNotLabel; // x24
  char v95; // w24
  int32_t v96; // w24
  System_Action_o *v97; // x25
  const MethodInfo *v98; // x1
  System_String_o *v99; // x1
  const MethodInfo *v100; // x1
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v102; // w24
  struct QuestRestrictionInfo_o *v103; // x8
  int32_t questPhase; // w23
  int32_t v105; // w24
  struct QuestRestrictionInfo_o *v106; // x8
  int32_t v107; // w23
  int32_t v108; // w24
  struct QuestRestrictionInfo_o *v109; // x8
  char v110; // w23
  int32_t v111; // w24
  int32_t v112; // w25
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  __int64 v117; // x9
  int32_t v118; // w20
  PartyListMenu_o *v119; // x0
  const MethodInfo *v120; // x4
  PartyListMenu_c *v121; // x8
  UnityEngine_GameObject_o *v122; // x21
  BalanceConfig_c *v123; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  System_Action_o *v126; // x20
  int32_t eventId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v129; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v130; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v131; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v132; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C22BB7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_EndOpen__);
    sub_1C2D490(&Method_PartyListMenu__Open_b__103_0__);
    sub_1C2D490(&PartyListMenu_TypeInfo);
    sub_1C2D490(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C2D490(&QuestInformationComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_5516/*"EVENT_ASSIST_SKILL_DO_NOT"*/);
    sub_1C2D490(&StringLiteral_5547/*"EVENT_COMMAND_ASSIST_DO_NOT"*/);
    sub_1C2D490(&StringLiteral_19259/*"event_skill_btn_{0}"*/);
    sub_1C2D490(&StringLiteral_17659/*"buttontxt_formation_20"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22BB7 = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v38, v39);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v40, v41);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v43, v44);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v47);
      PartyListMenu__SetButtonState(this, v49);
      gameObject = this->fields.questStartBase;
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind != 8, 0);
      gameObject = this->fields.partySelectBase;
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind == 8, 0);
      if ( setupInfo )
      {
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        if ( *(_BYTE *)(gameObject[7].fields.m_CachedPtr + 1153) )
        {
          v50 = 1;
        }
        else
        {
          eventIdList = setupInfo->fields.eventIdList;
          if ( !eventIdList )
            goto LABEL_162;
          v50 = LODWORD(eventIdList->max_length) != 0;
        }
        v64 = v50;
      }
      else
      {
        v64 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_162;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, v64, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_162;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v66 = 48;
      if ( v64 )
        v66 = 44;
      if ( !this->fields.autoSellButton )
        goto LABEL_162;
      v67 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + v66);
      v68 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.autoSellButton,
                                 0);
      v70 = PartyListMenu_TypeInfo;
      v71 = (UnityEngine_GameObject_o *)v68;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v70 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v68, v71, v70->static_fields->LAYOUT_FS_OFFSET, v67, 0, v69);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_162;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, !IsHintDialog || !v64, 0);
      if ( this->fields.menuKind == 8 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_162;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_162;
        v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v73);
        if ( !v72 )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive(v72, (unsigned __int8)gameObject & 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_162;
        transform = (PartyListMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        v76 = (UnityEngine_Transform_o *)transform;
        v77 = v64
            ? PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(transform, v75)
            : PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(transform, v75);
        if ( !v76 )
          goto LABEL_162;
        v80 = 0;
        UnityEngine_Transform__set_localPosition(v76, *(UnityEngine_Vector3_o *)&v77.fields.x, 0);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_162;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_162;
        v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v79);
        if ( !v78 )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive(v78, (unsigned __int8)gameObject & 1, 0);
      }
      if ( this->fields.menuKind == 8 || !*p_questRestrictionInfo )
      {
        IsDisplayQuestInformation = 0;
      }
      else
      {
        questId = (*p_questRestrictionInfo)->fields.questId;
        if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyQuestInfoIconButton;
      if ( !gameObject )
        goto LABEL_162;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, IsDisplayQuestInformation, 0);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v83);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_162;
      v84 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.assistConfirmButton, 0);
      if ( !gameObject )
        goto LABEL_162;
      if ( (v84 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_162;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_162;
        v88 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v85, v86, v87);
        v90 = System_String__Format((System_String_o *)StringLiteral_19259/*"event_skill_btn_{0}"*/, v89, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v88, v90, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v91);
        if ( !this->fields.assistConfirmButton )
          goto LABEL_162;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v129.fields.r = 1.0;
          v129.fields.g = 1.0;
          v129.fields.b = 1.0;
          v129.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v129, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_162;
          v92 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v130.fields.r = 0.5;
          v130.fields.g = 0.5;
          v130.fields.b = 0.5;
          v130.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v130, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          assistCanNotLabel = this->fields.assistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5516/*"EVENT_ASSIST_SKILL_DO_NOT"*/, 0);
          if ( !assistCanNotLabel )
            goto LABEL_162;
          v92 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v92, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_162;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v93);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_162;
      v95 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0);
      if ( !gameObject )
        goto LABEL_162;
      if ( (v95 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        if ( !*p_questRestrictionInfo )
          goto LABEL_162;
        v96 = (*p_questRestrictionInfo)->fields.eventId;
        v97 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v97, (Il2CppObject *)this, Method_PartyListMenu__Open_b__103_0__, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI_40385076(v96, v97, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v98);
        if ( !this->fields.commandAssistConfirmButton )
          goto LABEL_162;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 1, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v131.fields.r = 1.0;
          v131.fields.g = 1.0;
          v131.fields.b = 1.0;
          v131.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v131, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_162;
          v99 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v132.fields.r = 0.5;
          v132.fields.g = 0.5;
          v132.fields.b = 0.5;
          v132.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v132, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          if ( !gameObject )
            goto LABEL_162;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          commandAssistCanNotLabel = this->fields.commandAssistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5547/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, 0);
          if ( !commandAssistCanNotLabel )
            goto LABEL_162;
          v99 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v99, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_162;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v100);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_162;
      v102 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.centerEffectLabelSp, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, v102 & 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_162;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_162;
      if ( IsHintDialog )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        v103 = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_162;
        v105 = v103->fields.questId;
        questPhase = v103->fields.questPhase;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                   v105,
                                                   questPhase,
                                                   0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v106 = *p_questRestrictionInfo;
          if ( !*p_questRestrictionInfo )
            goto LABEL_162;
          v108 = v106->fields.questId;
          v107 = v106->fields.questPhase;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          if ( !QuestHintDialogOpenManager__IsQuestHintOpen(v108, v107, 0) )
          {
            gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v46);
            v109 = this->fields.questRestrictionInfo;
            if ( !v109 )
              goto LABEL_162;
            v110 = (char)gameObject;
            v112 = v109->fields.questId;
            v111 = v109->fields.questPhase;
            if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            QuestHintDialogOpenManager__SetTemporarilyInfo(v112, v111, 0);
            if ( (v110 & 1) == 0 )
            {
              if ( !*p_questRestrictionInfo )
                goto LABEL_162;
              QuestHintDialogOpenManager__SetQuestInfo(
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                0);
              QuestHintDialogOpenManager__WriteData(0);
            }
            if ( !isRetry )
            {
              this->fields.isHintDialogOpenFlag = 1;
              if ( isOpenCallbackAfterCloseHintDialog )
              {
                v46 = (MethodInfo *)*p_openCallbackFunc;
                if ( *p_openCallbackFunc )
                {
                  this->fields.hintDialogCloseCallbackFunc = (struct System_Action_o *)v46;
                  sub_1C2D434(
                    (CGThumbnailListItem_o *)&this->fields.hintDialogCloseCallbackFunc,
                    (int32_t)v46,
                    v113,
                    v114);
                  this->fields.openCallbackFunc = 0;
                  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v115, v116);
                }
              }
            }
          }
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v117 = 56;
      if ( v64 )
        v117 = 52;
      if ( !this->fields.hintDialogButton )
        goto LABEL_162;
      v118 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + v117);
      v119 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                  0);
      v121 = PartyListMenu_TypeInfo;
      v122 = (UnityEngine_GameObject_o *)v119;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v121 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v119, v122, v121->static_fields->LAYOUT_FS_OFFSET, v118, 0, v120);
      v123 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v123 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v123->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_40102980(ClassBoardReleaseQuestId, -1, 0, 0) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(classInfoSpriteOrganization, (System_String_o *)StringLiteral_17659/*"buttontxt_formation_20"*/, 0);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17659/*"buttontxt_formation_20"*/,
          0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_162:
        sub_1C2D6EC(gameObject, v46);
      PartyListViewManager__SetMode_33915868((PartyListViewManager_o *)gameObject, 1, 0);
      this->fields.state = 1;
      v126 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v126, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v126, 0);
      return;
    case 2:
    case 3:
    case 7:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v21);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v26, v27);
      v28 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v29, v30);
      if ( isOpenCallbackAfterCloseHintDialog )
      {
        v31 = *v28;
        if ( *v28 )
        {
          this->fields.hintDialogCloseCallbackFunc = v31;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.hintDialogCloseCallbackFunc, (int32_t)v31, v32, v33);
          this->fields.openCallbackFunc = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v34, v35);
        }
      }
      PartyListMenu__EndOpen(this, (const MethodInfo *)v31);
      if ( !this->fields.tutorialMode && isOpenHelp )
        PartyListMenu__OpenHelp(this, v36);
      return;
    case 5:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v21);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v51, v52);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v53, v54);
      v55 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v56, v57);
      if ( isOpenCallbackAfterCloseHintDialog )
      {
        v60 = *v55;
        if ( *v55 )
        {
          this->fields.hintDialogCloseCallbackFunc = v60;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.hintDialogCloseCallbackFunc, (int32_t)v60, v58, v59);
          this->fields.openCallbackFunc = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v61, v62);
        }
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_162;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_162;
      PartyListViewManager__SetMode_33915868((PartyListViewManager_o *)gameObject, 1, 0);
      PartyListMenu__EndOpen(this, v63);
      return;
    default:
      return;
  }
}


void PartyListMenu__OpenAutoOrganizationConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0
  unsigned int CenterIndex; // w0
  const MethodInfo *v5; // x3

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_7;
  CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0);
  method = (const MethodInfo *)CenterIndex;
  if ( (CenterIndex & 0x80000000) != 0 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( partyListViewManager )
    {
      ListViewManager__ScreenUpdate(partyListViewManager, 0);
      partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
      if ( partyListViewManager )
      {
        LODWORD(method) = ListViewManager__GetCenterIndex(partyListViewManager, 0);
        goto LABEL_6;
      }
    }
LABEL_7:
    sub_1C2D6EC(partyListViewManager, method);
  }
LABEL_6:
  PartyListMenu__OpenAutoOrganizationConfirmDialog_33842032(this, (int32_t)method, 1, v5);
}


void PartyListMenu__OpenAutoOrganizationConfirmDialog_33842032(
        PartyListMenu_o *this,
        int32_t centerIndex,
        bool isAutoOpen,
        const MethodInfo *method)
{
  __int64 v7; // x20
  PartyListViewManager_o *partyListViewManager; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t eventId; // w22
  struct QuestRestrictionInfo_o *v16; // x8
  struct PartyOrganizationAutoOrganizationConfirmDialog_o **p_autoOrganizationConfirmDialogBuffExists; // x8
  char v18; // w23
  bool v19; // w24
  struct PartyOrganizationAutoOrganizationConfirmDialog_o *v20; // x1
  Il2CppObject *autoOrganizationConfirmDialogPrefabForAutoOpen; // x21
  UnityEngine_Transform_o *parent; // x26
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  PartyOrganizationAutoOrganizationConfirmDialog_o *v26; // x21
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v27; // x25

  if ( (byte_4C22BCC & 1) == 0 )
  {
    sub_1C2D490(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu___c__DisplayClass136_0__OpenAutoOrganizationConfirmDialog_b__0__);
    sub_1C2D490(&PartyListMenu___c__DisplayClass136_0_TypeInfo);
    byte_4C22BCC = 1;
  }
  v7 = sub_1C2D6DC(PartyListMenu___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_22;
  PartyListViewManager__ForceJumpItem(partyListViewManager, centerIndex, 0);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    eventId = questRestrictionInfo->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    partyListViewManager = (PartyListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    v16 = this->fields.questRestrictionInfo;
    if ( !v16 || !partyListViewManager )
      goto LABEL_22;
    if ( QuestAutoOrganizationAdjustMaster__IsExistEntity(
           (QuestAutoOrganizationAdjustMaster_o *)partyListViewManager,
           v16->fields.questId,
           v16->fields.questPhase,
           0) )
    {
      p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialogBuffExists;
      v18 = 1;
      v19 = 1;
      goto LABEL_14;
    }
  }
  else
  {
    eventId = 0;
  }
  v19 = 0;
  v18 = questRestrictionInfo != 0;
  p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialog;
LABEL_14:
  v20 = *p_autoOrganizationConfirmDialogBuffExists;
  *(_QWORD *)(v7 + 16) = *p_autoOrganizationConfirmDialogBuffExists;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v20, v12, v13);
  *(_BYTE *)(v7 + 24) = 0;
  if ( !isAutoOpen )
    goto LABEL_20;
  partyListViewManager = (PartyListViewManager_o *)this->fields.autoOrganizationConfirmDialog;
  if ( !partyListViewManager
    || (autoOrganizationConfirmDialogPrefabForAutoOpen = (Il2CppObject *)this->fields.autoOrganizationConfirmDialogPrefabForAutoOpen,
        (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)partyListViewManager,
                                                            0)) == 0) )
  {
LABEL_22:
    sub_1C2D6EC(partyListViewManager, v9);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)partyListViewManager, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v23 = UnityEngine_Object__Instantiate_object__51752420(
          autoOrganizationConfirmDialogPrefabForAutoOpen,
          parent,
          (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
  *(_QWORD *)(v7 + 16) = v23;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v23, v24, v25);
  *(_BYTE *)(v7 + 24) = 1;
LABEL_20:
  v26 = *(PartyOrganizationAutoOrganizationConfirmDialog_o **)(v7 + 16);
  v27 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_1C2D6DC(PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
    v27,
    (Il2CppObject *)v7,
    Method_PartyListMenu___c__DisplayClass136_0__OpenAutoOrganizationConfirmDialog_b__0__,
    0);
  if ( !v26 )
    goto LABEL_22;
  PartyOrganizationAutoOrganizationConfirmDialog__Open(v26, eventId, v18, v19, isAutoOpen, v27, 0);
}


void PartyListMenu__OpenHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  struct QuestRestrictionInfo_o *v5; // x8
  int32_t eventId; // w20
  System_Action_o *v7; // x21
  struct QuestRestrictionInfo_o *v8; // x8
  int32_t menuKind; // w8
  Il2CppObject *Instance; // x20
  __int64 v11; // x2
  TutorialFlag_ImageId_array *v12; // x21
  System_Action_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x1
  int v16; // w8

  if ( (byte_4C22BDC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&TutorialFlag_ImageId___TypeInfo);
    sub_1C2D490(&Method_PartyListMenu_CheckQuestUseItemTutorial__);
    sub_1C2D490(&Method_PartyListMenu_OpenHintDialog__);
    sub_1C2D490(&Method_PartyListMenu__OpenHelp_b__155_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    byte_4C22BDC = 1;
  }
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    IsTutorialDataExists = EventTutorialMaster__IsTutorialDataExists(
                             questRestrictionInfo->fields.eventId,
                             45,
                             questRestrictionInfo->fields.questId,
                             questRestrictionInfo->fields.questPhase,
                             0,
                             0,
                             0,
                             0);
    if ( (IsTutorialDataExists & 1) != 0 )
    {
      v5 = this->fields.questRestrictionInfo;
      if ( v5 )
      {
        eventId = v5->fields.eventId;
        v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyListMenu__OpenHelp_b__155_0__, 0);
        v8 = this->fields.questRestrictionInfo;
        if ( v8 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v7, v8->fields.questId, v8->fields.questPhase, 0, 0, 0);
          return;
        }
      }
LABEL_29:
      sub_1C2D6EC(IsTutorialDataExists, method);
    }
  }
  menuKind = this->fields.menuKind;
  if ( (unsigned int)(menuKind - 3) < 5 || menuKind == 1 )
    goto LABEL_9;
  if ( menuKind != 2 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40206092(202, 0) )
    {
      PartyListMenu__CheckQuestUseItemTutorial(this, v15);
      return;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    IsTutorialDataExists = sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 2);
    if ( !IsTutorialDataExists )
      goto LABEL_29;
    v16 = *(_DWORD *)(IsTutorialDataExists + 24);
    v12 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
    if ( v16 )
    {
      *(_DWORD *)(IsTutorialDataExists + 32) = 37;
      if ( v16 != 1 )
      {
        *(_DWORD *)(IsTutorialDataExists + 36) = 38;
        v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_CheckQuestUseItemTutorial__, 0);
        if ( !Instance )
          goto LABEL_29;
        v14 = 202;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1C2D6F4(IsTutorialDataExists, method, v11);
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40206092(205, 0) )
  {
LABEL_9:
    PartyListMenu__OpenHintDialog(this, method);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  IsTutorialDataExists = sub_1C2D538(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !IsTutorialDataExists )
    goto LABEL_29;
  v12 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
  if ( !*(_DWORD *)(IsTutorialDataExists + 24) )
    goto LABEL_30;
  *(_DWORD *)(IsTutorialDataExists + 32) = 644;
  v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_OpenHintDialog__, 0);
  if ( !Instance )
    goto LABEL_29;
  v14 = 205;
LABEL_28:
  CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v12, v14, v13, 0, 0, 0);
}


void PartyListMenu__OpenHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( this->fields.isHintDialogOpenFlag )
  {
    this->fields.isHintDialogOpenFlag = 0;
    PartyListMenu__ShowHintDialogButton(this, method);
  }
  else
  {
    PartyListMenu__ExecuteOpenCallback(this, method);
  }
}


void PartyListMenu__SetActiveGrandEffect(PartyListMenu_o *this, bool flag, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, flag);
  PartyListViewManager__SetActiveGrandEffect(partyListViewManager, flag, 0);
}


void PartyListMenu__SetButtonPosAndSize(
        PartyListMenu_o *this,
        UnityEngine_GameObject_o *buttonObj,
        float offset,
        int32_t posX,
        int32_t sizeX,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x21
  Il2CppObject *v11; // x20
  PartyListMenu_o *transform; // x24
  const MethodInfo *v13; // x1
  float v14; // s8
  float y; // s9
  float v16; // s0
  float v17; // s1
  float v18; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C22BB8 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (PartyListMenu_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C22BB8 = 1;
  }
  if ( !buttonObj )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = UnityEngine_GameObject__GetComponent_object_(
          buttonObj,
          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0);
  v14 = PartyListMenu__FSOffsetX_33826640(transform, offset, v13);
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0);
  if ( !this )
    goto LABEL_19;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  y = localPosition.fields.y;
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0);
  if ( !this )
    goto LABEL_19;
  v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  if ( !transform )
    goto LABEL_19;
  v16 = (float)posX - v14;
  v17 = y;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v20, 0);
  if ( sizeX )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      UIWidget__set_width((UIWidget_o *)Component_object, sizeX, 0);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v11 )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v11, 0);
        v18 = size.fields.y;
        v22 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v11, 0);
        v22.fields.x = (float)sizeX;
        v22.fields.y = v18;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v11, v22, 0);
        return;
      }
LABEL_19:
      sub_1C2D6EC(this, buttonObj);
    }
  }
}


void PartyListMenu__SetButtonState(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListMenu_o *v3; // x19
  int32_t menuKind; // w8
  unsigned int v5; // w21
  Il2CppObject *partyStartButton; // x0
  Il2CppClass *klass; // x8
  unsigned int v8; // w20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  unsigned int v10; // w20
  UICommonButton_o *masterEquipButton; // x19

  v3 = this;
  if ( (byte_4C22BB9 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22BB9 = 1;
  }
  menuKind = v3->fields.menuKind;
  switch ( menuKind )
  {
    case 1:
    case 3:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
      goto LABEL_67;
    case 4:
    case 5:
    case 6:
    case 7:
      method = (const MethodInfo *)v3->fields.questRestrictionInfo;
      if ( menuKind == 6 )
        v5 = 3;
      else
        v5 = 0;
      if ( menuKind == 7 )
      {
        if ( !method )
          goto LABEL_25;
        if ( LODWORD(method[1].invoker_method) == 1 && BYTE3(method[4].genericContainerHandle) )
          v5 = 3;
      }
      else if ( !method )
      {
        goto LABEL_25;
      }
      if ( BYTE2(method[4].genericContainerHandle) )
        v5 = 0;
LABEL_25:
      if ( menuKind == 6 )
        v8 = 3;
      else
        v8 = PartyListMenu__CheckEnableAutoOrganizationButton(this, (QuestRestrictionInfo_o *)method, v2);
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v5,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v5,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v8,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
LABEL_67:
      klass->vtable[14].methodPtr();
      return;
    case 9:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      masterEquipButton = v3->fields.masterEquipButton;
      partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyStartButton )
        goto LABEL_70;
      if ( LOBYTE(partyStartButton[6].monitor) )
      {
        partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !partyStartButton
          || (method = (const MethodInfo *)(LODWORD(partyStartButton[7].monitor) == 1), !masterEquipButton) )
        {
LABEL_70:
          sub_1C2D6EC(partyStartButton, method);
        }
      }
      else
      {
        method = (const MethodInfo *)(&dword_0 + 1);
        if ( !masterEquipButton )
          goto LABEL_70;
      }
      UICommonButton__SetEnable(masterEquipButton, (bool)method, 0);
      return;
    default:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      questRestrictionInfo = v3->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        v10 = questRestrictionInfo->fields.eventDeckNum <= 0 ? 0 : 3;
      else
        v10 = 0;
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v10,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v10,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
      goto LABEL_67;
  }
}


void PartyListMenu__SetButtonStateSetFlag(PartyListMenu_o *this, bool flag, const MethodInfo *method)
{
  this->fields.buttonStateSetFlag = flag;
}


void PartyListMenu__SetCenterItem(PartyListMenu_o *this, int32_t index, bool isAnimation, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, index);
  ListViewManager__JumpItem(partyListViewManager, index, 0);
}


void PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, method);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0);
}


void PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, enabled);
  UnityEngine_Behaviour__set_enabled(partyListViewManager, enabled, 0);
}


void PartyListMenu__SetPartyDeck(
        PartyListMenu_o *this,
        PartyListViewItem_array *baseDeckItemList,
        int32_t partyNum,
        EventUpValSetupInfo_o *setupInfo,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t friendBonusVal,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__CreateList(
          partyListViewManager,
          this->fields.menuKind,
          baseDeckItemList,
          partyNum,
          setupInfo,
          questRestrictionInfo,
          friendBonusVal,
          0),
        (partyListViewManager = this->fields.partyListViewManager) == 0)
    || (ListViewManager__JumpItem((ListViewManager_o *)partyListViewManager, partyNum, 0),
        (partyListViewManager = this->fields.partyListViewManager) == 0) )
  {
    sub_1C2D6EC(partyListViewManager, baseDeckItemList);
  }
  PartyListViewManager__SetMode_33915868(partyListViewManager, 1, 0);
}


void PartyListMenu__SetQuestUseItemButton(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  __int64 v4; // x1
  char v5; // w20

  if ( (byte_4C22BEE & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C22BEE = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__HasCachedQuestUseItem(Instance, 0);
  if ( !this->fields.friendshipUpItemSwitchComponent )
    goto LABEL_10;
  v5 = (char)Instance;
  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                             0);
  if ( !Instance )
    goto LABEL_10;
  if ( (v5 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( Instance )
    {
      FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0);
      return;
    }
LABEL_10:
    sub_1C2D6EC(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


void PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _BOOL8 v5; // x1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, v5);
  PartyListViewManager__SetScrollEnabled(partyListViewManager, v5, 0);
}


void PartyListMenu__SetStartButton(PartyListMenu_o *this, bool isBattle, bool isWaveBattle, const MethodInfo *method)
{
  UnityEngine_Object_o *partyStartButtonTxtSp; // x22
  __int64 v8; // x1
  UISprite_o *v9; // x22
  void *v10; // x0
  uint32_t cctor_finished; // w8
  System_String_o **p_START_BUTTON_WAVE_BATTLE_SP; // x8
  __int64 v13; // x9

  if ( (byte_4C22BDE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&PartyListMenu_TypeInfo);
    byte_4C22BDE = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0, 0) )
  {
    v9 = this->fields.partyStartButtonTxtSp;
    v10 = PartyListMenu_TypeInfo;
    cctor_finished = PartyListMenu_TypeInfo->_2.cctor_finished;
    if ( isWaveBattle )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      if ( !v9 )
        goto LABEL_19;
      p_START_BUTTON_WAVE_BATTLE_SP = &PartyListMenu_TypeInfo->static_fields->START_BUTTON_WAVE_BATTLE_SP;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      if ( !v9 )
        goto LABEL_19;
      v13 = 168;
      if ( isBattle )
        v13 = 176;
      p_START_BUTTON_WAVE_BATTLE_SP = (System_String_o **)((char *)PartyListMenu_TypeInfo->static_fields + v13);
    }
    UISprite__set_spriteName(v9, *p_START_BUTTON_WAVE_BATTLE_SP, 0);
    v10 = this->fields.partyStartButtonTxtSp;
    if ( v10 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v10 + 840LL))(v10, *(_QWORD *)(*(_QWORD *)v10 + 848LL));
      return;
    }
LABEL_19:
    sub_1C2D6EC(v10, v8);
  }
}


void PartyListMenu__ShowHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w21
  int32_t questId; // w22
  System_String_o *message; // x20
  QuestHintOverwriteMaster_o *Master_object; // x0
  __int64 v8; // x1
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  System_String_o *title; // x21
  int32_t leftIndent; // w22
  Il2CppObject *Instance; // x23
  ScrollMessageDialog_ClickDelegate_o *v13; // x24
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-48h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C22BEC & 1) == 0 )
  {
    sub_1C2D490(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_PartyListMenu__ShowHintDialogButton_b__177_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C22BEC = 1;
  }
  entity = 0;
  v14 = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
  if ( !Master_object )
    goto LABEL_29;
  CompleteCondEntity = QuestHintOverwriteMaster__GetCompleteCondEntity(Master_object, questId, questPhase, 0);
  if ( CompleteCondEntity )
  {
    title = CompleteCondEntity->fields.title;
    message = CompleteCondEntity->fields.message;
    leftIndent = CompleteCondEntity->fields.leftIndent;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestHintMaster___);
    if ( !Master_object )
      goto LABEL_29;
    Master_object = (QuestHintOverwriteMaster_o *)QuestHintMaster__TryGetEntity(
                                                    (QuestHintMaster_o *)Master_object,
                                                    &entity,
                                                    questId,
                                                    questPhase,
                                                    0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_29;
      title = entity->fields.title;
      message = entity->fields.message;
      leftIndent = entity->fields.leftIndent;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !Master_object )
        goto LABEL_29;
      if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v14, questId, questPhase, 0) )
      {
        Master_object = (QuestHintOverwriteMaster_o *)v14;
        if ( !v14 )
          goto LABEL_29;
        Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessageTitle(v14, 0);
        if ( !v14 )
          goto LABEL_29;
        title = (System_String_o *)Master_object;
        Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessage(v14, 0);
        if ( !v14 )
          goto LABEL_29;
        message = (System_String_o *)Master_object;
        leftIndent = QuestPhaseEntity__getHintLeftIndent(v14, 0);
      }
      else
      {
        leftIndent = -1;
        title = message;
      }
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0) )
  {
LABEL_25:
    PartyListMenu__ExecuteOpenCallback(this, method);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C2D6DC(ScrollMessageDialog_ClickDelegate_TypeInfo);
  ScrollMessageDialog_ClickDelegate___ctor(
    v13,
    (Il2CppObject *)this,
    Method_PartyListMenu__ShowHintDialogButton_b__177_0__,
    0);
  if ( !Instance )
LABEL_29:
    sub_1C2D6EC(Master_object, v8);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)Instance, title, message, leftIndent, v13, 0, 1, 0);
}


void PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C2D6EC(0, index);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0);
}


void PartyListMenu___OnClickAutoSell_b__130_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_1C2D6EC(0, res);
  DropAutoSellDlgComponent__Close(dropAutoSellDialog, 0);
}


void PartyListMenu___OnClickFriendshipUpItemUseButton_b__179_0(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Callback(this, 20, v2);
}


void PartyListMenu___Open_b__103_0(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w19
  Il2CppObject *Component_object; // x20

  v2 = this;
  if ( (byte_4C22BF1 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    this = (PartyListMenu_o *)sub_1C2D490(&StringLiteral_17428/*"btn_badge_organization"*/);
    byte_4C22BF1 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v2->fields.commandAssistConfirmButton) == 0 )
    sub_1C2D6EC(this, method);
  eventId = questRestrictionInfo->fields.eventId;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40385372(eventId, (UISprite_o *)Component_object, (System_String_o *)StringLiteral_17428/*"btn_badge_organization"*/, 0);
}


void PartyListMenu__add_callbackFunc(
        PartyListMenu_o *this,
        PartyListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListMenu_o *v10; // x0
  PartyListMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C22BB3 & 1) == 0 )
  {
    sub_1C2D490(&PartyListMenu_CallbackFunc_TypeInfo);
    byte_4C22BB3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v7->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C2D9AC(v7);
  PartyListMenu__remove_callbackFunc(v10, v11, v12);
}


UnityEngine_Vector2_o PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C22BB1 & 1) == 0 )
  {
    sub_1C2D490(&PartyListMenu_TypeInfo);
    byte_4C22BB1 = 1;
  }
  v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  autoSellButton = v2->fields.autoSellButton;
  v5 = *(float *)&autoSellButton->klass;
  v4 = *((float *)&autoSellButton->klass + 1);
  v6 = v5 - PartyListMenu__FSOffsetX(v2, method);
  v7 = v4;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C22BB2 & 1) == 0 )
  {
    sub_1C2D490(&PartyListMenu_TypeInfo);
    byte_4C22BB2 = 1;
  }
  v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  autoSellButton = v2->fields.autoSellButton;
  v5 = *((float *)&autoSellButton->monitor + 1);
  v4 = *(float *)&autoSellButton->fields.m_CachedPtr;
  v6 = v5 - PartyListMenu__FSOffsetX(v2, method);
  v7 = v4;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void PartyListMenu__remove_callbackFunc(
        PartyListMenu_o *this,
        PartyListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct PartyListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  PartyListMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C22BB4 & 1) == 0 )
  {
    sub_1C2D490(&PartyListMenu_CallbackFunc_TypeInfo);
    byte_4C22BB4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v7->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C2D9AC(v7);
  PartyListMenu__Awake(v10, v11);
}


void PartyListMenu_CallbackFunc___ctor(
        PartyListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6BE64;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6BE04;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *PartyListMenu_CallbackFunc__BeginInvoke(
        PartyListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  _QWORD v17[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v18; // [xsp+10h] [xbp-60h]
  int32_t v19; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v20; // [xsp+38h] [xbp-38h] BYREF
  int32_t v21; // [xsp+3Ch] [xbp-34h] BYREF

  v20 = n;
  v21 = result;
  v19 = m;
  if ( (byte_4C22BF2 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&PartyListMenu_ResultKind_TypeInfo);
    byte_4C22BF2 = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(PartyListMenu_ResultKind_TypeInfo, &v21, *(_QWORD *)&n, *(_QWORD *)&m, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v17, callback, object);
}


void PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void PartyListMenu_CallbackFunc__Invoke(
        PartyListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    n,
    m,
    this->fields.method);
}


void PartyListMenu___c__DisplayClass136_0___ctor(
        PartyListMenu___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void PartyListMenu___c__DisplayClass136_0___OpenAutoOrganizationConfirmDialog_b__0(
        PartyListMenu___c__DisplayClass136_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog_o *dialog; // x0
  struct PartyListMenu_o *_4__this; // x8
  const MethodInfo *v7; // x2

  dialog = this->fields.dialog;
  if ( !dialog )
    goto LABEL_8;
  PartyOrganizationAutoOrganizationConfirmDialog__Close(dialog, this->fields.autoDestroy, 0);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)_4__this->fields.partyListViewManager;
      _4__this->fields.state = 3;
      if ( dialog )
      {
        PartyListViewManager__SetMode_33915868((PartyListViewManager_o *)dialog, 1, 0);
        dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.__4__this;
        if ( dialog )
        {
          PartyListMenu__Callback((PartyListMenu_o *)dialog, 19, v7);
          return;
        }
      }
    }
LABEL_8:
    sub_1C2D6EC(dialog, isDecide);
  }
}
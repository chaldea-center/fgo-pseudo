void PartyListMenu___cctor(const MethodInfo *method)
{
  struct PartyListMenu_StaticFields *static_fields; // x8
  PartyListMenu_c *v2; // x8
  struct PartyListMenu_StaticFields *v3; // x9
  struct System_Int32_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int max_length; // w8
  struct System_Int32_array *v8; // x1
  struct PartyListMenu_StaticFields *v9; // x0
  struct PartyListMenu_StaticFields *v10; // x8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w8
  struct System_Int32_array *v14; // x1
  struct PartyListMenu_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  struct System_Int32_array *v19; // x1
  struct PartyListMenu_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  struct System_Int32_array *v24; // x1
  struct PartyListMenu_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int v28; // w8
  struct System_Int32_array *v29; // x1
  struct PartyListMenu_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int v33; // w8
  struct System_Int32_array *v34; // x1
  struct PartyListMenu_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int v38; // w8
  struct System_Int32_array *v39; // x1
  struct PartyListMenu_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int v43; // w8
  struct System_Int32_array *v44; // x1
  struct PartyListMenu_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int v48; // w8
  struct System_Int32_array *v49; // x1
  struct PartyListMenu_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int v53; // w8
  struct System_Int32_array *v54; // x1
  struct PartyListMenu_StaticFields *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  int v58; // w8
  struct System_Int32_array *v59; // x1
  struct PartyListMenu_StaticFields *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int v63; // w9
  CGThumbnailListItem_c *v64; // x1
  CGThumbnailListItem_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int v68; // w8
  struct System_Single_array *v69; // x1
  struct PartyListMenu_StaticFields *v70; // x0
  int32_t v71; // w1
  struct PartyListMenu_StaticFields *v72; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w1
  struct PartyListMenu_StaticFields *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w1
  struct PartyListMenu_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3

  if ( (byte_4C332BF & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&PartyListMenu_TypeInfo);
    sub_1C32C20(&float___TypeInfo);
    sub_1C32C20(&StringLiteral_17659/*"buttontxt_battlestart"*/);
    sub_1C32C20(&StringLiteral_17661/*"buttontxt_formation_05"*/);
    sub_1C32C20(&StringLiteral_17666/*"buttontxt_queststart"*/);
    byte_4C332BF = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v2 = PartyListMenu_TypeInfo;
  v3 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v3->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v3->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v2->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  max_length = v4->max_length;
  v8 = v4;
  if ( !max_length )
    goto LABEL_43;
  v4->m_Items[0] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 76;
  v9 = PartyListMenu_TypeInfo->static_fields;
  v9->LAYOUT_SIZE_X_TYPE_MIDDLE = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&v9->LAYOUT_SIZE_X_TYPE_MIDDLE, (int32_t)v8, v5, v6);
  v10 = PartyListMenu_TypeInfo->static_fields;
  *(_OWORD *)&v10->LAYOUT_SIZE_X_TYPE_BIG = xmmword_C0C810;
  v10->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v13 = v4->max_length;
  v14 = v4;
  if ( !v13 )
    goto LABEL_43;
  v4->m_Items[0] = 181;
  if ( v13 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 187;
  v15 = PartyListMenu_TypeInfo->static_fields;
  v15->LAYOUT_POS_X_HELP = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->LAYOUT_POS_X_HELP, (int32_t)v14, v11, v12);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v18 = v4->max_length;
  v19 = v4;
  if ( !v18 )
    goto LABEL_43;
  v4->m_Items[0] = 140;
  if ( v18 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 146;
  v20 = PartyListMenu_TypeInfo->static_fields;
  v20->LAYOUT_POS_X_QUESTINFO = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&v20->LAYOUT_POS_X_QUESTINFO, (int32_t)v19, v16, v17);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v23 = v4->max_length;
  v24 = v4;
  if ( !v23 )
    goto LABEL_43;
  v4->m_Items[0] = -45;
  if ( v23 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -94;
  v25 = PartyListMenu_TypeInfo->static_fields;
  v25->LAYOUT_POS_X_AUTOSELL_1 = v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&v25->LAYOUT_POS_X_AUTOSELL_1, (int32_t)v24, v21, v22);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v28 = v4->max_length;
  v29 = v4;
  if ( !v28 )
    goto LABEL_43;
  v4->m_Items[0] = 55;
  if ( v28 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 2;
  v30 = PartyListMenu_TypeInfo->static_fields;
  v30->LAYOUT_POS_X_AUTOSELL_2 = v29;
  sub_1C32BC4((CGThumbnailListItem_o *)&v30->LAYOUT_POS_X_AUTOSELL_2, (int32_t)v29, v26, v27);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v33 = v4->max_length;
  v34 = v4;
  if ( !v33 )
    goto LABEL_43;
  v4->m_Items[0] = -40;
  if ( v33 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -85;
  v35 = PartyListMenu_TypeInfo->static_fields;
  v35->LAYOUT_POS_X_EVENT = v34;
  sub_1C32BC4((CGThumbnailListItem_o *)&v35->LAYOUT_POS_X_EVENT, (int32_t)v34, v31, v32);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v38 = v4->max_length;
  v39 = v4;
  if ( !v38 )
    goto LABEL_43;
  v4->m_Items[0] = -135;
  if ( v38 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -171;
  v40 = PartyListMenu_TypeInfo->static_fields;
  v40->LAYOUT_POS_X_INFOMATION = v39;
  sub_1C32BC4((CGThumbnailListItem_o *)&v40->LAYOUT_POS_X_INFOMATION, (int32_t)v39, v36, v37);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v43 = v4->max_length;
  v44 = v4;
  if ( !v43 )
    goto LABEL_43;
  v4->m_Items[0] = -225;
  if ( v43 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -248;
  v45 = PartyListMenu_TypeInfo->static_fields;
  v45->LAYOUT_POS_X_REMOVE = v44;
  sub_1C32BC4((CGThumbnailListItem_o *)&v45->LAYOUT_POS_X_REMOVE, (int32_t)v44, v41, v42);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v48 = v4->max_length;
  v49 = v4;
  if ( !v48 )
    goto LABEL_43;
  v4->m_Items[0] = -315;
  if ( v48 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -325;
  v50 = PartyListMenu_TypeInfo->static_fields;
  v50->LAYOUT_POS_X_SWAP = v49;
  sub_1C32BC4((CGThumbnailListItem_o *)&v50->LAYOUT_POS_X_SWAP, (int32_t)v49, v46, v47);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v53 = v4->max_length;
  v54 = v4;
  if ( !v53 )
    goto LABEL_43;
  v4->m_Items[0] = 79;
  if ( v53 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = -17;
  v55 = PartyListMenu_TypeInfo->static_fields;
  v55->LAYOUT_POS_X_HINT_1 = v54;
  sub_1C32BC4((CGThumbnailListItem_o *)&v55->LAYOUT_POS_X_HINT_1, (int32_t)v54, v51, v52);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v58 = v4->max_length;
  v59 = v4;
  if ( !v58 )
    goto LABEL_43;
  v4->m_Items[0] = 79;
  if ( v58 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 79;
  v60 = PartyListMenu_TypeInfo->static_fields;
  v60->LAYOUT_POS_X_HINT_2 = v59;
  sub_1C32BC4((CGThumbnailListItem_o *)&v60->LAYOUT_POS_X_HINT_2, (int32_t)v59, v56, v57);
  v4 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_44;
  v63 = v4->max_length;
  v64 = (CGThumbnailListItem_c *)v4;
  if ( !v63 || (v4->m_Items[0] = -36, v63 == 1) )
LABEL_43:
    sub_1C32E84(v4);
  v4->m_Items[1] = -36;
  v65 = (CGThumbnailListItem_o *)PartyListMenu_TypeInfo->static_fields;
  v65[1].klass = v64;
  sub_1C32BC4(v65 + 1, (int32_t)v64, v61, v62);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v4 = (struct System_Int32_array *)sub_1C32CC8(float___TypeInfo, 2);
  if ( !v4 )
LABEL_44:
    sub_1C32E7C(v4);
  v68 = v4->max_length;
  v69 = (struct System_Single_array *)v4;
  if ( !v68 )
    goto LABEL_43;
  v4->m_Items[0] = 1116209152;
  if ( v68 == 1 )
    goto LABEL_43;
  v4->m_Items[1] = 1115815936;
  v70 = PartyListMenu_TypeInfo->static_fields;
  v70->LAYOUT_FS_OFFSET_OLD = v69;
  sub_1C32BC4((CGThumbnailListItem_o *)&v70->LAYOUT_FS_OFFSET_OLD, (int32_t)v69, v66, v67);
  v71 = StringLiteral_17666/*"buttontxt_queststart"*/;
  v72 = PartyListMenu_TypeInfo->static_fields;
  v72->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17666/*"buttontxt_queststart"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v72->START_BUTTON_QUEST_SP, v71, v73, v74);
  v75 = StringLiteral_17659/*"buttontxt_battlestart"*/;
  v76 = PartyListMenu_TypeInfo->static_fields;
  v76->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17659/*"buttontxt_battlestart"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v76->START_BUTTON_BATTLE_SP, v75, v77, v78);
  v79 = StringLiteral_17661/*"buttontxt_formation_05"*/;
  v80 = PartyListMenu_TypeInfo->static_fields;
  v80->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17661/*"buttontxt_formation_05"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v80->START_BUTTON_WAVE_BATTLE_SP, v79, v81, v82);
}


void PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C332BE & 1) == 0 )
  {
    sub_1C32C20(&BaseMenu_TypeInfo);
    byte_4C332BE = 1;
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
  ListViewManager_o *partyListViewManager; // x0
  unsigned int CenterIndex; // w0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
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

  if ( (byte_4C33289 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    byte_4C33289 = 1;
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

  if ( (byte_4C332AC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_OpenHintDialog__);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C332AC = 1;
  }
  if ( !this->fields.questRestrictionInfo )
    goto LABEL_9;
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40328320(102, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu_OpenHintDialog__, 0);
    if ( !Instance )
      sub_1C32E7C(v5);
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

  PartyListMenu__Close_33951652(this, 0, v2);
}


void PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C332B1 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C332B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0);
}


void PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C332B7 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C332B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseCenterEffectDetailDialog((CommonUI_o *)Instance, 0, 0);
}


void PartyListMenu__Close_33951652(PartyListMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4C3328B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndCloseList__);
    sub_1C32C20(&Method_PartyListMenu_EndClose__);
    byte_4C3328B = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0);
  if ( !partyListViewManager )
    sub_1C32E7C(v7);
  PartyListViewManager__SetMode_34029900(partyListViewManager, 1, v6, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v8, v9);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0);
}


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
    sub_1C32E7C(infoPanel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0);
}


void PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3328D & 1) == 0 )
  {
    sub_1C32C20(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_OnSelectItem__);
    byte_4C3328D = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v4 = (PartyListViewManager_CallbackFunc_o *)sub_1C32E6C(PartyListViewManager_CallbackFunc_TypeInfo);
  PartyListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, (intptr_t)Method_PartyListMenu_OnSelectItem__, 0);
  if ( !partyListViewManager )
    sub_1C32E7C(v5);
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v3, v4);
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
    sub_1C32E7C(tutorialMaskBase);
  }
  PartyListViewManager__SetMode_34029804((PartyListViewManager_o *)tutorialMaskBase, 1, 0);
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
    || (PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0) )
  {
    sub_1C32E7C(partyListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v4, v5);
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
    || (PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0)) == 0 )
  {
    sub_1C32E7C(partyListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0);
  PartyListMenu__Callback(this, 8, v4);
}


void PartyListMenu__EndEnter(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Action_o *closeCallbackFunc; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, 0, v4, v5);
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

  if ( (byte_4C3328A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1C32C20(&FSUtility_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndOpenTutorialArrow__);
    sub_1C32C20(&Method_PartyListMenu_OnSelectItem__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_13592/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/);
    byte_4C3328A = 1;
  }
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v4 = (PartyListViewManager_CallbackFunc_o *)sub_1C32E6C(PartyListViewManager_CallbackFunc_TypeInfo);
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
                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
      sub_1C32E7C(tutorialMaskBase);
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
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                v10 = FSUtility__GetAddOffset((FSOffset_o *)v9, 1, 0);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
    PartyListViewManager__SetMode_34029804((PartyListViewManager_o *)tutorialMaskBase, 3, 0);
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
            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v27 = FSUtility__GetAddOffset((FSOffset_o *)v26, 1, 0);
    v28 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_13592/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, 0);
    v30 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
      v20 = (PartyListViewManager_CallbackFunc_o *)sub_1C32E6C(PartyListViewManager_CallbackFunc_TypeInfo);
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
    PartyListViewManager__SetMode_34029804((PartyListViewManager_o *)tutorialMaskBase, 1, 0);
  }
LABEL_47:
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v6, v7);
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

  PartyListMenu__Enter_33951988(this, 0, v2);
}


void PartyListMenu__Enter_33951988(PartyListMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_4C3328C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndEnter__);
    byte_4C3328C = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C32E7C(0);
  PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 5;
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
    sub_1C32BC4(p_hintDialogCloseCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))hintDialogCloseCallbackFunc->fields.invoke_impl)(
      hintDialogCloseCallbackFunc->fields.method_code,
      hintDialogCloseCallbackFunc->fields.method);
  }
}


float PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C3327E & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C3327E = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(68.0, 1, 0);
}


float PartyListMenu__FSOffsetX_33940288(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  if ( (byte_4C3327F & 1) == 0 )
  {
    sub_1C32C20(&FSUtility_TypeInfo);
    byte_4C3327F = 1;
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
    sub_1C32E7C(0);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0);
}


System_String_array *PartyListMenu__GetAssetNameList(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C32E7C(0);
  return PartyListViewManager__GetAssetNameList(partyListViewManager, 0);
}


PartyListViewItem_o *PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 naturalAligment; // x11

  v2 = this;
  if ( (byte_4C33284 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C32C20(&PartyListViewItem_TypeInfo);
    byte_4C33284 = 1;
  }
  partyListViewManager = v2->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C32E7C(this);
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
    sub_1C32E7C(0);
  return PartyListViewManager__GetItem(partyListViewManager, index, 0);
}


void PartyListMenu__Init(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C33285 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4C33285 = 1;
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, 0, v4, v5);
  this->fields.questRestrictionInfo = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, 0, v6, v7);
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  partyListViewManager = (PartyListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyListViewManager )
LABEL_9:
    sub_1C32E7C(partyListViewManager);
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyListViewManager, 0);
  BaseMenu__Init((BaseMenu_o *)this, 0);
}


bool PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C332AF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C332AF = 1;
  }
  entity = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_12:
    sub_1C32E7C(Instance);
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
  struct QuestRestrictionInfo_o *v5; // x8
  struct QuestRestrictionInfo_o *v6; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C332B3 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C332B3 = 1;
  }
  entity = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
    v5 = this->fields.questRestrictionInfo;
    if ( !v5 || !Master_object )
      goto LABEL_16;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            Master_object,
            &entity,
            v5->fields.eventId,
            (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 )
LABEL_16:
      sub_1C32E7C(Master_object);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_object,
                                      v6->fields.questId,
                                      (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


bool PartyListMenu__IsDisabledAutoOrganizationButton(PartyListMenu_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *autoOrganizationButton; // x8

  autoOrganizationButton = this->fields.autoOrganizationButton;
  if ( !autoOrganizationButton )
    sub_1C32E7C(this);
  return autoOrganizationButton->fields.mState == 3;
}


bool PartyListMenu__IsDisplayAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v5; // x8
  Il2CppObject *v8; // [xsp+8h] [xbp-28h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C332AE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C332AE = 1;
  }
  entity = 0;
  v8 = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v5 = this->fields.questRestrictionInfo) == 0)
    || !Instance )
  {
LABEL_22:
    sub_1C32E7C(Instance);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v8,
          v5->fields.eventId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    return 0;
  Instance = (DataManager_o *)v8;
  if ( !v8 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag((EventDetailEntity_o *)v8, 0x80000000000LL, 0);
}


bool PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  EventCommandAssistMaster_o *Master_object; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCommandAssistMaster_o *v5; // x20
  struct QuestRestrictionInfo_o *v6; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C332B2 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    byte_4C332B2 = 1;
  }
  entity = 0;
  if ( this->fields.questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_object )
      goto LABEL_19;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_19;
      v5 = Master_object;
      Master_object = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                      (EventDetailEntity_o *)entity,
                                                      0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v6 = this->fields.questRestrictionInfo;
        if ( v6 )
        {
          if ( v5 )
          {
            Master_object = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetValidEntityList(
                                                            v5,
                                                            v6->fields.eventId,
                                                            -1,
                                                            0);
            if ( Master_object )
              return LODWORD(Master_object->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_19:
        sub_1C32E7C(Master_object);
      }
    }
  }
  return 0;
}


bool PartyListMenu__IsDisplayLiveConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v6; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C332B5 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_20134/*"icon_center_bg"*/);
    byte_4C332B5 = 1;
  }
  entity = 0;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_20134/*"icon_center_bg"*/, 0);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.parent)(
                                      Instance,
                                      Instance->klass[2]._1.generic_class),
        (v6 = this->fields.questRestrictionInfo) == 0)
    || (Instance = (DataManager_o *)entity) == 0 )
  {
LABEL_17:
    sub_1C32E7C(Instance);
  }
  return QuestEntity__HasFlag_42367412((QuestEntity_o *)entity, 0x100000000000000LL, v6->fields.questPhase, 0);
}


bool PartyListMenu__IsHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v10; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C332B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C332B8 = 1;
  }
  entity = 0;
  v10 = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v10, questId, questPhase, 0) )
    {
      Master_object = (QuestPhaseMaster_o *)v10;
      if ( v10 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v10, 0);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
      }
LABEL_17:
      sub_1C32E7C(Master_object);
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
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  int32_t openType; // w8
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C332B9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C332B9 = 1;
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
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
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
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
LABEL_27:
    sub_1C32E7C(Master_object);
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
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_27;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v11, questId, questPhase, 0) )
    return 0;
  Master_object = (QuestHintOverwriteMaster_o *)v11;
  if ( !v11 )
    goto LABEL_27;
  return QuestPhaseEntity__getHintOpenType(v11, 0) == 0;
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
    sub_1C32E7C(0);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0);
}


void PartyListMenu__Modify(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C32E7C(0);
  PartyListViewManager__Modify(partyListViewManager, 0);
}


void PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v7; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v9; // x22

  if ( (byte_4C332B0 & 1) == 0 )
  {
    sub_1C32C20(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__);
    sub_1C32C20(&Method_PartyListMenu_OnClickAssistConfirmButton__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C332B0 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickAssistConfirmButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickAssistConfirmButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v7 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v9 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1C32E6C(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v9,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0),
          !v7) )
    {
      sub_1C32E7C(Instance);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v7, eventId, v9, 0);
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

  if ( (byte_4C3329A & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickAutoOrganization__);
    byte_4C3329A = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0);
    if ( (CenterIndex & 0x80000000) == 0 )
    {
      v5 = CenterIndex;
      v6 = Method_PartyListMenu_OnClickAutoOrganization__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickAutoOrganization__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
      PartyListMenu__OpenAutoOrganizationConfirmDialog_33955732(this, v5, 0, v8);
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

  if ( (byte_4C33297 & 1) == 0 )
  {
    sub_1C32C20(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_OnClickAutoSell__);
    sub_1C32C20(&Method_PartyListMenu__OnClickAutoSell_b__130_0__);
    byte_4C33297 = 1;
  }
  v3 = Method_PartyListMenu_OnClickAutoSell__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoSell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickAutoSell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v6 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_1C32E6C(DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__130_0__,
    0);
  if ( !dropAutoSellDialog )
    sub_1C32E7C(v7);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v6, 0);
}


void PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3328E & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickCancel__);
    byte_4C3328E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 0, v6);
  }
}


void PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v7; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  System_Action_o *v10; // x23

  if ( (byte_4C332B6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_CloseCenterEffectDetailDialog__);
    sub_1C32C20(&Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C332B6 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v7 = (CommonUI_o *)Instance,
          questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0),
          !v7) )
    {
      sub_1C32E7C(Instance);
    }
    CommonUI__OpenCenterEffectDetailDialog(v7, questId, questPhase, v10, 0);
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

  if ( (byte_4C3328F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndCloseTutorialArrowChange__);
    sub_1C32C20(&Method_PartyListMenu_OnClickChange__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3328F = 1;
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
          v8 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickChange__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
        v5 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickChange__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 2, v7);
        return;
      }
LABEL_17:
      sub_1C32E7C(partyListViewManager);
    }
  }
}


void PartyListMenu__OnClickCommandAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v7; // x19
  int32_t eventId; // w20
  Il2CppObject *v9; // x22
  System_Action_o *v10; // x21

  if ( (byte_4C332B4 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_CommonUI_CloseCommandAssistConfirmDialog__);
    sub_1C32C20(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C332B4 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v7 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v10 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo),
          System_Action___ctor(v10, v9, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0),
          !v7) )
    {
      sub_1C32E7C(Instance);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v7, eventId, v10, 0);
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
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_1C32E7C(partyListViewManager);
    }
  }
}


void PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C33294 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickDeckCopy__);
    byte_4C33294 = 1;
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
        v4 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickDeckCopy__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 6, v6);
        return;
      }
LABEL_11:
      sub_1C32E7C(partyListViewManager);
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

  if ( (byte_4C33293 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickDeckName__);
    byte_4C33293 = 1;
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
          v5 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickDeckName__);
        v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
        OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
        partyListViewManager = this->fields.partyListViewManager;
        this->fields.state = 3;
        if ( partyListViewManager )
        {
          PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
          PartyListMenu__Callback(this, 5, v7);
          return;
        }
LABEL_15:
        sub_1C32E7C(partyListViewManager);
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

  if ( (byte_4C33295 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickEdit__);
    byte_4C33295 = 1;
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
        v4 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickEdit__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 7, v6);
        return;
      }
LABEL_11:
      sub_1C32E7C(partyListViewManager);
    }
  }
}


void PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C332BC & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__);
    byte_4C332BC = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__, 0);
  if ( !friendshipUpItemSwitchComponent )
    sub_1C32E7C(v5);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v4, 0);
}


void PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  struct QuestRestrictionInfo_o *v7; // x8
  int32_t eventId; // w20
  System_Action_o *v9; // x21
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t menuKind; // w8
  Il2CppObject *Instance; // x19
  TutorialFlag_ImageId_array *v13; // x1
  int v14; // w8

  if ( (byte_4C332AA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&TutorialFlag_ImageId___TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndHelp__);
    sub_1C32C20(&Method_PartyListMenu_OnClickHelp__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C332AA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
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
        v7 = this->fields.questRestrictionInfo;
        if ( v7 )
        {
          eventId = v7->fields.eventId;
          v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0);
          v10 = this->fields.questRestrictionInfo;
          if ( v10 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_42071324(
              eventId,
              45,
              v9,
              v10->fields.questId,
              v10->fields.questPhase,
              0,
              0,
              0);
            return;
          }
        }
LABEL_24:
        sub_1C32E7C(IsTutorialDataExists);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 1);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v13 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 2);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v14 = *(_DWORD *)(IsTutorialDataExists + 24);
        v13 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v14 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v14 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_24;
LABEL_23:
            CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v13, -1, 0, 0, 0, 0);
            return;
          }
        }
      }
      sub_1C32E84(IsTutorialDataExists);
    }
  }
}


void PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C332BA & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickHintDialogButton__);
    byte_4C332BA = 1;
  }
  v3 = Method_PartyListMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  PartyListMenu__ShowHintDialogButton(this, v5);
}


void PartyListMenu__OnClickInfomation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C33299 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickInfomation__);
    byte_4C33299 = 1;
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
        v4 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickInfomation__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 11, v6);
        return;
      }
LABEL_11:
      sub_1C32E7C(partyListViewManager);
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
      sub_1C32E7C(0);
    PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C33290 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickMasterFormation__);
    byte_4C33290 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 9, v6);
  }
}


void PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3329C & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickPointEvent__);
    byte_4C3329C = 1;
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
        v4 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickPointEvent__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 12, v6);
        return;
      }
LABEL_11:
      sub_1C32E7C(partyListViewManager);
    }
  }
}


void PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C33298 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickQuestInfo__);
    byte_4C33298 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
    PartyListMenu__Callback(this, 18, v6);
  }
}


void PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C33292 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickRemove__);
    byte_4C33292 = 1;
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
        v4 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickRemove__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 4, v6);
        return;
      }
LABEL_11:
      sub_1C32E7C(partyListViewManager);
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

  if ( (byte_4C33296 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndCloseTutorialArrowStart__);
    sub_1C32C20(&Method_PartyListMenu_OnClickStart__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C33296 = 1;
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
          v6 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickStart__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 8, v5);
        return;
      }
LABEL_15:
      sub_1C32E7C(partyListViewManager);
    }
  }
}


void PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C33291 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickSwap__);
    byte_4C33291 = 1;
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
        v4 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickSwap__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
        PartyListMenu__Callback(this, 3, v6);
        return;
      }
LABEL_11:
      sub_1C32E7C(partyListViewManager);
    }
  }
}


void PartyListMenu__OnClickTabParty(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A8 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty__);
    byte_4C332A8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyListMenu_OnClickTabParty__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, index, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C3329E & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty1__);
    byte_4C3329E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty1__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty10__);
    byte_4C332A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty10__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty10__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty10__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C3329F & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty2__);
    byte_4C3329F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty2__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty3__);
    byte_4C332A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty3__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty4__);
    byte_4C332A1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty4__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty4__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty4__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A2 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty5__);
    byte_4C332A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty5__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty5__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty5__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A3 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty6__);
    byte_4C332A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty6__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty6__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty6__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty7__);
    byte_4C332A4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty7__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty7__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty7__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty8__);
    byte_4C332A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty8__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty8__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty8__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0);
  }
}


void PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4C332A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_PartyListMenu_OnClickTabParty9__);
    byte_4C332A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty9__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty9__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnClickTabParty9__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C32E7C(0);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0);
  }
}


void PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C332A9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C332A9 = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0);
    if ( !Instance )
      sub_1C32E7C(v5);
    CommonUI__CloseTutorialNotificationDialogArrow_31216340((CommonUI_o *)Instance, v4, 0);
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

  if ( (byte_4C3329D & 1) == 0 )
  {
    sub_1C32C20(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_OnSelectItem__);
    byte_4C3329D = 1;
  }
  if ( this->fields.state == 2 && this->fields.isSelectItemEnable )
  {
    if ( (unsigned int)(kind - 1) >= 4 )
    {
      v11 = Method_PartyListMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnSelectItem__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C32C38(Method_PartyListMenu_OnSelectItem__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C32C04(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0);
      partyListViewManager = this->fields.partyListViewManager;
      v14 = (PartyListViewManager_CallbackFunc_o *)sub_1C32E6C(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0);
      if ( !partyListViewManager )
        sub_1C32E7C(v15);
      PartyListViewManager__SetMode(partyListViewManager, 2, v14, 0);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v10 = dword_C0D860[kind - 1];
        this->fields.callbackFunc = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, n, *(const MethodInfo **)&m);
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
  const MethodInfo *v46; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v48; // x1
  _BOOL4 v49; // w8
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Action_o **v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Action_o *v59; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x1
  _BOOL4 v63; // w22
  struct System_Int32_array *eventIdList; // x8
  __int64 v65; // x9
  int32_t v66; // w24
  PartyListMenu_o *v67; // x0
  const MethodInfo *v68; // x4
  PartyListMenu_c *v69; // x8
  UnityEngine_GameObject_o *v70; // x25
  UnityEngine_GameObject_o *v71; // x24
  const MethodInfo *v72; // x1
  PartyListMenu_o *transform; // x0
  const MethodInfo *v74; // x1
  UnityEngine_Transform_o *v75; // x24
  UnityEngine_Vector2_o v76; // kr08_8 OVERLAPPED
  UnityEngine_GameObject_o *v77; // x24
  const MethodInfo *v78; // x1
  int v79; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v82; // x1
  char v83; // w24
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  __int64 v87; // x5
  __int64 v88; // x6
  __int64 v89; // x7
  UISprite_o *v90; // x24
  Il2CppObject *v91; // x0
  System_String_o *v92; // x25
  const MethodInfo *v93; // x1
  System_String_o *v94; // x1
  const MethodInfo *v95; // x1
  struct UILabel_o *assistCanNotLabel; // x24
  char v97; // w24
  int32_t v98; // w24
  System_Action_o *v99; // x25
  const MethodInfo *v100; // x1
  System_String_o *v101; // x1
  const MethodInfo *v102; // x1
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v104; // w24
  struct QuestRestrictionInfo_o *v105; // x8
  int32_t questPhase; // w23
  int32_t v107; // w24
  struct QuestRestrictionInfo_o *v108; // x8
  int32_t v109; // w23
  int32_t v110; // w24
  const MethodInfo *v111; // x1
  struct QuestRestrictionInfo_o *v112; // x8
  char v113; // w23
  int32_t v114; // w24
  int32_t v115; // w25
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  struct System_Action_o *v118; // x1
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  __int64 v121; // x9
  int32_t v122; // w20
  PartyListMenu_o *v123; // x0
  const MethodInfo *v124; // x4
  PartyListMenu_c *v125; // x8
  UnityEngine_GameObject_o *v126; // x21
  BalanceConfig_c *v127; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  System_Action_o *v130; // x20
  int32_t eventId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v133; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v134; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v135; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v136; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C33286 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_EndOpen__);
    sub_1C32C20(&Method_PartyListMenu__Open_b__103_0__);
    sub_1C32C20(&PartyListMenu_TypeInfo);
    sub_1C32C20(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C32C20(&QuestInformationComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_5524/*"EVENT_ASSIST_SKILL_DO_NOT"*/);
    sub_1C32C20(&StringLiteral_5555/*"EVENT_COMMAND_ASSIST_DO_NOT"*/);
    sub_1C32C20(&StringLiteral_19270/*"event_skill_btn_{0}"*/);
    sub_1C32C20(&StringLiteral_17663/*"buttontxt_formation_20"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C33286 = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v38, v39);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v40, v41);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v43, v44);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v46);
      PartyListMenu__SetButtonState(this, v48);
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
          v49 = 1;
        }
        else
        {
          eventIdList = setupInfo->fields.eventIdList;
          if ( !eventIdList )
            goto LABEL_162;
          v49 = LODWORD(eventIdList->max_length) != 0;
        }
        v63 = v49;
      }
      else
      {
        v63 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_162;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, v63, 0);
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
      v65 = 48;
      if ( v63 )
        v65 = 44;
      if ( !this->fields.autoSellButton )
        goto LABEL_162;
      v66 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + v65);
      v67 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.autoSellButton,
                                 0);
      v69 = PartyListMenu_TypeInfo;
      v70 = (UnityEngine_GameObject_o *)v67;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v69 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v67, v70, v69->static_fields->LAYOUT_FS_OFFSET, v66, 0, v68);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_162;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, !IsHintDialog || !v63, 0);
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
        v71 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v72);
        if ( !v71 )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive(v71, (unsigned __int8)gameObject & 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_162;
        transform = (PartyListMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        v75 = (UnityEngine_Transform_o *)transform;
        v76 = v63
            ? PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(transform, v74)
            : PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(transform, v74);
        if ( !v75 )
          goto LABEL_162;
        v79 = 0;
        UnityEngine_Transform__set_localPosition(v75, *(UnityEngine_Vector3_o *)&v76.fields.x, 0);
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
        v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v78);
        if ( !v77 )
          goto LABEL_162;
        UnityEngine_GameObject__SetActive(v77, (unsigned __int8)gameObject & 1, 0);
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
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v82);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_162;
      v83 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.assistConfirmButton, 0);
      if ( !gameObject )
        goto LABEL_162;
      if ( (v83 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_162;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_162;
        v90 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v84, v85, v86, v87, v88, v89);
        v92 = System_String__Format((System_String_o *)StringLiteral_19270/*"event_skill_btn_{0}"*/, v91, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v90, v92, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v93);
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
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v133.fields.r = 1.0;
          v133.fields.g = 1.0;
          v133.fields.b = 1.0;
          v133.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v133, 0);
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
          v94 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v134.fields.r = 0.5;
          v134.fields.g = 0.5;
          v134.fields.b = 0.5;
          v134.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v134, 0);
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5524/*"EVENT_ASSIST_SKILL_DO_NOT"*/, 0);
          if ( !assistCanNotLabel )
            goto LABEL_162;
          v94 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v94, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_162;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v95);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_162;
      v97 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0);
      if ( !gameObject )
        goto LABEL_162;
      if ( (v97 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        if ( !*p_questRestrictionInfo )
          goto LABEL_162;
        v98 = (*p_questRestrictionInfo)->fields.eventId;
        v99 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v99, (Il2CppObject *)this, Method_PartyListMenu__Open_b__103_0__, 0);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI_40507304(v98, v99, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v100);
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
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v135.fields.r = 1.0;
          v135.fields.g = 1.0;
          v135.fields.b = 1.0;
          v135.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v135, 0);
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
          v101 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_162;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_162;
          v136.fields.r = 0.5;
          v136.fields.g = 0.5;
          v136.fields.b = 0.5;
          v136.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v136, 0);
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5555/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, 0);
          if ( !commandAssistCanNotLabel )
            goto LABEL_162;
          v101 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v101, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_162;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v102);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_162;
      v104 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.centerEffectLabelSp, 0);
      if ( !gameObject )
        goto LABEL_162;
      UnityEngine_GameObject__SetActive(gameObject, v104 & 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_162;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_162;
      if ( IsHintDialog )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        v105 = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_162;
        v107 = v105->fields.questId;
        questPhase = v105->fields.questPhase;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                   v107,
                                                   questPhase,
                                                   0);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v108 = *p_questRestrictionInfo;
          if ( !*p_questRestrictionInfo )
            goto LABEL_162;
          v110 = v108->fields.questId;
          v109 = v108->fields.questPhase;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          if ( !QuestHintDialogOpenManager__IsQuestHintOpen(v110, v109, 0) )
          {
            gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v111);
            v112 = this->fields.questRestrictionInfo;
            if ( !v112 )
              goto LABEL_162;
            v113 = (char)gameObject;
            v115 = v112->fields.questId;
            v114 = v112->fields.questPhase;
            if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            QuestHintDialogOpenManager__SetTemporarilyInfo(v115, v114, 0);
            if ( (v113 & 1) == 0 )
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
                v118 = *p_openCallbackFunc;
                if ( *p_openCallbackFunc )
                {
                  this->fields.hintDialogCloseCallbackFunc = v118;
                  sub_1C32BC4(
                    (CGThumbnailListItem_o *)&this->fields.hintDialogCloseCallbackFunc,
                    (int32_t)v118,
                    v116,
                    v117);
                  this->fields.openCallbackFunc = 0;
                  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v119, v120);
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
      v121 = 56;
      if ( v63 )
        v121 = 52;
      if ( !this->fields.hintDialogButton )
        goto LABEL_162;
      v122 = *(_DWORD *)(gameObject[7].fields.m_CachedPtr + v121);
      v123 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                  0);
      v125 = PartyListMenu_TypeInfo;
      v126 = (UnityEngine_GameObject_o *)v123;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v125 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v123, v126, v125->static_fields->LAYOUT_FS_OFFSET, v122, 0, v124);
      v127 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v127 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v127->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_40225464(ClassBoardReleaseQuestId, -1, 0, 0) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(classInfoSpriteOrganization, (System_String_o *)StringLiteral_17663/*"buttontxt_formation_20"*/, 0);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17663/*"buttontxt_formation_20"*/,
          0);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_162:
        sub_1C32E7C(gameObject);
      PartyListViewManager__SetMode_34029804((PartyListViewManager_o *)gameObject, 1, 0);
      this->fields.state = 1;
      v130 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v130, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0);
      BaseMenu__Open((BaseMenu_o *)this, v130, 0);
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v24, v25);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v26, v27);
      v28 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v29, v30);
      if ( isOpenCallbackAfterCloseHintDialog )
      {
        v31 = *v28;
        if ( *v28 )
        {
          this->fields.hintDialogCloseCallbackFunc = v31;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.hintDialogCloseCallbackFunc, (int32_t)v31, v32, v33);
          this->fields.openCallbackFunc = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v34, v35);
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
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.setupInfo, (int32_t)setupInfo, v22, v23);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questRestrictionInfo, (int32_t)questRestrictionInfo, v50, v51);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v52, v53);
      v54 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v55, v56);
      if ( isOpenCallbackAfterCloseHintDialog )
      {
        v59 = *v54;
        if ( *v54 )
        {
          this->fields.hintDialogCloseCallbackFunc = v59;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.hintDialogCloseCallbackFunc, (int32_t)v59, v57, v58);
          this->fields.openCallbackFunc = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, 0, v60, v61);
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
      PartyListViewManager__SetMode_34029804((PartyListViewManager_o *)gameObject, 1, 0);
      PartyListMenu__EndOpen(this, v62);
      return;
    default:
      return;
  }
}


void PartyListMenu__OpenAutoOrganizationConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0
  int32_t CenterIndex; // w1
  const MethodInfo *v5; // x3

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_7;
  CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0);
  if ( CenterIndex < 0 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( partyListViewManager )
    {
      ListViewManager__ScreenUpdate(partyListViewManager, 0);
      partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
      if ( partyListViewManager )
      {
        CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0);
        goto LABEL_6;
      }
    }
LABEL_7:
    sub_1C32E7C(partyListViewManager);
  }
LABEL_6:
  PartyListMenu__OpenAutoOrganizationConfirmDialog_33955732(this, CenterIndex, 1, v5);
}


void PartyListMenu__OpenAutoOrganizationConfirmDialog_33955732(
        PartyListMenu_o *this,
        int32_t centerIndex,
        bool isAutoOpen,
        const MethodInfo *method)
{
  __int64 v7; // x20
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t eventId; // w22
  struct QuestRestrictionInfo_o *v15; // x8
  struct PartyOrganizationAutoOrganizationConfirmDialog_o **p_autoOrganizationConfirmDialogBuffExists; // x8
  char v17; // w23
  bool v18; // w24
  struct PartyOrganizationAutoOrganizationConfirmDialog_o *v19; // x1
  Il2CppObject *autoOrganizationConfirmDialogPrefabForAutoOpen; // x21
  UnityEngine_Transform_o *parent; // x26
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  PartyOrganizationAutoOrganizationConfirmDialog_o *v25; // x21
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v26; // x25

  if ( (byte_4C3329B & 1) == 0 )
  {
    sub_1C32C20(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu___c__DisplayClass136_0__OpenAutoOrganizationConfirmDialog_b__0__);
    sub_1C32C20(&PartyListMenu___c__DisplayClass136_0_TypeInfo);
    byte_4C3329B = 1;
  }
  v7 = sub_1C32E6C(PartyListMenu___c__DisplayClass136_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v9, v10);
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
    partyListViewManager = (PartyListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    v15 = this->fields.questRestrictionInfo;
    if ( !v15 || !partyListViewManager )
      goto LABEL_22;
    if ( QuestAutoOrganizationAdjustMaster__IsExistEntity(
           (QuestAutoOrganizationAdjustMaster_o *)partyListViewManager,
           v15->fields.questId,
           v15->fields.questPhase,
           0) )
    {
      p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialogBuffExists;
      v17 = 1;
      v18 = 1;
      goto LABEL_14;
    }
  }
  else
  {
    eventId = 0;
  }
  v18 = 0;
  v17 = questRestrictionInfo != 0;
  p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialog;
LABEL_14:
  v19 = *p_autoOrganizationConfirmDialogBuffExists;
  *(_QWORD *)(v7 + 16) = *p_autoOrganizationConfirmDialogBuffExists;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v19, v11, v12);
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
    sub_1C32E7C(partyListViewManager);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)partyListViewManager, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__Instantiate_object__51812484(
          autoOrganizationConfirmDialogPrefabForAutoOpen,
          parent,
          (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
  *(_QWORD *)(v7 + 16) = v22;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v22, v23, v24);
  *(_BYTE *)(v7 + 24) = 1;
LABEL_20:
  v25 = *(PartyOrganizationAutoOrganizationConfirmDialog_o **)(v7 + 16);
  v26 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_1C32E6C(PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_PartyListMenu___c__DisplayClass136_0__OpenAutoOrganizationConfirmDialog_b__0__,
    0);
  if ( !v25 )
    goto LABEL_22;
  PartyOrganizationAutoOrganizationConfirmDialog__Open(v25, eventId, v17, v18, isAutoOpen, v26, 0);
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
  TutorialFlag_ImageId_array *v11; // x21
  System_Action_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x1
  int v15; // w8

  if ( (byte_4C332AB & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&TutorialFlag_ImageId___TypeInfo);
    sub_1C32C20(&Method_PartyListMenu_CheckQuestUseItemTutorial__);
    sub_1C32C20(&Method_PartyListMenu_OpenHintDialog__);
    sub_1C32C20(&Method_PartyListMenu__OpenHelp_b__155_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TutorialFlag_TypeInfo);
    byte_4C332AB = 1;
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
        v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyListMenu__OpenHelp_b__155_0__, 0);
        v8 = this->fields.questRestrictionInfo;
        if ( v8 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v7, v8->fields.questId, v8->fields.questPhase, 0, 0, 0);
          return;
        }
      }
LABEL_29:
      sub_1C32E7C(IsTutorialDataExists);
    }
  }
  menuKind = this->fields.menuKind;
  if ( (unsigned int)(menuKind - 3) < 5 || menuKind == 1 )
    goto LABEL_9;
  if ( menuKind != 2 )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40328320(202, 0) )
    {
      PartyListMenu__CheckQuestUseItemTutorial(this, v14);
      return;
    }
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    IsTutorialDataExists = sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 2);
    if ( !IsTutorialDataExists )
      goto LABEL_29;
    v15 = *(_DWORD *)(IsTutorialDataExists + 24);
    v11 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
    if ( v15 )
    {
      *(_DWORD *)(IsTutorialDataExists + 32) = 37;
      if ( v15 != 1 )
      {
        *(_DWORD *)(IsTutorialDataExists + 36) = 38;
        v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_CheckQuestUseItemTutorial__, 0);
        if ( !Instance )
          goto LABEL_29;
        v13 = 202;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1C32E84(IsTutorialDataExists);
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40328320(205, 0) )
  {
LABEL_9:
    PartyListMenu__OpenHintDialog(this, method);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  IsTutorialDataExists = sub_1C32CC8(TutorialFlag_ImageId___TypeInfo, 1);
  if ( !IsTutorialDataExists )
    goto LABEL_29;
  v11 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
  if ( !*(_DWORD *)(IsTutorialDataExists + 24) )
    goto LABEL_30;
  *(_DWORD *)(IsTutorialDataExists + 32) = 644;
  v12 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_OpenHintDialog__, 0);
  if ( !Instance )
    goto LABEL_29;
  v13 = 205;
LABEL_28:
  CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v11, v13, v12, 0, 0, 0);
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
    sub_1C32E7C(0);
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

  if ( (byte_4C33287 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (PartyListMenu_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33287 = 1;
  }
  if ( !buttonObj )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = UnityEngine_GameObject__GetComponent_object_(
          buttonObj,
          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0);
  v14 = PartyListMenu__FSOffsetX_33940288(transform, offset, v13);
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
      sub_1C32E7C(this);
    }
  }
}


void PartyListMenu__SetButtonState(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PartyListMenu_o *v3; // x19
  int32_t menuKind; // w8
  QuestRestrictionInfo_o *questRestrictionInfo; // x1
  unsigned int v6; // w21
  Il2CppObject *partyStartButton; // x0
  Il2CppClass *klass; // x8
  unsigned int v9; // w20
  struct QuestRestrictionInfo_o *v10; // x8
  unsigned int v11; // w20
  QuestRestrictionInfo_o *v12; // x0
  char v13; // w1
  Il2CppObject *masterEquipButton; // x19
  int32_t genderImageId; // [xsp+Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4C33288 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C33288 = 1;
  }
  genderImageId = 0;
  menuKind = v3->fields.menuKind;
  switch ( menuKind )
  {
    case 1:
    case 3:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      klass = partyStartButton->klass;
      goto LABEL_71;
    case 4:
    case 5:
    case 6:
    case 7:
      questRestrictionInfo = v3->fields.questRestrictionInfo;
      if ( menuKind == 6 )
        v6 = 3;
      else
        v6 = 0;
      if ( menuKind == 7 )
      {
        if ( !questRestrictionInfo )
          goto LABEL_25;
        if ( questRestrictionInfo->fields.myServantNumMax == 1
          && questRestrictionInfo->fields.isNotTransitionSupportList )
        {
          v6 = 3;
        }
      }
      else if ( !questRestrictionInfo )
      {
        goto LABEL_25;
      }
      if ( questRestrictionInfo->fields.isNpcEditablePos )
        v6 = 0;
LABEL_25:
      if ( menuKind == 6 )
        v9 = 3;
      else
        v9 = PartyListMenu__CheckEnableAutoOrganizationButton(this, questRestrictionInfo, v2);
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v6,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v6,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        3,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v9,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      klass = partyStartButton->klass;
LABEL_71:
      klass->vtable[14].methodPtr();
      return;
    case 9:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      v12 = v3->fields.questRestrictionInfo;
      if ( !v12 || !QuestRestrictionInfo__TryGetFixedMasterEquipInfo(v12, &genderImageId, 0) )
      {
        masterEquipButton = (Il2CppObject *)v3->fields.masterEquipButton;
        partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !partyStartButton )
          goto LABEL_75;
        if ( LOBYTE(partyStartButton[6].monitor) )
        {
          partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !partyStartButton || (v13 = LODWORD(partyStartButton[7].monitor) == 1, !masterEquipButton) )
LABEL_75:
            sub_1C32E7C(partyStartButton);
        }
        else
        {
          v13 = 1;
          if ( !masterEquipButton )
            goto LABEL_75;
        }
        partyStartButton = masterEquipButton;
        goto LABEL_74;
      }
      partyStartButton = (Il2CppObject *)v3->fields.masterEquipButton;
      if ( !partyStartButton )
        goto LABEL_75;
      v13 = 0;
LABEL_74:
      UICommonButton__SetEnable((UICommonButton_o *)partyStartButton, v13, 0);
      return;
    default:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      v10 = v3->fields.questRestrictionInfo;
      if ( v10 )
        v11 = v10->fields.eventDeckNum <= 0 ? 0 : 3;
      else
        v11 = 0;
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        0,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v11,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        v11,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_75;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, const MethodInfo *))partyStartButton->klass->vtable[14].methodPtr)(
        partyStartButton,
        0,
        1,
        partyStartButton->klass->vtable[14].method);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_75;
      klass = partyStartButton->klass;
      goto LABEL_71;
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
    sub_1C32E7C(0);
  ListViewManager__JumpItem(partyListViewManager, index, 0);
}


void PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C32E7C(0);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0);
}


void PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C32E7C(0);
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
    sub_1C32E7C(partyListViewManager);
  }
  PartyListViewManager__SetMode_34029804(partyListViewManager, 1, 0);
}


void PartyListMenu__SetQuestUseItemButton(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  char v4; // w20

  if ( (byte_4C332BD & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C332BD = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__HasCachedQuestUseItem(Instance, 0);
  if ( !this->fields.friendshipUpItemSwitchComponent )
    goto LABEL_10;
  v4 = (char)Instance;
  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                             0);
  if ( !Instance )
    goto LABEL_10;
  if ( (v4 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
    Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( Instance )
    {
      FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, 0);
      return;
    }
LABEL_10:
    sub_1C32E7C(Instance);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
}


void PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  bool v5; // w1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_1C32E7C(0);
  PartyListViewManager__SetScrollEnabled(partyListViewManager, v5, 0);
}


void PartyListMenu__SetStartButton(PartyListMenu_o *this, bool isBattle, bool isWaveBattle, const MethodInfo *method)
{
  UnityEngine_Object_o *partyStartButtonTxtSp; // x22
  UISprite_o *v8; // x22
  void *v9; // x0
  uint32_t cctor_finished; // w8
  System_String_o **p_START_BUTTON_WAVE_BATTLE_SP; // x8
  __int64 v12; // x9

  if ( (byte_4C332AD & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&PartyListMenu_TypeInfo);
    byte_4C332AD = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0, 0) )
  {
    v8 = this->fields.partyStartButtonTxtSp;
    v9 = PartyListMenu_TypeInfo;
    cctor_finished = PartyListMenu_TypeInfo->_2.cctor_finished;
    if ( isWaveBattle )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      if ( !v8 )
        goto LABEL_19;
      p_START_BUTTON_WAVE_BATTLE_SP = &PartyListMenu_TypeInfo->static_fields->START_BUTTON_WAVE_BATTLE_SP;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      if ( !v8 )
        goto LABEL_19;
      v12 = 168;
      if ( isBattle )
        v12 = 176;
      p_START_BUTTON_WAVE_BATTLE_SP = (System_String_o **)((char *)PartyListMenu_TypeInfo->static_fields + v12);
    }
    UISprite__set_spriteName(v8, *p_START_BUTTON_WAVE_BATTLE_SP, 0);
    v9 = this->fields.partyStartButtonTxtSp;
    if ( v9 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v9 + 840LL))(v9, *(_QWORD *)(*(_QWORD *)v9 + 848LL));
      return;
    }
LABEL_19:
    sub_1C32E7C(v9);
  }
}


void PartyListMenu__ShowHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w21
  int32_t questId; // w22
  System_String_o *message; // x20
  QuestHintOverwriteMaster_o *Master_object; // x0
  QuestHintOverwriteEntity_o *CompleteCondEntity; // x0
  System_String_o *title; // x21
  int32_t leftIndent; // w22
  Il2CppObject *Instance; // x23
  ScrollMessageDialog_ClickDelegate_o *v12; // x24
  QuestPhaseEntity_o *v13; // [xsp+18h] [xbp-48h] BYREF
  QuestHintEntity_o *entity; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C332BB & 1) == 0 )
  {
    sub_1C32C20(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_PartyListMenu__ShowHintDialogButton_b__177_0__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C332BB = 1;
  }
  entity = 0;
  v13 = 0;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    goto LABEL_25;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestHintOverwriteMaster___);
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
    Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
      Master_object = (QuestHintOverwriteMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      if ( !Master_object )
        goto LABEL_29;
      if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v13, questId, questPhase, 0) )
      {
        Master_object = (QuestHintOverwriteMaster_o *)v13;
        if ( !v13 )
          goto LABEL_29;
        Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessageTitle(v13, 0);
        if ( !v13 )
          goto LABEL_29;
        title = (System_String_o *)Master_object;
        Master_object = (QuestHintOverwriteMaster_o *)QuestPhaseEntity__getHintMessage(v13, 0);
        if ( !v13 )
          goto LABEL_29;
        message = (System_String_o *)Master_object;
        leftIndent = QuestPhaseEntity__getHintLeftIndent(v13, 0);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v12 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C32E6C(ScrollMessageDialog_ClickDelegate_TypeInfo);
  ScrollMessageDialog_ClickDelegate___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyListMenu__ShowHintDialogButton_b__177_0__,
    0);
  if ( !Instance )
LABEL_29:
    sub_1C32E7C(Master_object);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)Instance, title, message, leftIndent, v12, 0, 1, 0, 1, 0);
}


void PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C32E7C(0);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0);
}


void PartyListMenu___OnClickAutoSell_b__130_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_1C32E7C(0);
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
  if ( (byte_4C332C0 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UISprite___);
    this = (PartyListMenu_o *)sub_1C32C20(&StringLiteral_17432/*"btn_badge_organization"*/);
    byte_4C332C0 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v2->fields.commandAssistConfirmButton) == 0 )
    sub_1C32E7C(this);
  eventId = questRestrictionInfo->fields.eventId;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_40507600(eventId, (UISprite_o *)Component_object, (System_String_o *)StringLiteral_17432/*"btn_badge_organization"*/, 0);
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

  if ( (byte_4C33282 & 1) == 0 )
  {
    sub_1C32C20(&PartyListMenu_CallbackFunc_TypeInfo);
    byte_4C33282 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C3313C(v7);
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

  if ( (byte_4C33280 & 1) == 0 )
  {
    sub_1C32C20(&PartyListMenu_TypeInfo);
    byte_4C33280 = 1;
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

  if ( (byte_4C33281 & 1) == 0 )
  {
    sub_1C32C20(&PartyListMenu_TypeInfo);
    byte_4C33281 = 1;
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

  if ( (byte_4C33283 & 1) == 0 )
  {
    sub_1C32C20(&PartyListMenu_CallbackFunc_TypeInfo);
    byte_4C33283 = 1;
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
    v8 = sub_1C6CE78(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C3313C(v7);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7158C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7152C;
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
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  _QWORD v24[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v25; // [xsp+10h] [xbp-60h]
  int32_t v26; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v27; // [xsp+38h] [xbp-38h] BYREF
  int32_t v28; // [xsp+3Ch] [xbp-34h] BYREF

  v27 = n;
  v28 = result;
  v26 = m;
  if ( (byte_4C332C1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&PartyListMenu_ResultKind_TypeInfo);
    byte_4C332C1 = 1;
  }
  v25 = 0u;
  v24[0] = j_il2cpp_value_box_0(
             PartyListMenu_ResultKind_TypeInfo,
             &v28,
             *(_QWORD *)&n,
             *(_QWORD *)&m,
             callback,
             object,
             method,
             v7);
  v24[1] = j_il2cpp_value_box_0(int_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&v25 = j_il2cpp_value_box_0(int_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v24, callback, object);
}


void PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
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
        PartyListViewManager__SetMode_34029804((PartyListViewManager_o *)dialog, 1, 0);
        dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.__4__this;
        if ( dialog )
        {
          PartyListMenu__Callback((PartyListMenu_o *)dialog, 19, v7);
          return;
        }
      }
    }
LABEL_8:
    sub_1C32E7C(dialog);
  }
}
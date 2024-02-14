void __fastcall PartyListMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PartyListMenu_StaticFields *static_fields; // x8
  PartyListMenu_c *v8; // x8
  struct PartyListMenu_StaticFields *v9; // x9
  struct System_Int32_array *v10; // x0
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v12; // x1
  struct PartyListMenu_StaticFields *v13; // x0
  PartyListMenu_c *v14; // x8
  il2cpp_array_size_t v15; // w8
  struct System_Int32_array *v16; // x1
  struct PartyListMenu_StaticFields *v17; // x0
  il2cpp_array_size_t v18; // w8
  struct System_Int32_array *v19; // x1
  struct PartyListMenu_StaticFields *v20; // x0
  il2cpp_array_size_t v21; // w8
  struct System_Int32_array *v22; // x1
  struct PartyListMenu_StaticFields *v23; // x0
  il2cpp_array_size_t v24; // w8
  struct System_Int32_array *v25; // x1
  struct PartyListMenu_StaticFields *v26; // x0
  il2cpp_array_size_t v27; // w8
  struct System_Int32_array *v28; // x1
  struct PartyListMenu_StaticFields *v29; // x0
  il2cpp_array_size_t v30; // w8
  struct System_Int32_array *v31; // x1
  struct PartyListMenu_StaticFields *v32; // x0
  il2cpp_array_size_t v33; // w8
  struct System_Int32_array *v34; // x1
  struct PartyListMenu_StaticFields *v35; // x0
  il2cpp_array_size_t v36; // w8
  struct System_Int32_array *v37; // x1
  struct PartyListMenu_StaticFields *v38; // x0
  il2cpp_array_size_t v39; // w8
  struct System_Int32_array *v40; // x1
  struct PartyListMenu_StaticFields *v41; // x0
  il2cpp_array_size_t v42; // w8
  struct System_Int32_array *v43; // x1
  struct PartyListMenu_StaticFields *v44; // x0
  il2cpp_array_size_t v45; // w8
  struct System_Int32_array *v46; // x1
  struct PartyListMenu_StaticFields *v47; // x0
  il2cpp_array_size_t v48; // w8
  struct System_Single_array *v49; // x1
  struct PartyListMenu_StaticFields *v50; // x0
  struct PartyListMenu_StaticFields *v51; // x0
  __int64 v52; // x1
  struct PartyListMenu_StaticFields *v53; // x0
  __int64 v54; // x1
  struct PartyListMenu_StaticFields *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x0

  if ( (byte_4212157 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, v1);
    sub_B0D8A4(&PartyListMenu_TypeInfo, v2);
    sub_B0D8A4(&float___TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_17195/*"buttontxt_battlestart"*/, v4);
    sub_B0D8A4(&StringLiteral_17196/*"buttontxt_formation_05"*/, v5);
    sub_B0D8A4(&StringLiteral_17200/*"buttontxt_queststart"*/, v6);
    byte_4212157 = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v8 = PartyListMenu_TypeInfo;
  v9 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v9->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v9->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v8->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  max_length = v10->max_length;
  v12 = v10;
  if ( !max_length )
    goto LABEL_43;
  v10->m_Items[1] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 76;
  v13 = PartyListMenu_TypeInfo->static_fields;
  v13->LAYOUT_SIZE_X_TYPE_MIDDLE = v12;
  sub_B0D840(&v13->LAYOUT_SIZE_X_TYPE_MIDDLE, v12);
  v14 = PartyListMenu_TypeInfo;
  PartyListMenu_TypeInfo->static_fields->LAYOUT_SIZE_X_TYPE_BIG = 96;
  v14->static_fields->LAYOUT_POS_X_AUTOSELL_IN_EVENT = -10;
  v14->static_fields->LAYOUT_POS_X_AUTOSELL_NOT_EVENT = -90;
  v14->static_fields->LAYOUT_POS_X_HINT_IN_EVENT = -10;
  v14->static_fields->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v15 = v10->max_length;
  v16 = v10;
  if ( !v15 )
    goto LABEL_43;
  v10->m_Items[1] = 181;
  if ( v15 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 187;
  v17 = PartyListMenu_TypeInfo->static_fields;
  v17->LAYOUT_POS_X_HELP = v16;
  sub_B0D840(&v17->LAYOUT_POS_X_HELP, v16);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v18 = v10->max_length;
  v19 = v10;
  if ( !v18 )
    goto LABEL_43;
  v10->m_Items[1] = 140;
  if ( v18 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 146;
  v20 = PartyListMenu_TypeInfo->static_fields;
  v20->LAYOUT_POS_X_QUESTINFO = v19;
  sub_B0D840(&v20->LAYOUT_POS_X_QUESTINFO, v19);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v21 = v10->max_length;
  v22 = v10;
  if ( !v21 )
    goto LABEL_43;
  v10->m_Items[1] = -45;
  if ( v21 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -94;
  v23 = PartyListMenu_TypeInfo->static_fields;
  v23->LAYOUT_POS_X_AUTOSELL_1 = v22;
  sub_B0D840(&v23->LAYOUT_POS_X_AUTOSELL_1, v22);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v24 = v10->max_length;
  v25 = v10;
  if ( !v24 )
    goto LABEL_43;
  v10->m_Items[1] = 55;
  if ( v24 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 2;
  v26 = PartyListMenu_TypeInfo->static_fields;
  v26->LAYOUT_POS_X_AUTOSELL_2 = v25;
  sub_B0D840(&v26->LAYOUT_POS_X_AUTOSELL_2, v25);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v27 = v10->max_length;
  v28 = v10;
  if ( !v27 )
    goto LABEL_43;
  v10->m_Items[1] = -40;
  if ( v27 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -85;
  v29 = PartyListMenu_TypeInfo->static_fields;
  v29->LAYOUT_POS_X_EVENT = v28;
  sub_B0D840(&v29->LAYOUT_POS_X_EVENT, v28);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v30 = v10->max_length;
  v31 = v10;
  if ( !v30 )
    goto LABEL_43;
  v10->m_Items[1] = -135;
  if ( v30 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -171;
  v32 = PartyListMenu_TypeInfo->static_fields;
  v32->LAYOUT_POS_X_INFOMATION = v31;
  sub_B0D840(&v32->LAYOUT_POS_X_INFOMATION, v31);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v33 = v10->max_length;
  v34 = v10;
  if ( !v33 )
    goto LABEL_43;
  v10->m_Items[1] = -225;
  if ( v33 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -248;
  v35 = PartyListMenu_TypeInfo->static_fields;
  v35->LAYOUT_POS_X_REMOVE = v34;
  sub_B0D840(&v35->LAYOUT_POS_X_REMOVE, v34);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v36 = v10->max_length;
  v37 = v10;
  if ( !v36 )
    goto LABEL_43;
  v10->m_Items[1] = -315;
  if ( v36 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -325;
  v38 = PartyListMenu_TypeInfo->static_fields;
  v38->LAYOUT_POS_X_SWAP = v37;
  sub_B0D840(&v38->LAYOUT_POS_X_SWAP, v37);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v39 = v10->max_length;
  v40 = v10;
  if ( !v39 )
    goto LABEL_43;
  v10->m_Items[1] = 79;
  if ( v39 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -17;
  v41 = PartyListMenu_TypeInfo->static_fields;
  v41->LAYOUT_POS_X_HINT_1 = v40;
  sub_B0D840(&v41->LAYOUT_POS_X_HINT_1, v40);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v42 = v10->max_length;
  v43 = v10;
  if ( !v42 )
    goto LABEL_43;
  v10->m_Items[1] = 79;
  if ( v42 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 79;
  v44 = PartyListMenu_TypeInfo->static_fields;
  v44->LAYOUT_POS_X_HINT_2 = v43;
  sub_B0D840(&v44->LAYOUT_POS_X_HINT_2, v43);
  v10 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v45 = v10->max_length;
  v46 = v10;
  if ( !v45 || (v10->m_Items[1] = -36, v45 == 1) )
  {
LABEL_43:
    v57 = sub_B0D9A8(v10);
    sub_B0D948(v57, 0LL);
  }
  v10->m_Items[2] = -36;
  v47 = PartyListMenu_TypeInfo->static_fields;
  v47->LAYOUT_POS_X_HELP_BUTTON = v46;
  sub_B0D840(&v47->LAYOUT_POS_X_HELP_BUTTON, v46);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v10 = (struct System_Int32_array *)sub_B0D8BC(float___TypeInfo, 2LL);
  if ( !v10 )
LABEL_44:
    sub_B0D97C(v10);
  v48 = v10->max_length;
  v49 = (struct System_Single_array *)v10;
  if ( !v48 )
    goto LABEL_43;
  v10->m_Items[1] = 1116209152;
  if ( v48 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 1115815936;
  v50 = PartyListMenu_TypeInfo->static_fields;
  v50->LAYOUT_FS_OFFSET_OLD = v49;
  sub_B0D840(&v50->LAYOUT_FS_OFFSET_OLD, v49);
  v51 = PartyListMenu_TypeInfo->static_fields;
  v52 = StringLiteral_17200/*"buttontxt_queststart"*/;
  v51->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17200/*"buttontxt_queststart"*/;
  sub_B0D840(&v51->START_BUTTON_QUEST_SP, v52);
  v53 = PartyListMenu_TypeInfo->static_fields;
  v54 = StringLiteral_17195/*"buttontxt_battlestart"*/;
  v53->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17195/*"buttontxt_battlestart"*/;
  sub_B0D840(&v53->START_BUTTON_BATTLE_SP, v54);
  v55 = PartyListMenu_TypeInfo->static_fields;
  v56 = StringLiteral_17196/*"buttontxt_formation_05"*/;
  v55->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17196/*"buttontxt_formation_05"*/;
  sub_B0D840(&v55->START_BUTTON_WAVE_BATTLE_SP, v56);
}


void __fastcall PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4212156 & 1) == 0 )
  {
    sub_B0D8A4(&BaseMenu_TypeInfo, method);
    byte_4212156 = 1;
  }
  this->fields.isSelectItemEnable = 1;
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyListMenu__Callback(PartyListMenu_o *this, int32_t result, const MethodInfo *method)
{
  PartyListMenu_CallbackFunc_o *callbackFunc; // x20
  ListViewManager_o *partyListViewManager; // x0
  int32_t CenterIndex; // w2

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B0D840(&this->fields.callbackFunc, 0LL);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
    PartyListMenu_CallbackFunc__Invoke(callbackFunc, result, CenterIndex, -1, 0LL);
  }
}


int32_t __fastcall PartyListMenu__CheckEnableAutoOrganizationButton(
        PartyListMenu_o *this,
        QuestRestrictionInfo_o *restrictionInfo,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  int32_t DeckMemberMax; // w20

  if ( (byte_4212124 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, restrictionInfo);
    byte_4212124 = 1;
  }
  if ( !restrictionInfo || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(restrictionInfo, 0LL) )
    return 0;
  v4 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v4->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsServantNum(restrictionInfo, 0LL) )
  {
    DeckMemberMax = restrictionInfo->fields.myServantNumMax;
    if ( DeckMemberMax <= 0 )
      DeckMemberMax = restrictionInfo->fields.servantNumMax;
  }
  if ( DeckMemberMax - QuestRestrictionInfo__GetMyServantOrNpcRestrictionNum(restrictionInfo, 0LL) >= 1 )
    return 0;
  else
    return 3;
}


void __fastcall PartyListMenu__CheckFriendshipUpItemTutorial(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  PartyOrganizationUtility_o *v5; // x0

  if ( (byte_4212145 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v3);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v4);
    byte_4212145 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28088484(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v5 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v5 )
        sub_B0D97C(0LL);
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(v5, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall PartyListMenu__Close(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Close_19896636(this, 0LL, v2);
}


void __fastcall PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_421214A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_421214A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseAssistEffectConfirmDialog(Instance, 0LL);
}


void __fastcall PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4212150 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4212150 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseCenterEffectDetailDialog(Instance, 0LL, 0LL);
}


void __fastcall PartyListMenu__Close_19896636(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x21
  System_Action_o *v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x20

  if ( (byte_4212126 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_PartyListMenu_EndCloseList__, v5);
    sub_B0D8A4(&Method_PartyListMenu_EndClose__, v6);
    byte_4212126 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, callback, method);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0LL);
  if ( !partyListViewManager )
    sub_B0D97C(v9);
  PartyListViewManager__SetMode_31372592(partyListViewManager, 1, v8, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall PartyListMenu__DispInfoPanel(PartyListMenu_o *this, bool disp, const MethodInfo *method)
{
  PartyListViewManager_o *infoPanel; // x0

  if ( disp )
  {
    infoPanel = (PartyListViewManager_o *)this->fields.infoPanel;
    if ( !infoPanel )
      goto LABEL_9;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)infoPanel, 0LL) && this->fields.state == 3 )
    {
      infoPanel = this->fields.partyListViewManager;
      if ( !infoPanel )
        goto LABEL_9;
      PartyListViewManager__RefreshDrawPartyInfo(infoPanel, 0LL);
    }
  }
  infoPanel = (PartyListViewManager_o *)this->fields.infoPanel;
  if ( !infoPanel )
LABEL_9:
    sub_B0D97C(infoPanel);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0LL);
}


void __fastcall PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4212128 & 1) == 0 )
  {
    sub_B0D8A4(&PartyListViewManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu_OnSelectItem__, v4);
    byte_4212128 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v6 = (PartyListViewManager_CallbackFunc_o *)sub_B0D974(PartyListViewManager_CallbackFunc_TypeInfo, method, v2);
  PartyListViewManager_CallbackFunc___ctor(v6, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
  if ( !partyListViewManager )
    sub_B0D97C(v7);
  PartyListViewManager__SetMode(partyListViewManager, 2, v6, 0LL);
}


void __fastcall PartyListMenu__EndClose(PartyListMenu_o *this, const MethodInfo *method)
{
  System_Action_o *closeCallbackFunc; // x19

  PartyListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B0D840(&this->fields.closeCallbackFunc, 0LL);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall PartyListMenu__EndCloseList(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__EndCloseTutorialArrowChange(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v4; // x2

  tutorialMaskBase = this->fields.tutorialMaskBase;
  if ( !tutorialMaskBase
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        (tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton) == 0LL)
    || (tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(tutorialMaskBase, 0, 0LL),
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager,
        this->fields.state = 3,
        !tutorialMaskBase) )
  {
    sub_B0D97C(tutorialMaskBase);
  }
  PartyListViewManager__SetMode_31372464((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  PartyListMenu__Callback(this, 2, v4);
}


void __fastcall PartyListMenu__EndCloseTutorialArrowEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  PartyListMenu_CallbackFunc_o *callbackFunc; // x20

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL) )
  {
    sub_B0D97C(partyListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B0D840(&this->fields.callbackFunc, 0LL);
    PartyListMenu_CallbackFunc__Invoke(callbackFunc, 17, 0, 1, 0LL);
  }
}


void __fastcall PartyListMenu__EndCloseTutorialArrowStart(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  partyListViewManager = this->fields.partyListViewManager;
  this->fields.state = 3;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL )
  {
    sub_B0D97C(partyListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  PartyListMenu__Callback(this, 8, v4);
}


void __fastcall PartyListMenu__EndEnter(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_Action_o *closeCallbackFunc; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B0D840(&this->fields.closeCallbackFunc, 0LL);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall PartyListMenu__EndHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__EndOpen(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v13; // x21
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  const MethodInfo *v15; // x1
  int32_t tutorialMode; // w8
  WebViewObject_o *v17; // x20
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v20; // kr00_8
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  WebViewManager_o *v25; // x0
  float v26; // s10
  float v27; // s11
  float v28; // s12
  float v29; // s13
  CommonUI_o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x21
  float v34; // s0
  float v35; // s1
  PartyListViewManager_o *v36; // x20
  PartyListViewManager_CallbackFunc_o *v37; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  float v40; // s4
  float v41; // s5
  float v42; // s6
  float v43; // s7
  WebViewManager_o *Instance; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  WebViewObject_o *v48; // x20
  UnityEngine_Vector2_o v49; // kr30_8
  float v50; // s4
  float v51; // s5
  float v52; // s6
  float v53; // s7
  CommonUI_o *v54; // x20
  System_String_o *v55; // x0
  const char *name; // kr38_8
  Il2CppClass *klass; // kr40_8
  System_String_o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  System_Action_o *v61; // x22
  System_Action_o *openCallbackFunc; // x20
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v64; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v65; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v69; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v70; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_4212125 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&PartyListViewManager_CallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_FSOffset___, v5);
    sub_B0D8A4(&FSUtility_TypeInfo, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&Method_PartyListMenu_EndOpenTutorialArrow__, v8);
    sub_B0D8A4(&Method_PartyListMenu_OnSelectItem__, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_B0D8A4(&StringLiteral_13559/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, v11);
    byte_4212125 = 1;
  }
  memset(&methoda, 0, 48);
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v13 = (PartyListViewManager_CallbackFunc_o *)sub_B0D974(PartyListViewManager_CallbackFunc_TypeInfo, method, v2);
    PartyListViewManager_CallbackFunc___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
    if ( !partyListViewManager )
      goto LABEL_56;
    PartyListViewManager__SetMode(partyListViewManager, 2, v13, 0LL);
    tutorialMode = this->fields.tutorialMode;
    if ( tutorialMode == 3 )
    {
      tutorialMaskBase = this->fields.tutorialMaskBase;
      if ( tutorialMaskBase )
      {
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
        if ( tutorialMaskBase )
        {
          tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
          if ( tutorialMaskBase )
          {
            UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
            tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
            if ( tutorialMaskBase )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
                tutorialMaskBase,
                0LL,
                0LL,
                tutorialMaskBase->klass[1]._1.interfaceOffsets);
              tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyStartButton;
              if ( tutorialMaskBase )
              {
                Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                            (UnityEngine_Component_o *)tutorialMaskBase,
                                            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 0, 0LL);
                y = AddOffset.fields.y;
                x = AddOffset.fields.x;
                v67.fields.m_Width = 190.0;
                v67.fields.m_Height = 90.0;
                v67.fields.m_XMin = AddOffset.fields.x + 329.0;
                v67.fields.m_YMin = AddOffset.fields.y + -291.0;
                UnityEngine_Rect___ctor(v67, v40, v41, v42, v43, &methoda);
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v27 = *((float *)&methoda.methodPointer + 1);
                v26 = *(float *)&methoda.methodPointer;
                v29 = *((float *)&methoda.invoker_method + 1);
                v28 = *(float *)&methoda.invoker_method;
                v30 = (CommonUI_o *)Instance;
                v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v45, v46);
                System_Action___ctor(v33, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( v30 )
                {
                  v34 = 422.0;
                  v35 = -231.0;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
LABEL_56:
      sub_B0D97C(tutorialMaskBase);
    }
    if ( tutorialMode != 2 )
    {
      if ( tutorialMode != 1 )
        goto LABEL_51;
      tutorialMaskBase = this->fields.tutorialMaskBase;
      if ( tutorialMaskBase )
      {
        UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
        tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
        if ( tutorialMaskBase )
        {
          tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
          if ( tutorialMaskBase )
          {
            UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
            tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
            if ( tutorialMaskBase )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))tutorialMaskBase->klass[1]._1.implementedInterfaces)(
                tutorialMaskBase,
                0LL,
                0LL,
                tutorialMaskBase->klass[1]._1.interfaceOffsets);
              tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyChangeButton;
              if ( tutorialMaskBase )
              {
                v17 = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)tutorialMaskBase,
                        (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v20 = FSUtility__GetAddOffset((FSOffset_o *)v17, 1, 0LL);
                y = v20.fields.y;
                x = v20.fields.x;
                v66.fields.m_Width = 160.0;
                v66.fields.m_Height = 80.0;
                v66.fields.m_XMin = v20.fields.x + -200.0;
                v66.fields.m_YMin = v20.fields.y + -295.0;
                UnityEngine_Rect___ctor(v66, v21, v22, v23, v24, (const MethodInfo *)&methoda.return_type);
                v25 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v27 = *((float *)&methoda.return_type + 1);
                v26 = *(float *)&methoda.return_type;
                v29 = *((float *)&methoda.parameters + 1);
                v28 = *(float *)&methoda.parameters;
                v30 = (CommonUI_o *)v25;
                v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
                System_Action___ctor(v33, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( v30 )
                {
                  v34 = -120.0;
                  v35 = -255.0;
LABEL_31:
                  v64.fields.x = x + v34;
                  v64.fields.y = y + v35;
                  v70.fields.m_XMin = v26;
                  v70.fields.m_YMin = v27;
                  v70.fields.m_Width = v28;
                  v70.fields.m_Height = v29;
                  CommonUI__OpenTutorialArrowMark(v30, v64, 0.0, v70, v33, 0LL);
                  goto LABEL_51;
                }
              }
            }
          }
        }
      }
      goto LABEL_56;
    }
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
    if ( !tutorialMaskBase )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
    tutorialMaskBase = (UnityEngine_GameObject_o *)PartyListViewManager__GetItem(
                                                     (PartyListViewManager_o *)tutorialMaskBase,
                                                     0,
                                                     0LL);
    if ( !tutorialPartyOrganizationChangeEmptyObject )
      goto LABEL_56;
    PartyOrganizationChangeObject__SetItem(
      tutorialPartyOrganizationChangeEmptyObject,
      (PartyListViewItem_o *)tutorialMaskBase,
      1,
      0LL,
      0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    PartyListViewManager__SetMode_31372464((PartyListViewManager_o *)tutorialMaskBase, 3, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)tutorialMaskBase,
                                                     0LL);
    if ( !tutorialMaskBase )
      goto LABEL_56;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                     (UnityEngine_Transform_o *)tutorialMaskBase,
                                                     0LL);
    if ( !tutorialMaskBase )
      goto LABEL_56;
    v48 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v49 = FSUtility__GetAddOffset((FSOffset_o *)v48, 1, 0LL);
    v68.fields.m_Width = 150.0;
    v68.fields.m_Height = 380.0;
    v68.fields.m_XMin = v49.fields.x + -320.0;
    v68.fields.m_YMin = v49.fields.y + -205.0;
    UnityEngine_Rect___ctor(v68, v50, v51, v52, v53, (const MethodInfo *)&methoda.name);
    v54 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, 0LL);
    name = methoda.name;
    klass = methoda.klass;
    v58 = v55;
    v61 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v59, v60);
    System_Action___ctor(v61, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
    if ( !v54 )
      goto LABEL_56;
    v65.fields.x = v49.fields.x + -245.0;
    v65.fields.y = v49.fields.y + 70.0;
    *(_QWORD *)&v69.fields.m_XMin = name;
    *(_QWORD *)&v69.fields.m_Width = klass;
    CommonUI__OpenTutorialNotificationDialogArrow(
      v54,
      v58,
      v65,
      v69,
      0.0,
      (UnityEngine_Vector2_o)0xC220000042C80000LL,
      -1,
      v61,
      0LL);
  }
  else
  {
    if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      v36 = this->fields.partyListViewManager;
      v37 = (PartyListViewManager_CallbackFunc_o *)sub_B0D974(PartyListViewManager_CallbackFunc_TypeInfo, method, v2);
      PartyListViewManager_CallbackFunc___ctor(v37, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
      if ( v36 )
      {
        PartyListViewManager__SetMode(v36, 2, v37, 0LL);
        goto LABEL_51;
      }
      goto LABEL_56;
    }
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    PartyListViewManager__SetMode_31372464((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  }
LABEL_51:
  if ( this->fields.isHintDialogOpenFlag )
  {
    *(_WORD *)&this->fields.isHintDialogOpenFlag = 256;
    PartyListMenu__ShowHintDialogButton(this, v15);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_B0D840(&this->fields.openCallbackFunc, 0LL);
    System_Action__Invoke(openCallbackFunc, 0LL);
  }
}


void __fastcall PartyListMenu__EndOpenTutorialArrow(PartyListMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 7;
}


void __fastcall PartyListMenu__Enter(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Enter_19896976(this, 0LL, v2);
}


void __fastcall PartyListMenu__Enter_19896976(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_4212127 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_PartyListMenu_EndEnter__, v5);
    byte_4212127 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B0D840(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyListMenu_EndEnter__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0LL);
}


void __fastcall PartyListMenu__ExecuteOpenCallback(PartyListMenu_o *this, const MethodInfo *method)
{
  System_Action_o *hintDialogCloseCallbackFunc; // x19
  struct System_Action_o **p_hintDialogCloseCallbackFunc; // x0

  hintDialogCloseCallbackFunc = this->fields.hintDialogCloseCallbackFunc;
  this->fields.isDisplayHintDialog = 0;
  if ( hintDialogCloseCallbackFunc )
  {
    p_hintDialogCloseCallbackFunc = &this->fields.hintDialogCloseCallbackFunc;
    *p_hintDialogCloseCallbackFunc = 0LL;
    sub_B0D840(p_hintDialogCloseCallbackFunc, 0LL);
    System_Action__Invoke(hintDialogCloseCallbackFunc, 0LL);
  }
}


float __fastcall PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_421211B & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_421211B = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(68.0, 1, 0LL);
}


float __fastcall PartyListMenu__FSOffsetX_19884080(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  if ( (byte_421211C & 1) == 0 )
  {
    sub_B0D8A4(&FSUtility_TypeInfo, method);
    byte_421211C = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(ver, 1, 0LL);
}


void __fastcall PartyListMenu__ForceSetCenterItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0LL);
}


PartyListViewItem_o *__fastcall PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 v5; // x11

  v2 = this;
  if ( (byte_4212121 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_B0D8A4(&PartyListViewItem_TypeInfo, method);
    byte_4212121 = 1;
  }
  partyListViewManager = v2->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(this);
  centerItem = (PartyListViewItem_o *)partyListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0LL;
  v5 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&centerItem->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (PartyListViewItem_c *)centerItem->klass->_2.typeHierarchy[v5 - 1] == PartyListViewItem_TypeInfo )
    return centerItem;
  return 0LL;
}


PartyListViewItem_o *__fastcall PartyListMenu__GetItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  return PartyListViewManager__GetItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__HideFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *friendshipUpItemUseButton; // x0

  friendshipUpItemUseButton = (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton
    || (friendshipUpItemUseButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                 friendshipUpItemUseButton,
                                                                 0LL)) == 0LL )
  {
    sub_B0D97C(friendshipUpItemUseButton);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)friendshipUpItemUseButton, 0, 0LL);
}


void __fastcall PartyListMenu__Init(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__DestroyList(partyListViewManager, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyChangeButton) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL )
  {
    sub_B0D97C(partyListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  this->fields.setupInfo = 0LL;
  sub_B0D840(&this->fields.setupInfo, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_B0D840(&this->fields.questRestrictionInfo, 0LL);
  this->fields.isDisplayHintDialog = 0;
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212148 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4212148 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B0D97C(Instance);
  }
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          questRestrictionInfo->fields.questPhase,
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
    goto LABEL_12;
  return QuestPhaseEntity__IsActiveAssistSkill(entity, 0LL);
}


bool __fastcall PartyListMenu__IsActiveCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *v8; // x8
  struct QuestRestrictionInfo_o *v9; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421214C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v5);
    byte_421214C = 1;
  }
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
    v8 = this->fields.questRestrictionInfo;
    if ( !v8 || !Master_WarQuestSelectionMaster )
      goto LABEL_17;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            v8->fields.eventId,
            (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      LOBYTE(questRestrictionInfo) = 0;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
    if ( !entity )
      goto LABEL_17;
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)EventDetailEntity__GetIgnoreCommandAssistQuestIds(
                                                                                      (EventDetailEntity_o *)entity,
                                                                                      0LL);
    if ( !Master_WarQuestSelectionMaster )
    {
      LOBYTE(questRestrictionInfo) = 1;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    v9 = this->fields.questRestrictionInfo;
    if ( !v9 )
LABEL_17:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
                                      v9->fields.questId,
                                      (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


bool __fastcall PartyListMenu__IsDisplayAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  EventDetailEntity_o *v13; // [xsp+0h] [xbp-20h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4212147 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_AssistMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4212147 = 1;
  }
  v13 = 0LL;
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_22;
  if ( QuestPhaseMaster__TryGetEntity(
         (QuestPhaseMaster_o *)Instance,
         &entity,
         questRestrictionInfo->fields.questId,
         questRestrictionInfo->fields.questPhase,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( !entity )
      goto LABEL_22;
    if ( QuestPhaseEntity__IsHideAssistConfButton(entity, 0LL) )
      return 0;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v10 = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_22:
    sub_B0D97C(Instance);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v13,
          v10->fields.eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.datalist) )
    return 0;
  Instance = (DataManager_o *)v13;
  if ( !v13 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag(v13, 0x80000000000LL, 0LL);
}


bool __fastcall PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCommandAssistMaster_o *v9; // x20
  struct QuestRestrictionInfo_o *v10; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421214B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v6);
    byte_421214B = 1;
  }
  entity = 0LL;
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_21;
      v9 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                                       (EventDetailEntity_o *)entity,
                                                                       0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v10 = this->fields.questRestrictionInfo;
        if ( v10 )
        {
          if ( v9 )
          {
            Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetValidEntityList(
                                                                             v9,
                                                                             v10->fields.eventId,
                                                                             -1,
                                                                             0LL);
            if ( Master_WarQuestSelectionMaster )
              return LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_21:
        sub_B0D97C(Master_WarQuestSelectionMaster);
      }
    }
  }
  return 0;
}


bool __fastcall PartyListMenu__IsDisplayLiveConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v10; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421214E & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_19345/*"icon_center_bg"*/, v6);
    byte_421214E = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_19345/*"icon_center_bg"*/, 0LL);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0LL),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0LL)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                      Instance,
                                      Instance->klass[2]._1.interopData),
        (v10 = this->fields.questRestrictionInfo) == 0LL)
    || (Instance = (DataManager_o *)entity) == 0LL )
  {
LABEL_19:
    sub_B0D97C(Instance);
  }
  return QuestEntity__HasFlag_23244236((QuestEntity_o *)entity, 0x100000000000000LL, v10->fields.questPhase, 0LL);
}


bool __fastcall PartyListMenu__IsHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v13; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4212151 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4212151 = 1;
  }
  entity = 0LL;
  v13 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( !QuestHintMaster__TryGetEntity(
          (QuestHintMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          questId,
          questPhase,
          0LL) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v13, questId, questPhase, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)v13;
      if ( v13 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v13, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_19:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
    return 0;
  }
  return 1;
}


bool __fastcall PartyListMenu__IsHintDialogEveryTime(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestHintMaster_o *Master_WarQuestSelectionMaster; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4212152 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    byte_4212152 = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)QuestHintMaster__TryGetEntity(
                                                          Master_WarQuestSelectionMaster,
                                                          &entity,
                                                          questId,
                                                          questPhase,
                                                          0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return entity->fields.openType == 0;
LABEL_23:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &v11,
          questId,
          questPhase,
          0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)v11;
  if ( !v11 )
    goto LABEL_23;
  return QuestPhaseEntity__getHintOpenType(v11, 0LL) == 0;
}


bool __fastcall PartyListMenu__IsNeedHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t questId; // w2
  int32_t questPhase; // w3
  bool v6; // w20
  int32_t eventId; // w0
  _BOOL8 IsServantNum; // x0
  struct QuestRestrictionInfo_o *v9; // x8
  unsigned int v10; // w8

  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( this->fields.menuKind == 9 )
    {
      questId = questRestrictionInfo->fields.questId;
      questPhase = questRestrictionInfo->fields.questPhase;
      v6 = 1;
      eventId = questRestrictionInfo->fields.eventId;
    }
    else
    {
      IsServantNum = QuestRestrictionInfo__IsServantNum(questRestrictionInfo, 0LL);
      if ( IsServantNum )
        return 0;
      v9 = this->fields.questRestrictionInfo;
      if ( !v9 )
        sub_B0D97C(IsServantNum);
      eventId = v9->fields.eventId;
      questId = v9->fields.questId;
      questPhase = v9->fields.questPhase;
      v6 = 1;
    }
    if ( EventTutorialMaster__IsTutorialDataExists(eventId, 45, questId, questPhase, 0, 0, 1, 0LL) )
      return v6;
  }
  v10 = this->fields.menuKind - 1;
  if ( v10 <= 6 )
    return (v10 & 0x7F) == 1;
  return 1;
}


bool __fastcall PartyListMenu__IsUseEventLimitEquipUserWill(
        PartyListMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  CommonUI_o *v11; // x20
  AssistEffectConfirmDialog_ClickDelegate_o *v12; // x22

  if ( (byte_4212149 & 1) == 0 )
  {
    sub_B0D8A4(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4212149 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (eventId = questRestrictionInfo->fields.eventId,
          v11 = (CommonUI_o *)Instance,
          v12 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_B0D974(
                                                               AssistEffectConfirmDialog_ClickDelegate_TypeInfo,
                                                               v7,
                                                               v8),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0LL),
          !v11) )
    {
      sub_B0D97C(Instance);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v11, eventId, v12, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickAutoOrganization(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewManager_o *partyListViewManager; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t eventId; // w20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  PartyOrganizationAutoOrganizationConfirmDialog_o *autoOrganizationConfirmDialog; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v14; // x22

  if ( (byte_4212135 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu_OnClickAutoOrganization__, v3);
    sub_B0D8A4(&Method_PartyListMenu__OnClickAutoOrganization_b__130_0__, v4);
    byte_4212135 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_14;
    if ( (ListViewManager__GetCenterIndex(partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        eventId = questRestrictionInfo->fields.eventId;
      else
        eventId = 0;
      v8 = Method_PartyListMenu_OnClickAutoOrganization__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoOrganization__ + 75) & 2) != 0 )
        v8 = (_QWORD *)sub_B0D8AC(Method_PartyListMenu_OnClickAutoOrganization__);
      v9 = (System_Reflection_MethodBase_o *)sub_B0D888(v8, v8[3]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, v10);
      autoOrganizationConfirmDialog = this->fields.autoOrganizationConfirmDialog;
      v14 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_B0D974(
                                                                                PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
                                                                                v12,
                                                                                v13);
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        v14,
        (Il2CppObject *)this,
        Method_PartyListMenu__OnClickAutoOrganization_b__130_0__,
        0LL);
      if ( autoOrganizationConfirmDialog )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__Open(
          autoOrganizationConfirmDialog,
          eventId,
          questRestrictionInfo != 0LL,
          v14,
          0LL);
        return;
      }
LABEL_14:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickAutoSell(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  DropAutoSellDlgComponent_CallbackFunc_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4212132 & 1) == 0 )
  {
    sub_B0D8A4(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu__OnClickAutoSell_b__126_0__, v3);
    sub_B0D8A4(&SoundManager_TypeInfo, v4);
    byte_4212132 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v8 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_B0D974(DropAutoSellDlgComponent_CallbackFunc_TypeInfo, v6, v7);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__126_0__,
    0LL);
  if ( !dropAutoSellDialog )
    sub_B0D97C(v9);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v8, 0LL);
}


void __fastcall PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4212129 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212129 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 0, v4);
  }
}


void __fastcall PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  CommonUI_o *v12; // x20
  System_Action_o *v13; // x23

  if ( (byte_421214F & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu_CloseCenterEffectDetailDialog__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421214F = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v12 = (CommonUI_o *)Instance,
          v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8),
          System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0LL),
          !v12) )
    {
      sub_B0D97C(Instance);
    }
    CommonUI__OpenCenterEffectDetailDialog(v12, questId, questPhase, v13, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickChange(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v8; // x2
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_421212A & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu_EndCloseTutorialArrowChange__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_421212A = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_19;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 1 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        this->fields.state = 8;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowChange__, 0LL);
        if ( !Instance )
          goto LABEL_19;
        CommonUI__CloseTutorialArrowMark(Instance, v12, 0LL);
      }
    }
    else if ( state == 2 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 2, v8);
        return;
      }
LABEL_19:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickCommandAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  WebViewManager_o *Instance; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v11; // x19
  int32_t eventId; // w20
  Il2CppObject *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x21

  if ( (byte_421214D & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v3);
    sub_B0D8A4(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_421214D = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v6 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B0D8AC(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, v8);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v11 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v13 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15),
          System_Action___ctor(v16, v13, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v11) )
    {
      sub_B0D97C(Instance);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v11, eventId, v16, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickDecide(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_7;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_421212F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421212F = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_12;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 6, v4);
        return;
      }
LABEL_12:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckName(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v4; // w1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_421212E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421212E = 1;
  }
  if ( this->fields.state == 2 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v4 = questRestrictionInfo && questRestrictionInfo->fields.eventDeckNum > 0;
    if ( !PartyListViewItem__IsSpecificMenuKind_31367280(this->fields.menuKind, v4, 0LL) )
    {
      partyListViewManager = this->fields.partyListViewManager;
      if ( !partyListViewManager )
        goto LABEL_16;
      if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        partyListViewManager = this->fields.partyListViewManager;
        this->fields.state = 3;
        if ( partyListViewManager )
        {
          PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
          PartyListMenu__Callback(this, 5, v6);
          return;
        }
LABEL_16:
        sub_B0D97C(partyListViewManager);
      }
    }
  }
}


void __fastcall PartyListMenu__OnClickEdit(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4212130 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212130 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_12;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 7, v4);
        return;
      }
LABEL_12:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_c *v4; // x0
  PartyOrganizationUtility_c *v5; // x0
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v7; // w1
  PartyOrganizationUtility_c *v8; // x0

  if ( (byte_4212155 & 1) == 0 )
  {
    sub_B0D8A4(&PartyOrganizationUtility_TypeInfo, method);
    sub_B0D8A4(&SoundManager_TypeInfo, v3);
    byte_4212155 = 1;
  }
  v4 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v4 = PartyOrganizationUtility_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v4->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v8 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v8 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v7 = 1;
      goto LABEL_23;
    }
LABEL_24:
    sub_B0D97C(friendshipUpItemUseButton);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v5 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v5 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v5->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_24;
  v7 = 0;
LABEL_23:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v7, 0LL);
}


void __fastcall PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t eventId; // w20
  System_Action_o *v13; // x21
  struct QuestRestrictionInfo_o *v14; // x8
  int32_t menuKind; // w8
  CommonUI_o *Instance; // x19
  TutorialFlag_ImageId_array *v17; // x1
  int v18; // w8
  __int64 v19; // x0

  if ( (byte_4212143 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&TutorialFlag_ImageId___TypeInfo, v3);
    sub_B0D8A4(&Method_PartyListMenu_EndHelp__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    byte_4212143 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
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
                               0LL);
      if ( (IsTutorialDataExists & 1) != 0 )
      {
        v11 = this->fields.questRestrictionInfo;
        if ( v11 )
        {
          eventId = v11->fields.eventId;
          v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
          System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
          v14 = this->fields.questRestrictionInfo;
          if ( v14 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_25639108(
              eventId,
              45,
              v13,
              v14->fields.questId,
              v14->fields.questPhase,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_25:
        sub_B0D97C(IsTutorialDataExists);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_B0D8BC(TutorialFlag_ImageId___TypeInfo, 1LL);
        if ( !IsTutorialDataExists )
          goto LABEL_25;
        v17 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( *(_DWORD *)(IsTutorialDataExists + 24) )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 644;
          if ( !Instance )
            goto LABEL_25;
          goto LABEL_24;
        }
      }
      else
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_B0D8BC(TutorialFlag_ImageId___TypeInfo, 2LL);
        if ( !IsTutorialDataExists )
          goto LABEL_25;
        v18 = *(_DWORD *)(IsTutorialDataExists + 24);
        v17 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v18 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v18 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_25;
LABEL_24:
            CommonUI__OpenTutorialImageDialog(Instance, v17, -1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
        }
      }
      v19 = sub_B0D9A8(IsTutorialDataExists);
      sub_B0D948(v19, 0LL);
    }
  }
}


void __fastcall PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4212153 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212153 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  PartyListMenu__ShowHintDialogButton(this, v3);
}


void __fastcall PartyListMenu__OnClickInfomation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4212134 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212134 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_12;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 11, v4);
        return;
      }
LABEL_12:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickLimitMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void __fastcall PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_421212B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421212B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 9, v4);
  }
}


void __fastcall PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4212136 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212136 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_12;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 12, v4);
        return;
      }
LABEL_12:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4212133 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212133 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 18, v4);
  }
}


void __fastcall PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_421212D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421212D = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_12;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 4, v4);
        return;
      }
LABEL_12:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickStart(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v8; // x2
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  System_Action_o *v12; // x21

  if ( (byte_4212131 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu_EndCloseTutorialArrowStart__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&SoundManager_TypeInfo, v5);
    byte_4212131 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_16;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 3 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(8, 0LL);
        this->fields.state = 8;
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
        System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowStart__, 0LL);
        if ( !Instance )
          goto LABEL_16;
        CommonUI__CloseTutorialArrowMark(Instance, v12, 0LL);
      }
    }
    else if ( state == 2 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 8, v8);
        return;
      }
LABEL_16:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_421212C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421212C = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_12;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 3, v4);
        return;
      }
LABEL_12:
      sub_B0D97C(partyListViewManager);
    }
  }
}


void __fastcall PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4212138 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212138 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4212141 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212141 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4212139 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212139 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_421213A & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421213A = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_421213B & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421213B = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_421213C & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421213C = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_421213D & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421213D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_421213E & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421213E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_421213F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421213F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4212140 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4212140 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B0D97C(0LL);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x21
  __int64 v9; // x0

  if ( (byte_4212142 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4212142 = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0LL);
    if ( !Instance )
      sub_B0D97C(v9);
    CommonUI__CloseTutorialNotificationDialogArrow_17042172(Instance, v8, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__OnSelectItem(
        PartyListMenu_o *this,
        int32_t kind,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  int v11; // w8
  PartyListMenu_CallbackFunc_o *callbackFunc; // x22
  int32_t v13; // w23
  PartyListViewManager_o *partyListViewManager; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  PartyListViewManager_CallbackFunc_o *v17; // x21
  __int64 v18; // x0

  if ( (byte_4212137 & 1) == 0 )
  {
    sub_B0D8A4(&PartyListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_PartyListMenu_OnSelectItem__, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    byte_4212137 = 1;
  }
  if ( this->fields.state == 2 && this->fields.isSelectItemEnable )
  {
    v11 = kind - 1;
    if ( (unsigned int)(kind - 1) >= 4 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      v17 = (PartyListViewManager_CallbackFunc_o *)sub_B0D974(PartyListViewManager_CallbackFunc_TypeInfo, v15, v16);
      PartyListViewManager_CallbackFunc___ctor(v17, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
      if ( !partyListViewManager )
        sub_B0D97C(v18);
      PartyListViewManager__SetMode(partyListViewManager, 2, v17, 0LL);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v13 = dword_3201200[v11];
        this->fields.callbackFunc = 0LL;
        sub_B0D840(&this->fields.callbackFunc, 0LL);
        PartyListMenu_CallbackFunc__Invoke(callbackFunc, v13, n, m, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__Open(
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  const MethodInfo *v39; // x1
  struct System_Action_o **v40; // x20
  struct System_Action_o *v41; // x1
  const MethodInfo *v42; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  struct System_Action_o **p_openCallbackFunc; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v46; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v48; // x1
  _BOOL4 v49; // w8
  struct System_Action_o **v50; // x20
  struct System_Action_o *v51; // x1
  const MethodInfo *v52; // x1
  bool v53; // w21
  struct System_Int32_array *eventIdList; // x8
  PartyListMenu_c *v55; // x0
  int32_t *p_LAYOUT_POS_X_AUTOSELL_IN_EVENT; // x8
  int32_t v57; // w24
  UnityEngine_GameObject_o *v58; // x0
  const MethodInfo *v59; // x4
  PartyListMenu_c *v60; // x8
  UnityEngine_GameObject_o *v61; // x25
  UnityEngine_GameObject_o *v62; // x24
  const MethodInfo *v63; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v65; // x1
  UnityEngine_Transform_o *v66; // x24
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_1_FS; // kr00_8
  UnityEngine_GameObject_o *v70; // x24
  const MethodInfo *v71; // x1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_2_FS; // kr08_8
  int v73; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v76; // x1
  char v77; // w24
  UISprite_o *v78; // x24
  Il2CppObject *v79; // x0
  System_String_o *v80; // x25
  const MethodInfo *v81; // x1
  WebViewObject_o *Component_WebViewObject; // x24
  int v83; // s0
  System_String_o *v87; // x1
  const MethodInfo *v88; // x1
  WebViewObject_o *v89; // x24
  int v90; // s0
  struct UILabel_o *assistCanNotLabel; // x24
  char v95; // w24
  __int64 v96; // x1
  __int64 v97; // x2
  int32_t v98; // w24
  System_Action_o *v99; // x25
  const MethodInfo *v100; // x1
  WebViewObject_o *v101; // x24
  int v102; // s0
  System_String_o *v106; // x1
  const MethodInfo *v107; // x1
  WebViewObject_o *v108; // x24
  int v109; // s0
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v114; // w24
  int32_t v115; // w24
  int32_t v116; // w22
  const MethodInfo *v117; // x1
  __int64 v118; // x1
  struct QuestRestrictionInfo_o *v119; // x9
  int32_t v120; // w22
  QuestHintDialogOpenManager_c *v121; // x0
  bool v122; // w24
  char v123; // w20
  PartyListMenu_c *v124; // x0
  int32_t *p_LAYOUT_POS_X_HINT_IN_EVENT; // x8
  int32_t v126; // w20
  UnityEngine_GameObject_o *v127; // x0
  const MethodInfo *v128; // x4
  PartyListMenu_c *v129; // x8
  UnityEngine_GameObject_o *v130; // x21
  BalanceConfig_c *v131; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  __int64 v134; // x1
  __int64 v135; // x2
  System_Action_o *v136; // x20
  QuestHintDialogOpenManager_c *v137; // x0
  bool v138; // w24
  struct System_Action_o *v139; // x1
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4212122 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&menuKind);
    sub_B0D8A4(&AtlasManager_TypeInfo, v21);
    sub_B0D8A4(&BalanceConfig_TypeInfo, v22);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v23);
    sub_B0D8A4(&CondType_TypeInfo, v24);
    sub_B0D8A4(&int_TypeInfo, v25);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v26);
    sub_B0D8A4(&Method_PartyListMenu_EndOpen__, v27);
    sub_B0D8A4(&Method_PartyListMenu__Open_b__99_0__, v28);
    sub_B0D8A4(&PartyListMenu_TypeInfo, v29);
    sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v30);
    sub_B0D8A4(&QuestInformationComponent_TypeInfo, v31);
    sub_B0D8A4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v32);
    sub_B0D8A4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v33);
    sub_B0D8A4(&StringLiteral_5573/*"EVENT_ASSIST_SKILL_DO_NOT"*/, v34);
    sub_B0D8A4(&StringLiteral_5604/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, v35);
    sub_B0D8A4(&StringLiteral_18642/*"event_skill_btn_{0}"*/, v36);
    sub_B0D8A4(&StringLiteral_17198/*"buttontxt_formation_20"*/, v37);
    sub_B0D8A4(&StringLiteral_1/*""*/, v38);
    byte_4212122 = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_B0D840(&this->fields.setupInfo, setupInfo);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B0D840(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B0D840(&this->fields.callbackFunc, callback);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B0D840(&this->fields.openCallbackFunc, openCallback);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v46);
      PartyListMenu__SetButtonState(this, v48);
      gameObject = this->fields.questStartBase;
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind != 8, 0LL);
      gameObject = this->fields.partySelectBase;
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind == 8, 0LL);
      if ( setupInfo )
      {
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1073LL) )
        {
          v49 = 1;
        }
        else
        {
          eventIdList = setupInfo->fields.eventIdList;
          if ( !eventIdList )
            goto LABEL_218;
          v49 = eventIdList->max_length != 0;
        }
        v53 = v49;
      }
      else
      {
        v53 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_218;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, v53, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_218;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0LL);
      v55 = PartyListMenu_TypeInfo;
      if ( v53 )
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v55 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_AUTOSELL_IN_EVENT = &v55->static_fields->LAYOUT_POS_X_AUTOSELL_IN_EVENT;
      }
      else
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v55 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_AUTOSELL_IN_EVENT = &v55->static_fields->LAYOUT_POS_X_AUTOSELL_NOT_EVENT;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_218;
      v57 = *p_LAYOUT_POS_X_AUTOSELL_IN_EVENT;
      v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v60 = PartyListMenu_TypeInfo;
      v61 = v58;
      if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v60 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize((PartyListMenu_o *)v58, v61, v60->static_fields->LAYOUT_FS_OFFSET, v57, 0, v59);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_218;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, !IsHintDialog || !v53, 0LL);
      if ( this->fields.menuKind == 8 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_218;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_218;
        v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v63);
        if ( !v62 )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive(v62, (unsigned __int8)gameObject & 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_218;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        v66 = transform;
        if ( v53 )
        {
          HELP_PANEL_OFFSET_1_FS = PartyListMenu__get_HELP_PANEL_OFFSET_1_FS((PartyListMenu_o *)transform, v65);
          y = HELP_PANEL_OFFSET_1_FS.fields.y;
          x = HELP_PANEL_OFFSET_1_FS.fields.x;
          if ( !v66 )
            goto LABEL_218;
        }
        else
        {
          HELP_PANEL_OFFSET_2_FS = PartyListMenu__get_HELP_PANEL_OFFSET_2_FS((PartyListMenu_o *)transform, v65);
          y = HELP_PANEL_OFFSET_2_FS.fields.y;
          x = HELP_PANEL_OFFSET_2_FS.fields.x;
          if ( !v66 )
            goto LABEL_218;
        }
        v73 = 0;
        UnityEngine_Transform__set_localPosition(v66, *(UnityEngine_Vector3_o *)&x, 0LL);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_218;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_218;
        v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v71);
        if ( !v70 )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive(v70, (unsigned __int8)gameObject & 1, 0LL);
      }
      if ( this->fields.menuKind == 8 || !*p_questRestrictionInfo )
      {
        IsDisplayQuestInformation = 0;
      }
      else
      {
        questId = (*p_questRestrictionInfo)->fields.questId;
        if ( (BYTE3(QuestInformationComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestInformationComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo);
        }
        IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyQuestInfoIconButton;
      if ( !gameObject )
        goto LABEL_218;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, IsDisplayQuestInformation, 0LL);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v76);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_218;
      v77 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.assistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      if ( (v77 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_218;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_218;
        v78 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v80 = System_String__Format((System_String_o *)StringLiteral_18642/*"event_skill_btn_{0}"*/, v79, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v78, v80, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v81);
        if ( !this->fields.assistConfirmButton )
          goto LABEL_218;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_218;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
          if ( !Component_WebViewObject )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v83, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_218;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_218;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_218;
          v87 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_218;
          v89 = UnityEngine_Component__GetComponent_WebViewObject_(
                  (UnityEngine_Component_o *)gameObject,
                  (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_gray(0LL);
          if ( !v89 )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)v89, *(UnityEngine_Color_o *)&v90, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_218;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_218;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          assistCanNotLabel = this->fields.assistCanNotLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5573/*"EVENT_ASSIST_SKILL_DO_NOT"*/, 0LL);
          if ( !assistCanNotLabel )
            goto LABEL_218;
          v87 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v87, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_218;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v88);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_218;
      v95 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      if ( (v95 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_questRestrictionInfo )
          goto LABEL_218;
        v98 = (*p_questRestrictionInfo)->fields.eventId;
        v99 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v96, v97);
        System_Action___ctor(v99, (Il2CppObject *)this, Method_PartyListMenu__Open_b__99_0__, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI_27921540(v98, v99, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v100);
        if ( !this->fields.commandAssistConfirmButton )
          goto LABEL_218;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_218;
          v101 = UnityEngine_Component__GetComponent_WebViewObject_(
                   (UnityEngine_Component_o *)gameObject,
                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v102 = UnityEngine_Color__get_white(0LL);
          if ( !v101 )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)v101, *(UnityEngine_Color_o *)&v102, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_218;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_218;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_218;
          v106 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_218;
          v108 = UnityEngine_Component__GetComponent_WebViewObject_(
                   (UnityEngine_Component_o *)gameObject,
                   (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v109 = UnityEngine_Color__get_gray(0LL);
          if ( !v108 )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)v108, *(UnityEngine_Color_o *)&v109, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_218;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_218;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          commandAssistCanNotLabel = this->fields.commandAssistCanNotLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, 0LL);
          if ( !commandAssistCanNotLabel )
            goto LABEL_218;
          v106 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v106, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_218;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v107);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_218;
      v114 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.centerEffectLabelSp,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, (v114 & 1) != 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_218;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      if ( !IsHintDialog )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_159;
      }
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( !*p_questRestrictionInfo )
        goto LABEL_218;
      v115 = (*p_questRestrictionInfo)->fields.questId;
      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyId(v115, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
        goto LABEL_159;
      if ( !*p_questRestrictionInfo )
        goto LABEL_218;
      v116 = (*p_questRestrictionInfo)->fields.questId;
      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      }
      if ( QuestHintDialogOpenManager__IsQuestHintOpen(v116, 0LL) )
        goto LABEL_159;
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v117);
      v119 = this->fields.questRestrictionInfo;
      if ( !v119 )
        goto LABEL_218;
      v120 = v119->fields.questId;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        }
        if ( !byte_4212159 )
        {
          sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v118);
          byte_4212159 = 1;
        }
        v121 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v122 = isRetry;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v121 = QuestHintDialogOpenManager_TypeInfo;
          }
        }
        else
        {
          v122 = isRetry;
        }
        v121->static_fields->temporarilyId = v120;
        if ( !v122 )
        {
LABEL_215:
          this->fields.isHintDialogOpenFlag = 1;
          if ( isOpenCallbackAfterCloseHintDialog )
          {
            v139 = *p_openCallbackFunc;
            if ( *p_openCallbackFunc )
            {
              this->fields.hintDialogCloseCallbackFunc = v139;
              sub_B0D840(&this->fields.hintDialogCloseCallbackFunc, v139);
              this->fields.openCallbackFunc = 0LL;
              sub_B0D840(&this->fields.openCallbackFunc, 0LL);
            }
          }
        }
      }
      else
      {
        if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        }
        if ( !byte_4212159 )
        {
          sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v118);
          byte_4212159 = 1;
        }
        v137 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v138 = isRetry;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v137 = QuestHintDialogOpenManager_TypeInfo;
          }
        }
        else
        {
          v138 = isRetry;
        }
        v137->static_fields->temporarilyId = v120;
        if ( !byte_4211CEB )
        {
          sub_B0D8A4(&QuestHintDialogOpenManager_TypeInfo, v118);
          v137 = QuestHintDialogOpenManager_TypeInfo;
          byte_4211CEB = 1;
        }
        if ( (BYTE3(v137->vtable._0_Equals.methodPtr) & 4) != 0 && !v137->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v137);
          v137 = QuestHintDialogOpenManager_TypeInfo;
        }
        QuestHintDialogOpenManager__SetQuestId(v137->static_fields->temporarilyId, 0LL);
        QuestHintDialogOpenManager__WriteData(0LL);
        if ( !v138 )
          goto LABEL_215;
      }
LABEL_159:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_218;
      gameObject = (UnityEngine_GameObject_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                 (PartyOrganizationUtility_o *)gameObject,
                                                 0LL);
      if ( !this->fields.friendshipUpItemUseButton )
        goto LABEL_218;
      v123 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      if ( (v123 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipUpItemUseButton;
        if ( !gameObject )
          goto LABEL_218;
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)gameObject, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      v124 = PartyListMenu_TypeInfo;
      if ( v53 )
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v124 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_HINT_IN_EVENT = &v124->static_fields->LAYOUT_POS_X_HINT_IN_EVENT;
      }
      else
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v124 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_HINT_IN_EVENT = &v124->static_fields->LAYOUT_POS_X_HINT_NOT_EVENT;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_218;
      v126 = *p_LAYOUT_POS_X_HINT_IN_EVENT;
      v127 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v129 = PartyListMenu_TypeInfo;
      v130 = v127;
      if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v129 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(
        (PartyListMenu_o *)v127,
        v130,
        v129->static_fields->LAYOUT_FS_OFFSET,
        v126,
        0,
        v128);
      v131 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v131 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v131->static_fields->ClassBoardReleaseQuestId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_25410236(ClassBoardReleaseQuestId, -1, 0, 0LL) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(
          classInfoSpriteOrganization,
          (System_String_o *)StringLiteral_17198/*"buttontxt_formation_20"*/,
          0LL);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17198/*"buttontxt_formation_20"*/,
          0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_218:
        sub_B0D97C(gameObject);
      PartyListViewManager__SetMode_31372464((PartyListViewManager_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      v136 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v134, v135);
      System_Action___ctor(v136, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v136, 0LL);
      return;
    case 2:
    case 3:
    case 7:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v39);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_B0D840(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B0D840(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B0D840(&this->fields.callbackFunc, callback);
      v40 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B0D840(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v41 = *v40;
        if ( *v40 )
        {
          this->fields.hintDialogCloseCallbackFunc = v41;
          sub_B0D840(&this->fields.hintDialogCloseCallbackFunc, v41);
          this->fields.openCallbackFunc = 0LL;
          sub_B0D840(&this->fields.openCallbackFunc, 0LL);
        }
      }
      PartyListMenu__EndOpen(this, (const MethodInfo *)v41);
      if ( !this->fields.tutorialMode && isOpenHelp )
        PartyListMenu__OpenHelp(this, v42);
      return;
    case 5:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v39);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_B0D840(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B0D840(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B0D840(&this->fields.callbackFunc, callback);
      v50 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B0D840(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v51 = *v50;
        if ( *v50 )
        {
          this->fields.hintDialogCloseCallbackFunc = v51;
          sub_B0D840(&this->fields.hintDialogCloseCallbackFunc, v51);
          this->fields.openCallbackFunc = 0LL;
          sub_B0D840(&this->fields.openCallbackFunc, 0LL);
        }
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_218;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_218;
      PartyListViewManager__SetMode_31372464((PartyListViewManager_o *)gameObject, 1, 0LL);
      PartyListMenu__EndOpen(this, v52);
      return;
    default:
      return;
  }
}


void __fastcall PartyListMenu__OpenHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct QuestRestrictionInfo_o *v12; // x8
  int32_t eventId; // w20
  System_Action_o *v14; // x21
  struct QuestRestrictionInfo_o *v15; // x8
  int32_t menuKind; // w8
  WebViewManager_o *v17; // x19
  TutorialFlag_ImageId_array *v18; // x1
  int32_t v19; // w2
  CommonUI_o *v20; // x0
  System_Action_o *v21; // x3
  const MethodInfo *v22; // x1
  WebViewManager_o *Instance; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  int v26; // w8
  TutorialFlag_ImageId_array *v27; // x21
  System_Action_o *v28; // x22
  __int64 v29; // x0

  if ( (byte_4212144 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&TutorialFlag_ImageId___TypeInfo, v3);
    sub_B0D8A4(&Method_PartyListMenu_CheckFriendshipUpItemTutorial__, v4);
    sub_B0D8A4(&Method_PartyListMenu_EndHelp__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&TutorialFlag_TypeInfo, v7);
    byte_4212144 = 1;
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
                             0LL);
    if ( (IsTutorialDataExists & 1) != 0 )
    {
      v12 = this->fields.questRestrictionInfo;
      if ( v12 )
      {
        eventId = v12->fields.eventId;
        v14 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
        v15 = this->fields.questRestrictionInfo;
        if ( v15 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v14, v15->fields.questId, v15->fields.questPhase, 0, 0, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B0D97C(IsTutorialDataExists);
    }
  }
  menuKind = this->fields.menuKind;
  if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
  {
    if ( menuKind != 2 )
    {
      if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TutorialFlag_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      }
      if ( TutorialFlag__Get_28088484(202, 0LL) )
      {
        PartyListMenu__CheckFriendshipUpItemTutorial(this, v22);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_B0D8BC(TutorialFlag_ImageId___TypeInfo, 2LL);
      if ( !IsTutorialDataExists )
        goto LABEL_31;
      v26 = *(_DWORD *)(IsTutorialDataExists + 24);
      v27 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( v26 )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 37;
        if ( v26 != 1 )
        {
          *(_DWORD *)(IsTutorialDataExists + 36) = 38;
          v28 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
          System_Action___ctor(v28, (Il2CppObject *)this, Method_PartyListMenu_CheckFriendshipUpItemTutorial__, 0LL);
          if ( !Instance )
            goto LABEL_31;
          v19 = 202;
          v20 = (CommonUI_o *)Instance;
          v18 = v27;
          v21 = v28;
          goto LABEL_30;
        }
      }
LABEL_32:
      v29 = sub_B0D9A8(IsTutorialDataExists);
      sub_B0D948(v29, 0LL);
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28088484(205, 0LL) )
    {
      v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_B0D8BC(TutorialFlag_ImageId___TypeInfo, 1LL);
      if ( !IsTutorialDataExists )
        goto LABEL_31;
      v18 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( *(_DWORD *)(IsTutorialDataExists + 24) )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 644;
        if ( !v17 )
          goto LABEL_31;
        v19 = 205;
        v20 = (CommonUI_o *)v17;
        v21 = 0LL;
LABEL_30:
        CommonUI__OpenTutorialImageDialog(v20, v18, v19, v21, 0LL, 0LL, 0LL);
        return;
      }
      goto LABEL_32;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__SetButtonPosAndSize(
        PartyListMenu_o *this,
        UnityEngine_GameObject_o *buttonObj,
        float offset,
        int32_t posX,
        int32_t sizeX,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v13; // x20
  UnityEngine_Transform_o *transform; // x24
  const MethodInfo *v15; // x1
  float v16; // s8
  float y; // s9
  int v18; // s2
  float v19; // s0
  float v20; // s1
  float v21; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4212123 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, buttonObj);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    this = (PartyListMenu_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    byte_4212123 = 1;
  }
  if ( !buttonObj )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      buttonObj,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  buttonObj,
                                  (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  v16 = PartyListMenu__FSOffsetX_19884080((PartyListMenu_o *)transform, offset, v15);
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_21;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  y = localPosition.fields.y;
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)(&v18 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  v19 = (float)posX - v16;
  v20 = y;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v18 - 2), 0LL);
  if ( sizeX )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_21;
      UIWidget__set_width((UIWidget_o *)Component_srcLineSprite, sizeX, 0LL);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v13 )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v13, 0LL);
        v21 = size.fields.y;
        v24 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v13, 0LL);
        v24.fields.x = (float)sizeX;
        v24.fields.y = v21;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v13, v24, 0LL);
        return;
      }
LABEL_21:
      sub_B0D97C(this);
    }
  }
}


void __fastcall PartyListMenu__SetButtonState(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t menuKind; // w8
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x1
  unsigned int v6; // w21
  struct UICommonButton_o *partyStartButton; // x0
  UICommonButton_c *klass; // x8
  unsigned int v9; // w20
  struct QuestRestrictionInfo_o *v10; // x8
  unsigned int v11; // w20
  UICommonButton_c *v12; // x8

  menuKind = this->fields.menuKind;
  switch ( menuKind )
  {
    case 1:
    case 3:
      partyStartButton = this->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      klass = partyStartButton->klass;
      goto LABEL_64;
    case 4:
    case 5:
    case 6:
    case 7:
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( menuKind == 6 )
        v6 = 3;
      else
        v6 = 0;
      if ( menuKind == 7 )
      {
        if ( questRestrictionInfo )
        {
          if ( questRestrictionInfo->fields.myServantNumMax == 1 )
          {
            if ( questRestrictionInfo->fields.isNotTransitionSupportList )
              v6 = 3;
            if ( !v6 )
              goto LABEL_42;
            goto LABEL_24;
          }
LABEL_23:
          if ( !v6 )
            goto LABEL_42;
LABEL_24:
          v9 = v6;
          if ( !questRestrictionInfo->fields.isNpcEditablePos )
            goto LABEL_43;
          goto LABEL_42;
        }
      }
      else if ( questRestrictionInfo )
      {
        goto LABEL_23;
      }
      if ( menuKind == 6 )
      {
        v6 = 3;
        v9 = 3;
        goto LABEL_43;
      }
      questRestrictionInfo = 0LL;
LABEL_42:
      v9 = PartyListMenu__CheckEnableAutoOrganizationButton(this, questRestrictionInfo, v2);
      v6 = 0;
LABEL_43:
      partyStartButton = this->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        v6,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        v6,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemoveButton;
      if ( !partyStartButton
        || (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
              partyStartButton,
              3LL,
              1LL,
              partyStartButton->klass->vtable._15_OnPress.methodPtr),
            (partyStartButton = this->fields.partyRemove2Button) == 0LL)
        || (((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
              partyStartButton,
              3LL,
              1LL,
              partyStartButton->klass->vtable._15_OnPress.methodPtr),
            (partyStartButton = this->fields.autoOrganizationButton) == 0LL)
        || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
              partyStartButton,
              v9,
              1LL,
              partyStartButton->klass->vtable._15_OnPress.methodPtr),
            (partyStartButton = this->fields.autoOrganization2Button) == 0LL) )
      {
LABEL_65:
        sub_B0D97C(partyStartButton);
      }
      klass = partyStartButton->klass;
LABEL_64:
      ((void (*)(void))klass->vtable._14_SetState.method)();
      return;
    case 9:
      partyStartButton = this->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      v12 = partyStartButton->klass;
      goto LABEL_61;
    default:
      partyStartButton = this->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      v10 = this->fields.questRestrictionInfo;
      if ( v10 )
        v11 = v10->fields.eventDeckNum <= 0 ? 0 : 3;
      else
        v11 = 0;
      partyStartButton = this->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        v11,
        1LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      v12 = partyStartButton->klass;
LABEL_61:
      ((void (*)(void))v12->vtable._14_SetState.method)();
      partyStartButton = this->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      klass = partyStartButton->klass;
      goto LABEL_64;
  }
}


void __fastcall PartyListMenu__SetButtonStateSetFlag(PartyListMenu_o *this, bool flag, const MethodInfo *method)
{
  this->fields.buttonStateSetFlag = flag;
}


void __fastcall PartyListMenu__SetCenterItem(
        PartyListMenu_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  ListViewManager__JumpItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0LL);
}


void __fastcall PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  UnityEngine_Behaviour__set_enabled(partyListViewManager, enabled, 0LL);
}


void __fastcall PartyListMenu__SetPartyDeck(
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
          0LL),
        (partyListViewManager = this->fields.partyListViewManager) == 0LL)
    || (ListViewManager__JumpItem((ListViewManager_o *)partyListViewManager, partyNum, 0LL),
        (partyListViewManager = this->fields.partyListViewManager) == 0LL) )
  {
    sub_B0D97C(partyListViewManager);
  }
  PartyListViewManager__SetMode_31372464(partyListViewManager, 1, 0LL);
}


void __fastcall PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  bool v5; // w1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  PartyListViewManager__SetScrollEnabled(partyListViewManager, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__SetStartButton(
        PartyListMenu_o *this,
        bool isBattle,
        bool isWaveBattle,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *partyStartButtonTxtSp; // x20
  UISprite_o *v9; // x20
  _QWORD *p_image; // x0
  System_String_o *START_BUTTON_WAVE_BATTLE_SP; // x1
  System_String_o **v12; // x8

  if ( (byte_4212146 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isBattle);
    sub_B0D8A4(&PartyListMenu_TypeInfo, v7);
    byte_4212146 = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0LL, 0LL) )
  {
    v9 = this->fields.partyStartButtonTxtSp;
    p_image = &PartyListMenu_TypeInfo->_1.image;
    if ( isWaveBattle )
    {
      if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      }
      if ( !v9 )
        goto LABEL_26;
      START_BUTTON_WAVE_BATTLE_SP = PartyListMenu_TypeInfo->static_fields->START_BUTTON_WAVE_BATTLE_SP;
    }
    else
    {
      if ( isBattle )
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          p_image = &PartyListMenu_TypeInfo->_1.image;
        }
        v12 = (System_String_o **)(p_image[23] + 176LL);
        if ( !v9 )
          goto LABEL_26;
      }
      else
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          p_image = &PartyListMenu_TypeInfo->_1.image;
        }
        v12 = (System_String_o **)(p_image[23] + 168LL);
        if ( !v9 )
          goto LABEL_26;
      }
      START_BUTTON_WAVE_BATTLE_SP = *v12;
    }
    UISprite__set_spriteName(v9, START_BUTTON_WAVE_BATTLE_SP, 0LL);
    p_image = &this->fields.partyStartButtonTxtSp->klass;
    if ( p_image )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 840LL))(p_image, *(_QWORD *)(*p_image + 848LL));
      return;
    }
LABEL_26:
    sub_B0D97C(p_image);
  }
}


void __fastcall PartyListMenu__ShowHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _DWORD *monitor; // x8
  int32_t v10; // w21
  int32_t v11; // w22
  System_String_o *message; // x20
  System_String_o *title; // x21
  int32_t leftIndent; // w22
  CommonUI_o *Instance; // x23
  __int64 v16; // x1
  __int64 v17; // x2
  ScrollMessageDialog_ClickDelegate_o *v18; // x24
  QuestPhaseEntity_o *v19; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4212154 & 1) == 0 )
  {
    sub_B0D8A4(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestHintMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_PartyListMenu__ShowHintDialogButton_b__169_0__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (PartyListMenu_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4212154 = 1;
  }
  v19 = 0LL;
  entity = 0LL;
  monitor = v2[29].monitor;
  if ( !monitor )
    goto LABEL_25;
  v11 = monitor[9];
  v10 = monitor[10];
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyListMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_25;
  this = (PartyListMenu_o *)QuestHintMaster__TryGetEntity((QuestHintMaster_o *)this, &entity, v11, v10, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_25;
    title = entity->fields.title;
    message = entity->fields.message;
    leftIndent = entity->fields.leftIndent;
  }
  else
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (PartyListMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_25;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v19, v11, v10, 0LL) )
    {
      this = (PartyListMenu_o *)v19;
      if ( !v19 )
        goto LABEL_25;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessageTitle(v19, 0LL);
      if ( !v19 )
        goto LABEL_25;
      title = (System_String_o *)this;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessage(v19, 0LL);
      if ( !v19 )
        goto LABEL_25;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v19, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (ScrollMessageDialog_ClickDelegate_o *)sub_B0D974(ScrollMessageDialog_ClickDelegate_TypeInfo, v16, v17);
  ScrollMessageDialog_ClickDelegate___ctor(v18, v2, Method_PartyListMenu__ShowHintDialogButton_b__169_0__, 0LL);
  if ( !Instance )
LABEL_25:
    sub_B0D97C(this);
  CommonUI__OpenScrollMessageDialog(Instance, title, message, leftIndent, v18, 0, 1, 0LL);
}


void __fastcall PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B0D97C(0LL);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu___OnClickAutoOrganization_b__130_0(
        PartyListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog_o *autoOrganizationConfirmDialog; // x0
  const MethodInfo *v6; // x2

  autoOrganizationConfirmDialog = this->fields.autoOrganizationConfirmDialog;
  if ( !autoOrganizationConfirmDialog )
    goto LABEL_6;
  PartyOrganizationAutoOrganizationConfirmDialog__Close(autoOrganizationConfirmDialog, 0LL);
  if ( isDecide )
  {
    autoOrganizationConfirmDialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( autoOrganizationConfirmDialog )
    {
      PartyListViewManager__SetMode_31372464((PartyListViewManager_o *)autoOrganizationConfirmDialog, 1, 0LL);
      PartyListMenu__Callback(this, 19, v6);
      return;
    }
LABEL_6:
    sub_B0D97C(autoOrganizationConfirmDialog);
  }
}


void __fastcall PartyListMenu___OnClickAutoSell_b__126_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_B0D97C(0LL);
  DropAutoSellDlgComponent__Close(dropAutoSellDialog, 0LL);
}


void __fastcall PartyListMenu___Open_b__99_0(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w19
  WebViewObject_o *Component_WebViewObject; // x20

  v2 = this;
  if ( (byte_4212158 & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    this = (PartyListMenu_o *)sub_B0D8A4(&StringLiteral_17003/*"btn_badge_organization"*/, v4);
    byte_4212158 = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v2->fields.commandAssistConfirmButton) == 0LL )
    sub_B0D97C(this);
  eventId = questRestrictionInfo->fields.eventId;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(
    eventId,
    (UISprite_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_17003/*"btn_badge_organization"*/,
    0LL);
}


void __fastcall PartyListMenu__add_callbackFunc(
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

  if ( (byte_421211F & 1) == 0 )
  {
    sub_B0D8A4(&PartyListMenu_CallbackFunc_TypeInfo, value);
    byte_421211F = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v7->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_B0DC70(v7);
  PartyListMenu__remove_callbackFunc(v10, v11, v12);
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *partyHelpButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421211D & 1) == 0 )
  {
    sub_B0D8A4(&PartyListMenu_TypeInfo, method);
    byte_421211D = 1;
  }
  v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  partyHelpButton = v2->fields.partyHelpButton;
  v5 = *(float *)&partyHelpButton->klass;
  v4 = *((float *)&partyHelpButton->klass + 1);
  v6 = v5 - PartyListMenu__FSOffsetX(v2, method);
  v7 = v4;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *partyHelpButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421211E & 1) == 0 )
  {
    sub_B0D8A4(&PartyListMenu_TypeInfo, method);
    byte_421211E = 1;
  }
  v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v2 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  partyHelpButton = v2->fields.partyHelpButton;
  v5 = *((float *)&partyHelpButton->monitor + 1);
  v4 = *(float *)&partyHelpButton->fields.m_CachedPtr;
  v6 = v5 - PartyListMenu__FSOffsetX(v2, method);
  v7 = v4;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


void __fastcall PartyListMenu__remove_callbackFunc(
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
  bool v11; // w1
  const MethodInfo *v12; // x2

  if ( (byte_4212120 & 1) == 0 )
  {
    sub_B0D8A4(&PartyListMenu_CallbackFunc_TypeInfo, value);
    byte_4212120 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v7->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B022BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_B0DC70(v7);
  PartyListMenu__DispInfoPanel(v10, v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu_CallbackFunc___ctor(
        PartyListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyListMenu_CallbackFunc__BeginInvoke(
        PartyListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v13 = m;
  v14 = n;
  if ( (byte_421216D & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&PartyListMenu_ResultKind_TypeInfo, v10);
    byte_421216D = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(PartyListMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B0D848(this, v12, callback, object);
}


void __fastcall PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu_CallbackFunc__Invoke(
        PartyListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  PartyListMenu_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  PartyListMenu_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  PartyListMenu_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (PartyListMenu_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, *(_QWORD *)&m);
      if ( (sub_B0D8D4(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)n, (unsigned int)m, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)n, (unsigned int)m, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B0D8CC(v24);
      v27 = sub_B0DCD0(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_AA67A0(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B0D954(v19, v24);
        (*v21)(v23, v28, (unsigned int)n, (unsigned int)m, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_AA67A0(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)n,
      (unsigned int)m,
      v24);
    goto LABEL_38;
  }
}
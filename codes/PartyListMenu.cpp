void __fastcall PartyListMenu___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct PartyListMenu_StaticFields *static_fields; // x8
  PartyListMenu_c *v20; // x8
  struct PartyListMenu_StaticFields *v21; // x9
  struct System_Int32_array *v22; // x0
  __int64 v23; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v25; // x1
  struct PartyListMenu_StaticFields *v26; // x0
  PartyListMenu_c *v27; // x8
  il2cpp_array_size_t v28; // w8
  struct System_Int32_array *v29; // x1
  struct PartyListMenu_StaticFields *v30; // x0
  il2cpp_array_size_t v31; // w8
  struct System_Int32_array *v32; // x1
  struct PartyListMenu_StaticFields *v33; // x0
  il2cpp_array_size_t v34; // w8
  struct System_Int32_array *v35; // x1
  struct PartyListMenu_StaticFields *v36; // x0
  il2cpp_array_size_t v37; // w8
  struct System_Int32_array *v38; // x1
  struct PartyListMenu_StaticFields *v39; // x0
  il2cpp_array_size_t v40; // w8
  struct System_Int32_array *v41; // x1
  struct PartyListMenu_StaticFields *v42; // x0
  il2cpp_array_size_t v43; // w8
  struct System_Int32_array *v44; // x1
  struct PartyListMenu_StaticFields *v45; // x0
  il2cpp_array_size_t v46; // w8
  struct System_Int32_array *v47; // x1
  struct PartyListMenu_StaticFields *v48; // x0
  il2cpp_array_size_t v49; // w8
  struct System_Int32_array *v50; // x1
  struct PartyListMenu_StaticFields *v51; // x0
  il2cpp_array_size_t v52; // w8
  struct System_Int32_array *v53; // x1
  struct PartyListMenu_StaticFields *v54; // x0
  il2cpp_array_size_t v55; // w8
  struct System_Int32_array *v56; // x1
  struct PartyListMenu_StaticFields *v57; // x0
  il2cpp_array_size_t v58; // w8
  struct System_Int32_array *v59; // x1
  struct PartyListMenu_StaticFields *v60; // x0
  il2cpp_array_size_t v61; // w8
  struct System_Single_array *v62; // x1
  struct PartyListMenu_StaticFields *v63; // x0
  struct PartyListMenu_StaticFields *v64; // x0
  struct PartyListMenu_StaticFields *v65; // x0
  struct PartyListMenu_StaticFields *v66; // x0
  __int64 v67; // x0

  if ( (byte_42E63F6 & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&PartyListMenu_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&float___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_17354/*"buttontxt_battlestart"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_17355/*"buttontxt_formation_05"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17360/*"buttontxt_queststart"*/, v16, v17, v18);
    byte_42E63F6 = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v20 = PartyListMenu_TypeInfo;
  v21 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v21->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v21->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v20->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  max_length = v22->max_length;
  v25 = v22;
  if ( !max_length )
    goto LABEL_43;
  v22->m_Items[1] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v22->m_Items[2] = 76;
  v26 = PartyListMenu_TypeInfo->static_fields;
  v26->LAYOUT_SIZE_X_TYPE_MIDDLE = v25;
  sub_B5D560(&v26->LAYOUT_SIZE_X_TYPE_MIDDLE);
  v27 = PartyListMenu_TypeInfo;
  PartyListMenu_TypeInfo->static_fields->LAYOUT_SIZE_X_TYPE_BIG = 96;
  v27->static_fields->LAYOUT_POS_X_AUTOSELL_IN_EVENT = -10;
  v27->static_fields->LAYOUT_POS_X_AUTOSELL_NOT_EVENT = -90;
  v27->static_fields->LAYOUT_POS_X_HINT_IN_EVENT = -10;
  v27->static_fields->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v28 = v22->max_length;
  v29 = v22;
  if ( !v28 )
    goto LABEL_43;
  v22->m_Items[1] = 181;
  if ( v28 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = 187;
  v30 = PartyListMenu_TypeInfo->static_fields;
  v30->LAYOUT_POS_X_HELP = v29;
  sub_B5D560(&v30->LAYOUT_POS_X_HELP);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v31 = v22->max_length;
  v32 = v22;
  if ( !v31 )
    goto LABEL_43;
  v22->m_Items[1] = 140;
  if ( v31 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = 146;
  v33 = PartyListMenu_TypeInfo->static_fields;
  v33->LAYOUT_POS_X_QUESTINFO = v32;
  sub_B5D560(&v33->LAYOUT_POS_X_QUESTINFO);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v34 = v22->max_length;
  v35 = v22;
  if ( !v34 )
    goto LABEL_43;
  v22->m_Items[1] = -45;
  if ( v34 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = -94;
  v36 = PartyListMenu_TypeInfo->static_fields;
  v36->LAYOUT_POS_X_AUTOSELL_1 = v35;
  sub_B5D560(&v36->LAYOUT_POS_X_AUTOSELL_1);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v37 = v22->max_length;
  v38 = v22;
  if ( !v37 )
    goto LABEL_43;
  v22->m_Items[1] = 55;
  if ( v37 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = 2;
  v39 = PartyListMenu_TypeInfo->static_fields;
  v39->LAYOUT_POS_X_AUTOSELL_2 = v38;
  sub_B5D560(&v39->LAYOUT_POS_X_AUTOSELL_2);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v40 = v22->max_length;
  v41 = v22;
  if ( !v40 )
    goto LABEL_43;
  v22->m_Items[1] = -40;
  if ( v40 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = -85;
  v42 = PartyListMenu_TypeInfo->static_fields;
  v42->LAYOUT_POS_X_EVENT = v41;
  sub_B5D560(&v42->LAYOUT_POS_X_EVENT);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v43 = v22->max_length;
  v44 = v22;
  if ( !v43 )
    goto LABEL_43;
  v22->m_Items[1] = -135;
  if ( v43 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = -171;
  v45 = PartyListMenu_TypeInfo->static_fields;
  v45->LAYOUT_POS_X_INFOMATION = v44;
  sub_B5D560(&v45->LAYOUT_POS_X_INFOMATION);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v46 = v22->max_length;
  v47 = v22;
  if ( !v46 )
    goto LABEL_43;
  v22->m_Items[1] = -225;
  if ( v46 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = -248;
  v48 = PartyListMenu_TypeInfo->static_fields;
  v48->LAYOUT_POS_X_REMOVE = v47;
  sub_B5D560(&v48->LAYOUT_POS_X_REMOVE);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v49 = v22->max_length;
  v50 = v22;
  if ( !v49 )
    goto LABEL_43;
  v22->m_Items[1] = -315;
  if ( v49 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = -325;
  v51 = PartyListMenu_TypeInfo->static_fields;
  v51->LAYOUT_POS_X_SWAP = v50;
  sub_B5D560(&v51->LAYOUT_POS_X_SWAP);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v52 = v22->max_length;
  v53 = v22;
  if ( !v52 )
    goto LABEL_43;
  v22->m_Items[1] = 79;
  if ( v52 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = -17;
  v54 = PartyListMenu_TypeInfo->static_fields;
  v54->LAYOUT_POS_X_HINT_1 = v53;
  sub_B5D560(&v54->LAYOUT_POS_X_HINT_1);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v55 = v22->max_length;
  v56 = v22;
  if ( !v55 )
    goto LABEL_43;
  v22->m_Items[1] = 79;
  if ( v55 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = 79;
  v57 = PartyListMenu_TypeInfo->static_fields;
  v57->LAYOUT_POS_X_HINT_2 = v56;
  sub_B5D560(&v57->LAYOUT_POS_X_HINT_2);
  v22 = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  if ( !v22 )
    goto LABEL_44;
  v58 = v22->max_length;
  v59 = v22;
  if ( !v58 || (v22->m_Items[1] = -36, v58 == 1) )
  {
LABEL_43:
    v67 = sub_B5D6C8(v22);
    sub_B5D668(v67, 0LL);
  }
  v22->m_Items[2] = -36;
  v60 = PartyListMenu_TypeInfo->static_fields;
  v60->LAYOUT_POS_X_HELP_BUTTON = v59;
  sub_B5D560(&v60->LAYOUT_POS_X_HELP_BUTTON);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v22 = (struct System_Int32_array *)sub_B5D5DC(float___TypeInfo, 2LL);
  if ( !v22 )
LABEL_44:
    sub_B5D69C(v22, v23);
  v61 = v22->max_length;
  v62 = (struct System_Single_array *)v22;
  if ( !v61 )
    goto LABEL_43;
  v22->m_Items[1] = 1116209152;
  if ( v61 == 1 )
    goto LABEL_43;
  v22->m_Items[2] = 1115815936;
  v63 = PartyListMenu_TypeInfo->static_fields;
  v63->LAYOUT_FS_OFFSET_OLD = v62;
  sub_B5D560(&v63->LAYOUT_FS_OFFSET_OLD);
  v64 = PartyListMenu_TypeInfo->static_fields;
  v64->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17360/*"buttontxt_queststart"*/;
  sub_B5D560(&v64->START_BUTTON_QUEST_SP);
  v65 = PartyListMenu_TypeInfo->static_fields;
  v65->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17354/*"buttontxt_battlestart"*/;
  sub_B5D560(&v65->START_BUTTON_BATTLE_SP);
  v66 = PartyListMenu_TypeInfo->static_fields;
  v66->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17355/*"buttontxt_formation_05"*/;
  sub_B5D560(&v66->START_BUTTON_WAVE_BATTLE_SP);
}


void __fastcall PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E63F5 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63F5 = 1;
  }
  this->fields.isSelectItemEnable = 1;
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyListMenu__Awake(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__Callback(PartyListMenu_o *this, int32_t result, const MethodInfo *method)
{
  PartyListMenu_CallbackFunc_o *callbackFunc; // x20
  __int64 v6; // x1
  ListViewManager_o *partyListViewManager; // x0
  int32_t CenterIndex; // w2

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B5D560(&this->fields.callbackFunc);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B5D69C(0LL, v6);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
    PartyListMenu_CallbackFunc__Invoke(callbackFunc, result, CenterIndex, -1, 0LL);
  }
}


int32_t __fastcall PartyListMenu__CheckEnableAutoOrganizationButton(
        PartyListMenu_o *this,
        QuestRestrictionInfo_o *restrictionInfo,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BalanceConfig_c *v5; // x0
  int32_t DeckMemberMax; // w20

  if ( (byte_42E63C2 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)restrictionInfo, (_DWORD)method, v3);
    byte_42E63C2 = 1;
  }
  if ( !restrictionInfo || !QuestRestrictionInfo__IsMyServantOrNpcRestriction(restrictionInfo, 0LL) )
    return 0;
  v5 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v5->static_fields->DeckMemberMax;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  PartyOrganizationUtility_o *v11; // x0
  __int64 v12; // x1

  if ( (byte_42E63E3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    byte_42E63E3 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_29295864(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v11 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v11 )
        sub_B5D69C(0LL, v12);
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(v11, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall PartyListMenu__Close(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Close_20791680(this, 0LL, v2);
}


void __fastcall PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E63E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E63E8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseAssistEffectConfirmDialog(Instance, 0LL);
}


void __fastcall PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E63EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E63EE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseCenterEffectDetailDialog(Instance, 0LL, 0LL);
}


void __fastcall PartyListMenu__Close_20791680(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  PartyListViewManager_o *partyListViewManager; // x21
  System_Action_o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  System_Action_o *v16; // x20

  if ( (byte_42E63C4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyListMenu_EndCloseList__, v6, v7, v8);
    sub_B5D5C4(&Method_PartyListMenu_EndClose__, v9, v10, v11);
    byte_42E63C4 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0LL);
  if ( !partyListViewManager )
    sub_B5D69C(v14, v15);
  PartyListViewManager__SetMode_33832376(partyListViewManager, 1, v13, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B5D69C(infoPanel, disp);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0LL);
}


void __fastcall PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E63C6 & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyListMenu_OnSelectItem__, v5, v6, v7);
    byte_42E63C6 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v9 = (PartyListViewManager_CallbackFunc_o *)sub_B5D694(PartyListViewManager_CallbackFunc_TypeInfo);
  PartyListViewManager_CallbackFunc___ctor(v9, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
  if ( !partyListViewManager )
    sub_B5D69C(v10, v11);
  PartyListViewManager__SetMode(partyListViewManager, 2, v9, 0LL);
}


void __fastcall PartyListMenu__EndClose(PartyListMenu_o *this, const MethodInfo *method)
{
  System_Action_o *closeCallbackFunc; // x19

  PartyListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560(&this->fields.closeCallbackFunc);
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
    sub_B5D69C(tutorialMaskBase, method);
  }
  PartyListViewManager__SetMode_33832248((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  PartyListMenu__Callback(this, 2, v4);
}


void __fastcall PartyListMenu__EndCloseTutorialArrowEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  PartyListMenu_CallbackFunc_o *callbackFunc; // x20

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL) )
  {
    sub_B5D69C(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B5D560(&this->fields.callbackFunc);
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
    || (PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL )
  {
    sub_B5D69C(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  PartyListMenu__Callback(this, 8, v4);
}


void __fastcall PartyListMenu__EndEnter(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_Action_o *closeCallbackFunc; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B5D560(&this->fields.closeCallbackFunc);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall PartyListMenu__EndHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__EndOpen(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v30; // x21
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialMode; // w8
  WebViewObject_o *v33; // x20
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v36; // kr00_8
  float v37; // s4
  float v38; // s5
  float v39; // s6
  float v40; // s7
  WebViewManager_o *v41; // x0
  float v42; // s10
  float v43; // s11
  float v44; // s12
  float v45; // s13
  CommonUI_o *v46; // x20
  System_Action_o *v47; // x21
  float v48; // s0
  float v49; // s1
  PartyListViewManager_o *v50; // x20
  PartyListViewManager_CallbackFunc_o *v51; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  float v54; // s4
  float v55; // s5
  float v56; // s6
  float v57; // s7
  WebViewManager_o *Instance; // x0
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  WebViewObject_o *v60; // x20
  UnityEngine_Vector2_o v61; // kr30_8
  float v62; // s4
  float v63; // s5
  float v64; // s6
  float v65; // s7
  CommonUI_o *v66; // x20
  System_String_o *v67; // x0
  const char *name; // kr38_8
  Il2CppClass *klass; // kr40_8
  System_String_o *v70; // x21
  System_Action_o *v71; // x22
  System_Action_o *openCallbackFunc; // x20
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v74; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v75; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v79; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v80; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_42E63C3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&PartyListViewManager_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_FSOffset___, v8, v9, v10);
    sub_B5D5C4(&FSUtility_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_PartyListMenu_EndOpenTutorialArrow__, v17, v18, v19);
    sub_B5D5C4(&Method_PartyListMenu_OnSelectItem__, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_13671/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, v26, v27, v28);
    byte_42E63C3 = 1;
  }
  memset(&methoda, 0, 48);
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v30 = (PartyListViewManager_CallbackFunc_o *)sub_B5D694(PartyListViewManager_CallbackFunc_TypeInfo);
    PartyListViewManager_CallbackFunc___ctor(v30, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
    if ( !partyListViewManager )
      goto LABEL_56;
    PartyListViewManager__SetMode(partyListViewManager, 2, v30, 0LL);
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
                                            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 0, 0LL);
                y = AddOffset.fields.y;
                x = AddOffset.fields.x;
                v77.fields.m_Width = 190.0;
                v77.fields.m_Height = 90.0;
                v77.fields.m_XMin = AddOffset.fields.x + 329.0;
                v77.fields.m_YMin = AddOffset.fields.y + -291.0;
                UnityEngine_Rect___ctor(v77, v54, v55, v56, v57, &methoda);
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v43 = *((float *)&methoda.methodPointer + 1);
                v42 = *(float *)&methoda.methodPointer;
                v45 = *((float *)&methoda.invoker_method + 1);
                v44 = *(float *)&methoda.invoker_method;
                v46 = (CommonUI_o *)Instance;
                v47 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(v47, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( v46 )
                {
                  v48 = 422.0;
                  v49 = -231.0;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
LABEL_56:
      sub_B5D69C(tutorialMaskBase, method);
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
                v33 = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)tutorialMaskBase,
                        (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v36 = FSUtility__GetAddOffset((FSOffset_o *)v33, 1, 0LL);
                y = v36.fields.y;
                x = v36.fields.x;
                v76.fields.m_Width = 160.0;
                v76.fields.m_Height = 80.0;
                v76.fields.m_XMin = v36.fields.x + -200.0;
                v76.fields.m_YMin = v36.fields.y + -295.0;
                UnityEngine_Rect___ctor(v76, v37, v38, v39, v40, (const MethodInfo *)&methoda.return_type);
                v41 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v43 = *((float *)&methoda.return_type + 1);
                v42 = *(float *)&methoda.return_type;
                v45 = *((float *)&methoda.parameters + 1);
                v44 = *(float *)&methoda.parameters;
                v46 = (CommonUI_o *)v41;
                v47 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(v47, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( v46 )
                {
                  v48 = -120.0;
                  v49 = -255.0;
LABEL_31:
                  v74.fields.x = x + v48;
                  v74.fields.y = y + v49;
                  v80.fields.m_XMin = v42;
                  v80.fields.m_YMin = v43;
                  v80.fields.m_Width = v44;
                  v80.fields.m_Height = v45;
                  CommonUI__OpenTutorialArrowMark(v46, v74, 0.0, v80, v47, 0LL);
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
    PartyListViewManager__SetMode_33832248((PartyListViewManager_o *)tutorialMaskBase, 3, 0LL);
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
    v60 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v61 = FSUtility__GetAddOffset((FSOffset_o *)v60, 1, 0LL);
    v78.fields.m_Width = 150.0;
    v78.fields.m_Height = 380.0;
    v78.fields.m_XMin = v61.fields.x + -320.0;
    v78.fields.m_YMin = v61.fields.y + -205.0;
    UnityEngine_Rect___ctor(v78, v62, v63, v64, v65, (const MethodInfo *)&methoda.name);
    v66 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v67 = LocalizationManager__Get((System_String_o *)StringLiteral_13671/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, 0LL);
    name = methoda.name;
    klass = methoda.klass;
    v70 = v67;
    v71 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v71, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
    if ( !v66 )
      goto LABEL_56;
    v75.fields.x = v61.fields.x + -245.0;
    v75.fields.y = v61.fields.y + 70.0;
    *(_QWORD *)&v79.fields.m_XMin = name;
    *(_QWORD *)&v79.fields.m_Width = klass;
    CommonUI__OpenTutorialNotificationDialogArrow(
      v66,
      v70,
      v75,
      v79,
      0.0,
      (UnityEngine_Vector2_o)0xC220000042C80000LL,
      -1,
      v71,
      0LL);
  }
  else
  {
    if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      v50 = this->fields.partyListViewManager;
      v51 = (PartyListViewManager_CallbackFunc_o *)sub_B5D694(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(v51, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
      if ( v50 )
      {
        PartyListViewManager__SetMode(v50, 2, v51, 0LL);
        goto LABEL_51;
      }
      goto LABEL_56;
    }
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    PartyListViewManager__SetMode_33832248((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  }
LABEL_51:
  if ( this->fields.isHintDialogOpenFlag )
  {
    *(_WORD *)&this->fields.isHintDialogOpenFlag = 256;
    PartyListMenu__ShowHintDialogButton(this, method);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_B5D560(&this->fields.openCallbackFunc);
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

  PartyListMenu__Enter_20792020(this, 0LL, v2);
}


void __fastcall PartyListMenu__Enter_20792020(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  System_Action_o *v10; // x20

  if ( (byte_42E63C5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PartyListMenu_EndEnter__, v6, v7, v8);
    byte_42E63C5 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B5D69C(0LL, callback);
  PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(&this->fields.closeCallbackFunc);
  this->fields.state = 5;
  v10 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndEnter__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v10, 0LL);
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
    sub_B5D560(p_hintDialogCloseCallbackFunc);
    System_Action__Invoke(hintDialogCloseCallbackFunc, 0LL);
  }
}


float __fastcall PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E63B8 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63B8 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(68.0, 1, 0LL);
}


float __fastcall PartyListMenu__FSOffsetX_20778620(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3

  if ( (byte_42E63B9 & 1) == 0 )
  {
    sub_B5D5C4(&FSUtility_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E63B9 = 1;
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
    sub_B5D69C(0LL, index);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0LL);
}


PartyListViewItem_o *__fastcall PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListMenu_o *v4; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 v7; // x11

  v4 = this;
  if ( (byte_42E63BE & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_B5D5C4(&PartyListViewItem_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63BE = 1;
  }
  partyListViewManager = v4->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B5D69C(this, method);
  centerItem = (PartyListViewItem_o *)partyListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0LL;
  v7 = *(&PartyListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&centerItem->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
    return 0LL;
  if ( (PartyListViewItem_c *)centerItem->klass->_2.typeHierarchy[v7 - 1] == PartyListViewItem_TypeInfo )
    return centerItem;
  return 0LL;
}


PartyListViewItem_o *__fastcall PartyListMenu__GetItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B5D69C(0LL, index);
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
    sub_B5D69C(friendshipUpItemUseButton, method);
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
    sub_B5D69C(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  this->fields.setupInfo = 0LL;
  sub_B5D560(&this->fields.setupInfo);
  this->fields.questRestrictionInfo = 0LL;
  sub_B5D560(&this->fields.questRestrictionInfo);
  this->fields.isDisplayHintDialog = 0;
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E63E6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E63E6 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B5D69C(Instance, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v16; // x1
  struct QuestRestrictionInfo_o *v17; // x8
  struct QuestRestrictionInfo_o *v18; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E63EA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v11, v12, v13);
    byte_42E63EA = 1;
  }
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
    v17 = this->fields.questRestrictionInfo;
    if ( !v17 || !Master_WarQuestSelectionMaster )
      goto LABEL_17;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            v17->fields.eventId,
            (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    v18 = this->fields.questRestrictionInfo;
    if ( !v18 )
LABEL_17:
      sub_B5D69C(Master_WarQuestSelectionMaster, v16);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
                                      v18->fields.questId,
                                      (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


bool __fastcall PartyListMenu__IsDisplayAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  DataManager_o *Instance; // x0
  __int64 v21; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v23; // x8
  EventDetailEntity_o *v26; // [xsp+0h] [xbp-20h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E63E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_AssistMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42E63E5 = 1;
  }
  v26 = 0LL;
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v23 = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_22:
    sub_B5D69C(Instance, v21);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v26,
          v23->fields.eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.datalist) )
    return 0;
  Instance = (DataManager_o *)v26;
  if ( !v26 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag(v26, 0x80000000000LL, 0LL);
}


bool __fastcall PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCommandAssistMaster_o *v20; // x20
  struct QuestRestrictionInfo_o *v21; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E63E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventCommandAssistMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v14, v15, v16);
    byte_42E63E9 = 1;
  }
  entity = 0LL;
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_21;
      v20 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                                       (EventDetailEntity_o *)entity,
                                                                       0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v21 = this->fields.questRestrictionInfo;
        if ( v21 )
        {
          if ( v20 )
          {
            Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetValidEntityList(
                                                                             v20,
                                                                             v21->fields.eventId,
                                                                             -1,
                                                                             0LL);
            if ( Master_WarQuestSelectionMaster )
              return LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_21:
        sub_B5D69C(Master_WarQuestSelectionMaster, v18);
      }
    }
  }
  return 0;
}


bool __fastcall PartyListMenu__IsDisplayLiveConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v21; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E63EC & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19528/*"icon_center_bg"*/, v14, v15, v16);
    byte_42E63EC = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_19528/*"icon_center_bg"*/, 0LL);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0LL),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0LL)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                      Instance,
                                      Instance->klass[2]._1.interopData),
        (v21 = this->fields.questRestrictionInfo) == 0LL)
    || (Instance = (DataManager_o *)entity) == 0LL )
  {
LABEL_19:
    sub_B5D69C(Instance, v18);
  }
  return QuestEntity__HasFlag_25406292((QuestEntity_o *)entity, 0x100000000000000LL, v21->fields.questPhase, 0LL);
}


bool __fastcall PartyListMenu__IsHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v22; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E63EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestHintMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1/*""*/, v11, v12, v13);
    byte_42E63EF = 1;
  }
  entity = 0LL;
  v22 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v22, questId, questPhase, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)v22;
      if ( v22 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v22, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_19:
      sub_B5D69C(Master_WarQuestSelectionMaster, v18);
    }
    return 0;
  }
  return 1;
}


bool __fastcall PartyListMenu__IsHintDialogEveryTime(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestHintMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  QuestPhaseEntity_o *v18; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E63F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestHintMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    byte_42E63F0 = 1;
  }
  entity = 0LL;
  v18 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v15);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &v18,
          questId,
          questPhase,
          0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)v18;
  if ( !v18 )
    goto LABEL_23;
  return QuestPhaseEntity__getHintOpenType(v18, 0LL) == 0;
}


bool __fastcall PartyListMenu__IsNeedHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x0
  int32_t questId; // w2
  int32_t questPhase; // w3
  bool v6; // w20
  int32_t eventId; // w0
  _BOOL8 IsServantNum; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *v10; // x8
  unsigned int v11; // w8

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
      v10 = this->fields.questRestrictionInfo;
      if ( !v10 )
        sub_B5D69C(IsServantNum, v9);
      eventId = v10->fields.eventId;
      questId = v10->fields.questId;
      questPhase = v10->fields.questPhase;
      v6 = 1;
    }
    if ( EventTutorialMaster__IsTutorialDataExists(eventId, 45, questId, questPhase, 0, 0, 1, 0LL) )
      return v6;
  }
  v11 = this->fields.menuKind - 1;
  if ( v11 <= 6 )
    return (v11 & 0x7F) == 1;
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
    sub_B5D69C(0LL, index);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  CommonUI_o *v18; // x20
  AssistEffectConfirmDialog_ClickDelegate_o *v19; // x22

  if ( (byte_42E63E7 & 1) == 0 )
  {
    sub_B5D5C4(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E63E7 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (eventId = questRestrictionInfo->fields.eventId,
          v18 = (CommonUI_o *)Instance,
          v19 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_B5D694(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v19,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0LL),
          !v18) )
    {
      sub_B5D69C(Instance, v15);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v18, eventId, v19, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickAutoOrganization(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  PartyListMenu___c__DisplayClass133_0_o *v14; // x20
  ListViewManager_o *partyListViewManager; // x0
  __int64 v16; // x1
  unsigned int CenterIndex; // w0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v19; // x8
  bool IsExistEntity; // w21
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x2
  __int64 v24; // x8

  if ( (byte_42E63D3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_PartyListMenu_OnClickAutoOrganization__, v8, v9, v10);
    sub_B5D5C4(&PartyListMenu___c__DisplayClass133_0_TypeInfo, v11, v12, v13);
    byte_42E63D3 = 1;
  }
  v14 = (PartyListMenu___c__DisplayClass133_0_o *)sub_B5D694(PartyListMenu___c__DisplayClass133_0_TypeInfo);
  PartyListMenu___c__DisplayClass133_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_24;
  v14->fields.__4__this = this;
  sub_B5D560(&v14->fields.__4__this);
  if ( this->fields.state != 2 )
    return;
  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_24;
  CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
  if ( (CenterIndex & 0x80000000) != 0 )
    return;
  v16 = CenterIndex;
  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_24;
  PartyListViewManager__ForceJumpItem((PartyListViewManager_o *)partyListViewManager, v16, 0LL);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
    LODWORD(questRestrictionInfo) = questRestrictionInfo->fields.eventId;
  v14->fields.eventId = (int)questRestrictionInfo;
  v14->fields.preQuest = this->fields.questRestrictionInfo != 0LL;
  if ( !this->fields.questRestrictionInfo )
  {
    IsExistEntity = 0;
    goto LABEL_19;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  partyListViewManager = (ListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
  v19 = this->fields.questRestrictionInfo;
  if ( !v19 || !partyListViewManager )
LABEL_24:
    sub_B5D69C(partyListViewManager, v16);
  IsExistEntity = QuestAutoOrganizationAdjustMaster__IsExistEntity(
                    (QuestAutoOrganizationAdjustMaster_o *)partyListViewManager,
                    v19->fields.questId,
                    v19->fields.questPhase,
                    0LL);
LABEL_19:
  v21 = Method_PartyListMenu_OnClickAutoOrganization__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoOrganization__ + 75) & 2) != 0 )
    v21 = (_QWORD *)sub_B5D5CC(Method_PartyListMenu_OnClickAutoOrganization__);
  v22 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v21, v21[3]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, v23);
  v24 = 408LL;
  if ( IsExistEntity )
    v24 = 416LL;
  PartyListMenu___c__DisplayClass133_0___OnClickAutoOrganization_g__AutoOrganizationConfirmDialogOpen_0(
    v14,
    *(PartyOrganizationAutoOrganizationConfirmDialog_o **)((char *)&this->klass + v24),
    0LL);
}


void __fastcall PartyListMenu__OnClickAutoSell(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x20
  DropAutoSellDlgComponent_CallbackFunc_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E63D0 & 1) == 0 )
  {
    sub_B5D5C4(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyListMenu__OnClickAutoSell_b__129_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E63D0 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v12 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_B5D694(DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__129_0__,
    0LL);
  if ( !dropAutoSellDialog )
    sub_B5D69C(v13, v14);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v12, 0LL);
}


void __fastcall PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E63C7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63C7 = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 0, v7);
  }
}


void __fastcall PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  CommonUI_o *v19; // x20
  System_Action_o *v20; // x23

  if ( (byte_42E63ED & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyListMenu_CloseCenterEffectDetailDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E63ED = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v19 = (CommonUI_o *)Instance,
          v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v20, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0LL),
          !v19) )
    {
      sub_B5D69C(Instance, v15);
    }
    CommonUI__OpenCenterEffectDetailDialog(v19, questId, questPhase, v20, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickChange(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v16; // x2
  CommonUI_o *Instance; // x20
  System_Action_o *v18; // x21

  if ( (byte_42E63C8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyListMenu_EndCloseTutorialArrowChange__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E63C8 = 1;
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
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowChange__, 0LL);
        if ( !Instance )
          goto LABEL_19;
        CommonUI__CloseTutorialArrowMark(Instance, v18, 0LL);
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 2, v16);
        return;
      }
LABEL_19:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickCommandAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  const MethodInfo *v16; // x2
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v20; // x19
  int32_t eventId; // w20
  Il2CppObject *v22; // x22
  System_Action_o *v23; // x21

  if ( (byte_42E63EB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v5, v6, v7);
    sub_B5D5C4(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E63EB = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v14 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 75) & 2) != 0 )
      v14 = (_QWORD *)sub_B5D5CC(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v15 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v14, v14[3]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 0, v16);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v20 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v22 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
          System_Action___ctor(v23, v22, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v20) )
    {
      sub_B5D69C(Instance, v18);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v20, eventId, v23, 0LL);
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E63CD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63CD = 1;
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 6, v6);
        return;
      }
LABEL_12:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckName(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v6; // w1
  __int64 v7; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v9; // x2

  if ( (byte_42E63CC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63CC = 1;
  }
  if ( this->fields.state == 2 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v6 = questRestrictionInfo && questRestrictionInfo->fields.eventDeckNum > 0;
    if ( !PartyListViewItem__IsSpecificMenuKind_33827064(this->fields.menuKind, v6, 0LL) )
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
          PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
          PartyListMenu__Callback(this, 5, v9);
          return;
        }
LABEL_16:
        sub_B5D69C(partyListViewManager, v7);
      }
    }
  }
}


void __fastcall PartyListMenu__OnClickEdit(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E63CE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63CE = 1;
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 7, v6);
        return;
      }
LABEL_12:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  PartyOrganizationUtility_c *v8; // x0
  PartyOrganizationUtility_c *v9; // x0
  __int64 v10; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v12; // w1
  PartyOrganizationUtility_c *v13; // x0

  if ( (byte_42E63F3 & 1) == 0 )
  {
    sub_B5D5C4(&PartyOrganizationUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SoundManager_TypeInfo, v5, v6, v7);
    byte_42E63F3 = 1;
  }
  v8 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v8 = PartyOrganizationUtility_TypeInfo;
  }
  if ( !UnityEngine_PlayerPrefs__GetInt(v8->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v13 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v13 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v13->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v12 = 1;
      goto LABEL_23;
    }
LABEL_24:
    sub_B5D69C(friendshipUpItemUseButton, v10);
  }
  if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !SoundManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  }
  SoundManager__playSystemSe(1, 0LL);
  v9 = PartyOrganizationUtility_TypeInfo;
  if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
    v9 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_24;
  v12 = 0;
LABEL_23:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v12, 0LL);
}


void __fastcall PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v19; // x1
  struct QuestRestrictionInfo_o *v20; // x8
  int32_t eventId; // w20
  System_Action_o *v22; // x21
  struct QuestRestrictionInfo_o *v23; // x8
  int32_t menuKind; // w8
  CommonUI_o *Instance; // x19
  int v26; // w8
  __int64 v27; // x0

  if ( (byte_42E63E1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TutorialFlag_ImageId___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_PartyListMenu_EndHelp__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&SoundManager_TypeInfo, v14, v15, v16);
    byte_42E63E1 = 1;
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
        v20 = this->fields.questRestrictionInfo;
        if ( v20 )
        {
          eventId = v20->fields.eventId;
          v22 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
          v23 = this->fields.questRestrictionInfo;
          if ( v23 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_24735872(
              eventId,
              45,
              v22,
              v23->fields.questId,
              v23->fields.questPhase,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_25:
        sub_B5D69C(IsTutorialDataExists, v19);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 1LL);
        if ( !IsTutorialDataExists )
          goto LABEL_25;
        v19 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
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
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 2LL);
        if ( !IsTutorialDataExists )
          goto LABEL_25;
        v26 = *(_DWORD *)(IsTutorialDataExists + 24);
        v19 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v26 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v26 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_25;
LABEL_24:
            CommonUI__OpenTutorialImageDialog(Instance, v19, -1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
        }
      }
      v27 = sub_B5D6C8(IsTutorialDataExists);
      sub_B5D668(v27, 0LL);
    }
  }
}


void __fastcall PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x1

  if ( (byte_42E63F1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63F1 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  PartyListMenu__ShowHintDialogButton(this, v5);
}


void __fastcall PartyListMenu__OnClickInfomation(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E63D2 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63D2 = 1;
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 11, v6);
        return;
      }
LABEL_12:
      sub_B5D69C(partyListViewManager, method);
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
      sub_B5D69C(0LL, method);
    PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void __fastcall PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E63C9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63C9 = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 9, v7);
  }
}


void __fastcall PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E63D4 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63D4 = 1;
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 12, v6);
        return;
      }
LABEL_12:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_42E63D1 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63D1 = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 18, v7);
  }
}


void __fastcall PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E63CB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63CB = 1;
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 4, v6);
        return;
      }
LABEL_12:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickStart(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v16; // x2
  CommonUI_o *Instance; // x20
  System_Action_o *v18; // x21

  if ( (byte_42E63CF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyListMenu_EndCloseTutorialArrowStart__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    byte_42E63CF = 1;
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
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowStart__, 0LL);
        if ( !Instance )
          goto LABEL_16;
        CommonUI__CloseTutorialArrowMark(Instance, v18, 0LL);
      }
    }
    else if ( state == 2 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 8, v16);
        return;
      }
LABEL_16:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( (byte_42E63CA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63CA = 1;
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
        PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 3, v6);
        return;
      }
LABEL_12:
      sub_B5D69C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63D6 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63D6 = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63DF & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63DF = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63D7 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63D7 = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63D8 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63D8 = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63D9 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63D9 = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63DA & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63DA = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63DB & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63DB = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63DC & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63DC = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63DD & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63DD = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_42E63DE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63DE = 1;
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
      sub_B5D69C(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_42E63E0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E63E0 = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0LL);
    if ( !Instance )
      sub_B5D69C(v13, v14);
    CommonUI__CloseTutorialNotificationDialogArrow_18227360(Instance, v12, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w8
  PartyListMenu_CallbackFunc_o *callbackFunc; // x22
  int32_t v17; // w23
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_42E63D5 & 1) == 0 )
  {
    sub_B5D5C4(&PartyListViewManager_CallbackFunc_TypeInfo, kind, n, *(_QWORD *)&m);
    sub_B5D5C4(&Method_PartyListMenu_OnSelectItem__, v9, v10, v11);
    sub_B5D5C4(&SoundManager_TypeInfo, v12, v13, v14);
    byte_42E63D5 = 1;
  }
  if ( this->fields.state == 2 && this->fields.isSelectItemEnable )
  {
    v15 = kind - 1;
    if ( (unsigned int)(kind - 1) >= 4 )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(2, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      v19 = (PartyListViewManager_CallbackFunc_o *)sub_B5D694(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(v19, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
      if ( !partyListViewManager )
        sub_B5D69C(v20, v21);
      PartyListViewManager__SetMode(partyListViewManager, 2, v19, 0LL);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v17 = dword_32A0548[v15];
        this->fields.callbackFunc = 0LL;
        sub_B5D560(&this->fields.callbackFunc);
        PartyListMenu_CallbackFunc__Invoke(callbackFunc, v17, n, m, 0LL);
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  const MethodInfo *v75; // x1
  struct System_Action_o **v76; // x20
  struct System_Action_o *v77; // x1
  const MethodInfo *v78; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  struct System_Action_o **p_openCallbackFunc; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v85; // x1
  _BOOL4 v86; // w8
  struct System_Action_o **v87; // x20
  const MethodInfo *v88; // x1
  bool v89; // w21
  struct System_Int32_array *eventIdList; // x8
  PartyListMenu_c *v91; // x0
  int32_t *p_LAYOUT_POS_X_AUTOSELL_IN_EVENT; // x8
  int32_t v93; // w24
  UnityEngine_GameObject_o *v94; // x0
  const MethodInfo *v95; // x4
  PartyListMenu_c *v96; // x8
  UnityEngine_GameObject_o *v97; // x25
  UnityEngine_GameObject_o *v98; // x24
  const MethodInfo *v99; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v101; // x1
  UnityEngine_Transform_o *v102; // x24
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_1_FS; // kr00_8
  UnityEngine_GameObject_o *v106; // x24
  const MethodInfo *v107; // x1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_2_FS; // kr08_8
  int v109; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v112; // x1
  char v113; // w24
  UISprite_o *v114; // x24
  Il2CppObject *v115; // x0
  System_String_o *v116; // x25
  const MethodInfo *v117; // x1
  WebViewObject_o *Component_WebViewObject; // x24
  int v119; // s0
  System_String_o *v123; // x1
  const MethodInfo *v124; // x1
  WebViewObject_o *v125; // x24
  int v126; // s0
  struct UILabel_o *assistCanNotLabel; // x24
  char v131; // w24
  int32_t v132; // w24
  System_Action_o *v133; // x25
  const MethodInfo *v134; // x1
  WebViewObject_o *v135; // x24
  int v136; // s0
  System_String_o *v140; // x1
  const MethodInfo *v141; // x1
  WebViewObject_o *v142; // x24
  int v143; // s0
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v148; // w24
  int32_t v149; // w24
  int32_t v150; // w22
  const MethodInfo *v151; // x1
  int v152; // w2
  __int64 v153; // x3
  struct QuestRestrictionInfo_o *v154; // x9
  int32_t v155; // w22
  QuestHintDialogOpenManager_c *v156; // x0
  bool v157; // w24
  char v158; // w20
  const MethodInfo *v159; // x1
  PartyListMenu_c *v160; // x0
  int32_t *p_LAYOUT_POS_X_HINT_IN_EVENT; // x8
  int32_t v162; // w20
  UnityEngine_GameObject_o *v163; // x0
  const MethodInfo *v164; // x4
  PartyListMenu_c *v165; // x8
  UnityEngine_GameObject_o *v166; // x21
  BalanceConfig_c *v167; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  System_Action_o *v170; // x20
  QuestHintDialogOpenManager_c *v171; // x0
  bool v172; // w24
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_42E63BF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, menuKind, tutorialMode, baseDeckItemList);
    sub_B5D5C4(&AtlasManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v27, v28, v29);
    sub_B5D5C4(&CondType_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&int_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_PartyListMenu_EndOpen__, v39, v40, v41);
    sub_B5D5C4(&Method_PartyListMenu__Open_b__102_0__, v42, v43, v44);
    sub_B5D5C4(&PartyListMenu_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&QuestInformationComponent_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v54, v55, v56);
    sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_5634/*"EVENT_ASSIST_SKILL_DO_NOT"*/, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_5665/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, v63, v64, v65);
    sub_B5D5C4(&StringLiteral_18815/*"event_skill_btn_{0}"*/, v66, v67, v68);
    sub_B5D5C4(&StringLiteral_17357/*"buttontxt_formation_20"*/, v69, v70, v71);
    sub_B5D5C4(&StringLiteral_1/*""*/, v72, v73, v74);
    byte_42E63BF = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_B5D560(&this->fields.setupInfo);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B5D560(&this->fields.questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B5D560(&this->fields.callbackFunc);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(&this->fields.openCallbackFunc);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v83);
      PartyListMenu__SetButtonState(this, v85);
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
          v86 = 1;
        }
        else
        {
          eventIdList = setupInfo->fields.eventIdList;
          if ( !eventIdList )
            goto LABEL_218;
          v86 = eventIdList->max_length != 0;
        }
        v89 = v86;
      }
      else
      {
        v89 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_218;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, v89, 0LL);
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
      v91 = PartyListMenu_TypeInfo;
      if ( v89 )
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v91 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_AUTOSELL_IN_EVENT = &v91->static_fields->LAYOUT_POS_X_AUTOSELL_IN_EVENT;
      }
      else
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v91 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_AUTOSELL_IN_EVENT = &v91->static_fields->LAYOUT_POS_X_AUTOSELL_NOT_EVENT;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_218;
      v93 = *p_LAYOUT_POS_X_AUTOSELL_IN_EVENT;
      v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v96 = PartyListMenu_TypeInfo;
      v97 = v94;
      if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v96 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize((PartyListMenu_o *)v94, v97, v96->static_fields->LAYOUT_FS_OFFSET, v93, 0, v95);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_218;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, !IsHintDialog || !v89, 0LL);
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
        v98 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v99);
        if ( !v98 )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive(v98, (unsigned __int8)gameObject & 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_218;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        v102 = transform;
        if ( v89 )
        {
          HELP_PANEL_OFFSET_1_FS = PartyListMenu__get_HELP_PANEL_OFFSET_1_FS((PartyListMenu_o *)transform, v101);
          y = HELP_PANEL_OFFSET_1_FS.fields.y;
          x = HELP_PANEL_OFFSET_1_FS.fields.x;
          if ( !v102 )
            goto LABEL_218;
        }
        else
        {
          HELP_PANEL_OFFSET_2_FS = PartyListMenu__get_HELP_PANEL_OFFSET_2_FS((PartyListMenu_o *)transform, v101);
          y = HELP_PANEL_OFFSET_2_FS.fields.y;
          x = HELP_PANEL_OFFSET_2_FS.fields.x;
          if ( !v102 )
            goto LABEL_218;
        }
        v109 = 0;
        UnityEngine_Transform__set_localPosition(v102, *(UnityEngine_Vector3_o *)&x, 0LL);
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
        v106 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v107);
        if ( !v106 )
          goto LABEL_218;
        UnityEngine_GameObject__SetActive(v106, (unsigned __int8)gameObject & 1, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v112);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_218;
      v113 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.assistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      if ( (v113 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_218;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_218;
        v114 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v115 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v116 = System_String__Format((System_String_o *)StringLiteral_18815/*"event_skill_btn_{0}"*/, v115, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v114, v116, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v117);
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
                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v119 = UnityEngine_Color__get_white(0LL);
          if ( !Component_WebViewObject )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v119, 0LL);
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
          v123 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_218;
          v125 = UnityEngine_Component__GetComponent_WebViewObject_(
                   (UnityEngine_Component_o *)gameObject,
                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v126 = UnityEngine_Color__get_gray(0LL);
          if ( !v125 )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)v125, *(UnityEngine_Color_o *)&v126, 0LL);
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5634/*"EVENT_ASSIST_SKILL_DO_NOT"*/, 0LL);
          if ( !assistCanNotLabel )
            goto LABEL_218;
          v123 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v123, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_218;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v124);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_218;
      v131 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      if ( (v131 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_questRestrictionInfo )
          goto LABEL_218;
        v132 = (*p_questRestrictionInfo)->fields.eventId;
        v133 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v133, (Il2CppObject *)this, Method_PartyListMenu__Open_b__102_0__, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI_31190100(v132, v133, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v134);
        if ( !this->fields.commandAssistConfirmButton )
          goto LABEL_218;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_218;
          v135 = UnityEngine_Component__GetComponent_WebViewObject_(
                   (UnityEngine_Component_o *)gameObject,
                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v136 = UnityEngine_Color__get_white(0LL);
          if ( !v135 )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)v135, *(UnityEngine_Color_o *)&v136, 0LL);
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
          v140 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_218;
          v142 = UnityEngine_Component__GetComponent_WebViewObject_(
                   (UnityEngine_Component_o *)gameObject,
                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v143 = UnityEngine_Color__get_gray(0LL);
          if ( !v142 )
            goto LABEL_218;
          UIWidget__set_color((UIWidget_o *)v142, *(UnityEngine_Color_o *)&v143, 0LL);
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
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, 0LL);
          if ( !commandAssistCanNotLabel )
            goto LABEL_218;
          v140 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v140, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_218;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v141);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_218;
      v148 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.centerEffectLabelSp,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      UnityEngine_GameObject__SetActive(gameObject, (v148 & 1) != 0, 0LL);
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
      v149 = (*p_questRestrictionInfo)->fields.questId;
      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyId(v149, 0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
        goto LABEL_159;
      if ( !*p_questRestrictionInfo )
        goto LABEL_218;
      v150 = (*p_questRestrictionInfo)->fields.questId;
      if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
      }
      if ( QuestHintDialogOpenManager__IsQuestHintOpen(v150, 0LL) )
        goto LABEL_159;
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v151);
      v154 = this->fields.questRestrictionInfo;
      if ( !v154 )
        goto LABEL_218;
      v155 = v154->fields.questId;
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        }
        if ( !byte_42E63F8 )
        {
          sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v82, v152, v153);
          byte_42E63F8 = 1;
        }
        v156 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v157 = isRetry;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v156 = QuestHintDialogOpenManager_TypeInfo;
          }
        }
        else
        {
          v157 = isRetry;
        }
        v156->static_fields->temporarilyId = v155;
        if ( !v157 )
        {
LABEL_215:
          this->fields.isHintDialogOpenFlag = 1;
          if ( isOpenCallbackAfterCloseHintDialog && *p_openCallbackFunc )
          {
            this->fields.hintDialogCloseCallbackFunc = *p_openCallbackFunc;
            sub_B5D560(&this->fields.hintDialogCloseCallbackFunc);
            this->fields.openCallbackFunc = 0LL;
            sub_B5D560(&this->fields.openCallbackFunc);
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
        if ( !byte_42E63F8 )
        {
          sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v82, v152, v153);
          byte_42E63F8 = 1;
        }
        v171 = QuestHintDialogOpenManager_TypeInfo;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 )
        {
          v172 = isRetry;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            v171 = QuestHintDialogOpenManager_TypeInfo;
          }
        }
        else
        {
          v172 = isRetry;
        }
        v171->static_fields->temporarilyId = v155;
        if ( !byte_42E5920 )
        {
          sub_B5D5C4(&QuestHintDialogOpenManager_TypeInfo, v82, v152, v153);
          v171 = QuestHintDialogOpenManager_TypeInfo;
          byte_42E5920 = 1;
        }
        if ( (BYTE3(v171->vtable._0_Equals.methodPtr) & 4) != 0 && !v171->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v171);
          v171 = QuestHintDialogOpenManager_TypeInfo;
        }
        QuestHintDialogOpenManager__SetQuestId(v171->static_fields->temporarilyId, 0LL);
        QuestHintDialogOpenManager__WriteData(0LL);
        if ( !v172 )
          goto LABEL_215;
      }
LABEL_159:
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_218;
      gameObject = (UnityEngine_GameObject_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                 (PartyOrganizationUtility_o *)gameObject,
                                                 0LL);
      if ( !this->fields.friendshipUpItemUseButton )
        goto LABEL_218;
      v158 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_218;
      if ( (v158 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipUpItemUseButton;
        if ( !gameObject )
          goto LABEL_218;
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)gameObject, 0LL);
        PartyListMenu__SetFriendshipUpItemInterruption(this, v159);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      v160 = PartyListMenu_TypeInfo;
      if ( v89 )
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v160 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_HINT_IN_EVENT = &v160->static_fields->LAYOUT_POS_X_HINT_IN_EVENT;
      }
      else
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v160 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_HINT_IN_EVENT = &v160->static_fields->LAYOUT_POS_X_HINT_NOT_EVENT;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_218;
      v162 = *p_LAYOUT_POS_X_HINT_IN_EVENT;
      v163 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v165 = PartyListMenu_TypeInfo;
      v166 = v163;
      if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v165 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(
        (PartyListMenu_o *)v163,
        v166,
        v165->static_fields->LAYOUT_FS_OFFSET,
        v162,
        0,
        v164);
      v167 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v167 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v167->static_fields->ClassBoardReleaseQuestId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(
          classInfoSpriteOrganization,
          (System_String_o *)StringLiteral_17357/*"buttontxt_formation_20"*/,
          0LL);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17357/*"buttontxt_formation_20"*/,
          0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_218:
        sub_B5D69C(gameObject, v82);
      PartyListViewManager__SetMode_33832248((PartyListViewManager_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      v170 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v170, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v170, 0LL);
      return;
    case 2:
    case 3:
    case 7:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v75);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_B5D560(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B5D560(&this->fields.questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B5D560(&this->fields.callbackFunc);
      v76 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(&this->fields.openCallbackFunc);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v77 = *v76;
        if ( *v76 )
        {
          this->fields.hintDialogCloseCallbackFunc = v77;
          sub_B5D560(&this->fields.hintDialogCloseCallbackFunc);
          this->fields.openCallbackFunc = 0LL;
          sub_B5D560(&this->fields.openCallbackFunc);
        }
      }
      PartyListMenu__EndOpen(this, (const MethodInfo *)v77);
      if ( !this->fields.tutorialMode && isOpenHelp )
        PartyListMenu__OpenHelp(this, v78);
      return;
    case 5:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v75);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_B5D560(&this->fields.setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B5D560(&this->fields.questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B5D560(&this->fields.callbackFunc);
      v87 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B5D560(&this->fields.openCallbackFunc);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog && *v87 )
      {
        this->fields.hintDialogCloseCallbackFunc = *v87;
        sub_B5D560(&this->fields.hintDialogCloseCallbackFunc);
        this->fields.openCallbackFunc = 0LL;
        sub_B5D560(&this->fields.openCallbackFunc);
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
      PartyListViewManager__SetMode_33832248((PartyListViewManager_o *)gameObject, 1, 0LL);
      PartyListMenu__EndOpen(this, v88);
      return;
    default:
      return;
  }
}


void __fastcall PartyListMenu__OpenHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v22; // x1
  struct QuestRestrictionInfo_o *v23; // x8
  int32_t eventId; // w20
  System_Action_o *v25; // x21
  struct QuestRestrictionInfo_o *v26; // x8
  int32_t menuKind; // w8
  WebViewManager_o *v28; // x19
  int32_t v29; // w2
  CommonUI_o *v30; // x0
  System_Action_o *v31; // x3
  const MethodInfo *v32; // x1
  WebViewManager_o *Instance; // x20
  int v34; // w8
  TutorialFlag_ImageId_array *v35; // x21
  System_Action_o *v36; // x22
  __int64 v37; // x0

  if ( (byte_42E63E2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TutorialFlag_ImageId___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_PartyListMenu_CheckFriendshipUpItemTutorial__, v8, v9, v10);
    sub_B5D5C4(&Method_PartyListMenu_EndHelp__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v17, v18, v19);
    byte_42E63E2 = 1;
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
      v23 = this->fields.questRestrictionInfo;
      if ( v23 )
      {
        eventId = v23->fields.eventId;
        v25 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v25, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
        v26 = this->fields.questRestrictionInfo;
        if ( v26 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v25, v26->fields.questId, v26->fields.questPhase, 0, 0, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B5D69C(IsTutorialDataExists, v22);
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
      if ( TutorialFlag__Get_29295864(202, 0LL) )
      {
        PartyListMenu__CheckFriendshipUpItemTutorial(this, v32);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 2LL);
      if ( !IsTutorialDataExists )
        goto LABEL_31;
      v34 = *(_DWORD *)(IsTutorialDataExists + 24);
      v35 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( v34 )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 37;
        if ( v34 != 1 )
        {
          *(_DWORD *)(IsTutorialDataExists + 36) = 38;
          v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v36, (Il2CppObject *)this, Method_PartyListMenu_CheckFriendshipUpItemTutorial__, 0LL);
          if ( !Instance )
            goto LABEL_31;
          v29 = 202;
          v30 = (CommonUI_o *)Instance;
          v22 = v35;
          v31 = v36;
          goto LABEL_30;
        }
      }
LABEL_32:
      v37 = sub_B5D6C8(IsTutorialDataExists);
      sub_B5D668(v37, 0LL);
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_29295864(205, 0LL) )
    {
      v28 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 1LL);
      if ( !IsTutorialDataExists )
        goto LABEL_31;
      v22 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( *(_DWORD *)(IsTutorialDataExists + 24) )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 644;
        if ( !v28 )
          goto LABEL_31;
        v29 = 205;
        v30 = (CommonUI_o *)v28;
        v31 = 0LL;
LABEL_30:
        CommonUI__OpenTutorialImageDialog(v30, v22, v29, v31, 0LL, 0LL, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  UnityEngine_Object_o *v17; // x20
  UnityEngine_Transform_o *transform; // x24
  const MethodInfo *v19; // x1
  float v20; // s8
  float y; // s9
  int v22; // s2
  float v23; // s0
  float v24; // s1
  float v25; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E63C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, (_DWORD)buttonObj, posX, *(_QWORD *)&sizeX);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10, v11, v12);
    this = (PartyListMenu_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    byte_42E63C0 = 1;
  }
  if ( !buttonObj )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      buttonObj,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v17 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  buttonObj,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  v20 = PartyListMenu__FSOffsetX_20778620((PartyListMenu_o *)transform, offset, v19);
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_21;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  y = localPosition.fields.y;
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)(&v22 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_21;
  v23 = (float)posX - v20;
  v24 = y;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v22 - 2), 0LL);
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
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v17 )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v17, 0LL);
        v25 = size.fields.y;
        v28 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v17, 0LL);
        v28.fields.x = (float)sizeX;
        v28.fields.y = v25;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v17, v28, 0LL);
        return;
      }
LABEL_21:
      sub_B5D69C(this, buttonObj);
    }
  }
}


void __fastcall PartyListMenu__SetButtonState(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  PartyListMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t menuKind; // w8
  unsigned int v9; // w21
  clsQuestCheck_o *partyStartButton; // x0
  clsQuestCheck_c *klass; // x8
  unsigned int v12; // w20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  unsigned int v14; // w20
  UICommonButton_o *masterEquipButton; // x20
  const MethodInfo *v16; // x1

  v4 = this;
  if ( (byte_42E63C1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, (_DWORD)method, (_DWORD)v2, v3);
    this = (PartyListMenu_o *)sub_B5D5C4(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v5, v6, v7);
    byte_42E63C1 = 1;
  }
  menuKind = v4->fields.menuKind;
  switch ( menuKind )
  {
    case 1:
    case 3:
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, __int64, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, __int64, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, __int64, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, __int64, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, __int64, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, __int64, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, __int64, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      klass = partyStartButton->klass;
      goto LABEL_72;
    case 4:
    case 5:
    case 6:
    case 7:
      method = (const MethodInfo *)v4->fields.questRestrictionInfo;
      if ( menuKind == 6 )
        v9 = 3;
      else
        v9 = 0;
      if ( menuKind == 7 )
      {
        if ( method )
        {
          if ( LODWORD(method[1].name) == 1 )
          {
            if ( BYTE3(method[5].methodPointer) )
              v9 = 3;
            if ( !v9 )
              goto LABEL_51;
            goto LABEL_26;
          }
LABEL_25:
          if ( !v9 )
            goto LABEL_51;
LABEL_26:
          v12 = v9;
          if ( !BYTE2(method[5].methodPointer) )
            goto LABEL_52;
          goto LABEL_51;
        }
      }
      else if ( method )
      {
        goto LABEL_25;
      }
      if ( menuKind == 6 )
      {
        v9 = 3;
        v12 = 3;
        goto LABEL_52;
      }
      method = 0LL;
LABEL_51:
      v12 = PartyListMenu__CheckEnableAutoOrganizationButton(this, (QuestRestrictionInfo_o *)method, v2);
      v9 = 0;
LABEL_52:
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        v9,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        v9,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemoveButton;
      if ( !partyStartButton
        || (((void (__fastcall *)(clsQuestCheck_o *, __int64, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
              partyStartButton,
              3LL,
              1LL,
              partyStartButton->klass[1]._1.nestedTypes),
            (partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemove2Button) == 0LL)
        || (((void (__fastcall *)(clsQuestCheck_o *, __int64, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
              partyStartButton,
              3LL,
              1LL,
              partyStartButton->klass[1]._1.nestedTypes),
            (partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganizationButton) == 0LL)
        || (((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
              partyStartButton,
              v12,
              1LL,
              partyStartButton->klass[1]._1.nestedTypes),
            (partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganization2Button) == 0LL) )
      {
LABEL_73:
        sub_B5D69C(partyStartButton, method);
      }
      klass = partyStartButton->klass;
LABEL_72:
      ((void (*)(void))klass[1]._1.methods)();
      return;
    case 9:
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      masterEquipButton = v4->fields.masterEquipButton;
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      partyStartButton = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyStartButton || !masterEquipButton )
        goto LABEL_73;
      UICommonButton__SetEnable(masterEquipButton, LOBYTE(partyStartButton[3].klass) == 0, 0LL);
      PartyListMenu__SetFriendshipUpItemInterruption(v4, v16);
      return;
    default:
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      questRestrictionInfo = v4->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        v14 = questRestrictionInfo->fields.eventDeckNum <= 0 ? 0 : 3;
      else
        v14 = 0;
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, _QWORD, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        v14,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        v14,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_73;
      ((void (__fastcall *)(clsQuestCheck_o *, _QWORD, __int64, Il2CppClass **))partyStartButton->klass[1]._1.methods)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass[1]._1.nestedTypes);
      partyStartButton = (clsQuestCheck_o *)v4->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_73;
      klass = partyStartButton->klass;
      goto LABEL_72;
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
    sub_B5D69C(0LL, index);
  ListViewManager__JumpItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B5D69C(0LL, method);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0LL);
}


void __fastcall PartyListMenu__SetFriendshipUpItemInterruption(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w20
  int32_t questPhase; // w21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x22
  int64_t UserId; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E63F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    byte_42E63F4 = 1;
  }
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    questId = questRestrictionInfo->fields.questId;
    questPhase = questRestrictionInfo->fields.questPhase;
  }
  else
  {
    questId = 0;
    questPhase = 0;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(UserId, v16);
  if ( UserInterruptionQuestMaster__TryGetEntity(
         (UserInterruptionQuestMaster_o *)Master_WarQuestSelectionMaster,
         &entity,
         UserId,
         questId,
         questPhase,
         0LL) )
  {
    PartyListMenu__HideFriendshipUpItemUseButton(this, v17);
  }
}


void __fastcall PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B5D69C(0LL, enabled);
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
    sub_B5D69C(partyListViewManager, baseDeckItemList);
  }
  PartyListViewManager__SetMode_33832248(partyListViewManager, 1, 0LL);
}


void __fastcall PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _BOOL8 v5; // x1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_B5D69C(0LL, v5);
  PartyListViewManager__SetScrollEnabled(partyListViewManager, v5, 0LL);
}


void __fastcall PartyListMenu__SetStartButton(
        PartyListMenu_o *this,
        bool isBattle,
        bool isWaveBattle,
        const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  UnityEngine_Object_o *partyStartButtonTxtSp; // x20
  __int64 v11; // x1
  UISprite_o *v12; // x20
  _QWORD *p_image; // x0
  System_String_o *START_BUTTON_WAVE_BATTLE_SP; // x1
  System_String_o **v15; // x8

  if ( (byte_42E63E4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isBattle, isWaveBattle, method);
    sub_B5D5C4(&PartyListMenu_TypeInfo, v7, v8, v9);
    byte_42E63E4 = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0LL, 0LL) )
  {
    v12 = this->fields.partyStartButtonTxtSp;
    p_image = &PartyListMenu_TypeInfo->_1.image;
    if ( isWaveBattle )
    {
      if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      }
      if ( !v12 )
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
        v15 = (System_String_o **)(p_image[23] + 176LL);
        if ( !v12 )
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
        v15 = (System_String_o **)(p_image[23] + 168LL);
        if ( !v12 )
          goto LABEL_26;
      }
      START_BUTTON_WAVE_BATTLE_SP = *v15;
    }
    UISprite__set_spriteName(v12, START_BUTTON_WAVE_BATTLE_SP, 0LL);
    p_image = &this->fields.partyStartButtonTxtSp->klass;
    if ( p_image )
    {
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 840LL))(p_image, *(_QWORD *)(*p_image + 848LL));
      return;
    }
LABEL_26:
    sub_B5D69C(p_image, v11);
  }
}


void __fastcall PartyListMenu__ShowHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  _DWORD *monitor; // x8
  int32_t v24; // w21
  int32_t v25; // w22
  System_String_o *message; // x20
  System_String_o *title; // x21
  int32_t leftIndent; // w22
  CommonUI_o *Instance; // x23
  ScrollMessageDialog_ClickDelegate_o *v30; // x24
  QuestPhaseEntity_o *v31; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = (Il2CppObject *)this;
  if ( (byte_42E63F2 & 1) == 0 )
  {
    sub_B5D5C4(&ScrollMessageDialog_ClickDelegate_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestHintMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestPhaseMaster___, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_PartyListMenu__ShowHintDialogButton_b__172_0__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    this = (PartyListMenu_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E63F2 = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  monitor = v4[30].monitor;
  if ( !monitor )
    goto LABEL_25;
  v25 = monitor[9];
  v24 = monitor[10];
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyListMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_25;
  this = (PartyListMenu_o *)QuestHintMaster__TryGetEntity((QuestHintMaster_o *)this, &entity, v25, v24, 0LL);
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
    this = (PartyListMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_25;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v31, v25, v24, 0LL) )
    {
      this = (PartyListMenu_o *)v31;
      if ( !v31 )
        goto LABEL_25;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessageTitle(v31, 0LL);
      if ( !v31 )
        goto LABEL_25;
      title = (System_String_o *)this;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessage(v31, 0LL);
      if ( !v31 )
        goto LABEL_25;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v31, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v30 = (ScrollMessageDialog_ClickDelegate_o *)sub_B5D694(ScrollMessageDialog_ClickDelegate_TypeInfo);
  ScrollMessageDialog_ClickDelegate___ctor(v30, v4, Method_PartyListMenu__ShowHintDialogButton_b__172_0__, 0LL);
  if ( !Instance )
LABEL_25:
    sub_B5D69C(this, method);
  CommonUI__OpenScrollMessageDialog(Instance, title, message, leftIndent, v30, 0, 1, 0LL);
}


void __fastcall PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B5D69C(0LL, index);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu___OnClickAutoSell_b__129_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_B5D69C(0LL, res);
  DropAutoSellDlgComponent__Close(dropAutoSellDialog, 0LL);
}


void __fastcall PartyListMenu___Open_b__102_0(PartyListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListMenu_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w19
  WebViewObject_o *Component_WebViewObject; // x20

  v4 = this;
  if ( (byte_42E63F7 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UISprite___, v5, v6, v7);
    this = (PartyListMenu_o *)sub_B5D5C4(&StringLiteral_17161/*"btn_badge_organization"*/, v8, v9, v10);
    byte_42E63F7 = 1;
  }
  questRestrictionInfo = v4->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v4->fields.commandAssistConfirmButton) == 0LL )
    sub_B5D69C(this, method);
  eventId = questRestrictionInfo->fields.eventId;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(
    eventId,
    (UISprite_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_17161/*"btn_badge_organization"*/,
    0LL);
}


void __fastcall PartyListMenu__add_callbackFunc(
        PartyListMenu_o *this,
        PartyListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyListMenu_o *v11; // x0
  PartyListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E63BC & 1) == 0 )
  {
    sub_B5D5C4(&PartyListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E63BC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v8->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListMenu_o *)sub_B5D990(v8);
  PartyListMenu__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListMenu_o *v4; // x0
  struct UICommonButton_o *partyHelpButton; // x8
  float v6; // s8
  float v7; // s9
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E63BA & 1) == 0 )
  {
    sub_B5D5C4(&PartyListMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63BA = 1;
  }
  v4 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v4 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  partyHelpButton = v4->fields.partyHelpButton;
  v7 = *(float *)&partyHelpButton->klass;
  v6 = *((float *)&partyHelpButton->klass + 1);
  v8 = v7 - PartyListMenu__FSOffsetX(v4, method);
  v9 = v6;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PartyListMenu_o *v4; // x0
  struct UICommonButton_o *partyHelpButton; // x8
  float v6; // s8
  float v7; // s9
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42E63BB & 1) == 0 )
  {
    sub_B5D5C4(&PartyListMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E63BB = 1;
  }
  v4 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
    v4 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  partyHelpButton = v4->fields.partyHelpButton;
  v7 = *((float *)&partyHelpButton->monitor + 1);
  v6 = *(float *)&partyHelpButton->fields.m_CachedPtr;
  v8 = v7 - PartyListMenu__FSOffsetX(v4, method);
  v9 = v6;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


void __fastcall PartyListMenu__remove_callbackFunc(
        PartyListMenu_o *this,
        PartyListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *callbackFunc; // x21
  struct PartyListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E63BD & 1) == 0 )
  {
    sub_B5D5C4(&PartyListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E63BD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyListMenu_CallbackFunc_c *)v8->klass != PartyListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_callbackFunc, v8, callbackFunc);
    v10 = callbackFunc == (System_Delegate_o *)v9;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyListMenu_o *)sub_B5D990(v8);
  PartyListMenu__Awake(v11, v12);
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
  sub_B5D560(p_method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = result;
  v15 = m;
  v16 = n;
  if ( (byte_42E5A73 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, n, *(_QWORD *)&m);
    sub_B5D5C4(&PartyListMenu_ResultKind_TypeInfo, v10, v11, v12);
    byte_42E5A73 = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(PartyListMenu_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  PartyListMenu_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  PartyListMenu_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)n, (unsigned int)m, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)n, (unsigned int)m, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)n, (unsigned int)m, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)n,
      (unsigned int)m,
      v25);
    goto LABEL_38;
  }
}


void __fastcall PartyListMenu___c__DisplayClass133_0___ctor(
        PartyListMenu___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall PartyListMenu___c__DisplayClass133_0___OnClickAutoOrganization_g__AutoOrganizationConfirmDialogOpen_0(
        PartyListMenu___c__DisplayClass133_0_o *this,
        PartyOrganizationAutoOrganizationConfirmDialog_o *dialog,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  PartyOrganizationAutoOrganizationConfirmDialog_o *klass; // x20
  int32_t eventId; // w22
  _BOOL4 preQuest; // w23
  __int64 v18; // x19
  __int64 v19; // x9

  if ( (byte_42E5A72 & 1) == 0 )
  {
    sub_B5D5C4(
      &PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
      (_DWORD)dialog,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_PartyListMenu___c__DisplayClass133_1__OnClickAutoOrganization_b__1__, v6, v7, v8);
    sub_B5D5C4(&PartyListMenu___c__DisplayClass133_1_TypeInfo, v9, v10, v11);
    byte_42E5A72 = 1;
  }
  v12 = (Il2CppObject *)sub_B5D694(PartyListMenu___c__DisplayClass133_1_TypeInfo);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  v12[1].monitor = this;
  sub_B5D560(&v12[1].monitor);
  v12[1].klass = (Il2CppClass *)dialog;
  sub_B5D560(&v12[1]);
  klass = (PartyOrganizationAutoOrganizationConfirmDialog_o *)v12[1].klass;
  eventId = this->fields.eventId;
  preQuest = this->fields.preQuest;
  v18 = sub_B5D694(PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
  v19 = *(_QWORD *)Method_PartyListMenu___c__DisplayClass133_1__OnClickAutoOrganization_b__1__;
  *(_QWORD *)(v18 + 40) = Method_PartyListMenu___c__DisplayClass133_1__OnClickAutoOrganization_b__1__;
  *(_QWORD *)(v18 + 16) = v19;
  *(_QWORD *)(v18 + 32) = v12;
  sub_B5D560(v18 + 32);
  if ( !klass )
LABEL_6:
    sub_B5D69C(v13, v14);
  PartyOrganizationAutoOrganizationConfirmDialog__Open(
    klass,
    eventId,
    preQuest,
    (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)v18,
    0LL);
}


void __fastcall PartyListMenu___c__DisplayClass133_1___ctor(
        PartyListMenu___c__DisplayClass133_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu___c__DisplayClass133_1___OnClickAutoOrganization_b__1(
        PartyListMenu___c__DisplayClass133_1_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog_o *dialog; // x0
  struct PartyListMenu___c__DisplayClass133_0_o *CS___8__locals1; // x8
  struct PartyListMenu_o *_4__this; // x8
  struct PartyListMenu___c__DisplayClass133_0_o *v8; // x8
  struct PartyListMenu_o *v9; // x8
  struct PartyListMenu___c__DisplayClass133_0_o *v10; // x8

  dialog = this->fields.dialog;
  if ( !dialog )
    goto LABEL_12;
  PartyOrganizationAutoOrganizationConfirmDialog__Close(dialog, 0LL);
  if ( isDecide )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
    {
      _4__this = CS___8__locals1->fields.__4__this;
      if ( _4__this )
      {
        _4__this->fields.state = 3;
        v8 = this->fields.CS___8__locals1;
        if ( v8 )
        {
          v9 = v8->fields.__4__this;
          if ( v9 )
          {
            dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)v9->fields.partyListViewManager;
            if ( dialog )
            {
              PartyListViewManager__SetMode_33832248((PartyListViewManager_o *)dialog, 1, 0LL);
              v10 = this->fields.CS___8__locals1;
              if ( v10 )
              {
                dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)v10->fields.__4__this;
                if ( dialog )
                {
                  PartyListMenu__Callback((PartyListMenu_o *)dialog, 19, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_12:
    sub_B5D69C(dialog, isDecide);
  }
}
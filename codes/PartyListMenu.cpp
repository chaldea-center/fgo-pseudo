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
  __int64 v11; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v13; // x1
  struct PartyListMenu_StaticFields *v14; // x0
  PartyListMenu_c *v15; // x8
  il2cpp_array_size_t v16; // w8
  struct System_Int32_array *v17; // x1
  struct PartyListMenu_StaticFields *v18; // x0
  il2cpp_array_size_t v19; // w8
  struct System_Int32_array *v20; // x1
  struct PartyListMenu_StaticFields *v21; // x0
  il2cpp_array_size_t v22; // w8
  struct System_Int32_array *v23; // x1
  struct PartyListMenu_StaticFields *v24; // x0
  il2cpp_array_size_t v25; // w8
  struct System_Int32_array *v26; // x1
  struct PartyListMenu_StaticFields *v27; // x0
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
  struct System_Single_array *v50; // x1
  struct PartyListMenu_StaticFields *v51; // x0
  struct PartyListMenu_StaticFields *v52; // x0
  __int64 v53; // x1
  struct PartyListMenu_StaticFields *v54; // x0
  __int64 v55; // x1
  struct PartyListMenu_StaticFields *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x0

  if ( (byte_418526D & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, v1);
    sub_B2C35C(&PartyListMenu_TypeInfo, v2);
    sub_B2C35C(&float___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_17143/*"buttontxt_battlestart"*/, v4);
    sub_B2C35C(&StringLiteral_17144/*"buttontxt_formation_05"*/, v5);
    sub_B2C35C(&StringLiteral_17148/*"buttontxt_queststart"*/, v6);
    byte_418526D = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v8 = PartyListMenu_TypeInfo;
  v9 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v9->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v9->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v8->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  max_length = v10->max_length;
  v13 = v10;
  if ( !max_length )
    goto LABEL_43;
  v10->m_Items[1] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 76;
  v14 = PartyListMenu_TypeInfo->static_fields;
  v14->LAYOUT_SIZE_X_TYPE_MIDDLE = v13;
  sub_B2C2F8(&v14->LAYOUT_SIZE_X_TYPE_MIDDLE, v13);
  v15 = PartyListMenu_TypeInfo;
  PartyListMenu_TypeInfo->static_fields->LAYOUT_SIZE_X_TYPE_BIG = 96;
  v15->static_fields->LAYOUT_POS_X_AUTOSELL_IN_EVENT = -10;
  v15->static_fields->LAYOUT_POS_X_AUTOSELL_NOT_EVENT = -90;
  v15->static_fields->LAYOUT_POS_X_HINT_IN_EVENT = -10;
  v15->static_fields->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v16 = v10->max_length;
  v17 = v10;
  if ( !v16 )
    goto LABEL_43;
  v10->m_Items[1] = 181;
  if ( v16 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 187;
  v18 = PartyListMenu_TypeInfo->static_fields;
  v18->LAYOUT_POS_X_HELP = v17;
  sub_B2C2F8(&v18->LAYOUT_POS_X_HELP, v17);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v19 = v10->max_length;
  v20 = v10;
  if ( !v19 )
    goto LABEL_43;
  v10->m_Items[1] = 140;
  if ( v19 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 146;
  v21 = PartyListMenu_TypeInfo->static_fields;
  v21->LAYOUT_POS_X_QUESTINFO = v20;
  sub_B2C2F8(&v21->LAYOUT_POS_X_QUESTINFO, v20);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v22 = v10->max_length;
  v23 = v10;
  if ( !v22 )
    goto LABEL_43;
  v10->m_Items[1] = -45;
  if ( v22 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -94;
  v24 = PartyListMenu_TypeInfo->static_fields;
  v24->LAYOUT_POS_X_AUTOSELL_1 = v23;
  sub_B2C2F8(&v24->LAYOUT_POS_X_AUTOSELL_1, v23);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v25 = v10->max_length;
  v26 = v10;
  if ( !v25 )
    goto LABEL_43;
  v10->m_Items[1] = 55;
  if ( v25 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 2;
  v27 = PartyListMenu_TypeInfo->static_fields;
  v27->LAYOUT_POS_X_AUTOSELL_2 = v26;
  sub_B2C2F8(&v27->LAYOUT_POS_X_AUTOSELL_2, v26);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v28 = v10->max_length;
  v29 = v10;
  if ( !v28 )
    goto LABEL_43;
  v10->m_Items[1] = -40;
  if ( v28 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -85;
  v30 = PartyListMenu_TypeInfo->static_fields;
  v30->LAYOUT_POS_X_EVENT = v29;
  sub_B2C2F8(&v30->LAYOUT_POS_X_EVENT, v29);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v31 = v10->max_length;
  v32 = v10;
  if ( !v31 )
    goto LABEL_43;
  v10->m_Items[1] = -135;
  if ( v31 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -171;
  v33 = PartyListMenu_TypeInfo->static_fields;
  v33->LAYOUT_POS_X_INFOMATION = v32;
  sub_B2C2F8(&v33->LAYOUT_POS_X_INFOMATION, v32);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v34 = v10->max_length;
  v35 = v10;
  if ( !v34 )
    goto LABEL_43;
  v10->m_Items[1] = -225;
  if ( v34 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -248;
  v36 = PartyListMenu_TypeInfo->static_fields;
  v36->LAYOUT_POS_X_REMOVE = v35;
  sub_B2C2F8(&v36->LAYOUT_POS_X_REMOVE, v35);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v37 = v10->max_length;
  v38 = v10;
  if ( !v37 )
    goto LABEL_43;
  v10->m_Items[1] = -315;
  if ( v37 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -325;
  v39 = PartyListMenu_TypeInfo->static_fields;
  v39->LAYOUT_POS_X_SWAP = v38;
  sub_B2C2F8(&v39->LAYOUT_POS_X_SWAP, v38);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v40 = v10->max_length;
  v41 = v10;
  if ( !v40 )
    goto LABEL_43;
  v10->m_Items[1] = 79;
  if ( v40 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = -17;
  v42 = PartyListMenu_TypeInfo->static_fields;
  v42->LAYOUT_POS_X_HINT_1 = v41;
  sub_B2C2F8(&v42->LAYOUT_POS_X_HINT_1, v41);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v43 = v10->max_length;
  v44 = v10;
  if ( !v43 )
    goto LABEL_43;
  v10->m_Items[1] = 79;
  if ( v43 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 79;
  v45 = PartyListMenu_TypeInfo->static_fields;
  v45->LAYOUT_POS_X_HINT_2 = v44;
  sub_B2C2F8(&v45->LAYOUT_POS_X_HINT_2, v44);
  v10 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v10 )
    goto LABEL_44;
  v46 = v10->max_length;
  v47 = v10;
  if ( !v46 || (v10->m_Items[1] = -36, v46 == 1) )
  {
LABEL_43:
    v58 = sub_B2C460(v10);
    sub_B2C400(v58, 0LL);
  }
  v10->m_Items[2] = -36;
  v48 = PartyListMenu_TypeInfo->static_fields;
  v48->LAYOUT_POS_X_HELP_BUTTON = v47;
  sub_B2C2F8(&v48->LAYOUT_POS_X_HELP_BUTTON, v47);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v10 = (struct System_Int32_array *)sub_B2C374(float___TypeInfo, 2LL);
  if ( !v10 )
LABEL_44:
    sub_B2C434(v10, v11);
  v49 = v10->max_length;
  v50 = (struct System_Single_array *)v10;
  if ( !v49 )
    goto LABEL_43;
  v10->m_Items[1] = 1116209152;
  if ( v49 == 1 )
    goto LABEL_43;
  v10->m_Items[2] = 1115815936;
  v51 = PartyListMenu_TypeInfo->static_fields;
  v51->LAYOUT_FS_OFFSET_OLD = v50;
  sub_B2C2F8(&v51->LAYOUT_FS_OFFSET_OLD, v50);
  v52 = PartyListMenu_TypeInfo->static_fields;
  v53 = StringLiteral_17148/*"buttontxt_queststart"*/;
  v52->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17148/*"buttontxt_queststart"*/;
  sub_B2C2F8(&v52->START_BUTTON_QUEST_SP, v53);
  v54 = PartyListMenu_TypeInfo->static_fields;
  v55 = StringLiteral_17143/*"buttontxt_battlestart"*/;
  v54->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17143/*"buttontxt_battlestart"*/;
  sub_B2C2F8(&v54->START_BUTTON_BATTLE_SP, v55);
  v56 = PartyListMenu_TypeInfo->static_fields;
  v57 = StringLiteral_17144/*"buttontxt_formation_05"*/;
  v56->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17144/*"buttontxt_formation_05"*/;
  sub_B2C2F8(&v56->START_BUTTON_WAVE_BATTLE_SP, v57);
}


void __fastcall PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418526C & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418526C = 1;
  }
  this->fields.isSelectItemEnable = 1;
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
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
    sub_B2C2F8(&this->fields.callbackFunc, 0LL);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_B2C434(0LL, v6);
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

  if ( (byte_418523A & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, restrictionInfo);
    byte_418523A = 1;
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
  __int64 v6; // x1

  if ( (byte_418525B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v3);
    sub_B2C35C(&TutorialFlag_TypeInfo, v4);
    byte_418525B = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( TutorialFlag__Get_28617756(102, 0LL) )
    {
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      v5 = (PartyOrganizationUtility_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !v5 )
        sub_B2C434(0LL, v6);
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem(v5, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall PartyListMenu__Close(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Close_20214760(this, 0LL, v2);
}


void __fastcall PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185260 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185260 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseAssistEffectConfirmDialog(Instance, 0LL);
}


void __fastcall PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4185266 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4185266 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  CommonUI__CloseCenterEffectDetailDialog(Instance, 0LL, 0LL);
}


void __fastcall PartyListMenu__Close_20214760(
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
  System_Action_o *v11; // x20

  if ( (byte_418523C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyListMenu_EndCloseList__, v5);
    sub_B2C35C(&Method_PartyListMenu_EndClose__, v6);
    byte_418523C = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v8 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0LL);
  if ( !partyListViewManager )
    sub_B2C434(v9, v10);
  PartyListViewManager__SetMode_31935616(partyListViewManager, 1, v8, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
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
    sub_B2C434(infoPanel, disp);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0LL);
}


void __fastcall PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418523E & 1) == 0 )
  {
    sub_B2C35C(&PartyListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu_OnSelectItem__, v3);
    byte_418523E = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v5 = (PartyListViewManager_CallbackFunc_o *)sub_B2C42C(PartyListViewManager_CallbackFunc_TypeInfo);
  PartyListViewManager_CallbackFunc___ctor(v5, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
  if ( !partyListViewManager )
    sub_B2C434(v6, v7);
  PartyListViewManager__SetMode(partyListViewManager, 2, v5, 0LL);
}


void __fastcall PartyListMenu__EndClose(PartyListMenu_o *this, const MethodInfo *method)
{
  System_Action_o *closeCallbackFunc; // x19

  PartyListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B2C2F8(&this->fields.closeCallbackFunc, 0LL);
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
    sub_B2C434(tutorialMaskBase, method);
  }
  PartyListViewManager__SetMode_31935488((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  PartyListMenu__Callback(this, 2, v4);
}


void __fastcall PartyListMenu__EndCloseTutorialArrowEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  PartyListMenu_CallbackFunc_o *callbackFunc; // x20

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL) )
  {
    sub_B2C434(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_B2C2F8(&this->fields.callbackFunc, 0LL);
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
    || (PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL )
  {
    sub_B2C434(partyListViewManager, method);
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
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_B2C2F8(&this->fields.closeCallbackFunc, 0LL);
    System_Action__Invoke(closeCallbackFunc, 0LL);
  }
}


void __fastcall PartyListMenu__EndHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__EndOpen(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v12; // x21
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialMode; // w8
  WebViewObject_o *v15; // x20
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v18; // kr00_8
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  WebViewManager_o *v23; // x0
  float v24; // s10
  float v25; // s11
  float v26; // s12
  float v27; // s13
  CommonUI_o *v28; // x20
  System_Action_o *v29; // x21
  float v30; // s0
  float v31; // s1
  PartyListViewManager_o *v32; // x20
  PartyListViewManager_CallbackFunc_o *v33; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  float v36; // s4
  float v37; // s5
  float v38; // s6
  float v39; // s7
  WebViewManager_o *Instance; // x0
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  WebViewObject_o *v42; // x20
  UnityEngine_Vector2_o v43; // kr30_8
  float v44; // s4
  float v45; // s5
  float v46; // s6
  float v47; // s7
  CommonUI_o *v48; // x20
  System_String_o *v49; // x0
  const char *name; // kr38_8
  Il2CppClass *klass; // kr40_8
  System_String_o *v52; // x21
  System_Action_o *v53; // x22
  System_Action_o *openCallbackFunc; // x20
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Vector2_o v56; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v57; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v61; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4
  UnityEngine_Rect_o v62; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  if ( (byte_418523B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&PartyListViewManager_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_FSOffset___, v4);
    sub_B2C35C(&FSUtility_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_PartyListMenu_EndOpenTutorialArrow__, v7);
    sub_B2C35C(&Method_PartyListMenu_OnSelectItem__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_13515/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, v10);
    byte_418523B = 1;
  }
  memset(&methoda, 0, 48);
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v12 = (PartyListViewManager_CallbackFunc_o *)sub_B2C42C(PartyListViewManager_CallbackFunc_TypeInfo);
    PartyListViewManager_CallbackFunc___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
    if ( !partyListViewManager )
      goto LABEL_56;
    PartyListViewManager__SetMode(partyListViewManager, 2, v12, 0LL);
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
                                            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_WebViewObject, 0, 0LL);
                y = AddOffset.fields.y;
                x = AddOffset.fields.x;
                v59.fields.m_Width = 190.0;
                v59.fields.m_Height = 90.0;
                v59.fields.m_XMin = AddOffset.fields.x + 329.0;
                v59.fields.m_YMin = AddOffset.fields.y + -291.0;
                UnityEngine_Rect___ctor(v59, v36, v37, v38, v39, &methoda);
                Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v25 = *((float *)&methoda.methodPointer + 1);
                v24 = *(float *)&methoda.methodPointer;
                v27 = *((float *)&methoda.invoker_method + 1);
                v26 = *(float *)&methoda.invoker_method;
                v28 = (CommonUI_o *)Instance;
                v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(v29, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( v28 )
                {
                  v30 = 422.0;
                  v31 = -231.0;
                  goto LABEL_31;
                }
              }
            }
          }
        }
      }
LABEL_56:
      sub_B2C434(tutorialMaskBase, method);
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
                v15 = UnityEngine_Component__GetComponent_WebViewObject_(
                        (UnityEngine_Component_o *)tutorialMaskBase,
                        (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !FSUtility_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                }
                v18 = FSUtility__GetAddOffset((FSOffset_o *)v15, 1, 0LL);
                y = v18.fields.y;
                x = v18.fields.x;
                v58.fields.m_Width = 160.0;
                v58.fields.m_Height = 80.0;
                v58.fields.m_XMin = v18.fields.x + -200.0;
                v58.fields.m_YMin = v18.fields.y + -295.0;
                UnityEngine_Rect___ctor(v58, v19, v20, v21, v22, (const MethodInfo *)&methoda.return_type);
                v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v25 = *((float *)&methoda.return_type + 1);
                v24 = *(float *)&methoda.return_type;
                v27 = *((float *)&methoda.parameters + 1);
                v26 = *(float *)&methoda.parameters;
                v28 = (CommonUI_o *)v23;
                v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(v29, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( v28 )
                {
                  v30 = -120.0;
                  v31 = -255.0;
LABEL_31:
                  v56.fields.x = x + v30;
                  v56.fields.y = y + v31;
                  v62.fields.m_XMin = v24;
                  v62.fields.m_YMin = v25;
                  v62.fields.m_Width = v26;
                  v62.fields.m_Height = v27;
                  CommonUI__OpenTutorialArrowMark(v28, v56, 0.0, v62, v29, 0LL);
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
    PartyListViewManager__SetMode_31935488((PartyListViewManager_o *)tutorialMaskBase, 3, 0LL);
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
    v42 = UnityEngine_Component__GetComponent_WebViewObject_(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v43 = FSUtility__GetAddOffset((FSOffset_o *)v42, 1, 0LL);
    v60.fields.m_Width = 150.0;
    v60.fields.m_Height = 380.0;
    v60.fields.m_XMin = v43.fields.x + -320.0;
    v60.fields.m_YMin = v43.fields.y + -205.0;
    UnityEngine_Rect___ctor(v60, v44, v45, v46, v47, (const MethodInfo *)&methoda.name);
    v48 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_13515/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, 0LL);
    name = methoda.name;
    klass = methoda.klass;
    v52 = v49;
    v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v53, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
    if ( !v48 )
      goto LABEL_56;
    v57.fields.x = v43.fields.x + -245.0;
    v57.fields.y = v43.fields.y + 70.0;
    *(_QWORD *)&v61.fields.m_XMin = name;
    *(_QWORD *)&v61.fields.m_Width = klass;
    CommonUI__OpenTutorialNotificationDialogArrow(
      v48,
      v52,
      v57,
      v61,
      0.0,
      (UnityEngine_Vector2_o)0xC220000042C80000LL,
      -1,
      v53,
      0LL);
  }
  else
  {
    if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      v32 = this->fields.partyListViewManager;
      v33 = (PartyListViewManager_CallbackFunc_o *)sub_B2C42C(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(v33, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
      if ( v32 )
      {
        PartyListViewManager__SetMode(v32, 2, v33, 0LL);
        goto LABEL_51;
      }
      goto LABEL_56;
    }
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !tutorialMaskBase )
      goto LABEL_56;
    PartyListViewManager__SetMode_31935488((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
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
    sub_B2C2F8(&this->fields.openCallbackFunc, 0LL);
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

  PartyListMenu__Enter_20215100(this, 0LL, v2);
}


void __fastcall PartyListMenu__Enter_20215100(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  System_Action_o *v7; // x20

  if ( (byte_418523D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PartyListMenu_EndEnter__, v5);
    byte_418523D = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B2C434(0LL, callback);
  PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyListMenu_EndEnter__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v7, 0LL);
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
    sub_B2C2F8(p_hintDialogCloseCallbackFunc, 0LL);
    System_Action__Invoke(hintDialogCloseCallbackFunc, 0LL);
  }
}


float __fastcall PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4185231 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_4185231 = 1;
  }
  if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(68.0, 1, 0LL);
}


float __fastcall PartyListMenu__FSOffsetX_20202284(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  if ( (byte_4185232 & 1) == 0 )
  {
    sub_B2C35C(&FSUtility_TypeInfo, method);
    byte_4185232 = 1;
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
    sub_B2C434(0LL, index);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0LL);
}


PartyListViewItem_o *__fastcall PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 v5; // x11

  v2 = this;
  if ( (byte_4185237 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_B2C35C(&PartyListViewItem_TypeInfo, method);
    byte_4185237 = 1;
  }
  partyListViewManager = v2->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, index);
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
    sub_B2C434(friendshipUpItemUseButton, method);
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
    sub_B2C434(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  this->fields.setupInfo = 0LL;
  sub_B2C2F8(&this->fields.setupInfo, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_B2C2F8(&this->fields.questRestrictionInfo, 0LL);
  this->fields.isDisplayHintDialog = 0;
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418525E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_418525E = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_B2C434(Instance, v5);
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
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *v9; // x8
  struct QuestRestrictionInfo_o *v10; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185262 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    byte_4185262 = 1;
  }
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
    v9 = this->fields.questRestrictionInfo;
    if ( !v9 || !Master_WarQuestSelectionMaster )
      goto LABEL_17;
    if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
            Master_WarQuestSelectionMaster,
            &entity,
            v9->fields.eventId,
            (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    v10 = this->fields.questRestrictionInfo;
    if ( !v10 )
LABEL_17:
      sub_B2C434(Master_WarQuestSelectionMaster, v8);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
                                      v10->fields.questId,
                                      (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
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
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v11; // x8
  EventDetailEntity_o *v14; // [xsp+0h] [xbp-20h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418525D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_AssistMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v4);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_418525D = 1;
  }
  v14 = 0LL;
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v11 = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_22:
    sub_B2C434(Instance, v9);
  }
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          (WarEntity_o **)&v14,
          v11->fields.eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.datalist) )
    return 0;
  Instance = (DataManager_o *)v14;
  if ( !v14 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag(v14, 0x80000000000LL, 0LL);
}


bool __fastcall PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  EventCommandAssistMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCommandAssistMaster_o *v10; // x20
  struct QuestRestrictionInfo_o *v11; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185261 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EventCommandAssistMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_EventDetailMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v6);
    byte_4185261 = 1;
  }
  entity = 0LL;
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_WarQuestSelectionMaster )
      goto LABEL_21;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_21;
      v10 = Master_WarQuestSelectionMaster;
      Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                                       (EventDetailEntity_o *)entity,
                                                                       0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        v11 = this->fields.questRestrictionInfo;
        if ( v11 )
        {
          if ( v10 )
          {
            Master_WarQuestSelectionMaster = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetValidEntityList(
                                                                             v10,
                                                                             v11->fields.eventId,
                                                                             -1,
                                                                             0LL);
            if ( Master_WarQuestSelectionMaster )
              return LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_21:
        sub_B2C434(Master_WarQuestSelectionMaster, v8);
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
  __int64 v8; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v11; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4185264 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_B2C35C(&StringLiteral_19284/*"icon_center_bg"*/, v6);
    byte_4185264 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_19;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_19284/*"icon_center_bg"*/, 0LL);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0LL),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0LL)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                      Instance,
                                      Instance->klass[2]._1.interopData),
        (v11 = this->fields.questRestrictionInfo) == 0LL)
    || (Instance = (DataManager_o *)entity) == 0LL )
  {
LABEL_19:
    sub_B2C434(Instance, v8);
  }
  return QuestEntity__HasFlag_23879348((QuestEntity_o *)entity, 0x100000000000000LL, v11->fields.questPhase, 0LL);
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
  __int64 v10; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v14; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4185267 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4185267 = 1;
  }
  entity = 0LL;
  v14 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_19;
    if ( QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &v14, questId, questPhase, 0LL) )
    {
      Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)v14;
      if ( v14 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v14, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_19:
      sub_B2C434(Master_WarQuestSelectionMaster, v10);
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
  __int64 v9; // x1
  QuestPhaseEntity_o *v12; // [xsp+8h] [xbp-28h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4185268 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_4185268 = 1;
  }
  entity = 0LL;
  v12 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v9);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_23;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &v12,
          questId,
          questPhase,
          0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (QuestHintMaster_o *)v12;
  if ( !v12 )
    goto LABEL_23;
  return QuestPhaseEntity__getHintOpenType(v12, 0LL) == 0;
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
        sub_B2C434(IsServantNum, v9);
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
    sub_B2C434(0LL, index);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w21
  CommonUI_o *v10; // x20
  AssistEffectConfirmDialog_ClickDelegate_o *v11; // x22

  if ( (byte_418525F & 1) == 0 )
  {
    sub_B2C35C(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418525F = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (eventId = questRestrictionInfo->fields.eventId,
          v10 = (CommonUI_o *)Instance,
          v11 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_B2C42C(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v11,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0LL),
          !v10) )
    {
      sub_B2C434(Instance, v7);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v10, eventId, v11, 0LL);
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
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v12; // x22

  if ( (byte_418524B & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu_OnClickAutoOrganization__, v3);
    sub_B2C35C(&Method_PartyListMenu__OnClickAutoOrganization_b__130_0__, v4);
    byte_418524B = 1;
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
        v8 = (_QWORD *)sub_B2C364(Method_PartyListMenu_OnClickAutoOrganization__);
      v9 = (System_Reflection_MethodBase_o *)sub_B2C340(v8, v8[3]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, v10);
      autoOrganizationConfirmDialog = this->fields.autoOrganizationConfirmDialog;
      v12 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_B2C42C(PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
      PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
        v12,
        (Il2CppObject *)this,
        Method_PartyListMenu__OnClickAutoOrganization_b__130_0__,
        0LL);
      if ( autoOrganizationConfirmDialog )
      {
        PartyOrganizationAutoOrganizationConfirmDialog__Open(
          autoOrganizationConfirmDialog,
          eventId,
          questRestrictionInfo != 0LL,
          v12,
          0LL);
        return;
      }
LABEL_14:
      sub_B2C434(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickAutoSell(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x20
  DropAutoSellDlgComponent_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185248 & 1) == 0 )
  {
    sub_B2C35C(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu__OnClickAutoSell_b__126_0__, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_4185248 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v6 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_B2C42C(DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__126_0__,
    0LL);
  if ( !dropAutoSellDialog )
    sub_B2C434(v7, v8);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v6, 0LL);
}


void __fastcall PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( (byte_418523F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418523F = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questId; // w21
  int32_t questPhase; // w22
  CommonUI_o *v11; // x20
  System_Action_o *v12; // x23

  if ( (byte_4185265 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu_CloseCenterEffectDetailDialog__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4185265 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v11 = (CommonUI_o *)Instance,
          v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0LL),
          !v11) )
    {
      sub_B2C434(Instance, v7);
    }
    CommonUI__OpenCenterEffectDetailDialog(v11, questId, questPhase, v12, 0LL);
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
  System_Action_o *v10; // x21

  if ( (byte_4185240 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu_EndCloseTutorialArrowChange__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4185240 = 1;
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
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowChange__, 0LL);
        if ( !Instance )
          goto LABEL_19;
        CommonUI__CloseTutorialArrowMark(Instance, v10, 0LL);
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 2, v8);
        return;
      }
LABEL_19:
      sub_B2C434(partyListViewManager, method);
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
  __int64 v10; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v12; // x19
  int32_t eventId; // w20
  Il2CppObject *v14; // x22
  System_Action_o *v15; // x21

  if ( (byte_4185263 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v3);
    sub_B2C35C(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4185263 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v6 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B2C364(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v7 = (System_Reflection_MethodBase_o *)sub_B2C340(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, v8);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v12 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v14 = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v15 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(v15, v14, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v12) )
    {
      sub_B2C434(Instance, v10);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v12, eventId, v15, 0LL);
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_B2C434(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4185245 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185245 = 1;
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 6, v4);
        return;
      }
LABEL_12:
      sub_B2C434(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckName(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v4; // w1
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4185244 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185244 = 1;
  }
  if ( this->fields.state == 2 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v4 = questRestrictionInfo && questRestrictionInfo->fields.eventDeckNum > 0;
    if ( !PartyListViewItem__IsSpecificMenuKind_31930304(this->fields.menuKind, v4, 0LL) )
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
          PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
          PartyListMenu__Callback(this, 5, v7);
          return;
        }
LABEL_16:
        sub_B2C434(partyListViewManager, v5);
      }
    }
  }
}


void __fastcall PartyListMenu__OnClickEdit(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4185246 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185246 = 1;
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 7, v4);
        return;
      }
LABEL_12:
      sub_B2C434(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyOrganizationUtility_c *v4; // x0
  PartyOrganizationUtility_c *v5; // x0
  __int64 v6; // x1
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v8; // w1
  PartyOrganizationUtility_c *v9; // x0

  if ( (byte_418526B & 1) == 0 )
  {
    sub_B2C35C(&PartyOrganizationUtility_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418526B = 1;
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
    v9 = PartyOrganizationUtility_TypeInfo;
    if ( (BYTE3(PartyOrganizationUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo);
      v9 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v9->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v8 = 1;
      goto LABEL_23;
    }
LABEL_24:
    sub_B2C434(friendshipUpItemUseButton, v6);
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
  v8 = 0;
LABEL_23:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v8, 0LL);
}


void __fastcall PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v9; // x1
  struct QuestRestrictionInfo_o *v10; // x8
  int32_t eventId; // w20
  System_Action_o *v12; // x21
  struct QuestRestrictionInfo_o *v13; // x8
  int32_t menuKind; // w8
  CommonUI_o *Instance; // x19
  int v16; // w8
  __int64 v17; // x0

  if ( (byte_4185259 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&TutorialFlag_ImageId___TypeInfo, v3);
    sub_B2C35C(&Method_PartyListMenu_EndHelp__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_4185259 = 1;
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
        v10 = this->fields.questRestrictionInfo;
        if ( v10 )
        {
          eventId = v10->fields.eventId;
          v12 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
          v13 = this->fields.questRestrictionInfo;
          if ( v13 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_26071720(
              eventId,
              45,
              v12,
              v13->fields.questId,
              v13->fields.questPhase,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_25:
        sub_B2C434(IsTutorialDataExists, v9);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_B2C374(TutorialFlag_ImageId___TypeInfo, 1LL);
        if ( !IsTutorialDataExists )
          goto LABEL_25;
        v9 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
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
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_B2C374(TutorialFlag_ImageId___TypeInfo, 2LL);
        if ( !IsTutorialDataExists )
          goto LABEL_25;
        v16 = *(_DWORD *)(IsTutorialDataExists + 24);
        v9 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v16 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v16 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_25;
LABEL_24:
            CommonUI__OpenTutorialImageDialog(Instance, v9, -1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
        }
      }
      v17 = sub_B2C460(IsTutorialDataExists);
      sub_B2C400(v17, 0LL);
    }
  }
}


void __fastcall PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4185269 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185269 = 1;
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

  if ( (byte_418524A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418524A = 1;
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 11, v4);
        return;
      }
LABEL_12:
      sub_B2C434(partyListViewManager, method);
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
      sub_B2C434(0LL, method);
    PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void __fastcall PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4185241 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185241 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 9, v5);
  }
}


void __fastcall PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_418524C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418524C = 1;
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 12, v4);
        return;
      }
LABEL_12:
      sub_B2C434(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4185249 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185249 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 18, v5);
  }
}


void __fastcall PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4185243 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185243 = 1;
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 4, v4);
        return;
      }
LABEL_12:
      sub_B2C434(partyListViewManager, method);
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
  System_Action_o *v10; // x21

  if ( (byte_4185247 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu_EndCloseTutorialArrowStart__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_4185247 = 1;
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
        Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowStart__, 0LL);
        if ( !Instance )
          goto LABEL_16;
        CommonUI__CloseTutorialArrowMark(Instance, v10, 0LL);
      }
    }
    else if ( state == 2 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 8, v8);
        return;
      }
LABEL_16:
      sub_B2C434(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4185242 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185242 = 1;
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
        PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 3, v4);
        return;
      }
LABEL_12:
      sub_B2C434(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_418524E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418524E = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185257 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185257 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_418524F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418524F = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185250 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185250 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185251 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185251 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185252 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185252 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185253 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185253 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185254 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185254 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185255 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185255 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4185256 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4185256 = 1;
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
      sub_B2C434(0LL, v3);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4185258 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4185258 = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0LL);
    if ( !Instance )
      sub_B2C434(v7, v8);
    CommonUI__CloseTutorialNotificationDialogArrow_17996480(Instance, v6, 0LL);
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
  PartyListViewManager_CallbackFunc_o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_418524D & 1) == 0 )
  {
    sub_B2C35C(&PartyListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&Method_PartyListMenu_OnSelectItem__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_418524D = 1;
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
      v15 = (PartyListViewManager_CallbackFunc_o *)sub_B2C42C(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(v15, (Il2CppObject *)this, Method_PartyListMenu_OnSelectItem__, 0LL);
      if ( !partyListViewManager )
        sub_B2C434(v16, v17);
      PartyListViewManager__SetMode(partyListViewManager, 2, v15, 0LL);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v13 = dword_319F248[v11];
        this->fields.callbackFunc = 0LL;
        sub_B2C2F8(&this->fields.callbackFunc, 0LL);
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
  __int64 v20; // x1
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
  const MethodInfo *v38; // x1
  struct System_Action_o **v39; // x20
  struct System_Action_o *v40; // x1
  const MethodInfo *v41; // x1
  EventUpValSetupInfo_o *v42; // x20
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x22
  struct System_Action_o **p_openCallbackFunc; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v49; // x1
  PartyListMenu_c *v50; // x0
  int32_t *p_LAYOUT_POS_X_AUTOSELL_IN_EVENT; // x8
  struct System_Action_o **v52; // x21
  struct System_Action_o *v53; // x1
  const MethodInfo *v54; // x1
  int32_t v55; // w24
  UnityEngine_GameObject_o *v56; // x0
  const MethodInfo *v57; // x4
  PartyListMenu_c *v58; // x8
  UnityEngine_GameObject_o *v59; // x25
  UnityEngine_GameObject_o *v60; // x24
  const MethodInfo *v61; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v63; // x1
  UnityEngine_Transform_o *v64; // x24
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_1_FS; // kr00_8
  UnityEngine_GameObject_o *v68; // x24
  const MethodInfo *v69; // x1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_2_FS; // kr08_8
  int v71; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v74; // x1
  char v75; // w24
  UISprite_o *v76; // x24
  Il2CppObject *v77; // x0
  System_String_o *v78; // x25
  const MethodInfo *v79; // x1
  WebViewObject_o *Component_WebViewObject; // x24
  int v81; // s0
  System_String_o *v85; // x1
  const MethodInfo *v86; // x1
  WebViewObject_o *v87; // x24
  int v88; // s0
  struct UILabel_o *assistCanNotLabel; // x24
  char v93; // w24
  int32_t v94; // w24
  System_Action_o *v95; // x25
  const MethodInfo *v96; // x1
  WebViewObject_o *v97; // x24
  int v98; // s0
  System_String_o *v102; // x1
  const MethodInfo *v103; // x1
  WebViewObject_o *v104; // x24
  int v105; // s0
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v110; // w24
  int32_t v111; // w24
  int32_t v112; // w22
  const MethodInfo *v113; // x1
  struct QuestRestrictionInfo_o *v114; // x9
  int32_t v115; // w20
  QuestHintDialogOpenManager_c *v116; // x0
  char v117; // w21
  PartyListMenu_c *v118; // x0
  int32_t *p_LAYOUT_POS_X_HINT_IN_EVENT; // x8
  int32_t v120; // w20
  UnityEngine_GameObject_o *v121; // x0
  const MethodInfo *v122; // x4
  PartyListMenu_c *v123; // x8
  UnityEngine_GameObject_o *v124; // x21
  BalanceConfig_c *v125; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  System_Action_o *v128; // x20
  QuestHintDialogOpenManager_c *v129; // x0
  struct System_Action_o *v130; // x1
  int32_t eventId; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4185238 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&menuKind);
    sub_B2C35C(&AtlasManager_TypeInfo, v20);
    sub_B2C35C(&BalanceConfig_TypeInfo, v21);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v22);
    sub_B2C35C(&CondType_TypeInfo, v23);
    sub_B2C35C(&int_TypeInfo, v24);
    sub_B2C35C(&LocalizationManager_TypeInfo, v25);
    sub_B2C35C(&Method_PartyListMenu_EndOpen__, v26);
    sub_B2C35C(&Method_PartyListMenu__Open_b__99_0__, v27);
    sub_B2C35C(&PartyListMenu_TypeInfo, v28);
    sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v29);
    sub_B2C35C(&QuestInformationComponent_TypeInfo, v30);
    sub_B2C35C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v31);
    sub_B2C35C(&SingletonTemplate_PartyOrganizationUtility__TypeInfo, v32);
    sub_B2C35C(&StringLiteral_5557/*"EVENT_ASSIST_SKILL_DO_NOT"*/, v33);
    sub_B2C35C(&StringLiteral_5588/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, v34);
    sub_B2C35C(&StringLiteral_18584/*"event_skill_btn_{0}"*/, v35);
    sub_B2C35C(&StringLiteral_17146/*"buttontxt_formation_20"*/, v36);
    sub_B2C35C(&StringLiteral_1/*""*/, v37);
    byte_4185238 = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      v42 = setupInfo;
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_B2C2F8(&this->fields.setupInfo, setupInfo);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B2C2F8(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(&this->fields.callbackFunc, callback);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v47);
      PartyListMenu__SetButtonState(this, v49);
      gameObject = this->fields.questStartBase;
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind != 8, 0LL);
      gameObject = this->fields.partySelectBase;
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind == 8, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_207;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, setupInfo != 0LL, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_207;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0LL);
      v50 = PartyListMenu_TypeInfo;
      if ( setupInfo )
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v50 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_AUTOSELL_IN_EVENT = &v50->static_fields->LAYOUT_POS_X_AUTOSELL_IN_EVENT;
      }
      else
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v50 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_AUTOSELL_IN_EVENT = &v50->static_fields->LAYOUT_POS_X_AUTOSELL_NOT_EVENT;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_207;
      v55 = *p_LAYOUT_POS_X_AUTOSELL_IN_EVENT;
      v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v58 = PartyListMenu_TypeInfo;
      v59 = v56;
      if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v58 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize((PartyListMenu_o *)v56, v59, v58->static_fields->LAYOUT_FS_OFFSET, v55, 0, v57);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_207;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, setupInfo == 0LL || !IsHintDialog, 0LL);
      if ( this->fields.menuKind == 8 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_207;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_207;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_207;
        v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v61);
        if ( !v60 )
          goto LABEL_207;
        UnityEngine_GameObject__SetActive(v60, (unsigned __int8)gameObject & 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_207;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        v64 = transform;
        if ( setupInfo )
        {
          HELP_PANEL_OFFSET_1_FS = PartyListMenu__get_HELP_PANEL_OFFSET_1_FS((PartyListMenu_o *)transform, v63);
          y = HELP_PANEL_OFFSET_1_FS.fields.y;
          x = HELP_PANEL_OFFSET_1_FS.fields.x;
          if ( !v64 )
            goto LABEL_207;
        }
        else
        {
          HELP_PANEL_OFFSET_2_FS = PartyListMenu__get_HELP_PANEL_OFFSET_2_FS((PartyListMenu_o *)transform, v63);
          y = HELP_PANEL_OFFSET_2_FS.fields.y;
          x = HELP_PANEL_OFFSET_2_FS.fields.x;
          if ( !v64 )
            goto LABEL_207;
        }
        v71 = 0;
        UnityEngine_Transform__set_localPosition(v64, *(UnityEngine_Vector3_o *)&x, 0LL);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_207;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_207;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_207;
        v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v69);
        if ( !v68 )
          goto LABEL_207;
        UnityEngine_GameObject__SetActive(v68, (unsigned __int8)gameObject & 1, 0LL);
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
        goto LABEL_207;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, IsDisplayQuestInformation, 0LL);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v74);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_207;
      v75 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.assistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_207;
      if ( (v75 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_207;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_207;
        v76 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v78 = System_String__Format((System_String_o *)StringLiteral_18584/*"event_skill_btn_{0}"*/, v77, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetEventUI(v76, v78, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v79);
        if ( !this->fields.assistConfirmButton )
          goto LABEL_207;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_207;
          Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                      (UnityEngine_Component_o *)gameObject,
                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v81 = UnityEngine_Color__get_white(0LL);
          if ( !Component_WebViewObject )
            goto LABEL_207;
          UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v81, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          v42 = setupInfo;
          if ( !gameObject )
            goto LABEL_207;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_207;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_207;
          v85 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_207;
          v87 = UnityEngine_Component__GetComponent_WebViewObject_(
                  (UnityEngine_Component_o *)gameObject,
                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v88 = UnityEngine_Color__get_gray(0LL);
          if ( !v87 )
            goto LABEL_207;
          UIWidget__set_color((UIWidget_o *)v87, *(UnityEngine_Color_o *)&v88, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          v42 = setupInfo;
          if ( !gameObject )
            goto LABEL_207;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_207;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          assistCanNotLabel = this->fields.assistCanNotLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5557/*"EVENT_ASSIST_SKILL_DO_NOT"*/, 0LL);
          if ( !assistCanNotLabel )
            goto LABEL_207;
          v85 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v85, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_207;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v86);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_207;
      v93 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_207;
      if ( (v93 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_questRestrictionInfo )
          goto LABEL_207;
        v94 = (*p_questRestrictionInfo)->fields.eventId;
        v95 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v95, (Il2CppObject *)this, Method_PartyListMenu__Open_b__99_0__, 0LL);
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__LoadEventUI_28451024(v94, v95, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v96);
        if ( !this->fields.commandAssistConfirmButton )
          goto LABEL_207;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_207;
          v97 = UnityEngine_Component__GetComponent_WebViewObject_(
                  (UnityEngine_Component_o *)gameObject,
                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v98 = UnityEngine_Color__get_white(0LL);
          if ( !v97 )
            goto LABEL_207;
          UIWidget__set_color((UIWidget_o *)v97, *(UnityEngine_Color_o *)&v98, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_207;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_207;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_207;
          v102 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_207;
          v104 = UnityEngine_Component__GetComponent_WebViewObject_(
                   (UnityEngine_Component_o *)gameObject,
                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          *(UnityEngine_Color_o *)&v105 = UnityEngine_Color__get_gray(0LL);
          if ( !v104 )
            goto LABEL_207;
          UIWidget__set_color((UIWidget_o *)v104, *(UnityEngine_Color_o *)&v105, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_207;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_207;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          commandAssistCanNotLabel = this->fields.commandAssistCanNotLabel;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5588/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, 0LL);
          if ( !commandAssistCanNotLabel )
            goto LABEL_207;
          v102 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v102, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_207;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v103);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_207;
      v110 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.centerEffectLabelSp,
                     0LL);
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, (v110 & 1) != 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_207;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_207;
      if ( IsHintDialog )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_questRestrictionInfo )
          goto LABEL_207;
        v111 = (*p_questRestrictionInfo)->fields.questId;
        if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        }
        gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyId(v111, 0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          if ( !*p_questRestrictionInfo )
            goto LABEL_207;
          v112 = (*p_questRestrictionInfo)->fields.questId;
          if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          }
          if ( !QuestHintDialogOpenManager__IsQuestHintOpen(v112, 0LL) )
          {
            gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v113);
            v114 = this->fields.questRestrictionInfo;
            if ( !v114 )
              goto LABEL_207;
            v115 = v114->fields.questId;
            if ( ((unsigned __int8)gameObject & 1) != 0 )
            {
              if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
              }
              if ( !byte_418526F )
              {
                sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v46);
                byte_418526F = 1;
              }
              v116 = QuestHintDialogOpenManager_TypeInfo;
              if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                v116 = QuestHintDialogOpenManager_TypeInfo;
              }
              v116->static_fields->temporarilyId = v115;
              v42 = setupInfo;
            }
            else
            {
              if ( (WORD1(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
                && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
              }
              if ( !byte_418526F )
              {
                sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v46);
                byte_418526F = 1;
              }
              v129 = QuestHintDialogOpenManager_TypeInfo;
              if ( (BYTE3(QuestHintDialogOpenManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
                v129 = QuestHintDialogOpenManager_TypeInfo;
              }
              v129->static_fields->temporarilyId = v115;
              if ( !byte_4185066 )
              {
                sub_B2C35C(&QuestHintDialogOpenManager_TypeInfo, v46);
                v129 = QuestHintDialogOpenManager_TypeInfo;
                byte_4185066 = 1;
              }
              if ( (BYTE3(v129->vtable._0_Equals.methodPtr) & 4) != 0 )
              {
                v42 = setupInfo;
                if ( !v129->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v129);
                  v129 = QuestHintDialogOpenManager_TypeInfo;
                }
              }
              else
              {
                v42 = setupInfo;
              }
              QuestHintDialogOpenManager__SetQuestId(v129->static_fields->temporarilyId, 0LL);
              QuestHintDialogOpenManager__WriteData(0LL);
            }
            if ( !isRetry )
            {
              this->fields.isHintDialogOpenFlag = 1;
              if ( isOpenCallbackAfterCloseHintDialog )
              {
                v130 = *p_openCallbackFunc;
                if ( *p_openCallbackFunc )
                {
                  this->fields.hintDialogCloseCallbackFunc = v130;
                  sub_B2C2F8(&this->fields.hintDialogCloseCallbackFunc, v130);
                  this->fields.openCallbackFunc = 0LL;
                  sub_B2C2F8(&this->fields.openCallbackFunc, 0LL);
                }
              }
            }
          }
        }
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      if ( (BYTE3(SingletonTemplate_PartyOrganizationUtility__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_PartyOrganizationUtility__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_PartyOrganizationUtility__TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_207;
      gameObject = (UnityEngine_GameObject_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(
                                                 (PartyOrganizationUtility_o *)gameObject,
                                                 0LL);
      if ( !this->fields.friendshipUpItemUseButton )
        goto LABEL_207;
      v117 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_207;
      if ( (v117 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.friendshipUpItemUseButton;
        if ( !gameObject )
          goto LABEL_207;
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)gameObject, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      v118 = PartyListMenu_TypeInfo;
      if ( v42 )
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v118 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_HINT_IN_EVENT = &v118->static_fields->LAYOUT_POS_X_HINT_IN_EVENT;
      }
      else
      {
        if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyListMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
          v118 = PartyListMenu_TypeInfo;
        }
        p_LAYOUT_POS_X_HINT_IN_EVENT = &v118->static_fields->LAYOUT_POS_X_HINT_NOT_EVENT;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_207;
      v120 = *p_LAYOUT_POS_X_HINT_IN_EVENT;
      v121 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      v123 = PartyListMenu_TypeInfo;
      v124 = v121;
      if ( (BYTE3(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v123 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(
        (PartyListMenu_o *)v121,
        v124,
        v123->static_fields->LAYOUT_FS_OFFSET,
        v120,
        0,
        v122);
      v125 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v125 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v125->static_fields->ClassBoardReleaseQuestId;
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_25746984(ClassBoardReleaseQuestId, -1, 0, 0LL) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AtlasManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        }
        AtlasManager__SetPartyOrganizationImage(
          classInfoSpriteOrganization,
          (System_String_o *)StringLiteral_17146/*"buttontxt_formation_20"*/,
          0LL);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17146/*"buttontxt_formation_20"*/,
          0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_207:
        sub_B2C434(gameObject, v46);
      PartyListViewManager__SetMode_31935488((PartyListViewManager_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      v128 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v128, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v128, 0LL);
      return;
    case 2:
    case 3:
    case 7:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v38);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_B2C2F8(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B2C2F8(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(&this->fields.callbackFunc, callback);
      v39 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v40 = *v39;
        if ( *v39 )
        {
          this->fields.hintDialogCloseCallbackFunc = v40;
          sub_B2C2F8(&this->fields.hintDialogCloseCallbackFunc, v40);
          this->fields.openCallbackFunc = 0LL;
          sub_B2C2F8(&this->fields.openCallbackFunc, 0LL);
        }
      }
      PartyListMenu__EndOpen(this, (const MethodInfo *)v40);
      if ( !this->fields.tutorialMode && isOpenHelp )
        PartyListMenu__OpenHelp(this, v41);
      return;
    case 5:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v38);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_B2C2F8(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_B2C2F8(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_B2C2F8(&this->fields.callbackFunc, callback);
      v52 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v53 = *v52;
        if ( *v52 )
        {
          this->fields.hintDialogCloseCallbackFunc = v53;
          sub_B2C2F8(&this->fields.hintDialogCloseCallbackFunc, v53);
          this->fields.openCallbackFunc = 0LL;
          sub_B2C2F8(&this->fields.openCallbackFunc, 0LL);
        }
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_207;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_207;
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
        goto LABEL_207;
      PartyListViewManager__SetMode_31935488((PartyListViewManager_o *)gameObject, 1, 0LL);
      PartyListMenu__EndOpen(this, v54);
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
  TutorialFlag_ImageId_array *v10; // x1
  struct QuestRestrictionInfo_o *v11; // x8
  int32_t eventId; // w20
  System_Action_o *v13; // x21
  struct QuestRestrictionInfo_o *v14; // x8
  int32_t menuKind; // w8
  WebViewManager_o *v16; // x19
  int32_t v17; // w2
  CommonUI_o *v18; // x0
  System_Action_o *v19; // x3
  const MethodInfo *v20; // x1
  WebViewManager_o *Instance; // x20
  int v22; // w8
  TutorialFlag_ImageId_array *v23; // x21
  System_Action_o *v24; // x22
  __int64 v25; // x0

  if ( (byte_418525A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&TutorialFlag_ImageId___TypeInfo, v3);
    sub_B2C35C(&Method_PartyListMenu_CheckFriendshipUpItemTutorial__, v4);
    sub_B2C35C(&Method_PartyListMenu_EndHelp__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B2C35C(&TutorialFlag_TypeInfo, v7);
    byte_418525A = 1;
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
      v11 = this->fields.questRestrictionInfo;
      if ( v11 )
      {
        eventId = v11->fields.eventId;
        v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(v13, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
        v14 = this->fields.questRestrictionInfo;
        if ( v14 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v13, v14->fields.questId, v14->fields.questPhase, 0, 0, 0LL);
          return;
        }
      }
LABEL_31:
      sub_B2C434(IsTutorialDataExists, v10);
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
      if ( TutorialFlag__Get_28617756(202, 0LL) )
      {
        PartyListMenu__CheckFriendshipUpItemTutorial(this, v20);
        return;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_B2C374(TutorialFlag_ImageId___TypeInfo, 2LL);
      if ( !IsTutorialDataExists )
        goto LABEL_31;
      v22 = *(_DWORD *)(IsTutorialDataExists + 24);
      v23 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( v22 )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 37;
        if ( v22 != 1 )
        {
          *(_DWORD *)(IsTutorialDataExists + 36) = 38;
          v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v24, (Il2CppObject *)this, Method_PartyListMenu_CheckFriendshipUpItemTutorial__, 0LL);
          if ( !Instance )
            goto LABEL_31;
          v17 = 202;
          v18 = (CommonUI_o *)Instance;
          v10 = v23;
          v19 = v24;
          goto LABEL_30;
        }
      }
LABEL_32:
      v25 = sub_B2C460(IsTutorialDataExists);
      sub_B2C400(v25, 0LL);
    }
    if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TutorialFlag_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    }
    if ( !TutorialFlag__Get_28617756(205, 0LL) )
    {
      v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_B2C374(TutorialFlag_ImageId___TypeInfo, 1LL);
      if ( !IsTutorialDataExists )
        goto LABEL_31;
      v10 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( *(_DWORD *)(IsTutorialDataExists + 24) )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 644;
        if ( !v16 )
          goto LABEL_31;
        v17 = 205;
        v18 = (CommonUI_o *)v16;
        v19 = 0LL;
LABEL_30:
        CommonUI__OpenTutorialImageDialog(v18, v10, v17, v19, 0LL, 0LL, 0LL);
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

  if ( (byte_4185239 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, buttonObj);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10);
    this = (PartyListMenu_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4185239 = 1;
  }
  if ( !buttonObj )
    goto LABEL_21;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      buttonObj,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v13 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  buttonObj,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  v16 = PartyListMenu__FSOffsetX_20202284((PartyListMenu_o *)transform, offset, v15);
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
      sub_B2C434(this, buttonObj);
    }
  }
}


void __fastcall PartyListMenu__SetButtonState(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t menuKind; // w8
  unsigned int v5; // w21
  struct UICommonButton_o *partyStartButton; // x0
  UICommonButton_c *klass; // x8
  unsigned int v8; // w20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  unsigned int v10; // w20
  UICommonButton_c *v11; // x8

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
      ((void (__fastcall *)(struct UICommonButton_o *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        3LL,
        0LL,
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
      method = (const MethodInfo *)this->fields.questRestrictionInfo;
      if ( menuKind == 6 )
        v5 = 3;
      else
        v5 = 0;
      if ( menuKind == 7 )
      {
        if ( method )
        {
          if ( LODWORD(method[1].name) == 1 )
          {
            if ( BYTE3(method[5].methodPointer) )
              v5 = 3;
            if ( !v5 )
              goto LABEL_42;
            goto LABEL_24;
          }
LABEL_23:
          if ( !v5 )
            goto LABEL_42;
LABEL_24:
          v8 = v5;
          if ( !BYTE2(method[5].methodPointer) )
            goto LABEL_43;
          goto LABEL_42;
        }
      }
      else if ( method )
      {
        goto LABEL_23;
      }
      if ( menuKind == 6 )
      {
        v5 = 3;
        v8 = 3;
        goto LABEL_43;
      }
      method = 0LL;
LABEL_42:
      v8 = PartyListMenu__CheckEnableAutoOrganizationButton(this, (QuestRestrictionInfo_o *)method, v2);
      v5 = 0;
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
        v5,
        0LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        v5,
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
        || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
              partyStartButton,
              v8,
              0LL,
              partyStartButton->klass->vtable._15_OnPress.methodPtr),
            (partyStartButton = this->fields.autoOrganization2Button) == 0LL) )
      {
LABEL_65:
        sub_B2C434(partyStartButton, method);
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
      v11 = partyStartButton->klass;
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
      questRestrictionInfo = this->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        v10 = questRestrictionInfo->fields.eventDeckNum <= 0 ? 0 : 3;
      else
        v10 = 0;
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
        v10,
        1LL,
        partyStartButton->klass->vtable._15_OnPress.methodPtr);
      partyStartButton = this->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_65;
      v11 = partyStartButton->klass;
LABEL_61:
      ((void (*)(void))v11->vtable._14_SetState.method)();
      partyStartButton = this->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_65;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable._14_SetState.method)(
        partyStartButton,
        0LL,
        0LL,
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
    sub_B2C434(0LL, index);
  ListViewManager__JumpItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B2C434(0LL, method);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0LL);
}


void __fastcall PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B2C434(0LL, enabled);
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
    sub_B2C434(partyListViewManager, baseDeckItemList);
  }
  PartyListViewManager__SetMode_31935488(partyListViewManager, 1, 0LL);
}


void __fastcall PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _BOOL8 v5; // x1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_B2C434(0LL, v5);
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
  UnityEngine_Object_o *partyStartButtonTxtSp; // x19
  __int64 v9; // x1
  UISprite_o *v10; // x19
  _QWORD *p_image; // x0
  System_String_o **v12; // x8

  if ( (byte_418525C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isBattle);
    sub_B2C35C(&PartyListMenu_TypeInfo, v7);
    byte_418525C = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0LL, 0LL) )
  {
    v10 = this->fields.partyStartButtonTxtSp;
    p_image = &PartyListMenu_TypeInfo->_1.image;
    if ( isWaveBattle )
    {
      if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
      }
      if ( v10 )
      {
        UISprite__set_spriteName(v10, PartyListMenu_TypeInfo->static_fields->START_BUTTON_WAVE_BATTLE_SP, 0LL);
        p_image = &this->fields.partyStartButtonTxtSp->klass;
        if ( p_image )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 840LL))(p_image, *(_QWORD *)(*p_image + 848LL));
          return;
        }
      }
LABEL_25:
      sub_B2C434(p_image, v9);
    }
    if ( isBattle )
    {
      if ( (WORD1(PartyListMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        p_image = &PartyListMenu_TypeInfo->_1.image;
      }
      v12 = (System_String_o **)(p_image[23] + 176LL);
      if ( !v10 )
        goto LABEL_25;
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
      if ( !v10 )
        goto LABEL_25;
    }
    UISprite__set_spriteName(v10, *v12, 0LL);
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
  ScrollMessageDialog_ClickDelegate_o *v16; // x24
  QuestPhaseEntity_o *v17; // [xsp+0h] [xbp-40h] BYREF
  QuestHintEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_418526A & 1) == 0 )
  {
    sub_B2C35C(&ScrollMessageDialog_ClickDelegate_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestHintMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_PartyListMenu__ShowHintDialogButton_b__169_0__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    this = (PartyListMenu_o *)sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418526A = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  monitor = v2[29].monitor;
  if ( !monitor )
    goto LABEL_25;
  v11 = monitor[9];
  v10 = monitor[10];
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyListMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestHintMaster___);
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
    this = (PartyListMenu_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_25;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v17, v11, v10, 0LL) )
    {
      this = (PartyListMenu_o *)v17;
      if ( !v17 )
        goto LABEL_25;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessageTitle(v17, 0LL);
      if ( !v17 )
        goto LABEL_25;
      title = (System_String_o *)this;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessage(v17, 0LL);
      if ( !v17 )
        goto LABEL_25;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v17, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (ScrollMessageDialog_ClickDelegate_o *)sub_B2C42C(ScrollMessageDialog_ClickDelegate_TypeInfo);
  ScrollMessageDialog_ClickDelegate___ctor(v16, v2, Method_PartyListMenu__ShowHintDialogButton_b__169_0__, 0LL);
  if ( !Instance )
LABEL_25:
    sub_B2C434(this, method);
  CommonUI__OpenScrollMessageDialog(Instance, title, message, leftIndent, v16, 0, 1, 0LL);
}


void __fastcall PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_B2C434(0LL, index);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
      PartyListViewManager__SetMode_31935488((PartyListViewManager_o *)autoOrganizationConfirmDialog, 1, 0LL);
      PartyListMenu__Callback(this, 19, v6);
      return;
    }
LABEL_6:
    sub_B2C434(autoOrganizationConfirmDialog, isDecide);
  }
}


void __fastcall PartyListMenu___OnClickAutoSell_b__126_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_B2C434(0LL, res);
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
  if ( (byte_418526E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UISprite___, v3);
    this = (PartyListMenu_o *)sub_B2C35C(&StringLiteral_16952/*"btn_badge_organization"*/, v4);
    byte_418526E = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v2->fields.commandAssistConfirmButton) == 0LL )
    sub_B2C434(this, method);
  eventId = questRestrictionInfo->fields.eventId;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28451336(
    eventId,
    (UISprite_o *)Component_WebViewObject,
    (System_String_o *)StringLiteral_16952/*"btn_badge_organization"*/,
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

  if ( (byte_4185235 & 1) == 0 )
  {
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, value);
    byte_4185235 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_B2C728(v7);
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

  if ( (byte_4185233 & 1) == 0 )
  {
    sub_B2C35C(&PartyListMenu_TypeInfo, method);
    byte_4185233 = 1;
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

  if ( (byte_4185234 & 1) == 0 )
  {
    sub_B2C35C(&PartyListMenu_TypeInfo, method);
    byte_4185234 = 1;
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

  if ( (byte_4185236 & 1) == 0 )
  {
    sub_B2C35C(&PartyListMenu_CallbackFunc_TypeInfo, value);
    byte_4185236 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_B2C728(v7);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_418527F & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&PartyListMenu_ResultKind_TypeInfo, v10);
    byte_418527F = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(PartyListMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, *(_QWORD *)&m);
      if ( (sub_B2C38C(v25) & 1) == 0 )
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
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
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
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v20, v25);
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
            v19 = sub_AC5258(v24, class_0, v12, v14);
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
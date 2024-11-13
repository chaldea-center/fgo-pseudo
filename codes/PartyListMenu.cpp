void __fastcall PartyListMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct PartyListMenu_StaticFields *static_fields; // x8
  PartyListMenu_c *v14; // x8
  struct PartyListMenu_StaticFields *v15; // x9
  struct System_Int32_array *v16; // x0
  __int64 v17; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v19; // x1
  struct PartyListMenu_StaticFields *v20; // x0
  struct PartyListMenu_StaticFields *v21; // x8
  il2cpp_array_size_t v22; // w8
  struct PartyListMenu_StaticFields *v23; // x0
  il2cpp_array_size_t v24; // w8
  struct PartyListMenu_StaticFields *v25; // x0
  il2cpp_array_size_t v26; // w8
  struct PartyListMenu_StaticFields *v27; // x0
  il2cpp_array_size_t v28; // w8
  struct PartyListMenu_StaticFields *v29; // x0
  il2cpp_array_size_t v30; // w8
  struct PartyListMenu_StaticFields *v31; // x0
  il2cpp_array_size_t v32; // w8
  struct PartyListMenu_StaticFields *v33; // x0
  il2cpp_array_size_t v34; // w8
  struct PartyListMenu_StaticFields *v35; // x0
  il2cpp_array_size_t v36; // w8
  struct PartyListMenu_StaticFields *v37; // x0
  il2cpp_array_size_t v38; // w8
  struct PartyListMenu_StaticFields *v39; // x0
  il2cpp_array_size_t v40; // w8
  struct PartyListMenu_StaticFields *v41; // x0
  il2cpp_array_size_t v42; // w9
  struct PartyListMenu_StaticFields *v43; // x0
  il2cpp_array_size_t v44; // w8
  struct PartyListMenu_StaticFields *v45; // x0
  __int64 v46; // x1
  struct PartyListMenu_StaticFields *v47; // x0
  __int64 v48; // x1
  struct PartyListMenu_StaticFields *v49; // x0
  __int64 v50; // x1
  struct PartyListMenu_StaticFields *v51; // x0

  if ( (byte_4B11E37 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, v1, v2);
    sub_1BCA7E0(&PartyListMenu_TypeInfo, v3, v4);
    sub_1BCA7E0(&float___TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17846/*"buttontxt_battlestart"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_17848/*"buttontxt_formation_05"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_17853/*"buttontxt_queststart"*/, v11, v12);
    byte_4B11E37 = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v14 = PartyListMenu_TypeInfo;
  v15 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v15->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v15->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v14->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  max_length = v16->max_length;
  v19 = v16;
  if ( !max_length )
    goto LABEL_43;
  v16->m_Items[1] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v16->m_Items[2] = 76;
  v20 = PartyListMenu_TypeInfo->static_fields;
  v20->LAYOUT_SIZE_X_TYPE_MIDDLE = v19;
  sub_1BCA784(&v20->LAYOUT_SIZE_X_TYPE_MIDDLE, v19);
  v21 = PartyListMenu_TypeInfo->static_fields;
  *(_OWORD *)&v21->LAYOUT_SIZE_X_TYPE_BIG = xmmword_BD2620;
  v21->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v22 = v16->max_length;
  v19 = v16;
  if ( !v22 )
    goto LABEL_43;
  v16->m_Items[1] = 181;
  if ( v22 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = 187;
  v23 = PartyListMenu_TypeInfo->static_fields;
  v23->LAYOUT_POS_X_HELP = v19;
  sub_1BCA784(&v23->LAYOUT_POS_X_HELP, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v24 = v16->max_length;
  v19 = v16;
  if ( !v24 )
    goto LABEL_43;
  v16->m_Items[1] = 140;
  if ( v24 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = 146;
  v25 = PartyListMenu_TypeInfo->static_fields;
  v25->LAYOUT_POS_X_QUESTINFO = v19;
  sub_1BCA784(&v25->LAYOUT_POS_X_QUESTINFO, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v26 = v16->max_length;
  v19 = v16;
  if ( !v26 )
    goto LABEL_43;
  v16->m_Items[1] = -45;
  if ( v26 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = -94;
  v27 = PartyListMenu_TypeInfo->static_fields;
  v27->LAYOUT_POS_X_AUTOSELL_1 = v19;
  sub_1BCA784(&v27->LAYOUT_POS_X_AUTOSELL_1, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v28 = v16->max_length;
  v19 = v16;
  if ( !v28 )
    goto LABEL_43;
  v16->m_Items[1] = 55;
  if ( v28 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = 2;
  v29 = PartyListMenu_TypeInfo->static_fields;
  v29->LAYOUT_POS_X_AUTOSELL_2 = v19;
  sub_1BCA784(&v29->LAYOUT_POS_X_AUTOSELL_2, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v30 = v16->max_length;
  v19 = v16;
  if ( !v30 )
    goto LABEL_43;
  v16->m_Items[1] = -40;
  if ( v30 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = -85;
  v31 = PartyListMenu_TypeInfo->static_fields;
  v31->LAYOUT_POS_X_EVENT = v19;
  sub_1BCA784(&v31->LAYOUT_POS_X_EVENT, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v32 = v16->max_length;
  v19 = v16;
  if ( !v32 )
    goto LABEL_43;
  v16->m_Items[1] = -135;
  if ( v32 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = -171;
  v33 = PartyListMenu_TypeInfo->static_fields;
  v33->LAYOUT_POS_X_INFOMATION = v19;
  sub_1BCA784(&v33->LAYOUT_POS_X_INFOMATION, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v34 = v16->max_length;
  v19 = v16;
  if ( !v34 )
    goto LABEL_43;
  v16->m_Items[1] = -225;
  if ( v34 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = -248;
  v35 = PartyListMenu_TypeInfo->static_fields;
  v35->LAYOUT_POS_X_REMOVE = v19;
  sub_1BCA784(&v35->LAYOUT_POS_X_REMOVE, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v36 = v16->max_length;
  v19 = v16;
  if ( !v36 )
    goto LABEL_43;
  v16->m_Items[1] = -315;
  if ( v36 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = -325;
  v37 = PartyListMenu_TypeInfo->static_fields;
  v37->LAYOUT_POS_X_SWAP = v19;
  sub_1BCA784(&v37->LAYOUT_POS_X_SWAP, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v38 = v16->max_length;
  v19 = v16;
  if ( !v38 )
    goto LABEL_43;
  v16->m_Items[1] = 79;
  if ( v38 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = -17;
  v39 = PartyListMenu_TypeInfo->static_fields;
  v39->LAYOUT_POS_X_HINT_1 = v19;
  sub_1BCA784(&v39->LAYOUT_POS_X_HINT_1, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v40 = v16->max_length;
  v19 = v16;
  if ( !v40 )
    goto LABEL_43;
  v16->m_Items[1] = 79;
  if ( v40 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = 79;
  v41 = PartyListMenu_TypeInfo->static_fields;
  v41->LAYOUT_POS_X_HINT_2 = v19;
  sub_1BCA784(&v41->LAYOUT_POS_X_HINT_2, v19);
  v16 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_44;
  v42 = v16->max_length;
  v19 = v16;
  if ( !v42 || (v16->m_Items[1] = -36, v42 == 1) )
LABEL_43:
    sub_1BCAA44(v16, v19);
  v16->m_Items[2] = -36;
  v43 = PartyListMenu_TypeInfo->static_fields;
  v43->LAYOUT_POS_X_HELP_BUTTON = v19;
  sub_1BCA784(&v43->LAYOUT_POS_X_HELP_BUTTON, v19);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v16 = (struct System_Int32_array *)sub_1BCA888(float___TypeInfo, 2LL);
  if ( !v16 )
LABEL_44:
    sub_1BCAA3C(v16, v17);
  v44 = v16->max_length;
  v19 = v16;
  if ( !v44 )
    goto LABEL_43;
  v16->m_Items[1] = 1116209152;
  if ( v44 == 1 )
    goto LABEL_43;
  v16->m_Items[2] = 1115815936;
  v45 = PartyListMenu_TypeInfo->static_fields;
  v45->LAYOUT_FS_OFFSET_OLD = (struct System_Single_array *)v19;
  sub_1BCA784(&v45->LAYOUT_FS_OFFSET_OLD, v19);
  v46 = StringLiteral_17853/*"buttontxt_queststart"*/;
  v47 = PartyListMenu_TypeInfo->static_fields;
  v47->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17853/*"buttontxt_queststart"*/;
  sub_1BCA784(&v47->START_BUTTON_QUEST_SP, v46);
  v48 = StringLiteral_17846/*"buttontxt_battlestart"*/;
  v49 = PartyListMenu_TypeInfo->static_fields;
  v49->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17846/*"buttontxt_battlestart"*/;
  sub_1BCA784(&v49->START_BUTTON_BATTLE_SP, v48);
  v50 = StringLiteral_17848/*"buttontxt_formation_05"*/;
  v51 = PartyListMenu_TypeInfo->static_fields;
  v51->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17848/*"buttontxt_formation_05"*/;
  sub_1BCA784(&v51->START_BUTTON_WAVE_BATTLE_SP, v50);
}


void __fastcall PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11E36 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B11E36 = 1;
  }
  this->fields.isSelectItemEnable = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall PartyListMenu__Awake(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall PartyListMenu__Callback(PartyListMenu_o *this, int32_t result, const MethodInfo *method)
{
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x21
  __int64 v6; // x1
  ListViewManager_o *partyListViewManager; // x0
  unsigned int CenterIndex; // w0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BCA784(&this->fields.callbackFunc, 0LL);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      CenterIndex,
      0xFFFFFFFFLL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


int32_t __fastcall PartyListMenu__CheckEnableAutoOrganizationButton(
        PartyListMenu_o *this,
        QuestRestrictionInfo_o *restrictionInfo,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0
  int32_t DeckMemberMax; // w20

  if ( (byte_4B11E01 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, restrictionInfo, method);
    byte_4B11E01 = 1;
  }
  if ( !restrictionInfo )
    return 0;
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, restrictionInfo);
    v4 = BalanceConfig_TypeInfo;
  }
  DeckMemberMax = v4->static_fields->DeckMemberMax;
  if ( QuestRestrictionInfo__IsMyServantNum(restrictionInfo, 0LL) )
  {
    DeckMemberMax = restrictionInfo->fields.myServantNumMax;
  }
  else if ( QuestRestrictionInfo__IsServantNum(restrictionInfo, 0LL) )
  {
    DeckMemberMax = restrictionInfo->fields.servantNumMax;
  }
  if ( DeckMemberMax <= 0 )
    return 3;
  else
    return 0;
}


void __fastcall PartyListMenu__CheckFriendshipUpItemTutorial(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B11E24 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method, v2);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v4, v5);
    byte_4B11E24 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    if ( TutorialFlag__Get_38402052(102, 0LL) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        sub_1BCAA3C(0LL, v7);
      if ( PartyOrganizationUtility__IsAvailableFriendshipUpItem((PartyOrganizationUtility_o *)Instance, 0LL) )
        EventTutorialMaster__CheckTutorial(0, 71, 0LL, 0, 0, 0, 0, 0LL);
    }
  }
}


void __fastcall PartyListMenu__Close(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Close_32437064(this, 0LL, v2);
}


void __fastcall PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11E29 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11E29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B11E2F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B11E2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseCenterEffectDetailDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall PartyListMenu__Close_32437064(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  PartyListViewManager_o *partyListViewManager; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4B11E03 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyListMenu_EndCloseList__, v6, v7);
    sub_1BCA7E0(&Method_PartyListMenu_EndClose__, v8, v9);
    byte_4B11E03 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, callback, method, v3);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0LL);
  if ( !partyListViewManager )
    sub_1BCAA3C(v12, v13);
  PartyListViewManager__SetMode_32500744(partyListViewManager, 1, v11, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
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
    sub_1BCAA3C(infoPanel, disp);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0LL);
}


void __fastcall PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B11E05 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListMenu_OnSelectItem__, v5, v6);
    byte_4B11E05 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v8 = (PartyListViewManager_CallbackFunc_o *)sub_1BCAA2C(PartyListViewManager_CallbackFunc_TypeInfo, method, v2, v3);
  PartyListViewManager_CallbackFunc___ctor(v8, (Il2CppObject *)this, (intptr_t)Method_PartyListMenu_OnSelectItem__, 0LL);
  if ( !partyListViewManager )
    sub_1BCAA3C(v9, v10);
  PartyListViewManager__SetMode(partyListViewManager, 2, v8, 0LL);
}


void __fastcall PartyListMenu__EndClose(PartyListMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  PartyListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
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
    sub_1BCAA3C(tutorialMaskBase, method);
  }
  PartyListViewManager__SetMode_32500648((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  PartyListMenu__Callback(this, 2, v4);
}


void __fastcall PartyListMenu__EndCloseTutorialArrowEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x20

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL) )
  {
    sub_1BCAA3C(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1BCA784(&this->fields.callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD, __int64, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      17LL,
      0LL,
      1LL,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListMenu__EndCloseTutorialArrowStart(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v4; // x2

  partyListViewManager = this->fields.partyListViewManager;
  this->fields.state = 3;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL )
  {
    sub_1BCAA3C(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  PartyListMenu__Callback(this, 8, v4);
}


void __fastcall PartyListMenu__EndEnter(PartyListMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o *closeCallbackFunc; // x20

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListMenu__EndHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__EndOpen(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v22; // x21
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialMode; // w8
  __int64 v25; // x1
  Il2CppObject *v26; // x20
  UnityEngine_Vector2_o v27; // kr00_8
  Il2CppObject *Instance; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x21
  float v33; // s3
  float v34; // s1
  float v35; // s4
  float v36; // s0
  int v37; // w8
  int v38; // w9
  PartyListViewManager_o *v39; // x20
  PartyListViewManager_CallbackFunc_o *v40; // x21
  __int64 v41; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  int v47; // s5
  int v48; // s6
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  __int64 v50; // x1
  Il2CppObject *v51; // x20
  UnityEngine_Vector2_o v52; // kr10_8
  __int64 v53; // x1
  Il2CppObject *v54; // x20
  System_String_o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Action_o *v59; // x22
  struct System_Action_o *openCallbackFunc; // x20
  UnityEngine_Vector2_o v61; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v62; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4B11E02 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&PartyListViewManager_CallbackFunc_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_FSOffset___, v7, v8);
    sub_1BCA7E0(&FSUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_PartyListMenu_EndOpenTutorialArrow__, v13, v14);
    sub_1BCA7E0(&Method_PartyListMenu_OnSelectItem__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    sub_1BCA7E0(&StringLiteral_13663/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, v19, v20);
    byte_4B11E02 = 1;
  }
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v22 = (PartyListViewManager_CallbackFunc_o *)sub_1BCAA2C(PartyListViewManager_CallbackFunc_TypeInfo, method, v2, v3);
    PartyListViewManager_CallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyListMenu_OnSelectItem__,
      0LL);
    if ( !partyListViewManager )
      goto LABEL_52;
    PartyListViewManager__SetMode(partyListViewManager, 2, v22, 0LL);
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
                Component_object = UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)tutorialMaskBase,
                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v41);
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0LL);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v44, v45, v46);
                System_Action___ctor(v32, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( Instance )
                {
                  v34 = AddOffset.fields.y + -231.0;
                  v35 = AddOffset.fields.y + -291.0;
                  v33 = AddOffset.fields.x + 329.0;
                  v36 = AddOffset.fields.x + 422.0;
                  v37 = 1128136704;
                  v38 = 1119092736;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1BCAA3C(tutorialMaskBase, method);
    }
    if ( tutorialMode != 2 )
    {
      if ( tutorialMode != 1 )
        goto LABEL_47;
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
                v26 = UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)tutorialMaskBase,
                        (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v25);
                v27 = FSUtility__GetAddOffset((FSOffset_o *)v26, 1, 0LL);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
                System_Action___ctor(v32, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( Instance )
                {
                  v33 = v27.fields.x + -200.0;
                  v34 = v27.fields.y + -255.0;
                  v35 = v27.fields.y + -295.0;
                  v36 = v27.fields.x + -120.0;
                  v37 = 1126170624;
                  v38 = 1117782016;
LABEL_29:
                  v47 = v37;
                  v48 = v38;
                  CommonUI__OpenTutorialArrowMark(
                    (CommonUI_o *)Instance,
                    *(UnityEngine_Vector2_o *)&v36,
                    0.0,
                    *(UnityEngine_Rect_o *)&v33,
                    v32,
                    0LL);
                  goto LABEL_47;
                }
              }
            }
          }
        }
      }
      goto LABEL_52;
    }
    tutorialMaskBase = this->fields.tutorialMaskBase;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialMaskBase = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tutorialMaskBase, 0LL);
    if ( !tutorialMaskBase )
      goto LABEL_52;
    UnityEngine_GameObject__SetActive(tutorialMaskBase, 1, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialPartyOrganizationChangeEmptyObject = this->fields.tutorialPartyOrganizationChangeEmptyObject;
    tutorialMaskBase = (UnityEngine_GameObject_o *)PartyListViewManager__GetItem(
                                                     (PartyListViewManager_o *)tutorialMaskBase,
                                                     0,
                                                     0LL);
    if ( !tutorialPartyOrganizationChangeEmptyObject )
      goto LABEL_52;
    PartyOrganizationChangeObject__SetItem(
      tutorialPartyOrganizationChangeEmptyObject,
      (PartyListViewItem_o *)tutorialMaskBase,
      1,
      0LL,
      0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    PartyListViewManager__SetMode_32500648((PartyListViewManager_o *)tutorialMaskBase, 3, 0LL);
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)tutorialMaskBase,
                                                     0LL);
    if ( !tutorialMaskBase )
      goto LABEL_52;
    tutorialMaskBase = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                     (UnityEngine_Transform_o *)tutorialMaskBase,
                                                     0LL);
    if ( !tutorialMaskBase )
      goto LABEL_52;
    v51 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, v50);
    v52 = FSUtility__GetAddOffset((FSOffset_o *)v51, 1, 0LL);
    v54 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
    v55 = LocalizationManager__Get((System_String_o *)StringLiteral_13663/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, 0LL);
    v59 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v56, v57, v58);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
    if ( !v54 )
      goto LABEL_52;
    v61.fields.x = v52.fields.x + -245.0;
    v61.fields.y = v52.fields.y + 70.0;
    v62.fields.m_XMin = v52.fields.x + -320.0;
    v62.fields.m_YMin = v52.fields.y + -205.0;
    v62.fields.m_Width = 150.0;
    v62.fields.m_Height = 380.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)v54,
      v55,
      v61,
      v62,
      0.0,
      (UnityEngine_Vector2_o)0xC220000042C80000LL,
      -1,
      v59,
      0LL);
  }
  else
  {
    if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      v39 = this->fields.partyListViewManager;
      v40 = (PartyListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                     PartyListViewManager_CallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
      PartyListViewManager_CallbackFunc___ctor(
        v40,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0LL);
      if ( v39 )
      {
        PartyListViewManager__SetMode(v39, 2, v40, 0LL);
        goto LABEL_47;
      }
      goto LABEL_52;
    }
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    PartyListViewManager__SetMode_32500648((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  }
LABEL_47:
  if ( this->fields.isHintDialogOpenFlag )
  {
    *(_WORD *)&this->fields.isHintDialogOpenFlag = 256;
    PartyListMenu__ShowHintDialogButton(this, method);
  }
  openCallbackFunc = this->fields.openCallbackFunc;
  if ( openCallbackFunc )
  {
    this->fields.openCallbackFunc = 0LL;
    sub_1BCA784(&this->fields.openCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openCallbackFunc->fields.m_target)(
      openCallbackFunc->fields.original_method_info,
      *(_QWORD *)&openCallbackFunc->fields.extra_arg);
  }
}


void __fastcall PartyListMenu__EndOpenTutorialArrow(PartyListMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 7;
}


void __fastcall PartyListMenu__Enter(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Enter_32437400(this, 0LL, v2);
}


void __fastcall PartyListMenu__Enter_32437400(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_Action_o *v11; // x20

  if ( (byte_4B11E04 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyListMenu_EndEnter__, v5, v6);
    byte_4B11E04 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, callback);
  PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v11 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_EndEnter__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v11, 0LL);
}


void __fastcall PartyListMenu__ExecuteOpenCallback(PartyListMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *hintDialogCloseCallbackFunc; // x19
  struct System_Action_o **p_hintDialogCloseCallbackFunc; // x0

  hintDialogCloseCallbackFunc = this->fields.hintDialogCloseCallbackFunc;
  this->fields.isDisplayHintDialog = 0;
  if ( hintDialogCloseCallbackFunc )
  {
    p_hintDialogCloseCallbackFunc = &this->fields.hintDialogCloseCallbackFunc;
    *p_hintDialogCloseCallbackFunc = 0LL;
    sub_1BCA784(p_hintDialogCloseCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))hintDialogCloseCallbackFunc->fields.m_target)(
      hintDialogCloseCallbackFunc->fields.original_method_info,
      *(_QWORD *)&hintDialogCloseCallbackFunc->fields.extra_arg);
  }
}


float __fastcall PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11DF7 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v2);
    byte_4B11DF7 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  return FSUtility__GetOffsetX(68.0, 1, 0LL);
}


float __fastcall PartyListMenu__FSOffsetX_32424796(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  __int64 v3; // x2

  if ( (byte_4B11DF8 & 1) == 0 )
  {
    sub_1BCA7E0(&FSUtility_TypeInfo, method, v3);
    byte_4B11DF8 = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo, method);
  return FSUtility__GetOffsetX(ver, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__ForceSetCenterItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0LL);
}


PartyListViewItem_o *__fastcall PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListMenu_o *v3; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 methodPtr_low; // x11

  v3 = this;
  if ( (byte_4B11DFD & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1BCA7E0(&PartyListViewItem_TypeInfo, method, v2);
    byte_4B11DFD = 1;
  }
  partyListViewManager = v3->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(this, method);
  centerItem = (PartyListViewItem_o *)partyListViewManager->fields.centerItem;
  if ( !centerItem )
    return 0LL;
  methodPtr_low = LOBYTE(PartyListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(centerItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (PartyListViewItem_c *)centerItem->klass->_2.typeHierarchy[methodPtr_low - 1] == PartyListViewItem_TypeInfo )
    return centerItem;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
PartyListViewItem_o *__fastcall PartyListMenu__GetItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
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
    sub_1BCAA3C(friendshipUpItemUseButton, method);
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
    sub_1BCAA3C(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  this->fields.setupInfo = 0LL;
  sub_1BCA784(&this->fields.setupInfo, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_1BCA784(&this->fields.questRestrictionInfo, 0LL);
  this->fields.isDisplayHintDialog = 0;
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B11E27 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B11E27 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v12; // x1
  struct QuestRestrictionInfo_o *v13; // x8
  struct QuestRestrictionInfo_o *v14; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B11E2B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v8, v9);
    byte_4B11E2B = 1;
  }
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
    v13 = this->fields.questRestrictionInfo;
    if ( !v13 || !Master_object )
      goto LABEL_16;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            Master_object,
            &entity,
            v13->fields.eventId,
            (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      LOBYTE(questRestrictionInfo) = 0;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
    if ( !entity )
      goto LABEL_16;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventDetailEntity__GetIgnoreCommandAssistQuestIds(
                                                                    (EventDetailEntity_o *)entity,
                                                                    0LL);
    if ( !Master_object )
    {
      LOBYTE(questRestrictionInfo) = 1;
      return (unsigned __int8)questRestrictionInfo & 1;
    }
    v14 = this->fields.questRestrictionInfo;
    if ( !v14 )
LABEL_16:
      sub_1BCAA3C(Master_object, v12);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_object,
                                      v14->fields.questId,
                                      (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


bool __fastcall PartyListMenu__IsDisabledAutoOrganizationButton(PartyListMenu_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *autoOrganizationButton; // x8

  autoOrganizationButton = this->fields.autoOrganizationButton;
  if ( !autoOrganizationButton )
    sub_1BCAA3C(this, method);
  return autoOrganizationButton->fields.mState == 3;
}


bool __fastcall PartyListMenu__IsDisplayAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v17; // x8
  Il2CppObject *v20; // [xsp+8h] [xbp-28h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4B11E26 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AssistMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestPhaseMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssistEntity__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    byte_4B11E26 = 1;
  }
  entity = 0LL;
  v20 = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v17 = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v15);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v20,
          v17->fields.eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    return 0;
  Instance = (DataManager_o *)v20;
  if ( !v20 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag((EventDetailEntity_o *)v20, 0x80000000000LL, 0LL);
}


bool __fastcall PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v13; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v15; // x1
  EventCommandAssistMaster_o *v16; // x20
  struct QuestRestrictionInfo_o *v17; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11E2A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventCommandAssistMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDetailMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__, v10, v11);
    byte_4B11E2A = 1;
  }
  entity = 0LL;
  if ( this->fields.questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_object )
      goto LABEL_19;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
      Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_19;
      v16 = Master_object;
      Master_object = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                      (EventDetailEntity_o *)entity,
                                                      0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v17 = this->fields.questRestrictionInfo;
        if ( v17 )
        {
          if ( v16 )
          {
            Master_object = (EventCommandAssistMaster_o *)EventCommandAssistMaster__GetValidEntityList(
                                                            v16,
                                                            v17->fields.eventId,
                                                            -1,
                                                            0LL);
            if ( Master_object )
              return LODWORD(Master_object->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_19:
        sub_1BCAA3C(Master_object, v13);
      }
    }
  }
  return 0;
}


bool __fastcall PartyListMenu__IsDisplayLiveConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v15; // x1
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v17; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B11E2D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_20302/*"icon_center_bg"*/, v10, v11);
    byte_4B11E2D = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_20302/*"icon_center_bg"*/, 0LL);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0LL),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0LL)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                      Instance,
                                      Instance->klass[2]._1.interopData),
        (v17 = this->fields.questRestrictionInfo) == 0LL)
    || (Instance = (DataManager_o *)entity) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Instance, v13);
  }
  return QuestEntity__HasFlag_40199512((QuestEntity_o *)entity, 0x100000000000000LL, v17->fields.questPhase, 0LL);
}


bool __fastcall PartyListMenu__IsHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v19; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B11E30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestHintMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B11E30 = 1;
  }
  entity = 0LL;
  v19 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v19, questId, questPhase, 0LL) )
    {
      Master_object = (QuestPhaseMaster_o *)v19;
      if ( v19 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v19, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_17:
      sub_1BCAA3C(Master_object, v14);
    }
    return 0;
  }
  return 1;
}


bool __fastcall PartyListMenu__IsHintDialogEveryTime(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestHintMaster_o *Master_object; // x0
  __int64 v12; // x1
  QuestPhaseEntity_o *v15; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B11E31 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestHintMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    byte_4B11E31 = 1;
  }
  entity = 0LL;
  v15 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (QuestHintMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (QuestHintMaster_o *)QuestHintMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.openType == 0;
LABEL_21:
    sub_1BCAA3C(Master_object, v12);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Master_object = (QuestHintMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v15, questId, questPhase, 0LL) )
    return 0;
  Master_object = (QuestHintMaster_o *)v15;
  if ( !v15 )
    goto LABEL_21;
  return QuestPhaseEntity__getHintOpenType(v15, 0LL) == 0;
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
        sub_1BCAA3C(IsServantNum, v9);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall PartyListMenu__IsUseEventLimitEquipUserWill(
        PartyListMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v17; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v19; // x22

  if ( (byte_4B11E28 & 1) == 0 )
  {
    sub_1BCA7E0(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu_OnClickAssistConfirmButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11E28 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v10 = Method_PartyListMenu_OnClickAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickAssistConfirmButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickAssistConfirmButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v17 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v19 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                               AssistEffectConfirmDialog_ClickDelegate_TypeInfo,
                                                               v13,
                                                               v14,
                                                               v15),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v19,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0LL),
          !v17) )
    {
      sub_1BCAA3C(Instance, v13);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v17, eventId, v19, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickAutoOrganization(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ListViewManager_o *partyListViewManager; // x0
  int32_t CenterIndex; // w0
  int32_t v6; // w20
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4B11E12 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickAutoOrganization__, method, v2);
    byte_4B11E12 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, method);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
    if ( (CenterIndex & 0x80000000) == 0 )
    {
      v6 = CenterIndex;
      v7 = Method_PartyListMenu_OnClickAutoOrganization__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
        v7 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickAutoOrganization__);
      v8 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v7, v7[4]);
      OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
      PartyListMenu__OpenAutoOrganizationConfirmDialog_32441060(this, v6, 0, v9);
    }
  }
}


void __fastcall PartyListMenu__OnClickAutoSell(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  DropAutoSellDlgComponent_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4B11E0F & 1) == 0 )
  {
    sub_1BCA7E0(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListMenu_OnClickAutoSell__, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu__OnClickAutoSell_b__131_0__, v6, v7);
    byte_4B11E0F = 1;
  }
  v8 = Method_PartyListMenu_OnClickAutoSell__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoSell__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickAutoSell__);
  v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v14 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_1BCAA2C(
                                                     DropAutoSellDlgComponent_CallbackFunc_TypeInfo,
                                                     v11,
                                                     v12,
                                                     v13);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__131_0__,
    v15);
  if ( !dropAutoSellDialog )
    sub_1BCAA3C(v16, v17);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v14, v18);
}


void __fastcall PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B11E06 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickCancel__, method, v2);
    byte_4B11E06 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 0, v8);
  }
}


void __fastcall PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v17; // x20
  int32_t questId; // w21
  int32_t questPhase; // w22
  System_Action_o *v20; // x23

  if ( (byte_4B11E2E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListMenu_CloseCenterEffectDetailDialog__, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11E2E = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v10 = Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v17 = (CommonUI_o *)Instance,
          questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15),
          System_Action___ctor(v20, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0LL),
          !v17) )
    {
      sub_1BCAA3C(Instance, v13);
    }
    CommonUI__OpenCenterEffectDetailDialog(v17, questId, questPhase, v20, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickChange(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  const MethodInfo *v14; // x2
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  Il2CppObject *Instance; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x21

  if ( (byte_4B11E07 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListMenu_EndCloseTutorialArrowChange__, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu_OnClickChange__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11E07 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_17;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 1 )
      {
        v15 = Method_PartyListMenu_OnClickChange__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
          v15 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickChange__);
        v16 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v15, v15[4]);
        OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
        System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowChange__, 0LL);
        if ( !Instance )
          goto LABEL_17;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v21, 0LL);
      }
    }
    else if ( state == 2 )
    {
      v12 = Method_PartyListMenu_OnClickChange__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
        v12 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickChange__);
      v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
      OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 2, v14);
        return;
      }
LABEL_17:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickCommandAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v15; // x19
  int32_t eventId; // w20
  Il2CppObject *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x21

  if ( (byte_4B11E2C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CommonUI_CloseCommandAssistConfirmDialog__, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11E2C = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v10 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 83) & 2) != 0 )
      v10 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
    OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v15 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20),
          System_Action___ctor(v21, v17, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v15) )
    {
      sub_1BCAA3C(Instance, v13);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v15, eventId, v21, 0LL);
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
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B11E0C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickDeckCopy__, method, v2);
    byte_4B11E0C = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v5 = Method_PartyListMenu_OnClickDeckCopy__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckCopy__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickDeckCopy__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 6, v7);
        return;
      }
LABEL_11:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckName(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v5; // w1
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2

  if ( (byte_4B11E0B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickDeckName__, method, v2);
    byte_4B11E0B = 1;
  }
  if ( this->fields.state == 2 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v5 = questRestrictionInfo && questRestrictionInfo->fields.eventDeckNum > 0;
    if ( !PartyListViewItem__IsSpecificMenuKind_32495016(this->fields.menuKind, v5, 0LL) )
    {
      partyListViewManager = this->fields.partyListViewManager;
      if ( !partyListViewManager )
        goto LABEL_15;
      if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
      {
        v8 = Method_PartyListMenu_OnClickDeckName__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckName__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickDeckName__);
        v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
        partyListViewManager = this->fields.partyListViewManager;
        this->fields.state = 3;
        if ( partyListViewManager )
        {
          PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
          PartyListMenu__Callback(this, 5, v10);
          return;
        }
LABEL_15:
        sub_1BCAA3C(partyListViewManager, v6);
      }
    }
  }
}


void __fastcall PartyListMenu__OnClickEdit(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B11E0D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickEdit__, method, v2);
    byte_4B11E0D = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v5 = Method_PartyListMenu_OnClickEdit__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickEdit__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickEdit__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 7, v7);
        return;
      }
LABEL_11:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_c *v6; // x0
  int32_t Int; // w0
  _QWORD *v8; // x8
  int32_t v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  PartyOrganizationUtility_c *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  FriendshipUpItemUseItem_o *friendshipUpItemUseButton; // x0
  bool v16; // w1
  __int64 v17; // x1
  PartyOrganizationUtility_c *v18; // x0

  if ( (byte_4B11E34 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickFriendshipUpItemUseButton__, method, v2);
    sub_1BCA7E0(&PartyOrganizationUtility_TypeInfo, v4, v5);
    byte_4B11E34 = 1;
  }
  v6 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, method);
    v6 = PartyOrganizationUtility_TypeInfo;
  }
  Int = UnityEngine_PlayerPrefs__GetInt(v6->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  v8 = Method_PartyListMenu_OnClickFriendshipUpItemUseButton__;
  v9 = Int;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickFriendshipUpItemUseButton__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickFriendshipUpItemUseButton__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !v9 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    v18 = PartyOrganizationUtility_TypeInfo;
    if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v17);
      v18 = PartyOrganizationUtility_TypeInfo;
    }
    UnityEngine_PlayerPrefs__SetInt(v18->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 1, 0LL);
    friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
    if ( friendshipUpItemUseButton )
    {
      v16 = 1;
      goto LABEL_16;
    }
LABEL_17:
    sub_1BCAA3C(friendshipUpItemUseButton, v13);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  v12 = PartyOrganizationUtility_TypeInfo;
  if ( !PartyOrganizationUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyOrganizationUtility_TypeInfo, v11);
    v12 = PartyOrganizationUtility_TypeInfo;
  }
  UnityEngine_PlayerPrefs__SetInt(v12->static_fields->SAVE_KEY_FRIENDSHIP_ITEM_USE_STATE, 0, 0LL);
  friendshipUpItemUseButton = this->fields.friendshipUpItemUseButton;
  if ( !friendshipUpItemUseButton )
    goto LABEL_17;
  v16 = 0;
LABEL_16:
  FriendshipUpItemUseItem__ChangeButtonState(friendshipUpItemUseButton, v16, v14);
}


void __fastcall PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  struct QuestRestrictionInfo_o *v19; // x8
  int32_t eventId; // w20
  System_Action_o *v21; // x21
  struct QuestRestrictionInfo_o *v22; // x8
  int32_t menuKind; // w8
  Il2CppObject *Instance; // x19
  int v25; // w8

  if ( (byte_4B11E22 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialFlag_ImageId___TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu_EndHelp__, v6, v7);
    sub_1BCA7E0(&Method_PartyListMenu_OnClickHelp__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    byte_4B11E22 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v12 = Method_PartyListMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickHelp__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickHelp__);
    v13 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
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
        v19 = this->fields.questRestrictionInfo;
        if ( v19 )
        {
          eventId = v19->fields.eventId;
          v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
          v22 = this->fields.questRestrictionInfo;
          if ( v22 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_40032684(
              eventId,
              45,
              v21,
              v22->fields.questId,
              v22->fields.questPhase,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_24:
        sub_1BCAA3C(IsTutorialDataExists, v16);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 1LL);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v16 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 2LL);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v25 = *(_DWORD *)(IsTutorialDataExists + 24);
        v16 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v25 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v25 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_24;
LABEL_23:
            CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v16, -1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
        }
      }
      sub_1BCAA44(IsTutorialDataExists, v16);
    }
  }
}


void __fastcall PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4B11E32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickHintDialogButton__, method, v2);
    byte_4B11E32 = 1;
  }
  v4 = Method_PartyListMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickHintDialogButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  PartyListMenu__ShowHintDialogButton(this, v6);
}


void __fastcall PartyListMenu__OnClickInfomation(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B11E11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickInfomation__, method, v2);
    byte_4B11E11 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v5 = Method_PartyListMenu_OnClickInfomation__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickInfomation__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickInfomation__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 11, v7);
        return;
      }
LABEL_11:
      sub_1BCAA3C(partyListViewManager, method);
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
      sub_1BCAA3C(0LL, method);
    PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void __fastcall PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B11E08 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickMasterFormation__, method, v2);
    byte_4B11E08 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickMasterFormation__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 9, v8);
  }
}


void __fastcall PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B11E14 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickPointEvent__, method, v2);
    byte_4B11E14 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v5 = Method_PartyListMenu_OnClickPointEvent__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickPointEvent__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickPointEvent__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 12, v7);
        return;
      }
LABEL_11:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4B11E10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickQuestInfo__, method, v2);
    byte_4B11E10 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickQuestInfo__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 18, v8);
  }
}


void __fastcall PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B11E0A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickRemove__, method, v2);
    byte_4B11E0A = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v5 = Method_PartyListMenu_OnClickRemove__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickRemove__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickRemove__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 4, v7);
        return;
      }
LABEL_11:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickStart(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  Il2CppObject *Instance; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Action_o *v19; // x21

  if ( (byte_4B11E0E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListMenu_EndCloseTutorialArrowStart__, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu_OnClickStart__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B11E0E = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_15;
  if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
  {
    state = this->fields.state;
    if ( state == 7 )
    {
      if ( this->fields.tutorialMode == 3 )
      {
        v13 = Method_PartyListMenu_OnClickStart__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickStart__ + 83) & 2) != 0 )
          v13 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickStart__);
        v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
        OverwriteAssetSoundName__PlaySystemSe(v14, 8, 0LL);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v16, v17, v18);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowStart__, 0LL);
        if ( !Instance )
          goto LABEL_15;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v19, 0LL);
      }
    }
    else if ( state == 2 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 8, v12);
        return;
      }
LABEL_15:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B11E09 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickSwap__, method, v2);
    byte_4B11E09 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v5 = Method_PartyListMenu_OnClickSwap__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickSwap__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickSwap__);
      v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 3, v7);
        return;
      }
LABEL_11:
      sub_1BCAA3C(partyListViewManager, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__OnClickTabParty(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E20 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty__, *(_QWORD *)&index, method);
    byte_4B11E20 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyListMenu_OnClickTabParty__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v7);
    PartyListViewManager__MoveCenterItem(partyListViewManager, index, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E16 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty1__, method, v2);
    byte_4B11E16 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty1__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty1__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty1__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E1F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty10__, method, v2);
    byte_4B11E1F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty10__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty10__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty10__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E17 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty2__, method, v2);
    byte_4B11E17 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty2__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty2__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty2__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E18 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty3__, method, v2);
    byte_4B11E18 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty3__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty3__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty3__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty4__, method, v2);
    byte_4B11E19 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty4__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty4__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty4__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty5__, method, v2);
    byte_4B11E1A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty5__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty5__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty5__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E1B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty6__, method, v2);
    byte_4B11E1B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty6__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty6__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty6__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E1C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty7__, method, v2);
    byte_4B11E1C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty7__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty7__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty7__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E1D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty8__, method, v2);
    byte_4B11E1D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty8__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty8__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty8__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4B11E1E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyListMenu_OnClickTabParty9__, method, v2);
    byte_4B11E1E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_PartyListMenu_OnClickTabParty9__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty9__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnClickTabParty9__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 7, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1BCAA3C(0LL, v6);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4B11E21 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B11E21 = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0LL);
    if ( !Instance )
      sub_1BCAA3C(v13, v14);
    CommonUI__CloseTutorialNotificationDialogArrow_30791892((CommonUI_o *)Instance, v12, 0LL);
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
  __int64 v10; // x2
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x23
  unsigned int v12; // w22
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  PartyListViewManager_o *partyListViewManager; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  PartyListViewManager_CallbackFunc_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1

  if ( (byte_4B11E15 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&Method_PartyListMenu_OnSelectItem__, v9, v10);
    byte_4B11E15 = 1;
  }
  if ( this->fields.state == 2 && this->fields.isSelectItemEnable )
  {
    if ( (unsigned int)(kind - 1) >= 4 )
    {
      v13 = Method_PartyListMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnSelectItem__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1BCA7F8(Method_PartyListMenu_OnSelectItem__);
      v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 2, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      v19 = (PartyListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                     PartyListViewManager_CallbackFunc_TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18);
      PartyListViewManager_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0LL);
      if ( !partyListViewManager )
        sub_1BCAA3C(v20, v21);
      PartyListViewManager__SetMode(partyListViewManager, 2, v19, 0LL);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v12 = dword_BD35C0[kind - 1];
        this->fields.callbackFunc = 0LL;
        sub_1BCA784(&this->fields.callbackFunc, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          v12,
          (unsigned int)n,
          (unsigned int)m,
          *(_QWORD *)&callbackFunc->fields.extra_arg);
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
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  const MethodInfo *v53; // x1
  struct System_Action_o **v54; // x20
  struct System_Action_o *v55; // x1
  const MethodInfo *v56; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  struct System_Action_o **p_openCallbackFunc; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v63; // x1
  _BOOL4 v64; // w8
  struct System_Action_o **v65; // x20
  struct System_Action_o *v66; // x1
  const MethodInfo *v67; // x1
  _BOOL4 v68; // w22
  struct System_Int32_array *eventIdList; // x8
  __int64 v70; // x9
  int32_t v71; // w24
  PartyListMenu_o *v72; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x4
  PartyListMenu_c *v75; // x8
  UnityEngine_GameObject_o *v76; // x25
  UnityEngine_GameObject_o *v77; // x24
  const MethodInfo *v78; // x1
  PartyListMenu_o *transform; // x0
  const MethodInfo *v80; // x1
  UnityEngine_Transform_o *v81; // x24
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_1_FS; // kr00_8
  UnityEngine_GameObject_o *v85; // x24
  const MethodInfo *v86; // x1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_2_FS; // kr08_8
  int v88; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v91; // x1
  char v92; // w24
  UISprite_o *v93; // x24
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  System_String_o *v96; // x25
  const MethodInfo *v97; // x1
  System_String_o *v98; // x1
  const MethodInfo *v99; // x1
  __int64 v100; // x1
  struct UILabel_o *assistCanNotLabel; // x24
  char v102; // w24
  __int64 v103; // x2
  __int64 v104; // x3
  int32_t v105; // w24
  System_Action_o *v106; // x25
  __int64 v107; // x1
  const MethodInfo *v108; // x1
  System_String_o *v109; // x1
  const MethodInfo *v110; // x1
  __int64 v111; // x1
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v113; // w24
  struct QuestRestrictionInfo_o *v114; // x8
  int32_t questPhase; // w23
  int32_t v116; // w24
  struct QuestRestrictionInfo_o *v117; // x8
  int32_t v118; // w23
  int32_t v119; // w24
  struct QuestRestrictionInfo_o *v120; // x8
  char v121; // w23
  int32_t v122; // w24
  int32_t v123; // w25
  __int64 v124; // x9
  int32_t v125; // w20
  PartyListMenu_o *v126; // x0
  __int64 v127; // x1
  const MethodInfo *v128; // x4
  PartyListMenu_c *v129; // x8
  UnityEngine_GameObject_o *v130; // x21
  __int64 v131; // x1
  BalanceConfig_c *v132; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  __int64 v135; // x1
  __int64 v136; // x2
  __int64 v137; // x3
  System_Action_o *v138; // x20
  int32_t eventId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v141; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v142; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v143; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v144; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B11DFE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&menuKind, *(_QWORD *)&tutorialMode);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v21, v22);
    sub_1BCA7E0(&BalanceConfig_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v25, v26);
    sub_1BCA7E0(&CondType_TypeInfo, v27, v28);
    sub_1BCA7E0(&int_TypeInfo, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_PartyListMenu_EndOpen__, v33, v34);
    sub_1BCA7E0(&Method_PartyListMenu__Open_b__104_0__, v35, v36);
    sub_1BCA7E0(&PartyListMenu_TypeInfo, v37, v38);
    sub_1BCA7E0(&QuestHintDialogOpenManager_TypeInfo, v39, v40);
    sub_1BCA7E0(&QuestInformationComponent_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_5626/*"EVENT_ASSIST_SKILL_DO_NOT"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_5657/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_19453/*"event_skill_btn_{0}"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_17850/*"buttontxt_formation_20"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v51, v52);
    byte_4B11DFE = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_1BCA784(&this->fields.setupInfo, setupInfo);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v61);
      PartyListMenu__SetButtonState(this, v63);
      gameObject = this->fields.questStartBase;
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind != 8, 0LL);
      gameObject = this->fields.partySelectBase;
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, this->fields.menuKind == 8, 0LL);
      if ( setupInfo )
      {
        gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v60);
          gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1097LL) )
        {
          v64 = 1;
        }
        else
        {
          eventIdList = setupInfo->fields.eventIdList;
          if ( !eventIdList )
            goto LABEL_164;
          v64 = eventIdList->max_length != 0;
        }
        v68 = v64;
      }
      else
      {
        v68 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, v68, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_164;
      PartyListViewManager__CreateList(
        (PartyListViewManager_o *)gameObject,
        this->fields.menuKind,
        baseDeckItemList,
        partyNum,
        setupInfo,
        questRestrictionInfo,
        friendBonusVal,
        0LL);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, v60);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v70 = 48LL;
      if ( v68 )
        v70 = 44LL;
      if ( !this->fields.autoSellButton )
        goto LABEL_164;
      v71 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + v70);
      v72 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.autoSellButton,
                                 0LL);
      v75 = PartyListMenu_TypeInfo;
      v76 = (UnityEngine_GameObject_o *)v72;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, v73);
        v75 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v72, v76, v75->static_fields->LAYOUT_FS_OFFSET, v71, 0, v74);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, !IsHintDialog || !v68, 0LL);
      if ( this->fields.menuKind == 8 )
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_164;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_164;
        v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v78);
        if ( !v77 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(v77, (unsigned __int8)gameObject & 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_164;
        transform = (PartyListMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        v81 = (UnityEngine_Transform_o *)transform;
        if ( v68 )
        {
          HELP_PANEL_OFFSET_1_FS = PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(transform, v80);
          y = HELP_PANEL_OFFSET_1_FS.fields.y;
          x = HELP_PANEL_OFFSET_1_FS.fields.x;
        }
        else
        {
          HELP_PANEL_OFFSET_2_FS = PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(transform, v80);
          y = HELP_PANEL_OFFSET_2_FS.fields.y;
          x = HELP_PANEL_OFFSET_2_FS.fields.x;
        }
        if ( !v81 )
          goto LABEL_164;
        v88 = 0;
        UnityEngine_Transform__set_localPosition(v81, *(UnityEngine_Vector3_o *)&x, 0LL);
      }
      else
      {
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_164;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpIconButton;
        if ( !gameObject )
          goto LABEL_164;
        v85 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v86);
        if ( !v85 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(v85, (unsigned __int8)gameObject & 1, 0LL);
      }
      if ( this->fields.menuKind == 8 || !*p_questRestrictionInfo )
      {
        IsDisplayQuestInformation = 0;
      }
      else
      {
        questId = (*p_questRestrictionInfo)->fields.questId;
        if ( !QuestInformationComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestInformationComponent_TypeInfo, v60);
        IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyQuestInfoIconButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, IsDisplayQuestInformation, 0LL);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v91);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_164;
      v92 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.assistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( (v92 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v93 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
        v96 = System_String__Format((System_String_o *)StringLiteral_19453/*"event_skill_btn_{0}"*/, v94, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v95);
        AtlasManager__SetEventUI(v93, v96, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v97);
        if ( !this->fields.assistConfirmButton )
          goto LABEL_164;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v141.fields.r = 1.0;
          v141.fields.g = 1.0;
          v141.fields.b = 1.0;
          v141.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v141, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          v98 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v142.fields.r = 0.5;
          v142.fields.g = 0.5;
          v142.fields.b = 0.5;
          v142.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v142, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          assistCanNotLabel = this->fields.assistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v100);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5626/*"EVENT_ASSIST_SKILL_DO_NOT"*/, 0LL);
          if ( !assistCanNotLabel )
            goto LABEL_164;
          v98 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v98, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v99);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_164;
      v102 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( (v102 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v105 = (*p_questRestrictionInfo)->fields.eventId;
        v106 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v60, v103, v104);
        System_Action___ctor(v106, (Il2CppObject *)this, Method_PartyListMenu__Open_b__104_0__, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v107);
        AtlasManager__LoadEventUI_38574292(v105, v106, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v108);
        if ( !this->fields.commandAssistConfirmButton )
          goto LABEL_164;
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 1, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v143.fields.r = 1.0;
          v143.fields.g = 1.0;
          v143.fields.b = 1.0;
          v143.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v143, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          v109 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v144.fields.r = 0.5;
          v144.fields.g = 0.5;
          v144.fields.b = 0.5;
          v144.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v144, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          commandAssistCanNotLabel = this->fields.commandAssistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v111);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5657/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, 0LL);
          if ( !commandAssistCanNotLabel )
            goto LABEL_164;
          v109 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v109, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v110);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_164;
      v113 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.centerEffectLabelSp,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, v113 & 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( IsHintDialog )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v114 = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v116 = v114->fields.questId;
        questPhase = v114->fields.questPhase;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v60);
        gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                   v116,
                                                   questPhase,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v117 = *p_questRestrictionInfo;
          if ( !*p_questRestrictionInfo )
            goto LABEL_164;
          v119 = v117->fields.questId;
          v118 = v117->fields.questPhase;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v60);
          if ( !QuestHintDialogOpenManager__IsQuestHintOpen(v119, v118, 0LL) )
          {
            gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v60);
            v120 = this->fields.questRestrictionInfo;
            if ( !v120 )
              goto LABEL_164;
            v121 = (char)gameObject;
            v123 = v120->fields.questId;
            v122 = v120->fields.questPhase;
            if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo, v60);
            QuestHintDialogOpenManager__SetTemporarilyInfo(v123, v122, 0LL);
            if ( (v121 & 1) == 0 )
            {
              if ( !*p_questRestrictionInfo )
                goto LABEL_164;
              QuestHintDialogOpenManager__SetQuestInfo(
                (*p_questRestrictionInfo)->fields.questId,
                (*p_questRestrictionInfo)->fields.questPhase,
                0LL);
              QuestHintDialogOpenManager__WriteData(0LL);
            }
            if ( !isRetry )
            {
              this->fields.isHintDialogOpenFlag = 1;
              if ( isOpenCallbackAfterCloseHintDialog )
              {
                v60 = (MethodInfo *)*p_openCallbackFunc;
                if ( *p_openCallbackFunc )
                {
                  this->fields.hintDialogCloseCallbackFunc = (struct System_Action_o *)v60;
                  sub_1BCA784(&this->fields.hintDialogCloseCallbackFunc, v60);
                  this->fields.openCallbackFunc = 0LL;
                  sub_1BCA784(&this->fields.openCallbackFunc, 0LL);
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
      PartyListMenu__SetFriendshipUpItem(this, v60);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, v60);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v124 = 56LL;
      if ( v68 )
        v124 = 52LL;
      if ( !this->fields.hintDialogButton )
        goto LABEL_164;
      v125 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + v124);
      v126 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                  0LL);
      v129 = PartyListMenu_TypeInfo;
      v130 = (UnityEngine_GameObject_o *)v126;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, v127);
        v129 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v126, v130, v129->static_fields->LAYOUT_FS_OFFSET, v125, 0, v128);
      v132 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v131);
        v132 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v132->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v131);
      if ( CondType__IsQuestClear_38310172(ClassBoardReleaseQuestId, -1, 0, 0LL) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v60);
        AtlasManager__SetPartyOrganizationImage(
          classInfoSpriteOrganization,
          (System_String_o *)StringLiteral_17850/*"buttontxt_formation_20"*/,
          0LL);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17850/*"buttontxt_formation_20"*/,
          0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_164:
        sub_1BCAA3C(gameObject, v60);
      PartyListViewManager__SetMode_32500648((PartyListViewManager_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      v138 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v135, v136, v137);
      System_Action___ctor(v138, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v138, 0LL);
      return;
    case 2:
    case 3:
    case 7:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v53);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_1BCA784(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      v54 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v55 = *v54;
        if ( *v54 )
        {
          this->fields.hintDialogCloseCallbackFunc = v55;
          sub_1BCA784(&this->fields.hintDialogCloseCallbackFunc, v55);
          this->fields.openCallbackFunc = 0LL;
          sub_1BCA784(&this->fields.openCallbackFunc, 0LL);
        }
      }
      PartyListMenu__EndOpen(this, (const MethodInfo *)v55);
      if ( !this->fields.tutorialMode && isOpenHelp )
        PartyListMenu__OpenHelp(this, v56);
      return;
    case 5:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v53);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_1BCA784(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1BCA784(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      v65 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1BCA784(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v66 = *v65;
        if ( *v65 )
        {
          this->fields.hintDialogCloseCallbackFunc = v66;
          sub_1BCA784(&this->fields.hintDialogCloseCallbackFunc, v66);
          this->fields.openCallbackFunc = 0LL;
          sub_1BCA784(&this->fields.openCallbackFunc, 0LL);
        }
      }
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
        goto LABEL_164;
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
        goto LABEL_164;
      PartyListViewManager__SetMode_32500648((PartyListViewManager_o *)gameObject, 1, 0LL);
      PartyListMenu__EndOpen(this, v67);
      return;
    default:
      return;
  }
}


void __fastcall PartyListMenu__OpenAutoOrganizationConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0
  unsigned int CenterIndex; // w0
  const MethodInfo *v5; // x3

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_7;
  CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
  method = (const MethodInfo *)CenterIndex;
  if ( (CenterIndex & 0x80000000) != 0 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( partyListViewManager )
    {
      ListViewManager__ScreenUpdate(partyListViewManager, 0LL);
      partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
      if ( partyListViewManager )
      {
        LODWORD(method) = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
        goto LABEL_6;
      }
    }
LABEL_7:
    sub_1BCAA3C(partyListViewManager, method);
  }
LABEL_6:
  PartyListMenu__OpenAutoOrganizationConfirmDialog_32441060(this, (int32_t)method, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__OpenAutoOrganizationConfirmDialog_32441060(
        PartyListMenu_o *this,
        int32_t centerIndex,
        bool isAutoOpen,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  PartyListViewManager_o *partyListViewManager; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t eventId; // w22
  struct QuestRestrictionInfo_o *v25; // x8
  struct PartyOrganizationAutoOrganizationConfirmDialog_o **p_autoOrganizationConfirmDialogBuffExists; // x8
  char v27; // w23
  bool v28; // w24
  struct PartyOrganizationAutoOrganizationConfirmDialog_o *v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  Il2CppObject *autoOrganizationConfirmDialogPrefabForAutoOpen; // x21
  __int64 v33; // x1
  UnityEngine_Transform_o *parent; // x26
  Il2CppObject *v35; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_o *v36; // x21
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v37; // x25

  if ( (byte_4B11E13 & 1) == 0 )
  {
    sub_1BCA7E0(
      &PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
      *(_QWORD *)&centerIndex,
      isAutoOpen);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_PartyListMenu___c__DisplayClass137_0__OpenAutoOrganizationConfirmDialog_b__0__, v15, v16);
    sub_1BCA7E0(&PartyListMenu___c__DisplayClass137_0_TypeInfo, v17, v18);
    byte_4B11E13 = 1;
  }
  v19 = sub_1BCAA2C(PartyListMenu___c__DisplayClass137_0_TypeInfo, *(_QWORD *)&centerIndex, isAutoOpen, method);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_22;
  *(_QWORD *)(v19 + 32) = this;
  sub_1BCA784(v19 + 32, this);
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_22;
  PartyListViewManager__ForceJumpItem(partyListViewManager, centerIndex, 0LL);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    eventId = questRestrictionInfo->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v22);
    partyListViewManager = (PartyListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    v25 = this->fields.questRestrictionInfo;
    if ( !v25 || !partyListViewManager )
      goto LABEL_22;
    if ( QuestAutoOrganizationAdjustMaster__IsExistEntity(
           (QuestAutoOrganizationAdjustMaster_o *)partyListViewManager,
           v25->fields.questId,
           v25->fields.questPhase,
           0LL) )
    {
      p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialogBuffExists;
      v27 = 1;
      v28 = 1;
      goto LABEL_14;
    }
  }
  else
  {
    eventId = 0;
  }
  v28 = 0;
  v27 = questRestrictionInfo != 0LL;
  p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialog;
LABEL_14:
  v29 = *p_autoOrganizationConfirmDialogBuffExists;
  *(_QWORD *)(v19 + 16) = *p_autoOrganizationConfirmDialogBuffExists;
  sub_1BCA784(v19 + 16, v29);
  *(_BYTE *)(v19 + 24) = 0;
  if ( !isAutoOpen )
    goto LABEL_20;
  partyListViewManager = (PartyListViewManager_o *)this->fields.autoOrganizationConfirmDialog;
  if ( !partyListViewManager
    || (autoOrganizationConfirmDialogPrefabForAutoOpen = (Il2CppObject *)this->fields.autoOrganizationConfirmDialogPrefabForAutoOpen,
        (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_transform(
                                                            (UnityEngine_Component_o *)partyListViewManager,
                                                            0LL)) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(partyListViewManager, v21);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)partyListViewManager, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
  v35 = UnityEngine_Object__Instantiate_object__49903816(
          autoOrganizationConfirmDialogPrefabForAutoOpen,
          parent,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
  *(_QWORD *)(v19 + 16) = v35;
  sub_1BCA784(v19 + 16, v35);
  *(_BYTE *)(v19 + 24) = 1;
LABEL_20:
  v36 = *(PartyOrganizationAutoOrganizationConfirmDialog_o **)(v19 + 16);
  v37 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_1BCAA2C(
                                                                            PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo,
                                                                            v21,
                                                                            v30,
                                                                            v31);
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
    v37,
    (Il2CppObject *)v19,
    Method_PartyListMenu___c__DisplayClass137_0__OpenAutoOrganizationConfirmDialog_b__0__,
    0LL);
  if ( !v36 )
    goto LABEL_22;
  PartyOrganizationAutoOrganizationConfirmDialog__Open(v36, eventId, v27, v28, isAutoOpen, v37, 0LL);
}


void __fastcall PartyListMenu__OpenHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  __int64 v16; // x2
  __int64 v17; // x3
  struct QuestRestrictionInfo_o *v18; // x8
  int32_t eventId; // w20
  System_Action_o *v20; // x21
  struct QuestRestrictionInfo_o *v21; // x8
  int32_t menuKind; // w8
  Il2CppObject *v23; // x19
  int32_t v24; // w2
  CommonUI_o *v25; // x0
  System_Action_o *v26; // x3
  const MethodInfo *v27; // x1
  Il2CppObject *Instance; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  int v31; // w8
  const MethodInfo *v32; // x21
  System_Action_o *v33; // x22

  if ( (byte_4B11E23 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TutorialFlag_ImageId___TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_PartyListMenu_CheckFriendshipUpItemTutorial__, v6, v7);
    sub_1BCA7E0(&Method_PartyListMenu_EndHelp__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v12, v13);
    byte_4B11E23 = 1;
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
      v18 = this->fields.questRestrictionInfo;
      if ( v18 )
      {
        eventId = v18->fields.eventId;
        v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v16, v17);
        System_Action___ctor(v20, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
        v21 = this->fields.questRestrictionInfo;
        if ( v21 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v20, v21->fields.questId, v21->fields.questPhase, 0, 0, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1BCAA3C(IsTutorialDataExists, method);
    }
  }
  menuKind = this->fields.menuKind;
  if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
  {
    if ( menuKind != 2 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
      if ( TutorialFlag__Get_38402052(202, 0LL) )
      {
        PartyListMenu__CheckFriendshipUpItemTutorial(this, v27);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 2LL);
      if ( !IsTutorialDataExists )
        goto LABEL_29;
      v31 = *(_DWORD *)(IsTutorialDataExists + 24);
      v32 = (const MethodInfo *)IsTutorialDataExists;
      if ( v31 )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 37;
        if ( v31 != 1 )
        {
          *(_DWORD *)(IsTutorialDataExists + 36) = 38;
          v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v29, v30);
          System_Action___ctor(v33, (Il2CppObject *)this, Method_PartyListMenu_CheckFriendshipUpItemTutorial__, 0LL);
          if ( !Instance )
            goto LABEL_29;
          v24 = 202;
          v25 = (CommonUI_o *)Instance;
          method = v32;
          v26 = v33;
          goto LABEL_28;
        }
      }
LABEL_30:
      sub_1BCAA44(IsTutorialDataExists, method);
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
    if ( !TutorialFlag__Get_38402052(205, 0LL) )
    {
      v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 1LL);
      if ( !IsTutorialDataExists )
        goto LABEL_29;
      method = (const MethodInfo *)IsTutorialDataExists;
      if ( *(_DWORD *)(IsTutorialDataExists + 24) )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 644;
        if ( !v23 )
          goto LABEL_29;
        v24 = 205;
        v25 = (CommonUI_o *)v23;
        v26 = 0LL;
LABEL_28:
        CommonUI__OpenTutorialImageDialog(v25, (TutorialFlag_ImageId_array *)method, v24, v26, 0LL, 0LL, 0LL);
        return;
      }
      goto LABEL_30;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x21
  Il2CppObject *v15; // x20
  PartyListMenu_o *transform; // x24
  const MethodInfo *v17; // x1
  float v18; // s8
  float y; // s9
  int v20; // s2
  float v21; // s0
  float v22; // s1
  __int64 v23; // x1
  float v24; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11DFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, buttonObj, *(_QWORD *)&posX);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v10, v11);
    this = (PartyListMenu_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B11DFF = 1;
  }
  if ( !buttonObj )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v15 = UnityEngine_GameObject__GetComponent_object_(
          buttonObj,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  v18 = PartyListMenu__FSOffsetX_32424796(transform, offset, v17);
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_19;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  y = localPosition.fields.y;
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)(&v20 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v21 = (float)posX - v18;
  v22 = y;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)transform,
    *(UnityEngine_Vector3_o *)(&v20 - 2),
    0LL);
  if ( sizeX )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      UIWidget__set_width((UIWidget_o *)Component_object, sizeX, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, buttonObj);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v15 )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v15, 0LL);
        v24 = size.fields.y;
        v27 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v15, 0LL);
        v27.fields.x = (float)sizeX;
        v27.fields.y = v24;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v15, v27, 0LL);
        return;
      }
LABEL_19:
      sub_1BCAA3C(this, buttonObj);
    }
  }
}


void __fastcall PartyListMenu__SetButtonState(PartyListMenu_o *this, const MethodInfo *method)
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
  UICommonButton_o *masterEquipButton; // x20
  const MethodInfo *v12; // x1

  v3 = this;
  if ( (byte_4B11E00 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1BCA7E0(
                                &Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__,
                                method,
                                v2);
    byte_4B11E00 = 1;
  }
  menuKind = v3->fields.menuKind;
  switch ( menuKind )
  {
    case 1:
    case 3:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
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
        if ( LODWORD(method[1].invoker_method) == 1 && BYTE3(method[4].methodMetadataHandle) )
          v5 = 3;
      }
      else if ( !method )
      {
        goto LABEL_25;
      }
      if ( BYTE2(method[4].methodMetadataHandle) )
        v5 = 0;
LABEL_25:
      if ( menuKind == 6 )
        v8 = 3;
      else
        v8 = PartyListMenu__CheckEnableAutoOrganizationButton(this, (QuestRestrictionInfo_o *)method, v2);
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v5,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v5,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, __int64, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        3LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v8,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
LABEL_67:
      ((void (*)(void))klass->vtable[14].method)();
      return;
    case 9:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      masterEquipButton = v3->fields.masterEquipButton;
      partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyStartButton )
        goto LABEL_70;
      if ( LOBYTE(partyStartButton[6].klass) )
      {
        partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !partyStartButton
          || (method = (const MethodInfo *)(LODWORD(partyStartButton[7].klass) == 1), !masterEquipButton) )
        {
LABEL_70:
          sub_1BCAA3C(partyStartButton, method);
        }
      }
      else
      {
        method = (const MethodInfo *)(&dword_0 + 1);
        if ( !masterEquipButton )
          goto LABEL_70;
      }
      UICommonButton__SetEnable(masterEquipButton, (bool)method, 0LL);
      PartyListMenu__SetFriendshipUpItem(v3, v12);
      return;
    default:
      partyStartButton = (Il2CppObject *)v3->fields.partyStartButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      questRestrictionInfo = v3->fields.questRestrictionInfo;
      if ( questRestrictionInfo )
        v10 = questRestrictionInfo->fields.eventDeckNum <= 0 ? 0 : 3;
      else
        v10 = 0;
      partyStartButton = (Il2CppObject *)v3->fields.partyEditButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyChangeButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwapButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partySwap2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, _QWORD, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        0LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemoveButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v10,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.partyRemove2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        v10,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganizationButton;
      if ( !partyStartButton )
        goto LABEL_70;
      ((void (__fastcall *)(Il2CppObject *, _QWORD, __int64, Il2CppMethodPointer))partyStartButton->klass->vtable[14].method)(
        partyStartButton,
        0LL,
        1LL,
        partyStartButton->klass->vtable[15].methodPtr);
      partyStartButton = (Il2CppObject *)v3->fields.autoOrganization2Button;
      if ( !partyStartButton )
        goto LABEL_70;
      klass = partyStartButton->klass;
      goto LABEL_67;
  }
}


void __fastcall PartyListMenu__SetButtonStateSetFlag(PartyListMenu_o *this, bool flag, const MethodInfo *method)
{
  this->fields.buttonStateSetFlag = flag;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__SetCenterItem(
        PartyListMenu_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  ListViewManager__JumpItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, method);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0LL);
}


void __fastcall PartyListMenu__SetFriendshipUpItem(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *Instance; // x0
  const MethodInfo *v5; // x1
  _BOOL4 IsWaveBattleRestart_k__BackingField; // w20
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int InterruptionUseFriendshipUpItemId; // w20
  const MethodInfo *v9; // x3
  bool v10; // w1
  bool v11; // w2
  char v12; // w20
  char v13; // w20

  if ( (byte_4B11E35 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, method, v2);
    byte_4B11E35 = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_34;
  IsWaveBattleRestart_k__BackingField = Instance->fields._IsWaveBattleRestart_k__BackingField;
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( IsWaveBattleRestart_k__BackingField )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo )
      goto LABEL_34;
    if ( !Instance )
      goto LABEL_34;
    InterruptionUseFriendshipUpItemId = PartyOrganizationUtility__GetInterruptionUseFriendshipUpItemId(
                                          Instance,
                                          questRestrictionInfo->fields.questId,
                                          questRestrictionInfo->fields.questPhase,
                                          0LL);
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    if ( PartyOrganizationUtility__IsEnableFriendshipUpItem(Instance, InterruptionUseFriendshipUpItemId, 0LL) )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
          if ( Instance )
          {
            FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, v5);
            Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
            if ( Instance )
            {
              v10 = 1;
              v11 = 1;
LABEL_32:
              FriendshipUpItemUseItem__SetWaveBattleRestart((FriendshipUpItemUseItem_o *)Instance, v10, v11, v9);
              return;
            }
          }
        }
      }
      goto LABEL_34;
    }
    if ( InterruptionUseFriendshipUpItemId >= 1 )
    {
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Instance,
                                                   0LL);
        if ( Instance )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
          Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
          if ( Instance )
          {
            v10 = 1;
            v11 = 0;
            goto LABEL_32;
          }
        }
      }
LABEL_34:
      sub_1BCAA3C(Instance, v5);
    }
    Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !Instance )
      goto LABEL_34;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_34;
    v13 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                               0LL);
    if ( !Instance )
      goto LABEL_34;
    if ( (v13 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, v5);
        Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
        if ( Instance )
        {
          v11 = 1;
          v10 = 0;
          goto LABEL_32;
        }
      }
      goto LABEL_34;
    }
  }
  else
  {
    if ( !Instance )
      goto LABEL_34;
    Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__IsAvailableFriendshipUpItem(Instance, 0LL);
    if ( !this->fields.friendshipUpItemUseButton )
      goto LABEL_34;
    v12 = (char)Instance;
    Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)this->fields.friendshipUpItemUseButton,
                                               0LL);
    if ( !Instance )
      goto LABEL_34;
    if ( (v12 & 1) != 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
      Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemUseButton;
      if ( Instance )
      {
        FriendshipUpItemUseItem__SetInit((FriendshipUpItemUseItem_o *)Instance, v5);
        return;
      }
      goto LABEL_34;
    }
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, enabled);
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
    sub_1BCAA3C(partyListViewManager, baseDeckItemList);
  }
  PartyListViewManager__SetMode_32500648(partyListViewManager, 1, 0LL);
}


void __fastcall PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _BOOL8 v5; // x1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, v5);
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
  __int64 v8; // x2
  UnityEngine_Object_o *partyStartButtonTxtSp; // x22
  __int64 v10; // x1
  UISprite_o *v11; // x22
  void *v12; // x0
  uint32_t cctor_finished; // w8
  System_String_o **p_START_BUTTON_WAVE_BATTLE_SP; // x8
  __int64 v15; // x9

  if ( (byte_4B11E25 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isBattle, isWaveBattle);
    sub_1BCA7E0(&PartyListMenu_TypeInfo, v7, v8);
    byte_4B11E25 = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isBattle);
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0LL, 0LL) )
  {
    v11 = this->fields.partyStartButtonTxtSp;
    v12 = PartyListMenu_TypeInfo;
    cctor_finished = PartyListMenu_TypeInfo->_2.cctor_finished;
    if ( isWaveBattle )
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, v10);
      if ( !v11 )
        goto LABEL_19;
      p_START_BUTTON_WAVE_BATTLE_SP = &PartyListMenu_TypeInfo->static_fields->START_BUTTON_WAVE_BATTLE_SP;
    }
    else
    {
      if ( !cctor_finished )
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, v10);
      if ( !v11 )
        goto LABEL_19;
      v15 = 168LL;
      if ( isBattle )
        v15 = 176LL;
      p_START_BUTTON_WAVE_BATTLE_SP = (System_String_o **)((char *)PartyListMenu_TypeInfo->static_fields + v15);
    }
    UISprite__set_spriteName(v11, *p_START_BUTTON_WAVE_BATTLE_SP, 0LL);
    v12 = this->fields.partyStartButtonTxtSp;
    if ( v12 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v12 + 840LL))(v12, *(_QWORD *)(*(_QWORD *)v12 + 848LL));
      return;
    }
LABEL_19:
    sub_1BCAA3C(v12, v10);
  }
}


void __fastcall PartyListMenu__ShowHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  _DWORD *monitor; // x8
  int32_t v17; // w21
  int32_t v18; // w22
  System_String_o *message; // x20
  System_String_o *title; // x21
  int32_t leftIndent; // w22
  Il2CppObject *Instance; // x23
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ScrollMessageDialog_ClickDelegate_o *v26; // x24
  QuestPhaseEntity_o *v27; // [xsp+8h] [xbp-48h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v3 = (Il2CppObject *)this;
  if ( (byte_4B11E33 & 1) == 0 )
  {
    sub_1BCA7E0(&ScrollMessageDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestHintMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestPhaseMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_PartyListMenu__ShowHintDialogButton_b__177_0__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    this = (PartyListMenu_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B11E33 = 1;
  }
  entity = 0LL;
  v27 = 0LL;
  monitor = v3[31].monitor;
  if ( !monitor )
    goto LABEL_23;
  v18 = monitor[9];
  v17 = monitor[10];
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (PartyListMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_23;
  this = (PartyListMenu_o *)QuestHintMaster__TryGetEntity((QuestHintMaster_o *)this, &entity, v18, v17, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    title = entity->fields.title;
    message = entity->fields.message;
    leftIndent = entity->fields.leftIndent;
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (PartyListMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_23;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v27, v18, v17, 0LL) )
    {
      this = (PartyListMenu_o *)v27;
      if ( !v27 )
        goto LABEL_23;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessageTitle(v27, 0LL);
      if ( !v27 )
        goto LABEL_23;
      title = (System_String_o *)this;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessage(v27, 0LL);
      if ( !v27 )
        goto LABEL_23;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v27, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (ScrollMessageDialog_ClickDelegate_o *)sub_1BCAA2C(ScrollMessageDialog_ClickDelegate_TypeInfo, v23, v24, v25);
  ScrollMessageDialog_ClickDelegate___ctor(v26, v3, Method_PartyListMenu__ShowHintDialogButton_b__177_0__, 0LL);
  if ( !Instance )
LABEL_23:
    sub_1BCAA3C(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)Instance, title, message, leftIndent, v26, 0, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1BCAA3C(0LL, *(_QWORD *)&index);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu___OnClickAutoSell_b__131_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_1BCAA3C(0LL, res);
  DropAutoSellDlgComponent__Close_32413080(dropAutoSellDialog, 0LL, method);
}


void __fastcall PartyListMenu___Open_b__104_0(PartyListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListMenu_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w19
  __int64 v10; // x1
  Il2CppObject *Component_object; // x20

  v3 = this;
  if ( (byte_4B11E38 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v4, v5);
    this = (PartyListMenu_o *)sub_1BCA7E0(&StringLiteral_17639/*"btn_badge_organization"*/, v6, v7);
    byte_4B11E38 = 1;
  }
  questRestrictionInfo = v3->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v3->fields.commandAssistConfirmButton) == 0LL )
    sub_1BCAA3C(this, method);
  eventId = questRestrictionInfo->fields.eventId;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v10);
  AtlasManager__SetEventUI_38574572(
    eventId,
    (UISprite_o *)Component_object,
    (System_String_o *)StringLiteral_17639/*"btn_badge_organization"*/,
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

  if ( (byte_4B11DFB & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11DFB = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1BCACFC(v7);
  PartyListMenu__remove_callbackFunc(v10, v11, v12);
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListMenu_o *v3; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v5; // s8
  float v6; // s9
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B11DF9 & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListMenu_TypeInfo, method, v2);
    byte_4B11DF9 = 1;
  }
  v3 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, method);
    v3 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  autoSellButton = v3->fields.autoSellButton;
  v6 = *(float *)&autoSellButton->klass;
  v5 = *((float *)&autoSellButton->klass + 1);
  v7 = v6 - PartyListMenu__FSOffsetX(v3, method);
  v8 = v5;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PartyListMenu_o *v3; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v5; // s8
  float v6; // s9
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B11DFA & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListMenu_TypeInfo, method, v2);
    byte_4B11DFA = 1;
  }
  v3 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo, method);
    v3 = (PartyListMenu_o *)PartyListMenu_TypeInfo;
  }
  autoSellButton = v3->fields.autoSellButton;
  v6 = *((float *)&autoSellButton->monitor + 1);
  v5 = *(float *)&autoSellButton->fields.m_CachedPtr;
  v7 = v6 - PartyListMenu__FSOffsetX(v3, method);
  v8 = v5;
  result.fields.y = v8;
  result.fields.x = v7;
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
  const MethodInfo *v11; // x1

  if ( (byte_4B11DFC & 1) == 0 )
  {
    sub_1BCA7E0(&PartyListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11DFC = 1;
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
    v8 = sub_1C05CD0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1BCACFC(v7);
  PartyListMenu__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu_CallbackFunc___ctor(
        PartyListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A06E58;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A06DF8;
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
  __int64 v11; // x2
  _QWORD v13[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v14; // [xsp+10h] [xbp-60h]
  int32_t v15; // [xsp+2Ch] [xbp-44h] BYREF
  int32_t v16; // [xsp+38h] [xbp-38h] BYREF
  int32_t v17; // [xsp+3Ch] [xbp-34h] BYREF

  v16 = n;
  v17 = result;
  v15 = m;
  if ( (byte_4B11E39 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&result, *(_QWORD *)&n);
    sub_1BCA7E0(&PartyListMenu_ResultKind_TypeInfo, v10, v11);
    byte_4B11E39 = 1;
  }
  v14 = 0u;
  v13[0] = j_il2cpp_value_box_0(PartyListMenu_ResultKind_TypeInfo, &v17);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  *(_QWORD *)&v14 = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v13, callback, object);
}


void __fastcall PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PartyListMenu_CallbackFunc__Invoke(
        PartyListMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    n,
    m,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall PartyListMenu___c__DisplayClass137_0___ctor(
        PartyListMenu___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyListMenu___c__DisplayClass137_0___OpenAutoOrganizationConfirmDialog_b__0(
        PartyListMenu___c__DisplayClass137_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  PartyOrganizationAutoOrganizationConfirmDialog_o *dialog; // x0
  struct PartyListMenu_o *_4__this; // x8
  const MethodInfo *v7; // x2

  dialog = this->fields.dialog;
  if ( !dialog )
    goto LABEL_8;
  PartyOrganizationAutoOrganizationConfirmDialog__Close(dialog, this->fields.autoDestroy, 0LL);
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)_4__this->fields.partyListViewManager;
      _4__this->fields.state = 3;
      if ( dialog )
      {
        PartyListViewManager__SetMode_32500648((PartyListViewManager_o *)dialog, 1, 0LL);
        dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.__4__this;
        if ( dialog )
        {
          PartyListMenu__Callback((PartyListMenu_o *)dialog, 19, v7);
          return;
        }
      }
    }
LABEL_8:
    sub_1BCAA3C(dialog, isDecide);
  }
}
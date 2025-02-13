void __fastcall PartyListMenu___cctor(const MethodInfo *method)
{
  struct PartyListMenu_StaticFields *static_fields; // x8
  PartyListMenu_c *v2; // x8
  struct PartyListMenu_StaticFields *v3; // x9
  struct System_Int32_array *v4; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  struct System_Int32_array *v7; // x1
  struct PartyListMenu_StaticFields *v8; // x0
  struct PartyListMenu_StaticFields *v9; // x8
  il2cpp_array_size_t v10; // w8
  struct PartyListMenu_StaticFields *v11; // x0
  il2cpp_array_size_t v12; // w8
  struct PartyListMenu_StaticFields *v13; // x0
  il2cpp_array_size_t v14; // w8
  struct PartyListMenu_StaticFields *v15; // x0
  il2cpp_array_size_t v16; // w8
  struct PartyListMenu_StaticFields *v17; // x0
  il2cpp_array_size_t v18; // w8
  struct PartyListMenu_StaticFields *v19; // x0
  il2cpp_array_size_t v20; // w8
  struct PartyListMenu_StaticFields *v21; // x0
  il2cpp_array_size_t v22; // w8
  struct PartyListMenu_StaticFields *v23; // x0
  il2cpp_array_size_t v24; // w8
  struct PartyListMenu_StaticFields *v25; // x0
  il2cpp_array_size_t v26; // w8
  struct PartyListMenu_StaticFields *v27; // x0
  il2cpp_array_size_t v28; // w8
  struct PartyListMenu_StaticFields *v29; // x0
  il2cpp_array_size_t v30; // w9
  struct PartyListMenu_StaticFields *v31; // x0
  il2cpp_array_size_t v32; // w8
  struct PartyListMenu_StaticFields *v33; // x0
  __int64 v34; // x1
  struct PartyListMenu_StaticFields *v35; // x0
  __int64 v36; // x1
  struct PartyListMenu_StaticFields *v37; // x0
  __int64 v38; // x1
  struct PartyListMenu_StaticFields *v39; // x0

  if ( (byte_4BD80BC & 1) == 0 )
  {
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&PartyListMenu_TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&StringLiteral_17965/*"buttontxt_battlestart"*/);
    sub_1C21E38(&StringLiteral_17967/*"buttontxt_formation_05"*/);
    sub_1C21E38(&StringLiteral_17972/*"buttontxt_queststart"*/);
    byte_4BD80BC = 1;
  }
  static_fields = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->HELP_PANEL_OFFSET_1.fields.x = 0xC37F000043220000LL;
  static_fields->HELP_PANEL_OFFSET_1.fields.z = 0.0;
  v2 = PartyListMenu_TypeInfo;
  v3 = PartyListMenu_TypeInfo->static_fields;
  *(_QWORD *)&v3->HELP_PANEL_OFFSET_2.fields.x = 0xC37F000042800000LL;
  v3->HELP_PANEL_OFFSET_2.fields.z = 0.0;
  v2->static_fields->LAYOUT_SIZE_X_TYPE_SMALL = 34;
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  max_length = v4->max_length;
  v7 = v4;
  if ( !max_length )
    goto LABEL_43;
  v4->m_Items[1] = 86;
  if ( max_length == 1 )
    goto LABEL_43;
  v4->m_Items[2] = 76;
  v8 = PartyListMenu_TypeInfo->static_fields;
  v8->LAYOUT_SIZE_X_TYPE_MIDDLE = v7;
  sub_1C21DDC(&v8->LAYOUT_SIZE_X_TYPE_MIDDLE, v7);
  v9 = PartyListMenu_TypeInfo->static_fields;
  *(_OWORD *)&v9->LAYOUT_SIZE_X_TYPE_BIG = xmmword_BFDFB0;
  v9->LAYOUT_POS_X_HINT_NOT_EVENT = -29;
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v10 = v4->max_length;
  v7 = v4;
  if ( !v10 )
    goto LABEL_43;
  v4->m_Items[1] = 181;
  if ( v10 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = 187;
  v11 = PartyListMenu_TypeInfo->static_fields;
  v11->LAYOUT_POS_X_HELP = v7;
  sub_1C21DDC(&v11->LAYOUT_POS_X_HELP, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v12 = v4->max_length;
  v7 = v4;
  if ( !v12 )
    goto LABEL_43;
  v4->m_Items[1] = 140;
  if ( v12 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = 146;
  v13 = PartyListMenu_TypeInfo->static_fields;
  v13->LAYOUT_POS_X_QUESTINFO = v7;
  sub_1C21DDC(&v13->LAYOUT_POS_X_QUESTINFO, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v14 = v4->max_length;
  v7 = v4;
  if ( !v14 )
    goto LABEL_43;
  v4->m_Items[1] = -45;
  if ( v14 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = -94;
  v15 = PartyListMenu_TypeInfo->static_fields;
  v15->LAYOUT_POS_X_AUTOSELL_1 = v7;
  sub_1C21DDC(&v15->LAYOUT_POS_X_AUTOSELL_1, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v16 = v4->max_length;
  v7 = v4;
  if ( !v16 )
    goto LABEL_43;
  v4->m_Items[1] = 55;
  if ( v16 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = 2;
  v17 = PartyListMenu_TypeInfo->static_fields;
  v17->LAYOUT_POS_X_AUTOSELL_2 = v7;
  sub_1C21DDC(&v17->LAYOUT_POS_X_AUTOSELL_2, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v18 = v4->max_length;
  v7 = v4;
  if ( !v18 )
    goto LABEL_43;
  v4->m_Items[1] = -40;
  if ( v18 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = -85;
  v19 = PartyListMenu_TypeInfo->static_fields;
  v19->LAYOUT_POS_X_EVENT = v7;
  sub_1C21DDC(&v19->LAYOUT_POS_X_EVENT, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v20 = v4->max_length;
  v7 = v4;
  if ( !v20 )
    goto LABEL_43;
  v4->m_Items[1] = -135;
  if ( v20 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = -171;
  v21 = PartyListMenu_TypeInfo->static_fields;
  v21->LAYOUT_POS_X_INFOMATION = v7;
  sub_1C21DDC(&v21->LAYOUT_POS_X_INFOMATION, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v22 = v4->max_length;
  v7 = v4;
  if ( !v22 )
    goto LABEL_43;
  v4->m_Items[1] = -225;
  if ( v22 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = -248;
  v23 = PartyListMenu_TypeInfo->static_fields;
  v23->LAYOUT_POS_X_REMOVE = v7;
  sub_1C21DDC(&v23->LAYOUT_POS_X_REMOVE, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v24 = v4->max_length;
  v7 = v4;
  if ( !v24 )
    goto LABEL_43;
  v4->m_Items[1] = -315;
  if ( v24 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = -325;
  v25 = PartyListMenu_TypeInfo->static_fields;
  v25->LAYOUT_POS_X_SWAP = v7;
  sub_1C21DDC(&v25->LAYOUT_POS_X_SWAP, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v26 = v4->max_length;
  v7 = v4;
  if ( !v26 )
    goto LABEL_43;
  v4->m_Items[1] = 79;
  if ( v26 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = -17;
  v27 = PartyListMenu_TypeInfo->static_fields;
  v27->LAYOUT_POS_X_HINT_1 = v7;
  sub_1C21DDC(&v27->LAYOUT_POS_X_HINT_1, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v28 = v4->max_length;
  v7 = v4;
  if ( !v28 )
    goto LABEL_43;
  v4->m_Items[1] = 79;
  if ( v28 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = 79;
  v29 = PartyListMenu_TypeInfo->static_fields;
  v29->LAYOUT_POS_X_HINT_2 = v7;
  sub_1C21DDC(&v29->LAYOUT_POS_X_HINT_2, v7);
  v4 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 2LL);
  if ( !v4 )
    goto LABEL_44;
  v30 = v4->max_length;
  v7 = v4;
  if ( !v30 || (v4->m_Items[1] = -36, v30 == 1) )
LABEL_43:
    sub_1C2209C(v4, v7);
  v4->m_Items[2] = -36;
  v31 = PartyListMenu_TypeInfo->static_fields;
  v31->LAYOUT_POS_X_HELP_BUTTON = v7;
  sub_1C21DDC(&v31->LAYOUT_POS_X_HELP_BUTTON, v7);
  PartyListMenu_TypeInfo->static_fields->LAYOUT_FS_OFFSET = 68.0;
  v4 = (struct System_Int32_array *)sub_1C21EE0(float___TypeInfo, 2LL);
  if ( !v4 )
LABEL_44:
    sub_1C22094(v4, v5);
  v32 = v4->max_length;
  v7 = v4;
  if ( !v32 )
    goto LABEL_43;
  v4->m_Items[1] = 1116209152;
  if ( v32 == 1 )
    goto LABEL_43;
  v4->m_Items[2] = 1115815936;
  v33 = PartyListMenu_TypeInfo->static_fields;
  v33->LAYOUT_FS_OFFSET_OLD = (struct System_Single_array *)v7;
  sub_1C21DDC(&v33->LAYOUT_FS_OFFSET_OLD, v7);
  v34 = StringLiteral_17972/*"buttontxt_queststart"*/;
  v35 = PartyListMenu_TypeInfo->static_fields;
  v35->START_BUTTON_QUEST_SP = (struct System_String_o *)StringLiteral_17972/*"buttontxt_queststart"*/;
  sub_1C21DDC(&v35->START_BUTTON_QUEST_SP, v34);
  v36 = StringLiteral_17965/*"buttontxt_battlestart"*/;
  v37 = PartyListMenu_TypeInfo->static_fields;
  v37->START_BUTTON_BATTLE_SP = (struct System_String_o *)StringLiteral_17965/*"buttontxt_battlestart"*/;
  sub_1C21DDC(&v37->START_BUTTON_BATTLE_SP, v36);
  v38 = StringLiteral_17967/*"buttontxt_formation_05"*/;
  v39 = PartyListMenu_TypeInfo->static_fields;
  v39->START_BUTTON_WAVE_BATTLE_SP = (struct System_String_o *)StringLiteral_17967/*"buttontxt_formation_05"*/;
  sub_1C21DDC(&v39->START_BUTTON_WAVE_BATTLE_SP, v38);
}


void __fastcall PartyListMenu___ctor(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BD80BB & 1) == 0 )
  {
    sub_1C21E38(&BaseMenu_TypeInfo);
    byte_4BD80BB = 1;
  }
  this->fields.isSelectItemEnable = 1;
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
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
    sub_1C21DDC(&this->fields.callbackFunc, 0LL);
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v6);
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

  if ( (byte_4BD8086 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    byte_4BD8086 = 1;
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD80A9 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BD80A9 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38930984(102, 0LL) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !Instance )
        sub_1C22094(0LL, v4);
      PartyOrganizationUtility__OpenQuestUseItemDialogTutorial((PartyOrganizationUtility_o *)Instance, 0LL);
    }
  }
}


void __fastcall PartyListMenu__Close(PartyListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Close_32845640(this, 0LL, v2);
}


void __fastcall PartyListMenu__CloseAssistEffectConfirmDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD80AE & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD80AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseAssistEffectConfirmDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall PartyListMenu__CloseCenterEffectDetailDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BD80B4 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD80B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v3);
  CommonUI__CloseCenterEffectDetailDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall PartyListMenu__Close_32845640(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x21
  System_Action_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_Action_o *v9; // x20

  if ( (byte_4BD8088 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndCloseList__);
    sub_1C21E38(&Method_PartyListMenu_EndClose__);
    byte_4BD8088 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyListMenu_EndCloseList__, 0LL);
  if ( !partyListViewManager )
    sub_1C22094(v7, v8);
  PartyListViewManager__SetMode_32909060(partyListViewManager, 1, v6, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v9, 0LL);
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
    sub_1C22094(infoPanel, disp);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)infoPanel, disp, 0LL);
}


void __fastcall PartyListMenu__EndBlockDecideDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD808A & 1) == 0 )
  {
    sub_1C21E38(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_OnSelectItem__);
    byte_4BD808A = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  v4 = (PartyListViewManager_CallbackFunc_o *)sub_1C22084(PartyListViewManager_CallbackFunc_TypeInfo);
  PartyListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, (intptr_t)Method_PartyListMenu_OnSelectItem__, 0LL);
  if ( !partyListViewManager )
    sub_1C22094(v5, v6);
  PartyListViewManager__SetMode(partyListViewManager, 2, v4, 0LL);
}


void __fastcall PartyListMenu__EndClose(PartyListMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o *closeCallbackFunc; // x20

  PartyListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C21DDC(&this->fields.closeCallbackFunc, 0LL);
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
    sub_1C22094(tutorialMaskBase, method);
  }
  PartyListViewManager__SetMode_32908964((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
  PartyListMenu__Callback(this, 2, v4);
}


void __fastcall PartyListMenu__EndCloseTutorialArrowEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x20

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager
    || (PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyOrganizationChangeEmptyObject) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL) )
  {
    sub_1C22094(partyListViewManager, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0LL;
    sub_1C21DDC(&this->fields.callbackFunc, 0LL);
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
    || (PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL),
        (partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyStartButton) == 0LL)
    || (partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)partyListViewManager,
                                                           0LL)) == 0LL )
  {
    sub_1C22094(partyListViewManager, method);
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
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1C21DDC(&this->fields.closeCallbackFunc, 0LL);
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
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v4; // x21
  UnityEngine_GameObject_o *tutorialMaskBase; // x0
  int32_t tutorialMode; // w8
  Il2CppObject *v7; // x20
  UnityEngine_Vector2_o v8; // kr00_8
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21
  float v11; // s3
  float v12; // s1
  float v13; // s4
  float v14; // s0
  int v15; // w8
  int v16; // w9
  PartyListViewManager_o *v17; // x20
  PartyListViewManager_CallbackFunc_o *v18; // x21
  Il2CppObject *Component_object; // x20
  UnityEngine_Vector2_o AddOffset; // kr08_8
  int v21; // s5
  int v22; // s6
  PartyOrganizationChangeObject_o *tutorialPartyOrganizationChangeEmptyObject; // x20
  Il2CppObject *v24; // x20
  UnityEngine_Vector2_o v25; // kr10_8
  Il2CppObject *v26; // x20
  System_String_o *v27; // x21
  System_Action_o *v28; // x22
  struct System_Action_o *openCallbackFunc; // x20
  UnityEngine_Vector2_o v30; // 0:s0.4,4:s1.4
  UnityEngine_Rect_o v31; // 0:s2.4,4:s3.4,8:s4.4,12:s5.4

  if ( (byte_4BD8087 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_FSOffset___);
    sub_1C21E38(&FSUtility_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndOpenTutorialArrow__);
    sub_1C21E38(&Method_PartyListMenu_OnSelectItem__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_13756/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/);
    byte_4BD8087 = 1;
  }
  if ( this->fields.tutorialMode )
  {
    this->fields.state = 6;
    partyListViewManager = this->fields.partyListViewManager;
    v4 = (PartyListViewManager_CallbackFunc_o *)sub_1C22084(PartyListViewManager_CallbackFunc_TypeInfo);
    PartyListViewManager_CallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      (intptr_t)Method_PartyListMenu_OnSelectItem__,
      0LL);
    if ( !partyListViewManager )
      goto LABEL_52;
    PartyListViewManager__SetMode(partyListViewManager, 2, v4, 0LL);
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
                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                AddOffset = FSUtility__GetAddOffset((FSOffset_o *)Component_object, 0, 0LL);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( Instance )
                {
                  v12 = AddOffset.fields.y + -231.0;
                  v13 = AddOffset.fields.y + -291.0;
                  v11 = AddOffset.fields.x + 329.0;
                  v14 = AddOffset.fields.x + 422.0;
                  v15 = 1128136704;
                  v16 = 1119092736;
                  goto LABEL_29;
                }
              }
            }
          }
        }
      }
LABEL_52:
      sub_1C22094(tutorialMaskBase, method);
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
                v7 = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)tutorialMaskBase,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
                if ( !FSUtility_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
                v8 = FSUtility__GetAddOffset((FSOffset_o *)v7, 1, 0LL);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
                System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
                if ( Instance )
                {
                  v11 = v8.fields.x + -200.0;
                  v12 = v8.fields.y + -255.0;
                  v13 = v8.fields.y + -295.0;
                  v14 = v8.fields.x + -120.0;
                  v15 = 1126170624;
                  v16 = 1117782016;
LABEL_29:
                  v21 = v15;
                  v22 = v16;
                  CommonUI__OpenTutorialArrowMark(
                    (CommonUI_o *)Instance,
                    *(UnityEngine_Vector2_o *)&v14,
                    0.0,
                    *(UnityEngine_Rect_o *)&v11,
                    v10,
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
    PartyListViewManager__SetMode_32908964((PartyListViewManager_o *)tutorialMaskBase, 3, 0LL);
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
    v24 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)tutorialMaskBase,
            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_FSOffset___);
    if ( !FSUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
    v25 = FSUtility__GetAddOffset((FSOffset_o *)v24, 1, 0LL);
    v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13756/*"TUTORIAL_MESSAGE_PARTY_ORGANIZATION1_2"*/, 0LL);
    v28 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_PartyListMenu_EndOpenTutorialArrow__, 0LL);
    if ( !v26 )
      goto LABEL_52;
    v30.fields.x = v25.fields.x + -245.0;
    v30.fields.y = v25.fields.y + 70.0;
    v31.fields.m_XMin = v25.fields.x + -320.0;
    v31.fields.m_YMin = v25.fields.y + -205.0;
    v31.fields.m_Width = 150.0;
    v31.fields.m_Height = 380.0;
    CommonUI__OpenTutorialNotificationDialogArrow(
      (CommonUI_o *)v26,
      v27,
      v30,
      v31,
      0.0,
      (UnityEngine_Vector2_o)0xC220000042C80000LL,
      -1,
      v28,
      0LL);
  }
  else
  {
    if ( this->fields.callbackFunc )
    {
      this->fields.state = 2;
      v17 = this->fields.partyListViewManager;
      v18 = (PartyListViewManager_CallbackFunc_o *)sub_1C22084(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(
        v18,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0LL);
      if ( v17 )
      {
        PartyListViewManager__SetMode(v17, 2, v18, 0LL);
        goto LABEL_47;
      }
      goto LABEL_52;
    }
    tutorialMaskBase = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !tutorialMaskBase )
      goto LABEL_52;
    PartyListViewManager__SetMode_32908964((PartyListViewManager_o *)tutorialMaskBase, 1, 0LL);
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
    sub_1C21DDC(&this->fields.openCallbackFunc, 0LL);
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

  PartyListMenu__Enter_32845976(this, 0LL, v2);
}


void __fastcall PartyListMenu__Enter_32845976(
        PartyListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  System_Action_o *v6; // x20

  if ( (byte_4BD8089 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndEnter__);
    byte_4BD8089 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, callback);
  PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1C21DDC(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 5;
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_PartyListMenu_EndEnter__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v6, 0LL);
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
    sub_1C21DDC(p_hintDialogCloseCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))hintDialogCloseCallbackFunc->fields.m_target)(
      hintDialogCloseCallbackFunc->fields.original_method_info,
      *(_QWORD *)&hintDialogCloseCallbackFunc->fields.extra_arg);
  }
}


float __fastcall PartyListMenu__FSOffsetX(PartyListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BD807B & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BD807B = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(68.0, 1, 0LL);
}


float __fastcall PartyListMenu__FSOffsetX_32833876(PartyListMenu_o *this, float ver, const MethodInfo *method)
{
  if ( (byte_4BD807C & 1) == 0 )
  {
    sub_1C21E38(&FSUtility_TypeInfo);
    byte_4BD807C = 1;
  }
  if ( !FSUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
  return FSUtility__GetOffsetX(ver, 1, 0LL);
}


void __fastcall PartyListMenu__ForceSetCenterItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, index);
  PartyListViewManager__ForceJumpItem(partyListViewManager, index, 0LL);
}


PartyListViewItem_o *__fastcall PartyListMenu__GetCenterItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct PartyListViewManager_o *partyListViewManager; // x8
  PartyListViewItem_o *centerItem; // x8
  __int64 methodPtr_low; // x11

  v2 = this;
  if ( (byte_4BD8081 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C21E38(&PartyListViewItem_TypeInfo);
    byte_4BD8081 = 1;
  }
  partyListViewManager = v2->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(this, method);
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


PartyListViewItem_o *__fastcall PartyListMenu__GetItem(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, index);
  return PartyListViewManager__GetItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__Init(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD8082 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
    byte_4BD8082 = 1;
  }
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_9;
  PartyListViewManager__DestroyList(partyListViewManager, 0LL);
  partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialMaskBase;
  if ( !partyListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  partyListViewManager = (PartyListViewManager_o *)this->fields.tutorialPartyChangeButton;
  if ( !partyListViewManager )
    goto LABEL_9;
  partyListViewManager = (PartyListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)partyListViewManager,
                                                     0LL);
  if ( !partyListViewManager )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)partyListViewManager, 0, 0LL);
  this->fields.setupInfo = 0LL;
  sub_1C21DDC(&this->fields.setupInfo, 0LL);
  this->fields.questRestrictionInfo = 0LL;
  sub_1C21DDC(&this->fields.questRestrictionInfo, 0LL);
  this->fields.isDisplayHintDialog = 0;
  this->fields.isSelectItemEnable = 1;
  this->fields.state = 0;
  partyListViewManager = (PartyListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SwitchParameterDisplayManager__get_Instance__);
  if ( !partyListViewManager )
LABEL_9:
    sub_1C22094(partyListViewManager, method);
  SwitchParameterDisplayManager__Reset((SwitchParameterDisplayManager_o *)partyListViewManager, 0LL);
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


bool __fastcall PartyListMenu__IsActiveAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BD80AC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD80AC = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___),
        (questRestrictionInfo = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_12:
    sub_1C22094(Instance, v4);
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
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  struct QuestRestrictionInfo_o *v6; // x8
  struct QuestRestrictionInfo_o *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BD80B0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4BD80B0 = 1;
  }
  entity = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    v6 = this->fields.questRestrictionInfo;
    if ( !v6 || !Master_object )
      goto LABEL_16;
    if ( !DataMasterBase_object__object__int___TryGetEntity(
            Master_object,
            &entity,
            v6->fields.eventId,
            (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
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
    v7 = this->fields.questRestrictionInfo;
    if ( !v7 )
LABEL_16:
      sub_1C22094(Master_object, v5);
    LOBYTE(questRestrictionInfo) = !System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Master_object,
                                      v7->fields.questId,
                                      (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
  }
  return (unsigned __int8)questRestrictionInfo & 1;
}


bool __fastcall PartyListMenu__IsDisabledAutoOrganizationButton(PartyListMenu_o *this, const MethodInfo *method)
{
  struct UICommonButton_o *autoOrganizationButton; // x8

  autoOrganizationButton = this->fields.autoOrganizationButton;
  if ( !autoOrganizationButton )
    sub_1C22094(this, method);
  return autoOrganizationButton->fields.mState == 3;
}


bool __fastcall PartyListMenu__IsDisplayAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v6; // x8
  Il2CppObject *v9; // [xsp+8h] [xbp-28h] BYREF
  QuestPhaseEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4BD80AB & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_AssistMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestPhaseMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_AssistEntity__get_Count__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD80AB = 1;
  }
  entity = 0LL;
  v9 = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestPhaseMaster___);
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        (v6 = this->fields.questRestrictionInfo) == 0LL)
    || !Instance )
  {
LABEL_22:
    sub_1C22094(Instance, v4);
  }
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &v9,
          v6->fields.eventId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AssistMaster___);
  if ( !Instance )
    goto LABEL_22;
  Instance = (DataManager_o *)AssistMaster__GetAvailableEntityList((AssistMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
    return 0;
  Instance = (DataManager_o *)v9;
  if ( !v9 )
    goto LABEL_22;
  return EventDetailEntity__HasFlag((EventDetailEntity_o *)v9, 0x80000000000LL, 0LL);
}


bool __fastcall PartyListMenu__IsDisplayCommandAssistConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  EventCommandAssistMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  EventCommandAssistMaster_o *v6; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD80AF & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventCommandAssistMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventCommandAssistEntity__get_Count__);
    byte_4BD80AF = 1;
  }
  entity = 0LL;
  if ( this->fields.questRestrictionInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDetailMaster___);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo || !Master_object )
      goto LABEL_19;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           questRestrictionInfo->fields.eventId,
           (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (EventCommandAssistMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
      if ( !entity )
        goto LABEL_19;
      v6 = Master_object;
      Master_object = (EventCommandAssistMaster_o *)EventDetailEntity__IsEventCommandAssist(
                                                      (EventDetailEntity_o *)entity,
                                                      0LL);
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
                                                            0LL);
            if ( Master_object )
              return LODWORD(Master_object->fields._MasterName_k__BackingField) != 0;
          }
        }
LABEL_19:
        sub_1C22094(Master_object, v4);
      }
    }
  }
  return 0;
}


bool __fastcall PartyListMenu__IsDisplayLiveConfirm(PartyListMenu_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  UISprite_o *centerEffectLabelSp; // x20
  struct QuestRestrictionInfo_o *v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BD80B2 & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_20443/*"icon_center_bg"*/);
    byte_4BD80B2 = 1;
  }
  entity = 0LL;
  if ( !this->fields.questRestrictionInfo )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || !Instance )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          questRestrictionInfo->fields.questId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
    return 0;
  centerEffectLabelSp = this->fields.centerEffectLabelSp;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Instance = (DataManager_o *)AtlasManager__SetEventUI(centerEffectLabelSp, (System_String_o *)StringLiteral_20443/*"icon_center_bg"*/, 0LL);
  if ( !centerEffectLabelSp
    || (UnityEngine_Behaviour__set_enabled(
          (UnityEngine_Behaviour_o *)centerEffectLabelSp,
          (unsigned __int8)Instance & 1,
          0LL),
        (Instance = (DataManager_o *)this->fields.centerEffectLabelSp) == 0LL)
    || (Instance = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))Instance->klass[2]._1.typeMetadataHandle)(
                                      Instance,
                                      Instance->klass[2]._1.interopData),
        (v7 = this->fields.questRestrictionInfo) == 0LL)
    || (Instance = (DataManager_o *)entity) == 0LL )
  {
LABEL_17:
    sub_1C22094(Instance, v4);
  }
  return QuestEntity__HasFlag_40740584((QuestEntity_o *)entity, 0x100000000000000LL, v7->fields.questPhase, 0LL);
}


bool __fastcall PartyListMenu__IsHintDialog(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestPhaseMaster_o *Master_object; // x0
  __int64 v7; // x1
  System_String_o *HintMessage; // x0
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BD80B5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD80B5 = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !QuestHintMaster__TryGetEntity((QuestHintMaster_o *)Master_object, &entity, questId, questPhase, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (QuestPhaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !Master_object )
      goto LABEL_17;
    if ( QuestPhaseMaster__TryGetEntity(Master_object, &v11, questId, questPhase, 0LL) )
    {
      Master_object = (QuestPhaseMaster_o *)v11;
      if ( v11 )
      {
        HintMessage = QuestPhaseEntity__getHintMessage(v11, 0LL);
        return System_String__op_Inequality(HintMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      }
LABEL_17:
      sub_1C22094(Master_object, v7);
    }
    return 0;
  }
  return 1;
}


bool __fastcall PartyListMenu__IsHintDialogEveryTime(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t questPhase; // w19
  int32_t questId; // w20
  QuestHintMaster_o *Master_object; // x0
  __int64 v7; // x1
  QuestPhaseEntity_o *v10; // [xsp+8h] [xbp-38h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BD80B6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BD80B6 = 1;
  }
  entity = 0LL;
  v10 = 0LL;
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( !questRestrictionInfo )
    return 0;
  questId = questRestrictionInfo->fields.questId;
  questPhase = questRestrictionInfo->fields.questPhase;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (QuestHintMaster_o *)QuestHintMaster__TryGetEntity(Master_object, &entity, questId, questPhase, 0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return entity->fields.openType == 0;
LABEL_21:
    sub_1C22094(Master_object, v7);
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (QuestHintMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_object )
    goto LABEL_21;
  if ( !QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)Master_object, &v10, questId, questPhase, 0LL) )
    return 0;
  Master_object = (QuestHintMaster_o *)v10;
  if ( !v10 )
    goto LABEL_21;
  return QuestPhaseEntity__getHintOpenType(v10, 0LL) == 0;
}


bool __fastcall PartyListMenu__IsNeedHelp(PartyListMenu_o *this, const MethodInfo *method)
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
             0LL)
        || (v4 = this->fields.menuKind - 1, v4 > 6)
        || (v4 & 0x7F) == 1;
  return result;
}


bool __fastcall PartyListMenu__IsUseEventLimitEquipUserWill(
        PartyListMenu_o *this,
        int32_t index,
        const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, index);
  return PartyListViewManager__IsUseEventLimitEquipUserWill(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__OnClickAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  CommonUI_o *v8; // x20
  int32_t eventId; // w21
  AssistEffectConfirmDialog_ClickDelegate_o *v10; // x22

  if ( (byte_4BD80AD & 1) == 0 )
  {
    sub_1C21E38(&AssistEffectConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_CloseAssistEffectConfirmDialog__);
    sub_1C21E38(&Method_PartyListMenu_OnClickAssistConfirmButton__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD80AD = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickAssistConfirmButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickAssistConfirmButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v8 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v10 = (AssistEffectConfirmDialog_ClickDelegate_o *)sub_1C22084(AssistEffectConfirmDialog_ClickDelegate_TypeInfo),
          AssistEffectConfirmDialog_ClickDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_PartyListMenu_CloseAssistEffectConfirmDialog__,
            0LL),
          !v8) )
    {
      sub_1C22094(Instance, v6);
    }
    CommonUI__OpenAssistEffectConfirmDialog(v8, eventId, v10, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickAutoOrganization(PartyListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0
  int32_t CenterIndex; // w0
  int32_t v5; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4BD8097 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickAutoOrganization__);
    byte_4BD8097 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, method);
    CenterIndex = ListViewManager__GetCenterIndex(partyListViewManager, 0LL);
    if ( (CenterIndex & 0x80000000) == 0 )
    {
      v5 = CenterIndex;
      v6 = Method_PartyListMenu_OnClickAutoOrganization__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoOrganization__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickAutoOrganization__);
      v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
      PartyListMenu__OpenAutoOrganizationConfirmDialog_32849692(this, v5, 0, v8);
    }
  }
}


void __fastcall PartyListMenu__OnClickAutoSell(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x20
  DropAutoSellDlgComponent_CallbackFunc_o *v6; // x21
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4BD8094 & 1) == 0 )
  {
    sub_1C21E38(&DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_OnClickAutoSell__);
    sub_1C21E38(&Method_PartyListMenu__OnClickAutoSell_b__131_0__);
    byte_4BD8094 = 1;
  }
  v3 = Method_PartyListMenu_OnClickAutoSell__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickAutoSell__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickAutoSell__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  v6 = (DropAutoSellDlgComponent_CallbackFunc_o *)sub_1C22084(DropAutoSellDlgComponent_CallbackFunc_TypeInfo);
  DropAutoSellDlgComponent_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_PartyListMenu__OnClickAutoSell_b__131_0__,
    v7);
  if ( !dropAutoSellDialog )
    sub_1C22094(v8, v9);
  DropAutoSellDlgComponent__Open(dropAutoSellDialog, v6, v10);
}


void __fastcall PartyListMenu__OnClickCancel(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BD808B & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickCancel__);
    byte_4BD808B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 0, v7);
  }
}


void __fastcall PartyListMenu__OnClickCenterEffectDetailDialogButton(PartyListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4BD80B3 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_CloseCenterEffectDetailDialog__);
    sub_1C21E38(&Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD80B3 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickCenterEffectDetailDialogButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v8 = (CommonUI_o *)Instance,
          questId = questRestrictionInfo->fields.questId,
          questPhase = questRestrictionInfo->fields.questPhase,
          v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
          System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_CloseCenterEffectDetailDialog__, 0LL),
          !v8) )
    {
      sub_1C22094(Instance, v6);
    }
    CommonUI__OpenCenterEffectDetailDialog(v8, questId, questPhase, v11, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickChange(PartyListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4BD808C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndCloseTutorialArrowChange__);
    sub_1C21E38(&Method_PartyListMenu_OnClickChange__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD808C = 1;
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
        v8 = Method_PartyListMenu_OnClickChange__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
          v8 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickChange__);
        v9 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v8, v8[4]);
        OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowChange__, 0LL);
        if ( !Instance )
          goto LABEL_17;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v11, 0LL);
      }
    }
    else if ( state == 2 )
    {
      v5 = Method_PartyListMenu_OnClickChange__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickChange__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickChange__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 2, v7);
        return;
      }
LABEL_17:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickCommandAssistConfirmButton(PartyListMenu_o *this, const MethodInfo *method)
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

  if ( (byte_4BD80B1 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_CommonUI_CloseCommandAssistConfirmDialog__);
    sub_1C21E38(&Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD80B1 = 1;
  }
  if ( this->fields.questRestrictionInfo )
  {
    v3 = Method_PartyListMenu_OnClickCommandAssistConfirmButton__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickCommandAssistConfirmButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickCommandAssistConfirmButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    questRestrictionInfo = this->fields.questRestrictionInfo;
    if ( !questRestrictionInfo
      || (v8 = (CommonUI_o *)Instance,
          eventId = questRestrictionInfo->fields.eventId,
          v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__),
          v11 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
          System_Action___ctor(v11, v10, Method_CommonUI_CloseCommandAssistConfirmDialog__, 0LL),
          !v8) )
    {
      sub_1C22094(Instance, v6);
    }
    CommonUI__OpenCommandAssistConfirmDialog(v8, eventId, v11, 0LL);
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
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 1, v4);
        return;
      }
LABEL_7:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckCopy(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD8091 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickDeckCopy__);
    byte_4BD8091 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickDeckCopy__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckCopy__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickDeckCopy__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 6, v6);
        return;
      }
LABEL_11:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickDeckName(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  bool v4; // w1
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_4BD8090 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickDeckName__);
    byte_4BD8090 = 1;
  }
  if ( this->fields.state == 2 )
  {
    questRestrictionInfo = this->fields.questRestrictionInfo;
    v4 = questRestrictionInfo && questRestrictionInfo->fields.eventDeckNum > 0;
    if ( !PartyListViewItem__IsSpecificMenuKind_32903332(this->fields.menuKind, v4, 0LL) )
    {
      partyListViewManager = this->fields.partyListViewManager;
      if ( !partyListViewManager )
        goto LABEL_15;
      if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
      {
        v7 = Method_PartyListMenu_OnClickDeckName__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickDeckName__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickDeckName__);
        v8 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v7, v7[4]);
        OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0LL);
        partyListViewManager = this->fields.partyListViewManager;
        this->fields.state = 3;
        if ( partyListViewManager )
        {
          PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
          PartyListMenu__Callback(this, 5, v9);
          return;
        }
LABEL_15:
        sub_1C22094(partyListViewManager, v5);
      }
    }
  }
}


void __fastcall PartyListMenu__OnClickEdit(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD8092 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickEdit__);
    byte_4BD8092 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickEdit__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickEdit__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickEdit__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 7, v6);
        return;
      }
LABEL_11:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickFriendshipUpItemUseButton(PartyListMenu_o *this, const MethodInfo *method)
{
  FriendshipUpItemSwitchComponent_o *friendshipUpItemSwitchComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4BD80B9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__);
    byte_4BD80B9 = 1;
  }
  friendshipUpItemSwitchComponent = this->fields.friendshipUpItemSwitchComponent;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu__OnClickFriendshipUpItemUseButton_b__179_0__, 0LL);
  if ( !friendshipUpItemSwitchComponent )
    sub_1C22094(v5, v6);
  FriendshipUpItemSwitchComponent__ChangeButtonState(friendshipUpItemSwitchComponent, v4, v7);
}


void __fastcall PartyListMenu__OnClickHelp(PartyListMenu_o *this, const MethodInfo *method)
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
  int v14; // w8

  if ( (byte_4BD80A7 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&TutorialFlag_ImageId___TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndHelp__);
    sub_1C21E38(&Method_PartyListMenu_OnClickHelp__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD80A7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickHelp__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickHelp__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickHelp__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
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
        v8 = this->fields.questRestrictionInfo;
        if ( v8 )
        {
          eventId = v8->fields.eventId;
          v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
          v11 = this->fields.questRestrictionInfo;
          if ( v11 )
          {
            EventTutorialMaster__ShowTutorialWithoutCheck_40560564(
              eventId,
              45,
              v10,
              v11->fields.questId,
              v11->fields.questPhase,
              0,
              0,
              0LL);
            return;
          }
        }
LABEL_24:
        sub_1C22094(IsTutorialDataExists, v7);
      }
    }
    menuKind = this->fields.menuKind;
    if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
    {
      if ( menuKind == 2 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C21EE0(TutorialFlag_ImageId___TypeInfo, 1LL);
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        IsTutorialDataExists = sub_1C21EE0(TutorialFlag_ImageId___TypeInfo, 2LL);
        if ( !IsTutorialDataExists )
          goto LABEL_24;
        v14 = *(_DWORD *)(IsTutorialDataExists + 24);
        v7 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
        if ( v14 )
        {
          *(_DWORD *)(IsTutorialDataExists + 32) = 37;
          if ( v14 != 1 )
          {
            *(_DWORD *)(IsTutorialDataExists + 36) = 38;
            if ( !Instance )
              goto LABEL_24;
LABEL_23:
            CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v7, -1, 0LL, 0LL, 0LL, 0LL);
            return;
          }
        }
      }
      sub_1C2209C(IsTutorialDataExists, v7);
    }
  }
}


void __fastcall PartyListMenu__OnClickHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BD80B7 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickHintDialogButton__);
    byte_4BD80B7 = 1;
  }
  v3 = Method_PartyListMenu_OnClickHintDialogButton__;
  if ( (*((_BYTE *)Method_PartyListMenu_OnClickHintDialogButton__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickHintDialogButton__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  PartyListMenu__ShowHintDialogButton(this, v5);
}


void __fastcall PartyListMenu__OnClickInfomation(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD8096 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickInfomation__);
    byte_4BD8096 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickInfomation__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickInfomation__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickInfomation__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 11, v6);
        return;
      }
LABEL_11:
      sub_1C22094(partyListViewManager, method);
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
      sub_1C22094(0LL, method);
    PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 10, v4);
  }
}


void __fastcall PartyListMenu__OnClickMasterFormation(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BD808D & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickMasterFormation__);
    byte_4BD808D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickMasterFormation__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickMasterFormation__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickMasterFormation__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 9, v7);
  }
}


void __fastcall PartyListMenu__OnClickPointEvent(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD8099 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickPointEvent__);
    byte_4BD8099 = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickPointEvent__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickPointEvent__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickPointEvent__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 12, v6);
        return;
      }
LABEL_11:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickQuestInfo(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4BD8095 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickQuestInfo__);
    byte_4BD8095 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickQuestInfo__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickQuestInfo__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickQuestInfo__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    this->fields.state = 3;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
    PartyListMenu__Callback(this, 18, v7);
  }
}


void __fastcall PartyListMenu__OnClickRemove(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD808F & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickRemove__);
    byte_4BD808F = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickRemove__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickRemove__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickRemove__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 4, v6);
        return;
      }
LABEL_11:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickStart(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  int32_t state; // w8
  const MethodInfo *v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_4BD8093 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndCloseTutorialArrowStart__);
    sub_1C21E38(&Method_PartyListMenu_OnClickStart__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD8093 = 1;
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
        v6 = Method_PartyListMenu_OnClickStart__;
        if ( (*((_BYTE *)Method_PartyListMenu_OnClickStart__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickStart__);
        v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 8, 0, 0LL);
        this->fields.state = 8;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v9, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowStart__, 0LL);
        if ( !Instance )
          goto LABEL_15;
        CommonUI__CloseTutorialArrowMark((CommonUI_o *)Instance, v9, 0LL);
      }
    }
    else if ( state == 2 )
    {
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 8, v5);
        return;
      }
LABEL_15:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickSwap(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4BD808E & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickSwap__);
    byte_4BD808E = 1;
  }
  if ( this->fields.state == 2 )
  {
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      goto LABEL_11;
    if ( (ListViewManager__GetCenterIndex((ListViewManager_o *)partyListViewManager, 0LL) & 0x80000000) == 0 )
    {
      v4 = Method_PartyListMenu_OnClickSwap__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnClickSwap__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickSwap__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      this->fields.state = 3;
      if ( partyListViewManager )
      {
        PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
        PartyListMenu__Callback(this, 3, v6);
        return;
      }
LABEL_11:
      sub_1C22094(partyListViewManager, method);
    }
  }
}


void __fastcall PartyListMenu__OnClickTabParty(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD80A5 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty__);
    byte_4BD80A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_PartyListMenu_OnClickTabParty__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v7);
    PartyListViewManager__MoveCenterItem(partyListViewManager, index, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty1(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD809B & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty1__);
    byte_4BD809B = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty1__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty1__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty1__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 0, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty10(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD80A4 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty10__);
    byte_4BD80A4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty10__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty10__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty10__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 9, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty2(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD809C & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty2__);
    byte_4BD809C = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty2__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 1, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty3(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD809D & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty3__);
    byte_4BD809D = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty3__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty3__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty3__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 2, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty4(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD809E & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty4__);
    byte_4BD809E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty4__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty4__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty4__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 3, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty5(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD809F & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty5__);
    byte_4BD809F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty5__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty5__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty5__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 4, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty6(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD80A0 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty6__);
    byte_4BD80A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty6__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty6__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty6__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 5, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty7(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD80A1 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty7__);
    byte_4BD80A1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty7__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty7__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty7__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 6, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty8(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD80A2 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty8__);
    byte_4BD80A2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty8__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty8__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty8__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 7, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTabParty9(PartyListMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  PartyListViewManager_o *partyListViewManager; // x0

  if ( (byte_4BD80A3 & 1) == 0 )
  {
    sub_1C21E38(&Method_PartyListMenu_OnClickTabParty9__);
    byte_4BD80A3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_PartyListMenu_OnClickTabParty9__;
    if ( (*((_BYTE *)Method_PartyListMenu_OnClickTabParty9__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnClickTabParty9__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 7, 0, 0LL);
    partyListViewManager = this->fields.partyListViewManager;
    if ( !partyListViewManager )
      sub_1C22094(0LL, v5);
    PartyListViewManager__MoveCenterItem(partyListViewManager, 8, 1, 0LL);
  }
}


void __fastcall PartyListMenu__OnClickTutorialEmptyItem(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BD80A6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD80A6 = 1;
  }
  if ( this->fields.state == 7 )
  {
    this->fields.state = 8;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_PartyListMenu_EndCloseTutorialArrowEmptyItem__, 0LL);
    if ( !Instance )
      sub_1C22094(v5, v6);
    CommonUI__CloseTutorialNotificationDialogArrow_31153776((CommonUI_o *)Instance, v4, 0LL);
  }
}


void __fastcall PartyListMenu__OnSelectItem(
        PartyListMenu_o *this,
        int32_t kind,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  struct PartyListMenu_CallbackFunc_o *callbackFunc; // x23
  unsigned int v10; // w22
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  PartyListViewManager_o *partyListViewManager; // x20
  PartyListViewManager_CallbackFunc_o *v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1

  if ( (byte_4BD809A & 1) == 0 )
  {
    sub_1C21E38(&PartyListViewManager_CallbackFunc_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_OnSelectItem__);
    byte_4BD809A = 1;
  }
  if ( this->fields.state == 2 && this->fields.isSelectItemEnable )
  {
    if ( (unsigned int)(kind - 1) >= 4 )
    {
      v11 = Method_PartyListMenu_OnSelectItem__;
      if ( (*((_BYTE *)Method_PartyListMenu_OnSelectItem__ + 83) & 2) != 0 )
        v11 = (_QWORD *)sub_1C21E50(Method_PartyListMenu_OnSelectItem__);
      v12 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v11, v11[4]);
      OverwriteAssetSoundName__PlaySystemSe(v12, 2, 0, 0LL);
      partyListViewManager = this->fields.partyListViewManager;
      v14 = (PartyListViewManager_CallbackFunc_o *)sub_1C22084(PartyListViewManager_CallbackFunc_TypeInfo);
      PartyListViewManager_CallbackFunc___ctor(
        v14,
        (Il2CppObject *)this,
        (intptr_t)Method_PartyListMenu_OnSelectItem__,
        0LL);
      if ( !partyListViewManager )
        sub_1C22094(v15, v16);
      PartyListViewManager__SetMode(partyListViewManager, 2, v14, 0LL);
    }
    else
    {
      callbackFunc = this->fields.callbackFunc;
      this->fields.state = 3;
      if ( callbackFunc )
      {
        v10 = dword_BFEF00[kind - 1];
        this->fields.callbackFunc = 0LL;
        sub_1C21DDC(&this->fields.callbackFunc, 0LL);
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD, _QWORD))callbackFunc->fields.m_target)(
          callbackFunc->fields.original_method_info,
          v10,
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
  const MethodInfo *v21; // x1
  struct System_Action_o **v22; // x20
  struct System_Action_o *v23; // x1
  const MethodInfo *v24; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x21
  struct System_Action_o **p_openCallbackFunc; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  bool IsHintDialog; // w23
  const MethodInfo *v31; // x1
  _BOOL4 v32; // w8
  struct System_Action_o **v33; // x20
  struct System_Action_o *v34; // x1
  const MethodInfo *v35; // x1
  _BOOL4 v36; // w22
  struct System_Int32_array *eventIdList; // x8
  __int64 v38; // x9
  int32_t v39; // w24
  PartyListMenu_o *v40; // x0
  const MethodInfo *v41; // x4
  PartyListMenu_c *v42; // x8
  UnityEngine_GameObject_o *v43; // x25
  UnityEngine_GameObject_o *v44; // x24
  const MethodInfo *v45; // x1
  PartyListMenu_o *transform; // x0
  const MethodInfo *v47; // x1
  UnityEngine_Transform_o *v48; // x24
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_1_FS; // kr00_8
  UnityEngine_GameObject_o *v52; // x24
  const MethodInfo *v53; // x1
  UnityEngine_Vector2_o HELP_PANEL_OFFSET_2_FS; // kr08_8
  int v55; // s2
  int32_t questId; // w24
  bool IsDisplayQuestInformation; // w24
  const MethodInfo *v58; // x1
  char v59; // w24
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  UISprite_o *v63; // x24
  Il2CppObject *v64; // x0
  System_String_o *v65; // x25
  const MethodInfo *v66; // x1
  System_String_o *v67; // x1
  const MethodInfo *v68; // x1
  struct UILabel_o *assistCanNotLabel; // x24
  char v70; // w24
  int32_t v71; // w24
  System_Action_o *v72; // x25
  const MethodInfo *v73; // x1
  System_String_o *v74; // x1
  const MethodInfo *v75; // x1
  struct UILabel_o *commandAssistCanNotLabel; // x24
  char v77; // w24
  struct QuestRestrictionInfo_o *v78; // x8
  int32_t questPhase; // w23
  int32_t v80; // w24
  struct QuestRestrictionInfo_o *v81; // x8
  int32_t v82; // w23
  int32_t v83; // w24
  struct QuestRestrictionInfo_o *v84; // x8
  char v85; // w23
  int32_t v86; // w24
  int32_t v87; // w25
  __int64 v88; // x9
  int32_t v89; // w20
  PartyListMenu_o *v90; // x0
  const MethodInfo *v91; // x4
  PartyListMenu_c *v92; // x8
  UnityEngine_GameObject_o *v93; // x21
  BalanceConfig_c *v94; // x0
  int32_t ClassBoardReleaseQuestId; // w20
  UISprite_o *classInfoSpriteOrganization; // x20
  System_Action_o *v97; // x20
  int32_t eventId; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v101; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v102; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD8083 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_EndOpen__);
    sub_1C21E38(&Method_PartyListMenu__Open_b__104_0__);
    sub_1C21E38(&PartyListMenu_TypeInfo);
    sub_1C21E38(&QuestHintDialogOpenManager_TypeInfo);
    sub_1C21E38(&QuestInformationComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_5665/*"EVENT_ASSIST_SKILL_DO_NOT"*/);
    sub_1C21E38(&StringLiteral_5696/*"EVENT_COMMAND_ASSIST_DO_NOT"*/);
    sub_1C21E38(&StringLiteral_19584/*"event_skill_btn_{0}"*/);
    sub_1C21E38(&StringLiteral_17969/*"buttontxt_formation_20"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8083 = 1;
  }
  PartyListMenu__DispInfoPanel(this, 1, *(const MethodInfo **)&tutorialMode);
  switch ( this->fields.state )
  {
    case 0:
      this->fields.menuKind = menuKind;
      this->fields.setupInfo = setupInfo;
      sub_1C21DDC(&this->fields.setupInfo, setupInfo);
      p_questRestrictionInfo = &this->fields.questRestrictionInfo;
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C21DDC(&this->fields.callbackFunc, callback);
      p_openCallbackFunc = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C21DDC(&this->fields.openCallbackFunc, openCallback);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      IsHintDialog = PartyListMenu__IsHintDialog(this, v29);
      PartyListMenu__SetButtonState(this, v31);
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
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + 1105LL) )
        {
          v32 = 1;
        }
        else
        {
          eventIdList = setupInfo->fields.eventIdList;
          if ( !eventIdList )
            goto LABEL_164;
          v32 = eventIdList->max_length != 0;
        }
        v36 = v32;
      }
      else
      {
        v36 = 0;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyPointEventButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, v36, 0LL);
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
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v38 = 48LL;
      if ( v36 )
        v38 = 44LL;
      if ( !this->fields.autoSellButton )
        goto LABEL_164;
      v39 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + v38);
      v40 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.autoSellButton,
                                 0LL);
      v42 = PartyListMenu_TypeInfo;
      v43 = (UnityEngine_GameObject_o *)v40;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v42 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v40, v43, v42->static_fields->LAYOUT_FS_OFFSET, v39, 0, v41);
      gameObject = (UnityEngine_GameObject_o *)this->fields.autoSellButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, !IsHintDialog || !v36, 0LL);
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
        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v45);
        if ( !v44 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(v44, (unsigned __int8)gameObject & 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.partyHelpButton;
        if ( !gameObject )
          goto LABEL_164;
        transform = (PartyListMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
        v48 = (UnityEngine_Transform_o *)transform;
        if ( v36 )
        {
          HELP_PANEL_OFFSET_1_FS = PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(transform, v47);
          y = HELP_PANEL_OFFSET_1_FS.fields.y;
          x = HELP_PANEL_OFFSET_1_FS.fields.x;
        }
        else
        {
          HELP_PANEL_OFFSET_2_FS = PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(transform, v47);
          y = HELP_PANEL_OFFSET_2_FS.fields.y;
          x = HELP_PANEL_OFFSET_2_FS.fields.x;
        }
        if ( !v48 )
          goto LABEL_164;
        v55 = 0;
        UnityEngine_Transform__set_localPosition(v48, *(UnityEngine_Vector3_o *)&x, 0LL);
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
        v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsNeedHelp(this, v53);
        if ( !v52 )
          goto LABEL_164;
        UnityEngine_GameObject__SetActive(v52, (unsigned __int8)gameObject & 1, 0LL);
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
        IsDisplayQuestInformation = QuestInformationComponent__IsDisplayQuestInformation(questId, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyQuestInfoIconButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, IsDisplayQuestInformation, 0LL);
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayAssistConfirm(this, v58);
      if ( !this->fields.assistConfirmButton )
        goto LABEL_164;
      v59 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.assistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( (v59 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v63 = (UISprite_o *)gameObject;
        eventId = (*p_questRestrictionInfo)->fields.eventId;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v60, v61, v62);
        v65 = System_String__Format((System_String_o *)StringLiteral_19584/*"event_skill_btn_{0}"*/, v64, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetEventUI(v63, v65, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveAssistConfirm(this, v66);
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
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v100.fields.r = 1.0;
          v100.fields.g = 1.0;
          v100.fields.b = 1.0;
          v100.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v100, 0LL);
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
          v67 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.assistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v101.fields.r = 0.5;
          v101.fields.g = 0.5;
          v101.fields.b = 0.5;
          v101.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v101, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.assistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          assistCanNotLabel = this->fields.assistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5665/*"EVENT_ASSIST_SKILL_DO_NOT"*/, 0LL);
          if ( !assistCanNotLabel )
            goto LABEL_164;
          v67 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)assistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v67, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.assistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayCommandAssistConfirm(this, v68);
      if ( !this->fields.commandAssistConfirmButton )
        goto LABEL_164;
      v70 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.commandAssistConfirmButton,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( (v70 & 1) != 0 )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v71 = (*p_questRestrictionInfo)->fields.eventId;
        v72 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v72, (Il2CppObject *)this, Method_PartyListMenu__Open_b__104_0__, 0LL);
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__LoadEventUI_39104116(v71, v72, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsActiveCommandAssistConfirm(this, v73);
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
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v102.fields.r = 1.0;
          v102.fields.g = 1.0;
          v102.fields.b = 1.0;
          v102.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v102, 0LL);
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
          v74 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this->fields.commandAssistConfirmButton, 0, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)gameObject,
                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
          if ( !gameObject )
            goto LABEL_164;
          v103.fields.r = 0.5;
          v103.fields.g = 0.5;
          v103.fields.b = 0.5;
          v103.fields.a = 1.0;
          UIWidget__set_color((UIWidget_o *)gameObject, v103, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistCanNotLabel;
          if ( !gameObject )
            goto LABEL_164;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_164;
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          commandAssistCanNotLabel = this->fields.commandAssistCanNotLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_5696/*"EVENT_COMMAND_ASSIST_DO_NOT"*/, 0LL);
          if ( !commandAssistCanNotLabel )
            goto LABEL_164;
          v74 = (System_String_o *)gameObject;
          gameObject = (UnityEngine_GameObject_o *)commandAssistCanNotLabel;
        }
        UILabel__set_text((UILabel_o *)gameObject, v74, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.commandAssistConfirmButton;
        if ( !gameObject )
          goto LABEL_164;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsDisplayLiveConfirm(this, v75);
      if ( !this->fields.centerEffectLabelSp )
        goto LABEL_164;
      v77 = (char)gameObject;
      gameObject = UnityEngine_Component__get_gameObject(
                     (UnityEngine_Component_o *)this->fields.centerEffectLabelSp,
                     0LL);
      if ( !gameObject )
        goto LABEL_164;
      UnityEngine_GameObject__SetActive(gameObject, v77 & 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.hintDialogButton;
      if ( !gameObject )
        goto LABEL_164;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_164;
      if ( IsHintDialog )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        v78 = *p_questRestrictionInfo;
        if ( !*p_questRestrictionInfo )
          goto LABEL_164;
        v80 = v78->fields.questId;
        questPhase = v78->fields.questPhase;
        if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)QuestHintDialogOpenManager__IsSettingTemporarilyInfo(
                                                   v80,
                                                   questPhase,
                                                   0LL);
        if ( ((unsigned __int8)gameObject & 1) == 0 )
        {
          v81 = *p_questRestrictionInfo;
          if ( !*p_questRestrictionInfo )
            goto LABEL_164;
          v83 = v81->fields.questId;
          v82 = v81->fields.questPhase;
          if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
          if ( !QuestHintDialogOpenManager__IsQuestHintOpen(v83, v82, 0LL) )
          {
            gameObject = (UnityEngine_GameObject_o *)PartyListMenu__IsHintDialogEveryTime(this, v28);
            v84 = this->fields.questRestrictionInfo;
            if ( !v84 )
              goto LABEL_164;
            v85 = (char)gameObject;
            v87 = v84->fields.questId;
            v86 = v84->fields.questPhase;
            if ( !QuestHintDialogOpenManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestHintDialogOpenManager_TypeInfo);
            QuestHintDialogOpenManager__SetTemporarilyInfo(v87, v86, 0LL);
            if ( (v85 & 1) == 0 )
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
                v28 = (MethodInfo *)*p_openCallbackFunc;
                if ( *p_openCallbackFunc )
                {
                  this->fields.hintDialogCloseCallbackFunc = (struct System_Action_o *)v28;
                  sub_1C21DDC(&this->fields.hintDialogCloseCallbackFunc, v28);
                  this->fields.openCallbackFunc = 0LL;
                  sub_1C21DDC(&this->fields.openCallbackFunc, 0LL);
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
      gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)PartyListMenu_TypeInfo;
      }
      v88 = 56LL;
      if ( v36 )
        v88 = 52LL;
      if ( !this->fields.hintDialogButton )
        goto LABEL_164;
      v89 = *(_DWORD *)(*(_QWORD *)&gameObject[7].fields.m_CachedPtr + v88);
      v90 = (PartyListMenu_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)this->fields.hintDialogButton,
                                 0LL);
      v92 = PartyListMenu_TypeInfo;
      v93 = (UnityEngine_GameObject_o *)v90;
      if ( !PartyListMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(PartyListMenu_TypeInfo);
        v92 = PartyListMenu_TypeInfo;
      }
      PartyListMenu__SetButtonPosAndSize(v90, v93, v92->static_fields->LAYOUT_FS_OFFSET, v89, 0, v91);
      v94 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v94 = BalanceConfig_TypeInfo;
      }
      ClassBoardReleaseQuestId = v94->static_fields->ClassBoardReleaseQuestId;
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsQuestClear_38834244(ClassBoardReleaseQuestId, -1, 0, 0LL) )
      {
        classInfoSpriteOrganization = this->fields.classInfoSpriteOrganization;
        if ( !AtlasManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
        AtlasManager__SetPartyOrganizationImage(
          classInfoSpriteOrganization,
          (System_String_o *)StringLiteral_17969/*"buttontxt_formation_20"*/,
          0LL);
        AtlasManager__SetPartyOrganizationImage(
          this->fields.classInfoSpriteConfirm,
          (System_String_o *)StringLiteral_17969/*"buttontxt_formation_20"*/,
          0LL);
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.partyListViewManager;
      if ( !gameObject )
LABEL_164:
        sub_1C22094(gameObject, v28);
      PartyListViewManager__SetMode_32908964((PartyListViewManager_o *)gameObject, 1, 0LL);
      this->fields.state = 1;
      v97 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v97, (Il2CppObject *)this, Method_PartyListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v97, 0LL);
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
      sub_1C21DDC(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C21DDC(&this->fields.callbackFunc, callback);
      v22 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C21DDC(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v23 = *v22;
        if ( *v22 )
        {
          this->fields.hintDialogCloseCallbackFunc = v23;
          sub_1C21DDC(&this->fields.hintDialogCloseCallbackFunc, v23);
          this->fields.openCallbackFunc = 0LL;
          sub_1C21DDC(&this->fields.openCallbackFunc, 0LL);
        }
      }
      PartyListMenu__EndOpen(this, (const MethodInfo *)v23);
      if ( !this->fields.tutorialMode && isOpenHelp )
        PartyListMenu__OpenHelp(this, v24);
      return;
    case 5:
      if ( this->fields.buttonStateSetFlag )
      {
        PartyListMenu__SetButtonState(this, v21);
        this->fields.buttonStateSetFlag = 0;
      }
      this->fields.setupInfo = setupInfo;
      sub_1C21DDC(&this->fields.setupInfo, setupInfo);
      this->fields.questRestrictionInfo = questRestrictionInfo;
      sub_1C21DDC(&this->fields.questRestrictionInfo, questRestrictionInfo);
      this->fields.tutorialMode = tutorialMode;
      this->fields.callbackFunc = callback;
      sub_1C21DDC(&this->fields.callbackFunc, callback);
      v33 = &this->fields.openCallbackFunc;
      this->fields.openCallbackFunc = openCallback;
      sub_1C21DDC(&this->fields.openCallbackFunc, openCallback);
      if ( isOpenCallbackAfterCloseHintDialog && this->fields.isDisplayHintDialog )
      {
        v34 = *v33;
        if ( *v33 )
        {
          this->fields.hintDialogCloseCallbackFunc = v34;
          sub_1C21DDC(&this->fields.hintDialogCloseCallbackFunc, v34);
          this->fields.openCallbackFunc = 0LL;
          sub_1C21DDC(&this->fields.openCallbackFunc, 0LL);
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
      PartyListViewManager__SetMode_32908964((PartyListViewManager_o *)gameObject, 1, 0LL);
      PartyListMenu__EndOpen(this, v35);
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
    sub_1C22094(partyListViewManager, method);
  }
LABEL_6:
  PartyListMenu__OpenAutoOrganizationConfirmDialog_32849692(this, (int32_t)method, 1, v5);
}


void __fastcall PartyListMenu__OpenAutoOrganizationConfirmDialog_32849692(
        PartyListMenu_o *this,
        int32_t centerIndex,
        bool isAutoOpen,
        const MethodInfo *method)
{
  __int64 v7; // x20
  PartyListViewManager_o *partyListViewManager; // x0
  __int64 v9; // x1
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x23
  int32_t eventId; // w22
  struct QuestRestrictionInfo_o *v12; // x8
  struct PartyOrganizationAutoOrganizationConfirmDialog_o **p_autoOrganizationConfirmDialogBuffExists; // x8
  char v14; // w23
  bool v15; // w24
  struct PartyOrganizationAutoOrganizationConfirmDialog_o *v16; // x1
  Il2CppObject *autoOrganizationConfirmDialogPrefabForAutoOpen; // x21
  UnityEngine_Transform_o *parent; // x26
  Il2CppObject *v19; // x0
  PartyOrganizationAutoOrganizationConfirmDialog_o *v20; // x21
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *v21; // x25

  if ( (byte_4BD8098 & 1) == 0 )
  {
    sub_1C21E38(&PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu___c__DisplayClass137_0__OpenAutoOrganizationConfirmDialog_b__0__);
    sub_1C21E38(&PartyListMenu___c__DisplayClass137_0_TypeInfo);
    byte_4BD8098 = 1;
  }
  v7 = sub_1C22084(PartyListMenu___c__DisplayClass137_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_22;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC(v7 + 32, this);
  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    goto LABEL_22;
  PartyListViewManager__ForceJumpItem(partyListViewManager, centerIndex, 0LL);
  questRestrictionInfo = this->fields.questRestrictionInfo;
  if ( questRestrictionInfo )
  {
    eventId = questRestrictionInfo->fields.eventId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    partyListViewManager = (PartyListViewManager_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestAutoOrganizationAdjustMaster___);
    v12 = this->fields.questRestrictionInfo;
    if ( !v12 || !partyListViewManager )
      goto LABEL_22;
    if ( QuestAutoOrganizationAdjustMaster__IsExistEntity(
           (QuestAutoOrganizationAdjustMaster_o *)partyListViewManager,
           v12->fields.questId,
           v12->fields.questPhase,
           0LL) )
    {
      p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialogBuffExists;
      v14 = 1;
      v15 = 1;
      goto LABEL_14;
    }
  }
  else
  {
    eventId = 0;
  }
  v15 = 0;
  v14 = questRestrictionInfo != 0LL;
  p_autoOrganizationConfirmDialogBuffExists = &this->fields.autoOrganizationConfirmDialog;
LABEL_14:
  v16 = *p_autoOrganizationConfirmDialogBuffExists;
  *(_QWORD *)(v7 + 16) = *p_autoOrganizationConfirmDialogBuffExists;
  sub_1C21DDC(v7 + 16, v16);
  *(_BYTE *)(v7 + 24) = 0;
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
    sub_1C22094(partyListViewManager, v9);
  }
  parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)partyListViewManager, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v19 = UnityEngine_Object__Instantiate_object__50551272(
          autoOrganizationConfirmDialogPrefabForAutoOpen,
          parent,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_PartyOrganizationAutoOrganizationConfirmDialog___);
  *(_QWORD *)(v7 + 16) = v19;
  sub_1C21DDC(v7 + 16, v19);
  *(_BYTE *)(v7 + 24) = 1;
LABEL_20:
  v20 = *(PartyOrganizationAutoOrganizationConfirmDialog_o **)(v7 + 16);
  v21 = (PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_o *)sub_1C22084(PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate_TypeInfo);
  PartyOrganizationAutoOrganizationConfirmDialog_CloseDelegate___ctor(
    v21,
    (Il2CppObject *)v7,
    Method_PartyListMenu___c__DisplayClass137_0__OpenAutoOrganizationConfirmDialog_b__0__,
    0LL);
  if ( !v20 )
    goto LABEL_22;
  PartyOrganizationAutoOrganizationConfirmDialog__Open(v20, eventId, v14, v15, isAutoOpen, v21, 0LL);
}


void __fastcall PartyListMenu__OpenHelp(PartyListMenu_o *this, const MethodInfo *method)
{
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 IsTutorialDataExists; // x0
  TutorialFlag_ImageId_array *v5; // x1
  struct QuestRestrictionInfo_o *v6; // x8
  int32_t eventId; // w20
  System_Action_o *v8; // x21
  struct QuestRestrictionInfo_o *v9; // x8
  int32_t menuKind; // w8
  Il2CppObject *v11; // x19
  int32_t v12; // w2
  CommonUI_o *v13; // x0
  System_Action_o *v14; // x3
  const MethodInfo *v15; // x1
  Il2CppObject *Instance; // x20
  int v17; // w8
  TutorialFlag_ImageId_array *v18; // x21
  System_Action_o *v19; // x22

  if ( (byte_4BD80A8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&TutorialFlag_ImageId___TypeInfo);
    sub_1C21E38(&Method_PartyListMenu_CheckFriendshipUpItemTutorial__);
    sub_1C21E38(&Method_PartyListMenu_EndHelp__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TutorialFlag_TypeInfo);
    byte_4BD80A8 = 1;
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
      v6 = this->fields.questRestrictionInfo;
      if ( v6 )
      {
        eventId = v6->fields.eventId;
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
        System_Action___ctor(v8, (Il2CppObject *)this, Method_PartyListMenu_EndHelp__, 0LL);
        v9 = this->fields.questRestrictionInfo;
        if ( v9 )
        {
          EventTutorialMaster__CheckTutorial(eventId, 45, v8, v9->fields.questId, v9->fields.questPhase, 0, 0, 0LL);
          return;
        }
      }
LABEL_29:
      sub_1C22094(IsTutorialDataExists, v5);
    }
  }
  menuKind = this->fields.menuKind;
  if ( (unsigned int)(menuKind - 3) >= 5 && menuKind != 1 )
  {
    if ( menuKind != 2 )
    {
      if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
      if ( TutorialFlag__Get_38930984(202, 0LL) )
      {
        PartyListMenu__CheckFriendshipUpItemTutorial(this, v15);
        return;
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_1C21EE0(TutorialFlag_ImageId___TypeInfo, 2LL);
      if ( !IsTutorialDataExists )
        goto LABEL_29;
      v17 = *(_DWORD *)(IsTutorialDataExists + 24);
      v18 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( v17 )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 37;
        if ( v17 != 1 )
        {
          *(_DWORD *)(IsTutorialDataExists + 36) = 38;
          v19 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyListMenu_CheckFriendshipUpItemTutorial__, 0LL);
          if ( !Instance )
            goto LABEL_29;
          v12 = 202;
          v13 = (CommonUI_o *)Instance;
          v5 = v18;
          v14 = v19;
          goto LABEL_28;
        }
      }
LABEL_30:
      sub_1C2209C(IsTutorialDataExists, v5);
    }
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( !TutorialFlag__Get_38930984(205, 0LL) )
    {
      v11 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      IsTutorialDataExists = sub_1C21EE0(TutorialFlag_ImageId___TypeInfo, 1LL);
      if ( !IsTutorialDataExists )
        goto LABEL_29;
      v5 = (TutorialFlag_ImageId_array *)IsTutorialDataExists;
      if ( *(_DWORD *)(IsTutorialDataExists + 24) )
      {
        *(_DWORD *)(IsTutorialDataExists + 32) = 644;
        if ( !v11 )
          goto LABEL_29;
        v12 = 205;
        v13 = (CommonUI_o *)v11;
        v14 = 0LL;
LABEL_28:
        CommonUI__OpenTutorialImageDialog(v13, v5, v12, v14, 0LL, 0LL, 0LL);
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
  Il2CppObject *Component_object; // x21
  Il2CppObject *v11; // x20
  PartyListMenu_o *transform; // x24
  const MethodInfo *v13; // x1
  float v14; // s8
  float y; // s9
  int v16; // s2
  float v17; // s0
  float v18; // s1
  float v19; // s8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8084 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    this = (PartyListMenu_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8084 = 1;
  }
  if ( !buttonObj )
    goto LABEL_19;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       buttonObj,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v11 = UnityEngine_GameObject__GetComponent_object_(
          buttonObj,
          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  transform = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  v14 = PartyListMenu__FSOffsetX_32833876(transform, offset, v13);
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_19;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  y = localPosition.fields.y;
  this = (PartyListMenu_o *)UnityEngine_GameObject__get_transform(buttonObj, 0LL);
  if ( !this )
    goto LABEL_19;
  *(UnityEngine_Vector3_o *)(&v16 - 2) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  if ( !transform )
    goto LABEL_19;
  v17 = (float)posX - v14;
  v18 = y;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)transform,
    *(UnityEngine_Vector3_o *)(&v16 - 2),
    0LL);
  if ( sizeX )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_19;
      UIWidget__set_width((UIWidget_o *)Component_object, sizeX, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (PartyListMenu_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( v11 )
      {
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v11, 0LL);
        v19 = size.fields.y;
        v22 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v11, 0LL);
        v22.fields.x = (float)sizeX;
        v22.fields.y = v19;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v11, v22, 0LL);
        return;
      }
LABEL_19:
      sub_1C22094(this, buttonObj);
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
  UICommonButton_o *masterEquipButton; // x19

  v3 = this;
  if ( (byte_4BD8085 & 1) == 0 )
  {
    this = (PartyListMenu_o *)sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD8085 = 1;
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
      partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !partyStartButton )
        goto LABEL_70;
      if ( LOBYTE(partyStartButton[6].klass) )
      {
        partyStartButton = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !partyStartButton
          || (method = (const MethodInfo *)(LODWORD(partyStartButton[7].klass) == 1), !masterEquipButton) )
        {
LABEL_70:
          sub_1C22094(partyStartButton, method);
        }
      }
      else
      {
        method = (const MethodInfo *)(&dword_0 + 1);
        if ( !masterEquipButton )
          goto LABEL_70;
      }
      UICommonButton__SetEnable(masterEquipButton, (bool)method, 0LL);
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


void __fastcall PartyListMenu__SetCenterItem(
        PartyListMenu_o *this,
        int32_t index,
        bool isAnimation,
        const MethodInfo *method)
{
  ListViewManager_o *partyListViewManager; // x0

  partyListViewManager = (ListViewManager_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, index);
  ListViewManager__JumpItem(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu__SetEventLimitEquipSetting(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, method);
  PartyListViewManager__SetEventLimitEquipSetting(partyListViewManager, 0LL);
}


void __fastcall PartyListMenu__SetFriendshipUpItem(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *Instance; // x0
  const MethodInfo *v4; // x1
  char v5; // w20

  if ( (byte_4BD80BA & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4BD80BA = 1;
  }
  Instance = (PartyOrganizationUtility_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (PartyOrganizationUtility_o *)PartyOrganizationUtility__HasQuestUseItem(Instance, 0LL);
  if ( !this->fields.friendshipUpItemSwitchComponent )
    goto LABEL_10;
  v5 = (char)Instance;
  Instance = (PartyOrganizationUtility_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)this->fields.friendshipUpItemSwitchComponent,
                                             0LL);
  if ( !Instance )
    goto LABEL_10;
  if ( (v5 & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
    Instance = (PartyOrganizationUtility_o *)this->fields.friendshipUpItemSwitchComponent;
    if ( Instance )
    {
      FriendshipUpItemSwitchComponent__SetItemInfo((FriendshipUpItemSwitchComponent_o *)Instance, v4);
      return;
    }
LABEL_10:
    sub_1C22094(Instance, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
}


void __fastcall PartyListMenu__SetListViewMangaerEnabled(PartyListMenu_o *this, bool enabled, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *partyListViewManager; // x0

  partyListViewManager = (UnityEngine_Behaviour_o *)this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, enabled);
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
    sub_1C22094(partyListViewManager, baseDeckItemList);
  }
  PartyListViewManager__SetMode_32908964(partyListViewManager, 1, 0LL);
}


void __fastcall PartyListMenu__SetSelectItemEnable(PartyListMenu_o *this, bool enable, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0
  _BOOL8 v5; // x1

  partyListViewManager = this->fields.partyListViewManager;
  v5 = enable;
  this->fields.isSelectItemEnable = v5;
  if ( !partyListViewManager )
    sub_1C22094(0LL, v5);
  PartyListViewManager__SetScrollEnabled(partyListViewManager, v5, 0LL);
}


void __fastcall PartyListMenu__SetStartButton(
        PartyListMenu_o *this,
        bool isBattle,
        bool isWaveBattle,
        const MethodInfo *method)
{
  UnityEngine_Object_o *partyStartButtonTxtSp; // x22
  __int64 v8; // x1
  UISprite_o *v9; // x22
  void *v10; // x0
  uint32_t cctor_finished; // w8
  System_String_o **p_START_BUTTON_WAVE_BATTLE_SP; // x8
  __int64 v13; // x9

  if ( (byte_4BD80AA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&PartyListMenu_TypeInfo);
    byte_4BD80AA = 1;
  }
  partyStartButtonTxtSp = (UnityEngine_Object_o *)this->fields.partyStartButtonTxtSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(partyStartButtonTxtSp, 0LL, 0LL) )
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
      v13 = 168LL;
      if ( isBattle )
        v13 = 176LL;
      p_START_BUTTON_WAVE_BATTLE_SP = (System_String_o **)((char *)PartyListMenu_TypeInfo->static_fields + v13);
    }
    UISprite__set_spriteName(v9, *p_START_BUTTON_WAVE_BATTLE_SP, 0LL);
    v10 = this->fields.partyStartButtonTxtSp;
    if ( v10 )
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v10 + 840LL))(v10, *(_QWORD *)(*(_QWORD *)v10 + 848LL));
      return;
    }
LABEL_19:
    sub_1C22094(v10, v8);
  }
}


void __fastcall PartyListMenu__ShowHintDialogButton(PartyListMenu_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _DWORD *monitor; // x8
  int32_t v4; // w21
  int32_t v5; // w22
  System_String_o *message; // x20
  System_String_o *title; // x21
  int32_t leftIndent; // w22
  Il2CppObject *Instance; // x23
  ScrollMessageDialog_ClickDelegate_o *v10; // x24
  QuestPhaseEntity_o *v11; // [xsp+8h] [xbp-48h] BYREF
  QuestHintEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  v2 = (Il2CppObject *)this;
  if ( (byte_4BD80B8 & 1) == 0 )
  {
    sub_1C21E38(&ScrollMessageDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestHintMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_PartyListMenu__ShowHintDialogButton_b__177_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (PartyListMenu_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD80B8 = 1;
  }
  entity = 0LL;
  v11 = 0LL;
  monitor = v2[31].monitor;
  if ( !monitor )
    goto LABEL_23;
  v5 = monitor[9];
  v4 = monitor[10];
  message = (System_String_o *)StringLiteral_1/*""*/;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (PartyListMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestHintMaster___);
  if ( !this )
    goto LABEL_23;
  this = (PartyListMenu_o *)QuestHintMaster__TryGetEntity((QuestHintMaster_o *)this, &entity, v5, v4, 0LL);
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (PartyListMenu_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
    if ( !this )
      goto LABEL_23;
    if ( QuestPhaseMaster__TryGetEntity((QuestPhaseMaster_o *)this, &v11, v5, v4, 0LL) )
    {
      this = (PartyListMenu_o *)v11;
      if ( !v11 )
        goto LABEL_23;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessageTitle(v11, 0LL);
      if ( !v11 )
        goto LABEL_23;
      title = (System_String_o *)this;
      this = (PartyListMenu_o *)QuestPhaseEntity__getHintMessage(v11, 0LL);
      if ( !v11 )
        goto LABEL_23;
      message = (System_String_o *)this;
      leftIndent = QuestPhaseEntity__getHintLeftIndent(v11, 0LL);
    }
    else
    {
      leftIndent = -1;
      title = message;
    }
  }
  if ( System_String__IsNullOrEmpty(message, 0LL) )
    return;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (ScrollMessageDialog_ClickDelegate_o *)sub_1C22084(ScrollMessageDialog_ClickDelegate_TypeInfo);
  ScrollMessageDialog_ClickDelegate___ctor(v10, v2, Method_PartyListMenu__ShowHintDialogButton_b__177_0__, 0LL);
  if ( !Instance )
LABEL_23:
    sub_1C22094(this, method);
  CommonUI__OpenScrollMessageDialog((CommonUI_o *)Instance, title, message, leftIndent, v10, 0, 1, 0LL);
}


void __fastcall PartyListMenu__UpdateEventLimitEquip(PartyListMenu_o *this, int32_t index, const MethodInfo *method)
{
  PartyListViewManager_o *partyListViewManager; // x0

  partyListViewManager = this->fields.partyListViewManager;
  if ( !partyListViewManager )
    sub_1C22094(0LL, index);
  PartyListViewManager__UpdateEventLimitEquip(partyListViewManager, index, 0LL);
}


void __fastcall PartyListMenu___OnClickAutoSell_b__131_0(PartyListMenu_o *this, bool res, const MethodInfo *method)
{
  DropAutoSellDlgComponent_o *dropAutoSellDialog; // x0

  dropAutoSellDialog = this->fields.dropAutoSellDialog;
  if ( !dropAutoSellDialog )
    sub_1C22094(0LL, res);
  DropAutoSellDlgComponent__Close_32812664(dropAutoSellDialog, 0LL, method);
}


void __fastcall PartyListMenu___OnClickFriendshipUpItemUseButton_b__179_0(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyListMenu__Callback(this, 20, v2);
}


void __fastcall PartyListMenu___Open_b__104_0(PartyListMenu_o *this, const MethodInfo *method)
{
  PartyListMenu_o *v2; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  int32_t eventId; // w19
  Il2CppObject *Component_object; // x20

  v2 = this;
  if ( (byte_4BD80BD & 1) == 0 )
  {
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_UISprite___);
    this = (PartyListMenu_o *)sub_1C21E38(&StringLiteral_17755/*"btn_badge_organization"*/);
    byte_4BD80BD = 1;
  }
  questRestrictionInfo = v2->fields.questRestrictionInfo;
  if ( !questRestrictionInfo || (this = (PartyListMenu_o *)v2->fields.commandAssistConfirmButton) == 0LL )
    sub_1C22094(this, method);
  eventId = questRestrictionInfo->fields.eventId;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_39104396(
    eventId,
    (UISprite_o *)Component_object,
    (System_String_o *)StringLiteral_17755/*"btn_badge_organization"*/,
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

  if ( (byte_4BD807F & 1) == 0 )
  {
    sub_1C21E38(&PartyListMenu_CallbackFunc_TypeInfo);
    byte_4BD807F = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C22354(v7);
  PartyListMenu__remove_callbackFunc(v10, v11, v12);
}


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_1_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BD807D & 1) == 0 )
  {
    sub_1C21E38(&PartyListMenu_TypeInfo);
    byte_4BD807D = 1;
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


UnityEngine_Vector2_o __fastcall PartyListMenu__get_HELP_PANEL_OFFSET_2_FS(
        PartyListMenu_o *this,
        const MethodInfo *method)
{
  PartyListMenu_o *v2; // x0
  struct UICommonButton_o *autoSellButton; // x8
  float v4; // s8
  float v5; // s9
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4BD807E & 1) == 0 )
  {
    sub_1C21E38(&PartyListMenu_TypeInfo);
    byte_4BD807E = 1;
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

  if ( (byte_4BD8080 & 1) == 0 )
  {
    sub_1C21E38(&PartyListMenu_CallbackFunc_TypeInfo);
    byte_4BD8080 = 1;
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
    v8 = sub_1C5D328(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (PartyListMenu_o *)sub_1C22354(v7);
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
  sub_1C21DDC(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5D164;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5D104;
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
  if ( (byte_4BD80BE & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&PartyListMenu_ResultKind_TypeInfo);
    byte_4BD80BE = 1;
  }
  v18 = 0u;
  v17[0] = j_il2cpp_value_box_0(PartyListMenu_ResultKind_TypeInfo, &v21, *(_QWORD *)&n, *(_QWORD *)&m, callback);
  v17[1] = j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12);
  *(_QWORD *)&v18 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v13, v14, v15);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v17, callback, object);
}


void __fastcall PartyListMenu_CallbackFunc__EndInvoke(
        PartyListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
        PartyListViewManager__SetMode_32908964((PartyListViewManager_o *)dialog, 1, 0LL);
        dialog = (PartyOrganizationAutoOrganizationConfirmDialog_o *)this->fields.__4__this;
        if ( dialog )
        {
          PartyListMenu__Callback((PartyListMenu_o *)dialog, 19, v7);
          return;
        }
      }
    }
LABEL_8:
    sub_1C22094(dialog, isDecide);
  }
}
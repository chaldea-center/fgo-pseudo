void ChangeGrandSameServantListMenu___ctor(ChangeGrandSameServantListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase___ctor((CharaGraphListMenuBase_o *)this, 0);
}


void ChangeGrandSameServantListMenu__AssertionForSerializeField(
        ChangeGrandSameServantListMenu_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenuBase__AssertionForSerializeField((CharaGraphListMenuBase_o *)this, 0);
}


CharaGraphListViewPatternBase_o *ChangeGrandSameServantListMenu__CreateListViewPattern(
        ChangeGrandSameServantListMenu_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  GrandServantListSlotData_o *grandSvtData; // x23
  __int64 v8; // x21
  const MethodInfo *v9; // x2
  CharaGraphSortOwnerBase_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4D27454 & 1) == 0 )
  {
    sub_1C94098(&CharaGraphListViewPatternGrandSameServant_TypeInfo);
    byte_4D27454 = 1;
  }
  grandSvtData = this->fields.grandSvtData;
  v8 = sub_1C942E4(CharaGraphListViewPatternGrandSameServant_TypeInfo);
  CharaGraphListViewPatternGrandSameServant___ctor((CharaGraphListViewPatternGrandSameServant_o *)v8, grandSvtData, v9);
  if ( !v8 )
    goto LABEL_6;
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v8 + 16) = SortOwner_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)(v8 + 16),
    (int32_t)SortOwner_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v8 + 24) = RootInfo_k__BackingField;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 24), (int32_t)RootInfo_k__BackingField, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v8 + 32) = setupInfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v8 + 32), (int32_t)setupInfo, v26, v27, v28, v29, v30, v31);
  v10 = *(CharaGraphSortOwnerBase_o **)(v8 + 16);
  if ( !v10 )
LABEL_6:
    sub_1C942F0(v10, v11);
  CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(v10, kind, 0);
  return (CharaGraphListViewPatternBase_o *)v8;
}


void ChangeGrandSameServantListMenu__ExitMenu(
        ChangeGrandSameServantListMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Request_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v19; // q1
  const MethodInfo *v20; // x3
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  int32_t v23; // w1
  ChangeGrandSameServantListMenu_o *v24; // x0
  bool v25; // w2
  NetworkManager_ResultCallbackFunc_o *v26; // x21
  struct GrandServantListSlotData_o *v27; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-50h]

  if ( (byte_4D27452 & 1) == 0 )
  {
    sub_1C94098(&Method_ChangeGrandSameServantListMenu_ExitMenu__);
    sub_1C94098(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C94098(&Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__);
    sub_1C94098(&ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo);
    byte_4D27452 = 1;
  }
  v5 = sub_1C942E4(ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = result;
  if ( !result )
  {
    v21 = Method_ChangeGrandSameServantListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_ChangeGrandSameServantListMenu_ExitMenu__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1C940B0(Method_ChangeGrandSameServantListMenu_ExitMenu__);
    v22 = (System_Reflection_MethodBase_o *)sub_1C9407C(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 1, 0, 0);
    v23 = *(_DWORD *)(v5 + 24);
    v24 = this;
    v25 = 0;
    goto LABEL_19;
  }
  if ( result == 2 )
  {
    v23 = 2;
    v25 = 1;
    v24 = this;
LABEL_19:
    ChangeGrandSameServantListMenu__ExitMenuCallback(v24, v23, v25, v14);
    return;
  }
  if ( result != 1 )
    return;
  v15 = Method_ChangeGrandSameServantListMenu_ExitMenu__;
  if ( (*((_BYTE *)Method_ChangeGrandSameServantListMenu_ExitMenu__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1C940B0(Method_ChangeGrandSameServantListMenu_ExitMenu__);
  v16 = (System_Reflection_MethodBase_o *)sub_1C9407C(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 8, 0, 0);
  grandSvtData = this->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_26;
  UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_26;
  v19 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v19;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v28 = v29;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v28, 0) == this->fields.selectedUserServantId )
  {
    ChangeGrandSameServantListMenu__ExitMenuCallback(this, *(_DWORD *)(v5 + 24), 0, v20);
    return;
  }
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1C942E4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v26,
                     (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
  v27 = this->fields.grandSvtData;
  if ( !v27 || !Request_object )
LABEL_26:
    sub_1C942F0(Request_object, v7);
  SetupGrandServantRequest__beginRequest(
    (SetupGrandServantRequest_o *)Request_object,
    v27->fields._GrandGraphId_k__BackingField,
    this->fields.selectedUserServantId,
    0);
}


void ChangeGrandSameServantListMenu__ExitMenuCallback(
        ChangeGrandSameServantListMenu_o *this,
        int32_t result,
        bool isTransitionScene,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_T__o *exitMenuCallback; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1

  if ( (byte_4D27453 & 1) == 0 )
  {
    sub_1C94098(&Method_ActionExtensions_Call_bool___);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D27453 = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.exitMenuCallback,
    0,
    isTransitionScene,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( !isTransitionScene )
    ActionExtensions__Call_bool_(
      exitMenuCallback,
      result == 1,
      (const MethodInfo_30E5830 *)Method_ActionExtensions_Call_bool___);
  this->fields.selectedUserServantId = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  CharaGraphListMenuBase__Close((CharaGraphListMenuBase_o *)this, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  this->fields.state = 0;
  if ( !gameObject )
    goto LABEL_11;
  CharaGraphListViewManager__SaveSortInfo((CharaGraphListViewManager_o *)gameObject, 0);
  if ( isTransitionScene )
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( gameObject )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)gameObject, 34, 1, 0, 0);
      return;
    }
LABEL_11:
    sub_1C942F0(gameObject, v13);
  }
}


System_String_o *ChangeGrandSameServantListMenu__GetLocalizationKeyForModeKindMain(
        ChangeGrandSameServantListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D27450 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3327/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    byte_4D27450 = 1;
  }
  return (System_String_o *)StringLiteral_3327/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/;
}


void ChangeGrandSameServantListMenu__OnSelectServant(
        ChangeGrandSameServantListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !selectItem )
    sub_1C942F0(this, 0);
  this->fields.selectedUserServantId = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))selectItem->klass->vtable._6_unknown.methodPtr)(
                                         selectItem,
                                         selectItem->klass->vtable._6_unknown.method,
                                         method);
  ChangeGrandSameServantListMenu__ExitMenu(this, 1, v4);
}


// attributes: thunk
void ChangeGrandSameServantListMenu__OnSelectServantAtKindMain(
        ChangeGrandSameServantListMenu_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ChangeGrandSameServantListMenu__OnSelectServant(this, item, method);
}


void ChangeGrandSameServantListMenu__Open(
        ChangeGrandSameServantListMenu_o *this,
        GrandServantListSlotData_o *grandSvtSlotData,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  __int64 v17; // x1
  TitleInfoControl_o *titleInfo; // x0
  CharaGraphSortOwnerGrandSameServant_o *v19; // x20
  const MethodInfo *v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  CharaGraphListMenuBase_CallbackFunc_o *v27; // x20

  if ( (byte_4D27451 & 1) == 0 )
  {
    sub_1C94098(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_1C94098(&Method_ChangeGrandSameServantListMenu_ExitMenu__);
    sub_1C94098(&CharaGraphSortOwnerGrandSameServant_TypeInfo);
    byte_4D27451 = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.grandSvtData,
    (int32_t)grandSvtSlotData,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.exitMenuCallback = callback;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.exitMenuCallback,
    (int32_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__setTitleInfo(titleInfo, 0, 1, 0, 73, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__setBackBtnSprite_40657648(titleInfo, 1, 0, 0, 0);
  v19 = (CharaGraphSortOwnerGrandSameServant_o *)sub_1C942E4(CharaGraphSortOwnerGrandSameServant_TypeInfo);
  CharaGraphSortOwnerGrandSameServant___ctor(v19, v20);
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v19;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._SortOwner_k__BackingField,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0);
  v27 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C942E4(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
  CharaGraphListMenuBase_CallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    (intptr_t)Method_ChangeGrandSameServantListMenu_ExitMenu__,
    0);
  CharaGraphListMenuBase__Open((CharaGraphListMenuBase_o *)this, v27, 0);
  titleInfo = (TitleInfoControl_o *)this->fields.charaGraphSortButtonGroup;
  if ( !titleInfo
    || (CharaGraphSortButtonGroup__SetBonusFilterButtonState((CharaGraphSortButtonGroup_o *)titleInfo, 3, 1, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.charaGraphSortButtonGroup) == 0) )
  {
LABEL_8:
    sub_1C942F0(titleInfo, v17);
  }
  CharaGraphSortButtonGroup__SetFilterButtonState((CharaGraphSortButtonGroup_o *)titleInfo, 3, 1, 0);
}


void ChangeGrandSameServantListMenu___c__DisplayClass8_0___ctor(
        ChangeGrandSameServantListMenu___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ChangeGrandSameServantListMenu___c__DisplayClass8_0___ExitMenu_b__0(
        ChangeGrandSameServantListMenu___c__DisplayClass8_0_o *this,
        System_String_o *requestResult,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  ChangeGrandSameServantListMenu_o *_4__this; // x0

  if ( (byte_4D27455 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D27455 = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_22424/*"ng"*/, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1C942F0(0, v5);
    ChangeGrandSameServantListMenu__ExitMenuCallback(_4__this, this->fields.result, 0, v6);
  }
}
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
  CharaGraphListViewPatternGrandSameServant_o *v8; // x21
  const MethodInfo *v9; // x2
  CharaGraphSortOwnerBase_o *v10; // x0
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1

  if ( (byte_4C32748 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListViewPatternGrandSameServant_TypeInfo);
    byte_4C32748 = 1;
  }
  grandSvtData = this->fields.grandSvtData;
  v8 = (CharaGraphListViewPatternGrandSameServant_o *)sub_1C32E6C(CharaGraphListViewPatternGrandSameServant_TypeInfo);
  CharaGraphListViewPatternGrandSameServant___ctor(v8, grandSvtData, v9);
  if ( !v8 )
    goto LABEL_6;
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  v8->fields._SortOwner_k__BackingField = SortOwner_k__BackingField;
  sub_1C32BC4(&v8->fields, SortOwner_k__BackingField);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  v8->fields._RootInfo_k__BackingField = RootInfo_k__BackingField;
  sub_1C32BC4(&v8->fields._RootInfo_k__BackingField, RootInfo_k__BackingField);
  v8->fields._EventValSetupInfo_k__BackingField = setupInfo;
  sub_1C32BC4(&v8->fields._EventValSetupInfo_k__BackingField, setupInfo);
  v10 = v8->fields._SortOwner_k__BackingField;
  if ( !v10 )
LABEL_6:
    sub_1C32E7C(v10);
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
  const MethodInfo *v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v12; // q1
  const MethodInfo *v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  int32_t v16; // w1
  ChangeGrandSameServantListMenu_o *v17; // x0
  bool v18; // w2
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  struct GrandServantListSlotData_o *v20; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-50h]

  if ( (byte_4C32746 & 1) == 0 )
  {
    sub_1C32C20(&Method_ChangeGrandSameServantListMenu_ExitMenu__);
    sub_1C32C20(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__);
    sub_1C32C20(&ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo);
    byte_4C32746 = 1;
  }
  v5 = sub_1C32E6C(ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4(v5 + 16, this);
  *(_DWORD *)(v5 + 24) = result;
  if ( !result )
  {
    v14 = Method_ChangeGrandSameServantListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_ChangeGrandSameServantListMenu_ExitMenu__ + 83) & 2) != 0 )
      v14 = (_QWORD *)sub_1C32C38(Method_ChangeGrandSameServantListMenu_ExitMenu__);
    v15 = (System_Reflection_MethodBase_o *)sub_1C32C04(v14, v14[4]);
    OverwriteAssetSoundName__PlaySystemSe(v15, 1, 0, 0);
    v16 = *(_DWORD *)(v5 + 24);
    v17 = this;
    v18 = 0;
    goto LABEL_19;
  }
  if ( result == 2 )
  {
    v16 = 2;
    v18 = 1;
    v17 = this;
LABEL_19:
    ChangeGrandSameServantListMenu__ExitMenuCallback(v17, v16, v18, v7);
    return;
  }
  if ( result != 1 )
    return;
  v8 = Method_ChangeGrandSameServantListMenu_ExitMenu__;
  if ( (*((_BYTE *)Method_ChangeGrandSameServantListMenu_ExitMenu__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C32C38(Method_ChangeGrandSameServantListMenu_ExitMenu__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 8, 0, 0);
  grandSvtData = this->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_26;
  UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_26;
  v12 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v21 = v22;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v21, 0) == this->fields.selectedUserServantId )
  {
    ChangeGrandSameServantListMenu__ExitMenuCallback(this, *(_DWORD *)(v5 + 24), 0, v13);
    return;
  }
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v19,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
  v20 = this->fields.grandSvtData;
  if ( !v20 || !Request_object )
LABEL_26:
    sub_1C32E7C(Request_object);
  SetupGrandServantRequest__beginRequest(
    (SetupGrandServantRequest_o *)Request_object,
    v20->fields._GrandGraphId_k__BackingField,
    this->fields.selectedUserServantId,
    0);
}


void ChangeGrandSameServantListMenu__ExitMenuCallback(
        ChangeGrandSameServantListMenu_o *this,
        int32_t result,
        bool isTransitionScene,
        const MethodInfo *method)
{
  System_Action_T__o *exitMenuCallback; // x22
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C32747 & 1) == 0 )
  {
    sub_1C32C20(&Method_ActionExtensions_Call_bool___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C32747 = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0;
  sub_1C32BC4(&this->fields.exitMenuCallback, 0);
  if ( !isTransitionScene )
    ActionExtensions__Call_bool_(
      exitMenuCallback,
      result == 1,
      (const MethodInfo_3029BF0 *)Method_ActionExtensions_Call_bool___);
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
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( gameObject )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)gameObject, 34, 1, 0, 0);
      return;
    }
LABEL_11:
    sub_1C32E7C(gameObject);
  }
}


System_String_o *ChangeGrandSameServantListMenu__GetLocalizationKeyForModeKindMain(
        ChangeGrandSameServantListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C32744 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3324/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    byte_4C32744 = 1;
  }
  return (System_String_o *)StringLiteral_3324/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/;
}


void ChangeGrandSameServantListMenu__OnSelectServant(
        ChangeGrandSameServantListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !selectItem )
    sub_1C32E7C(this);
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
  TitleInfoControl_o *titleInfo; // x0
  CharaGraphSortOwnerGrandSameServant_o *v8; // x20
  const MethodInfo *v9; // x1
  CharaGraphListMenuBase_CallbackFunc_o *v10; // x20

  if ( (byte_4C32745 & 1) == 0 )
  {
    sub_1C32C20(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_1C32C20(&Method_ChangeGrandSameServantListMenu_ExitMenu__);
    sub_1C32C20(&CharaGraphSortOwnerGrandSameServant_TypeInfo);
    byte_4C32745 = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  sub_1C32BC4(&this->fields.grandSvtData, grandSvtSlotData);
  this->fields.exitMenuCallback = callback;
  sub_1C32BC4(&this->fields.exitMenuCallback, callback);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__setTitleInfo(titleInfo, 0, 1, 0, 73, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__setBackBtnSprite_39743540(titleInfo, 1, 0, 0, 0);
  v8 = (CharaGraphSortOwnerGrandSameServant_o *)sub_1C32E6C(CharaGraphSortOwnerGrandSameServant_TypeInfo);
  CharaGraphSortOwnerGrandSameServant___ctor(v8, v9);
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v8;
  sub_1C32BC4(&this->fields._SortOwner_k__BackingField, v8);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0);
  v10 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C32E6C(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
  CharaGraphListMenuBase_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)Method_ChangeGrandSameServantListMenu_ExitMenu__,
    0);
  CharaGraphListMenuBase__Open((CharaGraphListMenuBase_o *)this, v10, 0);
  titleInfo = (TitleInfoControl_o *)this->fields.charaGraphSortButtonGroup;
  if ( !titleInfo
    || (CharaGraphSortButtonGroup__SetBonusFilterButtonState((CharaGraphSortButtonGroup_o *)titleInfo, 3, 1, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.charaGraphSortButtonGroup) == 0) )
  {
LABEL_8:
    sub_1C32E7C(titleInfo);
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
  const MethodInfo *v5; // x3
  ChangeGrandSameServantListMenu_o *_4__this; // x0

  if ( (byte_4C32749 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C32749 = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_22212/*"ng"*/, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1C32E7C(0);
    ChangeGrandSameServantListMenu__ExitMenuCallback(_4__this, this->fields.result, 0, v5);
  }
}
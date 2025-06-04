void __fastcall ChangeGrandSameServantListMenu___ctor(ChangeGrandSameServantListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase___ctor((CharaGraphListMenuBase_o *)this, 0LL);
}


void __fastcall ChangeGrandSameServantListMenu__AssertionForSerializeField(
        ChangeGrandSameServantListMenu_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenuBase__AssertionForSerializeField((CharaGraphListMenuBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewPatternBase_o *__fastcall ChangeGrandSameServantListMenu__CreateListViewPattern(
        ChangeGrandSameServantListMenu_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  GrandServantListSlotData_o *grandSvtData; // x23
  CharaGraphListViewPatternGrandSameServant_o *v8; // x21
  const MethodInfo *v9; // x2
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  __int64 v11; // x1

  if ( (byte_4AFCE98 & 1) == 0 )
  {
    sub_1BC3008(&CharaGraphListViewPatternGrandSameServant_TypeInfo, *(_QWORD *)&kind);
    byte_4AFCE98 = 1;
  }
  grandSvtData = this->fields.grandSvtData;
  v8 = (CharaGraphListViewPatternGrandSameServant_o *)sub_1BC3254(CharaGraphListViewPatternGrandSameServant_TypeInfo);
  CharaGraphListViewPatternGrandSameServant___ctor(v8, grandSvtData, v9);
  if ( !v8
    || (v8->fields._SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField,
        sub_1BC2FAC(&v8->fields),
        v8->fields._RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        sub_1BC2FAC(&v8->fields._RootInfo_k__BackingField),
        v8->fields._EventValSetupInfo_k__BackingField = setupInfo,
        sub_1BC2FAC(&v8->fields._EventValSetupInfo_k__BackingField),
        (SortOwner_k__BackingField = v8->fields._SortOwner_k__BackingField) == 0LL) )
  {
    sub_1BC3264(SortOwner_k__BackingField, v11);
  }
  CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit(SortOwner_k__BackingField, kind, 0LL);
  return (CharaGraphListViewPatternBase_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeGrandSameServantListMenu__ExitMenu(
        ChangeGrandSameServantListMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  Il2CppObject *Request_object; // x0
  __int64 v13; // x1
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

  if ( (byte_4AFCE96 & 1) == 0 )
  {
    sub_1BC3008(&Method_ChangeGrandSameServantListMenu_ExitMenu__, *(_QWORD *)&result);
    sub_1BC3008(&Method_NetworkManager_getRequest_SetupGrandServantRequest___, v5);
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    sub_1BC3008(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1BC3008(&Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__, v9);
    sub_1BC3008(&ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo, v10);
    byte_4AFCE96 = 1;
  }
  v11 = sub_1BC3254(ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_26;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BC2FAC(v11 + 16);
  *(_DWORD *)(v11 + 24) = result;
  if ( !result )
  {
    v21 = Method_ChangeGrandSameServantListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_ChangeGrandSameServantListMenu_ExitMenu__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BC3020(Method_ChangeGrandSameServantListMenu_ExitMenu__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 1, 0, 0LL);
    v23 = *(_DWORD *)(v11 + 24);
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
    v15 = (_QWORD *)sub_1BC3020(Method_ChangeGrandSameServantListMenu_ExitMenu__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 8, 0, 0LL);
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
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v28, 0LL) == this->fields.selectedUserServantId )
  {
    ChangeGrandSameServantListMenu__ExitMenuCallback(this, *(_DWORD *)(v11 + 24), 0, v20);
    return;
  }
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1BC3254(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)v11,
    Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v26,
                     (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
  v27 = this->fields.grandSvtData;
  if ( !v27 || !Request_object )
LABEL_26:
    sub_1BC3264(Request_object, v13);
  SetupGrandServantRequest__beginRequest(
    (SetupGrandServantRequest_o *)Request_object,
    v27->fields._GrandGraphId_k__BackingField,
    this->fields.selectedUserServantId,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeGrandSameServantListMenu__ExitMenuCallback(
        ChangeGrandSameServantListMenu_o *this,
        int32_t result,
        bool isTransitionScene,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Action_T__o *exitMenuCallback; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1

  if ( (byte_4AFCE97 & 1) == 0 )
  {
    sub_1BC3008(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&result);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v7);
    byte_4AFCE97 = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0LL;
  sub_1BC2FAC(&this->fields.exitMenuCallback);
  if ( !isTransitionScene )
    ActionExtensions__Call_bool_(
      exitMenuCallback,
      result == 1,
      (const MethodInfo_2F513BC *)Method_ActionExtensions_Call_bool___);
  this->fields.selectedUserServantId = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CharaGraphListMenuBase__Close((CharaGraphListMenuBase_o *)this, 0LL, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.listViewManager;
  this->fields.state = 0;
  if ( !gameObject )
    goto LABEL_11;
  CharaGraphListViewManager__SaveSortInfo((CharaGraphListViewManager_o *)gameObject, 0LL);
  if ( isTransitionScene )
  {
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( gameObject )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)gameObject, 34, 1, 0LL, 0LL);
      return;
    }
LABEL_11:
    sub_1BC3264(gameObject, v10);
  }
}


System_String_o *__fastcall ChangeGrandSameServantListMenu__GetLocalizationKeyForModeKindMain(
        ChangeGrandSameServantListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AFCE94 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_3296/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/, method);
    byte_4AFCE94 = 1;
  }
  return (System_String_o *)StringLiteral_3296/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/;
}


void __fastcall ChangeGrandSameServantListMenu__OnSelectServant(
        ChangeGrandSameServantListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !selectItem )
    sub_1BC3264(this, 0LL);
  this->fields.selectedUserServantId = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))selectItem->klass->vtable._6_unknown.method)(
                                         selectItem,
                                         selectItem->klass->vtable._7_get_IsCanNotSelect.methodPtr,
                                         method);
  ChangeGrandSameServantListMenu__ExitMenu(this, 1, v4);
}


// attributes: thunk
void __fastcall ChangeGrandSameServantListMenu__OnSelectServantAtKindMain(
        ChangeGrandSameServantListMenu_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ChangeGrandSameServantListMenu__OnSelectServant(this, item, method);
}


void __fastcall ChangeGrandSameServantListMenu__Open(
        ChangeGrandSameServantListMenu_o *this,
        GrandServantListSlotData_o *grandSvtSlotData,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  TitleInfoControl_o *titleInfo; // x0
  CharaGraphSortOwnerGrandSameServant_o *v11; // x20
  const MethodInfo *v12; // x1
  CharaGraphListMenuBase_CallbackFunc_o *v13; // x20

  if ( (byte_4AFCE95 & 1) == 0 )
  {
    sub_1BC3008(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, grandSvtSlotData);
    sub_1BC3008(&Method_ChangeGrandSameServantListMenu_ExitMenu__, v7);
    sub_1BC3008(&CharaGraphSortOwnerGrandSameServant_TypeInfo, v8);
    byte_4AFCE95 = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  sub_1BC2FAC(&this->fields.grandSvtData);
  this->fields.exitMenuCallback = callback;
  sub_1BC2FAC(&this->fields.exitMenuCallback);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 73, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__setBackBtnSprite_38906884(titleInfo, 1, 0, 0, 0LL);
  v11 = (CharaGraphSortOwnerGrandSameServant_o *)sub_1BC3254(CharaGraphSortOwnerGrandSameServant_TypeInfo);
  CharaGraphSortOwnerGrandSameServant___ctor(v11, v12);
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v11;
  sub_1BC2FAC(&this->fields._SortOwner_k__BackingField);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0LL);
  v13 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1BC3254(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
  CharaGraphListMenuBase_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    (intptr_t)Method_ChangeGrandSameServantListMenu_ExitMenu__,
    0LL);
  CharaGraphListMenuBase__Open((CharaGraphListMenuBase_o *)this, v13, 0LL);
  titleInfo = (TitleInfoControl_o *)this->fields.charaGraphSortButtonGroup;
  if ( !titleInfo
    || (CharaGraphSortButtonGroup__SetBonusFilterButtonState((CharaGraphSortButtonGroup_o *)titleInfo, 3, 1, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.charaGraphSortButtonGroup) == 0LL) )
  {
LABEL_8:
    sub_1BC3264(titleInfo, v9);
  }
  CharaGraphSortButtonGroup__SetFilterButtonState((CharaGraphSortButtonGroup_o *)titleInfo, 3, 1, 0LL);
}


void __fastcall ChangeGrandSameServantListMenu___c__DisplayClass8_0___ctor(
        ChangeGrandSameServantListMenu___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ChangeGrandSameServantListMenu___c__DisplayClass8_0___ExitMenu_b__0(
        ChangeGrandSameServantListMenu___c__DisplayClass8_0_o *this,
        System_String_o *requestResult,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  ChangeGrandSameServantListMenu_o *_4__this; // x0

  if ( (byte_4AFCE99 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_21997/*"ng"*/, requestResult);
    byte_4AFCE99 = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_21997/*"ng"*/, 0LL) )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1BC3264(0LL, v5);
    ChangeGrandSameServantListMenu__ExitMenuCallback(_4__this, this->fields.result, 0, v6);
  }
}
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596B2CE & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListViewPatternGrandSameServant_TypeInfo);
    byte_596B2CE = 1;
  }
  grandSvtData = this->fields.grandSvtData;
  v8 = sub_2213CCC(CharaGraphListViewPatternGrandSameServant_TypeInfo);
  CharaGraphListViewPatternGrandSameServant___ctor((CharaGraphListViewPatternGrandSameServant_o *)v8, grandSvtData, v9);
  if ( !v8 )
    goto LABEL_6;
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v8 + 16) = SortOwner_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v8 + 16),
    (int32_t)SortOwner_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v8 + 24) = RootInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v8 + 24),
    (int32_t)RootInfo_k__BackingField,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  *(_QWORD *)(v8 + 32) = setupInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v8 + 32), (int32_t)setupInfo, v26, v27, v28, v29, v30, v31);
  v10 = *(CharaGraphSortOwnerBase_o **)(v8 + 16);
  if ( !v10 )
LABEL_6:
    sub_2213CDC(v10, v11);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x3
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  __int64 v17; // x2
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v20; // q1
  const MethodInfo *v21; // x3
  ChangeGrandSameServantListMenu_o *v22; // x0
  int32_t v23; // w1
  bool v24; // w2
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  struct GrandServantListSlotData_o *v30; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-50h]

  if ( (byte_596B2CC & 1) == 0 )
  {
    sub_2213A60(&Method_ChangeGrandSameServantListMenu_ExitMenu__);
    sub_2213A60(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__);
    sub_2213A60(&ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo);
    byte_596B2CC = 1;
  }
  v5 = sub_2213CCC(ChangeGrandSameServantListMenu___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_26;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = result;
  if ( !result )
  {
    v25 = Method_ChangeGrandSameServantListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_ChangeGrandSameServantListMenu_ExitMenu__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_2213A78(Method_ChangeGrandSameServantListMenu_ExitMenu__);
    v26 = (System_Reflection_MethodBase_o *)sub_2213A44(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 1, 0, 0);
    v23 = *(_DWORD *)(v5 + 24);
    v22 = this;
    v24 = 0;
    goto LABEL_19;
  }
  if ( result == 2 )
  {
    v22 = this;
    v23 = 2;
    v24 = 1;
LABEL_19:
    ChangeGrandSameServantListMenu__ExitMenuCallback(v22, v23, v24, v14);
    return;
  }
  if ( result != 1 )
    return;
  v15 = Method_ChangeGrandSameServantListMenu_ExitMenu__;
  if ( (*((_BYTE *)Method_ChangeGrandSameServantListMenu_ExitMenu__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_2213A78(Method_ChangeGrandSameServantListMenu_ExitMenu__);
  v16 = (System_Reflection_MethodBase_o *)sub_2213A44(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 8, 0, 0);
  grandSvtData = this->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_26;
  UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_26;
  v20 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v32.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v32.fields.fakeValue = v20;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v17);
  v31 = v32;
  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v31, 0) == this->fields.selectedUserServantId )
  {
    ChangeGrandSameServantListMenu__ExitMenuCallback(this, *(_DWORD *)(v5 + 24), 0, v21);
    return;
  }
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_ChangeGrandSameServantListMenu___c__DisplayClass8_0__ExitMenu_b__0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v28, v29);
  Request_object = NetworkManager__getRequest_object_(
                     v27,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
  v30 = this->fields.grandSvtData;
  if ( !v30 || !Request_object )
LABEL_26:
    sub_2213CDC(Request_object, v7);
  SetupGrandServantRequest__beginRequest(
    (SetupGrandServantRequest_o *)Request_object,
    v30->fields._GrandGraphId_k__BackingField,
    this->fields.selectedUserServantId,
    0);
}


// local variable allocation has failed, the output may be wrong!
void ChangeGrandSameServantListMenu__ExitMenuCallback(
        ChangeGrandSameServantListMenu_o *this,
        int32_t result,
        bool isTransitionScene,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_T__o *exitMenuCallback; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1

  if ( (byte_596B2CD & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596B2CD = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exitMenuCallback,
    0,
    (System_String_o *)isTransitionScene,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( !isTransitionScene )
    ActionExtensions__Call_bool_(
      exitMenuCallback,
      result == 1,
      (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
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
    gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( gameObject )
    {
      AvalonSceneManager__transitionScene((AvalonSceneManager_o *)gameObject, 34, 1, 0, 0);
      return;
    }
LABEL_11:
    sub_2213CDC(gameObject, v13);
  }
}


System_String_o *ChangeGrandSameServantListMenu__GetLocalizationKeyForModeKindMain(
        ChangeGrandSameServantListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596B2CA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3461/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/);
    byte_596B2CA = 1;
  }
  return (System_String_o *)StringLiteral_3461/*"CHANGE_GRAND_SAME_SERVANT_SELECT_EXPLANATION_STATUS"*/;
}


void ChangeGrandSameServantListMenu__OnSelectServant(
        ChangeGrandSameServantListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( !selectItem )
    sub_2213CDC(this, 0);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  TitleInfoControl_o *titleInfo; // x0
  CharaGraphSortOwnerGrandSameServant_o *v19; // x20
  const MethodInfo *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  CharaGraphListMenuBase_CallbackFunc_o *v27; // x20

  if ( (byte_596B2CB & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_ChangeGrandSameServantListMenu_ExitMenu__);
    sub_2213A60(&CharaGraphSortOwnerGrandSameServant_TypeInfo);
    byte_596B2CB = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandSvtData,
    (int32_t)grandSvtSlotData,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.exitMenuCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exitMenuCallback,
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
  TitleInfoControl__setTitleInfo(titleInfo, 0, 1, 0, 74, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_8;
  TitleInfoControl__setBackBtnSprite_46859020(titleInfo, 1, 0, 0, 0);
  v19 = (CharaGraphSortOwnerGrandSameServant_o *)sub_2213CCC(CharaGraphSortOwnerGrandSameServant_TypeInfo);
  CharaGraphSortOwnerGrandSameServant___ctor(v19, v20);
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SortOwner_k__BackingField,
    (int32_t)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0);
  v27 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
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
    sub_2213CDC(titleInfo, v17);
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

  if ( (byte_596B2CF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596B2CF = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_2213CDC(0, v5);
    ChangeGrandSameServantListMenu__ExitMenuCallback(_4__this, this->fields.result, 0, v6);
  }
}
void __fastcall CharaGraphListMenuBase___ctor(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphDefine_CharaGraphRootInfo_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BFCAAA & 1) == 0 )
  {
    sub_1C2E12C(&BaseMenu_TypeInfo, method);
    sub_1C2E12C(&CharaGraphDefine_CharaGraphRootInfo_TypeInfo, v3);
    byte_4BFCAAA = 1;
  }
  v4 = (CharaGraphDefine_CharaGraphRootInfo_o *)sub_1C2E378(CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
  CharaGraphDefine_CharaGraphRootInfo___ctor(v4, 0LL);
  this->fields._RootInfo_k__BackingField = v4;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._RootInfo_k__BackingField,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


void __fastcall CharaGraphListMenuBase__AssertionForSerializeField(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListMenuBase__Awake(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgTxtObject; // x19
  _BOOL8 IsActiveBgTxt; // x0
  __int64 v5; // x1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._4_AssertionForSerializeField.method)(
    this,
    this->klass->vtable._5_Init.methodPtr);
  bgTxtObject = this->fields.bgTxtObject;
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !bgTxtObject )
    sub_1C2E388(IsActiveBgTxt, v5);
  UnityEngine_GameObject__SetActive(bgTxtObject, IsActiveBgTxt, 0LL);
}


void __fastcall CharaGraphListMenuBase__CastItem(
        CharaGraphListViewItemBase_o *item,
        CharaGraphServantListViewItem_o **svtItem,
        CharaGraphCommandCodeListViewItem_o **commandCodeItem,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 methodPtr_low; // x11
  CharaGraphListViewItemBase_o *v13; // x9
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  CharaGraphListViewItemBase_o *v20; // x1
  __int64 v21; // x10
  CharaGraphListViewItemBase_o *v22; // x1
  __int64 v23; // x10
  CharaGraphListViewItemBase_o *v24; // x8
  __int64 v25; // x10

  if ( (byte_4BFCAA9 & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphCommandCodeListViewItem_TypeInfo, svtItem);
    sub_1C2E12C(&CharaGraphServantListViewItem_TypeInfo, v11);
    byte_4BFCAA9 = 1;
  }
  if ( item )
  {
    methodPtr_low = LOBYTE(CharaGraphServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[methodPtr_low - 1] == CharaGraphServantListViewItem_TypeInfo )
        v13 = item;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    *svtItem = (CharaGraphServantListViewItem_o *)v13;
    v21 = LOBYTE(CharaGraphServantListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v21 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v21 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v22 = item;
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)svtItem,
      (int64_t)v22,
      (int64_t)commandCodeItem,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    v23 = LOBYTE(CharaGraphCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v23 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v23 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v24 = item;
      else
        v24 = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    *commandCodeItem = (CharaGraphCommandCodeListViewItem_o *)v24;
    v25 = LOBYTE(CharaGraphCommandCodeListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(item->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v25 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v25 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v20 = item;
      else
        v20 = 0LL;
    }
    else
    {
      v20 = 0LL;
    }
  }
  else
  {
    *svtItem = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)svtItem, 0LL, (int64_t)commandCodeItem, (int32_t)method, v4, v5, v6, v7);
    v20 = 0LL;
    *commandCodeItem = 0LL;
  }
  sub_1C2E0D0((PartyOrganizationUtility_o *)commandCodeItem, (int64_t)v20, v14, v15, v16, v17, v18, v19);
}


void __fastcall CharaGraphListMenuBase__Close(
        CharaGraphListMenuBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Action_o *v15; // x20

  if ( (byte_4BFCA8C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_EndClose__, v10);
    byte_4BFCA8C = 1;
  }
  this->fields.callbackOnClose = callback;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.callbackOnClose,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 4;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(v11, v12);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v13);
  v15 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewPatternBase_o *__fastcall CharaGraphListMenuBase__CreateListViewPattern(
        CharaGraphListMenuBase_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CharaGraphListViewPatternServant_c **v10; // x8
  __int64 v11; // x21
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  int64_t *p_ServantCollectionSortManageUnit_k__BackingField; // x8
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct CharaGraphSortOwnerBase_o *v28; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BFCA8F & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListViewPatternCommandCode_TypeInfo, *(_QWORD *)&kind);
    sub_1C2E12C(&CharaGraphListViewPatternServantCollection_TypeInfo, v7);
    sub_1C2E12C(&CharaGraphListViewPatternServantEquip_TypeInfo, v8);
    sub_1C2E12C(&CharaGraphListViewPatternServant_TypeInfo, v9);
    byte_4BFCA8F = 1;
  }
  if ( (unsigned int)(kind - 1) > 2 )
    v10 = &CharaGraphListViewPatternServant_TypeInfo;
  else
    v10 = (CharaGraphListViewPatternServant_c **)off_4627058[kind - 1];
  v11 = sub_1C2E378(*v10);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (kind == 3
      ? (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields._ServantCollectionSortManageUnit_k__BackingField)
      : kind == 2
      ? (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields._CommandCodeSortManageUnit_k__BackingField)
      : kind != 1
      ? (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields)
      : (p_ServantCollectionSortManageUnit_k__BackingField = (int64_t *)&SortOwner_k__BackingField->fields._ServantEquipSortManageUnit_k__BackingField),
        v21 = *p_ServantCollectionSortManageUnit_k__BackingField,
        SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)*p_ServantCollectionSortManageUnit_k__BackingField,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField,
          v21,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18),
        !v11) )
  {
    sub_1C2E388(SortOwner_k__BackingField, v12);
  }
  v28 = this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v11 + 16) = v28;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)v28, v22, v23, v24, v25, v26, v27);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v11 + 24) = RootInfo_k__BackingField;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)RootInfo_k__BackingField, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v11 + 32) = setupInfo;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)setupInfo, v36, v37, v38, v39, v40, v41);
  return (CharaGraphListViewPatternBase_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CharaGraphListMenuBase__DisplayPushButton(
        CharaGraphListMenuBase_o *this,
        bool value,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  _BOOL4 v7; // w20
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x23
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  CharaGraphManageButtonGroup_o *v13; // x0

  v7 = value;
  if ( (byte_4BFCAA5 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, value);
    byte_4BFCAA5 = 1;
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0LL, 0LL) )
    return iModeKind;
  v13 = this->fields.charaGraphManageButtonGroup;
  if ( !v13 )
    sub_1C2E388(0LL, v10);
  CharaGraphManageButtonGroup__SetPushButtonActive(v13, v7, isInit, v11);
  if ( iModeKind == 4 && !v7 )
    return 0;
  else
    return iModeKind;
}


void __fastcall CharaGraphListMenuBase__DoIfStateIsInput(
        CharaGraphListMenuBase_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  if ( this->fields.state == 2 )
    ActionExtensions__Call(f, 0LL);
}


void __fastcall CharaGraphListMenuBase__EndClose(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_callbackOnClose; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *callbackOnClose; // t1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_Init.method)(
    this,
    0LL,
    this->klass->vtable._6_SetupButtonCallback.methodPtr);
  callbackOnClose = this->fields.callbackOnClose;
  p_callbackOnClose = (PartyOrganizationUtility_o *)&this->fields.callbackOnClose;
  v10 = callbackOnClose;
  if ( callbackOnClose )
  {
    p_callbackOnClose->klass = 0LL;
    sub_1C2E0D0(p_callbackOnClose, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenuBase__EndOpen(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 2;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(this, method);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__Exit(CharaGraphListMenuBase_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  CharaGraphListMenuBase_RequestCallbackFunc_o *v16; // x20
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x2

  if ( (byte_4BFCA8D & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_1C2E12C(&Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__, v5);
    sub_1C2E12C(&CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo, v6);
    byte_4BFCA8D = 1;
  }
  v7 = sub_1C2E378(CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C2E388(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 24) = result;
  v16 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__,
    v17);
  CharaGraphListMenuBase__StatusRequest(this, v16, v18);
}


System_String_o *__fastcall CharaGraphListMenuBase__GetLocalizationKeyForModeKindMain(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BFCA92 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_11838/*"SERVANT_LIST_EXPLANATION_STATUS"*/, method);
    byte_4BFCA92 = 1;
  }
  return (System_String_o *)StringLiteral_11838/*"SERVANT_LIST_EXPLANATION_STATUS"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__Init(
        CharaGraphListMenuBase_o *this,
        int32_t defaultTabKind,
        const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (CharaGraphListViewManager__DestroyList(listViewManager, *(const MethodInfo **)&defaultTabKind),
        RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField,
        this->fields.state = 0,
        this->fields.tabKind = defaultTabKind,
        !RootInfo_k__BackingField) )
  {
    sub_1C2E388(listViewManager, *(_QWORD *)&defaultTabKind);
  }
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__ModifyList(
        CharaGraphListMenuBase_o *this,
        bool isNeedSort,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  struct CharaGraphListViewManager_o *v6; // x19
  const MethodInfo *v7; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager
    || (CharaGraphListViewManager__ModifyList(listViewManager, 0, isNeedSort, v3),
        (v6 = this->fields.listViewManager) == 0LL) )
  {
    sub_1C2E388(listViewManager, isNeedSort);
  }
  v6->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v6, 0, 0LL);
  CharaGraphListViewManager__RequestListObject(v6, 3, v7);
}


void __fastcall CharaGraphListMenuBase__OnClickBonusFilterKind(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *listViewManager; // x21
  System_Action_o *v5; // x20

  if ( (byte_4BFCA9C & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, v3);
    byte_4BFCA9C = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v5, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickBonusFilterKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v5, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickCancel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenuBase__Exit(this, 0, v2);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickDecide(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CharaGraphListMenuBase__Exit(this, 1, v2);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickFilterKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListViewManager_o *listViewManager; // x20
  System_Action_bool__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4BFCA99 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_bool__TypeInfo, method);
    sub_1C2E12C(&Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__, v3);
    byte_4BFCA99 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    v5 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v5,
      (Il2CppObject *)this,
      Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__,
      0LL);
    if ( !listViewManager )
      sub_1C2E388(v6, v7);
    CharaGraphListViewManager__OnClickFilterKind(listViewManager, v5, v8);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickScaleChange(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  CharaGraphManageButtonGroup_o *v9; // x19
  const MethodInfo *v10; // x2

  if ( (byte_4BFCA97 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickScaleChange__, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    byte_4BFCA97 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_CharaGraphListMenuBase_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2E110(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    if ( listViewManager )
    {
      CharaGraphListViewManager__ChangeIconScale(listViewManager, v6);
      charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0LL, 0LL) )
        return;
      listViewManager = this->fields.listViewManager;
      if ( listViewManager )
      {
        v9 = this->fields.charaGraphManageButtonGroup;
        listViewManager = (CharaGraphListViewManager_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                           listViewManager,
                                                           v6);
        if ( v9 )
        {
          CharaGraphManageButtonGroup__SetScaleButtonSprite(v9, (System_String_o *)listViewManager, v10);
          return;
        }
      }
    }
    sub_1C2E388(listViewManager, v6);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickSortAscendingOrder(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *listViewManager; // x21
  System_Action_o *v5; // x20

  if ( (byte_4BFCA9B & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, v3);
    byte_4BFCA9B = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v5, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v5, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickSortKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *listViewManager; // x21
  System_Action_o *v5; // x20

  if ( (byte_4BFCA9A & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_CharaGraphListViewManager_OnClickSortKind__, v3);
    byte_4BFCA9A = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v5, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v5, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickTab(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *finishCallback,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x20
  struct CharaGraphListViewManager_o *listViewManager; // x8
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x2
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  v4 = this;
  if ( (byte_4BFCA96 & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTab__, finishCallback);
    byte_4BFCA96 = 1;
  }
  if ( v4->fields.state == 2 )
  {
    listViewManager = v4->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_16;
    ListViewPattern_k__BackingField = listViewManager->fields._ListViewPattern_k__BackingField;
    if ( ListViewPattern_k__BackingField )
    {
      SortOwner_k__BackingField = ListViewPattern_k__BackingField->fields._SortOwner_k__BackingField;
      if ( SortOwner_k__BackingField )
        CharaGraphSortOwnerBase__Save(SortOwner_k__BackingField, (const MethodInfo *)finishCallback);
    }
    v8 = Method_CharaGraphListMenuBase_OnClickTab__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickTab__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnClickTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C2E110(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
    RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_16:
      sub_1C2E388(this, finishCallback);
    if ( (RootInfo_k__BackingField->fields._ModeKind_k__BackingField & 0xFFFFFFFE) == 2 )
    {
      CharaGraphListMenuBase__StatusRequest(v4, finishCallback, v10);
    }
    else if ( finishCallback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))finishCallback->fields.m_target)(
        finishCallback->fields.original_method_info,
        0LL,
        *(_QWORD *)&finishCallback->fields.extra_arg);
    }
  }
}


void __fastcall CharaGraphListMenuBase__OnClickTabChoice(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 3, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabCommandCode(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListMenuBase_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4BFCA95 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__, method);
    sub_1C2E12C(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v3);
    byte_4BFCA95 = 1;
  }
  v4 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__,
    v5);
  CharaGraphListMenuBase__OnClickTab(this, v4, v6);
}


void __fastcall CharaGraphListMenuBase__OnClickTabLock(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 2, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabMain(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 0, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabPush(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CharaGraphListMenuBase__OnServantManageTabSelected(this, 4, v2);
}


void __fastcall CharaGraphListMenuBase__OnClickTabServant(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListMenuBase_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4BFCA93 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__, method);
    sub_1C2E12C(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v3);
    byte_4BFCA93 = 1;
  }
  v4 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__,
    v5);
  CharaGraphListMenuBase__OnClickTab(this, v4, v6);
}


void __fastcall CharaGraphListMenuBase__OnClickTabServantEquip(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  CharaGraphListMenuBase_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4BFCA94 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__, method);
    sub_1C2E12C(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v3);
    byte_4BFCA94 = 1;
  }
  v4 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__,
    v5);
  CharaGraphListMenuBase__OnClickTab(this, v4, v6);
}


void __fastcall CharaGraphListMenuBase__OnCloseServantStatusWithQuestId(
        CharaGraphListMenuBase_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  this->fields.state = 3;
  CharaGraphListMenuBase__Exit(this, 2, method);
}


void __fastcall CharaGraphListMenuBase__OnCloseServantStatusWithoutQuestId(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  const MethodInfo *v5; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C2E388(0LL, method);
  CharaGraphListViewManager__ModifyList(listViewManager, 0, 0, v2);
  CharaGraphListMenuBase__ToInputState(this, 1, v5);
}


void __fastcall CharaGraphListMenuBase__OnEndSelectCommandCodeStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, bool, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_OnEndSelectServantStatus.method)(
    this,
    isDecide,
    0LL,
    0LL,
    this->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr);
}


void __fastcall CharaGraphListMenuBase__OnEndSelectServantEquipStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, bool, _QWORD, _QWORD, Il2CppMethodPointer))this->klass->vtable._14_OnEndSelectServantStatus.method)(
    this,
    isDecide,
    0LL,
    0LL,
    this->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__OnEndSelectServantStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v22; // x2
  int v23; // w21
  Il2CppObject *Instance; // x20
  System_Action_o *v25; // x0
  bool v26; // cc
  System_Action_o *v27; // x21
  Il2CppObject *v28; // x1
  void *image; // x2

  if ( (byte_4BFCA9F & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, isDecide);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C2E12C(&Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__, v10);
    sub_1C2E12C(&CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo, v11);
    byte_4BFCA9F = 1;
  }
  v12 = sub_1C2E378(CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = questId;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_13;
  scrollView = (UnityEngine_Behaviour_o *)listViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
  if ( isDecide )
    CharaGraphListMenuBase__ModifyList(this, isNeedSort, v22);
  v23 = *(_DWORD *)(v12 + 24);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v25 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  v26 = v23 < 1;
  v27 = v25;
  if ( v26 )
  {
    v28 = (Il2CppObject *)this;
    image = this->klass[1]._1.image;
  }
  else
  {
    v28 = (Il2CppObject *)v12;
    LODWORD(image) = Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__;
  }
  System_Action___ctor(v25, v28, (intptr_t)image, 0LL);
  if ( !Instance )
LABEL_13:
    sub_1C2E388(scrollView, v14);
  CommonUI__CloseServantStatusDialog((CommonUI_o *)Instance, v27, 0LL);
}


bool __fastcall CharaGraphListMenuBase__OnLongTapServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w19

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(this, item);
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( !ModeKind_k__BackingField )
    ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._11_OnSelectServantAtKindStatus.method)(
      this,
      item,
      this->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr);
  return ModeKind_k__BackingField == 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__OnSelectServant(
        CharaGraphListMenuBase_o *this,
        int32_t iKind,
        int32_t n,
        const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  CharaGraphListViewItemBase_o *Item; // x0

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (n & 0x80000000) != 0 )
      goto LABEL_8;
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      sub_1C2E388(0LL, iKind);
    Item = CharaGraphListViewManager__GetItem(listViewManager, n, *(const MethodInfo **)&n);
    if ( !Item )
      goto LABEL_8;
    if ( iKind != 1 )
    {
      CharaGraphListMenuBase__OnSelectServantLocal(this, Item, *(const MethodInfo **)&n);
      return;
    }
    if ( (((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._9_OnLongTapServantLocal.method)(
            this,
            Item,
            this->klass->vtable._10_OnSelectServantAtKindMain.methodPtr) & 1) == 0 )
LABEL_8:
      CharaGraphListMenuBase__ToInputState(this, 0, *(const MethodInfo **)&n);
  }
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindChoice(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4BFCAA1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__, item);
    byte_4BFCAA1 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  if ( !item )
    sub_1C2E388(v7, v8);
  item->fields._IsSwapChoice_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v9);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindLock(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4BFCAA0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__, item);
    byte_4BFCAA0 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0, 0LL);
  if ( !item )
    sub_1C2E388(v7, v8);
  item->fields._IsSwapLock_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v9);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindMain(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._11_OnSelectServantAtKindStatus.method)(
    this,
    item,
    this->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindPush(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x3
  __int64 v12; // x0
  __int64 v13; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  System_Action_bool__o *v15; // x21
  NetworkManager_ResultCallbackFunc_o *v16; // x22
  CharaGraphCommandCodeListViewItem_o *v17; // [xsp+0h] [xbp-40h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BFCAA2 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_bool__TypeInfo, item);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__, v5);
    sub_1C2E12C(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__, v6);
    sub_1C2E12C(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__, v7);
    sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4BFCAA2 = 1;
  }
  v9 = Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__;
  v17 = 0LL;
  svtItem = 0LL;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C2E110(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v17, v11);
  if ( !svtItem )
    sub_1C2E388(v12, v13);
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  v15 = (System_Action_bool__o *)sub_1C2E378(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v15,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__,
    0LL);
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__,
    0LL);
  CharaGraphUtil__PushRequestWithConfirmDialog(UserServantEntity_k__BackingField, v15, v16, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindStatus(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v9; // x3
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  int32_t tabKind; // w8
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x21
  CommonUI_o *v14; // x20
  ServantStatusDialog_EndDelegate_o *v15; // x22
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  CommonUI_o *v17; // x20
  ServantStatusDialog_ResultDelegate_o *v18; // x22
  UserServantEntity_o *v19; // x21
  CommonUI_o *v20; // x20
  ServantStatusDialog_EndDelegate_o *v21; // x22
  CharaGraphCommandCodeListViewItem_o *commandCodeItem; // [xsp+8h] [xbp-38h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+18h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4BFCA9E & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__, item);
    sub_1C2E12C(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_1C2E12C(&ServantStatusDialog_ResultDelegate_TypeInfo, v6);
    this = (CharaGraphListMenuBase_o *)sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4BFCA9E = 1;
  }
  svtItem = 0LL;
  commandCodeItem = 0LL;
  if ( v4->fields.tabKind == 3 )
  {
    CharaGraphListMenuBase__ToInputState(v4, 0, method);
    return;
  }
  listViewManager = v4->fields.listViewManager;
  if ( !listViewManager || (this = (CharaGraphListMenuBase_o *)listViewManager->fields.scrollView) == 0LL )
LABEL_22:
    sub_1C2E388(this, item);
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &commandCodeItem, v9);
  v10 = Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
  v11 = (System_Reflection_MethodBase_o *)sub_1C2E110(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  tabKind = v4->fields.tabKind;
  v4->fields.state = 6;
  switch ( tabKind )
  {
    case 0:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( svtItem )
      {
        UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
        v17 = (CommonUI_o *)this;
        v18 = (ServantStatusDialog_ResultDelegate_o *)sub_1C2E378(ServantStatusDialog_ResultDelegate_TypeInfo);
        ServantStatusDialog_ResultDelegate___ctor(
          v18,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr,
          0LL);
        if ( v17 )
        {
          CommonUI__OpenServantStatusDialog_31187884(v17, 0, UserServantEntity_k__BackingField, v18, 0, 0LL);
          return;
        }
      }
      goto LABEL_22;
    case 1:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( svtItem )
      {
        v19 = svtItem->fields._UserServantEntity_k__BackingField;
        v20 = (CommonUI_o *)this;
        v21 = (ServantStatusDialog_EndDelegate_o *)sub_1C2E378(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v21,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._13_OnEndSelectCommandCodeStatus.methodPtr,
          0LL);
        if ( v20 )
        {
          CommonUI__OpenServantStatusDialog_31187420(v20, 0, v19, v21, 0LL);
          return;
        }
      }
      goto LABEL_22;
    case 2:
      this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( commandCodeItem )
      {
        UserCommandCodeEntity_k__BackingField = commandCodeItem->fields._UserCommandCodeEntity_k__BackingField;
        v14 = (CommonUI_o *)this;
        v15 = (ServantStatusDialog_EndDelegate_o *)sub_1C2E378(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v15,
          (Il2CppObject *)v4,
          (intptr_t)v4->klass->vtable._14_OnEndSelectServantStatus.methodPtr,
          0LL);
        if ( v14 )
        {
          CommonUI__OpenServantStatusDialog_31189584(v14, 0, UserCommandCodeEntity_k__BackingField, v15, 0LL, 0LL);
          return;
        }
      }
      goto LABEL_22;
  }
}


void __fastcall CharaGraphListMenuBase__OnSelectServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x2
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4BFCA9D & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_1C2E12C(&Method_CharaGraphListMenuBase_OnSelectServantLocal__, item);
    byte_4BFCA9D = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsEnabled_k__BackingField )
  {
LABEL_8:
    v6 = Method_CharaGraphListMenuBase_OnSelectServantLocal__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantLocal__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C2E110(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0LL);
    CharaGraphListMenuBase__ToInputState(v4, 0, v8);
    return;
  }
  RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_17:
    sub_1C2E388(this, item);
  switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
  {
    case 0:
      if ( (((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))item->klass->vtable._7_get_IsCanNotSelect.method)(
              item,
              item->klass->vtable._8_get_SortPriority.methodPtr,
              method) & 1) != 0 )
        goto LABEL_8;
      v10 = v4->klass->vtable._10_OnSelectServantAtKindMain.method;
      methodPtr = v4->klass->vtable._11_OnSelectServantAtKindStatus.methodPtr;
      goto LABEL_16;
    case 1:
      v10 = v4->klass->vtable._11_OnSelectServantAtKindStatus.method;
      methodPtr = v4->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr;
LABEL_16:
      ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))v10)(
        v4,
        item,
        methodPtr);
      break;
    case 2:
      CharaGraphListMenuBase__OnSelectServantAtKindLock(v4, item, method);
      break;
    case 3:
      CharaGraphListMenuBase__OnSelectServantAtKindChoice(v4, item, method);
      break;
    case 4:
      CharaGraphListMenuBase__OnSelectServantAtKindPush(v4, item, method);
      break;
    default:
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__OnServantManageTabSelected(
        CharaGraphListMenuBase_o *this,
        int32_t modeKindToUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v20; // x21
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2

  if ( (byte_4BFCA98 & 1) == 0 )
  {
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnServantManageTabSelected__, *(_QWORD *)&modeKindToUpdate);
    sub_1C2E12C(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5);
    sub_1C2E12C(&Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__, v6);
    sub_1C2E12C(&CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo, v7);
    byte_4BFCA98 = 1;
  }
  v8 = sub_1C2E378(CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_13;
  *(_QWORD *)(v8 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_DWORD *)(v8 + 24) = modeKindToUpdate;
  if ( this->fields.state != 2 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_13:
    sub_1C2E388(v9, v10);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != modeKindToUpdate )
  {
    v18 = Method_CharaGraphListMenuBase_OnServantManageTabSelected__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnServantManageTabSelected__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C2E144(Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C2E110(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
    if ( *(_DWORD *)(v8 + 24) == 4 )
      EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v20 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_1C2E378(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenuBase_RequestCallbackFunc___ctor(
      v20,
      (Il2CppObject *)v8,
      Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__,
      v21);
    CharaGraphListMenuBase__StatusRequest(this, v20, v22);
  }
}


void __fastcall CharaGraphListMenuBase__Open(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CharaGraphSortOwnerAllKind_o *v7; // x22
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v28; // x8
  System_Action_o *v29; // x20

  if ( (byte_4BFCA8A & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, callback);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_EndOpen__, v5);
    sub_1C2E12C(&CharaGraphSortOwnerNoSave_TypeInfo, v6);
    byte_4BFCA8A = 1;
  }
  if ( !this->fields._SortOwner_k__BackingField )
  {
    v7 = (CharaGraphSortOwnerAllKind_o *)sub_1C2E378(CharaGraphSortOwnerNoSave_TypeInfo);
    CharaGraphSortOwnerAllKind___ctor(v7, v8);
    this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v7;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields._SortOwner_k__BackingField,
      (int64_t)v7,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._6_SetupButtonCallback.method)(
    this,
    this->klass->vtable._7_CreateListViewPattern.methodPtr,
    method);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.CallbackOnExit = callback;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.CallbackOnExit,
      (int64_t)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( RootInfo_k__BackingField )
    {
      CharaGraphListMenuBase__SetTabKind(
        this,
        this->fields.tabKind,
        RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
        0,
        v24);
      CharaGraphListMenuBase__EndOpen(this, v26);
      return;
    }
LABEL_13:
    sub_1C2E388(gameObject, v23);
  }
  if ( !state )
  {
    this->fields.CallbackOnExit = callback;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&this->fields.CallbackOnExit,
      (int64_t)callback,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v28 = this->fields._RootInfo_k__BackingField;
    if ( !v28 )
      goto LABEL_13;
    CharaGraphListMenuBase__SetTabKind(this, this->fields.tabKind, v28->fields._ModeKind_k__BackingField, 1, v27);
    this->fields.state = 1;
    v29 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v29, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetFilterButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  __int64 v5; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4BFCAA7 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFCAA7 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v4 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_1C2E388(v4, v5);
    CharaGraphSortButtonGroup__SetFilterButtonImage(v4, listViewManager->fields.sort, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetSortButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  __int64 v5; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4BFCAA8 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFCAA8 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v4 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_1C2E388(v4, v5);
    CharaGraphSortButtonGroup__SetSortButtonImage(
      v4,
      listViewManager->fields.sort,
      listViewManager->fields._AlignedBonusFilterInfos_k__BackingField,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__SetTabKind(
        CharaGraphListMenuBase_o *this,
        int32_t iTabKind,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EventMaster_o *Master_object; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x4
  int32_t tabKind; // w22
  struct CharaGraphDefine_CharaGraphRootInfo_o *v18; // x8
  int32_t ModeKind_k__BackingField; // w9
  bool v20; // w24
  bool v21; // w20
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v24; // x21
  EventUpValSetupInfo_o *v25; // x22
  struct CharaGraphListViewManager_o *listViewManager; // x21
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x21
  const MethodInfo *v29; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *v30; // x8
  struct CharaGraphListViewManager_o *v31; // x20
  const MethodInfo *v32; // x2
  ListViewManager_o *v33; // x0
  const MethodInfo *v34; // x2
  UnityEngine_Object_o *v35; // x20
  CharaGraphManageButtonGroup_o *v36; // x19
  const MethodInfo *v37; // x2

  if ( (byte_4BFCA90 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&iTabKind);
    sub_1C2E12C(&DataManager_TypeInfo, v9);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1C2E12C(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    byte_4BFCA90 = 1;
  }
  if ( !this->fields.isInitTab )
  {
    this->fields.isInitTab = 1;
    CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, 1, (const MethodInfo *)isInit);
    goto LABEL_12;
  }
  CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, isInit, (const MethodInfo *)isInit);
  if ( isInit )
  {
LABEL_12:
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, iModeKind, 1, v16);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    this->fields.tabKind = iTabKind;
    if ( !RootInfo_k__BackingField )
      goto LABEL_38;
    v20 = 0;
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField = (int)Master_object;
    v21 = 1;
    goto LABEL_14;
  }
  tabKind = this->fields.tabKind;
  if ( tabKind != iTabKind )
  {
    Master_object = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(this, iTabKind == 0, iModeKind, 0, v16);
    iModeKind = (int)Master_object;
  }
  v18 = this->fields._RootInfo_k__BackingField;
  if ( !v18 )
    goto LABEL_38;
  ModeKind_k__BackingField = v18->fields._ModeKind_k__BackingField;
  this->fields.tabKind = iTabKind;
  v18->fields._ModeKind_k__BackingField = iModeKind;
  v20 = iModeKind == ModeKind_k__BackingField;
  if ( tabKind == iTabKind )
  {
    if ( iModeKind == ModeKind_k__BackingField )
      goto LABEL_26;
    v21 = 0;
    goto LABEL_19;
  }
  v21 = 0;
LABEL_14:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (EventMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_object )
    goto LABEL_38;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash(Master_object, 0, 0LL, 0LL);
  v24 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
  v25 = (EventUpValSetupInfo_o *)sub_1C2E378(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40241872(v25, v24, 0, 0, 0, 0LL);
  listViewManager = this->fields.listViewManager;
  Master_object = (EventMaster_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, EventUpValSetupInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_CreateListViewPattern.method)(
                                     this,
                                     (unsigned int)this->fields.tabKind,
                                     v25,
                                     this->klass->vtable._8_GetLocalizationKeyForModeKindMain.methodPtr);
  if ( !listViewManager )
    goto LABEL_38;
  ((void (__fastcall *)(struct CharaGraphListViewManager_o *, EventMaster_o *, void *))listViewManager->klass->vtable._14_CreateList.method)(
    listViewManager,
    Master_object,
    listViewManager->klass[1]._1.image);
  CharaGraphListMenuBase__SetupSortUi(this, v27);
  if ( !v20 )
  {
LABEL_19:
    charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (EventMaster_o *)UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v30 = this->fields._RootInfo_k__BackingField;
      if ( !v30 )
        goto LABEL_38;
      Master_object = (EventMaster_o *)this->fields.charaGraphManageButtonGroup;
      if ( !Master_object )
        goto LABEL_38;
      CharaGraphManageButtonGroup__UpdateDisplay(
        (CharaGraphManageButtonGroup_o *)Master_object,
        v30->fields._ModeKind_k__BackingField,
        v21,
        v29);
    }
    CharaGraphListMenuBase__SetupExplanationLabel(this, v14);
  }
LABEL_26:
  v31 = this->fields.listViewManager;
  if ( !v31 )
    goto LABEL_38;
  if ( this->fields.state == 2 )
  {
    CharaGraphListViewManager__ModifyList(this->fields.listViewManager, 0, 0, v15);
    CharaGraphListMenuBase__ToInputState(this, 1, v32);
  }
  else
  {
    v33 = (ListViewManager_o *)this->fields.listViewManager;
    v31->fields.initMode = 1;
    ListViewManager__set_IsInput(v33, 0, 0LL);
    CharaGraphListViewManager__RequestListObject(v31, 1, v34);
  }
  v35 = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
  {
    Master_object = (EventMaster_o *)this->fields.listViewManager;
    if ( Master_object )
    {
      v36 = this->fields.charaGraphManageButtonGroup;
      Master_object = (EventMaster_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                         (CharaGraphListViewManager_o *)Master_object,
                                         v14);
      if ( v36 )
      {
        CharaGraphManageButtonGroup__SetScaleButtonSprite(v36, (System_String_o *)Master_object, v37);
        return;
      }
    }
LABEL_38:
    sub_1C2E388(Master_object, v14);
  }
}


void __fastcall CharaGraphListMenuBase__SetupButtonCallback(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x21
  System_Action_o *v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x20
  struct CharaGraphKindTabButtonGroup_o *v28; // x20
  System_Action_o *v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct CharaGraphKindTabButtonGroup_o *v36; // x20
  System_Action_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct CharaGraphKindTabButtonGroup_o *v44; // x20
  System_Action_o *v45; // x21
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  struct CharaGraphManageButtonGroup_o *v53; // x20
  System_Action_o *v54; // x21
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct CharaGraphManageButtonGroup_o *v61; // x20
  System_Action_o *v62; // x21
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct CharaGraphManageButtonGroup_o *v69; // x20
  System_Action_o *v70; // x21
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  struct CharaGraphManageButtonGroup_o *v77; // x20
  System_Action_o *v78; // x21
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct CharaGraphManageButtonGroup_o *v85; // x20
  System_Action_o *v86; // x21
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  struct CharaGraphSortButtonGroup_o *v94; // x20
  System_Action_o *v95; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct CharaGraphSortButtonGroup_o *v102; // x20
  System_Action_o *v103; // x21
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  struct CharaGraphSortButtonGroup_o *v110; // x20
  System_Action_o *v111; // x21
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  struct CharaGraphSortButtonGroup_o *v118; // x20
  System_Action_o *v119; // x21
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7

  if ( (byte_4BFCA8B & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, v3);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickFilterKind__, v4);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickScaleChange__, v5);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, v6);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickSortKind__, v7);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTabChoice__, v8);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTabCommandCode__, v9);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTabLock__, v10);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTabMain__, v11);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTabPush__, v12);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTabServantEquip__, v13);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnClickTabServant__, v14);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_SetSortButtonImage__, v15);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v16);
    byte_4BFCA8B = 1;
  }
  listViewManager = this->fields.listViewManager;
  v18 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CharaGraphListMenuBase_SetSortButtonImage__, 0LL);
  if ( !listViewManager )
    goto LABEL_29;
  listViewManager->fields._OnSetSortButtonImage_k__BackingField = v18;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&listViewManager->fields._OnSetSortButtonImage_k__BackingField,
    (int64_t)v18,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v28 = this->fields.charaGraphKindTabButtonGroup;
    v29 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServant__, 0LL);
    if ( !v28 )
      goto LABEL_29;
    v28->fields._OnClickTabServant_k__BackingField = v29;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v28->fields._OnClickTabServant_k__BackingField,
      (int64_t)v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v36 = this->fields.charaGraphKindTabButtonGroup;
    v37 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v37, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServantEquip__, 0LL);
    if ( !v36 )
      goto LABEL_29;
    v36->fields._OnClickTabServantEquip_k__BackingField = v37;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v36->fields._OnClickTabServantEquip_k__BackingField,
      (int64_t)v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
    v44 = this->fields.charaGraphKindTabButtonGroup;
    v45 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabCommandCode__, 0LL);
    if ( !v44 )
      goto LABEL_29;
    v44->fields._OnClickTabCommandCode_k__BackingField = v45;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v44->fields._OnClickTabCommandCode_k__BackingField,
      (int64_t)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0LL, 0LL) )
  {
    v53 = this->fields.charaGraphManageButtonGroup;
    v54 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v54, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabMain__, 0LL);
    if ( !v53 )
      goto LABEL_29;
    v53->fields._OnClickTabMain_k__BackingField = v54;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v53->fields._OnClickTabMain_k__BackingField,
      (int64_t)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    v61 = this->fields.charaGraphManageButtonGroup;
    v62 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v62, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabLock__, 0LL);
    if ( !v61 )
      goto LABEL_29;
    v61->fields._OnClickTabLock_k__BackingField = v62;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v61->fields._OnClickTabLock_k__BackingField,
      (int64_t)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    v69 = this->fields.charaGraphManageButtonGroup;
    v70 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v70, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabChoice__, 0LL);
    if ( !v69 )
      goto LABEL_29;
    v69->fields._OnClickTabChoice_k__BackingField = v70;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v69->fields._OnClickTabChoice_k__BackingField,
      (int64_t)v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76);
    v77 = this->fields.charaGraphManageButtonGroup;
    v78 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v78, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabPush__, 0LL);
    if ( !v77 )
      goto LABEL_29;
    v77->fields._OnClickTabPush_k__BackingField = v78;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v77->fields._OnClickTabPush_k__BackingField,
      (int64_t)v78,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    v85 = this->fields.charaGraphManageButtonGroup;
    v86 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v86, (Il2CppObject *)this, (intptr_t)Method_CharaGraphListMenuBase_OnClickScaleChange__, 0LL);
    if ( !v85 )
      goto LABEL_29;
    v85->fields._OnClickScaleChange_k__BackingField = v86;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v85->fields._OnClickScaleChange_k__BackingField,
      (int64_t)v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    v94 = this->fields.charaGraphSortButtonGroup;
    v95 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v95, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickFilterKind__, 0LL);
    if ( v94 )
    {
      v94->fields._OnClickFilterKind_k__BackingField = v95;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&v94->fields._OnClickFilterKind_k__BackingField,
        (int64_t)v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      v102 = this->fields.charaGraphSortButtonGroup;
      v103 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v103, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortKind__, 0LL);
      if ( v102 )
      {
        v102->fields._OnClickSortKind_k__BackingField = v103;
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&v102->fields._OnClickSortKind_k__BackingField,
          (int64_t)v103,
          v104,
          v105,
          v106,
          v107,
          v108,
          v109);
        v110 = this->fields.charaGraphSortButtonGroup;
        v111 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
        System_Action___ctor(v111, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, 0LL);
        if ( v110 )
        {
          v110->fields._OnClickSortAscendingOrder_k__BackingField = v111;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v110->fields._OnClickSortAscendingOrder_k__BackingField,
            (int64_t)v111,
            v112,
            v113,
            v114,
            v115,
            v116,
            v117);
          v118 = this->fields.charaGraphSortButtonGroup;
          v119 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
          System_Action___ctor(v119, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, 0LL);
          if ( v118 )
          {
            v118->fields._OnClickBonusFilterKind_k__BackingField = v119;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v118->fields._OnClickBonusFilterKind_k__BackingField,
              (int64_t)v119,
              v120,
              v121,
              v122,
              v123,
              v124,
              v125);
            return;
          }
        }
      }
    }
LABEL_29:
    sub_1C2E388(v19, v20);
  }
}


void __fastcall CharaGraphListMenuBase__SetupExplanationLabel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *explanationLabel; // x20
  System_String_o *v8; // x0
  __int64 v9; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_String_o *v11; // x20
  __int64 *v12; // x8
  UILabel_o *v13; // x19

  if ( (byte_4BFCA91 & 1) == 0 )
  {
    sub_1C2E12C(&LocalizationManager_TypeInfo, method);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_11837/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4);
    sub_1C2E12C(&StringLiteral_11835/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v5);
    sub_1C2E12C(&StringLiteral_11836/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v6);
    byte_4BFCA91 = 1;
  }
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (System_String_o *)UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_18:
      sub_1C2E388(v8, v9);
    switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
    {
      case 0:
        v11 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._8_GetLocalizationKeyForModeKindMain.method)(
                                   this,
                                   this->klass->vtable._9_OnLongTapServantLocal.methodPtr);
        if ( !v11 )
          return;
        goto LABEL_14;
      case 2:
        v12 = &StringLiteral_11836/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_13;
      case 3:
        v12 = &StringLiteral_11835/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_13;
      case 4:
        v12 = &StringLiteral_11837/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_13:
        v11 = (System_String_o *)*v12;
        if ( !*v12 )
          return;
LABEL_14:
        v13 = this->fields.explanationLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v8 = LocalizationManager__Get(v11, 0LL);
        if ( !v13 )
          goto LABEL_18;
        UILabel__set_text(v13, v8, 0LL);
        break;
      default:
        return;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__SetupServantKindTabButtonGroup(
        CharaGraphListMenuBase_o *this,
        int32_t iTabKind,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x22
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  CharaGraphKindTabButtonGroup_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4BFCA8E & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&iTabKind);
    byte_4BFCA8E = 1;
  }
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v10 = this->fields.charaGraphKindTabButtonGroup;
    if ( !v10
      || (CharaGraphKindTabButtonGroup__SetupTabLabel(v10, iTabKind, v9),
          (v10 = this->fields.charaGraphKindTabButtonGroup) == 0LL) )
    {
      sub_1C2E388(v10, v8);
    }
    CharaGraphKindTabButtonGroup__SetupTabButtons(v10, iTabKind, isInit, v11);
  }
}


void __fastcall CharaGraphListMenuBase__SetupSortUi(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  CharaGraphSortButtonGroup_o *v6; // x0
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_4BFCAA6 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFCAA6 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    CharaGraphListMenuBase__SetFilterButtonImage(this, v4);
    v6 = this->fields.charaGraphSortButtonGroup;
    if ( !v6
      || (CharaGraphSortButtonGroup__SetFilterButtonState(v6, 0, 1, 0LL),
          (listViewManager = this->fields.listViewManager) == 0LL)
      || (v6 = this->fields.charaGraphSortButtonGroup) == 0LL )
    {
      sub_1C2E388(v6, v5);
    }
    CharaGraphSortButtonGroup__SetBonusFilterButton(v6, listViewManager->fields.sort, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__StatusRequest(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  CharaGraphListViewManager_o *listViewManager; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x23
  const MethodInfo *v20; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w8
  bool v23; // w21
  bool v24; // w22
  int32_t tabKind; // w23
  NetworkManager_ResultCallbackFunc_o *v26; // x19
  System_Int64_array *unlockArray; // [xsp+8h] [xbp-48h] BYREF
  System_Int64_array *lockArray; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4BFCAA3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_1C2E12C(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v5);
    sub_1C2E12C(&NetworkManager_TypeInfo, v6);
    sub_1C2E12C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C2E12C(&Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__, v8);
    sub_1C2E12C(&CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo, v9);
    byte_4BFCAA3 = 1;
  }
  v10 = sub_1C2E378(CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_24;
  *(_QWORD *)(v10 + 16) = callback;
  v19 = v10 + 16;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)callback, v13, v14, v15, v16, v17, v18);
  lockArray = 0LL;
  unlockArray = 0LL;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_24;
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( ModeKind_k__BackingField == 3 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_24;
    CharaGraphListViewManager__GetSwapChoiceArray(listViewManager, &lockArray, &unlockArray, v20);
    v24 = 0;
    v23 = 1;
  }
  else if ( ModeKind_k__BackingField == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_24;
    CharaGraphListViewManager__GetSwapLockArray(listViewManager, &lockArray, &unlockArray, v20);
    v23 = 0;
    v24 = 1;
  }
  else
  {
    v23 = 0;
    v24 = 0;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)lockArray, 0LL) )
  {
    listViewManager = (CharaGraphListViewManager_o *)BasicHelper__IsNullOrEmpty(
                                                       (System_Collections_ICollection_o *)unlockArray,
                                                       0LL);
    if ( ((unsigned __int8)listViewManager & 1) != 0 )
    {
      if ( *(_QWORD *)v19 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
          *(_QWORD *)(*(_QWORD *)v19 + 64LL),
          0LL,
          *(_QWORD *)(*(_QWORD *)v19 + 40LL));
        return;
      }
LABEL_24:
      sub_1C2E388(listViewManager, v12);
    }
  }
  tabKind = this->fields.tabKind;
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2E378(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)v10,
    Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( tabKind == 2 )
  {
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v26,
                                                       (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_24;
    CommandCodeStatusSyncRequest__beginRequest(
      (CommandCodeStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      v24,
      v23,
      0LL);
  }
  else
  {
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                       v26,
                                                       (const MethodInfo_3056BC4 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_24;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      0,
      v24,
      v23,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase__ToInputState(
        CharaGraphListMenuBase_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x20
  CharaGraphListViewManager_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  const MethodInfo *v17; // x2

  if ( (byte_4BFCAA4 & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListViewManager_CallbackFunc_TypeInfo, changeMode);
    sub_1C2E12C(&Method_CharaGraphListMenuBase_OnSelectServant__, v5);
    byte_4BFCAA4 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v7 = (CharaGraphListViewManager_CallbackFunc_o *)sub_1C2E378(CharaGraphListViewManager_CallbackFunc_TypeInfo);
  CharaGraphListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase_OnSelectServant__,
    v8);
  if ( !listViewManager )
    sub_1C2E388(v9, v10);
  listViewManager->fields.FuncOnClick = v7;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&listViewManager->fields.FuncOnClick,
    (int64_t)v7,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( changeMode )
  {
    listViewManager->fields.initMode = 2;
    ListViewManager__set_IsInput((ListViewManager_o *)listViewManager, 1, 0LL);
    CharaGraphListViewManager__RequestListObject(listViewManager, 2, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___OnClickFilterKind_b__54_0(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( isDecide )
    CharaGraphListMenuBase__SetFilterButtonImage(this, (const MethodInfo *)isDecide);
}


void __fastcall CharaGraphListMenuBase___OnClickTabCommandCode_b__46_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(this, _);
  CharaGraphListMenuBase__SetTabKind(this, 2, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void __fastcall CharaGraphListMenuBase___OnClickTabServantEquip_b__45_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  EventTutorialMaster__CheckTutorial(-1, 54, 0LL, 0, 0, 0, 0, 0LL);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(v4, v5);
  CharaGraphListMenuBase__SetTabKind(this, 1, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v6);
}


void __fastcall CharaGraphListMenuBase___OnClickTabServant_b__44_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(this, _);
  CharaGraphListMenuBase__SetTabKind(this, 0, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void __fastcall CharaGraphListMenuBase___OnSelectServantAtKindPush_g__EndPushRequest_71_1(
        CharaGraphListMenuBase_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CharaGraphListViewManager_o *listViewManager; // x0
  const MethodInfo *v6; // x2

  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    sub_1C2E388(0LL, result);
  CharaGraphListViewManager__ModifyList(listViewManager, 0, 0, v3);
  CharaGraphListMenuBase__ToInputState(this, 1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___OnSelectServantAtKindPush_g__OnCloseDialog_71_0(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !isDecide )
    CharaGraphListMenuBase___OnSelectServantAtKindPush_g__EndPushRequest_71_1(this, (System_String_o *)isDecide, method);
}


void __fastcall CharaGraphListMenuBase__add_CallbackOnExit(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v6; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenuBase_o *v11; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4BFCA88 & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, value);
    byte_4BFCA88 = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v6 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v8->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2E648(v8);
  CharaGraphListMenuBase__remove_CallbackOnExit(v11, v12, v13);
}


int32_t __fastcall CharaGraphListMenuBase__get_ModeKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(this, method);
  return RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
}


CharaGraphDefine_CharaGraphRootInfo_o *__fastcall CharaGraphListMenuBase__get_RootInfo(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  return this->fields._RootInfo_k__BackingField;
}


CharaGraphSortOwnerBase_o *__fastcall CharaGraphListMenuBase__get_SortOwner(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  return this->fields._SortOwner_k__BackingField;
}


void __fastcall CharaGraphListMenuBase__remove_CallbackOnExit(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v6; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListMenuBase_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BFCA89 & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, value);
    byte_4BFCA89 = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v6 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v8->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C6961C(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2E648(v8);
  CharaGraphListMenuBase__get_ModeKind(v11, v12);
}


void __fastcall CharaGraphListMenuBase__set_ModeKind(
        CharaGraphListMenuBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_1C2E388(this, value);
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = value;
}


void __fastcall CharaGraphListMenuBase__set_SortOwner(
        CharaGraphListMenuBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SortOwner_k__BackingField = value;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields._SortOwner_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_CallbackFunc___ctor(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A6F570;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A6F528;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CharaGraphListMenuBase_CallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4BFCAAC & 1) == 0 )
  {
    sub_1C2E12C(&CharaGraphListMenuBase_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4BFCAAC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenuBase_ResultKind_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_CallbackFunc__EndInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
}


void __fastcall CharaGraphListMenuBase_CallbackFunc__Invoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_RequestCallbackFunc___ctor(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C2E1EC(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C2E3A4(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2E254(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A6F50C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)&loc_1A6F4C4;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CharaGraphListMenuBase_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4BFCAAB & 1) == 0 )
  {
    sub_1C2E12C(&bool_TypeInfo, isRequest);
    byte_4BFCAAB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2E0E0(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2E0E4(result, 0LL, method);
}


void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass38_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass38_0___Exit_g__OnEnd_0(
        CharaGraphListMenuBase___c__DisplayClass38_0_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListMenuBase_o *_4__this; // x0
  PartyOrganizationUtility_o *p_CallbackOnExit; // x0
  struct CharaGraphListMenuBase_CallbackFunc_o *v11; // x20
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(0LL, isRequest);
  CallbackOnExit = _4__this->fields.CallbackOnExit;
  p_CallbackOnExit = (PartyOrganizationUtility_o *)&_4__this->fields.CallbackOnExit;
  v11 = CallbackOnExit;
  if ( CallbackOnExit )
  {
    p_CallbackOnExit->klass = 0LL;
    sub_1C2E0D0(p_CallbackOnExit, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      (unsigned int)this->fields.result,
      *(_QWORD *)&v11->fields.extra_arg);
  }
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass53_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase___c__DisplayClass53_0___OnServantManageTabSelected_b__0(
        CharaGraphListMenuBase___c__DisplayClass53_0_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct CharaGraphListMenuBase_o *_4__this; // x0

  if ( isRequest )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_6;
    CharaGraphListMenuBase__ModifyList(_4__this, 0, method);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_6:
    sub_1C2E388(_4__this, isRequest);
  CharaGraphListMenuBase__SetTabKind(_4__this, _4__this->fields.tabKind, this->fields.modeKindToUpdate, 0, v3);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass66_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass66_0___OnEndSelectServantStatus_b__0(
        CharaGraphListMenuBase___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2E388(0LL, method);
  ((void (__fastcall *)(struct CharaGraphListMenuBase_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._15_OnCloseServantStatusWithQuestId.method)(
    _4__this,
    (unsigned int)this->fields.questId,
    _4__this->klass->vtable._16_OnCloseServantStatusWithoutQuestId.methodPtr);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass72_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass72_0___StatusRequest_g__EndStatusSync_0(
        CharaGraphListMenuBase___c__DisplayClass72_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  struct CharaGraphListMenuBase_RequestCallbackFunc_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      1LL,
      *(_QWORD *)&callback->fields.extra_arg);
}
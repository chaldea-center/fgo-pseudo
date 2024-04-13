void __fastcall CharaGraphListMenuBase___ctor(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9689 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphDefine_CharaGraphRootInfo_TypeInfo, v5, v6, v7);
    byte_42E9689 = 1;
  }
  v8 = (Il2CppObject *)sub_B5D694(CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
  System_Object___ctor(v8, 0LL);
  this->fields._RootInfo_k__BackingField = (struct CharaGraphDefine_CharaGraphRootInfo_o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._RootInfo_k__BackingField,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
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
    sub_B5D69C(IsActiveBgTxt, v5);
  UnityEngine_GameObject__SetActive(bgTxtObject, IsActiveBgTxt, 0LL);
}


void __fastcall CharaGraphListMenuBase__CastItem(
        CharaGraphListViewItemBase_o *item,
        CharaGraphServantListViewItem_o **svtItem,
        CharaGraphCommandCodeListViewItem_o **commandCodeItem,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 v14; // x11
  CharaGraphListViewItemBase_o *v15; // x9
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x1
  __int64 v23; // x10
  System_Int32_array **v24; // x1
  __int64 v25; // x11
  CharaGraphListViewItemBase_o *v26; // x9
  __int64 v27; // x10

  if ( (byte_42E9688 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphCommandCodeListViewItem_TypeInfo, (_DWORD)svtItem, (_DWORD)commandCodeItem, method);
    sub_B5D5C4(&CharaGraphServantListViewItem_TypeInfo, v11, v12, v13);
    byte_42E9688 = 1;
  }
  if ( item )
  {
    v14 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v14 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v14 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v15 = item;
      else
        v15 = 0LL;
    }
    else
    {
      v15 = 0LL;
    }
    *svtItem = (CharaGraphServantListViewItem_o *)v15;
    v23 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v23 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v24 = (System_Int32_array **)item;
      else
        v24 = 0LL;
    }
    else
    {
      v24 = 0LL;
    }
    sub_B5D560(
      (BattleServantConfConponent_o *)svtItem,
      v24,
      (System_String_array **)commandCodeItem,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v25 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v25 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v25 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v26 = item;
      else
        v26 = 0LL;
    }
    else
    {
      v26 = 0LL;
    }
    *commandCodeItem = (CharaGraphCommandCodeListViewItem_o *)v26;
    v27 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v27 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v27 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v22 = (System_Int32_array **)item;
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
  }
  else
  {
    *svtItem = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)svtItem,
      0LL,
      (System_String_array **)commandCodeItem,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v22 = 0LL;
    *commandCodeItem = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)commandCodeItem, v22, v16, v17, v18, v19, v20, v21);
}


void __fastcall CharaGraphListMenuBase__Close(
        CharaGraphListMenuBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Action_o *v17; // x20

  if ( (byte_42E966B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_EndClose__, v10, v11, v12);
    byte_42E966B = 1;
  }
  this->fields.callbackOnClose = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackOnClose,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 4;
  if ( !RootInfo_k__BackingField )
    sub_B5D69C(v13, v14);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v15);
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
}


CharaGraphListViewPatternBase_o *__fastcall CharaGraphListMenuBase__CreateListViewPattern(
        CharaGraphListMenuBase_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  _QWORD *v13; // x8
  __int64 v14; // x22
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  System_Int32_array ***p_CommandCodeSortManageUnit_k__BackingField; // x8
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_Int32_array **RootInfo_k__BackingField; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_42E966E & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewPatternCommandCode_TypeInfo, kind, (_DWORD)setupInfo, method);
    sub_B5D5C4(&CharaGraphListViewPatternServantEquip_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&CharaGraphListViewPatternServant_TypeInfo, v10, v11, v12);
    byte_42E966E = 1;
  }
  if ( kind == 2 )
  {
    v13 = &CharaGraphListViewPatternCommandCode_TypeInfo;
  }
  else if ( kind == 1 )
  {
    v13 = &CharaGraphListViewPatternServantEquip_TypeInfo;
  }
  else
  {
    v13 = &CharaGraphListViewPatternServant_TypeInfo;
  }
  v14 = sub_B5D694(*v13);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (kind == 2
      ? (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields._CommandCodeSortManageUnit_k__BackingField)
      : kind != 1
      ? (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields)
      : (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields._ServantEquipSortManageUnit_k__BackingField),
        v24 = *p_CommandCodeSortManageUnit_k__BackingField,
        SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)*p_CommandCodeSortManageUnit_k__BackingField,
        sub_B5D560(
          (BattleServantConfConponent_o *)&SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField,
          v24,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        !v14) )
  {
    sub_B5D69C(SortOwner_k__BackingField, v15);
  }
  v31 = (System_Int32_array **)this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v14 + 16) = v31;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 16), v31, v25, v26, v27, v28, v29, v30);
  RootInfo_k__BackingField = (System_Int32_array **)this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v14 + 24) = RootInfo_k__BackingField;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 24), RootInfo_k__BackingField, v33, v34, v35, v36, v37, v38);
  *(_QWORD *)(v14 + 32) = setupInfo;
  sub_B5D560((BattleServantConfConponent_o *)(v14 + 32), (System_Int32_array **)setupInfo, v39, v40, v41, v42, v43, v44);
  return (CharaGraphListViewPatternBase_o *)v14;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CharaGraphListMenuBase__DisplayPushButton(
        CharaGraphListMenuBase_o *this,
        bool value,
        int32_t iModeKind,
        bool isInit,
        const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x23
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  CharaGraphManageButtonGroup_o *v12; // x0

  if ( (byte_42E9684 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, iModeKind, isInit);
    byte_42E9684 = 1;
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0LL, 0LL) )
    return iModeKind;
  v12 = this->fields.charaGraphManageButtonGroup;
  if ( !v12 )
    sub_B5D69C(0LL, v10);
  CharaGraphManageButtonGroup__SetPushButtonActive(v12, value, isInit, v11);
  if ( value )
    return iModeKind;
  if ( iModeKind == 4 )
    return 0;
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_callbackOnClose; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *callbackOnClose; // t1

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._5_Init.method)(
    this,
    0LL,
    this->klass->vtable._6_SetupButtonCallback.methodPtr);
  callbackOnClose = this->fields.callbackOnClose;
  p_callbackOnClose = (BattleServantConfConponent_o *)&this->fields.callbackOnClose;
  v10 = callbackOnClose;
  if ( callbackOnClose )
  {
    p_callbackOnClose->klass = 0LL;
    sub_B5D560(p_callbackOnClose, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__EndOpen(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  this->fields.state = 2;
  if ( !RootInfo_k__BackingField )
    sub_B5D69C(this, method);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v2);
}


void __fastcall CharaGraphListMenuBase__Exit(CharaGraphListMenuBase_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CharaGraphListMenuBase_RequestCallbackFunc_o *v21; // x20
  const MethodInfo *v22; // x2

  if ( (byte_42E966C & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__, v6, v7, v8);
    sub_B5D5C4(&CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo, v9, v10, v11);
    byte_42E966C = 1;
  }
  v12 = sub_B5D694(CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass38_0___ctor((CharaGraphListMenuBase___c__DisplayClass38_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_DWORD *)(v12 + 24) = result;
  v21 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v21,
    (Il2CppObject *)v12,
    Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__,
    0LL);
  CharaGraphListMenuBase__StatusRequest(this, v21, v22);
}


System_String_o *__fastcall CharaGraphListMenuBase__GetLocalizationKeyForModeKindMain(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9671 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_11880/*"SERVANT_LIST_EXPLANATION_STATUS"*/, (_DWORD)method, v2, v3);
    byte_42E9671 = 1;
  }
  return (System_String_o *)StringLiteral_11880/*"SERVANT_LIST_EXPLANATION_STATUS"*/;
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
    sub_B5D69C(listViewManager, *(_QWORD *)&defaultTabKind);
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
    sub_B5D69C(listViewManager, isNeedSort);
  }
  v6->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v6, 0, 0LL);
  CharaGraphListViewManager__RequestListObject(v6, 3, v7);
}


void __fastcall CharaGraphListMenuBase__OnClickBonusFilterKind(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *listViewManager; // x21
  System_Action_o *v9; // x20

  if ( (byte_42E967B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, v5, v6, v7);
    byte_42E967B = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickBonusFilterKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v9, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CharaGraphListViewManager_o *listViewManager; // x20
  System_Action_bool__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_42E9678 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__, v8, v9, v10);
    byte_42E9678 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    v12 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v12,
      (Il2CppObject *)this,
      Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    if ( !listViewManager )
      sub_B5D69C(v13, v14);
    CharaGraphListViewManager__OnClickFilterKind(listViewManager, v12, v15);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickScaleChange(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  CharaGraphManageButtonGroup_o *v13; // x19
  const MethodInfo *v14; // x2

  if ( (byte_42E9676 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickScaleChange__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E9676 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_CharaGraphListMenuBase_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickScaleChange__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnClickScaleChange__);
    v9 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    if ( listViewManager )
    {
      CharaGraphListViewManager__ChangeIconScale(listViewManager, v10);
      charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0LL, 0LL) )
        return;
      listViewManager = this->fields.listViewManager;
      if ( listViewManager )
      {
        v13 = this->fields.charaGraphManageButtonGroup;
        listViewManager = (CharaGraphListViewManager_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                           listViewManager,
                                                           v10);
        if ( v13 )
        {
          CharaGraphManageButtonGroup__SetScaleButtonSprite(v13, (System_String_o *)listViewManager, v14);
          return;
        }
      }
    }
    sub_B5D69C(listViewManager, v10);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickSortAscendingOrder(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *listViewManager; // x21
  System_Action_o *v9; // x20

  if ( (byte_42E967A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, v5, v6, v7);
    byte_42E967A = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickSortKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *listViewManager; // x21
  System_Action_o *v9; // x20

  if ( (byte_42E9679 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListViewManager_OnClickSortKind__, v5, v6, v7);
    byte_42E9679 = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v9, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickTab(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CharaGraphListMenuBase_o *v5; // x20
  struct CharaGraphListViewManager_o *listViewManager; // x8
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x2
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  v5 = this;
  if ( (byte_42E9675 & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_B5D5C4(
                                         &Method_CharaGraphListMenuBase_OnClickTab__,
                                         (_DWORD)finishCallback,
                                         (_DWORD)method,
                                         v3);
    byte_42E9675 = 1;
  }
  if ( v5->fields.state == 2 )
  {
    listViewManager = v5->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_16;
    ListViewPattern_k__BackingField = listViewManager->fields._ListViewPattern_k__BackingField;
    if ( ListViewPattern_k__BackingField )
    {
      SortOwner_k__BackingField = ListViewPattern_k__BackingField->fields._SortOwner_k__BackingField;
      if ( SortOwner_k__BackingField )
        CharaGraphSortOwnerBase__Save(SortOwner_k__BackingField, (const MethodInfo *)finishCallback);
    }
    v9 = Method_CharaGraphListMenuBase_OnClickTab__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickTab__ + 75) & 2) != 0 )
      v9 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnClickTab__);
    v10 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v9, v9[3]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    RootInfo_k__BackingField = v5->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_16:
      sub_B5D69C(this, finishCallback);
    if ( (RootInfo_k__BackingField->fields._ModeKind_k__BackingField & 0xFFFFFFFE) == 2 )
    {
      CharaGraphListMenuBase__StatusRequest(v5, finishCallback, v11);
    }
    else if ( finishCallback )
    {
      CharaGraphListMenuBase_RequestCallbackFunc__Invoke(finishCallback, 0, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CharaGraphListMenuBase_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E9674 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E9674 = 1;
  }
  v8 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v8, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CharaGraphListMenuBase_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E9672 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E9672 = 1;
  }
  v8 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v8, v9);
}


void __fastcall CharaGraphListMenuBase__OnClickTabServantEquip(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CharaGraphListMenuBase_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E9673 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    byte_42E9673 = 1;
  }
  v8 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v8, v9);
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
    sub_B5D69C(0LL, method);
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
  char v9; // w1
  char v10; // w2
  __int64 v11; // x3
  char v12; // w1
  char v13; // w2
  __int64 v14; // x3
  char v15; // w1
  char v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v28; // x2
  int v29; // w22
  CommonUI_o *Instance; // x20
  System_Action_o *v31; // x0
  bool v32; // cc
  System_Action_o *v33; // x22
  Il2CppObject *v34; // x1
  void *image; // x2

  if ( (byte_42E967E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, isNeedSort, *(_QWORD *)&questId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__, v12, v13, v14);
    sub_B5D5C4(&CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo, v15, v16, v17);
    byte_42E967E = 1;
  }
  v18 = sub_B5D694(CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass66_0___ctor((CharaGraphListMenuBase___c__DisplayClass66_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_DWORD *)(v18 + 24) = questId;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_13;
  scrollView = (UnityEngine_Behaviour_o *)listViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
  if ( isDecide )
    CharaGraphListMenuBase__ModifyList(this, isNeedSort, v28);
  v29 = *(_DWORD *)(v18 + 24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v32 = v29 < 1;
  v33 = v31;
  if ( v32 )
  {
    v34 = (Il2CppObject *)this;
    image = this->klass[1]._1.image;
  }
  else
  {
    v34 = (Il2CppObject *)v18;
    LODWORD(image) = Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__;
  }
  System_Action___ctor(v31, v34, (intptr_t)image, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B5D69C(scrollView, v20);
  CommonUI__CloseServantStatusDialog(Instance, v33, 0LL);
}


bool __fastcall CharaGraphListMenuBase__OnLongTapServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B5D69C(this, item);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
    return 0;
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))this->klass->vtable._11_OnSelectServantAtKindStatus.method)(
    this,
    item,
    this->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr);
  return 1;
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
      sub_B5D69C(0LL, iKind);
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
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42E9680 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__, (_DWORD)item, (_DWORD)method, v3);
    byte_42E9680 = 1;
  }
  v6 = Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
  v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  if ( !item )
    sub_B5D69C(v8, v9);
  item->fields._IsSwapChoice_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v10);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindLock(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42E967F & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__, (_DWORD)item, (_DWORD)method, v3);
    byte_42E967F = 1;
  }
  v6 = Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
  v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 11, 0LL);
  if ( !item )
    sub_B5D69C(v8, v9);
  item->fields._IsSwapLock_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v10);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x3
  __int64 v24; // x0
  __int64 v25; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  System_Action_bool__o *v27; // x21
  NetworkManager_ResultCallbackFunc_o *v28; // x22
  const MethodInfo *v29; // x3
  CharaGraphCommandCodeListViewItem_o *v30; // [xsp+0h] [xbp-30h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9681 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__, v9, v10, v11);
    sub_B5D5C4(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__, v12, v13, v14);
    sub_B5D5C4(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
    byte_42E9681 = 1;
  }
  v30 = 0LL;
  svtItem = 0LL;
  v21 = Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__ + 75) & 2) != 0 )
    v21 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
  v22 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v21, v21[3]);
  OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v30, v23);
  if ( !svtItem )
    sub_B5D69C(v24, v25);
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  v27 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v27,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  v28 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v28,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__,
    0LL);
  CharaGraphUtil__PushRequestWithConfirmDialog(UserServantEntity_k__BackingField, v27, v28, v29);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindStatus(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CharaGraphListMenuBase_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v16; // x3
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  int32_t tabKind; // w22
  CommonUI_o *v20; // x20
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v22; // x22
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v24; // x22
  ServantStatusDialog_ResultDelegate_o *v25; // x22
  CharaGraphCommandCodeListViewItem_o *v26; // [xsp+0h] [xbp-30h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42E967D & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__, (_DWORD)item, (_DWORD)method, v3);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantStatusDialog_ResultDelegate_TypeInfo, v9, v10, v11);
    this = (CharaGraphListMenuBase_o *)sub_B5D5C4(
                                         &Method_SingletonMonoBehaviour_CommonUI__get_Instance__,
                                         v12,
                                         v13,
                                         v14);
    byte_42E967D = 1;
  }
  v26 = 0LL;
  svtItem = 0LL;
  listViewManager = v5->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_18;
  this = (CharaGraphListMenuBase_o *)listViewManager->fields.scrollView;
  if ( !this )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v26, v16);
  v17 = Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__ + 75) & 2) != 0 )
    v17 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
  v18 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v17, v17[3]);
  OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
  v5->fields.state = 6;
  tabKind = v5->fields.tabKind;
  this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v20 = (CommonUI_o *)this;
  if ( tabKind == 2 )
  {
    if ( v26 )
    {
      UserCommandCodeEntity_k__BackingField = v26->fields._UserCommandCodeEntity_k__BackingField;
      v22 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v22,
        (Il2CppObject *)v5,
        (intptr_t)v5->klass->vtable._14_OnEndSelectServantStatus.methodPtr,
        0LL);
      if ( v20 )
      {
        CommonUI__OpenServantStatusDialog_18215196(v20, 0, UserCommandCodeEntity_k__BackingField, v22, 0LL, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B5D69C(this, item);
  }
  if ( !svtItem )
    goto LABEL_18;
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  if ( tabKind == 1 )
  {
    v24 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v24,
      (Il2CppObject *)v5,
      (intptr_t)v5->klass->vtable._13_OnEndSelectCommandCodeStatus.methodPtr,
      0LL);
    if ( !v20 )
      goto LABEL_18;
    CommonUI__OpenServantStatusDialog_18212884(v20, 0, UserServantEntity_k__BackingField, v24, 0LL);
  }
  else
  {
    v25 = (ServantStatusDialog_ResultDelegate_o *)sub_B5D694(ServantStatusDialog_ResultDelegate_TypeInfo);
    ServantStatusDialog_ResultDelegate___ctor(
      v25,
      (Il2CppObject *)v5,
      (intptr_t)v5->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr,
      0LL);
    if ( !v20 )
      goto LABEL_18;
    CommonUI__OpenServantStatusDialog_18213380(v20, 0, UserServantEntity_k__BackingField, v25, 0, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__OnSelectServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CharaGraphListMenuBase_o *v5; // x19
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  const MethodInfo *v9; // x2
  Il2CppMethodPointer methodPtr; // x2
  const MethodInfo *v11; // x3

  v5 = this;
  if ( (byte_42E967C & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_B5D5C4(
                                         &Method_CharaGraphListMenuBase_OnSelectServantLocal__,
                                         (_DWORD)item,
                                         (_DWORD)method,
                                         v3);
    byte_42E967C = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsEnabled_k__BackingField )
  {
LABEL_8:
    v7 = Method_CharaGraphListMenuBase_OnSelectServantLocal__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantLocal__ + 75) & 2) != 0 )
      v7 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    v8 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v7, v7[3]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0LL);
    CharaGraphListMenuBase__ToInputState(v5, 0, v9);
    return;
  }
  RootInfo_k__BackingField = v5->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_17:
    sub_B5D69C(this, item);
  switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
  {
    case 0:
      if ( (((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))item->klass->vtable._7_get_IsCanNotSelect.method)(
              item,
              item->klass->vtable._8_get_SortPriority.methodPtr,
              method) & 1) != 0 )
        goto LABEL_8;
      v11 = v5->klass->vtable._10_OnSelectServantAtKindMain.method;
      methodPtr = v5->klass->vtable._11_OnSelectServantAtKindStatus.methodPtr;
      goto LABEL_16;
    case 1:
      v11 = v5->klass->vtable._11_OnSelectServantAtKindStatus.method;
      methodPtr = v5->klass->vtable._12_OnEndSelectServantEquipStatus.methodPtr;
LABEL_16:
      ((void (__fastcall *)(CharaGraphListMenuBase_o *, CharaGraphListViewItemBase_o *, Il2CppMethodPointer))v11)(
        v5,
        item,
        methodPtr);
      break;
    case 2:
      CharaGraphListMenuBase__OnSelectServantAtKindLock(v5, item, method);
      break;
    case 3:
      CharaGraphListMenuBase__OnSelectServantAtKindChoice(v5, item, method);
      break;
    case 4:
      CharaGraphListMenuBase__OnSelectServantAtKindPush(v5, item, method);
      break;
    default:
      return;
  }
}


void __fastcall CharaGraphListMenuBase__OnServantManageTabSelected(
        CharaGraphListMenuBase_o *this,
        int32_t modeKindToUpdate,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v27; // x21
  const MethodInfo *v28; // x2

  if ( (byte_42E9677 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnServantManageTabSelected__, modeKindToUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__, v9, v10, v11);
    sub_B5D5C4(&CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo, v12, v13, v14);
    byte_42E9677 = 1;
  }
  v15 = sub_B5D694(CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass53_0___ctor((CharaGraphListMenuBase___c__DisplayClass53_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_13;
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v15 + 24) = modeKindToUpdate;
  if ( this->fields.state != 2 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_13:
    sub_B5D69C(v16, v17);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != modeKindToUpdate )
  {
    v25 = Method_CharaGraphListMenuBase_OnServantManageTabSelected__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnServantManageTabSelected__ + 75) & 2) != 0 )
      v25 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    v26 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v25, v25[3]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0LL);
    if ( *(_DWORD *)(v15 + 24) == 4 )
      EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v27 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B5D694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenuBase_RequestCallbackFunc___ctor(
      v27,
      (Il2CppObject *)v15,
      Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__,
      0LL);
    CharaGraphListMenuBase__StatusRequest(this, v27, v28);
  }
}


void __fastcall CharaGraphListMenuBase__Open(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  CharaGraphSortOwnerAllKind_o *v12; // x22
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v33; // x8
  System_Action_o *v34; // x20

  if ( (byte_42E9669 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_EndOpen__, v6, v7, v8);
    sub_B5D5C4(&CharaGraphSortOwnerNoSave_TypeInfo, v9, v10, v11);
    byte_42E9669 = 1;
  }
  if ( !this->fields._SortOwner_k__BackingField )
  {
    v12 = (CharaGraphSortOwnerAllKind_o *)sub_B5D694(CharaGraphSortOwnerNoSave_TypeInfo);
    CharaGraphSortOwnerAllKind___ctor(v12, v13);
    this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v12;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._SortOwner_k__BackingField,
      (System_Int32_array **)v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._6_SetupButtonCallback.method)(
    this,
    this->klass->vtable._7_CreateListViewPattern.methodPtr,
    method);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.CallbackOnExit = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.CallbackOnExit,
      (System_Int32_array **)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( RootInfo_k__BackingField )
    {
      CharaGraphListMenuBase__SetTabKind(
        this,
        this->fields.tabKind,
        RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
        0,
        v29);
      CharaGraphListMenuBase__EndOpen(this, v31);
      return;
    }
LABEL_13:
    sub_B5D69C(gameObject, v28);
  }
  if ( !state )
  {
    this->fields.CallbackOnExit = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.CallbackOnExit,
      (System_Int32_array **)callback,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v33 = this->fields._RootInfo_k__BackingField;
    if ( !v33 )
      goto LABEL_13;
    CharaGraphListMenuBase__SetTabKind(this, this->fields.tabKind, v33->fields._ModeKind_k__BackingField, 1, v32);
    this->fields.state = 1;
    v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v34, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetFilterButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_42E9686 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9686 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v6 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_B5D69C(v6, v7);
    CharaGraphSortButtonGroup__SetFilterButtonImage(v6, listViewManager->fields.sort, v8);
  }
}


void __fastcall CharaGraphListMenuBase__SetSortButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_42E9687 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9687 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v6 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_B5D69C(v6, v7);
    CharaGraphSortButtonGroup__SetSortButtonImage(
      v6,
      listViewManager->fields.sort,
      listViewManager->fields._BonusEventIds_k__BackingField,
      listViewManager->fields._ServantFilterIds_k__BackingField,
      v8);
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
  int32_t v6; // w20
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x4
  int v25; // w8
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  bool v27; // w23
  bool v28; // w20
  struct CharaGraphDefine_CharaGraphRootInfo_o *v29; // x10
  int32_t ModeKind_k__BackingField; // w9
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v32; // x21
  EventUpValSetupInfo_o *v33; // x22
  struct CharaGraphListViewManager_o *listViewManager; // x21
  const MethodInfo *v35; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x21
  const MethodInfo *v37; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *v38; // x8
  struct CharaGraphListViewManager_o *v39; // x20
  const MethodInfo *v40; // x2
  ListViewManager_o *v41; // x0
  const MethodInfo *v42; // x2
  UnityEngine_Object_o *v43; // x20
  CharaGraphManageButtonGroup_o *v44; // x19
  const MethodInfo *v45; // x2

  v6 = iModeKind;
  if ( (byte_42E966F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, iTabKind, iModeKind, isInit);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&EventUpValSetupInfo_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    byte_42E966F = 1;
  }
  if ( !this->fields.isInitTab )
  {
    this->fields.isInitTab = 1;
    CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, 1, (const MethodInfo *)isInit);
    goto LABEL_8;
  }
  CharaGraphListMenuBase__SetupServantKindTabButtonGroup(this, iTabKind, isInit, (const MethodInfo *)isInit);
  if ( isInit )
  {
LABEL_8:
    Master_WarQuestSelectionMaster = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(
                                                        this,
                                                        iTabKind == 0,
                                                        v6,
                                                        1,
                                                        v24);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    this->fields.tabKind = iTabKind;
    if ( !RootInfo_k__BackingField )
      goto LABEL_42;
    v27 = 0;
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField = (int)Master_WarQuestSelectionMaster;
    v28 = 1;
LABEL_14:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   0,
                                                                                   0LL);
    v32 = System_Linq_Enumerable__ToArray_int_(
            EventValUpEventIdHash,
            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    v33 = (EventUpValSetupInfo_o *)sub_B5D694(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_24751852(v33, v32, 0, 0, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    Master_WarQuestSelectionMaster = (EventMaster_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, EventUpValSetupInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_CreateListViewPattern.method)(
                                                        this,
                                                        (unsigned int)this->fields.tabKind,
                                                        v33,
                                                        this->klass->vtable._8_GetLocalizationKeyForModeKindMain.methodPtr);
    if ( !listViewManager )
      goto LABEL_42;
    ((void (__fastcall *)(struct CharaGraphListViewManager_o *, EventMaster_o *, void *))listViewManager->klass->vtable._13_CreateList.method)(
      listViewManager,
      Master_WarQuestSelectionMaster,
      listViewManager->klass[1]._1.image);
    CharaGraphListMenuBase__SetupSortUi(this, v35);
    if ( v27 )
      goto LABEL_28;
    goto LABEL_20;
  }
  if ( this->fields.tabKind == iTabKind )
  {
    v25 = 0;
  }
  else
  {
    Master_WarQuestSelectionMaster = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(
                                                        this,
                                                        iTabKind == 0,
                                                        v6,
                                                        0,
                                                        v24);
    v6 = (int)Master_WarQuestSelectionMaster;
    v25 = 1;
  }
  v29 = this->fields._RootInfo_k__BackingField;
  if ( !v29 )
    goto LABEL_42;
  ModeKind_k__BackingField = v29->fields._ModeKind_k__BackingField;
  this->fields.tabKind = iTabKind;
  v29->fields._ModeKind_k__BackingField = v6;
  v27 = v6 == ModeKind_k__BackingField;
  if ( v25 )
  {
    v28 = 0;
    goto LABEL_14;
  }
  if ( v6 == ModeKind_k__BackingField )
    goto LABEL_28;
  v28 = 0;
LABEL_20:
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Master_WarQuestSelectionMaster = (EventMaster_o *)UnityEngine_Object__op_Inequality(
                                                      charaGraphManageButtonGroup,
                                                      0LL,
                                                      0LL);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    v38 = this->fields._RootInfo_k__BackingField;
    if ( !v38 )
      goto LABEL_42;
    Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.charaGraphManageButtonGroup;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    CharaGraphManageButtonGroup__UpdateDisplay(
      (CharaGraphManageButtonGroup_o *)Master_WarQuestSelectionMaster,
      v38->fields._ModeKind_k__BackingField,
      v28,
      v37);
  }
  CharaGraphListMenuBase__SetupExplanationLabel(this, v22);
LABEL_28:
  v39 = this->fields.listViewManager;
  if ( !v39 )
    goto LABEL_42;
  if ( this->fields.state == 2 )
  {
    CharaGraphListViewManager__ModifyList(this->fields.listViewManager, 0, 0, v23);
    CharaGraphListMenuBase__ToInputState(this, 1, v40);
  }
  else
  {
    v41 = (ListViewManager_o *)this->fields.listViewManager;
    v39->fields.initMode = 1;
    ListViewManager__set_IsInput(v41, 0, 0LL);
    CharaGraphListViewManager__RequestListObject(v39, 1, v42);
  }
  v43 = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v43, 0LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.listViewManager;
    if ( Master_WarQuestSelectionMaster )
    {
      v44 = this->fields.charaGraphManageButtonGroup;
      Master_WarQuestSelectionMaster = (EventMaster_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                          (CharaGraphListViewManager_o *)Master_WarQuestSelectionMaster,
                                                          v22);
      if ( v44 )
      {
        CharaGraphManageButtonGroup__SetScaleButtonSprite(v44, (System_String_o *)Master_WarQuestSelectionMaster, v45);
        return;
      }
    }
LABEL_42:
    sub_B5D69C(Master_WarQuestSelectionMaster, v22);
  }
}


void __fastcall CharaGraphListMenuBase__SetupButtonCallback(CharaGraphListMenuBase_o *this, const MethodInfo *method)
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct CharaGraphListViewManager_o *listViewManager; // x21
  System_Action_o *v48; // x20
  __int64 v49; // x0
  __int64 v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x20
  struct CharaGraphKindTabButtonGroup_o *v58; // x20
  System_Action_o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct CharaGraphKindTabButtonGroup_o *v66; // x20
  System_Action_o *v67; // x21
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct CharaGraphKindTabButtonGroup_o *v74; // x20
  System_Action_o *v75; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  struct CharaGraphManageButtonGroup_o *v83; // x20
  System_Action_o *v84; // x21
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  struct CharaGraphManageButtonGroup_o *v91; // x20
  System_Action_o *v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct CharaGraphManageButtonGroup_o *v99; // x20
  System_Action_o *v100; // x21
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct CharaGraphManageButtonGroup_o *v107; // x20
  System_Action_o *v108; // x21
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  struct CharaGraphManageButtonGroup_o *v115; // x20
  System_Action_o *v116; // x21
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  struct CharaGraphSortButtonGroup_o *v124; // x20
  System_Action_o *v125; // x21
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  struct CharaGraphSortButtonGroup_o *v132; // x20
  System_Action_o *v133; // x21
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  struct CharaGraphSortButtonGroup_o *v140; // x20
  System_Action_o *v141; // x21
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  struct CharaGraphSortButtonGroup_o *v148; // x20
  System_Action_o *v149; // x21
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7

  if ( (byte_42E966A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, v5, v6, v7);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickFilterKind__, v8, v9, v10);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickScaleChange__, v11, v12, v13);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, v14, v15, v16);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickSortKind__, v17, v18, v19);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickTabChoice__, v20, v21, v22);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickTabCommandCode__, v23, v24, v25);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickTabLock__, v26, v27, v28);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickTabMain__, v29, v30, v31);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickTabPush__, v32, v33, v34);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickTabServantEquip__, v35, v36, v37);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnClickTabServant__, v38, v39, v40);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_SetSortButtonImage__, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v44, v45, v46);
    byte_42E966A = 1;
  }
  listViewManager = this->fields.listViewManager;
  v48 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_CharaGraphListMenuBase_SetSortButtonImage__, 0LL);
  if ( !listViewManager )
    goto LABEL_32;
  listViewManager->fields._OnSetSortButtonImage_k__BackingField = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&listViewManager->fields._OnSetSortButtonImage_k__BackingField,
    (System_Int32_array **)v48,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v58 = this->fields.charaGraphKindTabButtonGroup;
    v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v59, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServant__, 0LL);
    if ( !v58 )
      goto LABEL_32;
    v58->fields._OnClickTabServant_k__BackingField = v59;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v58->fields._OnClickTabServant_k__BackingField,
      (System_Int32_array **)v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v66 = this->fields.charaGraphKindTabButtonGroup;
    v67 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v67, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServantEquip__, 0LL);
    if ( !v66 )
      goto LABEL_32;
    v66->fields._OnClickTabServantEquip_k__BackingField = v67;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v66->fields._OnClickTabServantEquip_k__BackingField,
      (System_Int32_array **)v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    v74 = this->fields.charaGraphKindTabButtonGroup;
    v75 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v75, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabCommandCode__, 0LL);
    if ( !v74 )
      goto LABEL_32;
    v74->fields._OnClickTabCommandCode_k__BackingField = v75;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v74->fields._OnClickTabCommandCode_k__BackingField,
      (System_Int32_array **)v75,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0LL, 0LL) )
  {
    v83 = this->fields.charaGraphManageButtonGroup;
    v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v84, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabMain__, 0LL);
    if ( !v83 )
      goto LABEL_32;
    v83->fields._OnClickTabMain_k__BackingField = v84;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v83->fields._OnClickTabMain_k__BackingField,
      (System_Int32_array **)v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    v91 = this->fields.charaGraphManageButtonGroup;
    v92 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v92, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabLock__, 0LL);
    if ( !v91 )
      goto LABEL_32;
    v91->fields._OnClickTabLock_k__BackingField = v92;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v91->fields._OnClickTabLock_k__BackingField,
      (System_Int32_array **)v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    v99 = this->fields.charaGraphManageButtonGroup;
    v100 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v100, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabChoice__, 0LL);
    if ( !v99 )
      goto LABEL_32;
    v99->fields._OnClickTabChoice_k__BackingField = v100;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v99->fields._OnClickTabChoice_k__BackingField,
      (System_Int32_array **)v100,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
    v107 = this->fields.charaGraphManageButtonGroup;
    v108 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v108, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabPush__, 0LL);
    if ( !v107 )
      goto LABEL_32;
    v107->fields._OnClickTabPush_k__BackingField = v108;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v107->fields._OnClickTabPush_k__BackingField,
      (System_Int32_array **)v108,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
    v115 = this->fields.charaGraphManageButtonGroup;
    v116 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v116, (Il2CppObject *)this, (intptr_t)Method_CharaGraphListMenuBase_OnClickScaleChange__, 0LL);
    if ( !v115 )
      goto LABEL_32;
    v115->fields._OnClickScaleChange_k__BackingField = v116;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v115->fields._OnClickScaleChange_k__BackingField,
      (System_Int32_array **)v116,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    v124 = this->fields.charaGraphSortButtonGroup;
    v125 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v125, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickFilterKind__, 0LL);
    if ( v124 )
    {
      v124->fields._OnClickFilterKind_k__BackingField = v125;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v124->fields._OnClickFilterKind_k__BackingField,
        (System_Int32_array **)v125,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      v132 = this->fields.charaGraphSortButtonGroup;
      v133 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v133, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortKind__, 0LL);
      if ( v132 )
      {
        v132->fields._OnClickSortKind_k__BackingField = v133;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v132->fields._OnClickSortKind_k__BackingField,
          (System_Int32_array **)v133,
          v134,
          v135,
          v136,
          v137,
          v138,
          v139);
        v140 = this->fields.charaGraphSortButtonGroup;
        v141 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(v141, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, 0LL);
        if ( v140 )
        {
          v140->fields._OnClickSortAscendingOrder_k__BackingField = v141;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v140->fields._OnClickSortAscendingOrder_k__BackingField,
            (System_Int32_array **)v141,
            v142,
            v143,
            v144,
            v145,
            v146,
            v147);
          v148 = this->fields.charaGraphSortButtonGroup;
          v149 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v149, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, 0LL);
          if ( v148 )
          {
            v148->fields._OnClickBonusFilterKind_k__BackingField = v149;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v148->fields._OnClickBonusFilterKind_k__BackingField,
              (System_Int32_array **)v149,
              v150,
              v151,
              v152,
              v153,
              v154,
              v155);
            return;
          }
        }
      }
    }
LABEL_32:
    sub_B5D69C(v49, v50);
  }
}


void __fastcall CharaGraphListMenuBase__SetupExplanationLabel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
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
  UnityEngine_Object_o *explanationLabel; // x20
  System_String_o *v18; // x0
  __int64 v19; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_String_o *v21; // x20
  __int64 *v22; // x8
  UILabel_o *v23; // x19

  if ( (byte_42E9670 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v14, v15, v16);
    byte_42E9670 = 1;
  }
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = (System_String_o *)UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) == 0 )
  {
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_20:
      sub_B5D69C(v18, v19);
    switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
    {
      case 0:
        v21 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._8_GetLocalizationKeyForModeKindMain.method)(
                                   this,
                                   this->klass->vtable._9_OnLongTapServantLocal.methodPtr);
        if ( !v21 )
          return;
        goto LABEL_15;
      case 2:
        v22 = &StringLiteral_11878/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_14;
      case 3:
        v22 = &StringLiteral_11877/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_14;
      case 4:
        v22 = &StringLiteral_11879/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_14:
        v21 = (System_String_o *)*v22;
        if ( !*v22 )
          return;
LABEL_15:
        v23 = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v18 = LocalizationManager__Get(v21, 0LL);
        if ( !v23 )
          goto LABEL_20;
        UILabel__set_text(v23, v18, 0LL);
        break;
      default:
        return;
    }
  }
}


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

  if ( (byte_42E966D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, iTabKind, isInit, method);
    byte_42E966D = 1;
  }
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v10 = this->fields.charaGraphKindTabButtonGroup;
    if ( !v10
      || (CharaGraphKindTabButtonGroup__SetupTabLabel(v10, iTabKind, v9),
          (v10 = this->fields.charaGraphKindTabButtonGroup) == 0LL) )
    {
      sub_B5D69C(v10, v8);
    }
    CharaGraphKindTabButtonGroup__SetupTabButtons(v10, iTabKind, isInit, v11);
  }
}


void __fastcall CharaGraphListMenuBase__SetupSortUi(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  CharaGraphSortButtonGroup_o *v9; // x0
  const MethodInfo *v10; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_42E9685 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9685 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    CharaGraphListMenuBase__SetFilterButtonImage(this, v6);
    v9 = this->fields.charaGraphSortButtonGroup;
    if ( !v9
      || (CharaGraphSortButtonGroup__SetFilterButtonState(v9, 0, 1, v8),
          (listViewManager = this->fields.listViewManager) == 0LL)
      || (v9 = this->fields.charaGraphSortButtonGroup) == 0LL )
    {
      sub_B5D69C(v9, v7);
    }
    CharaGraphSortButtonGroup__SetBonusFilterButton(v9, listViewManager->fields.sort, v10);
  }
}


void __fastcall CharaGraphListMenuBase__StatusRequest(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x22
  CharaGraphListViewManager_o *listViewManager; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CharaGraphListViewManager_o **v30; // x23
  const MethodInfo *v31; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w8
  bool v34; // w20
  bool v35; // w21
  int32_t tabKind; // w23
  NetworkManager_ResultCallbackFunc_o *v37; // x19
  System_Int64_array *unlockArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *lockArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42E9682 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__, v15, v16, v17);
    sub_B5D5C4(&CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo, v18, v19, v20);
    byte_42E9682 = 1;
  }
  lockArray = 0LL;
  unlockArray = 0LL;
  v21 = sub_B5D694(CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass72_0___ctor((CharaGraphListMenuBase___c__DisplayClass72_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_28;
  *(_QWORD *)(v21 + 16) = callback;
  v30 = (CharaGraphListViewManager_o **)(v21 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)callback, v24, v25, v26, v27, v28, v29);
  lockArray = 0LL;
  unlockArray = 0LL;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    goto LABEL_28;
  ModeKind_k__BackingField = RootInfo_k__BackingField->fields._ModeKind_k__BackingField;
  if ( ModeKind_k__BackingField == 3 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_28;
    CharaGraphListViewManager__GetSwapChoiceArray(listViewManager, &lockArray, &unlockArray, v31);
    v35 = 0;
    v34 = 1;
  }
  else if ( ModeKind_k__BackingField == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_28;
    CharaGraphListViewManager__GetSwapLockArray(listViewManager, &lockArray, &unlockArray, v31);
    v34 = 0;
    v35 = 1;
  }
  else
  {
    v34 = 0;
    v35 = 0;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)lockArray, 0LL)
    && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unlockArray, 0LL) )
  {
    listViewManager = *v30;
    if ( *v30 )
    {
      CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        (CharaGraphListMenuBase_RequestCallbackFunc_o *)listViewManager,
        0,
        0LL);
      return;
    }
LABEL_28:
    sub_B5D69C(listViewManager, v23);
  }
  tabKind = this->fields.tabKind;
  v37 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v37,
    (Il2CppObject *)v21,
    Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__,
    0LL);
  if ( tabKind == 2 )
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                       v37,
                                                       (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_28;
    CommandCodeStatusSyncRequest__beginRequest(
      (CommandCodeStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      v35,
      v34,
      0LL);
  }
  else
  {
    if ( (WORD1(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    listViewManager = (CharaGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                       v37,
                                                       (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_28;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      0,
      v35,
      v34,
      0LL);
  }
}


void __fastcall CharaGraphListMenuBase__ToInputState(
        CharaGraphListMenuBase_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct CharaGraphListViewManager_o *listViewManager; // x20
  CharaGraphListViewManager_CallbackFunc_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  MethodInfo *v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42E9683 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewManager_CallbackFunc_TypeInfo, changeMode, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListMenuBase_OnSelectServant__, v6, v7, v8);
    byte_42E9683 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v10 = (CharaGraphListViewManager_CallbackFunc_o *)sub_B5D694(CharaGraphListViewManager_CallbackFunc_TypeInfo);
  CharaGraphListViewManager_CallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase_OnSelectServant__,
    0LL);
  if ( !listViewManager )
    sub_B5D69C(v11, v12);
  if ( changeMode )
  {
    CharaGraphListViewManager__SetMode(listViewManager, 2, v10, v14);
  }
  else
  {
    listViewManager->fields.FuncOnClick = v10;
    sub_B5D560(
      (BattleServantConfConponent_o *)&listViewManager->fields.FuncOnClick,
      (System_Int32_array **)v10,
      v13,
      (System_String_array **)v14,
      v15,
      v16,
      v17,
      v18);
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
    sub_B5D69C(this, _);
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
    sub_B5D69C(v4, v5);
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
    sub_B5D69C(this, _);
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
    sub_B5D69C(0LL, result);
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
  __int64 v3; // x3
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v7; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CharaGraphListMenuBase_o *v12; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E9667 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9667 = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v7 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v9->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CallbackOnExit, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (CharaGraphListMenuBase_o *)sub_B5D990(v9);
  CharaGraphListMenuBase__remove_CallbackOnExit(v12, v13, v14);
}


int32_t __fastcall CharaGraphListMenuBase__get_ModeKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B5D69C(this, method);
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
  __int64 v3; // x3
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x20
  System_Delegate_o *v7; // x21
  struct CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CharaGraphListMenuBase_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E9668 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9668 = 1;
  }
  CallbackOnExit = this->fields.CallbackOnExit;
  p_CallbackOnExit = &this->fields.CallbackOnExit;
  v7 = (System_Delegate_o *)CallbackOnExit;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (CharaGraphListMenuBase_CallbackFunc_c *)v9->klass != CharaGraphListMenuBase_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_CallbackOnExit, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (CharaGraphListMenuBase_o *)sub_B5D990(v9);
  CharaGraphListMenuBase__get_ModeKind(v12, v13);
}


void __fastcall CharaGraphListMenuBase__set_ModeKind(
        CharaGraphListMenuBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B5D69C(this, value);
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = value;
}


void __fastcall CharaGraphListMenuBase__set_SortOwner(
        CharaGraphListMenuBase_o *this,
        CharaGraphSortOwnerBase_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SortOwner_k__BackingField = value;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._SortOwner_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall CharaGraphListMenuBase_CallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42E5E50 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListMenuBase_ResultKind_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5E50 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenuBase_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_CallbackFunc__EndInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_CallbackFunc__Invoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  CharaGraphListMenuBase_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  CharaGraphListMenuBase_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  CharaGraphListMenuBase_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (CharaGraphListMenuBase_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_RequestCallbackFunc___ctor(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall CharaGraphListMenuBase_RequestCallbackFunc__BeginInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_42E5E51 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E5E51 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CharaGraphListMenuBase_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CharaGraphListMenuBase_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CharaGraphListMenuBase_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
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
  struct CharaGraphListMenuBase_o *_4__this; // x0
  struct CharaGraphListMenuBase_CallbackFunc_o **p_CallbackOnExit; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v6; // x20
  CharaGraphListMenuBase_CallbackFunc_o *CallbackOnExit; // t1
  const MethodInfo *v8; // x2

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, isRequest);
  CallbackOnExit = _4__this->fields.CallbackOnExit;
  p_CallbackOnExit = &_4__this->fields.CallbackOnExit;
  v6 = CallbackOnExit;
  if ( CallbackOnExit )
  {
    *p_CallbackOnExit = 0LL;
    sub_B5D560(p_CallbackOnExit);
    CharaGraphListMenuBase_CallbackFunc__Invoke(v6, this->fields.result, v8);
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
  struct CharaGraphListMenuBase_o *_4__this; // x0

  if ( isRequest )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_6;
    CharaGraphListMenuBase__ModifyList(_4__this, 0, 0LL);
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
LABEL_6:
    sub_B5D69C(_4__this, isRequest);
  CharaGraphListMenuBase__SetTabKind(_4__this, _4__this->fields.tabKind, this->fields.modeKindToUpdate, 0, 0LL);
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
    sub_B5D69C(0LL, method);
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
  CharaGraphListMenuBase_RequestCallbackFunc_o *callback; // x0

  callback = this->fields.callback;
  if ( callback )
    CharaGraphListMenuBase_RequestCallbackFunc__Invoke(callback, 1, method);
}
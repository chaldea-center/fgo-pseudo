void __fastcall CharaGraphListMenuBase___ctor(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42141D3 & 1) == 0 )
  {
    sub_B0D8A4(&BaseMenu_TypeInfo, method);
    sub_B0D8A4(&CharaGraphDefine_CharaGraphRootInfo_TypeInfo, v4);
    byte_42141D3 = 1;
  }
  v5 = (Il2CppObject *)sub_B0D974(CharaGraphDefine_CharaGraphRootInfo_TypeInfo, method, v2);
  System_Object___ctor(v5, 0LL);
  this->fields._RootInfo_k__BackingField = (struct CharaGraphDefine_CharaGraphRootInfo_o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._RootInfo_k__BackingField,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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

  ((void (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._4_AssertionForSerializeField.method)(
    this,
    this->klass->vtable._5_Init.methodPtr);
  bgTxtObject = this->fields.bgTxtObject;
  IsActiveBgTxt = BgTxtManager__IsActiveBgTxt(0LL);
  if ( !bgTxtObject )
    sub_B0D97C(IsActiveBgTxt);
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
  __int64 v11; // x1
  __int64 v12; // x11
  CharaGraphListViewItemBase_o *v13; // x9
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  __int64 v21; // x10
  System_Int32_array **v22; // x1
  __int64 v23; // x11
  CharaGraphListViewItemBase_o *v24; // x9
  __int64 v25; // x10

  if ( (byte_42141D2 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphCommandCodeListViewItem_TypeInfo, svtItem);
    sub_B0D8A4(&CharaGraphServantListViewItem_TypeInfo, v11);
    byte_42141D2 = 1;
  }
  if ( item )
  {
    v12 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v12 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v12 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v13 = item;
      else
        v13 = 0LL;
    }
    else
    {
      v13 = 0LL;
    }
    *svtItem = (CharaGraphServantListViewItem_o *)v13;
    v21 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v21 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v21 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v22 = (System_Int32_array **)item;
      else
        v22 = 0LL;
    }
    else
    {
      v22 = 0LL;
    }
    sub_B0D840(
      (BattleServantConfConponent_o *)svtItem,
      v22,
      (System_String_array **)commandCodeItem,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v23 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
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
    v25 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v25 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v25 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v20 = (System_Int32_array **)item;
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
    sub_B0D840(
      (BattleServantConfConponent_o *)svtItem,
      0LL,
      (System_String_array **)commandCodeItem,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v20 = 0LL;
    *commandCodeItem = 0LL;
  }
  sub_B0D840((BattleServantConfConponent_o *)commandCodeItem, v20, v14, v15, v16, v17, v18, v19);
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
  __int64 v10; // x1
  __int64 v11; // x0
  const MethodInfo *v12; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x20

  if ( (byte_42141B5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_EndClose__, v10);
    byte_42141B5 = 1;
  }
  this->fields.callbackOnClose = callback;
  sub_B0D840(
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
    sub_B0D97C(v11);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v12);
  v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v16, 0LL);
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
  _QWORD *v9; // x8
  __int64 v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  System_Int32_array ***p_CommandCodeSortManageUnit_k__BackingField; // x8
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_Int32_array **RootInfo_k__BackingField; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_42141B8 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewPatternCommandCode_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&CharaGraphListViewPatternServantEquip_TypeInfo, v7);
    sub_B0D8A4(&CharaGraphListViewPatternServant_TypeInfo, v8);
    byte_42141B8 = 1;
  }
  if ( kind == 2 )
  {
    v9 = &CharaGraphListViewPatternCommandCode_TypeInfo;
  }
  else if ( kind == 1 )
  {
    v9 = &CharaGraphListViewPatternServantEquip_TypeInfo;
  }
  else
  {
    v9 = &CharaGraphListViewPatternServant_TypeInfo;
  }
  v10 = sub_B0D974(*v9, *(_QWORD *)&kind, setupInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (kind == 2
      ? (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields._CommandCodeSortManageUnit_k__BackingField)
      : kind != 1
      ? (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields)
      : (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields._ServantEquipSortManageUnit_k__BackingField),
        v19 = *p_CommandCodeSortManageUnit_k__BackingField,
        SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)*p_CommandCodeSortManageUnit_k__BackingField,
        sub_B0D840(
          (BattleServantConfConponent_o *)&SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField,
          v19,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        !v10) )
  {
    sub_B0D97C(SortOwner_k__BackingField);
  }
  v26 = (System_Int32_array **)this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v10 + 16) = v26;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), v26, v20, v21, v22, v23, v24, v25);
  RootInfo_k__BackingField = (System_Int32_array **)this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v10 + 24) = RootInfo_k__BackingField;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), RootInfo_k__BackingField, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v10 + 32) = setupInfo;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)setupInfo, v34, v35, v36, v37, v38, v39);
  return (CharaGraphListViewPatternBase_o *)v10;
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
  const MethodInfo *v10; // x3
  CharaGraphManageButtonGroup_o *v11; // x0

  if ( (byte_42141CE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, value);
    byte_42141CE = 1;
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraphManageButtonGroup, 0LL, 0LL) )
    return iModeKind;
  v11 = this->fields.charaGraphManageButtonGroup;
  if ( !v11 )
    sub_B0D97C(0LL);
  CharaGraphManageButtonGroup__SetPushButtonActive(v11, value, isInit, v10);
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
    sub_B0D840(p_callbackOnClose, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B0D97C(this);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  CharaGraphListMenuBase_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x2

  if ( (byte_42141B6 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, *(_QWORD *)&result);
    sub_B0D8A4(&Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__, v5);
    sub_B0D8A4(&CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo, v6);
    byte_42141B6 = 1;
  }
  v7 = sub_B0D974(CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&result, method);
  CharaGraphListMenuBase___c__DisplayClass38_0___ctor((CharaGraphListMenuBase___c__DisplayClass38_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 24) = result;
  v17 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B0D974(
                                                          CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                          v15,
                                                          v16);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__,
    0LL);
  CharaGraphListMenuBase__StatusRequest(this, v17, v18);
}


System_String_o *__fastcall CharaGraphListMenuBase__GetLocalizationKeyForModeKindMain(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  if ( (byte_42141BB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_11769/*"SERVANT_LIST_EXPLANATION_STATUS"*/, method);
    byte_42141BB = 1;
  }
  return (System_String_o *)StringLiteral_11769/*"SERVANT_LIST_EXPLANATION_STATUS"*/;
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
    sub_B0D97C(listViewManager);
  }
  RootInfo_k__BackingField->fields._ModeKind_k__BackingField = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


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
    sub_B0D97C(listViewManager);
  }
  v6->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v6, 0, 0LL);
  CharaGraphListViewManager__RequestListObject(v6, 3, v7);
}


void __fastcall CharaGraphListMenuBase__OnClickBonusFilterKind(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Il2CppObject *listViewManager; // x21
  System_Action_o *v6; // x20

  if ( (byte_42141C5 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, v4);
    byte_42141C5 = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickBonusFilterKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v6, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  CharaGraphListViewManager_o *listViewManager; // x20
  System_Action_bool__o *v7; // x21
  __int64 v8; // x0
  const MethodInfo *v9; // x2

  if ( (byte_42141C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v4);
    sub_B0D8A4(&Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__, v5);
    byte_42141C2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    v7 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, method, v2);
    System_Action_bool____ctor(
      v7,
      (Il2CppObject *)this,
      Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    if ( !listViewManager )
      sub_B0D97C(v8);
    CharaGraphListViewManager__OnClickFilterKind(listViewManager, v7, v9);
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
  const MethodInfo *v9; // x1
  CharaGraphManageButtonGroup_o *v10; // x19
  const MethodInfo *v11; // x2

  if ( (byte_42141C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickScaleChange__, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42141C0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_CharaGraphListMenuBase_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickScaleChange__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    if ( listViewManager )
    {
      CharaGraphListViewManager__ChangeIconScale(listViewManager, v6);
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
        v10 = this->fields.charaGraphManageButtonGroup;
        listViewManager = (CharaGraphListViewManager_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                           listViewManager,
                                                           v9);
        if ( v10 )
        {
          CharaGraphManageButtonGroup__SetScaleButtonSprite(v10, (System_String_o *)listViewManager, v11);
          return;
        }
      }
    }
    sub_B0D97C(listViewManager);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickSortAscendingOrder(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Il2CppObject *listViewManager; // x21
  System_Action_o *v6; // x20

  if ( (byte_42141C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, v4);
    byte_42141C4 = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v6, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickSortKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  Il2CppObject *listViewManager; // x21
  System_Action_o *v6; // x20

  if ( (byte_42141C3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CharaGraphListViewManager_OnClickSortKind__, v4);
    byte_42141C3 = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v6, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v6, 0LL);
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
  if ( (byte_42141BF & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTab__, finishCallback);
    byte_42141BF = 1;
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
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickTab__ + 75) & 2) != 0 )
      v8 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnClickTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_B0D888(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_16:
      sub_B0D97C(this);
    if ( (RootInfo_k__BackingField->fields._ModeKind_k__BackingField & 0xFFFFFFFE) == 2 )
    {
      CharaGraphListMenuBase__StatusRequest(v4, finishCallback, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  CharaGraphListMenuBase_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42141BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__, method);
    sub_B0D8A4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v4);
    byte_42141BE = 1;
  }
  v5 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B0D974(
                                                         CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                         method,
                                                         v2);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v5, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  CharaGraphListMenuBase_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42141BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__, method);
    sub_B0D8A4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v4);
    byte_42141BC = 1;
  }
  v5 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B0D974(
                                                         CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                         method,
                                                         v2);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v5, v6);
}


void __fastcall CharaGraphListMenuBase__OnClickTabServantEquip(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  CharaGraphListMenuBase_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_42141BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__, method);
    sub_B0D8A4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v4);
    byte_42141BD = 1;
  }
  v5 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B0D974(
                                                         CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                         method,
                                                         v2);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v5, v6);
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
    sub_B0D97C(0LL);
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
  __int64 v12; // x21
  UnityEngine_Behaviour_o *scrollView; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v21; // x2
  int v22; // w22
  CommonUI_o *Instance; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Action_o *v26; // x0
  bool v27; // cc
  System_Action_o *v28; // x22
  Il2CppObject *v29; // x1
  void *image; // x2

  if ( (byte_42141C8 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__, v10);
    sub_B0D8A4(&CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo, v11);
    byte_42141C8 = 1;
  }
  v12 = sub_B0D974(CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo, isDecide, isNeedSort);
  CharaGraphListMenuBase___c__DisplayClass66_0___ctor((CharaGraphListMenuBase___c__DisplayClass66_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v12 + 24) = questId;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_13;
  scrollView = (UnityEngine_Behaviour_o *)listViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
  if ( isDecide )
    CharaGraphListMenuBase__ModifyList(this, isNeedSort, v21);
  v22 = *(_DWORD *)(v12 + 24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v26 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v24, v25);
  v27 = v22 < 1;
  v28 = v26;
  if ( v27 )
  {
    v29 = (Il2CppObject *)this;
    image = this->klass[1]._1.image;
  }
  else
  {
    v29 = (Il2CppObject *)v12;
    LODWORD(image) = Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__;
  }
  System_Action___ctor(v26, v29, (intptr_t)image, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B0D97C(scrollView);
  CommonUI__CloseServantStatusDialog(Instance, v28, 0LL);
}


bool __fastcall CharaGraphListMenuBase__OnLongTapServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B0D97C(this);
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
      sub_B0D97C(0LL);
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
  const MethodInfo *v8; // x2

  if ( (byte_42141CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__, item);
    byte_42141CA = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !item )
    sub_B0D97C(v7);
  item->fields._IsSwapChoice_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v8);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindLock(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_42141C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__, item);
    byte_42141C9 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_B0D888(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !item )
    sub_B0D97C(v7);
  item->fields._IsSwapLock_k__BackingField ^= 1u;
  CharaGraphListMenuBase__ToInputState(this, 1, v8);
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
  __int64 v9; // x1
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  System_Action_bool__o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  NetworkManager_ResultCallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x3
  CharaGraphCommandCodeListViewItem_o *v22; // [xsp+0h] [xbp-30h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42141CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, item);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v5);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__, v6);
    sub_B0D8A4(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__, v7);
    sub_B0D8A4(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__, v8);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_42141CB = 1;
  }
  v22 = 0LL;
  svtItem = 0LL;
  v10 = Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__ + 75) & 2) != 0 )
    v10 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
  v11 = (System_Reflection_MethodBase_o *)sub_B0D888(v10, v10[3]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v22, v12);
  if ( !svtItem )
    sub_B0D97C(v13);
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  v17 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v14, v15);
  System_Action_bool____ctor(
    v17,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__,
    0LL);
  CharaGraphUtil__PushRequestWithConfirmDialog(UserServantEntity_k__BackingField, v17, v20, v21);
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
  int32_t tabKind; // w22
  __int64 v13; // x1
  __int64 v14; // x2
  CommonUI_o *v15; // x20
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v17; // x22
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v19; // x22
  ServantStatusDialog_ResultDelegate_o *v20; // x22
  CharaGraphCommandCodeListViewItem_o *v21; // [xsp+0h] [xbp-30h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42141C7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__, item);
    sub_B0D8A4(&ServantStatusDialog_EndDelegate_TypeInfo, v5);
    sub_B0D8A4(&ServantStatusDialog_ResultDelegate_TypeInfo, v6);
    this = (CharaGraphListMenuBase_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_42141C7 = 1;
  }
  v21 = 0LL;
  svtItem = 0LL;
  listViewManager = v4->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_18;
  this = (CharaGraphListMenuBase_o *)listViewManager->fields.scrollView;
  if ( !this )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v21, v9);
  v10 = Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__ + 75) & 2) != 0 )
    v10 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
  v11 = (System_Reflection_MethodBase_o *)sub_B0D888(v10, v10[3]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  v4->fields.state = 6;
  tabKind = v4->fields.tabKind;
  this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonUI_o *)this;
  if ( tabKind == 2 )
  {
    if ( v21 )
    {
      UserCommandCodeEntity_k__BackingField = v21->fields._UserCommandCodeEntity_k__BackingField;
      v17 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
      ServantStatusDialog_EndDelegate___ctor(
        v17,
        (Il2CppObject *)v4,
        (intptr_t)v4->klass->vtable._14_OnEndSelectServantStatus.methodPtr,
        0LL);
      if ( v15 )
      {
        CommonUI__OpenServantStatusDialog_17030008(v15, 0, UserCommandCodeEntity_k__BackingField, v17, 0LL, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B0D97C(this);
  }
  if ( !svtItem )
    goto LABEL_18;
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  if ( tabKind == 1 )
  {
    v19 = (ServantStatusDialog_EndDelegate_o *)sub_B0D974(ServantStatusDialog_EndDelegate_TypeInfo, v13, v14);
    ServantStatusDialog_EndDelegate___ctor(
      v19,
      (Il2CppObject *)v4,
      (intptr_t)v4->klass->vtable._13_OnEndSelectCommandCodeStatus.methodPtr,
      0LL);
    if ( !v15 )
      goto LABEL_18;
    CommonUI__OpenServantStatusDialog_17027696(v15, 0, UserServantEntity_k__BackingField, v19, 0LL);
  }
  else
  {
    v20 = (ServantStatusDialog_ResultDelegate_o *)sub_B0D974(ServantStatusDialog_ResultDelegate_TypeInfo, v13, v14);
    ServantStatusDialog_ResultDelegate___ctor(
      v20,
      (Il2CppObject *)v4,
      (intptr_t)v4->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr,
      0LL);
    if ( !v15 )
      goto LABEL_18;
    CommonUI__OpenServantStatusDialog_17028192(v15, 0, UserServantEntity_k__BackingField, v20, 0, 0LL);
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
  if ( (byte_42141C6 & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_B0D8A4(&Method_CharaGraphListMenuBase_OnSelectServantLocal__, item);
    byte_42141C6 = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsEnabled_k__BackingField )
  {
LABEL_8:
    v6 = Method_CharaGraphListMenuBase_OnSelectServantLocal__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantLocal__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
    CharaGraphListMenuBase__ToInputState(v4, 0, v8);
    return;
  }
  RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_17:
    sub_B0D97C(this);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  CharaGraphListMenuBase_RequestCallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x2

  if ( (byte_42141C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnServantManageTabSelected__, *(_QWORD *)&modeKindToUpdate);
    sub_B0D8A4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__, v6);
    sub_B0D8A4(&CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo, v7);
    byte_42141C1 = 1;
  }
  v8 = sub_B0D974(CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo, *(_QWORD *)&modeKindToUpdate, method);
  CharaGraphListMenuBase___c__DisplayClass53_0___ctor((CharaGraphListMenuBase___c__DisplayClass53_0_o *)v8, 0LL);
  if ( !v8 )
    goto LABEL_13;
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v8 + 24) = modeKindToUpdate;
  if ( this->fields.state != 2 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_13:
    sub_B0D97C(v9);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != modeKindToUpdate )
  {
    v17 = Method_CharaGraphListMenuBase_OnServantManageTabSelected__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnServantManageTabSelected__ + 75) & 2) != 0 )
      v17 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    v18 = (System_Reflection_MethodBase_o *)sub_B0D888(v17, v17[3]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 0, 0LL);
    if ( *(_DWORD *)(v8 + 24) == 4 )
      EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v21 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B0D974(
                                                            CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo,
                                                            v19,
                                                            v20);
    CharaGraphListMenuBase_RequestCallbackFunc___ctor(
      v21,
      (Il2CppObject *)v8,
      Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__,
      0LL);
    CharaGraphListMenuBase__StatusRequest(this, v21, v22);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v23; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  System_Action_o *v30; // x20

  if ( (byte_42141B3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, callback);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_EndOpen__, v5);
    sub_B0D8A4(&CharaGraphSortOwnerNoSave_TypeInfo, v6);
    byte_42141B3 = 1;
  }
  if ( !this->fields._SortOwner_k__BackingField )
  {
    v7 = (CharaGraphSortOwnerAllKind_o *)sub_B0D974(CharaGraphSortOwnerNoSave_TypeInfo, callback, method);
    CharaGraphSortOwnerAllKind___ctor(v7, v8);
    this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._SortOwner_k__BackingField,
      (System_Int32_array **)v7,
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
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.CallbackOnExit,
      (System_Int32_array **)callback,
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
        v23);
      CharaGraphListMenuBase__EndOpen(this, v25);
      return;
    }
LABEL_13:
    sub_B0D97C(gameObject);
  }
  if ( !state )
  {
    this->fields.CallbackOnExit = callback;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.CallbackOnExit,
      (System_Int32_array **)callback,
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
    v27 = this->fields._RootInfo_k__BackingField;
    if ( !v27 )
      goto LABEL_13;
    CharaGraphListMenuBase__SetTabKind(this, this->fields.tabKind, v27->fields._ModeKind_k__BackingField, 1, v26);
    this->fields.state = 1;
    v30 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v30, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetFilterButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  const MethodInfo *v5; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_42141D0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42141D0 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v4 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_B0D97C(v4);
    CharaGraphSortButtonGroup__SetFilterButtonImage(v4, listViewManager->fields.sort, v5);
  }
}


void __fastcall CharaGraphListMenuBase__SetSortButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  const MethodInfo *v5; // x4
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_42141D1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42141D1 = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (CharaGraphSortButtonGroup_o *)UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager || (v4 = this->fields.charaGraphSortButtonGroup) == 0LL )
      sub_B0D97C(v4);
    CharaGraphSortButtonGroup__SetSortButtonImage(
      v4,
      listViewManager->fields.sort,
      listViewManager->fields._BonusEventIds_k__BackingField,
      listViewManager->fields._ServantFilterIds_k__BackingField,
      v5);
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
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x4
  int v16; // w8
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  bool v18; // w23
  bool v19; // w20
  struct CharaGraphDefine_CharaGraphRootInfo_o *v20; // x10
  int32_t ModeKind_k__BackingField; // w9
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v23; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  EventUpValSetupInfo_o *v26; // x22
  struct CharaGraphListViewManager_o *listViewManager; // x21
  const MethodInfo *v28; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x21
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *v32; // x8
  struct CharaGraphListViewManager_o *v33; // x20
  const MethodInfo *v34; // x2
  ListViewManager_o *v35; // x0
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *v37; // x20
  const MethodInfo *v38; // x1
  CharaGraphManageButtonGroup_o *v39; // x19
  const MethodInfo *v40; // x2

  if ( (byte_42141B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, *(_QWORD *)&iTabKind);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_B0D8A4(&EventUpValSetupInfo_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    byte_42141B9 = 1;
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
                                                        iModeKind,
                                                        1,
                                                        v15);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    this->fields.tabKind = iTabKind;
    if ( !RootInfo_k__BackingField )
      goto LABEL_42;
    v18 = 0;
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField = (int)Master_WarQuestSelectionMaster;
    v19 = 1;
LABEL_14:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   0,
                                                                                   0LL);
    v23 = System_Linq_Enumerable__ToArray_int_(
            EventValUpEventIdHash,
            (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
    v26 = (EventUpValSetupInfo_o *)sub_B0D974(EventUpValSetupInfo_TypeInfo, v24, v25);
    EventUpValSetupInfo___ctor_25655088(v26, v23, 0, 0, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    Master_WarQuestSelectionMaster = (EventMaster_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, EventUpValSetupInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_CreateListViewPattern.method)(
                                                        this,
                                                        (unsigned int)this->fields.tabKind,
                                                        v26,
                                                        this->klass->vtable._8_GetLocalizationKeyForModeKindMain.methodPtr);
    if ( !listViewManager )
      goto LABEL_42;
    ((void (__fastcall *)(struct CharaGraphListViewManager_o *, EventMaster_o *, void *))listViewManager->klass->vtable._13_CreateList.method)(
      listViewManager,
      Master_WarQuestSelectionMaster,
      listViewManager->klass[1]._1.image);
    CharaGraphListMenuBase__SetupSortUi(this, v28);
    if ( v18 )
      goto LABEL_28;
    goto LABEL_20;
  }
  if ( this->fields.tabKind == iTabKind )
  {
    v16 = 0;
  }
  else
  {
    Master_WarQuestSelectionMaster = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(
                                                        this,
                                                        iTabKind == 0,
                                                        iModeKind,
                                                        0,
                                                        v15);
    iModeKind = (int)Master_WarQuestSelectionMaster;
    v16 = 1;
  }
  v20 = this->fields._RootInfo_k__BackingField;
  if ( !v20 )
    goto LABEL_42;
  ModeKind_k__BackingField = v20->fields._ModeKind_k__BackingField;
  this->fields.tabKind = iTabKind;
  v20->fields._ModeKind_k__BackingField = iModeKind;
  v18 = iModeKind == ModeKind_k__BackingField;
  if ( v16 )
  {
    v19 = 0;
    goto LABEL_14;
  }
  if ( iModeKind == ModeKind_k__BackingField )
    goto LABEL_28;
  v19 = 0;
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
    v32 = this->fields._RootInfo_k__BackingField;
    if ( !v32 )
      goto LABEL_42;
    Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.charaGraphManageButtonGroup;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    CharaGraphManageButtonGroup__UpdateDisplay(
      (CharaGraphManageButtonGroup_o *)Master_WarQuestSelectionMaster,
      v32->fields._ModeKind_k__BackingField,
      v19,
      v31);
  }
  CharaGraphListMenuBase__SetupExplanationLabel(this, v30);
LABEL_28:
  v33 = this->fields.listViewManager;
  if ( !v33 )
    goto LABEL_42;
  if ( this->fields.state == 2 )
  {
    CharaGraphListViewManager__ModifyList(this->fields.listViewManager, 0, 0, v14);
    CharaGraphListMenuBase__ToInputState(this, 1, v34);
  }
  else
  {
    v35 = (ListViewManager_o *)this->fields.listViewManager;
    v33->fields.initMode = 1;
    ListViewManager__set_IsInput(v35, 0, 0LL);
    CharaGraphListViewManager__RequestListObject(v33, 1, v36);
  }
  v37 = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.listViewManager;
    if ( Master_WarQuestSelectionMaster )
    {
      v39 = this->fields.charaGraphManageButtonGroup;
      Master_WarQuestSelectionMaster = (EventMaster_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                          (CharaGraphListViewManager_o *)Master_WarQuestSelectionMaster,
                                                          v38);
      if ( v39 )
      {
        CharaGraphManageButtonGroup__SetScaleButtonSprite(v39, (System_String_o *)Master_WarQuestSelectionMaster, v40);
        return;
      }
    }
LABEL_42:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
}


void __fastcall CharaGraphListMenuBase__SetupButtonCallback(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v17; // x1
  struct CharaGraphListViewManager_o *listViewManager; // x21
  System_Action_o *v19; // x20
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  struct CharaGraphKindTabButtonGroup_o *v30; // x20
  System_Action_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct CharaGraphKindTabButtonGroup_o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct CharaGraphKindTabButtonGroup_o *v48; // x20
  __int64 v49; // x1
  __int64 v50; // x2
  System_Action_o *v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  __int64 v59; // x1
  __int64 v60; // x2
  struct CharaGraphManageButtonGroup_o *v61; // x20
  System_Action_o *v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  struct CharaGraphManageButtonGroup_o *v69; // x20
  __int64 v70; // x1
  __int64 v71; // x2
  System_Action_o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct CharaGraphManageButtonGroup_o *v79; // x20
  __int64 v80; // x1
  __int64 v81; // x2
  System_Action_o *v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct CharaGraphManageButtonGroup_o *v89; // x20
  __int64 v90; // x1
  __int64 v91; // x2
  System_Action_o *v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  struct CharaGraphManageButtonGroup_o *v99; // x20
  __int64 v100; // x1
  __int64 v101; // x2
  System_Action_o *v102; // x21
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  __int64 v110; // x1
  __int64 v111; // x2
  struct CharaGraphSortButtonGroup_o *v112; // x20
  System_Action_o *v113; // x21
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  struct CharaGraphSortButtonGroup_o *v120; // x20
  __int64 v121; // x1
  __int64 v122; // x2
  System_Action_o *v123; // x21
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  struct CharaGraphSortButtonGroup_o *v130; // x20
  __int64 v131; // x1
  __int64 v132; // x2
  System_Action_o *v133; // x21
  System_String_array **v134; // x2
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  struct CharaGraphSortButtonGroup_o *v140; // x20
  __int64 v141; // x1
  __int64 v142; // x2
  System_Action_o *v143; // x21
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7

  if ( (byte_42141B4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, v4);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickFilterKind__, v5);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickScaleChange__, v6);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, v7);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickSortKind__, v8);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTabChoice__, v9);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTabCommandCode__, v10);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTabLock__, v11);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTabMain__, v12);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTabPush__, v13);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTabServantEquip__, v14);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnClickTabServant__, v15);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_SetSortButtonImage__, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    byte_42141B4 = 1;
  }
  listViewManager = this->fields.listViewManager;
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_CharaGraphListMenuBase_SetSortButtonImage__, 0LL);
  if ( !listViewManager )
    goto LABEL_32;
  listViewManager->fields._OnSetSortButtonImage_k__BackingField = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&listViewManager->fields._OnSetSortButtonImage_k__BackingField,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v30 = this->fields.charaGraphKindTabButtonGroup;
    v31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v28, v29);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServant__, 0LL);
    if ( !v30 )
      goto LABEL_32;
    v30->fields._OnClickTabServant_k__BackingField = v31;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v30->fields._OnClickTabServant_k__BackingField,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v38 = this->fields.charaGraphKindTabButtonGroup;
    v41 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v39, v40);
    System_Action___ctor(v41, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServantEquip__, 0LL);
    if ( !v38 )
      goto LABEL_32;
    v38->fields._OnClickTabServantEquip_k__BackingField = v41;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v38->fields._OnClickTabServantEquip_k__BackingField,
      (System_Int32_array **)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v48 = this->fields.charaGraphKindTabButtonGroup;
    v51 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v49, v50);
    System_Action___ctor(v51, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabCommandCode__, 0LL);
    if ( !v48 )
      goto LABEL_32;
    v48->fields._OnClickTabCommandCode_k__BackingField = v51;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v48->fields._OnClickTabCommandCode_k__BackingField,
      (System_Int32_array **)v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0LL, 0LL) )
  {
    v61 = this->fields.charaGraphManageButtonGroup;
    v62 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v59, v60);
    System_Action___ctor(v62, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabMain__, 0LL);
    if ( !v61 )
      goto LABEL_32;
    v61->fields._OnClickTabMain_k__BackingField = v62;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v61->fields._OnClickTabMain_k__BackingField,
      (System_Int32_array **)v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68);
    v69 = this->fields.charaGraphManageButtonGroup;
    v72 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v70, v71);
    System_Action___ctor(v72, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabLock__, 0LL);
    if ( !v69 )
      goto LABEL_32;
    v69->fields._OnClickTabLock_k__BackingField = v72;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v69->fields._OnClickTabLock_k__BackingField,
      (System_Int32_array **)v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    v79 = this->fields.charaGraphManageButtonGroup;
    v82 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v80, v81);
    System_Action___ctor(v82, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabChoice__, 0LL);
    if ( !v79 )
      goto LABEL_32;
    v79->fields._OnClickTabChoice_k__BackingField = v82;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v79->fields._OnClickTabChoice_k__BackingField,
      (System_Int32_array **)v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88);
    v89 = this->fields.charaGraphManageButtonGroup;
    v92 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v90, v91);
    System_Action___ctor(v92, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabPush__, 0LL);
    if ( !v89 )
      goto LABEL_32;
    v89->fields._OnClickTabPush_k__BackingField = v92;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v89->fields._OnClickTabPush_k__BackingField,
      (System_Int32_array **)v92,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    v99 = this->fields.charaGraphManageButtonGroup;
    v102 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v100, v101);
    System_Action___ctor(v102, (Il2CppObject *)this, (intptr_t)Method_CharaGraphListMenuBase_OnClickScaleChange__, 0LL);
    if ( !v99 )
      goto LABEL_32;
    v99->fields._OnClickScaleChange_k__BackingField = v102;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v99->fields._OnClickScaleChange_k__BackingField,
      (System_Int32_array **)v102,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    v112 = this->fields.charaGraphSortButtonGroup;
    v113 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v110, v111);
    System_Action___ctor(v113, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickFilterKind__, 0LL);
    if ( v112 )
    {
      v112->fields._OnClickFilterKind_k__BackingField = v113;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v112->fields._OnClickFilterKind_k__BackingField,
        (System_Int32_array **)v113,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      v120 = this->fields.charaGraphSortButtonGroup;
      v123 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v121, v122);
      System_Action___ctor(v123, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortKind__, 0LL);
      if ( v120 )
      {
        v120->fields._OnClickSortKind_k__BackingField = v123;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v120->fields._OnClickSortKind_k__BackingField,
          (System_Int32_array **)v123,
          v124,
          v125,
          v126,
          v127,
          v128,
          v129);
        v130 = this->fields.charaGraphSortButtonGroup;
        v133 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v131, v132);
        System_Action___ctor(v133, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, 0LL);
        if ( v130 )
        {
          v130->fields._OnClickSortAscendingOrder_k__BackingField = v133;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v130->fields._OnClickSortAscendingOrder_k__BackingField,
            (System_Int32_array **)v133,
            v134,
            v135,
            v136,
            v137,
            v138,
            v139);
          v140 = this->fields.charaGraphSortButtonGroup;
          v143 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v141, v142);
          System_Action___ctor(v143, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, 0LL);
          if ( v140 )
          {
            v140->fields._OnClickBonusFilterKind_k__BackingField = v143;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v140->fields._OnClickBonusFilterKind_k__BackingField,
              (System_Int32_array **)v143,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149);
            return;
          }
        }
      }
    }
LABEL_32:
    sub_B0D97C(v20);
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
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_String_o *v10; // x20
  __int64 *v11; // x8
  UILabel_o *v12; // x19

  if ( (byte_42141BA & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v4);
    sub_B0D8A4(&StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v5);
    sub_B0D8A4(&StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v6);
    byte_42141BA = 1;
  }
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (System_String_o *)UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_20:
      sub_B0D97C(v8);
    switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
    {
      case 0:
        v10 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._8_GetLocalizationKeyForModeKindMain.method)(
                                   this,
                                   this->klass->vtable._9_OnLongTapServantLocal.methodPtr);
        if ( !v10 )
          return;
        goto LABEL_15;
      case 2:
        v11 = &StringLiteral_11767/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_14;
      case 3:
        v11 = &StringLiteral_11766/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_14;
      case 4:
        v11 = &StringLiteral_11768/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_14:
        v10 = (System_String_o *)*v11;
        if ( !*v11 )
          return;
LABEL_15:
        v12 = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v8 = LocalizationManager__Get(v10, 0LL);
        if ( !v12 )
          goto LABEL_20;
        UILabel__set_text(v12, v8, 0LL);
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
  CharaGraphKindTabButtonGroup_o *v8; // x0

  if ( (byte_42141B7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&iTabKind);
    byte_42141B7 = 1;
  }
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v8 = this->fields.charaGraphKindTabButtonGroup;
    if ( !v8
      || (CharaGraphKindTabButtonGroup__SetupTabLabel(v8, iTabKind, 0LL),
          (v8 = this->fields.charaGraphKindTabButtonGroup) == 0LL) )
    {
      sub_B0D97C(v8);
    }
    CharaGraphKindTabButtonGroup__SetupTabButtons(v8, iTabKind, isInit, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetupSortUi(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3
  CharaGraphSortButtonGroup_o *v6; // x0
  const MethodInfo *v7; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_42141CF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42141CF = 1;
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    CharaGraphListMenuBase__SetFilterButtonImage(this, v4);
    v6 = this->fields.charaGraphSortButtonGroup;
    if ( !v6
      || (CharaGraphSortButtonGroup__SetFilterButtonState(v6, 0, 1, v5),
          (listViewManager = this->fields.listViewManager) == 0LL)
      || (v6 = this->fields.charaGraphSortButtonGroup) == 0LL )
    {
      sub_B0D97C(v6);
    }
    CharaGraphSortButtonGroup__SetBonusFilterButton(v6, listViewManager->fields.sort, v7);
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
  __int64 v10; // x22
  CharaGraphListViewManager_o *listViewManager; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  CharaGraphListViewManager_o **v18; // x23
  const MethodInfo *v19; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w8
  bool v22; // w20
  bool v23; // w21
  __int64 v24; // x1
  __int64 v25; // x2
  int32_t tabKind; // w23
  NetworkManager_ResultCallbackFunc_o *v27; // x19
  System_Int64_array *unlockArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *lockArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_42141CC & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, callback);
    sub_B0D8A4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___, v5);
    sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B0D8A4(&Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__, v8);
    sub_B0D8A4(&CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo, v9);
    byte_42141CC = 1;
  }
  lockArray = 0LL;
  unlockArray = 0LL;
  v10 = sub_B0D974(CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo, callback, method);
  CharaGraphListMenuBase___c__DisplayClass72_0___ctor((CharaGraphListMenuBase___c__DisplayClass72_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_28;
  *(_QWORD *)(v10 + 16) = callback;
  v18 = (CharaGraphListViewManager_o **)(v10 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)callback, v12, v13, v14, v15, v16, v17);
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
    CharaGraphListViewManager__GetSwapChoiceArray(listViewManager, &lockArray, &unlockArray, v19);
    v23 = 0;
    v22 = 1;
  }
  else if ( ModeKind_k__BackingField == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_28;
    CharaGraphListViewManager__GetSwapLockArray(listViewManager, &lockArray, &unlockArray, v19);
    v22 = 0;
    v23 = 1;
  }
  else
  {
    v22 = 0;
    v23 = 0;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)lockArray, 0LL)
    && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unlockArray, 0LL) )
  {
    listViewManager = *v18;
    if ( *v18 )
    {
      CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        (CharaGraphListMenuBase_RequestCallbackFunc_o *)listViewManager,
        0,
        0LL);
      return;
    }
LABEL_28:
    sub_B0D97C(listViewManager);
  }
  tabKind = this->fields.tabKind;
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v24, v25);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)v10,
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
                                                       v27,
                                                       (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_28;
    CommandCodeStatusSyncRequest__beginRequest(
      (CommandCodeStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      v23,
      v22,
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
                                                       v27,
                                                       (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_28;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      0,
      v23,
      v22,
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
  __int64 v8; // x0
  System_String_array **v9; // x2
  MethodInfo *v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42141CD & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewManager_CallbackFunc_TypeInfo, changeMode);
    sub_B0D8A4(&Method_CharaGraphListMenuBase_OnSelectServant__, v5);
    byte_42141CD = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v7 = (CharaGraphListViewManager_CallbackFunc_o *)sub_B0D974(
                                                     CharaGraphListViewManager_CallbackFunc_TypeInfo,
                                                     changeMode,
                                                     method);
  CharaGraphListViewManager_CallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase_OnSelectServant__,
    0LL);
  if ( !listViewManager )
    sub_B0D97C(v8);
  if ( changeMode )
  {
    CharaGraphListViewManager__SetMode(listViewManager, 2, v7, v10);
  }
  else
  {
    listViewManager->fields.FuncOnClick = v7;
    sub_B0D840(
      (BattleServantConfConponent_o *)&listViewManager->fields.FuncOnClick,
      (System_Int32_array **)v7,
      v9,
      (System_String_array **)v10,
      v11,
      v12,
      v13,
      v14);
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
    sub_B0D97C(this);
  CharaGraphListMenuBase__SetTabKind(this, 2, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v3);
}


void __fastcall CharaGraphListMenuBase___OnClickTabServantEquip_b__45_0(
        CharaGraphListMenuBase_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v4; // x0
  const MethodInfo *v5; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  EventTutorialMaster__CheckTutorial(-1, 54, 0LL, 0, 0, 0, 0, 0LL);
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B0D97C(v4);
  CharaGraphListMenuBase__SetTabKind(this, 1, RootInfo_k__BackingField->fields._ModeKind_k__BackingField, 0, v5);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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

  if ( (byte_42141B1 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, value);
    byte_42141B1 = 1;
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
    v9 = sub_B022BC(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenuBase_o *)sub_B0DC70(v8);
  CharaGraphListMenuBase__remove_CallbackOnExit(v11, v12, v13);
}


int32_t __fastcall CharaGraphListMenuBase__get_ModeKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B0D97C(this);
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

  if ( (byte_42141B2 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, value);
    byte_42141B2 = 1;
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
    v9 = sub_B022BC(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListMenuBase_o *)sub_B0DC70(v8);
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211DF7 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListMenuBase_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4211DF7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenuBase_ResultKind_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_CallbackFunc__EndInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_CallbackFunc__Invoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  CharaGraphListMenuBase_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
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
  unsigned int v25; // w23
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  unsigned int v31; // [xsp+4h] [xbp-4Ch] BYREF
  CharaGraphListMenuBase_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v31 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v32;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (CharaGraphListMenuBase_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v31, v21);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v20 )
    {
      v22(&v31 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        v25 = v31;
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
            v17 = sub_AA67A0(v20, v27, v28);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, v25, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v31;
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
            v15 = v11 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v31,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v31, v21);
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
  sub_B0D840(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4211DF8 & 1) == 0 )
  {
    sub_B0D8A4(&bool_TypeInfo, isRequest);
    byte_4211DF8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B0D848(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CharaGraphListMenuBase_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
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
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  CharaGraphListMenuBase_RequestCallbackFunc_o *v30; // [xsp+8h] [xbp-48h] BYREF

  v30 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v30;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CharaGraphListMenuBase_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v19 = v8[v9];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v19->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B0D8D4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B0D8CC(v21);
      v24 = sub_B0DCD0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v25 = *v20;
          v26 = *(_QWORD *)(v21 + 24);
          v27 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AA67A0(v20, v26, v27);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B0D954(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v21 + 72);
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
            v15 = v12 + 16LL * (int)(*v14 + v10) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AA67A0(v20, class_0, v10);
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
    sub_B0D97C(0LL);
  CallbackOnExit = _4__this->fields.CallbackOnExit;
  p_CallbackOnExit = &_4__this->fields.CallbackOnExit;
  v6 = CallbackOnExit;
  if ( CallbackOnExit )
  {
    *p_CallbackOnExit = 0LL;
    sub_B0D840(p_CallbackOnExit, 0LL);
    CharaGraphListMenuBase_CallbackFunc__Invoke(v6, this->fields.result, v8);
  }
}


void __fastcall CharaGraphListMenuBase___c__DisplayClass53_0___ctor(
        CharaGraphListMenuBase___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(0LL);
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
void __fastcall CharaGraphListMenuBase___ctor(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438E2CC & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    sub_B775C4(&CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
    byte_438E2CC = 1;
  }
  v3 = (Il2CppObject *)sub_B77694(CharaGraphDefine_CharaGraphRootInfo_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields._RootInfo_k__BackingField = (struct CharaGraphDefine_CharaGraphRootInfo_o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._RootInfo_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_B7769C(IsActiveBgTxt, v5);
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
  __int64 v11; // x11
  CharaGraphListViewItemBase_o *v12; // x9
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  __int64 v20; // x10
  System_Int32_array **v21; // x1
  __int64 v22; // x11
  CharaGraphListViewItemBase_o *v23; // x9
  __int64 v24; // x10

  if ( (byte_438E2CB & 1) == 0 )
  {
    sub_B775C4(&CharaGraphCommandCodeListViewItem_TypeInfo);
    sub_B775C4(&CharaGraphServantListViewItem_TypeInfo);
    byte_438E2CB = 1;
  }
  if ( item )
  {
    v11 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v11 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v11 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v12 = item;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
    }
    *svtItem = (CharaGraphServantListViewItem_o *)v12;
    v20 = *(&CharaGraphServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v20 )
    {
      if ( (CharaGraphServantListViewItem_c *)item->klass->_2.typeHierarchy[v20 - 1] == CharaGraphServantListViewItem_TypeInfo )
        v21 = (System_Int32_array **)item;
      else
        v21 = 0LL;
    }
    else
    {
      v21 = 0LL;
    }
    sub_B77560(
      (BattleServantConfConponent_o *)svtItem,
      v21,
      (System_String_array **)commandCodeItem,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v22 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v22 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v22 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v23 = item;
      else
        v23 = 0LL;
    }
    else
    {
      v23 = 0LL;
    }
    *commandCodeItem = (CharaGraphCommandCodeListViewItem_o *)v23;
    v24 = *(&CharaGraphCommandCodeListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&item->klass->_2.bitflags2 + 1) >= (unsigned int)v24 )
    {
      if ( (CharaGraphCommandCodeListViewItem_c *)item->klass->_2.typeHierarchy[v24 - 1] == CharaGraphCommandCodeListViewItem_TypeInfo )
        v19 = (System_Int32_array **)item;
      else
        v19 = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
  }
  else
  {
    *svtItem = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)svtItem,
      0LL,
      (System_String_array **)commandCodeItem,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    v19 = 0LL;
    *commandCodeItem = 0LL;
  }
  sub_B77560((BattleServantConfConponent_o *)commandCodeItem, v19, v13, v14, v15, v16, v17, v18);
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
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_Action_o *v14; // x20

  if ( (byte_438E2AE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase_EndClose__);
    byte_438E2AE = 1;
  }
  this->fields.callbackOnClose = callback;
  sub_B77560(
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
    sub_B7769C(v10, v11);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v12);
  v14 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v14, 0LL);
}


CharaGraphListViewPatternBase_o *__fastcall CharaGraphListMenuBase__CreateListViewPattern(
        CharaGraphListMenuBase_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  _QWORD *v7; // x8
  __int64 v8; // x22
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0
  System_Int32_array ***p_CommandCodeSortManageUnit_k__BackingField; // x8
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_Int32_array **RootInfo_k__BackingField; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_438E2B1 & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListViewPatternCommandCode_TypeInfo);
    sub_B775C4(&CharaGraphListViewPatternServantEquip_TypeInfo);
    sub_B775C4(&CharaGraphListViewPatternServant_TypeInfo);
    byte_438E2B1 = 1;
  }
  if ( kind == 2 )
  {
    v7 = &CharaGraphListViewPatternCommandCode_TypeInfo;
  }
  else if ( kind == 1 )
  {
    v7 = &CharaGraphListViewPatternServantEquip_TypeInfo;
  }
  else
  {
    v7 = &CharaGraphListViewPatternServant_TypeInfo;
  }
  v8 = sub_B77694(*v7);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  SortOwner_k__BackingField = this->fields._SortOwner_k__BackingField;
  if ( !SortOwner_k__BackingField
    || (kind == 2
      ? (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields._CommandCodeSortManageUnit_k__BackingField)
      : kind != 1
      ? (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields)
      : (p_CommandCodeSortManageUnit_k__BackingField = (System_Int32_array ***)&SortOwner_k__BackingField->fields._ServantEquipSortManageUnit_k__BackingField),
        v18 = *p_CommandCodeSortManageUnit_k__BackingField,
        SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField = (struct CharaGraphSortManageUnitBase_o *)*p_CommandCodeSortManageUnit_k__BackingField,
        sub_B77560(
          (BattleServantConfConponent_o *)&SortOwner_k__BackingField->fields._CurrentSortManageUnit_k__BackingField,
          v18,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        !v8) )
  {
    sub_B7769C(SortOwner_k__BackingField, v9);
  }
  v25 = (System_Int32_array **)this->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v8 + 16) = v25;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 16), v25, v19, v20, v21, v22, v23, v24);
  RootInfo_k__BackingField = (System_Int32_array **)this->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v8 + 24) = RootInfo_k__BackingField;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 24), RootInfo_k__BackingField, v27, v28, v29, v30, v31, v32);
  *(_QWORD *)(v8 + 32) = setupInfo;
  sub_B77560((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)setupInfo, v33, v34, v35, v36, v37, v38);
  return (CharaGraphListViewPatternBase_o *)v8;
}


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

  if ( (byte_438E2C7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2C7 = 1;
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
    sub_B7769C(0LL, v10);
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
    sub_B77560(p_callbackOnClose, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B7769C(this, method);
  CharaGraphListMenuBase__SetTabKind(
    this,
    this->fields.tabKind,
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
    0,
    v2);
}


void __fastcall CharaGraphListMenuBase__Exit(CharaGraphListMenuBase_o *this, int32_t result, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CharaGraphListMenuBase_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_438E2AF & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__);
    sub_B775C4(&CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
    byte_438E2AF = 1;
  }
  v5 = sub_B77694(CharaGraphListMenuBase___c__DisplayClass38_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass38_0___ctor((CharaGraphListMenuBase___c__DisplayClass38_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = result;
  v14 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CharaGraphListMenuBase___c__DisplayClass38_0__Exit_g__OnEnd_0__,
    0LL);
  CharaGraphListMenuBase__StatusRequest(this, v14, v15);
}


System_String_o *__fastcall CharaGraphListMenuBase__GetLocalizationKeyForModeKindMain(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  if ( (byte_438E2B4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_11965/*"SERVANT_LIST_EXPLANATION_STATUS"*/);
    byte_438E2B4 = 1;
  }
  return (System_String_o *)StringLiteral_11965/*"SERVANT_LIST_EXPLANATION_STATUS"*/;
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
    sub_B7769C(listViewManager, *(_QWORD *)&defaultTabKind);
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
    sub_B7769C(listViewManager, isNeedSort);
  }
  v6->fields.initMode = 3;
  ListViewManager__set_IsInput((ListViewManager_o *)v6, 0, 0LL);
  CharaGraphListViewManager__RequestListObject(v6, 3, v7);
}


void __fastcall CharaGraphListMenuBase__OnClickBonusFilterKind(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_438E2BE & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_438E2BE = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickBonusFilterKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v4, 0LL);
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
  CharaGraphListViewManager_o *listViewManager; // x20
  System_Action_bool__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_438E2BB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__);
    byte_438E2BB = 1;
  }
  if ( this->fields.state == 2 )
  {
    listViewManager = this->fields.listViewManager;
    v4 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      v4,
      (Il2CppObject *)this,
      Method_CharaGraphListMenuBase__OnClickFilterKind_b__54_0__,
      (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
    if ( !listViewManager )
      sub_B7769C(v5, v6);
    CharaGraphListViewManager__OnClickFilterKind(listViewManager, v4, v7);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickScaleChange(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  CharaGraphManageButtonGroup_o *v8; // x19
  const MethodInfo *v9; // x2

  if ( (byte_438E2B9 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickScaleChange__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2B9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CharaGraphListMenuBase_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnClickScaleChange__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    if ( listViewManager )
    {
      CharaGraphListViewManager__ChangeIconScale(listViewManager, v5);
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
        v8 = this->fields.charaGraphManageButtonGroup;
        listViewManager = (CharaGraphListViewManager_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                           listViewManager,
                                                           v5);
        if ( v8 )
        {
          CharaGraphManageButtonGroup__SetScaleButtonSprite(v8, (System_String_o *)listViewManager, v9);
          return;
        }
      }
    }
    sub_B7769C(listViewManager, v5);
  }
}


void __fastcall CharaGraphListMenuBase__OnClickSortAscendingOrder(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_438E2BD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_438E2BD = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v4, 0LL);
}


void __fastcall CharaGraphListMenuBase__OnClickSortKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  Il2CppObject *listViewManager; // x21
  System_Action_o *v4; // x20

  if ( (byte_438E2BC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListViewManager_OnClickSortKind__);
    byte_438E2BC = 1;
  }
  listViewManager = (Il2CppObject *)this->fields.listViewManager;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, listViewManager, (intptr_t)Method_CharaGraphListViewManager_OnClickSortKind__, 0LL);
  if ( this->fields.state == 2 )
    ActionExtensions__Call(v4, 0LL);
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
  if ( (byte_438E2B8 & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTab__);
    byte_438E2B8 = 1;
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
      v8 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnClickTab__);
    v9 = (System_Reflection_MethodBase_o *)sub_B775A8(v8, v8[3]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_16:
      sub_B7769C(this, finishCallback);
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
  CharaGraphListMenuBase_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E2B7 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__);
    sub_B775C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_438E2B7 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabCommandCode_b__46_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v3, v4);
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
  CharaGraphListMenuBase_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E2B5 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__);
    sub_B775C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_438E2B5 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServant_b__44_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v3, v4);
}


void __fastcall CharaGraphListMenuBase__OnClickTabServantEquip(
        CharaGraphListMenuBase_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E2B6 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__);
    sub_B775C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    byte_438E2B6 = 1;
  }
  v3 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
  CharaGraphListMenuBase_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnClickTabServantEquip_b__45_0__,
    0LL);
  CharaGraphListMenuBase__OnClickTab(this, v3, v4);
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
    sub_B7769C(0LL, method);
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


void __fastcall CharaGraphListMenuBase__OnEndSelectServantStatus(
        CharaGraphListMenuBase_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v9; // x21
  UnityEngine_Behaviour_o *scrollView; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v19; // x2
  int v20; // w22
  CommonUI_o *Instance; // x20
  System_Action_o *v22; // x0
  bool v23; // cc
  System_Action_o *v24; // x22
  Il2CppObject *v25; // x1
  void *image; // x2

  if ( (byte_438E2C1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__);
    sub_B775C4(&CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo);
    byte_438E2C1 = 1;
  }
  v9 = sub_B77694(CharaGraphListMenuBase___c__DisplayClass66_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass66_0___ctor((CharaGraphListMenuBase___c__DisplayClass66_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)(v9 + 24) = questId;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_13;
  scrollView = (UnityEngine_Behaviour_o *)listViewManager->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(scrollView, 1, 0LL);
  if ( isDecide )
    CharaGraphListMenuBase__ModifyList(this, isNeedSort, v19);
  v20 = *(_DWORD *)(v9 + 24);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v22 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  v23 = v20 < 1;
  v24 = v22;
  if ( v23 )
  {
    v25 = (Il2CppObject *)this;
    image = this->klass[1]._1.image;
  }
  else
  {
    v25 = (Il2CppObject *)v9;
    LODWORD(image) = Method_CharaGraphListMenuBase___c__DisplayClass66_0__OnEndSelectServantStatus_b__0__;
  }
  System_Action___ctor(v22, v25, (intptr_t)image, 0LL);
  if ( !Instance )
LABEL_13:
    sub_B7769C(scrollView, v11);
  CommonUI__CloseServantStatusDialog(Instance, v24, 0LL);
}


bool __fastcall CharaGraphListMenuBase__OnLongTapServantLocal(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B7769C(this, item);
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
      sub_B7769C(0LL, iKind);
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

  if ( (byte_438E2C3 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
    byte_438E2C3 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindChoice__);
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  if ( !item )
    sub_B7769C(v7, v8);
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

  if ( (byte_438E2C2 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
    byte_438E2C2 = 1;
  }
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindLock__);
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 11, 0LL);
  if ( !item )
    sub_B7769C(v7, v8);
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
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  System_Action_bool__o *v11; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  const MethodInfo *v13; // x3
  CharaGraphCommandCodeListViewItem_o *v14; // [xsp+0h] [xbp-30h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E2C4 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
    sub_B775C4(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__);
    sub_B775C4(&Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438E2C4 = 1;
  }
  v14 = 0LL;
  svtItem = 0LL;
  v5 = Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindPush__);
  v6 = (System_Reflection_MethodBase_o *)sub_B775A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v14, v7);
  if ( !svtItem )
    sub_B7769C(v8, v9);
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  v11 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v11,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__OnCloseDialog_71_0__,
    (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase__OnSelectServantAtKindPush_g__EndPushRequest_71_1__,
    0LL);
  CharaGraphUtil__PushRequestWithConfirmDialog(UserServantEntity_k__BackingField, v11, v12, v13);
}


void __fastcall CharaGraphListMenuBase__OnSelectServantAtKindStatus(
        CharaGraphListMenuBase_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  CharaGraphListMenuBase_o *v4; // x19
  struct CharaGraphListViewManager_o *listViewManager; // x8
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t tabKind; // w22
  CommonUI_o *v10; // x20
  UserCommandCodeEntity_o *UserCommandCodeEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v12; // x22
  UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  ServantStatusDialog_EndDelegate_o *v14; // x22
  ServantStatusDialog_ResultDelegate_o *v15; // x22
  CharaGraphCommandCodeListViewItem_o *v16; // [xsp+0h] [xbp-30h] BYREF
  CharaGraphServantListViewItem_o *svtItem; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_438E2C0 & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&ServantStatusDialog_ResultDelegate_TypeInfo);
    this = (CharaGraphListMenuBase_o *)sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E2C0 = 1;
  }
  v16 = 0LL;
  svtItem = 0LL;
  listViewManager = v4->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_18;
  this = (CharaGraphListMenuBase_o *)listViewManager->fields.scrollView;
  if ( !this )
    goto LABEL_18;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0LL);
  CharaGraphListMenuBase__CastItem(item, &svtItem, &v16, v6);
  v7 = Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__;
  if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__ + 75) & 2) != 0 )
    v7 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnSelectServantAtKindStatus__);
  v8 = (System_Reflection_MethodBase_o *)sub_B775A8(v7, v7[3]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0LL);
  v4->fields.state = 6;
  tabKind = v4->fields.tabKind;
  this = (CharaGraphListMenuBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)this;
  if ( tabKind == 2 )
  {
    if ( v16 )
    {
      UserCommandCodeEntity_k__BackingField = v16->fields._UserCommandCodeEntity_k__BackingField;
      v12 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
      ServantStatusDialog_EndDelegate___ctor(
        v12,
        (Il2CppObject *)v4,
        (intptr_t)v4->klass->vtable._14_OnEndSelectServantStatus.methodPtr,
        0LL);
      if ( v10 )
      {
        CommonUI__OpenServantStatusDialog_18069176(v10, 0, UserCommandCodeEntity_k__BackingField, v12, 0LL, 0LL);
        return;
      }
    }
LABEL_18:
    sub_B7769C(this, item);
  }
  if ( !svtItem )
    goto LABEL_18;
  UserServantEntity_k__BackingField = svtItem->fields._UserServantEntity_k__BackingField;
  if ( tabKind == 1 )
  {
    v14 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
    ServantStatusDialog_EndDelegate___ctor(
      v14,
      (Il2CppObject *)v4,
      (intptr_t)v4->klass->vtable._13_OnEndSelectCommandCodeStatus.methodPtr,
      0LL);
    if ( !v10 )
      goto LABEL_18;
    CommonUI__OpenServantStatusDialog_18066864(v10, 0, UserServantEntity_k__BackingField, v14, 0LL);
  }
  else
  {
    v15 = (ServantStatusDialog_ResultDelegate_o *)sub_B77694(ServantStatusDialog_ResultDelegate_TypeInfo);
    ServantStatusDialog_ResultDelegate___ctor(
      v15,
      (Il2CppObject *)v4,
      (intptr_t)v4->klass->vtable._15_OnCloseServantStatusWithQuestId.methodPtr,
      0LL);
    if ( !v10 )
      goto LABEL_18;
    CommonUI__OpenServantStatusDialog_18067360(v10, 0, UserServantEntity_k__BackingField, v15, 0, 0LL);
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
  if ( (byte_438E2BF & 1) == 0 )
  {
    this = (CharaGraphListMenuBase_o *)sub_B775C4(&Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    byte_438E2BF = 1;
  }
  if ( !item )
    goto LABEL_17;
  if ( !item->fields._IsEnabled_k__BackingField )
  {
LABEL_8:
    v6 = Method_CharaGraphListMenuBase_OnSelectServantLocal__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnSelectServantLocal__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnSelectServantLocal__);
    v7 = (System_Reflection_MethodBase_o *)sub_B775A8(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
    CharaGraphListMenuBase__ToInputState(v4, 0, v8);
    return;
  }
  RootInfo_k__BackingField = v4->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_17:
    sub_B7769C(this, item);
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


void __fastcall CharaGraphListMenuBase__OnServantManageTabSelected(
        CharaGraphListMenuBase_o *this,
        int32_t modeKindToUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v17; // x21
  const MethodInfo *v18; // x2

  if ( (byte_438E2BA & 1) == 0 )
  {
    sub_B775C4(&Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    sub_B775C4(&CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__);
    sub_B775C4(&CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo);
    byte_438E2BA = 1;
  }
  v5 = sub_B77694(CharaGraphListMenuBase___c__DisplayClass53_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass53_0___ctor((CharaGraphListMenuBase___c__DisplayClass53_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = modeKindToUpdate;
  if ( this->fields.state != 2 )
    return;
  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
LABEL_13:
    sub_B7769C(v6, v7);
  if ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField != modeKindToUpdate )
  {
    v15 = Method_CharaGraphListMenuBase_OnServantManageTabSelected__;
    if ( (*((_BYTE *)Method_CharaGraphListMenuBase_OnServantManageTabSelected__ + 75) & 2) != 0 )
      v15 = (_QWORD *)sub_B775CC(Method_CharaGraphListMenuBase_OnServantManageTabSelected__);
    v16 = (System_Reflection_MethodBase_o *)sub_B775A8(v15, v15[3]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 0, 0LL);
    if ( *(_DWORD *)(v5 + 24) == 4 )
      EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    v17 = (CharaGraphListMenuBase_RequestCallbackFunc_o *)sub_B77694(CharaGraphListMenuBase_RequestCallbackFunc_TypeInfo);
    CharaGraphListMenuBase_RequestCallbackFunc___ctor(
      v17,
      (Il2CppObject *)v5,
      Method_CharaGraphListMenuBase___c__DisplayClass53_0__OnServantManageTabSelected_b__0__,
      0LL);
    CharaGraphListMenuBase__StatusRequest(this, v17, v18);
  }
}


void __fastcall CharaGraphListMenuBase__Open(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  CharaGraphSortOwnerAllKind_o *v5; // x22
  const MethodInfo *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x4
  struct CharaGraphDefine_CharaGraphRootInfo_o *v26; // x8
  System_Action_o *v27; // x20

  if ( (byte_438E2AC & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase_EndOpen__);
    sub_B775C4(&CharaGraphSortOwnerNoSave_TypeInfo);
    byte_438E2AC = 1;
  }
  if ( !this->fields._SortOwner_k__BackingField )
  {
    v5 = (CharaGraphSortOwnerAllKind_o *)sub_B77694(CharaGraphSortOwnerNoSave_TypeInfo);
    CharaGraphSortOwnerAllKind___ctor(v5, v6);
    this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v5;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._SortOwner_k__BackingField,
      (System_Int32_array **)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  ((void (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._6_SetupButtonCallback.method)(
    this,
    this->klass->vtable._7_CreateListViewPattern.methodPtr,
    method);
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.CallbackOnExit = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.CallbackOnExit,
      (System_Int32_array **)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( RootInfo_k__BackingField )
    {
      CharaGraphListMenuBase__SetTabKind(
        this,
        this->fields.tabKind,
        RootInfo_k__BackingField->fields._ModeKind_k__BackingField,
        0,
        v22);
      CharaGraphListMenuBase__EndOpen(this, v24);
      return;
    }
LABEL_13:
    sub_B7769C(gameObject, v21);
  }
  if ( !state )
  {
    this->fields.CallbackOnExit = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.CallbackOnExit,
      (System_Int32_array **)callback,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_13;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v26 = this->fields._RootInfo_k__BackingField;
    if ( !v26 )
      goto LABEL_13;
    CharaGraphListMenuBase__SetTabKind(this, this->fields.tabKind, v26->fields._ModeKind_k__BackingField, 1, v25);
    this->fields.state = 1;
    v27 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)this, Method_CharaGraphListMenuBase_EndOpen__, 0LL);
    BaseMenu__Open((BaseMenu_o *)this, v27, 0LL);
  }
}


void __fastcall CharaGraphListMenuBase__SetFilterButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_438E2C9 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2C9 = 1;
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
      sub_B7769C(v4, v5);
    CharaGraphSortButtonGroup__SetFilterButtonImage(v4, listViewManager->fields.sort, v6);
  }
}


void __fastcall CharaGraphListMenuBase__SetSortButtonImage(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  CharaGraphSortButtonGroup_o *v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x4
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_438E2CA & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2CA = 1;
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
      sub_B7769C(v4, v5);
    CharaGraphSortButtonGroup__SetSortButtonImage(
      v4,
      listViewManager->fields.sort,
      listViewManager->fields._BonusEventIds_k__BackingField,
      listViewManager->fields._ServantFilterIds_k__BackingField,
      v6);
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
  EventMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x4
  int v13; // w8
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  bool v15; // w23
  bool v16; // w20
  struct CharaGraphDefine_CharaGraphRootInfo_o *v17; // x10
  int32_t ModeKind_k__BackingField; // w9
  System_Collections_Generic_IEnumerable_TSource__o *EventValUpEventIdHash; // x0
  System_Int32_array *v20; // x21
  EventUpValSetupInfo_o *v21; // x22
  struct CharaGraphListViewManager_o *listViewManager; // x21
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x21
  const MethodInfo *v25; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *v26; // x8
  struct CharaGraphListViewManager_o *v27; // x20
  const MethodInfo *v28; // x2
  ListViewManager_o *v29; // x0
  const MethodInfo *v30; // x2
  UnityEngine_Object_o *v31; // x20
  CharaGraphManageButtonGroup_o *v32; // x19
  const MethodInfo *v33; // x2

  if ( (byte_438E2B2 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_EventMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&EventUpValSetupInfo_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2B2 = 1;
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
                                                        v12);
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    this->fields.tabKind = iTabKind;
    if ( !RootInfo_k__BackingField )
      goto LABEL_42;
    v15 = 0;
    RootInfo_k__BackingField->fields._ModeKind_k__BackingField = (int)Master_WarQuestSelectionMaster;
    v16 = 1;
LABEL_14:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (EventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    EventValUpEventIdHash = (System_Collections_Generic_IEnumerable_TSource__o *)EventMaster__GetEventValUpEventIdHash(
                                                                                   Master_WarQuestSelectionMaster,
                                                                                   0,
                                                                                   0LL,
                                                                                   0LL);
    v20 = System_Linq_Enumerable__ToArray_int_(
            EventValUpEventIdHash,
            (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
    v21 = (EventUpValSetupInfo_o *)sub_B77694(EventUpValSetupInfo_TypeInfo);
    EventUpValSetupInfo___ctor_24075556(v21, v20, 0, 0, 0, 0LL);
    listViewManager = this->fields.listViewManager;
    Master_WarQuestSelectionMaster = (EventMaster_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, _QWORD, EventUpValSetupInfo_o *, Il2CppMethodPointer))this->klass->vtable._7_CreateListViewPattern.method)(
                                                        this,
                                                        (unsigned int)this->fields.tabKind,
                                                        v21,
                                                        this->klass->vtable._8_GetLocalizationKeyForModeKindMain.methodPtr);
    if ( !listViewManager )
      goto LABEL_42;
    ((void (__fastcall *)(struct CharaGraphListViewManager_o *, EventMaster_o *, void *))listViewManager->klass->vtable._13_CreateList.method)(
      listViewManager,
      Master_WarQuestSelectionMaster,
      listViewManager->klass[1]._1.image);
    CharaGraphListMenuBase__SetupSortUi(this, v23);
    if ( v15 )
      goto LABEL_28;
    goto LABEL_20;
  }
  if ( this->fields.tabKind == iTabKind )
  {
    v13 = 0;
  }
  else
  {
    Master_WarQuestSelectionMaster = (EventMaster_o *)CharaGraphListMenuBase__DisplayPushButton(
                                                        this,
                                                        iTabKind == 0,
                                                        iModeKind,
                                                        0,
                                                        v12);
    iModeKind = (int)Master_WarQuestSelectionMaster;
    v13 = 1;
  }
  v17 = this->fields._RootInfo_k__BackingField;
  if ( !v17 )
    goto LABEL_42;
  ModeKind_k__BackingField = v17->fields._ModeKind_k__BackingField;
  this->fields.tabKind = iTabKind;
  v17->fields._ModeKind_k__BackingField = iModeKind;
  v15 = iModeKind == ModeKind_k__BackingField;
  if ( v13 )
  {
    v16 = 0;
    goto LABEL_14;
  }
  if ( iModeKind == ModeKind_k__BackingField )
    goto LABEL_28;
  v16 = 0;
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
    v26 = this->fields._RootInfo_k__BackingField;
    if ( !v26 )
      goto LABEL_42;
    Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.charaGraphManageButtonGroup;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_42;
    CharaGraphManageButtonGroup__UpdateDisplay(
      (CharaGraphManageButtonGroup_o *)Master_WarQuestSelectionMaster,
      v26->fields._ModeKind_k__BackingField,
      v16,
      v25);
  }
  CharaGraphListMenuBase__SetupExplanationLabel(this, v10);
LABEL_28:
  v27 = this->fields.listViewManager;
  if ( !v27 )
    goto LABEL_42;
  if ( this->fields.state == 2 )
  {
    CharaGraphListViewManager__ModifyList(this->fields.listViewManager, 0, 0, v11);
    CharaGraphListMenuBase__ToInputState(this, 1, v28);
  }
  else
  {
    v29 = (ListViewManager_o *)this->fields.listViewManager;
    v27->fields.initMode = 1;
    ListViewManager__set_IsInput(v29, 0, 0LL);
    CharaGraphListViewManager__RequestListObject(v27, 1, v30);
  }
  v31 = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = (EventMaster_o *)this->fields.listViewManager;
    if ( Master_WarQuestSelectionMaster )
    {
      v32 = this->fields.charaGraphManageButtonGroup;
      Master_WarQuestSelectionMaster = (EventMaster_o *)CharaGraphListViewManager__GetScaleButtonSpriteName(
                                                          (CharaGraphListViewManager_o *)Master_WarQuestSelectionMaster,
                                                          v10);
      if ( v32 )
      {
        CharaGraphManageButtonGroup__SetScaleButtonSprite(v32, (System_String_o *)Master_WarQuestSelectionMaster, v33);
        return;
      }
    }
LABEL_42:
    sub_B7769C(Master_WarQuestSelectionMaster, v10);
  }
}


void __fastcall CharaGraphListMenuBase__SetupButtonCallback(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *listViewManager; // x21
  System_Action_o *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_Object_o *charaGraphKindTabButtonGroup; // x20
  struct CharaGraphKindTabButtonGroup_o *v14; // x20
  System_Action_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct CharaGraphKindTabButtonGroup_o *v22; // x20
  System_Action_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct CharaGraphKindTabButtonGroup_o *v30; // x20
  System_Action_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Object_o *charaGraphManageButtonGroup; // x20
  struct CharaGraphManageButtonGroup_o *v39; // x20
  System_Action_o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct CharaGraphManageButtonGroup_o *v47; // x20
  System_Action_o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  struct CharaGraphManageButtonGroup_o *v55; // x20
  System_Action_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct CharaGraphManageButtonGroup_o *v63; // x20
  System_Action_o *v64; // x21
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct CharaGraphManageButtonGroup_o *v71; // x20
  System_Action_o *v72; // x21
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  struct CharaGraphSortButtonGroup_o *v80; // x20
  System_Action_o *v81; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  struct CharaGraphSortButtonGroup_o *v88; // x20
  System_Action_o *v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct CharaGraphSortButtonGroup_o *v96; // x20
  System_Action_o *v97; // x21
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  struct CharaGraphSortButtonGroup_o *v104; // x20
  System_Action_o *v105; // x21
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7

  if ( (byte_438E2AD & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickBonusFilterKind__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickFilterKind__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickScaleChange__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickSortKind__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTabChoice__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTabCommandCode__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTabLock__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTabMain__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTabPush__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTabServantEquip__);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnClickTabServant__);
    sub_B775C4(&Method_CharaGraphListMenuBase_SetSortButtonImage__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2AD = 1;
  }
  listViewManager = this->fields.listViewManager;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_CharaGraphListMenuBase_SetSortButtonImage__, 0LL);
  if ( !listViewManager )
    goto LABEL_32;
  listViewManager->fields._OnSetSortButtonImage_k__BackingField = v4;
  sub_B77560(
    (BattleServantConfConponent_o *)&listViewManager->fields._OnSetSortButtonImage_k__BackingField,
    (System_Int32_array **)v4,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  charaGraphKindTabButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphKindTabButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphKindTabButtonGroup, 0LL, 0LL) )
  {
    v14 = this->fields.charaGraphKindTabButtonGroup;
    v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServant__, 0LL);
    if ( !v14 )
      goto LABEL_32;
    v14->fields._OnClickTabServant_k__BackingField = v15;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->fields._OnClickTabServant_k__BackingField,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = this->fields.charaGraphKindTabButtonGroup;
    v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabServantEquip__, 0LL);
    if ( !v22 )
      goto LABEL_32;
    v22->fields._OnClickTabServantEquip_k__BackingField = v23;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->fields._OnClickTabServantEquip_k__BackingField,
      (System_Int32_array **)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = this->fields.charaGraphKindTabButtonGroup;
    v31 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabCommandCode__, 0LL);
    if ( !v30 )
      goto LABEL_32;
    v30->fields._OnClickTabCommandCode_k__BackingField = v31;
    sub_B77560(
      (BattleServantConfConponent_o *)&v30->fields._OnClickTabCommandCode_k__BackingField,
      (System_Int32_array **)v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  charaGraphManageButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphManageButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphManageButtonGroup, 0LL, 0LL) )
  {
    v39 = this->fields.charaGraphManageButtonGroup;
    v40 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v40, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabMain__, 0LL);
    if ( !v39 )
      goto LABEL_32;
    v39->fields._OnClickTabMain_k__BackingField = v40;
    sub_B77560(
      (BattleServantConfConponent_o *)&v39->fields._OnClickTabMain_k__BackingField,
      (System_Int32_array **)v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
    v47 = this->fields.charaGraphManageButtonGroup;
    v48 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v48, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabLock__, 0LL);
    if ( !v47 )
      goto LABEL_32;
    v47->fields._OnClickTabLock_k__BackingField = v48;
    sub_B77560(
      (BattleServantConfConponent_o *)&v47->fields._OnClickTabLock_k__BackingField,
      (System_Int32_array **)v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
    v55 = this->fields.charaGraphManageButtonGroup;
    v56 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v56, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabChoice__, 0LL);
    if ( !v55 )
      goto LABEL_32;
    v55->fields._OnClickTabChoice_k__BackingField = v56;
    sub_B77560(
      (BattleServantConfConponent_o *)&v55->fields._OnClickTabChoice_k__BackingField,
      (System_Int32_array **)v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    v63 = this->fields.charaGraphManageButtonGroup;
    v64 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v64, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickTabPush__, 0LL);
    if ( !v63 )
      goto LABEL_32;
    v63->fields._OnClickTabPush_k__BackingField = v64;
    sub_B77560(
      (BattleServantConfConponent_o *)&v63->fields._OnClickTabPush_k__BackingField,
      (System_Int32_array **)v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    v71 = this->fields.charaGraphManageButtonGroup;
    v72 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v72, (Il2CppObject *)this, (intptr_t)Method_CharaGraphListMenuBase_OnClickScaleChange__, 0LL);
    if ( !v71 )
      goto LABEL_32;
    v71->fields._OnClickScaleChange_k__BackingField = v72;
    sub_B77560(
      (BattleServantConfConponent_o *)&v71->fields._OnClickScaleChange_k__BackingField,
      (System_Int32_array **)v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  charaGraphSortButtonGroup = (UnityEngine_Object_o *)this->fields.charaGraphSortButtonGroup;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraphSortButtonGroup, 0LL, 0LL) )
  {
    v80 = this->fields.charaGraphSortButtonGroup;
    v81 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v81, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickFilterKind__, 0LL);
    if ( v80 )
    {
      v80->fields._OnClickFilterKind_k__BackingField = v81;
      sub_B77560(
        (BattleServantConfConponent_o *)&v80->fields._OnClickFilterKind_k__BackingField,
        (System_Int32_array **)v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87);
      v88 = this->fields.charaGraphSortButtonGroup;
      v89 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v89, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortKind__, 0LL);
      if ( v88 )
      {
        v88->fields._OnClickSortKind_k__BackingField = v89;
        sub_B77560(
          (BattleServantConfConponent_o *)&v88->fields._OnClickSortKind_k__BackingField,
          (System_Int32_array **)v89,
          v90,
          v91,
          v92,
          v93,
          v94,
          v95);
        v96 = this->fields.charaGraphSortButtonGroup;
        v97 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v97, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickSortAscendingOrder__, 0LL);
        if ( v96 )
        {
          v96->fields._OnClickSortAscendingOrder_k__BackingField = v97;
          sub_B77560(
            (BattleServantConfConponent_o *)&v96->fields._OnClickSortAscendingOrder_k__BackingField,
            (System_Int32_array **)v97,
            v98,
            v99,
            v100,
            v101,
            v102,
            v103);
          v104 = this->fields.charaGraphSortButtonGroup;
          v105 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(v105, (Il2CppObject *)this, Method_CharaGraphListMenuBase_OnClickBonusFilterKind__, 0LL);
          if ( v104 )
          {
            v104->fields._OnClickBonusFilterKind_k__BackingField = v105;
            sub_B77560(
              (BattleServantConfConponent_o *)&v104->fields._OnClickBonusFilterKind_k__BackingField,
              (System_Int32_array **)v105,
              v106,
              v107,
              v108,
              v109,
              v110,
              v111);
            return;
          }
        }
      }
    }
LABEL_32:
    sub_B7769C(v5, v6);
  }
}


void __fastcall CharaGraphListMenuBase__SetupExplanationLabel(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *explanationLabel; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  System_String_o *v7; // x20
  __int64 *v8; // x8
  UILabel_o *v9; // x19

  if ( (byte_438E2B3 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    byte_438E2B3 = 1;
  }
  explanationLabel = (UnityEngine_Object_o *)this->fields.explanationLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = (System_String_o *)UnityEngine_Object__op_Equality(explanationLabel, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
    if ( !RootInfo_k__BackingField )
LABEL_20:
      sub_B7769C(v4, v5);
    switch ( RootInfo_k__BackingField->fields._ModeKind_k__BackingField )
    {
      case 0:
        v7 = (System_String_o *)((__int64 (__fastcall *)(CharaGraphListMenuBase_o *, Il2CppMethodPointer))this->klass->vtable._8_GetLocalizationKeyForModeKindMain.method)(
                                  this,
                                  this->klass->vtable._9_OnLongTapServantLocal.methodPtr);
        if ( !v7 )
          return;
        goto LABEL_15;
      case 2:
        v8 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
        goto LABEL_14;
      case 3:
        v8 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
        goto LABEL_14;
      case 4:
        v8 = &StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
LABEL_14:
        v7 = (System_String_o *)*v8;
        if ( !*v8 )
          return;
LABEL_15:
        v9 = this->fields.explanationLabel;
        if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v4 = LocalizationManager__Get(v7, 0LL);
        if ( !v9 )
          goto LABEL_20;
        UILabel__set_text(v9, v4, 0LL);
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

  if ( (byte_438E2B0 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2B0 = 1;
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
      sub_B7769C(v10, v8);
    }
    CharaGraphKindTabButtonGroup__SetupTabButtons(v10, iTabKind, isInit, v11);
  }
}


void __fastcall CharaGraphListMenuBase__SetupSortUi(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *charaGraphSortButtonGroup; // x20
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  CharaGraphSortButtonGroup_o *v7; // x0
  const MethodInfo *v8; // x2
  struct CharaGraphListViewManager_o *listViewManager; // x8

  if ( (byte_438E2C8 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E2C8 = 1;
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
    v7 = this->fields.charaGraphSortButtonGroup;
    if ( !v7
      || (CharaGraphSortButtonGroup__SetFilterButtonState(v7, 0, 1, v6),
          (listViewManager = this->fields.listViewManager) == 0LL)
      || (v7 = this->fields.charaGraphSortButtonGroup) == 0LL )
    {
      sub_B7769C(v7, v5);
    }
    CharaGraphSortButtonGroup__SetBonusFilterButton(v7, listViewManager->fields.sort, v8);
  }
}


void __fastcall CharaGraphListMenuBase__StatusRequest(
        CharaGraphListMenuBase_o *this,
        CharaGraphListMenuBase_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x22
  CharaGraphListViewManager_o *listViewManager; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CharaGraphListViewManager_o **v14; // x23
  const MethodInfo *v15; // x3
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8
  int32_t ModeKind_k__BackingField; // w8
  bool v18; // w20
  bool v19; // w21
  int32_t tabKind; // w23
  NetworkManager_ResultCallbackFunc_o *v21; // x19
  System_Int64_array *unlockArray; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *lockArray; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_438E2C5 & 1) == 0 )
  {
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase___c__DisplayClass72_0__StatusRequest_g__EndStatusSync_0__);
    sub_B775C4(&CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo);
    byte_438E2C5 = 1;
  }
  lockArray = 0LL;
  unlockArray = 0LL;
  v5 = sub_B77694(CharaGraphListMenuBase___c__DisplayClass72_0_TypeInfo);
  CharaGraphListMenuBase___c__DisplayClass72_0___ctor((CharaGraphListMenuBase___c__DisplayClass72_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = callback;
  v14 = (CharaGraphListViewManager_o **)(v5 + 16);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)callback, v8, v9, v10, v11, v12, v13);
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
    CharaGraphListViewManager__GetSwapChoiceArray(listViewManager, &lockArray, &unlockArray, v15);
    v19 = 0;
    v18 = 1;
  }
  else if ( ModeKind_k__BackingField == 2 )
  {
    listViewManager = this->fields.listViewManager;
    if ( !listViewManager )
      goto LABEL_28;
    CharaGraphListViewManager__GetSwapLockArray(listViewManager, &lockArray, &unlockArray, v15);
    v18 = 0;
    v19 = 1;
  }
  else
  {
    v18 = 0;
    v19 = 0;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)lockArray, 0LL)
    && BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)unlockArray, 0LL) )
  {
    listViewManager = *v14;
    if ( *v14 )
    {
      CharaGraphListMenuBase_RequestCallbackFunc__Invoke(
        (CharaGraphListMenuBase_RequestCallbackFunc_o *)listViewManager,
        0,
        0LL);
      return;
    }
LABEL_28:
    sub_B7769C(listViewManager, v7);
  }
  tabKind = this->fields.tabKind;
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v21,
    (Il2CppObject *)v5,
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
                                                       v21,
                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CommandCodeStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_28;
    CommandCodeStatusSyncRequest__beginRequest(
      (CommandCodeStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      v19,
      v18,
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
                                                       v21,
                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( !listViewManager )
      goto LABEL_28;
    CardStatusSyncRequest__beginRequest(
      (CardStatusSyncRequest_o *)listViewManager,
      lockArray,
      unlockArray,
      0,
      v19,
      v18,
      0LL);
  }
}


void __fastcall CharaGraphListMenuBase__ToInputState(
        CharaGraphListMenuBase_o *this,
        bool changeMode,
        const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *listViewManager; // x20
  CharaGraphListViewManager_CallbackFunc_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  MethodInfo *v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_438E2C6 & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CharaGraphListMenuBase_OnSelectServant__);
    byte_438E2C6 = 1;
  }
  this->fields.state = 2;
  listViewManager = this->fields.listViewManager;
  v6 = (CharaGraphListViewManager_CallbackFunc_o *)sub_B77694(CharaGraphListViewManager_CallbackFunc_TypeInfo);
  CharaGraphListViewManager_CallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_CharaGraphListMenuBase_OnSelectServant__,
    0LL);
  if ( !listViewManager )
    sub_B7769C(v7, v8);
  if ( changeMode )
  {
    CharaGraphListViewManager__SetMode(listViewManager, 2, v6, v10);
  }
  else
  {
    listViewManager->fields.FuncOnClick = v6;
    sub_B77560(
      (BattleServantConfConponent_o *)&listViewManager->fields.FuncOnClick,
      (System_Int32_array **)v6,
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
    sub_B7769C(this, _);
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
    sub_B7769C(v4, v5);
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
    sub_B7769C(this, _);
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
    sub_B7769C(0LL, result);
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

  if ( (byte_438E2AA & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    byte_438E2AA = 1;
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
    v9 = sub_B6BFDC(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  CharaGraphListMenuBase__remove_CallbackOnExit(v11, v12, v13);
}


int32_t __fastcall CharaGraphListMenuBase__get_ModeKind(CharaGraphListMenuBase_o *this, const MethodInfo *method)
{
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x8

  RootInfo_k__BackingField = this->fields._RootInfo_k__BackingField;
  if ( !RootInfo_k__BackingField )
    sub_B7769C(this, method);
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

  if ( (byte_438E2AB & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    byte_438E2AB = 1;
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
    v9 = sub_B6BFDC(p_CallbackOnExit, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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
    sub_B7769C(this, value);
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
  sub_B77560(
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
  sub_B77560(p_method);
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
  if ( (byte_438855A & 1) == 0 )
  {
    sub_B775C4(&CharaGraphListMenuBase_ResultKind_TypeInfo);
    byte_438855A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(CharaGraphListMenuBase_ResultKind_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_CallbackFunc__EndInvoke(
        CharaGraphListMenuBase_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  CharaGraphListMenuBase_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  CharaGraphListMenuBase_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
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
  sub_B77560(p_method);
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
  if ( (byte_438855B & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438855B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CharaGraphListMenuBase_RequestCallbackFunc__EndInvoke(
        CharaGraphListMenuBase_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CharaGraphListMenuBase_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CharaGraphListMenuBase_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
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
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
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
    sub_B7769C(0LL, isRequest);
  CallbackOnExit = _4__this->fields.CallbackOnExit;
  p_CallbackOnExit = &_4__this->fields.CallbackOnExit;
  v6 = CallbackOnExit;
  if ( CallbackOnExit )
  {
    *p_CallbackOnExit = 0LL;
    sub_B77560(p_CallbackOnExit);
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
    sub_B7769C(_4__this, isRequest);
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
    sub_B7769C(0LL, method);
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
void __fastcall ClassBoardLockReleaseConditionDialog___ctor(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  this->fields.onClickDecideSeKind = 8;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockReleaseConditionDialog__EndClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_438D3D6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438D3D6 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
}


void __fastcall ClassBoardLockReleaseConditionDialog__EndOpen(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ClassBoardLockReleaseConditionDialog__Init(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_438D3D7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_ClassBoardLockReleaseConditionDialog_EndClose__);
    sub_B775C4(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    byte_438D3D7 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B775CC(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B775A8(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
    v5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0LL);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardLockReleaseConditionDialog__Open(
        ClassBoardLockReleaseConditionDialog_o *this,
        ClassBoardSquare_o *square,
        bool isOpened,
        System_Action_o *decideFunc,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 v21; // x10
  ClassBoardLockModel_o *v22; // x23
  UILabel_o *titleLabel; // x22
  __int128 v24; // x0 OVERLAPPED
  int v25; // w2
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v27; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v30; // x0
  UILabel_o *explanationLabel; // x21
  __int64 *v32; // x8
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v34; // x20

  if ( (byte_438D3D5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&ClassBoardLockModel_TypeInfo);
    sub_B775C4(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3140/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/);
    sub_B775C4(&StringLiteral_3139/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/);
    sub_B775C4(&StringLiteral_3137/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/);
    sub_B775C4(&StringLiteral_3138/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/);
    byte_438D3D5 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)isOpened,
    (System_String_array **)decideFunc,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  if ( !square )
    goto LABEL_37;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( SquareModel_k__BackingField
    && (v21 = *(&ClassBoardLockModel_TypeInfo->_2.bitflags2 + 1),
        *(&SquareModel_k__BackingField->klass->_2.bitflags2 + 1) >= (unsigned int)v21) )
  {
    if ( (ClassBoardLockModel_c *)SquareModel_k__BackingField->klass->_2.typeHierarchy[v21 - 1] == ClassBoardLockModel_TypeInfo )
      v22 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  this->fields.closeFunc = decideFunc;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)decideFunc,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3140/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, v12, 0LL);
  if ( !v22 )
    goto LABEL_37;
  *(ClassBoardCondData_o *)&v24 = ClassBoardLockModel__get_CondData(v22, v13);
  v25 = DWORD2(v24);
  *((_QWORD *)&v24 + 1) = v24;
  ClassBoardBaseDialog__SetUpLockReleaseCondition(
    (ClassBoardBaseDialog_o *)this,
    *(ClassBoardCondData_o *)((char *)&v24 + 8),
    0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_37;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v27 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v27;
      p_offset += 2;
      if ( v27 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_20:
    p_method = sub_B0F4C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v30 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v30, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( isOpened )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = &StringLiteral_3138/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v32 = &StringLiteral_3139/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
  }
  v12 = LocalizationManager__Get((System_String_o *)*v32, 0LL);
  if ( !explanationLabel )
    goto LABEL_37;
  UILabel__set_text(explanationLabel, v12, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3137/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0LL);
  if ( !closeBtnLabel )
LABEL_37:
    sub_B7769C(v12, v13);
  UILabel__set_text(closeBtnLabel, v12, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v34 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
}


System_String_o *__fastcall ClassBoardLockReleaseConditionDialog__get_closeBtnPath(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_438D3D8 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_15769/*"Window/CloseBtn"*/);
    byte_438D3D8 = 1;
  }
  return (System_String_o *)StringLiteral_15769/*"Window/CloseBtn"*/;
}
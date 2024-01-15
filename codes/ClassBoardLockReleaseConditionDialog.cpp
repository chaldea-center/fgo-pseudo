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

  if ( (byte_40FB989 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB989 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *v11; // x20

  if ( (byte_40FB98A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ClassBoardLockReleaseConditionDialog_EndClose__, v3);
    sub_B16FFC(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__, v4);
    byte_40FB98A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B17004(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B16FE0(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0LL);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v11, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 v27; // x10
  ClassBoardLockModel_o *v28; // x23
  UILabel_o *titleLabel; // x22
  System_String_o *v30; // x0
  const MethodInfo *v31; // x1
  __int128 v32; // x0 OVERLAPPED
  int v33; // w2
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v35; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v38; // x0
  UILabel_o *explanationLabel; // x21
  __int64 *v40; // x8
  System_String_o *v41; // x0
  UILabel_o *closeBtnLabel; // x20
  System_String_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_o *v48; // x20

  if ( (byte_40FB988 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, square);
    sub_B16FFC(&ClassBoardLockModel_TypeInfo, v12);
    sub_B16FFC(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__, v13);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_3014/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, v16);
    sub_B16FFC(&StringLiteral_3013/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/, v17);
    sub_B16FFC(&StringLiteral_3011/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, v18);
    sub_B16FFC(&StringLiteral_3012/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/, v19);
    byte_40FB988 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B16F98(
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
    && (v27 = *(&ClassBoardLockModel_TypeInfo->_2.bitflags2 + 1),
        *(&SquareModel_k__BackingField->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
  {
    if ( (ClassBoardLockModel_c *)SquareModel_k__BackingField->klass->_2.typeHierarchy[v27 - 1] == ClassBoardLockModel_TypeInfo )
      v28 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  this->fields.closeFunc = decideFunc;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)decideFunc,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, v30, 0LL);
  if ( !v28 )
    goto LABEL_37;
  *(ClassBoardCondData_o *)&v32 = ClassBoardLockModel__get_CondData(v28, v31);
  v33 = DWORD2(v32);
  *((_QWORD *)&v32 + 1) = v32;
  ClassBoardBaseDialog__SetUpLockReleaseCondition(
    (ClassBoardBaseDialog_o *)this,
    *(ClassBoardCondData_o *)((char *)&v32 + 8),
    0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_37;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v35;
      p_offset += 2;
      if ( v35 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_20:
    p_method = sub_AAFEF8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v38 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v38, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( isOpened )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = &StringLiteral_3012/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = &StringLiteral_3013/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
  }
  v41 = LocalizationManager__Get((System_String_o *)*v40, 0LL);
  if ( !explanationLabel )
    goto LABEL_37;
  UILabel__set_text(explanationLabel, v41, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v43 = LocalizationManager__Get((System_String_o *)StringLiteral_3011/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0LL);
  if ( !closeBtnLabel )
LABEL_37:
    sub_B170D4();
  UILabel__set_text(closeBtnLabel, v43, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
  System_Action___ctor(v48, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
}


System_String_o *__fastcall ClassBoardLockReleaseConditionDialog__get_closeBtnPath(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FB98B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_15415/*"Window/CloseBtn"*/, method);
    byte_40FB98B = 1;
  }
  return (System_String_o *)StringLiteral_15415/*"Window/CloseBtn"*/;
}
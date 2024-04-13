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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EA824 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA824 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_42EA825 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardLockReleaseConditionDialog_EndClose__, v5, v6, v7);
    sub_B5D5C4(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__, v8, v9, v10);
    byte_42EA825 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v11 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 75) & 2) != 0 )
      v11 = (_QWORD *)sub_B5D5CC(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v12 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v11, v11[3]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0LL);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0LL);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v13, 0LL);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_String_o *v36; // x0
  const MethodInfo *v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 v45; // x10
  ClassBoardLockModel_o *v46; // x23
  UILabel_o *titleLabel; // x22
  __int128 v48; // x0 OVERLAPPED
  int v49; // w2
  __int64 v50; // x3
  IClassBoardSquareModel_c *klass; // x8
  unsigned __int64 v52; // x10
  IClassBoardSquareModel_c **p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v55; // x0
  UILabel_o *explanationLabel; // x21
  __int64 *v57; // x8
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v59; // x20

  if ( (byte_42EA823 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)square, isOpened, decideFunc);
    sub_B5D5C4(&ClassBoardLockModel_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__, v15, v16, v17);
    sub_B5D5C4(&IClassBoardSquareModel_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3082/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_3081/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_3079/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_3080/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/, v33, v34, v35);
    byte_42EA823 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B5D560(
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
    && (v45 = *(&ClassBoardLockModel_TypeInfo->_2.bitflags2 + 1),
        *(&SquareModel_k__BackingField->klass->_2.bitflags2 + 1) >= (unsigned int)v45) )
  {
    if ( (ClassBoardLockModel_c *)SquareModel_k__BackingField->klass->_2.typeHierarchy[v45 - 1] == ClassBoardLockModel_TypeInfo )
      v46 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v46 = 0LL;
  }
  else
  {
    v46 = 0LL;
  }
  this->fields.closeFunc = decideFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)decideFunc,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3082/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_37;
  UILabel__set_text(titleLabel, v36, 0LL);
  if ( !v46 )
    goto LABEL_37;
  *(ClassBoardCondData_o *)&v48 = ClassBoardLockModel__get_CondData(v46, v37);
  v49 = DWORD2(v48);
  *((_QWORD *)&v48 + 1) = v48;
  ClassBoardBaseDialog__SetUpLockReleaseCondition(
    (ClassBoardBaseDialog_o *)this,
    *(ClassBoardCondData_o *)((char *)&v48 + 8),
    0LL);
  if ( !SquareModel_k__BackingField )
    goto LABEL_37;
  klass = SquareModel_k__BackingField->klass;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
  {
    v52 = 0LL;
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v52;
      p_offset += 2;
      if ( v52 >= *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.bitflags1 )
        goto LABEL_20;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_20:
    p_method = sub_AF54C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL, v50);
  }
  v55 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v55, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( isOpened )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_3080/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v57 = &StringLiteral_3081/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
  }
  v36 = LocalizationManager__Get((System_String_o *)*v57, 0LL);
  if ( !explanationLabel )
    goto LABEL_37;
  UILabel__set_text(explanationLabel, v36, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v36 = LocalizationManager__Get((System_String_o *)StringLiteral_3079/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0LL);
  if ( !closeBtnLabel )
LABEL_37:
    sub_B5D69C(v36, v37);
  UILabel__set_text(closeBtnLabel, v36, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v59 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v59, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v59, 0, 0LL);
}


System_String_o *__fastcall ClassBoardLockReleaseConditionDialog__get_closeBtnPath(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA826 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15668/*"Window/CloseBtn"*/, (_DWORD)method, v2, v3);
    byte_42EA826 = 1;
  }
  return (System_String_o *)StringLiteral_15668/*"Window/CloseBtn"*/;
}
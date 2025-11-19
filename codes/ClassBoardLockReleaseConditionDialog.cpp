void ClassBoardLockReleaseConditionDialog___ctor(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  this->fields.onClickDecideSeKind = 8;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardLockReleaseConditionDialog__EndClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CB9EC4 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9EC4 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(gameObject, 0);
}


void ClassBoardLockReleaseConditionDialog__EndOpen(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ClassBoardLockReleaseConditionDialog__Init(ClassBoardLockReleaseConditionDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardLockReleaseConditionDialog__OnClickClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20

  if ( (byte_4CB9EC5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardLockReleaseConditionDialog_EndClose__);
    sub_1C6BA08(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    byte_4CB9EC5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C6BA20(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0);
    v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v5, 0);
  }
}


void ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4CB9EC6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__);
    byte_4CB9EC6 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__,
      0);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0);
    this->fields.isButtonEnable = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardLockReleaseConditionDialog__Open(
        ClassBoardLockReleaseConditionDialog_o *this,
        ClassBoardSquare_o *square,
        bool isOpened,
        System_Action_o *decideFunc,
        const MethodInfo *method)
{
  System_String_o *v9; // x0
  __int64 v10; // x1
  char v11; // w2
  const MethodInfo *v12; // x3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 naturalAligment; // x10
  ClassBoardLockModel_o *v15; // x23
  UILabel_o *titleLabel; // x22
  __int128 v17; // x0 OVERLAPPED
  int v18; // w2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v20; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v23; // x0
  UILabel_o *explanationLabel; // x21
  __int64 *v25; // x8
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v27; // x20

  if ( (byte_4CB9EC3 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&ClassBoardLockModel_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__);
    sub_1C6BA08(&IClassBoardSquareModel_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_3400/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/);
    sub_1C6BA08(&StringLiteral_3399/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/);
    sub_1C6BA08(&StringLiteral_3397/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/);
    sub_1C6BA08(&StringLiteral_3398/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/);
    byte_4CB9EC3 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1C6B9AC(
    (CGThumbnailListItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isOpened,
    (const MethodInfo *)decideFunc);
  if ( !square )
    goto LABEL_31;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( SquareModel_k__BackingField
    && (naturalAligment = ClassBoardLockModel_TypeInfo->_2.naturalAligment,
        SquareModel_k__BackingField->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ClassBoardLockModel_c *)SquareModel_k__BackingField->klass->_2.typeHierarchy[naturalAligment - 1] == ClassBoardLockModel_TypeInfo )
      v15 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v15 = 0;
  }
  else
  {
    v15 = 0;
  }
  this->fields.closeFunc = decideFunc;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v11, v12);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3400/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v9, 0), !v15)
    || (*(ClassBoardCondData_o *)&v17 = ClassBoardLockModel__get_CondData(v15, 0),
        v18 = DWORD2(v17),
        *((_QWORD *)&v17 + 1) = v17,
        ClassBoardBaseDialog__SetUpLockReleaseCondition(
          (ClassBoardBaseDialog_o *)this,
          *(ClassBoardCondData_o *)((char *)&v17 + 8),
          0),
        !SquareModel_k__BackingField) )
  {
LABEL_31:
    sub_1C6BC60(v9, v10);
  }
  klass = SquareModel_k__BackingField->klass;
  v20 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_19;
    }
    v22 = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6];
  }
  else
  {
LABEL_19:
    v22 = sub_1C41D90(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6);
  }
  v23 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v22)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(v22 + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v23, 0);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOpened )
      goto LABEL_23;
LABEL_25:
    v25 = &StringLiteral_3399/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
    goto LABEL_26;
  }
  if ( !isOpened )
    goto LABEL_25;
LABEL_23:
  v25 = &StringLiteral_3398/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
LABEL_26:
  v9 = LocalizationManager__Get((System_String_o *)*v25, 0);
  if ( !explanationLabel )
    goto LABEL_31;
  UILabel__set_text(explanationLabel, v9, 0);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0);
  if ( !closeBtnLabel )
    goto LABEL_31;
  UILabel__set_text(closeBtnLabel, v9, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0);
  v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0, 0);
}


void ClassBoardLockReleaseConditionDialog___OnClickItemInfoListWindow_b__11_0(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *ClassBoardLockReleaseConditionDialog__get_closeBtnPath(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB9EC7 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_15639/*"Window/CloseBtn"*/);
    byte_4CB9EC7 = 1;
  }
  return (System_String_o *)StringLiteral_15639/*"Window/CloseBtn"*/;
}
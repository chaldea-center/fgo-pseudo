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

  if ( (byte_4A5E5B2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E5B2 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5E5B3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardLockReleaseConditionDialog_EndClose__);
    sub_1B885B0(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    byte_4A5E5B3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0LL);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v5, 0LL);
  }
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A5E5B4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__);
    byte_4A5E5B4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v3,
      (Il2CppObject *)this,
      Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v3, 0LL);
    this->fields.isButtonEnable = 0;
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
  System_String_o *v9; // x0
  const MethodInfo *v10; // x1
  char v11; // w2
  int32_t v12; // w3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 methodPtr_low; // x10
  ClassBoardLockModel_o *v15; // x23
  UILabel_o *titleLabel; // x22
  __int128 v17; // x0 OVERLAPPED
  int v18; // w2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v20; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v23; // x0
  UILabel_o *explanationLabel; // x21
  __int64 *v25; // x8
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v27; // x20

  if ( (byte_4A5E5B1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ClassBoardLockModel_TypeInfo);
    sub_1B885B0(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__);
    sub_1B885B0(&IClassBoardSquareModel_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3507/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/);
    sub_1B885B0(&StringLiteral_3506/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/);
    sub_1B885B0(&StringLiteral_3504/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3505/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/);
    byte_4A5E5B1 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    isOpened,
    (int32_t)decideFunc);
  if ( !square )
    goto LABEL_31;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( SquareModel_k__BackingField
    && (methodPtr_low = LOBYTE(ClassBoardLockModel_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(SquareModel_k__BackingField->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ClassBoardLockModel_c *)SquareModel_k__BackingField->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLockModel_TypeInfo )
      v15 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  this->fields.closeFunc = decideFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v11, v12);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3507/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v9, 0LL), !v15)
    || (*(ClassBoardCondData_o *)&v17 = ClassBoardLockModel__get_CondData(v15, v10),
        v18 = DWORD2(v17),
        *((_QWORD *)&v17 + 1) = v17,
        ClassBoardBaseDialog__SetUpLockReleaseCondition(
          (ClassBoardBaseDialog_o *)this,
          *(ClassBoardCondData_o *)((char *)&v17 + 8),
          0LL),
        !SquareModel_k__BackingField) )
  {
LABEL_31:
    sub_1B8880C(v9, v10);
  }
  klass = SquareModel_k__BackingField->klass;
  v20 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      p_offset += 2;
      if ( !v20 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1BDA590(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v23 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v23, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOpened )
      goto LABEL_23;
LABEL_25:
    v25 = &StringLiteral_3506/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
    goto LABEL_26;
  }
  if ( !isOpened )
    goto LABEL_25;
LABEL_23:
  v25 = &StringLiteral_3505/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
LABEL_26:
  v9 = LocalizationManager__Get((System_String_o *)*v25, 0LL);
  if ( !explanationLabel )
    goto LABEL_31;
  UILabel__set_text(explanationLabel, v9, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3504/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_31;
  UILabel__set_text(closeBtnLabel, v9, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v27 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


void __fastcall ClassBoardLockReleaseConditionDialog___OnClickItemInfoListWindow_b__11_0(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


System_String_o *__fastcall ClassBoardLockReleaseConditionDialog__get_closeBtnPath(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E5B5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15642/*"Window/CloseBtn"*/);
    byte_4A5E5B5 = 1;
  }
  return (System_String_o *)StringLiteral_15642/*"Window/CloseBtn"*/;
}
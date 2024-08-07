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

  if ( (byte_4A01EEC & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, method);
    byte_4A01EEC = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
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
    sub_1B64C5C(0LL, v4);
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
  System_Action_o *v7; // x20

  if ( (byte_4A01EED & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_ClassBoardLockReleaseConditionDialog_EndClose__, v3);
    sub_1B64A00(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__, v4);
    byte_4A01EED = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B64A18(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B649E4(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
    v7 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0LL);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4A01EEE & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, method);
    sub_1B64A00(&Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__, v3);
    byte_4A01EEE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v4, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  char v19; // w2
  int32_t v20; // w3
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 methodPtr_low; // x10
  ClassBoardLockModel_o *v23; // x23
  UILabel_o *titleLabel; // x22
  __int128 v25; // x0 OVERLAPPED
  int v26; // w2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v28; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v31; // x0
  UILabel_o *explanationLabel; // x21
  __int64 *v33; // x8
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v35; // x20

  if ( (byte_4A01EEB & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, square);
    sub_1B64A00(&ClassBoardLockModel_TypeInfo, v9);
    sub_1B64A00(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__, v10);
    sub_1B64A00(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1B64A00(&LocalizationManager_TypeInfo, v12);
    sub_1B64A00(&StringLiteral_3485/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, v13);
    sub_1B64A00(&StringLiteral_3484/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/, v14);
    sub_1B64A00(&StringLiteral_3482/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, v15);
    sub_1B64A00(&StringLiteral_3483/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/, v16);
    byte_4A01EEB = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B649A4(
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
      v23 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
  }
  this->fields.closeFunc = decideFunc;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)decideFunc, v19, v20);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3485/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v17, 0LL), !v23)
    || (*(ClassBoardCondData_o *)&v25 = ClassBoardLockModel__get_CondData(v23, v18),
        v26 = DWORD2(v25),
        *((_QWORD *)&v25 + 1) = v25,
        ClassBoardBaseDialog__SetUpLockReleaseCondition(
          (ClassBoardBaseDialog_o *)this,
          *(ClassBoardCondData_o *)((char *)&v25 + 8),
          0LL),
        !SquareModel_k__BackingField) )
  {
LABEL_31:
    sub_1B64C5C(v17, v18);
  }
  klass = SquareModel_k__BackingField->klass;
  v28 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v28;
      p_offset += 2;
      if ( !v28 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1BB69E0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v31 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v31, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOpened )
      goto LABEL_23;
LABEL_25:
    v33 = &StringLiteral_3484/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
    goto LABEL_26;
  }
  if ( !isOpened )
    goto LABEL_25;
LABEL_23:
  v33 = &StringLiteral_3483/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
LABEL_26:
  v17 = LocalizationManager__Get((System_String_o *)*v33, 0LL);
  if ( !explanationLabel )
    goto LABEL_31;
  UILabel__set_text(explanationLabel, v17, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3482/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_31;
  UILabel__set_text(closeBtnLabel, v17, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v35 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v35, 0, 0LL);
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
  if ( (byte_4A01EEF & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_15577/*"Window/CloseBtn"*/, method);
    byte_4A01EEF = 1;
  }
  return (System_String_o *)StringLiteral_15577/*"Window/CloseBtn"*/;
}
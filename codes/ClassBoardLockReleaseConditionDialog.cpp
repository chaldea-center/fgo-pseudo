void __fastcall ClassBoardLockReleaseConditionDialog___ctor(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  this->fields.onClickDecideSeKind = 8;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, method);
}


void __fastcall ClassBoardLockReleaseConditionDialog__EndClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C00DD3 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00DD3 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
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
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C2E388(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, v5);
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4C00DD4 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardLockReleaseConditionDialog_EndClose__, v3);
    sub_1C2E12C(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__, v4);
    byte_4C00DD4 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2E144(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2E110(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, v7);
    v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0LL);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, v9);
  }
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C00DD5 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__, v3);
    byte_4C00DD5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(
      v4,
      (Il2CppObject *)this,
      Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v4, v5);
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
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_String_o *v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 methodPtr_low; // x10
  ClassBoardLockModel_o *v30; // x23
  UILabel_o *titleLabel; // x22
  __int128 v32; // x0 OVERLAPPED
  int v33; // w2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v35; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v38; // x0
  const MethodInfo *v39; // x2
  UILabel_o *explanationLabel; // x21
  __int64 *v41; // x8
  UILabel_o *closeBtnLabel; // x20
  System_Action_o *v43; // x20

  if ( (byte_4C00DD2 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, square);
    sub_1C2E12C(&ClassBoardLockModel_TypeInfo, v12);
    sub_1C2E12C(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__, v13);
    sub_1C2E12C(&IClassBoardSquareModel_TypeInfo, v14);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v15);
    sub_1C2E12C(&StringLiteral_3545/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, v16);
    sub_1C2E12C(&StringLiteral_3544/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/, v17);
    sub_1C2E12C(&StringLiteral_3542/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, v18);
    sub_1C2E12C(&StringLiteral_3543/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/, v19);
    byte_4C00DD2 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquare,
    (int64_t)square,
    isOpened,
    (int32_t)decideFunc,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( !square )
    goto LABEL_31;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( SquareModel_k__BackingField
    && (methodPtr_low = LOBYTE(ClassBoardLockModel_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(SquareModel_k__BackingField->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (ClassBoardLockModel_c *)SquareModel_k__BackingField->klass->_2.typeHierarchy[methodPtr_low - 1] == ClassBoardLockModel_TypeInfo )
      v30 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  this->fields.closeFunc = decideFunc;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)decideFunc, v22, v23, v24, v25, v26, v27);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3545/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v20, 0LL), !v30)
    || (*(ClassBoardCondData_o *)&v32 = ClassBoardLockModel__get_CondData(v30, 0LL),
        v33 = DWORD2(v32),
        *((_QWORD *)&v32 + 1) = v32,
        ClassBoardBaseDialog__SetUpLockReleaseCondition(
          (ClassBoardBaseDialog_o *)this,
          *(ClassBoardCondData_o *)((char *)&v32 + 8),
          (const MethodInfo *)v32),
        !SquareModel_k__BackingField) )
  {
LABEL_31:
    sub_1C2E388(v20, v21);
  }
  klass = SquareModel_k__BackingField->klass;
  v35 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v35;
      p_offset += 2;
      if ( !v35 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1C8010C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v38 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v38, v39);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( isOpened )
      goto LABEL_23;
LABEL_25:
    v41 = &StringLiteral_3544/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
    goto LABEL_26;
  }
  if ( !isOpened )
    goto LABEL_25;
LABEL_23:
  v41 = &StringLiteral_3543/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
LABEL_26:
  v20 = LocalizationManager__Get((System_String_o *)*v41, 0LL);
  if ( !explanationLabel )
    goto LABEL_31;
  UILabel__set_text(explanationLabel, v20, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3542/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_31;
  UILabel__set_text(closeBtnLabel, v20, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v43 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v43, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0LL);
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
  if ( (byte_4C00DD6 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_15923/*"Window/CloseBtn"*/, method);
    byte_4C00DD6 = 1;
  }
  return (System_String_o *)StringLiteral_15923/*"Window/CloseBtn"*/;
}
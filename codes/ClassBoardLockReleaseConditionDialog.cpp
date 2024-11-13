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
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B196E0 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B196E0 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
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
    sub_1BCAA3C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickClose(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4B196E1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardLockReleaseConditionDialog_EndClose__, v4, v5);
    sub_1BCA7E0(&Method_ClassBoardLockReleaseConditionDialog_OnClickClose__, v6, v7);
    byte_4B196E1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v8 = Method_ClassBoardLockReleaseConditionDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardLockReleaseConditionDialog_OnClickClose__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_ClassBoardLockReleaseConditionDialog_OnClickClose__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    this->fields.isButtonEnable = 0;
    ClassBoardBaseDialog__SetDisableClickItemIcon((ClassBoardBaseDialog_o *)this, 0LL);
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndClose__, 0LL);
    ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v13, 0LL);
  }
}


void __fastcall ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow(
        ClassBoardLockReleaseConditionDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B196E2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__, v5, v6);
    byte_4B196E2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ClassBoardLockReleaseConditionDialog__OnClickItemInfoListWindow_b__11_0__,
      0LL);
    ClassBoardBaseDialog__OpenItemInfoListWindow((ClassBoardBaseDialog_o *)this, v7, 0LL);
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
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  System_String_o *v28; // x0
  const MethodInfo *v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x21
  __int64 methodPtr_low; // x10
  ClassBoardLockModel_o *v38; // x23
  __int64 v39; // x1
  UILabel_o *titleLabel; // x22
  __int128 v41; // x0 OVERLAPPED
  int v42; // w2
  IClassBoardSquareModel_c *klass; // x8
  __int64 v44; // x9
  IClassBoardSquareModel_c **p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *v47; // x0
  __int64 v48; // x1
  UILabel_o *explanationLabel; // x21
  __int64 *v50; // x8
  __int64 v51; // x1
  UILabel_o *closeBtnLabel; // x20
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  System_Action_o *v56; // x20

  if ( (byte_4B196DF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, square, isOpened);
    sub_1BCA7E0(&ClassBoardLockModel_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_ClassBoardLockReleaseConditionDialog_EndOpen__, v14, v15);
    sub_1BCA7E0(&IClassBoardSquareModel_TypeInfo, v16, v17);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v18, v19);
    sub_1BCA7E0(&StringLiteral_3533/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_3532/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_3530/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_3531/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/, v26, v27);
    byte_4B196DF = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1BCA784(
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
      v38 = (ClassBoardLockModel_o *)SquareModel_k__BackingField;
    else
      v38 = 0LL;
  }
  else
  {
    v38 = 0LL;
  }
  this->fields.closeFunc = decideFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)decideFunc, v30, v31, v32, v33, v34, v35);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v39);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3533/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, v28, 0LL), !v38)
    || (*(ClassBoardCondData_o *)&v41 = ClassBoardLockModel__get_CondData(v38, v29),
        v42 = DWORD2(v41),
        *((_QWORD *)&v41 + 1) = v41,
        ClassBoardBaseDialog__SetUpLockReleaseCondition(
          (ClassBoardBaseDialog_o *)this,
          *(ClassBoardCondData_o *)((char *)&v41 + 8),
          0LL),
        !SquareModel_k__BackingField) )
  {
LABEL_31:
    sub_1BCAA3C(v28, v29);
  }
  klass = SquareModel_k__BackingField->klass;
  v44 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = (IClassBoardSquareModel_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v44;
      p_offset += 2;
      if ( !v44 )
        goto LABEL_19;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 6].method;
  }
  else
  {
LABEL_19:
    p_method = sub_1C1C7C0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 6LL);
  }
  v47 = (System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                                    SquareModel_k__BackingField,
                                                                                    *(_QWORD *)(p_method + 8));
  ClassBoardBaseDialog__SetUpItemList((ClassBoardBaseDialog_o *)this, v47, 0LL);
  explanationLabel = this->fields.explanationLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
    if ( isOpened )
      goto LABEL_23;
LABEL_25:
    v50 = &StringLiteral_3532/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_BEFORE"*/;
    goto LABEL_26;
  }
  if ( !isOpened )
    goto LABEL_25;
LABEL_23:
  v50 = &StringLiteral_3531/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_EXPLANATION_AFTER"*/;
LABEL_26:
  v28 = LocalizationManager__Get((System_String_o *)*v50, 0LL);
  if ( !explanationLabel )
    goto LABEL_31;
  UILabel__set_text(explanationLabel, v28, 0LL);
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v51);
  v28 = LocalizationManager__Get((System_String_o *)StringLiteral_3530/*"CLASS_BOARD_LOCK_RELEASE_CONDITION_DIALOG_DECIDE"*/, 0LL);
  if ( !closeBtnLabel )
    goto LABEL_31;
  UILabel__set_text(closeBtnLabel, v28, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v56 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v53, v54, v55);
  System_Action___ctor(v56, (Il2CppObject *)this, Method_ClassBoardLockReleaseConditionDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v56, 0, 0LL);
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
  __int64 v2; // x2

  if ( (byte_4B196E3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15809/*"Window/CloseBtn"*/, method, v2);
    byte_4B196E3 = 1;
  }
  return (System_String_o *)StringLiteral_15809/*"Window/CloseBtn"*/;
}
void __fastcall ClassBoardSquareDetailDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BCB0D0 & 1) == 0 )
  {
    sub_1C1ABD4(&ClassBoardSquareDetailDialog_TypeInfo, v1);
    byte_4BCB0D0 = 1;
  }
  *ClassBoardSquareDetailDialog_TypeInfo->static_fields = (struct ClassBoardSquareDetailDialog_StaticFields)0x40200000431E0000LL;
}


void __fastcall ClassBoardSquareDetailDialog___ctor(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.onClickResetSeKind = 0x100000008LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__Close(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4BCB0CD & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_ClassBoardSquareDetailDialog_EndClose__, v3);
    byte_4BCB0CD = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__EndClose(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4BCB0CE & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCB0CE = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__EndOpen(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall ClassBoardSquareDetailDialog__Init(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C1AE30(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__OnClickClose(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4BCB0CC & 1) == 0 )
  {
    sub_1C1ABD4(&Method_ClassBoardSquareDetailDialog_OnClickClose__, method);
    byte_4BCB0CC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareDetailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardSquareDetailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_ClassBoardSquareDetailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0, 0LL);
    ClassBoardSquareDetailDialog__Close(this, v5);
  }
}


void __fastcall ClassBoardSquareDetailDialog__Open(
        ClassBoardSquareDetailDialog_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v22; // x0
  __int64 v23; // x1
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  ClassBoardSquareDetailDialog_c *v25; // x0
  System_Action_o *v26; // x20

  if ( (byte_4BCB0CB & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, square);
    sub_1C1ABD4(&Method_ClassBoardSquareDetailDialog_EndOpen__, v11);
    sub_1C1ABD4(&ClassBoardSquareDetailDialog_TypeInfo, v12);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v13);
    sub_1C1ABD4(&StringLiteral_3557/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, v14);
    byte_4BCB0CB = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquare,
    (int64_t)square,
    (int64_t)closeFunc,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.closeFunc, (int64_t)closeFunc, v15, v16, v17, v18, v19, v20);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3557/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel || (UILabel__set_text(titleLabel, v22, 0LL), !square) )
    sub_1C1AE30(v22, v23);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  v25 = ClassBoardSquareDetailDialog_TypeInfo;
  if ( !ClassBoardSquareDetailDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSquareDetailDialog_TypeInfo);
    v25 = ClassBoardSquareDetailDialog_TypeInfo;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    SquareModel_k__BackingField,
    v25->static_fields->disableScrollViewSize,
    v25->static_fields->disableScrollViewPosY,
    0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v26 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSquareDetailDialog__get_closeBtnPath(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BCB0CF & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_15899/*"Window/CloseBtn"*/, method);
    byte_4BCB0CF = 1;
  }
  return (System_String_o *)StringLiteral_15899/*"Window/CloseBtn"*/;
}
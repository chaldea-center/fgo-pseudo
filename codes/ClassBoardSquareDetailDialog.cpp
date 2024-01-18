void __fastcall ClassBoardSquareDetailDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4189588 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSquareDetailDialog_TypeInfo, v1);
    byte_4189588 = 1;
  }
  ClassBoardSquareDetailDialog_TypeInfo->static_fields->disableScrollViewSize = 158.0;
  ClassBoardSquareDetailDialog_TypeInfo->static_fields->disableScrollViewPosY = 2.5;
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

  if ( (byte_4189585 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ClassBoardSquareDetailDialog_EndClose__, v3);
    byte_4189585 = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__EndClose(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4189586 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189586 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
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
    sub_B2C434(0LL, v4);
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

  if ( (byte_4189584 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardSquareDetailDialog_OnClickClose__, method);
    byte_4189584 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareDetailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardSquareDetailDialog_OnClickClose__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_ClassBoardSquareDetailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardSquareDetailDialog__Close(this, v5);
  }
}


void __fastcall ClassBoardSquareDetailDialog__Open(
        ClassBoardSquareDetailDialog_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v22; // x0
  __int64 v23; // x1
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  ClassBoardSquareDetailDialog_c *v25; // x0
  System_Action_o *v26; // x20

  if ( (byte_4189583 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, square);
    sub_B2C35C(&Method_ClassBoardSquareDetailDialog_EndOpen__, v11);
    sub_B2C35C(&ClassBoardSquareDetailDialog_TypeInfo, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_3032/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, v14);
    byte_4189583 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeFunc,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3032/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel || (UILabel__set_text(titleLabel, v22, 0LL), !square) )
    sub_B2C434(v22, v23);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  v25 = ClassBoardSquareDetailDialog_TypeInfo;
  if ( (BYTE3(ClassBoardSquareDetailDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSquareDetailDialog_TypeInfo->_2.cctor_finished )
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
  v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSquareDetailDialog__get_closeBtnPath(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4189587 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15478/*"Window/CloseBtn"*/, method);
    byte_4189587 = 1;
  }
  return (System_String_o *)StringLiteral_15478/*"Window/CloseBtn"*/;
}
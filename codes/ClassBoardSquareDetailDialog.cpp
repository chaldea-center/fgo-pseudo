void __fastcall ClassBoardSquareDetailDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BE59B & 1) == 0 )
  {
    sub_1B4CF90(&ClassBoardSquareDetailDialog_TypeInfo, v1);
    byte_49BE59B = 1;
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

  if ( (byte_49BE598 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_ClassBoardSquareDetailDialog_EndClose__, v3);
    byte_49BE598 = 1;
  }
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__EndClose(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_49BE599 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE599 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
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
    sub_1B4D1EC(0LL, v4);
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

  if ( (byte_49BE597 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ClassBoardSquareDetailDialog_OnClickClose__, method);
    byte_49BE597 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareDetailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardSquareDetailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_ClassBoardSquareDetailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UILabel_o *titleLabel; // x21
  System_String_o *v14; // x0
  __int64 v15; // x1
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  ClassBoardSquareDetailDialog_c *v17; // x0
  System_Action_o *v18; // x20

  if ( (byte_49BE596 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, square);
    sub_1B4CF90(&Method_ClassBoardSquareDetailDialog_EndOpen__, v7);
    sub_1B4CF90(&ClassBoardSquareDetailDialog_TypeInfo, v8);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_3409/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, v10);
    byte_49BE596 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.classBoardSquare, (int32_t)square, (int32_t)closeFunc, method);
  this->fields.closeFunc = closeFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v11, v12);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3409/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel || (UILabel__set_text(titleLabel, v14, 0LL), !square) )
    sub_1B4D1EC(v14, v15);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  v17 = ClassBoardSquareDetailDialog_TypeInfo;
  if ( !ClassBoardSquareDetailDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSquareDetailDialog_TypeInfo);
    v17 = ClassBoardSquareDetailDialog_TypeInfo;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    SquareModel_k__BackingField,
    v17->static_fields->disableScrollViewSize,
    v17->static_fields->disableScrollViewPosY,
    0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v18 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v18, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSquareDetailDialog__get_closeBtnPath(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BE59A & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_15342/*"Window/CloseBtn"*/, method);
    byte_49BE59A = 1;
  }
  return (System_String_o *)StringLiteral_15342/*"Window/CloseBtn"*/;
}
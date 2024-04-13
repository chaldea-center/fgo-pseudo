void __fastcall ClassBoardSquareDetailDialog___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA89D & 1) == 0 )
  {
    sub_B5D5C4(&ClassBoardSquareDetailDialog_TypeInfo, v1, v2, v3);
    byte_42EA89D = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EA89A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ClassBoardSquareDetailDialog_EndClose__, v5, v6, v7);
    byte_42EA89A = 1;
  }
  this->fields.isButtonEnable = 0;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v8, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__EndClose(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42EA89B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA89B = 1;
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__OnClickClose(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_42EA899 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardSquareDetailDialog_OnClickClose__, (_DWORD)method, v2, v3);
    byte_42EA899 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_ClassBoardSquareDetailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardSquareDetailDialog_OnClickClose__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_ClassBoardSquareDetailDialog_OnClickClose__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, this->fields.onClickCloseSeKind, 0LL);
    ClassBoardSquareDetailDialog__Close(this, v7);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UILabel_o *titleLabel; // x21
  System_String_o *v30; // x0
  __int64 v31; // x1
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  ClassBoardSquareDetailDialog_c *v33; // x0
  System_Action_o *v34; // x20

  if ( (byte_42EA898 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)square, (_DWORD)closeFunc, method);
    sub_B5D5C4(&Method_ClassBoardSquareDetailDialog_EndOpen__, v11, v12, v13);
    sub_B5D5C4(&ClassBoardSquareDetailDialog_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_3091/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, v20, v21, v22);
    byte_42EA898 = 1;
  }
  this->fields.classBoardSquare = square;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.classBoardSquare,
    (System_Int32_array **)square,
    (System_String_array **)closeFunc,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeFunc,
    (System_Int32_array **)closeFunc,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3091/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel || (UILabel__set_text(titleLabel, v30, 0LL), !square) )
    sub_B5D69C(v30, v31);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  v33 = ClassBoardSquareDetailDialog_TypeInfo;
  if ( (BYTE3(ClassBoardSquareDetailDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardSquareDetailDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSquareDetailDialog_TypeInfo);
    v33 = ClassBoardSquareDetailDialog_TypeInfo;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    SquareModel_k__BackingField,
    v33->static_fields->disableScrollViewSize,
    v33->static_fields->disableScrollViewPosY,
    0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSquareDetailDialog__get_closeBtnPath(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA89C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_15668/*"Window/CloseBtn"*/, (_DWORD)method, v2, v3);
    byte_42EA89C = 1;
  }
  return (System_String_o *)StringLiteral_15668/*"Window/CloseBtn"*/;
}
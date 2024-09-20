void __fastcall ClassBoardSquareDetailDialog___cctor(const MethodInfo *method)
{
  if ( (byte_4A5E60F & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardSquareDetailDialog_TypeInfo);
    byte_4A5E60F = 1;
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
  System_Action_o *v3; // x20

  if ( (byte_4A5E60C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquareDetailDialog_EndClose__);
    byte_4A5E60C = 1;
  }
  this->fields.isButtonEnable = 0;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndClose__, 0LL);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v3, 0LL);
}


void __fastcall ClassBoardSquareDetailDialog__EndClose(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A5E60D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E60D = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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
    sub_1B8880C(0LL, v4);
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

  if ( (byte_4A5E60B & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardSquareDetailDialog_OnClickClose__);
    byte_4A5E60B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareDetailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardSquareDetailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_ClassBoardSquareDetailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  int32_t v7; // w2
  int32_t v8; // w3
  UILabel_o *titleLabel; // x21
  System_String_o *v10; // x0
  __int64 v11; // x1
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  ClassBoardSquareDetailDialog_c *v13; // x0
  System_Action_o *v14; // x20

  if ( (byte_4A5E60A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ClassBoardSquareDetailDialog_EndOpen__);
    sub_1B885B0(&ClassBoardSquareDetailDialog_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3516/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/);
    byte_4A5E60A = 1;
  }
  this->fields.classBoardSquare = square;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (int32_t)closeFunc,
    (int32_t)method);
  this->fields.closeFunc = closeFunc;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeFunc, (int32_t)closeFunc, v7, v8);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3516/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel || (UILabel__set_text(titleLabel, v10, 0LL), !square) )
    sub_1B8880C(v10, v11);
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  v13 = ClassBoardSquareDetailDialog_TypeInfo;
  if ( !ClassBoardSquareDetailDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSquareDetailDialog_TypeInfo);
    v13 = ClassBoardSquareDetailDialog_TypeInfo;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    SquareModel_k__BackingField,
    v13->static_fields->disableScrollViewSize,
    v13->static_fields->disableScrollViewPosY,
    0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v14, 0, 0LL);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardSquareDetailDialog__get_closeBtnPath(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E60E & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15642/*"Window/CloseBtn"*/);
    byte_4A5E60E = 1;
  }
  return (System_String_o *)StringLiteral_15642/*"Window/CloseBtn"*/;
}
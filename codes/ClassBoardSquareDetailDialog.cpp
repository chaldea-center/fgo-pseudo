void ClassBoardSquareDetailDialog___cctor(const MethodInfo *method)
{
  if ( (byte_593C524 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSquareDetailDialog_TypeInfo);
    byte_593C524 = 1;
  }
  *ClassBoardSquareDetailDialog_TypeInfo->static_fields = (struct ClassBoardSquareDetailDialog_StaticFields)0x40200000431E0000LL;
}


void ClassBoardSquareDetailDialog___ctor(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.onClickResetSeKind = 0x100000008LL;
  ClassBoardBaseDialog___ctor((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardSquareDetailDialog__Close(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_593C521 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSquareDetailDialog_EndClose__);
    byte_593C521 = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndClose__, 0);
  ClassBoardBaseDialog__Close((ClassBoardBaseDialog_o *)this, v4, 0);
}


void ClassBoardSquareDetailDialog__EndClose(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_593C522 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C522 = 1;
  }
  ActionExtensions__Call(this->fields.closeFunc, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void ClassBoardSquareDetailDialog__EndOpen(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void ClassBoardSquareDetailDialog__Init(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  ClassBoardBaseDialog__Init((ClassBoardBaseDialog_o *)this, 0);
}


void ClassBoardSquareDetailDialog__OnClickClose(ClassBoardSquareDetailDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_593C520 & 1) == 0 )
  {
    sub_21FFC50(&Method_ClassBoardSquareDetailDialog_OnClickClose__);
    byte_593C520 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_ClassBoardSquareDetailDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_ClassBoardSquareDetailDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_ClassBoardSquareDetailDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickCloseSeKind, 0, 0);
    ClassBoardSquareDetailDialog__Close(this, v5);
  }
}


void ClassBoardSquareDetailDialog__Open(
        ClassBoardSquareDetailDialog_o *this,
        ClassBoardSquare_o *square,
        System_Action_o *closeFunc,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  __int64 v17; // x1
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  ClassStatisticsInfo_array *ClassStatisticsInfos; // x21
  UILabel_o *titleLabel; // x22
  System_String_o *v22; // x0
  __int64 v23; // x1
  ClassBoardSquareDetailDialog_c *v24; // x0
  IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  System_Action_o *v26; // x20

  if ( (byte_593C51F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardSquareDetailDialog_EndOpen__);
    sub_21FFC50(&ClassBoardSquareDetailDialog_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_UserClassStatisticsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3559/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/);
    byte_593C51F = 1;
  }
  this->fields.classBoardSquare = square;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.classBoardSquare,
    (int32_t)square,
    (System_String_o *)closeFunc,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.closeFunc = closeFunc;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeFunc,
    (int32_t)closeFunc,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserClassStatisticsMaster___);
  if ( Master_object )
    ClassStatisticsInfos = UserClassStatisticsMaster__GetClassStatisticsInfos(
                             (UserClassStatisticsMaster_o *)Master_object,
                             0);
  else
    ClassStatisticsInfos = 0;
  titleLabel = this->fields.titleLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_3559/*"CLASS_BOARD_SQUARE_DETAIL_DIALOG_TITLE"*/, 0);
  if ( !titleLabel || (UILabel__set_text(titleLabel, v22, 0), !square) )
    sub_21FFECC(v22, v23);
  v24 = ClassBoardSquareDetailDialog_TypeInfo;
  SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField;
  if ( !*(&ClassBoardSquareDetailDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardSquareDetailDialog_TypeInfo, v23);
    v24 = ClassBoardSquareDetailDialog_TypeInfo;
  }
  ClassBoardBaseDialog__SetUpEffectDetail(
    (ClassBoardBaseDialog_o *)this,
    SquareModel_k__BackingField,
    v24->static_fields->disableScrollViewSize,
    v24->static_fields->disableScrollViewPosY,
    ClassStatisticsInfos,
    0);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, Method_ClassBoardSquareDetailDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
  ClassBoardBaseDialog__SetEffectScrollInitPos((ClassBoardBaseDialog_o *)this, 0);
}


System_String_o *ClassBoardSquareDetailDialog__get_closeBtnPath(
        ClassBoardSquareDetailDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C523 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16228/*"Window/CloseBtn"*/);
    byte_593C523 = 1;
  }
  return (System_String_o *)StringLiteral_16228/*"Window/CloseBtn"*/;
}
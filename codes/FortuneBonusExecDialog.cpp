void __fastcall FortuneBonusExecDialog___ctor(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418A844 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A844 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortuneBonusExecDialog__CheckSerializeField(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall FortuneBonusExecDialog__EndOpened(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall FortuneBonusExecDialog__OnClickOkButton(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  BattleServantConfConponent_o *p_clickFunc; // x19
  System_Action_o *clickFunc; // t1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_418A842 & 1) == 0 )
  {
    sub_B2C35C(&Method_FortuneBonusExecDialog_OnClickOkButton__, method);
    byte_418A842 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_FortuneBonusExecDialog_OnClickOkButton__;
    if ( (*((_BYTE *)Method_FortuneBonusExecDialog_OnClickOkButton__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_FortuneBonusExecDialog_OnClickOkButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
    ActionExtensions__Call(clickFunc, 0LL);
    p_clickFunc->klass = 0LL;
    sub_B2C2F8(p_clickFunc, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall FortuneBonusExecDialog__Open(
        FortuneBonusExecDialog_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *descriptionTexture; // x0
  UILabel_o *okBtnLabel; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Action_o *v16; // x20

  if ( (byte_418A841 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, nextAction);
    sub_B2C35C(&Method_FortuneBonusExecDialog_EndOpened__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_6441/*"FORTUNE_BONUS_EXEC_BUTTON"*/, v7);
    byte_418A841 = 1;
  }
  descriptionTexture = (UnityEngine_Component_o *)this->fields.descriptionTexture;
  if ( !descriptionTexture )
    goto LABEL_11;
  descriptionTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(descriptionTexture, 0LL);
  if ( !descriptionTexture )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)descriptionTexture, 1, 0LL);
  descriptionTexture = (UnityEngine_Component_o *)this->fields.descriptionTexture;
  if ( !descriptionTexture )
    goto LABEL_11;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))descriptionTexture->klass[2]._1.typeMetadataHandle)(
    descriptionTexture,
    descriptionTexture->klass[2]._1.interopData);
  okBtnLabel = this->fields.okBtnLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  descriptionTexture = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6441/*"FORTUNE_BONUS_EXEC_BUTTON"*/, 0LL);
  if ( !okBtnLabel )
LABEL_11:
    sub_B2C434(descriptionTexture, nextAction);
  UILabel__set_text(okBtnLabel, (System_String_o *)descriptionTexture, 0LL);
  this->fields.clickFunc = nextAction;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)nextAction,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_FortuneBonusExecDialog_EndOpened__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v16, 0, 0LL);
}


void __fastcall FortuneBonusExecDialog__Release(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_418A843 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A843 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(v5, 0LL);
}
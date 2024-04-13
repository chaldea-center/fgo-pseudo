void __fastcall FortuneBonusExecDialog___ctor(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBDC7 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDC7 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  BattleServantConfConponent_o *p_clickFunc; // x19
  System_Action_o *clickFunc; // t1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EBDC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_FortuneBonusExecDialog_OnClickOkButton__, (_DWORD)method, v2, v3);
    byte_42EBDC5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v5 = Method_FortuneBonusExecDialog_OnClickOkButton__;
    if ( (*((_BYTE *)Method_FortuneBonusExecDialog_OnClickOkButton__ + 75) & 2) != 0 )
      v5 = (_QWORD *)sub_B5D5CC(Method_FortuneBonusExecDialog_OnClickOkButton__);
    v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (BattleServantConfConponent_o *)&this->fields.clickFunc;
    ActionExtensions__Call(clickFunc, 0LL);
    p_clickFunc->klass = 0LL;
    sub_B5D560(p_clickFunc, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall FortuneBonusExecDialog__Open(
        FortuneBonusExecDialog_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_Component_o *descriptionTexture; // x0
  UILabel_o *okBtnLabel; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Action_o *v23; // x20

  if ( (byte_42EBDC4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)nextAction, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FortuneBonusExecDialog_EndOpened__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_6520/*"FORTUNE_BONUS_EXEC_BUTTON"*/, v12, v13, v14);
    byte_42EBDC4 = 1;
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
  descriptionTexture = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6520/*"FORTUNE_BONUS_EXEC_BUTTON"*/, 0LL);
  if ( !okBtnLabel )
LABEL_11:
    sub_B5D69C(descriptionTexture, nextAction);
  UILabel__set_text(okBtnLabel, (System_String_o *)descriptionTexture, 0LL);
  this->fields.clickFunc = nextAction;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.clickFunc,
    (System_Int32_array **)nextAction,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_FortuneBonusExecDialog_EndOpened__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
}


void __fastcall FortuneBonusExecDialog__Release(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19

  if ( (byte_42EBDC6 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBDC6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v7, 0LL);
}
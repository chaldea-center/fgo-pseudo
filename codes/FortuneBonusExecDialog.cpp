void FortuneBonusExecDialog___ctor(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D33B68 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D33B68 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortuneBonusExecDialog__CheckSerializeField(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  ;
}


void FortuneBonusExecDialog__EndOpened(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void FortuneBonusExecDialog__OnClickOkButton(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  GrandQuestFolderBoardItem_o *p_clickFunc; // x19
  System_Action_o *clickFunc; // t1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D33B66 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FortuneBonusExecDialog_OnClickOkButton__);
    byte_4D33B66 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_FortuneBonusExecDialog_OnClickOkButton__;
    if ( (*((_BYTE *)Method_FortuneBonusExecDialog_OnClickOkButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FortuneBonusExecDialog_OnClickOkButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (GrandQuestFolderBoardItem_o *)&this->fields.clickFunc;
    ActionExtensions__Call(clickFunc, 0);
    p_clickFunc->klass = 0;
    sub_1C93A78(p_clickFunc, 0, v7, v8, v9, v10, v11, v12);
  }
}


void FortuneBonusExecDialog__Open(
        FortuneBonusExecDialog_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  UnityEngine_Component_o *descriptionTexture; // x0
  UILabel_o *okBtnLabel; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Action_o *v13; // x20

  if ( (byte_4D33B65 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FortuneBonusExecDialog_EndOpened__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6536/*"FORTUNE_BONUS_EXEC_BUTTON"*/);
    byte_4D33B65 = 1;
  }
  descriptionTexture = (UnityEngine_Component_o *)this->fields.descriptionTexture;
  if ( !descriptionTexture )
    goto LABEL_10;
  descriptionTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(descriptionTexture, 0);
  if ( !descriptionTexture )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)descriptionTexture, 1, 0);
  descriptionTexture = (UnityEngine_Component_o *)this->fields.descriptionTexture;
  if ( !descriptionTexture )
    goto LABEL_10;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))descriptionTexture->klass[2]._1.parent)(
    descriptionTexture,
    descriptionTexture->klass[2]._1.generic_class);
  okBtnLabel = this->fields.okBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  descriptionTexture = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6536/*"FORTUNE_BONUS_EXEC_BUTTON"*/, 0);
  if ( !okBtnLabel )
LABEL_10:
    sub_1C93D2C(descriptionTexture, nextAction);
  UILabel__set_text(okBtnLabel, (System_String_o *)descriptionTexture, 0);
  this->fields.clickFunc = nextAction;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.clickFunc, (int32_t)nextAction, v7, v8, v9, v10, v11, v12);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0);
  v13 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FortuneBonusExecDialog_EndOpened__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v13, 0, 0, 0);
}


void FortuneBonusExecDialog__Release(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4D33B67 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D33B67 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(v5, 0);
}
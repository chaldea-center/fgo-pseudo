void __fastcall FortuneBonusExecDialog___ctor(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5DBBD & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5DBBD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
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
  ServantStatusBattleListViewItem_o *p_clickFunc; // x19
  System_Action_o *clickFunc; // t1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DBBB & 1) == 0 )
  {
    sub_1B885B0(&Method_FortuneBonusExecDialog_OnClickOkButton__);
    byte_4A5DBBB = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_FortuneBonusExecDialog_OnClickOkButton__;
    if ( (*((_BYTE *)Method_FortuneBonusExecDialog_OnClickOkButton__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortuneBonusExecDialog_OnClickOkButton__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0LL);
    clickFunc = this->fields.clickFunc;
    p_clickFunc = (ServantStatusBattleListViewItem_o *)&this->fields.clickFunc;
    ActionExtensions__Call(clickFunc, 0LL);
    p_clickFunc->klass = 0LL;
    sub_1B88554(p_clickFunc, 0, v7, v8);
  }
}


void __fastcall FortuneBonusExecDialog__Open(
        FortuneBonusExecDialog_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  UnityEngine_Component_o *descriptionTexture; // x0
  UILabel_o *okBtnLabel; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_Action_o *v9; // x20

  if ( (byte_4A5DBBA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortuneBonusExecDialog_EndOpened__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6474/*"FORTUNE_BONUS_EXEC_BUTTON"*/);
    byte_4A5DBBA = 1;
  }
  descriptionTexture = (UnityEngine_Component_o *)this->fields.descriptionTexture;
  if ( !descriptionTexture )
    goto LABEL_10;
  descriptionTexture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(descriptionTexture, 0LL);
  if ( !descriptionTexture )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)descriptionTexture, 1, 0LL);
  descriptionTexture = (UnityEngine_Component_o *)this->fields.descriptionTexture;
  if ( !descriptionTexture )
    goto LABEL_10;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))descriptionTexture->klass[2]._1.typeMetadataHandle)(
    descriptionTexture,
    descriptionTexture->klass[2]._1.interopData);
  okBtnLabel = this->fields.okBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  descriptionTexture = (UnityEngine_Component_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6474/*"FORTUNE_BONUS_EXEC_BUTTON"*/, 0LL);
  if ( !okBtnLabel )
LABEL_10:
    sub_1B8880C(descriptionTexture, nextAction);
  UILabel__set_text(okBtnLabel, (System_String_o *)descriptionTexture, 0LL);
  this->fields.clickFunc = nextAction;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)nextAction, v7, v8);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 1, 0LL);
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FortuneBonusExecDialog_EndOpened__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v9, 0, 0LL);
}


void __fastcall FortuneBonusExecDialog__Release(FortuneBonusExecDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *v5; // x19

  if ( (byte_4A5DBBC & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DBBC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v5 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(v5, 0LL);
}
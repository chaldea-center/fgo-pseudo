void FortificationNotifyDialog___ctor(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4D2ABE9 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2ABE9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortificationNotifyDialog__ClickButtonAction(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o *onClick; // x20
  System_Action_o *v4; // x20

  if ( (byte_4D2ABE7 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__);
    byte_4D2ABE7 = 1;
  }
  onClick = this->fields.onClick;
  if ( onClick )
  {
    this->fields.onClick = 0;
    sub_1C93A78(&this->fields.onClick, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))onClick->fields.invoke_impl)(
      onClick->fields.method_code,
      onClick->fields.method);
    this->fields.state = 4;
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v4, 0);
  }
}


void FortificationNotifyDialog__Init(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FortificationNotifyDialog__OnClickCancel(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4D2ABE6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_FortificationNotifyDialog_OnClickCancel__);
    byte_4D2ABE6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FortificationNotifyDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FortificationNotifyDialog__ClickButtonAction(this, v5);
  }
}


void FortificationNotifyDialog__OnClickDecide(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t EventID; // w20
  EventRewardSceneEntity_array *Master_object; // x0
  const MethodInfo *v8; // x1
  EventRewardSceneEntity_o *v9; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v11; // x21

  if ( (byte_4D2ABE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_FortificationNotifyDialog_OnClickDecide__);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2ABE5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_FortificationNotifyDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2ABEB )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2ABEB = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v5->static_fields->_WarId_k__BackingField, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
    if ( Master_object )
    {
      Master_object = EventRewardSceneMaster__getEntityFromIdAndEventType(
                        (EventRewardSceneMaster_o *)Master_object,
                        EventID,
                        15,
                        0);
      if ( !Master_object )
      {
LABEL_21:
        FortificationNotifyDialog__ClickButtonAction(this, v8);
        return;
      }
      if ( !LODWORD(Master_object->max_length) )
        sub_1C93D34(Master_object);
      v9 = Master_object->m_Items[0];
      if ( v9 )
      {
        slot = v9->fields.slot;
        v11 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_42211656(v11, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0);
        if ( v11 )
        {
          SceneJumpInfo__SetReturnNowScene(v11, 0);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v11, 0);
            goto LABEL_21;
          }
        }
      }
    }
    sub_1C93D2C(Master_object, v8);
  }
}


void FortificationNotifyDialog__Open(
        FortificationNotifyDialog_o *this,
        System_String_o *message,
        System_Action_o *onClick,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UILabel_o *descriptionLb; // x0
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v11; // x20

  if ( (byte_4D2ABE4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_FortificationNotifyDialog__Open_b__9_0__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_6522/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4D2ABE4 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onClick = onClick;
    sub_1C93A78(&this->fields.onClick, onClick);
    descriptionLb = this->fields.descriptionLb;
    if ( !descriptionLb )
      goto LABEL_10;
    UILabel__set_text(descriptionLb, message, 0);
    decideButtonLb = this->fields.decideButtonLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6522/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, (System_String_o *)descriptionLb, 0),
          cancelButtonLb = this->fields.cancelButtonLb,
          descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3707/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !cancelButtonLb) )
    {
LABEL_10:
      sub_1C93D2C(descriptionLb, v7);
    }
    UILabel__set_text(cancelButtonLb, (System_String_o *)descriptionLb, 0);
    this->fields.state = 1;
    v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_FortificationNotifyDialog__Open_b__9_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0, 0);
  }
}


void FortificationNotifyDialog__SerializeFieldNotNullCheck(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  ;
}


void FortificationNotifyDialog___ClickButtonAction_b__13_0(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4D2ABEA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ABEA = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(gameObject, 0);
}


void FortificationNotifyDialog___Open_b__9_0(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *FortificationNotifyDialog__get_closeBtnObject(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2ABE8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2ABE8 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}
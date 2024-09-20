void __fastcall FortificationNotifyDialog___ctor(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EF5E & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EF5E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationNotifyDialog__ClickButtonAction(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct System_Action_o *onClick; // x20
  System_Action_o *v6; // x20

  if ( (byte_4A5EF5C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__);
    byte_4A5EF5C = 1;
  }
  onClick = this->fields.onClick;
  if ( onClick )
  {
    this->fields.onClick = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClick, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClick->fields.m_target)(
      onClick->fields.original_method_info,
      *(_QWORD *)&onClick->fields.extra_arg);
    this->fields.state = 4;
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__Init(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationNotifyDialog__OnClickCancel(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A5EF5B & 1) == 0 )
  {
    sub_1B885B0(&Method_FortificationNotifyDialog_OnClickCancel__);
    byte_4A5EF5B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortificationNotifyDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    FortificationNotifyDialog__ClickButtonAction(this, v5);
  }
}


void __fastcall FortificationNotifyDialog__OnClickDecide(FortificationNotifyDialog_o *this, const MethodInfo *method)
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

  if ( (byte_4A5EF5A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_FortificationNotifyDialog_OnClickDecide__);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EF5A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_FortificationNotifyDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57DC3 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57DC3 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v5->static_fields->_WarId_k__BackingField, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
    if ( Master_object )
    {
      Master_object = EventRewardSceneMaster__getEntityFromIdAndEventType(
                        (EventRewardSceneMaster_o *)Master_object,
                        EventID,
                        15,
                        0LL);
      if ( !Master_object )
      {
LABEL_21:
        FortificationNotifyDialog__ClickButtonAction(this, v8);
        return;
      }
      if ( !Master_object->max_length )
        sub_1B88814(Master_object, v8);
      v9 = Master_object->m_Items[0];
      if ( v9 )
      {
        slot = v9->fields.slot;
        v11 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_38664492(v11, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0LL);
        if ( v11 )
        {
          SceneJumpInfo__SetReturnNowScene(v11, 0LL);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v11, 0LL);
            goto LABEL_21;
          }
        }
      }
    }
    sub_1B8880C(Master_object, v8);
  }
}


void __fastcall FortificationNotifyDialog__Open(
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

  if ( (byte_4A5EF59 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_FortificationNotifyDialog__Open_b__9_0__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_6460/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    byte_4A5EF59 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onClick = onClick;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.onClick,
      (int32_t)onClick,
      (int32_t)onClick,
      (int32_t)method);
    descriptionLb = this->fields.descriptionLb;
    if ( !descriptionLb )
      goto LABEL_10;
    UILabel__set_text(descriptionLb, message, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6460/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, (System_String_o *)descriptionLb, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_10:
      sub_1B8880C(descriptionLb, v7);
    }
    UILabel__set_text(cancelButtonLb, (System_String_o *)descriptionLb, 0LL);
    this->fields.state = 1;
    v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_FortificationNotifyDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v11, 0, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__SerializeFieldNotNullCheck(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationNotifyDialog___Open_b__9_0(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *__fastcall FortificationNotifyDialog__get_closeBtnObject(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4A5EF5D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF5D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B8880C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}
void __fastcall FortificationNotifyDialog___ctor(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A73C77 & 1) == 0 )
  {
    sub_1B90010(&BaseDialog_TypeInfo, method);
    byte_4A73C77 = 1;
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
  __int64 v5; // x1
  struct System_Action_o *onClick; // x20
  System_Action_o *v7; // x20

  if ( (byte_4A73C75 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, v5);
    byte_4A73C75 = 1;
  }
  onClick = this->fields.onClick;
  if ( onClick )
  {
    this->fields.onClick = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onClick, 0, v2, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClick->fields.m_target)(
      onClick->fields.original_method_info,
      *(_QWORD *)&onClick->fields.extra_arg);
    this->fields.state = 4;
    v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__Init(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B9026C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationNotifyDialog__OnClickCancel(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4A73C74 & 1) == 0 )
  {
    sub_1B90010(&Method_FortificationNotifyDialog_OnClickCancel__, method);
    byte_4A73C74 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B90028(Method_FortificationNotifyDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    FortificationNotifyDialog__ClickButtonAction(this, v5);
  }
}


void __fastcall FortificationNotifyDialog__OnClickDecide(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  int32_t EventID; // w20
  EventRewardSceneEntity_array *Master_object; // x0
  const MethodInfo *v15; // x1
  EventRewardSceneEntity_o *v16; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v18; // x21

  if ( (byte_4A73C73 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventRewardSceneMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    sub_1B90010(&Method_FortificationNotifyDialog_OnClickDecide__, v4);
    sub_1B90010(&SceneJumpInfo_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v7);
    sub_1B90010(&StringLiteral_1/*""*/, v8);
    byte_4A73C73 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v9 = Method_FortificationNotifyDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickDecide__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1B90028(Method_FortificationNotifyDialog_OnClickDecide__);
    v10 = (System_Reflection_MethodBase_o *)sub_1B8FFF4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A6CB0F )
    {
      sub_1B90010(&TerminalPramsManager_TypeInfo, v11);
      byte_4A6CB0F = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v12->static_fields->_WarId_k__BackingField, 0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        FortificationNotifyDialog__ClickButtonAction(this, v15);
        return;
      }
      if ( !Master_object->max_length )
        sub_1B90274(Master_object, v15);
      v16 = Master_object->m_Items[0];
      if ( v16 )
      {
        slot = v16->fields.slot;
        v18 = (SceneJumpInfo_o *)sub_1B9025C(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_38717396(v18, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0LL);
        if ( v18 )
        {
          SceneJumpInfo__SetReturnNowScene(v18, 0LL);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v18, 0LL);
            goto LABEL_21;
          }
        }
      }
    }
    sub_1B9026C(Master_object, v15);
  }
}


void __fastcall FortificationNotifyDialog__Open(
        FortificationNotifyDialog_o *this,
        System_String_o *message,
        System_Action_o *onClick,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UILabel_o *descriptionLb; // x0
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v15; // x20

  if ( (byte_4A73C72 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, message);
    sub_1B90010(&Method_FortificationNotifyDialog__Open_b__9_0__, v7);
    sub_1B90010(&LocalizationManager_TypeInfo, v8);
    sub_1B90010(&StringLiteral_6462/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, v9);
    sub_1B90010(&StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, v10);
    byte_4A73C72 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onClick = onClick;
    sub_1B8FFB4(
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
    descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6462/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, (System_String_o *)descriptionLb, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3757/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_10:
      sub_1B9026C(descriptionLb, v11);
    }
    UILabel__set_text(cancelButtonLb, (System_String_o *)descriptionLb, 0LL);
    this->fields.state = 1;
    v15 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_FortificationNotifyDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0LL);
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

  if ( (byte_4A73C76 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A73C76 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B9026C(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}
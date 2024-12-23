void __fastcall FortificationNotifyDialog___ctor(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4B6ABDB & 1) == 0 )
  {
    sub_1BE4ACC(&BaseDialog_TypeInfo, method);
    byte_4B6ABDB = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationNotifyDialog__ClickButtonAction(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  struct System_Action_o *onClick; // x20
  System_Action_o *v11; // x20

  if ( (byte_4B6ABD9 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, v9);
    byte_4B6ABD9 = 1;
  }
  onClick = this->fields.onClick;
  if ( onClick )
  {
    this->fields.onClick = 0LL;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.onClick, 0LL, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))onClick->fields.m_target)(
      onClick->fields.original_method_info,
      *(_QWORD *)&onClick->fields.extra_arg);
    this->fields.state = 4;
    v11 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__Init(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BE4D28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall FortificationNotifyDialog__OnClickCancel(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4B6ABD8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_FortificationNotifyDialog_OnClickCancel__, method);
    byte_4B6ABD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BE4AE4(Method_FortificationNotifyDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v3, v3[4]);
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

  if ( (byte_4B6ABD7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EventRewardSceneMaster___, method);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_FortificationNotifyDialog_OnClickDecide__, v4);
    sub_1BE4ACC(&SceneJumpInfo_TypeInfo, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v8);
    byte_4B6ABD7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v9 = Method_FortificationNotifyDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickDecide__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BE4AE4(Method_FortificationNotifyDialog_OnClickDecide__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B6373A )
    {
      sub_1BE4ACC(&TerminalPramsManager_TypeInfo, v11);
      byte_4B6373A = 1;
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
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        sub_1BE4D30(Master_object, v15);
      v16 = Master_object->m_Items[0];
      if ( v16 )
      {
        slot = v16->fields.slot;
        v18 = (SceneJumpInfo_o *)sub_1BE4D18(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_39576916(v18, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0LL);
        if ( v18 )
        {
          SceneJumpInfo__SetReturnNowScene(v18, 0LL);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v18, 0LL);
            goto LABEL_21;
          }
        }
      }
    }
    sub_1BE4D28(Master_object, v15);
  }
}


void __fastcall FortificationNotifyDialog__Open(
        FortificationNotifyDialog_o *this,
        System_String_o *message,
        System_Action_o *onClick,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UILabel_o *descriptionLb; // x0
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v19; // x20

  if ( (byte_4B6ABD6 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, message);
    sub_1BE4ACC(&Method_FortificationNotifyDialog__Open_b__9_0__, v11);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_6595/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, v13);
    sub_1BE4ACC(&StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, v14);
    byte_4B6ABD6 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onClick = onClick;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&this->fields.onClick,
      (int64_t)onClick,
      (int64_t)onClick,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
    descriptionLb = this->fields.descriptionLb;
    if ( !descriptionLb )
      goto LABEL_10;
    UILabel__set_text(descriptionLb, message, 0LL);
    decideButtonLb = this->fields.decideButtonLb;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6595/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0LL);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, (System_String_o *)descriptionLb, 0LL),
          cancelButtonLb = this->fields.cancelButtonLb,
          descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3796/*"COMMON_CONFIRM_CLOSE"*/, 0LL),
          !cancelButtonLb) )
    {
LABEL_10:
      sub_1BE4D28(descriptionLb, v15);
    }
    UILabel__set_text(cancelButtonLb, (System_String_o *)descriptionLb, 0LL);
    this->fields.state = 1;
    v19 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_FortificationNotifyDialog__Open_b__9_0__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
  }
}


void __fastcall FortificationNotifyDialog__SerializeFieldNotNullCheck(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FortificationNotifyDialog___ClickButtonAction_b__13_0(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B6ABDC & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6ABDC = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70452000(gameObject, 0LL);
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

  if ( (byte_4B6ABDA & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, method);
    byte_4B6ABDA = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1BE4D28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}
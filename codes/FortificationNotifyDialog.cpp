void FortificationNotifyDialog___ctor(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59325B4 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_59325B4 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FortificationNotifyDialog__ClickButtonAction(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_o *onClick; // x20
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_59325B2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__);
    byte_59325B2 = 1;
  }
  onClick = this->fields.onClick;
  if ( onClick )
  {
    this->fields.onClick = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onClick, 0, v2, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))onClick->fields.invoke_impl)(
      onClick->fields.method_code,
      onClick->fields.method);
    v10 = System_Action_TypeInfo;
    this->fields.state = 4;
    v11 = (System_Action_o *)sub_21FFEBC(v10);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_FortificationNotifyDialog__ClickButtonAction_b__13_0__, 0);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0);
  }
}


void FortificationNotifyDialog__Init(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void FortificationNotifyDialog__OnClickCancel(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_59325B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_FortificationNotifyDialog_OnClickCancel__);
    byte_59325B1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FortificationNotifyDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    FortificationNotifyDialog__ClickButtonAction(this, v5);
  }
}


void FortificationNotifyDialog__OnClickDecide(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t EventID; // w20
  EventRewardSceneEntity_array *Master_object; // x0
  const MethodInfo *v12; // x1
  EventRewardSceneEntity_o *v13; // x8
  int32_t slot; // w22
  SceneJumpInfo_o *v15; // x21

  if ( (byte_59325B0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_FortificationNotifyDialog_OnClickDecide__);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59325B0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_FortificationNotifyDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_FortificationNotifyDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_FortificationNotifyDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
    if ( !byte_5932644 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932644 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v6);
      v7 = TerminalPramsManager_TypeInfo;
    }
    EventID = WarMaster__getEventID(v7->static_fields->_WarId_k__BackingField, 0);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v8, v9);
    Master_object = (EventRewardSceneEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
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
        FortificationNotifyDialog__ClickButtonAction(this, v12);
        return;
      }
      if ( !LODWORD(Master_object->max_length) )
        sub_21FFED4(Master_object);
      v13 = Master_object->m_Items[0];
      if ( v13 )
      {
        slot = v13->fields.slot;
        v15 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_48427232(v15, (System_String_o *)StringLiteral_1/*""*/, EventID, slot + 1, 0);
        if ( v15 )
        {
          SceneJumpInfo__SetReturnNowScene(v15, 0);
          Master_object = (EventRewardSceneEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( Master_object )
          {
            AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 72, 1, (Il2CppObject *)v15, 0);
            goto LABEL_21;
          }
        }
      }
    }
    sub_21FFECC(Master_object, v12);
  }
}


void FortificationNotifyDialog__Open(
        FortificationNotifyDialog_o *this,
        System_String_o *message,
        System_Action_o *onClick,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UILabel_o *descriptionLb; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UILabel_o *decideButtonLb; // x20
  UILabel_o *cancelButtonLb; // x20
  System_Action_o *v17; // x20

  if ( (byte_59325AF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FortificationNotifyDialog__Open_b__9_0__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_6765/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    byte_59325AF = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.onClick = onClick;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onClick,
      (int32_t)onClick,
      (System_String_o *)onClick,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    descriptionLb = this->fields.descriptionLb;
    if ( !descriptionLb )
      goto LABEL_10;
    UILabel__set_text(descriptionLb, message, 0);
    decideButtonLb = this->fields.decideButtonLb;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13, v14);
    descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6765/*"FORTIFICATION_EXPANSION_DIALOG_DECIDE"*/, 0);
    if ( !decideButtonLb
      || (UILabel__set_text(decideButtonLb, (System_String_o *)descriptionLb, 0),
          cancelButtonLb = this->fields.cancelButtonLb,
          descriptionLb = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0),
          !cancelButtonLb) )
    {
LABEL_10:
      sub_21FFECC(descriptionLb, v11);
    }
    UILabel__set_text(cancelButtonLb, (System_String_o *)descriptionLb, 0);
    this->fields.state = 1;
    v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_FortificationNotifyDialog__Open_b__9_0__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0, 0);
  }
}


void FortificationNotifyDialog__SerializeFieldNotNullCheck(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  ;
}


void FortificationNotifyDialog___ClickButtonAction_b__13_0(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_59325B5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59325B5 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  UnityEngine_Object__Destroy_83246496(gameObject, 0);
}


void FortificationNotifyDialog___Open_b__9_0(FortificationNotifyDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


UnityEngine_GameObject_o *FortificationNotifyDialog__get_closeBtnObject(
        FortificationNotifyDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *v7; // x0

  if ( (byte_59325B3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59325B3 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v7 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v7 )
    sub_21FFECC(0, v5);
  return UnityEngine_Component__get_gameObject(v7, 0);
}
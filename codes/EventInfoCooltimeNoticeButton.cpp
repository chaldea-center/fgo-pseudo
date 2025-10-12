void EventInfoCooltimeNoticeButton___ctor(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  this->fields.POSITION.fields.z = 0.0;
  *(_QWORD *)&this->fields.POSITION.fields.x = 0x433F000043DA0000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoCooltimeNoticeButton__Initialization(
        EventInfoCooltimeNoticeButton_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *bgSprite; // x20
  UISprite_o *v6; // x20
  struct UISprite_o *v7; // x0
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4C38E9B & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1444/*"80341001"*/);
    byte_4C38E9B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.POSITION, 0);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    v6 = this->fields.bgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v6, (System_String_o *)StringLiteral_1444/*"80341001"*/, 0);
    v7 = this->fields.bgSprite;
    if ( !v7 )
      sub_1C32E7C(0);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) )
  {
    v9 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v9, 0);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCooltimeNotification(0);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v10);
}


void EventInfoCooltimeNoticeButton__OnClickButton(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C38E9D & 1) == 0 )
  {
    sub_1C32C20(&Method_EventInfoCooltimeNoticeButton_OnClickButton__);
    byte_4C38E9D = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = isButtonOn ^ 1;
  v4 = Method_EventInfoCooltimeNoticeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoCooltimeNoticeButton_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C32C38(Method_EventInfoCooltimeNoticeButton_OnClickButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C32C04(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetCooltimeNotification(this->fields.isButtonOn, 0);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v6);
}


void EventInfoCooltimeNoticeButton__SetDispActive(
        EventInfoCooltimeNoticeButton_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0),
        (bgSprite = (UnityEngine_Component_o *)this->fields.noticeButton) == 0)
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0)) == 0 )
  {
    sub_1C32E7C(bgSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0);
}


void EventInfoCooltimeNoticeButton__UpdateButtonDisp(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  UIButton_o *noticeButton; // x0
  __int64 *v4; // x8

  if ( (byte_4C38E9C & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_17505/*"btn_on"*/);
    sub_1C32C20(&StringLiteral_17504/*"btn_off"*/);
    byte_4C38E9C = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_1C32E7C(0);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17505/*"btn_on"*/;
  else
    v4 = &StringLiteral_17504/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v4, 0);
}
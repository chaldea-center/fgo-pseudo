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
  __int64 v7; // x1
  struct UISprite_o *v8; // x0
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v10; // x20
  const MethodInfo *v11; // x1

  if ( (byte_4C28796 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1443/*"80341001"*/);
    byte_4C28796 = 1;
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
    AtlasManager__SetEventUI(v6, (System_String_o *)StringLiteral_1443/*"80341001"*/, 0);
    v8 = this->fields.bgSprite;
    if ( !v8 )
      sub_1C2D6EC(0, v7);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v8->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v8,
      v8->klass->vtable._33_MakePixelPerfect.method);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) )
  {
    v10 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v10, 0);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCooltimeNotification(0);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v11);
}


void EventInfoCooltimeNoticeButton__OnClickButton(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C28798 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventInfoCooltimeNoticeButton_OnClickButton__);
    byte_4C28798 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = isButtonOn ^ 1;
  v4 = Method_EventInfoCooltimeNoticeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoCooltimeNoticeButton_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_EventInfoCooltimeNoticeButton_OnClickButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetCooltimeNotification(this->fields.isButtonOn, 0);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v6);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_1C2D6EC(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0);
}


void EventInfoCooltimeNoticeButton__UpdateButtonDisp(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  UIButton_o *noticeButton; // x0
  __int64 *v4; // x8

  if ( (byte_4C28797 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    byte_4C28797 = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_1C2D6EC(0, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17501/*"btn_on"*/;
  else
    v4 = &StringLiteral_17500/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v4, 0);
}
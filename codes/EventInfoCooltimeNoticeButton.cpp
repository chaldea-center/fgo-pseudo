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
  __int64 v5; // x1
  UnityEngine_Object_o *bgSprite; // x20
  __int64 v7; // x1
  UISprite_o *v8; // x20
  __int64 v9; // x1
  struct UISprite_o *v10; // x0
  UnityEngine_Object_o *buttonSprite; // x20
  __int64 v12; // x1
  UISprite_o *v13; // x20
  const MethodInfo *v14; // x1

  if ( (byte_5971C91 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1520/*"80341001"*/);
    byte_5971C91 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.POSITION, 0);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) )
  {
    v8 = this->fields.bgSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v7);
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_1520/*"80341001"*/, 0);
    v10 = this->fields.bgSprite;
    if ( !v10 )
      sub_2213CDC(0, v9);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v10->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v10,
      v10->klass->vtable._33_MakePixelPerfect.method);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) )
  {
    v13 = this->fields.buttonSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetCommon(v13, 0);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCooltimeNotification(0);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v14);
}


void EventInfoCooltimeNoticeButton__OnClickButton(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_5971C93 & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoCooltimeNoticeButton_OnClickButton__);
    byte_5971C93 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  v4 = Method_EventInfoCooltimeNoticeButton_OnClickButton__;
  this->fields.isButtonOn = isButtonOn ^ 1;
  if ( (v4[83] & 2) != 0 )
    v4 = (_BYTE *)sub_2213A78(v4);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, *((_QWORD *)v4 + 4));
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
    sub_2213CDC(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0);
}


void EventInfoCooltimeNoticeButton__UpdateButtonDisp(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  UIButton_o *noticeButton; // x0
  __int64 *v4; // x8

  if ( (byte_5971C92 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_5971C92 = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_2213CDC(0, method);
  v4 = &StringLiteral_18274/*"btn_off"*/;
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v4, 0);
}
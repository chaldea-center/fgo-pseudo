void __fastcall EventInfoCooltimeNoticeButton___ctor(EventInfoCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  this->fields.POSITION.fields.z = 0.0;
  *(_QWORD *)&this->fields.POSITION.fields.x = 0x433F000043DA0000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoCooltimeNoticeButton__Initialization(
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

  if ( (byte_4A5BB0C & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1531/*"80341001"*/);
    byte_4A5BB0C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.POSITION, 0LL);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v6 = this->fields.bgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v6, (System_String_o *)StringLiteral_1531/*"80341001"*/, 0LL);
    v8 = this->fields.bgSprite;
    if ( !v8 )
      sub_1B8880C(0LL, v7);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
      v8,
      v8->klass->vtable._34_get_minWidth.methodPtr);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v10 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetCommon(v10, 0LL);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCooltimeNotification(0LL);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v11);
}


void __fastcall EventInfoCooltimeNoticeButton__OnClickButton(
        EventInfoCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4A5BB0E & 1) == 0 )
  {
    sub_1B885B0(&Method_EventInfoCooltimeNoticeButton_OnClickButton__);
    byte_4A5BB0E = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v4 = Method_EventInfoCooltimeNoticeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoCooltimeNoticeButton_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1B885C8(Method_EventInfoCooltimeNoticeButton_OnClickButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1B88594(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0LL);
  EventRewardSaveData__SetCooltimeNotification(this->fields.isButtonOn, 0LL);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoCooltimeNoticeButton__SetDispActive(
        EventInfoCooltimeNoticeButton_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Component_o *bgSprite; // x0

  bgSprite = (UnityEngine_Component_o *)this->fields.bgSprite;
  if ( !bgSprite
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0LL),
        (bgSprite = (UnityEngine_Component_o *)this->fields.noticeButton) == 0LL)
    || (bgSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(bgSprite, 0LL)) == 0LL )
  {
    sub_1B8880C(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0LL);
}


void __fastcall EventInfoCooltimeNoticeButton__UpdateButtonDisp(
        EventInfoCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  UIButton_o *noticeButton; // x0
  __int64 *v4; // x8

  if ( (byte_4A5BB0D & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17526/*"btn_on"*/);
    sub_1B885B0(&StringLiteral_17525/*"btn_off"*/);
    byte_4A5BB0D = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_1B8880C(0LL, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17526/*"btn_on"*/;
  else
    v4 = &StringLiteral_17525/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v4, 0LL);
}
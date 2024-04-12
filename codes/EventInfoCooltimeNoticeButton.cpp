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

  if ( (byte_42B0DC7 & 1) == 0 )
  {
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_1226/*"80341001"*/);
    byte_42B0DC7 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition(gameObject, this->fields.POSITION, 0LL);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v6 = this->fields.bgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v6, (System_String_o *)StringLiteral_1226/*"80341001"*/, 0LL);
    v8 = this->fields.bgSprite;
    if ( !v8 )
      sub_B52A5C(0LL, v7);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v8->klass->vtable._33_MakePixelPerfect.method)(
      v8,
      v8->klass->vtable._34_get_minWidth.methodPtr);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v10 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v10, 0LL);
  }
  this->fields.isButtonOn = EventRewardSaveData__GetCooltimeNotification(0LL);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v11);
}


void __fastcall EventInfoCooltimeNoticeButton__OnClickButton(
        EventInfoCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w9
  int32_t v4; // w0
  const MethodInfo *v5; // x1

  if ( (byte_42B0DC9 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0DC9 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  if ( isButtonOn )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v4 = 1;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v4 = 0;
  }
  SoundManager__playSystemSe(v4, 0LL);
  EventRewardSaveData__SetCooltimeNotification(this->fields.isButtonOn, 0LL);
  EventInfoCooltimeNoticeButton__UpdateButtonDisp(this, v5);
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
    sub_B52A5C(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0LL);
}


void __fastcall EventInfoCooltimeNoticeButton__UpdateButtonDisp(
        EventInfoCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  UIButton_o *noticeButton; // x0
  __int64 *v4; // x8

  if ( (byte_42B0DC8 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_17124/*"btn_on"*/);
    sub_B52984(&StringLiteral_17123/*"btn_off"*/);
    byte_42B0DC8 = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_B52A5C(0LL, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17124/*"btn_on"*/;
  else
    v4 = &StringLiteral_17123/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v4, 0LL);
}
void __fastcall EventInfoSpotCooltimeNoticeButton___ctor(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4215631 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12340/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/, method);
    byte_4215631 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_12340/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE = (struct System_String_o *)StringLiteral_12340/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE,
    v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeNoticeButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_BgSpriteName; // x8

  if ( (byte_4215630 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, *(_QWORD *)&eventId);
    byte_4215630 = 1;
  }
  EventInfo = EventInfoSpotCooltimeNoticeButton__GetEventInfo(this, eventId, method);
  p_BgSpriteName = &EventInfo->fields.BgSpriteName;
  if ( !EventInfo )
    p_BgSpriteName = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_BgSpriteName;
}


int32_t __fastcall EventInfoSpotCooltimeNoticeButton__GetCommonReleaseIdByEventId(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeNoticeButton_EventInfo_o *EventInfo; // x0

  EventInfo = EventInfoSpotCooltimeNoticeButton__GetEventInfo(this, eventId, method);
  if ( EventInfo )
    LODWORD(EventInfo) = EventInfo->fields.CommonReleaseId;
  return (int)EventInfo;
}


EventInfoSpotCooltimeNoticeButton_EventInfo_o *__fastcall EventInfoSpotCooltimeNoticeButton__GetEventInfo(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventInfoSpotCooltimeNoticeButton_EventInfo_array *eventInfoList; // x10
  int max_length; // w8
  __int64 v5; // x9
  EventInfoSpotCooltimeNoticeButton_EventInfo_o **m_Items; // x10

  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_9;
  max_length = eventInfoList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0LL;
    m_Items = eventInfoList->m_Items;
    while ( 1 )
    {
      this = (EventInfoSpotCooltimeNoticeButton_o *)m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == eventId )
        return (EventInfoSpotCooltimeNoticeButton_EventInfo_o *)this;
      if ( (int)++v5 >= max_length )
        return 0LL;
    }
LABEL_9:
    sub_B0D97C(this);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoSpotCooltimeNoticeButton__Initialization(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *BgSpriteNameByEventId; // x0
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *v9; // x20
  UISprite_o *v10; // x21
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v12; // x20
  System_String_o *SPOT_COOLTIME_NOTICE_BUTTON_TITLE; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  UILabel_o *buttonTextLabel; // x21
  System_String_o *v17; // x0
  const MethodInfo *v18; // x1
  int32_t eventIda; // [xsp+Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_421562D & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, *(_QWORD *)&eventId);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_421562D = 1;
  }
  this->fields.eventId = eventId;
  BgSpriteNameByEventId = EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(this, eventId, method);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  v9 = BgSpriteNameByEventId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v9, 0LL) )
  {
    v10 = this->fields.bgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v10, v9, 0LL);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v12 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v12, 0LL);
  }
  SPOT_COOLTIME_NOTICE_BUTTON_TITLE = this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE;
  v14 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v15 = System_String__Concat_43849904(SPOT_COOLTIME_NOTICE_BUTTON_TITLE, v14, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v15, 0LL) )
  {
    buttonTextLabel = this->fields.buttonTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get(v15, 0LL);
    if ( !buttonTextLabel
      || (UILabel__set_text(buttonTextLabel, v17, 0LL), (v17 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
    {
      sub_B0D97C(v17);
    }
    UILabel__SetCondensedScale((UILabel_o *)v17, this->fields.buttonTextMaxWidth, 0LL);
  }
  this->fields.isButtonOn = EventRewardSaveData__NeedSpotCooltimeNotification(eventIda, 0LL);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v18);
}


void __fastcall EventInfoSpotCooltimeNoticeButton__OnClickButton(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  _BOOL4 isButtonOn; // w9
  int32_t v4; // w0
  const MethodInfo *v5; // x1

  if ( (byte_421562F & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_421562F = 1;
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
  EventRewardSaveData__SetSpotCooltimeNotification(this->fields.eventId, this->fields.isButtonOn, 0LL);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v5);
}


void __fastcall EventInfoSpotCooltimeNoticeButton__SetDispActive(
        EventInfoSpotCooltimeNoticeButton_o *this,
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
    sub_B0D97C(bgSprite);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0LL);
}


void __fastcall EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *noticeButton; // x0
  __int64 *v5; // x8

  if ( (byte_421562E & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_17057/*"btn_on"*/, method);
    sub_B0D8A4(&StringLiteral_17056/*"btn_off"*/, v3);
    byte_421562E = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_B0D97C(0LL);
  if ( this->fields.isButtonOn )
    v5 = &StringLiteral_17057/*"btn_on"*/;
  else
    v5 = &StringLiteral_17056/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v5, 0LL);
}


void __fastcall EventInfoSpotCooltimeNoticeButton_EventInfo___ctor(
        EventInfoSpotCooltimeNoticeButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
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

  if ( (byte_42E954D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12449/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E954D = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_12449/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE = (struct System_String_o *)StringLiteral_12449/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  sub_B5D560(
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


System_String_o *__fastcall EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoSpotCooltimeNoticeButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_BgSpriteName; // x8

  if ( (byte_42E954C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, eventId, (_DWORD)method, v3);
    byte_42E954C = 1;
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
    sub_B5D69C(this, eventId);
  }
  return 0LL;
}


void __fastcall EventInfoSpotCooltimeNoticeButton__Initialization(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *BgSpriteNameByEventId; // x0
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *v14; // x20
  UISprite_o *v15; // x21
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v17; // x20
  System_String_o *SPOT_COOLTIME_NOTICE_BUTTON_TITLE; // x20
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  UILabel_o *buttonTextLabel; // x21
  System_String_o *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  int32_t eventIda; // [xsp+Ch] [xbp-24h] BYREF

  eventIda = eventId;
  if ( (byte_42E9549 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E9549 = 1;
  }
  this->fields.eventId = eventId;
  BgSpriteNameByEventId = EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(this, eventId, method);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  v14 = BgSpriteNameByEventId;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v14, 0LL) )
  {
    v15 = this->fields.bgSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v15, v14, 0LL);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v17 = this->fields.buttonSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetCommon(v17, 0LL);
  }
  SPOT_COOLTIME_NOTICE_BUTTON_TITLE = this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE;
  v19 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v20 = System_String__Concat_44577788(SPOT_COOLTIME_NOTICE_BUTTON_TITLE, v19, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  if ( LocalizationManager__ContainsKey(v20, 0LL) )
  {
    buttonTextLabel = this->fields.buttonTextLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get(v20, 0LL);
    if ( !buttonTextLabel
      || (UILabel__set_text(buttonTextLabel, v22, 0LL), (v22 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
    {
      sub_B5D69C(v22, v23);
    }
    UILabel__SetCondensedScale((UILabel_o *)v22, this->fields.buttonTextMaxWidth, 0LL);
  }
  this->fields.isButtonOn = EventRewardSaveData__NeedSpotCooltimeNotification(eventIda, 0LL);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v24);
}


void __fastcall EventInfoSpotCooltimeNoticeButton__OnClickButton(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL4 isButtonOn; // w9
  int32_t v6; // w0
  const MethodInfo *v7; // x1

  if ( (byte_42E954B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E954B = 1;
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
    v6 = 1;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v6 = 0;
  }
  SoundManager__playSystemSe(v6, 0LL);
  EventRewardSaveData__SetSpotCooltimeNotification(this->fields.eventId, this->fields.isButtonOn, 0LL);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v7);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_B5D69C(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0LL);
}


void __fastcall EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UIButton_o *noticeButton; // x0
  __int64 *v9; // x8

  if ( (byte_42E954A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17215/*"btn_on"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_17214/*"btn_off"*/, v5, v6, v7);
    byte_42E954A = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_B5D69C(0LL, method);
  if ( this->fields.isButtonOn )
    v9 = &StringLiteral_17215/*"btn_on"*/;
  else
    v9 = &StringLiteral_17214/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v9, 0LL);
}


void __fastcall EventInfoSpotCooltimeNoticeButton_EventInfo___ctor(
        EventInfoSpotCooltimeNoticeButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
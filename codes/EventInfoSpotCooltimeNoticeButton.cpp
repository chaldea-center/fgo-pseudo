void __fastcall EventInfoSpotCooltimeNoticeButton___ctor(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B1780A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12353/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/, method, v2);
    byte_4B1780A = 1;
  }
  v9 = StringLiteral_12353/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE = (struct System_String_o *)StringLiteral_12353/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE, v9, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4B17809 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&eventId, method);
    byte_4B17809 = 1;
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


// local variable allocation has failed, the output may be wrong!
EventInfoSpotCooltimeNoticeButton_EventInfo_o *__fastcall EventInfoSpotCooltimeNoticeButton__GetEventInfo(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventInfoSpotCooltimeNoticeButton_EventInfo_array *eventInfoList; // x8
  int max_length; // w9
  int v5; // w10

  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_9;
  max_length = eventInfoList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      this = (EventInfoSpotCooltimeNoticeButton_o *)eventInfoList->m_Items[v5];
      if ( !this )
        break;
      if ( this->fields.m_CachedPtr == eventId )
        return (EventInfoSpotCooltimeNoticeButton_EventInfo_o *)this;
      if ( max_length == ++v5 )
        return 0LL;
    }
LABEL_9:
    sub_1BCAA3C(this, *(_QWORD *)&eventId);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *BgSpriteNameByEventId; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *v12; // x20
  __int64 v13; // x1
  UISprite_o *v14; // x21
  UnityEngine_Object_o *buttonSprite; // x20
  __int64 v16; // x1
  UISprite_o *v17; // x20
  System_String_o *SPOT_COOLTIME_NOTICE_BUTTON_TITLE; // x20
  System_String_o *v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x20
  __int64 v22; // x1
  UILabel_o *buttonTextLabel; // x21
  System_String_o *v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x1
  int32_t eventIda; // [xsp+Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_4B17806 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B17806 = 1;
  }
  this->fields.eventId = eventId;
  BgSpriteNameByEventId = EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(this, eventId, method);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  v12 = BgSpriteNameByEventId;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) && !System_String__IsNullOrEmpty(v12, 0LL) )
  {
    v14 = this->fields.bgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
    AtlasManager__SetEventUI(v14, v12, 0LL);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0LL, 0LL) )
  {
    v17 = this->fields.buttonSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v16);
    AtlasManager__SetCommon(v17, 0LL);
  }
  SPOT_COOLTIME_NOTICE_BUTTON_TITLE = this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE;
  v19 = System_Int32__ToString((int32_t)&eventIda, 0LL);
  v21 = System_String__Concat_62401220(SPOT_COOLTIME_NOTICE_BUTTON_TITLE, v19, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v20);
  if ( LocalizationManager__ContainsKey(v21, 0LL) )
  {
    buttonTextLabel = this->fields.buttonTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22);
    v24 = LocalizationManager__Get(v21, 0LL);
    if ( !buttonTextLabel
      || (UILabel__set_text(buttonTextLabel, v24, 0LL), (v24 = (System_String_o *)this->fields.buttonTextLabel) == 0LL) )
    {
      sub_1BCAA3C(v24, v25);
    }
    UILabel__SetCondensedScale((UILabel_o *)v24, this->fields.buttonTextMaxWidth, 0LL);
  }
  this->fields.isButtonOn = EventRewardSaveData__NeedSpotCooltimeNotification(eventIda, 0LL);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v26);
}


void __fastcall EventInfoSpotCooltimeNoticeButton__OnClickButton(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL4 isButtonOn; // w20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4B17808 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__, method, v2);
    byte_4B17808 = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = !isButtonOn;
  v5 = Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, isButtonOn, 0LL);
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
    sub_1BCAA3C(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0LL);
}


void __fastcall EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *noticeButton; // x0
  __int64 *v7; // x8

  if ( (byte_4B17807 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B17807 = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isButtonOn )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v7, 0LL);
}


void __fastcall EventInfoSpotCooltimeNoticeButton_EventInfo___ctor(
        EventInfoSpotCooltimeNoticeButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
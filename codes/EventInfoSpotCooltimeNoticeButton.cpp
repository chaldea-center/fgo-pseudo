void EventInfoSpotCooltimeNoticeButton___ctor(EventInfoSpotCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  const MethodInfo *v10; // x1

  if ( (byte_4CC923D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_12286/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/);
    byte_4CC923D = 1;
  }
  v9 = StringLiteral_12286/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE = (struct System_String_o *)StringLiteral_12286/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE,
    v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, v10);
}


System_String_o *EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeNoticeButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_BgSpriteName; // x8

  if ( (byte_4CC923C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC923C = 1;
  }
  EventInfo = EventInfoSpotCooltimeNoticeButton__GetEventInfo(this, eventId, method);
  p_BgSpriteName = &EventInfo->fields.BgSpriteName;
  if ( !EventInfo )
    p_BgSpriteName = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_BgSpriteName;
}


int32_t EventInfoSpotCooltimeNoticeButton__GetCommonReleaseIdByEventId(
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


EventInfoSpotCooltimeNoticeButton_EventInfo_o *EventInfoSpotCooltimeNoticeButton__GetEventInfo(
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
      if ( LODWORD(this->fields.m_CachedPtr) == eventId )
        return (EventInfoSpotCooltimeNoticeButton_EventInfo_o *)this;
      if ( max_length == ++v5 )
        return 0;
    }
LABEL_9:
    sub_1C71608(this, eventId);
  }
  return 0;
}


void EventInfoSpotCooltimeNoticeButton__Initialization(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *BgSpriteNameByEventId; // x0
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *v7; // x20
  UISprite_o *v8; // x21
  UnityEngine_Object_o *buttonSprite; // x20
  UISprite_o *v10; // x20
  System_String_o *SPOT_COOLTIME_NOTICE_BUTTON_TITLE; // x20
  System_String_o *v12; // x0
  System_String_o *v13; // x20
  UILabel_o *buttonTextLabel; // x21
  System_String_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x1
  int32_t eventIda; // [xsp+Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_4CC9239 & 1) == 0 )
  {
    sub_1C713B0(&AtlasManager_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9239 = 1;
  }
  this->fields.eventId = eventId;
  BgSpriteNameByEventId = EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(this, eventId, method);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  v7 = BgSpriteNameByEventId;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) && !System_String__IsNullOrEmpty(v7, 0) )
  {
    v8 = this->fields.bgSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v8, v7, 0);
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
  SPOT_COOLTIME_NOTICE_BUTTON_TITLE = this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE;
  v12 = System_Int32__ToString((int32_t)&eventIda, 0);
  v13 = System_String__Concat_64031724(SPOT_COOLTIME_NOTICE_BUTTON_TITLE, v12, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( LocalizationManager__ContainsKey(v13, 0) )
  {
    buttonTextLabel = this->fields.buttonTextLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get(v13, 0);
    if ( !buttonTextLabel
      || (UILabel__set_text(buttonTextLabel, v15, 0), (v15 = (System_String_o *)this->fields.buttonTextLabel) == 0) )
    {
      sub_1C71608(v15, v16);
    }
    UILabel__SetCondensedScale((UILabel_o *)v15, this->fields.buttonTextMaxWidth, 0, 0);
  }
  this->fields.isButtonOn = EventRewardSaveData__NeedSpotCooltimeNotification(eventIda, 0);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v17);
}


void EventInfoSpotCooltimeNoticeButton__OnClickButton(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4CC923B & 1) == 0 )
  {
    sub_1C713B0(&Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__);
    byte_4CC923B = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  this->fields.isButtonOn = isButtonOn ^ 1;
  v4 = Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__;
  if ( (*((_BYTE *)Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C713C8(Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, isButtonOn, 0, 0);
  EventRewardSaveData__SetSpotCooltimeNotification(this->fields.eventId, this->fields.isButtonOn, 0);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v6);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoSpotCooltimeNoticeButton__SetDispActive(
        EventInfoSpotCooltimeNoticeButton_o *this,
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
    sub_1C71608(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0);
}


void EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  UIButton_o *noticeButton; // x0
  __int64 *v4; // x8

  if ( (byte_4CC923A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_17529/*"btn_on"*/);
    sub_1C713B0(&StringLiteral_17528/*"btn_off"*/);
    byte_4CC923A = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_1C71608(0, method);
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_17529/*"btn_on"*/;
  else
    v4 = &StringLiteral_17528/*"btn_off"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v4, 0);
}


void EventInfoSpotCooltimeNoticeButton_EventInfo___ctor(
        EventInfoSpotCooltimeNoticeButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}
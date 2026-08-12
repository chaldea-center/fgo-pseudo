void EventInfoSpotCooltimeNoticeButton___ctor(EventInfoSpotCooltimeNoticeButton_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_597265D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12799/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/);
    byte_597265D = 1;
  }
  v9 = StringLiteral_12799/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE = (struct System_String_o *)StringLiteral_12799/*"SPOT_COOLTIME_NOTICE_BUTTON_TITLE_"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE,
    v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


System_String_o *EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  EventInfoSpotCooltimeNoticeButton_EventInfo_o *EventInfo; // x0
  System_String_o **p_BgSpriteName; // x8

  if ( (byte_597265C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597265C = 1;
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


// local variable allocation has failed, the output may be wrong!
EventInfoSpotCooltimeNoticeButton_EventInfo_o *EventInfoSpotCooltimeNoticeButton__GetEventInfo(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  struct EventInfoSpotCooltimeNoticeButton_EventInfo_array *eventInfoList; // x9
  int max_length; // w8
  EventInfoSpotCooltimeNoticeButton_o **i; // x9

  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_9;
  max_length = eventInfoList->max_length;
  if ( max_length >= 1 )
  {
    for ( i = (EventInfoSpotCooltimeNoticeButton_o **)eventInfoList->m_Items; ; ++i )
    {
      this = *i;
      if ( !*i )
        break;
      if ( LODWORD(this->fields.m_CachedPtr) == eventId )
        return (EventInfoSpotCooltimeNoticeButton_EventInfo_o *)this;
      if ( !--max_length )
        return 0;
    }
LABEL_9:
    sub_2213CDC(this, *(_QWORD *)&eventId);
  }
  return 0;
}


void EventInfoSpotCooltimeNoticeButton__Initialization(
        EventInfoSpotCooltimeNoticeButton_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_String_o *BgSpriteNameByEventId; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *bgSprite; // x21
  System_String_o *v8; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x21
  UnityEngine_Object_o *buttonSprite; // x20
  __int64 v12; // x1
  UISprite_o *v13; // x20
  System_String_o *SPOT_COOLTIME_NOTICE_BUTTON_TITLE; // x20
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  __int64 v18; // x1
  UILabel_o *buttonTextLabel; // x21
  System_String_o *v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x1
  int32_t eventIda; // [xsp+Ch] [xbp-34h] BYREF

  eventIda = eventId;
  if ( (byte_5972659 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972659 = 1;
  }
  this->fields.eventId = eventId;
  BgSpriteNameByEventId = EventInfoSpotCooltimeNoticeButton__GetBgSpriteNameByEventId(this, eventId, method);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  v8 = BgSpriteNameByEventId;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0, 0) && !System_String__IsNullOrEmpty(v8, 0) )
  {
    v10 = this->fields.bgSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetEventUI(v10, v8, 0);
  }
  buttonSprite = (UnityEngine_Object_o *)this->fields.buttonSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(buttonSprite, 0, 0) )
  {
    v13 = this->fields.buttonSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetCommon(v13, 0);
  }
  SPOT_COOLTIME_NOTICE_BUTTON_TITLE = this->fields.SPOT_COOLTIME_NOTICE_BUTTON_TITLE;
  v15 = System_Int32__ToString((int32_t)&eventIda, 0);
  v17 = System_String__Concat_75651716(SPOT_COOLTIME_NOTICE_BUTTON_TITLE, v15, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
  if ( LocalizationManager__ContainsKey(v17, 0) )
  {
    buttonTextLabel = this->fields.buttonTextLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    v20 = LocalizationManager__Get(v17, 0);
    if ( !buttonTextLabel
      || (UILabel__set_text(buttonTextLabel, v20, 0), (v20 = (System_String_o *)this->fields.buttonTextLabel) == 0) )
    {
      sub_2213CDC(v20, v21);
    }
    UILabel__SetCondensedScale((UILabel_o *)v20, this->fields.buttonTextMaxWidth, 0, 0);
  }
  this->fields.isButtonOn = EventRewardSaveData__NeedSpotCooltimeNotification(eventIda, 0);
  EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(this, v22);
}


void EventInfoSpotCooltimeNoticeButton__OnClickButton(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  int32_t isButtonOn; // w20
  _BYTE *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_597265B & 1) == 0 )
  {
    sub_2213A60(&Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__);
    byte_597265B = 1;
  }
  isButtonOn = this->fields.isButtonOn;
  v4 = Method_EventInfoSpotCooltimeNoticeButton_OnClickButton__;
  this->fields.isButtonOn = isButtonOn ^ 1;
  if ( (v4[83] & 2) != 0 )
    v4 = (_BYTE *)sub_2213A78(v4);
  v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, *((_QWORD *)v4 + 4));
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
    sub_2213CDC(bgSprite, isActive);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgSprite, isActive, 0);
}


void EventInfoSpotCooltimeNoticeButton__UpdateButtonDisp(
        EventInfoSpotCooltimeNoticeButton_o *this,
        const MethodInfo *method)
{
  UIButton_o *noticeButton; // x0
  __int64 *v4; // x8

  if ( (byte_597265A & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_18275/*"btn_on"*/);
    sub_2213A60(&StringLiteral_18274/*"btn_off"*/);
    byte_597265A = 1;
  }
  noticeButton = this->fields.noticeButton;
  if ( !noticeButton )
    sub_2213CDC(0, method);
  v4 = &StringLiteral_18274/*"btn_off"*/;
  if ( this->fields.isButtonOn )
    v4 = &StringLiteral_18275/*"btn_on"*/;
  UIButton__set_normalSprite(noticeButton, (System_String_o *)*v4, 0);
}


void EventInfoSpotCooltimeNoticeButton_EventInfo___ctor(
        EventInfoSpotCooltimeNoticeButton_EventInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}
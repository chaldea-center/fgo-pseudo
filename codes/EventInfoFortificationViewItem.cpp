void EventInfoFortificationViewItem___ctor(EventInfoFortificationViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventInfoFortificationViewItem__Awake(EventInfoFortificationViewItem_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoFortificationViewItem__CheckAssertion(EventInfoFortificationViewItem_o *this, const MethodInfo *method)
{
  ;
}


void EventInfoFortificationViewItem__Setup(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x0
  EventFortificationEntity_o *v6; // t1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  v6 = this->fields.eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  if ( eventFortificationEntity != v6 )
  {
    this->fields.eventFortificationEntity = eventFortificationEntity;
    sub_1C3E508(
      (CGThumbnailListItem_o *)p_eventFortificationEntity,
      (int32_t)eventFortificationEntity,
      (int32_t)method,
      v3);
    EventInfoFortificationViewItem__SetupGiftIcon(this, eventFortificationEntity, v8);
    EventInfoFortificationViewItem__SetupWorkBgColor(this, eventFortificationEntity, v9);
  }
}


void EventInfoFortificationViewItem__SetupGiftIcon(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  DataManager_o *v7; // x20
  UnityEngine_Object_o *itemIcon; // x21
  int32_t *v9; // x8

  if ( (byte_4C58285 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C58285 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventFortificationEntity )
    goto LABEL_17;
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0);
  if ( !Instance )
    goto LABEL_17;
  v7 = Instance;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
LABEL_18:
    sub_1C3E7C8(Instance, v6);
  if ( *(_QWORD *)&Instance->fields._DispLog )
  {
    itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( LODWORD(v7->fields.m_CancellationTokenSource) )
      {
        v9 = *(int32_t **)&v7->fields._DispLog;
        if ( v9 )
        {
          Instance = (DataManager_o *)this->fields.itemIcon;
          if ( Instance )
          {
            ItemIconComponent__SetGift_40968388((ItemIconComponent_o *)Instance, v9[5], v9[6], v9[7], 0, 0);
            return;
          }
        }
LABEL_17:
        sub_1C3E7C0(Instance, v6);
      }
      goto LABEL_18;
    }
  }
}


void EventInfoFortificationViewItem__SetupWorkBgColor(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  EventInfoFortificationViewItem_o *v9; // x19
  Il2CppObject *v10; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v24; // x20
  System_String_o *v25; // x0
  unsigned __int128 v26; // [xsp+0h] [xbp-50h] BYREF
  int32_t workType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v9 = this;
  if ( (byte_4C58286 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    this = (EventInfoFortificationViewItem_o *)sub_1C3E564(&StringLiteral_6493/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_4C58286 = 1;
  }
  v26 = 0u;
  if ( !eventFortificationEntity )
    goto LABEL_8;
  eventId = eventFortificationEntity->fields.eventId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, method, v3, v4, v5, v6, v7);
  workType = eventFortificationEntity->fields.workType;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &workType, v11, v12, v13, v14, v15, v16);
  v18 = System_String__Format_63677760((System_String_o *)StringLiteral_6493/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v10, v17, 0);
  __asm { FMOV            V0.4S, #1.0 }
  v26 = (unsigned __int128)_Q0;
  v24 = v18;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v25 = LocalizationManager__Get(v24, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v25, (UnityEngine_Color_o *)&v26, 0);
  this = (EventInfoFortificationViewItem_o *)v9->fields.workBgSprite;
  if ( !this )
LABEL_8:
    sub_1C3E7C0(this, eventFortificationEntity);
  UIWidget__set_color((UIWidget_o *)this, (UnityEngine_Color_o)v26, 0);
}


void EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_1C3E7C0(0, method);
  UIBasicSprite__set_fillAmount(gaugeSprite, value, 0);
}


UISprite_o *EventInfoFortificationViewItem__get_GaugeBaseSprite(
        EventInfoFortificationViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gaugeBaseSprite;
}


UISprite_o *EventInfoFortificationViewItem__get_GaugeSprite(
        EventInfoFortificationViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gaugeSprite;
}


UISprite_o *EventInfoFortificationViewItem__get_WorkBgSprite(
        EventInfoFortificationViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.workBgSprite;
}
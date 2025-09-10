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
    sub_1C2D434(
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
  __int64 v7; // x2
  DataManager_o *v8; // x20
  UnityEngine_Object_o *itemIcon; // x21
  int32_t *v10; // x8

  if ( (byte_4C287BE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C287BE = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_GiftMaster___);
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
  v8 = Instance;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
LABEL_18:
    sub_1C2D6F4(Instance, v6, v7);
  if ( *(_QWORD *)&Instance->fields._DispLog )
  {
    itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( LODWORD(v8->fields.m_CancellationTokenSource) )
      {
        v10 = *(int32_t **)&v8->fields._DispLog;
        if ( v10 )
        {
          Instance = (DataManager_o *)this->fields.itemIcon;
          if ( Instance )
          {
            ItemIconComponent__SetGift_40700316((ItemIconComponent_o *)Instance, v10[5], v10[6], v10[7], 0, 0);
            return;
          }
        }
LABEL_17:
        sub_1C2D6EC(Instance, v6);
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
  EventInfoFortificationViewItem_o *v6; // x19
  Il2CppObject *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  unsigned __int128 v20; // [xsp+0h] [xbp-50h] BYREF
  int32_t workType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4C287BF & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    this = (EventInfoFortificationViewItem_o *)sub_1C2D490(&StringLiteral_6487/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_4C287BF = 1;
  }
  v20 = 0u;
  if ( !eventFortificationEntity )
    goto LABEL_8;
  eventId = eventFortificationEntity->fields.eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, method, v3, v4);
  workType = eventFortificationEntity->fields.workType;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &workType, v8, v9, v10);
  v12 = System_String__Format_63499156((System_String_o *)StringLiteral_6487/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v7, v11, 0);
  __asm { FMOV            V0.4S, #1.0 }
  v20 = (unsigned __int128)_Q0;
  v18 = v12;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v19 = LocalizationManager__Get(v18, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v19, (UnityEngine_Color_o *)&v20, 0);
  this = (EventInfoFortificationViewItem_o *)v6->fields.workBgSprite;
  if ( !this )
LABEL_8:
    sub_1C2D6EC(this, eventFortificationEntity);
  UIWidget__set_color((UIWidget_o *)this, (UnityEngine_Color_o)v20, 0);
}


void EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_1C2D6EC(0, method);
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
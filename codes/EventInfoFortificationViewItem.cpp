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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x0
  EventFortificationEntity_o *v10; // t1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v10 = this->fields.eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  if ( v10 != eventFortificationEntity )
  {
    this->fields.eventFortificationEntity = eventFortificationEntity;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_eventFortificationEntity,
      (int32_t)eventFortificationEntity,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    EventInfoFortificationViewItem__SetupGiftIcon(this, eventFortificationEntity, v12);
    EventInfoFortificationViewItem__SetupWorkBgColor(this, eventFortificationEntity, v13);
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

  if ( (byte_5971CB9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5971CB9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_GiftMaster___);
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
    sub_2213CE4(Instance);
  if ( *(_QWORD *)&Instance->fields._DispLog )
  {
    itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
            ItemIconComponent__SetGift_47884936((ItemIconComponent_o *)Instance, v9[5], v9[6], v9[7], 0, 0);
            return;
          }
        }
LABEL_17:
        sub_2213CDC(Instance, v6);
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
  EventInfoFortificationViewItem_o *v4; // x19
  Il2CppObject *v5; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  int v14; // w8
  System_String_o *v15; // x0
  unsigned __int128 v16; // [xsp+0h] [xbp-50h] BYREF
  int32_t workType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5971CBA & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    this = (EventInfoFortificationViewItem_o *)sub_2213A60(&StringLiteral_6778/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/);
    byte_5971CBA = 1;
  }
  v16 = 0u;
  if ( !eventFortificationEntity )
    goto LABEL_8;
  eventId = eventFortificationEntity->fields.eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
  workType = eventFortificationEntity->fields.workType;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &workType);
  v8 = System_String__Format_75697880((System_String_o *)StringLiteral_6778/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v5, v6, 0);
  __asm { FMOV            V0.4S, #1.0 }
  v14 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  v16 = (unsigned __int128)_Q0;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
  v15 = LocalizationManager__Get(v8, 0);
  UnityEngine_ColorUtility__TryParseHtmlString(v15, (UnityEngine_Color_o *)&v16, 0);
  this = (EventInfoFortificationViewItem_o *)v4->fields.workBgSprite;
  if ( !this )
LABEL_8:
    sub_2213CDC(this, eventFortificationEntity);
  UIWidget__set_color((UIWidget_o *)this, (UnityEngine_Color_o)v16, 0);
}


void EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_2213CDC(0, method);
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
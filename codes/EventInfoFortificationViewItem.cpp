void __fastcall EventInfoFortificationViewItem___ctor(EventInfoFortificationViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventInfoFortificationViewItem__Awake(EventInfoFortificationViewItem_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoFortificationViewItem__CheckAssertion(
        EventInfoFortificationViewItem_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoFortificationViewItem__Setup(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x0
  EventFortificationEntity_o *v6; // t1
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2

  v6 = this->fields.eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  if ( eventFortificationEntity != v6 )
  {
    this->fields.eventFortificationEntity = eventFortificationEntity;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)p_eventFortificationEntity,
      (int32_t)eventFortificationEntity,
      (int32_t)method,
      v3);
    EventInfoFortificationViewItem__SetupGiftIcon(this, eventFortificationEntity, v8);
    EventInfoFortificationViewItem__SetupWorkBgColor(this, eventFortificationEntity, v9);
  }
}


void __fastcall EventInfoFortificationViewItem__SetupGiftIcon(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataManager_o *v9; // x20
  UnityEngine_Object_o *itemIcon; // x21
  int32_t *v11; // x8

  if ( (byte_49FCFC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, eventFortificationEntity);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_49FCFC2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventFortificationEntity )
    goto LABEL_17;
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0LL);
  if ( !Instance )
    goto LABEL_17;
  v9 = Instance;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
LABEL_18:
    sub_1B6432C(Instance, v8);
  if ( *(_QWORD *)&Instance->fields._DispLog )
  {
    itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( LODWORD(v9->fields.m_CancellationTokenSource) )
      {
        v11 = *(int32_t **)&v9->fields._DispLog;
        if ( v11 )
        {
          Instance = (DataManager_o *)this->fields.itemIcon;
          if ( Instance )
          {
            ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)Instance, v11[5], v11[6], v11[7], 0, 0LL);
            return;
          }
        }
LABEL_17:
        sub_1B64324(Instance);
      }
      goto LABEL_18;
    }
  }
}


void __fastcall EventInfoFortificationViewItem__SetupWorkBgColor(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  EventInfoFortificationViewItem_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  unsigned __int128 v17; // [xsp+0h] [xbp-50h] BYREF
  int32_t workType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_49FCFC3 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, eventFortificationEntity);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    this = (EventInfoFortificationViewItem_o *)sub_1B640C8(&StringLiteral_6433/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v6);
    byte_49FCFC3 = 1;
  }
  v17 = 0uLL;
  if ( !eventFortificationEntity )
    goto LABEL_8;
  eventId = eventFortificationEntity->fields.eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  workType = eventFortificationEntity->fields.workType;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &workType);
  v9 = System_String__Format_61389768((System_String_o *)StringLiteral_6433/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v7, v8, 0LL);
  __asm { FMOV            V0.4S, #1.0 }
  v17 = (unsigned __int128)_Q0;
  v15 = v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v16 = LocalizationManager__Get(v15, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString(v16, (UnityEngine_Color_o *)&v17, 0LL);
  this = (EventInfoFortificationViewItem_o *)v4->fields.workBgSprite;
  if ( !this )
LABEL_8:
    sub_1B64324(this);
  UIWidget__set_color((UIWidget_o *)this, (UnityEngine_Color_o)v17, 0LL);
}


void __fastcall EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_1B64324(0LL);
  UIBasicSprite__set_fillAmount(gaugeSprite, value, 0LL);
}


UISprite_o *__fastcall EventInfoFortificationViewItem__get_GaugeBaseSprite(
        EventInfoFortificationViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gaugeBaseSprite;
}


UISprite_o *__fastcall EventInfoFortificationViewItem__get_GaugeSprite(
        EventInfoFortificationViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.gaugeSprite;
}


UISprite_o *__fastcall EventInfoFortificationViewItem__get_WorkBgSprite(
        EventInfoFortificationViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields.workBgSprite;
}
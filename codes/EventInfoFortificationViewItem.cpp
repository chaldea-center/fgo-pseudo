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
    sub_1B76164(
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

  if ( (byte_4A2EAAC & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMasterData_GiftMaster___, eventFortificationEntity);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    sub_1B761C0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4A2EAAC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E62408 *)Method_DataManager_GetMasterData_GiftMaster___);
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
    sub_1B76424(Instance, v8);
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
            ItemIconComponent__SetGift_37964100((ItemIconComponent_o *)Instance, v11[5], v11[6], v11[7], 0, 0LL);
            return;
          }
        }
LABEL_17:
        sub_1B7641C(Instance, v8);
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
  __int64 v3; // x3
  __int64 v4; // x4
  EventInfoFortificationViewItem_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v20; // x20
  System_String_o *v21; // x0
  unsigned __int128 v22; // [xsp+0h] [xbp-50h] BYREF
  int32_t workType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4A2EAAD & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, eventFortificationEntity);
    sub_1B761C0(&LocalizationManager_TypeInfo, v7);
    this = (EventInfoFortificationViewItem_o *)sub_1B761C0(&StringLiteral_6460/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v8);
    byte_4A2EAAD = 1;
  }
  v22 = 0uLL;
  if ( !eventFortificationEntity )
    goto LABEL_8;
  eventId = eventFortificationEntity->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, method, v3, v4);
  workType = eventFortificationEntity->fields.workType;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &workType, v10, v11, v12);
  v14 = System_String__Format_61549432((System_String_o *)StringLiteral_6460/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v9, v13, 0LL);
  __asm { FMOV            V0.4S, #1.0 }
  v22 = (unsigned __int128)_Q0;
  v20 = v14;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v21 = LocalizationManager__Get(v20, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString(v21, (UnityEngine_Color_o *)&v22, 0LL);
  this = (EventInfoFortificationViewItem_o *)v6->fields.workBgSprite;
  if ( !this )
LABEL_8:
    sub_1B7641C(this, eventFortificationEntity);
  UIWidget__set_color((UIWidget_o *)this, (UnityEngine_Color_o)v22, 0LL);
}


void __fastcall EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_1B7641C(0LL, method);
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
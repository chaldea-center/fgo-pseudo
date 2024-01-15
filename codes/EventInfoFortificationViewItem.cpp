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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x0
  EventFortificationEntity_o *v10; // t1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v10 = this->fields.eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  if ( v10 != eventFortificationEntity )
  {
    this->fields.eventFortificationEntity = eventFortificationEntity;
    sub_B16F98(
      (BattleServantConfConponent_o *)p_eventFortificationEntity,
      (System_Int32_array **)eventFortificationEntity,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    EventInfoFortificationViewItem__SetupGiftIcon(this, eventFortificationEntity, v12);
    EventInfoFortificationViewItem__SetupWorkBgColor(this, eventFortificationEntity, v13);
  }
}


void __fastcall EventInfoFortificationViewItem__SetupGiftIcon(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  GiftMaster_o *MasterData_WarQuestSelectionMaster; // x0
  GiftEntity_array *GiftListById; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  GiftEntity_array *v12; // x20
  UnityEngine_Object_o *itemIcon; // x21
  int32_t *v14; // x8
  ItemIconComponent_o *v15; // x0

  if ( (byte_40FA120 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, eventFortificationEntity);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FA120 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventFortificationEntity )
    goto LABEL_18;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  GiftListById = GiftMaster__GetGiftListById(
                   MasterData_WarQuestSelectionMaster,
                   eventFortificationEntity->fields.giftId,
                   0LL);
  if ( !GiftListById )
    goto LABEL_18;
  v12 = GiftListById;
  if ( !GiftListById->max_length )
  {
LABEL_19:
    sub_B17100(GiftListById, v10, v11);
    sub_B170A0();
  }
  if ( GiftListById->m_Items[0] )
  {
    itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    GiftListById = (GiftEntity_array *)UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)GiftListById & 1) != 0 )
    {
      if ( v12->max_length )
      {
        v14 = (int32_t *)v12->m_Items[0];
        if ( v14 )
        {
          v15 = this->fields.itemIcon;
          if ( v15 )
          {
            ItemIconComponent__SetGift(v15, v14[5], v14[6], v14[7], 0, 0LL);
            return;
          }
        }
LABEL_18:
        sub_B170D4();
      }
      goto LABEL_19;
    }
  }
}


void __fastcall EventInfoFortificationViewItem__SetupWorkBgColor(
        EventInfoFortificationViewItem_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  UIWidget_o *workBgSprite; // x0
  int32_t workType; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  if ( (byte_40FA121 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, eventFortificationEntity);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_6410/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v6);
    byte_40FA121 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !eventFortificationEntity )
    goto LABEL_9;
  eventId = eventFortificationEntity->fields.eventId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  workType = eventFortificationEntity->fields.workType;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &workType);
  v9 = System_String__Format_43739268((System_String_o *)StringLiteral_6410/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v7, v8, 0LL);
  color = UnityEngine_Color__get_white(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v10 = LocalizationManager__Get(v9, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString(v10, &color, 0LL);
  workBgSprite = (UIWidget_o *)this->fields.workBgSprite;
  if ( !workBgSprite )
LABEL_9:
    sub_B170D4();
  UIWidget__set_color(workBgSprite, color, 0LL);
}


void __fastcall EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_B170D4();
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
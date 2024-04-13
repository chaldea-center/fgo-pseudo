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
    sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  DataManager_o *v14; // x20
  UnityEngine_Object_o *itemIcon; // x21
  int32_t *lookup; // x8
  __int64 v17; // x0

  if ( (byte_42E94D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, (_DWORD)eventFortificationEntity, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E94D5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !eventFortificationEntity )
    goto LABEL_18;
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)GiftMaster__GetGiftListById(
                                (GiftMaster_o *)Instance,
                                eventFortificationEntity->fields.giftId,
                                0LL);
  if ( !Instance )
    goto LABEL_18;
  v14 = Instance;
  if ( !LODWORD(Instance->fields.datalist) )
  {
LABEL_19:
    v17 = sub_B5D6C8(Instance);
    sub_B5D668(v17, 0LL);
  }
  if ( Instance->fields.lookup )
  {
    itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( LODWORD(v14->fields.datalist) )
      {
        lookup = (int32_t *)v14->fields.lookup;
        if ( lookup )
        {
          Instance = (DataManager_o *)this->fields.itemIcon;
          if ( Instance )
          {
            ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, lookup[5], lookup[6], lookup[7], 0, 0LL);
            return;
          }
        }
LABEL_18:
        sub_B5D69C(Instance, v13);
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
  __int64 v3; // x3
  EventInfoFortificationViewItem_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  int32_t workType; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-30h] BYREF

  v5 = this;
  if ( (byte_42E94D6 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)eventFortificationEntity, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    this = (EventInfoFortificationViewItem_o *)sub_B5D5C4(&StringLiteral_6507/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v9, v10, v11);
    byte_42E94D6 = 1;
  }
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  if ( !eventFortificationEntity )
    goto LABEL_9;
  eventId = eventFortificationEntity->fields.eventId;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  workType = eventFortificationEntity->fields.workType;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &workType);
  v14 = System_String__Format_44573324((System_String_o *)StringLiteral_6507/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v12, v13, 0LL);
  color = UnityEngine_Color__get_white(0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get(v14, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString(v15, &color, 0LL);
  this = (EventInfoFortificationViewItem_o *)v5->fields.workBgSprite;
  if ( !this )
LABEL_9:
    sub_B5D69C(this, eventFortificationEntity);
  UIWidget__set_color((UIWidget_o *)this, color, 0LL);
}


void __fastcall EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_B5D69C(0LL, method);
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
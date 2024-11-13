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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x0
  EventFortificationEntity_o *v10; // t1
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  v10 = this->fields.eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  if ( eventFortificationEntity != v10 )
  {
    this->fields.eventFortificationEntity = eventFortificationEntity;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_eventFortificationEntity,
      (int64_t)eventFortificationEntity,
      (int64_t)method,
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataManager_o *v11; // x20
  UnityEngine_Object_o *itemIcon; // x21
  int32_t *v13; // x8

  if ( (byte_4B1776A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, eventFortificationEntity, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    byte_4B1776A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
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
  v11 = Instance;
  if ( !LODWORD(Instance->fields.m_CancellationTokenSource) )
LABEL_18:
    sub_1BCAA44(Instance, v10);
  if ( *(_QWORD *)&Instance->fields._DispLog )
  {
    itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( LODWORD(v11->fields.m_CancellationTokenSource) )
      {
        v13 = *(int32_t **)&v11->fields._DispLog;
        if ( v13 )
        {
          Instance = (DataManager_o *)this->fields.itemIcon;
          if ( Instance )
          {
            ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)Instance, v13[5], v13[6], v13[7], 0, 0LL);
            return;
          }
        }
LABEL_17:
        sub_1BCAA3C(Instance, v10);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  System_String_o *v18; // x20
  System_String_o *v19; // x0
  unsigned __int128 v20; // [xsp+0h] [xbp-50h] BYREF
  int32_t workType; // [xsp+18h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+1Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B1776B & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, eventFortificationEntity, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    this = (EventInfoFortificationViewItem_o *)sub_1BCA7E0(&StringLiteral_6580/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v7, v8);
    byte_4B1776B = 1;
  }
  v20 = 0uLL;
  if ( !eventFortificationEntity )
    goto LABEL_8;
  eventId = eventFortificationEntity->fields.eventId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
  workType = eventFortificationEntity->fields.workType;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &workType);
  v11 = System_String__Format_62415592((System_String_o *)StringLiteral_6580/*"FORTIFICATION_GAUGE_BG_COLOR_{0}_{1}"*/, v9, v10, 0LL);
  __asm { FMOV            V0.4S, #1.0 }
  v20 = (unsigned __int128)_Q0;
  v18 = v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
  v19 = LocalizationManager__Get(v18, 0LL);
  UnityEngine_ColorUtility__TryParseHtmlString(v19, (UnityEngine_Color_o *)&v20, 0LL);
  this = (EventInfoFortificationViewItem_o *)v4->fields.workBgSprite;
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, eventFortificationEntity);
  UIWidget__set_color((UIWidget_o *)this, (UnityEngine_Color_o)v20, 0LL);
}


void __fastcall EventInfoFortificationViewItem__UpdateProgressBar(
        EventInfoFortificationViewItem_o *this,
        float value,
        const MethodInfo *method)
{
  UIBasicSprite_o *gaugeSprite; // x0

  gaugeSprite = (UIBasicSprite_o *)this->fields.gaugeSprite;
  if ( !gaugeSprite )
    sub_1BCAA3C(0LL, method);
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
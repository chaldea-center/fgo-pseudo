void EventInfoServantRateControl___ctor(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  __int64 v10; // x1
  EventInfoUIProgressControl_c *v11; // x0
  int v12; // w9

  if ( (byte_597262A & 1) == 0 )
  {
    sub_2213A60(&EventInfoUIProgressControl_TypeInfo);
    sub_2213A60(&StringLiteral_20081/*"event_evaluation_txt_01"*/);
    byte_597262A = 1;
  }
  v9 = StringLiteral_20081/*"event_evaluation_txt_01"*/;
  this->fields.rateSpriteName = (struct System_String_o *)StringLiteral_20081/*"event_evaluation_txt_01"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rateSpriteName, v9, v2, v3, v4, v5, v6, v7);
  v11 = EventInfoUIProgressControl_TypeInfo;
  this->fields.isEnabledCondensedScale = 1;
  v12 = *(&v11->_2.cctor_finished + 1);
  this->fields.userServantRate = 1;
  if ( !v12 )
    j_il2cpp_runtime_class_init_0(v11, v10);
  EventInfoUIProgressControl___ctor((EventInfoUIProgressControl_o *)this, 0);
}


int32_t EventInfoServantRateControl__GetCurrentServantRate(
        EventInfoServantRateControl_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_o *v5; // x0
  __int64 v6; // x1
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t v8; // w20
  TerminalSceneComponent_c *v9; // x0
  int32_t EventProgressValueSaveData; // w0
  struct EventProgressValueEntity_o *v11; // x8
  int32_t progressValue; // w8
  struct EventProgressValueEntity_o *v13; // x8

  if ( (byte_5972629 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_5972629 = 1;
  }
  if ( !this->fields.currentEventProgressValueEntity )
    return 1;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v5 = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( !currentEventProgressValueEntity )
      goto LABEL_38;
    return currentEventProgressValueEntity->fields.progressValue;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  v5 = v9->static_fields->mInstance;
  if ( !v5 )
LABEL_38:
    sub_2213CDC(v5, v6);
  if ( !TerminalSceneComponent__IsMapActive(v5, 0) )
  {
    currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
    if ( currentEventProgressValueEntity )
      return currentEventProgressValueEntity->fields.progressValue;
  }
  v5 = (TerminalSceneComponent_o *)EventInfoUIProgressControl__CheckEventProgressValueSaveData(
                                     (EventInfoUIProgressControl_o *)this,
                                     0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    EventProgressValueSaveData = EventInfoUIProgressControl__GetEventProgressValueSaveData(
                                   (EventInfoUIProgressControl_o *)this,
                                   1,
                                   0);
    v11 = this->fields.currentEventProgressValueEntity;
    if ( v11 )
    {
      progressValue = v11->fields.progressValue;
      if ( EventProgressValueSaveData >= progressValue )
        v8 = progressValue;
      else
        v8 = EventProgressValueSaveData;
    }
    else if ( EventProgressValueSaveData >= 1 )
    {
      v8 = 1;
    }
    else
    {
      v8 = EventProgressValueSaveData;
    }
  }
  else
  {
    v13 = this->fields.currentEventProgressValueEntity;
    if ( !v13 )
      goto LABEL_38;
    v8 = v13->fields.progressValue;
  }
  EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, v8, 0);
  return v8;
}


int64_t EventInfoServantRateControl__GetUserEventPoint(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  EventInfoServantRateControl_o *v2; // x19
  struct EventUiValueEntity_array *eventUiValueEntityList; // x24
  int max_length; // w8
  unsigned int v5; // w25
  int64_t v6; // x20
  EventUiValueEntity_o *v7; // x8
  int32_t v8; // w0
  UserEventPointMaster_o *userEventPointMaster; // x23
  int32_t v10; // w22
  struct EventUiEntity_o *eventUiEntity; // x8

  v2 = this;
  if ( (byte_5972628 & 1) == 0 )
  {
    this = (EventInfoServantRateControl_o *)sub_2213A60(&NetworkManager_TypeInfo);
    byte_5972628 = 1;
  }
  eventUiValueEntityList = v2->fields.eventUiValueEntityList;
  if ( !eventUiValueEntityList )
    goto LABEL_22;
  max_length = eventUiValueEntityList->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_2213CE4(this);
      v7 = eventUiValueEntityList->m_Items[v5];
      if ( !v7 )
        break;
      if ( v7->fields.type == 2 )
      {
        v8 = System_Int32__Parse(v7->fields.value, 0);
        userEventPointMaster = v2->fields.userEventPointMaster;
        v10 = v8;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
        if ( !byte_5969EF2 )
        {
          sub_2213A60(&NetworkManager_TypeInfo);
          byte_5969EF2 = 1;
        }
        this = (EventInfoServantRateControl_o *)NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
          this = (EventInfoServantRateControl_o *)NetworkManager_TypeInfo;
        }
        eventUiEntity = v2->fields.eventUiEntity;
        if ( !eventUiEntity || !userEventPointMaster )
          break;
        this = (EventInfoServantRateControl_o *)UserEventPointMaster__GetPoint(
                                                  userEventPointMaster,
                                                  *(_QWORD *)(this[1].fields.m_CachedPtr + 64),
                                                  eventUiEntity->fields.eventId,
                                                  v10,
                                                  0);
        v6 += (int64_t)this;
      }
      max_length = eventUiValueEntityList->max_length;
      if ( (int)++v5 >= max_length )
        return v6;
    }
LABEL_22:
    sub_2213CDC(this, method);
  }
  return 0;
}


void EventInfoServantRateControl__Initialization(
        EventInfoServantRateControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUiEntity; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_5972625 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_EventInfoServantRateControl__Initialization_b__12_0__);
    byte_5972625 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0);
  eventUiEntity = this->fields.eventUiEntity;
  v6 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoServantRateControl__Initialization_b__12_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v6, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.userEventPointMaster,
    (int32_t)Master_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void EventInfoServantRateControl__OnDestroy(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_2213CDC(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoServantRateControl__Redisplay(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void EventInfoServantRateControl__SetPointLabel(
        EventInfoServantRateControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *drawNumLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x21
  System_String_o *v8; // x0
  __int64 v9; // x1
  BalanceConfig_c *v10; // x8
  System_String_o *v11; // x22
  int64_t UserPointEventMax; // x23
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  int64_t v16; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5972626 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&System_Math_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_5972626 = 1;
  }
  drawNumLabel = (UnityEngine_Object_o *)this->fields.drawNumLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, point);
  if ( !UnityEngine_Object__op_Equality(drawNumLabel, 0, 0) )
  {
    v7 = this->fields.drawNumLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5870/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v10 = BalanceConfig_TypeInfo;
    v11 = v8;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v9);
      v10 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v10->static_fields->UserPointEventMax;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9);
    v16 = System_Math__Min_77153608(point, UserPointEventMax, 0);
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &v16);
    v14 = System_String__Format(v11, v13, 0);
    if ( !v7 )
      goto LABEL_17;
    UILabel__set_text(v7, v14, 0);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v14 = (System_String_o *)this->fields.drawNumLabel;
    if ( !v14 )
LABEL_17:
      sub_2213CDC(v14, v15);
    UILabel__SetCondensedScale((UILabel_o *)v14, this->fields.pointLabelWidth, 0, 0);
  }
}


void EventInfoServantRateControl__SetServantRateSprite(
        EventInfoServantRateControl_o *this,
        int32_t userRate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *servantRateSprite; // x21
  Il2CppObject *v7; // x0
  struct System_String_o *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UISprite_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5972627 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_20082/*"event_evaluation_txt_{0:D2}"*/);
    sub_2213A60(&StringLiteral_20081/*"event_evaluation_txt_01"*/);
    byte_5972627 = 1;
  }
  EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, userRate, 0);
  servantRateSprite = (UnityEngine_Object_o *)this->fields.servantRateSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality(servantRateSprite, 0, 0) )
  {
    v17 = userRate;
    v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
    v8 = System_String__Format((System_String_o *)StringLiteral_20082/*"event_evaluation_txt_{0:D2}"*/, v7, 0);
    this->fields.rateSpriteName = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.rateSpriteName,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    if ( !EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.servantRateSprite,
            this->fields.rateSpriteName,
            0) )
    {
      v16 = this->fields.servantRateSprite;
      if ( !v16 )
        goto LABEL_12;
      UISprite__set_spriteName(v16, (System_String_o *)StringLiteral_20081/*"event_evaluation_txt_01"*/, 0);
    }
    v16 = this->fields.servantRateSprite;
    if ( v16 )
    {
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v16->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v16,
        v16->klass->vtable._33_MakePixelPerfect.method);
      return;
    }
LABEL_12:
    sub_2213CDC(v16, v15);
  }
}


void EventInfoServantRateControl__Setup(
        EventInfoServantRateControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  int64_t UserEventPoint; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x2

  if ( entitys )
  {
    EventInfoUIProgressControl__Setup((EventInfoUIProgressControl_o *)this, entitys, 0);
    this->fields.eventUiValueEntityList = entitys;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    this->fields.userServantRate = EventInfoServantRateControl__GetCurrentServantRate(this, v11);
    UserEventPoint = EventInfoServantRateControl__GetUserEventPoint(this, v12);
    EventInfoServantRateControl__SetServantRateSprite(this, this->fields.userServantRate, v14);
    EventInfoServantRateControl__SetPointLabel(this, UserEventPoint, v15);
  }
}


void EventInfoServantRateControl___Initialization_b__12_0(
        EventInfoServantRateControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_2213CDC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
}


int32_t EventInfoServantRateControl__get_CurrentServantRate(
        EventInfoServantRateControl_o *this,
        const MethodInfo *method)
{
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8

  currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
  if ( currentEventProgressValueEntity )
    return currentEventProgressValueEntity->fields.progressValue;
  else
    return 1;
}
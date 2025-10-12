void EventInfoServantRateControl___ctor(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C38F61 & 1) == 0 )
  {
    sub_1C32C20(&EventInfoUIProgressControl_TypeInfo);
    sub_1C32C20(&StringLiteral_19186/*"event_evaluation_txt_01"*/);
    byte_4C38F61 = 1;
  }
  v5 = StringLiteral_19186/*"event_evaluation_txt_01"*/;
  this->fields.rateSpriteName = (struct System_String_o *)StringLiteral_19186/*"event_evaluation_txt_01"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rateSpriteName, v5, v2, v3);
  this->fields.isEnabledCondensedScale = 1;
  this->fields.userServantRate = 1;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventInfoUIProgressControl___ctor((EventInfoUIProgressControl_o *)this, 0);
}


int32_t EventInfoServantRateControl__GetCurrentServantRate(
        EventInfoServantRateControl_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_o *v5; // x0
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w20
  TerminalSceneComponent_c *v8; // x0
  int32_t EventProgressValueSaveData; // w0
  struct EventProgressValueEntity_o *v10; // x8
  int v11; // w8
  struct EventProgressValueEntity_o *v12; // x8

  if ( (byte_4C38F60 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C38F60 = 1;
  }
  if ( this->fields.currentEventProgressValueEntity )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v3 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v3 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v3->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
    if ( ((unsigned __int8)v5 & 1) != 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_37;
      return currentEventProgressValueEntity->fields.progressValue;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C319B6 )
    {
      sub_1C32C20(&TerminalSceneComponent_TypeInfo);
      byte_4C319B6 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    v5 = v8->static_fields->mInstance;
    if ( !v5 )
LABEL_37:
      sub_1C32E7C(v5);
    if ( !TerminalSceneComponent__IsMapActive(v5, 0) )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( currentEventProgressValueEntity )
        return currentEventProgressValueEntity->fields.progressValue;
    }
    v5 = (TerminalSceneComponent_o *)EventInfoUIProgressControl__CheckEventProgressValueSaveData(
                                       (EventInfoUIProgressControl_o *)this,
                                       0);
    if ( ((unsigned __int8)v5 & 1) == 0 )
    {
      v12 = this->fields.currentEventProgressValueEntity;
      if ( !v12 )
        goto LABEL_37;
      progressValue = v12->fields.progressValue;
      goto LABEL_35;
    }
    EventProgressValueSaveData = EventInfoUIProgressControl__GetEventProgressValueSaveData(
                                   (EventInfoUIProgressControl_o *)this,
                                   1,
                                   0);
    v10 = this->fields.currentEventProgressValueEntity;
    progressValue = EventProgressValueSaveData;
    if ( v10 )
    {
      v11 = v10->fields.progressValue;
      if ( EventProgressValueSaveData <= v11 )
        goto LABEL_35;
    }
    else
    {
      if ( EventProgressValueSaveData <= 1 )
      {
LABEL_35:
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(
          (EventInfoUIProgressControl_o *)this,
          progressValue,
          0);
        return progressValue;
      }
      v11 = 1;
    }
    progressValue = v11;
    goto LABEL_35;
  }
  return 1;
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
  if ( (byte_4C38F5F & 1) == 0 )
  {
    this = (EventInfoServantRateControl_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C38F5F = 1;
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
        sub_1C32E84(this);
      v7 = eventUiValueEntityList->m_Items[v5];
      if ( !v7 )
        break;
      if ( v7->fields.type == 2 )
      {
        v8 = System_Int32__Parse(v7->fields.value, 0);
        userEventPointMaster = v2->fields.userEventPointMaster;
        v10 = v8;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C31812 )
        {
          sub_1C32C20(&NetworkManager_TypeInfo);
          byte_4C31812 = 1;
        }
        this = (EventInfoServantRateControl_o *)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    sub_1C32E7C(this);
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
  Il2CppObject *Master_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C38F5C & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_EventInfoServantRateControl__Initialization_b__12_0__);
    byte_4C38F5C = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, 0);
  eventUiEntity = this->fields.eventUiEntity;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoServantRateControl__Initialization_b__12_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v6, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.userEventPointMaster, (int32_t)Master_object, v8, v9);
}


void EventInfoServantRateControl__OnDestroy(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C32E7C(this);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoServantRateControl__Redisplay(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void EventInfoServantRateControl__SetPointLabel(
        EventInfoServantRateControl_o *this,
        int64_t point,
        const MethodInfo *method)
{
  UnityEngine_Object_o *drawNumLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *v7; // x22
  BalanceConfig_c *v8; // x8
  int64_t UserPointEventMax; // x23
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  int64_t v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C38F5D & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_5638/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4C38F5D = 1;
  }
  drawNumLabel = (UnityEngine_Object_o *)this->fields.drawNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(drawNumLabel, 0, 0) )
  {
    v6 = this->fields.drawNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5638/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v18 = System_Math__Min_65042316(point, UserPointEventMax, 0);
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18, v10, v11, v12, v13, v14, v15);
    v17 = System_String__Format(v7, v16, 0);
    if ( !v6 )
      goto LABEL_17;
    UILabel__set_text(v6, v17, 0);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v17 = (System_String_o *)this->fields.drawNumLabel;
    if ( !v17 )
LABEL_17:
      sub_1C32E7C(v17);
    UILabel__SetCondensedScale((UILabel_o *)v17, this->fields.pointLabelWidth, 0, 0);
  }
}


void EventInfoServantRateControl__SetServantRateSprite(
        EventInfoServantRateControl_o *this,
        int32_t userRate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *servantRateSprite; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  struct System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UISprite_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C38F5E & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_19187/*"event_evaluation_txt_{0:D2}"*/);
    sub_1C32C20(&StringLiteral_19186/*"event_evaluation_txt_01"*/);
    byte_4C38F5E = 1;
  }
  EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, userRate, 0);
  servantRateSprite = (UnityEngine_Object_o *)this->fields.servantRateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(servantRateSprite, 0, 0) )
  {
    v17 = userRate;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v6, v7, v8, v9, v10, v11);
    v13 = System_String__Format((System_String_o *)StringLiteral_19187/*"event_evaluation_txt_{0:D2}"*/, v12, 0);
    this->fields.rateSpriteName = v13;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.rateSpriteName, (int32_t)v13, v14, v15);
    if ( !EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.servantRateSprite,
            this->fields.rateSpriteName,
            0) )
    {
      v16 = this->fields.servantRateSprite;
      if ( !v16 )
        goto LABEL_12;
      UISprite__set_spriteName(v16, (System_String_o *)StringLiteral_19186/*"event_evaluation_txt_01"*/, 0);
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
    sub_1C32E7C(v16);
  }
}


void EventInfoServantRateControl__Setup(
        EventInfoServantRateControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  int64_t UserEventPoint; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x2

  if ( entitys )
  {
    EventInfoUIProgressControl__Setup((EventInfoUIProgressControl_o *)this, entitys, 0);
    this->fields.eventUiValueEntityList = entitys;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventUiValueEntityList, (int32_t)entitys, v5, v6);
    this->fields.userServantRate = EventInfoServantRateControl__GetCurrentServantRate(this, v7);
    UserEventPoint = EventInfoServantRateControl__GetUserEventPoint(this, v8);
    EventInfoServantRateControl__SetServantRateSprite(this, this->fields.userServantRate, v10);
    EventInfoServantRateControl__SetPointLabel(this, UserEventPoint, v11);
  }
}


void EventInfoServantRateControl___Initialization_b__12_0(
        EventInfoServantRateControl_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C32E7C(this);
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
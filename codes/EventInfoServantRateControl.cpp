void EventInfoServantRateControl___ctor(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  const MethodInfo *v10; // x1

  if ( (byte_4D2E59D & 1) == 0 )
  {
    sub_1C94098(&EventInfoUIProgressControl_TypeInfo);
    sub_1C94098(&StringLiteral_19334/*"event_evaluation_txt_01"*/);
    byte_4D2E59D = 1;
  }
  v9 = StringLiteral_19334/*"event_evaluation_txt_01"*/;
  this->fields.rateSpriteName = (struct System_String_o *)StringLiteral_19334/*"event_evaluation_txt_01"*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rateSpriteName, v9, v2, v3, v4, v5, v6, v7);
  this->fields.isEnabledCondensedScale = 1;
  this->fields.userServantRate = 1;
  if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, v10);
}


int32_t EventInfoServantRateControl__GetCurrentServantRate(
        EventInfoServantRateControl_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  UnityEngine_Object_o *mInstance; // x20
  TerminalSceneComponent_o *HasKey; // x0
  const MethodInfo *v6; // x1
  struct EventProgressValueEntity_o *currentEventProgressValueEntity; // x8
  int32_t progressValue; // w20
  TerminalSceneComponent_c *v9; // x0
  const MethodInfo *v10; // x1
  System_String_o *EventProgressValueSaveKey; // x0
  const MethodInfo *v12; // x2
  System_String_o *v13; // x0
  int32_t Int; // w0
  struct EventProgressValueEntity_o *v15; // x8
  int v16; // w8
  struct EventProgressValueEntity_o *v17; // x8

  if ( (byte_4D2E59C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&TerminalSceneComponent_TypeInfo);
    byte_4D2E59C = 1;
  }
  if ( this->fields.currentEventProgressValueEntity )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D264E4 )
    {
      sub_1C94098(&TerminalSceneComponent_TypeInfo);
      byte_4D264E4 = 1;
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
    HasKey = (TerminalSceneComponent_o *)UnityEngine_Object__op_Equality(mInstance, 0, 0);
    if ( ((unsigned __int8)HasKey & 1) != 0 )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( !currentEventProgressValueEntity )
        goto LABEL_37;
      return currentEventProgressValueEntity->fields.progressValue;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D264E4 )
    {
      sub_1C94098(&TerminalSceneComponent_TypeInfo);
      byte_4D264E4 = 1;
    }
    v9 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v9 = TerminalSceneComponent_TypeInfo;
    }
    HasKey = v9->static_fields->mInstance;
    if ( !HasKey )
LABEL_37:
      sub_1C942F0(HasKey, v6);
    if ( !TerminalSceneComponent__IsMapActive(HasKey, 0) )
    {
      currentEventProgressValueEntity = this->fields.currentEventProgressValueEntity;
      if ( currentEventProgressValueEntity )
        return currentEventProgressValueEntity->fields.progressValue;
    }
    EventProgressValueSaveKey = EventInfoUIProgressControl__GetEventProgressValueSaveKey(
                                  (EventInfoUIProgressControl_o *)this,
                                  v10);
    HasKey = (TerminalSceneComponent_o *)UnityEngine_PlayerPrefs__HasKey(EventProgressValueSaveKey, 0);
    if ( ((unsigned __int8)HasKey & 1) == 0 )
    {
      v17 = this->fields.currentEventProgressValueEntity;
      if ( !v17 )
        goto LABEL_37;
      progressValue = v17->fields.progressValue;
      goto LABEL_35;
    }
    v13 = EventInfoUIProgressControl__GetEventProgressValueSaveKey((EventInfoUIProgressControl_o *)this, v6);
    Int = UnityEngine_PlayerPrefs__GetInt(v13, 1, 0);
    v15 = this->fields.currentEventProgressValueEntity;
    progressValue = Int;
    if ( v15 )
    {
      v16 = v15->fields.progressValue;
      if ( Int <= v16 )
        goto LABEL_35;
    }
    else
    {
      if ( Int <= 1 )
      {
LABEL_35:
        EventInfoUIProgressControl__SaveEventProgressValueSaveData(
          (EventInfoUIProgressControl_o *)this,
          progressValue,
          v12);
        return progressValue;
      }
      v16 = 1;
    }
    progressValue = v16;
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
  if ( (byte_4D2E59B & 1) == 0 )
  {
    this = (EventInfoServantRateControl_o *)sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2E59B = 1;
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
        sub_1C942F8(this);
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
        if ( !byte_4D2633A )
        {
          sub_1C94098(&NetworkManager_TypeInfo);
          byte_4D2633A = 1;
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
    sub_1C942F0(this, method);
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
  const MethodInfo *v7; // x3
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2E598 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_UserEventPointMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_EventInfoServantRateControl__Initialization_b__12_0__);
    byte_4D2E598 = 1;
  }
  EventInfoUIProgressControl__Initialization((EventInfoUIProgressControl_o *)this, entity, method);
  eventUiEntity = this->fields.eventUiEntity;
  v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_EventInfoServantRateControl__Initialization_b__12_0__, 0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity, v6, v7);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventPointMaster___);
  this->fields.userEventPointMaster = (struct UserEventPointMaster_o *)Master_object;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.userEventPointMaster,
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
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8
  const MethodInfo *v5; // x1

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C942F0(this, method);
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, v5);
}


void EventInfoServantRateControl__Redisplay(EventInfoServantRateControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C942F0(0, v3);
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  int64_t v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2E599 & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&System_Math_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_5643/*"EVENT_POINT_COMMON_FORMAT"*/);
    byte_4D2E599 = 1;
  }
  drawNumLabel = (UnityEngine_Object_o *)this->fields.drawNumLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(drawNumLabel, 0, 0) )
  {
    v6 = this->fields.drawNumLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5643/*"EVENT_POINT_COMMON_FORMAT"*/, 0);
    v8 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v8 = BalanceConfig_TypeInfo;
    }
    UserPointEventMax = v8->static_fields->UserPointEventMax;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v13 = System_Math__Min_65939904(point, UserPointEventMax, 0);
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v13);
    v11 = System_String__Format(v7, v10, 0);
    if ( !v6 )
      goto LABEL_17;
    UILabel__set_text(v6, v11, 0);
    if ( !this->fields.isEnabledCondensedScale )
      return;
    v11 = (System_String_o *)this->fields.drawNumLabel;
    if ( !v11 )
LABEL_17:
      sub_1C942F0(v11, v12);
    UILabel__SetCondensedScale((UILabel_o *)v11, this->fields.pointLabelWidth, 0, 0);
  }
}


void EventInfoServantRateControl__SetServantRateSprite(
        EventInfoServantRateControl_o *this,
        int32_t userRate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *servantRateSprite; // x21
  Il2CppObject *v6; // x0
  struct System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  UISprite_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2E59A & 1) == 0 )
  {
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_19335/*"event_evaluation_txt_{0:D2}"*/);
    sub_1C94098(&StringLiteral_19334/*"event_evaluation_txt_01"*/);
    byte_4D2E59A = 1;
  }
  EventInfoUIProgressControl__SaveEventProgressValueSaveData((EventInfoUIProgressControl_o *)this, userRate, method);
  servantRateSprite = (UnityEngine_Object_o *)this->fields.servantRateSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(servantRateSprite, 0, 0) )
  {
    v17 = userRate;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v7 = System_String__Format((System_String_o *)StringLiteral_19335/*"event_evaluation_txt_{0:D2}"*/, v6, 0);
    this->fields.rateSpriteName = v7;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.rateSpriteName, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    if ( !EventInfoUIBase__SetSpriteByLocalAtlas(
            (EventInfoUIBase_o *)this,
            this->fields.servantRateSprite,
            this->fields.rateSpriteName,
            v14) )
    {
      v16 = this->fields.servantRateSprite;
      if ( !v16 )
        goto LABEL_12;
      UISprite__set_spriteName(v16, (System_String_o *)StringLiteral_19334/*"event_evaluation_txt_01"*/, 0);
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
    sub_1C942F0(v16, v15);
  }
}


void EventInfoServantRateControl__Setup(
        EventInfoServantRateControl_o *this,
        EventUiValueEntity_array *entitys,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int64_t UserEventPoint; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x2

  if ( entitys )
  {
    this->fields.eventUiValueEntityList = entitys;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.eventUiValueEntityList,
      (int32_t)entitys,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.userServantRate = EventInfoServantRateControl__GetCurrentServantRate(this, v9);
    UserEventPoint = EventInfoServantRateControl__GetUserEventPoint(this, v10);
    EventInfoServantRateControl__SetServantRateSprite(this, this->fields.userServantRate, v12);
    EventInfoServantRateControl__SetPointLabel(this, UserEventPoint, v13);
  }
}


void EventInfoServantRateControl___Initialization_b__12_0(
        EventInfoServantRateControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct EventUiEntity_o *eventUiEntity; // x8

  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    sub_1C942F0(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, eventUiEntity->fields.eventId, v2);
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
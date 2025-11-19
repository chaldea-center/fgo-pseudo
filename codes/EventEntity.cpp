void EventEntity___ctor(EventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB623C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_int___ctor__);
    byte_4CB623C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33F6BF8 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventEntity__CreatePrimaryKey(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *EventEntity__FinishTimeString(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v5; // x8
  int64_t v6; // x19
  System_String_o *v7; // x19
  System_Object_array *v8; // x20
  System_DateTime_o v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x21
  System_DateTime_o v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x21
  System_DateTime_o v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  System_DateTime_o v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x21
  System_DateTime_o v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x21
  __int64 v32; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4CB6236 & 1) == 0 )
  {
    sub_1C6BA08(&System_DateTime_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&StringLiteral_5009/*"DISP_TIMESTR_FORMAT"*/);
    byte_4CB6236 = 1;
  }
  v5 = 96;
  if ( isFinishedAt )
    v5 = 104;
  v6 = *(int64_t *)((char *)&this->klass + v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_41600872(v6, 0).fields._dateData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5009/*"DISP_TIMESTR_FORMAT"*/, 0);
  v8 = (System_Object_array *)sub_1C6BAB0(object___TypeInfo, 5);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v9.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v9, 0);
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v8 )
    sub_1C6BC60(v10, v11);
  v14 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_29;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_28;
  v8->m_Items[0] = v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)v8->m_Items, (int32_t)v14, v12, v13);
  v15.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v15, 0);
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v18 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_29;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_28;
  v8->m_Items[1] = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v18, v16, v17);
  v19.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v19, 0);
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v22 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_29;
  }
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_28;
  v8->m_Items[2] = v22;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[2], (int32_t)v22, v20, v21);
  v23.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v23, 0);
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v26 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_29;
  }
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_28;
  v8->m_Items[3] = v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v26, v24, v25);
  v27.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v27, 0);
  v10 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v30 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C6BB44(v10, v8->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_29:
      v32 = sub_1C6BC84(v10);
      sub_1C6BB30(v32, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 4 )
LABEL_28:
    sub_1C6BC68(v10);
  v8->m_Items[4] = v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v8->m_Items[4], (int32_t)v30, v28, v29);
  return System_String__Format_64008236(v7, v8, 0);
}


int32_t EventEntity__GetBannerEffectEventTutorialFlag(EventEntity_o *this, const MethodInfo *method)
{
  return 65;
}


int64_t EventEntity__GetEndTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t RestTime; // x0
  int64_t v6; // x21

  if ( (byte_4CB622B & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB622B = 1;
  }
  RestTime = EventEntity__GetRestTime(this, isFinishedAt, method);
  if ( RestTime < 1 )
  {
    if ( isFinishedAt )
      return this->fields.finishedAt;
    else
      return this->fields.endedAt;
  }
  else
  {
    v6 = RestTime;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    return NetworkManager__getTime(0) + v6;
  }
}


int64_t EventEntity__GetEndTime_ShopOrReward(EventEntity_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t id; // w20
  ShopMaster_o *v7; // x21
  const MethodInfo *v8; // x2
  int64_t finishedAt; // x20
  int64_t result; // x0

  if ( (byte_4CB622E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB622E = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
  id = this->fields.id;
  v7 = (ShopMaster_o *)MasterData_object;
  if ( !EventEntity__IsOpen(this, 1, v8) )
    goto LABEL_10;
  Instance = (ShopEntity_array *)EventEntity__IsReward(this->fields.id, v4);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    finishedAt = this->fields.finishedAt;
    goto LABEL_11;
  }
  if ( !v7 || (Instance = ShopMaster__GetEventEntitiyList(v7, id, 0)) == 0 )
LABEL_14:
    sub_1C6BC60(Instance, v4);
  if ( LODWORD(Instance->max_length) )
    goto LABEL_9;
LABEL_10:
  finishedAt = 0;
LABEL_11:
  result = EventEntity__GetShopEndTime(this, v4);
  if ( finishedAt > result )
    return finishedAt;
  return result;
}


int64_t EventEntity__GetRestTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8

  if ( (byte_4CB622C & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB622C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !this )
    sub_1C6BC60(Time, v6);
  v8 = 96;
  if ( isFinishedAt )
    v8 = 104;
  return EventEntity__GetRestTime_42209628(this, Time, *(int64_t *)((char *)&this->klass + v8), v7);
}


int64_t EventEntity__GetRestTime_42209448(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v4; // x8

  if ( !this )
    sub_1C6BC60(0, checkTime);
  v4 = 96;
  if ( isFinishedAt )
    v4 = 104;
  return EventEntity__GetRestTime_42209628(this, checkTime, *(int64_t *)((char *)&this->klass + v4), method);
}


int64_t EventEntity__GetRestTime_42209628(
        EventEntity_o *this,
        int64_t checkTime,
        int64_t endTime,
        const MethodInfo *method)
{
  bool v4; // nf
  bool v5; // vf
  int64_t v6; // x9
  int64_t v7; // x2
  int64_t startedAt; // x8
  int32_t openHours; // w9
  int32_t intervalHours; // w10
  __int64 v11; // x11
  int64_t v12; // x8
  int64_t v13; // x8

  v5 = __OFSUB__(endTime, checkTime);
  v6 = endTime - checkTime;
  v4 = endTime - checkTime < 0;
  v7 = 0;
  if ( v4 != v5 )
    return v7;
  startedAt = this->fields.startedAt;
  if ( startedAt > checkTime )
    return v7;
  if ( this->fields.openType == 1 )
    return v6;
  openHours = this->fields.openHours;
  if ( !openHours )
    return 0;
  intervalHours = this->fields.intervalHours;
  if ( !intervalHours )
    return 0;
  v11 = 3600 * openHours;
  v12 = (checkTime - startedAt) % (3600 * intervalHours + v11);
  v5 = __OFSUB__(v11, v12);
  v13 = v11 - v12;
  if ( v13 < 0 != v5 )
    return 0;
  else
    return v13;
}


EventEntity_ScriptData_array *EventEntity__GetScriptData(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.script;
}


EventEntity_ScriptData_o *EventEntity__GetScriptDataCondCheck(
        EventEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct EventEntity_ScriptData_array *script; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned int v5; // w10
  unsigned int v6; // w11
  __int64 v7; // x12
  EventEntity_ScriptData_o *v8; // x13
  int64_t v9; // x13
  _BOOL4 v10; // w14
  _BOOL4 v11; // w15

  script = this->fields.script;
  if ( !script )
    return 0;
  max_length = script->max_length;
  if ( !max_length )
    return 0;
  if ( (int)max_length < 1 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v8 = script->m_Items[v6];
      if ( !v8 )
        sub_1C6BC60(this, nowTime);
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v5 = v6;
      ++v6;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (_DWORD)max_length != v6 );
  }
  if ( v5 >= (unsigned int)max_length )
    sub_1C6BC68(this);
  return script->m_Items[v5];
}


int64_t EventEntity__GetShopEndTime(EventEntity_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // x9
  int64_t v6; // x8
  int v7; // w10
  ShopEntity_o *v8; // x11
  int64_t closedAt; // x11

  if ( (byte_4CB6232 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6232 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0);
  if ( !Instance )
    goto LABEL_16;
  max_length = Instance->max_length;
  if ( max_length && (int)max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = Instance->m_Items[v7];
      if ( !v8 )
        break;
      closedAt = v8->fields.closedAt;
      ++v7;
      if ( v6 < closedAt )
        v6 = closedAt;
      if ( (_DWORD)max_length == v7 )
        return v6;
    }
LABEL_16:
    sub_1C6BC60(Instance, v4);
  }
  return 0;
}


System_String_o *EventEntity__GetShortNameFirstPriority(EventEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4CB623A & 1) == 0 )
  {
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB623A = 1;
  }
  if ( System_String__op_Inequality(this->fields.shortName, string_TypeInfo->static_fields->Empty, 0) )
    return this->fields.shortName;
  else
    return EventEntity__getEventName(this, v3);
}


bool EventEntity__IsClosePurchaseShop(EventEntity_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  il2cpp_array_size_t max_length; // x8
  ShopEntity_o *v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB6235 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6235 = 1;
  }
  entity = 0;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   this->fields.id,
                                   (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      if ( (BYTE3(entity[1].monitor) & 1) == 0 )
        return 0;
      Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( Instance )
        {
          v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0);
          if ( !Instance || (max_length = Instance->max_length) == 0 )
            return 1;
          if ( !(_DWORD)max_length )
            sub_1C6BC68(Instance);
          v9 = Instance->m_Items[0];
          if ( v9 )
          {
            Instance = (ShopEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                             v7,
                                             v9->fields.baseShopId,
                                             (const MethodInfo_33F90DC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
            if ( Instance )
              return ShopMaster__IsPurchaseCloseEventShopItem((ShopMaster_o *)v7, HIDWORD(Instance->bounds), 0);
          }
        }
      }
    }
LABEL_19:
    sub_1C6BC60(Instance, v4);
  }
  return 0;
}


bool EventEntity__IsEventEnded(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4CB6230 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6230 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.endedAt < nowTime;
}


bool EventEntity__IsEventPeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4CB622F & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB622F = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= nowTime && nowTime <= this->fields.endedAt;
}


bool EventEntity__IsEventReleaseByWarId(EventEntity_o *this, int32_t releaseWarId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  WarReleaseEntity_o *OpenEntity; // x0

  if ( (byte_4CB6239 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    byte_4CB6239 = 1;
  }
  if ( releaseWarId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_1C6BC60(0, v5);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, releaseWarId, 0);
  return OpenEntity && WarReleaseEntity__IsOpen(OpenEntity, 0);
}


bool EventEntity__IsExchangePeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4CB6231 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB6231 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0);
  }
  return this->fields.endedAt <= nowTime && nowTime <= this->fields.finishedAt;
}


// local variable allocation has failed, the output may be wrong!
bool EventEntity__IsOpen(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)isFinishedAt)
      || EventEntity__GetRestTime(this, isFinishedAt, v5) > 0;
}


bool EventEntity__IsOpen_42209376(EventEntity_o *this, int64_t checkTime, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)checkTime)
      || EventEntity__GetRestTime_42209448(this, checkTime, isFinishedAt, v7) > 0;
}


bool EventEntity__IsReward(int32_t event_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB622D & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB622D = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          event_id,
          (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C6BC60(Instance, v4);
  return EventDetailEntity__IsReward((EventDetailEntity_o *)entity, v4);
}


bool EventEntity__IsReward_42210028(EventEntity_o *this, const MethodInfo *method)
{
  return EventEntity__IsReward(this->fields.id, method);
}


bool EventEntity__IsSkillRelease(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Object_array *script; // x21
  System_Func_object__bool__o *v7; // x22
  bool result; // w0

  if ( (byte_4CB6237 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_EventEntity_ScriptData___);
    sub_1C6BA08(&Method_EventEntity__IsSkillRelease_b__61_0__);
    sub_1C6BA08(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    byte_4CB6237 = 1;
  }
  result = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0)
        && (script = (System_Object_array *)this->fields.script,
            v7 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventEntity_ScriptData__bool__TypeInfo),
            System_Func_object__bool____ctor(v7, (Il2CppObject *)this, Method_EventEntity__IsSkillRelease_b__61_0__, 0),
            BasicHelper__Any_object__51528924(
              script,
              (System_Func_T__bool__o *)v7,
              (const MethodInfo_31244DC *)Method_BasicHelper_Any_EventEntity_ScriptData___))
        || EventEntity__IsOpen(this, isFinishedAt, v5);
  return result;
}


bool EventEntity__IsTutorialRelease(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Object_array *script; // x21
  System_Func_object__bool__o *v7; // x22
  bool result; // w0

  if ( (byte_4CB6238 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_EventEntity_ScriptData___);
    sub_1C6BA08(&Method_EventEntity__IsTutorialRelease_b__62_0__);
    sub_1C6BA08(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    byte_4CB6238 = 1;
  }
  result = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0)
        && (script = (System_Object_array *)this->fields.script,
            v7 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventEntity_ScriptData__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v7,
              (Il2CppObject *)this,
              Method_EventEntity__IsTutorialRelease_b__62_0__,
              0),
            BasicHelper__Any_object__51528924(
              script,
              (System_Func_T__bool__o *)v7,
              (const MethodInfo_31244DC *)Method_BasicHelper_Any_EventEntity_ScriptData___))
        || EventEntity__IsOpen(this, isFinishedAt, v5);
  return result;
}


bool EventEntity__TryGetScriptDataByBannerEffectName(
        EventEntity_o *this,
        EventEntity_ScriptData_o **scriptData,
        System_String_o *targetEffectName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Object_array *script; // x20
  System_Func_object__bool__o *v13; // x21
  Il2CppObject *object; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4CB623B & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Find_EventEntity_ScriptData___);
    sub_1C6BA08(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    sub_1C6BA08(&Method_EventEntity___c__DisplayClass65_0__TryGetScriptDataByBannerEffectName_b__0__);
    sub_1C6BA08(&EventEntity___c__DisplayClass65_0_TypeInfo);
    byte_4CB623B = 1;
  }
  v7 = sub_1C6BC54(EventEntity___c__DisplayClass65_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_QWORD *)(v7 + 16) = targetEffectName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)targetEffectName, v10, v11);
  script = (System_Object_array *)this->fields.script;
  v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_EventEntity_ScriptData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v7,
    Method_EventEntity___c__DisplayClass65_0__TryGetScriptDataByBannerEffectName_b__0__,
    0);
  object = BasicHelper__Find_object_(
             script,
             (System_Func_T__bool__o *)v13,
             (const MethodInfo_3124FFC *)Method_BasicHelper_Find_EventEntity_ScriptData___);
  *scriptData = (EventEntity_ScriptData_o *)object;
  sub_1C6B9AC((CGThumbnailListItem_o *)scriptData, (int32_t)object, v15, v16);
  return *scriptData != 0;
}


bool EventEntity___IsSkillRelease_b__61_0(
        EventEntity_o *this,
        EventEntity_ScriptData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C6BC60(this, 0);
  return EventEntity__IsEventReleaseByWarId(this, data->fields.skillReleaseByWarId, method);
}


bool EventEntity___IsTutorialRelease_b__62_0(
        EventEntity_o *this,
        EventEntity_ScriptData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C6BC60(this, 0);
  return EventEntity__IsEventReleaseByWarId(this, data->fields.tutorialReleaseByWarId, method);
}


int64_t EventEntity__cmpShopClosedAt(EventEntity_o *this, EventEntity_o *entity, const MethodInfo *method)
{
  int64_t finishedAt; // x10
  int64_t v4; // x8

  if ( !entity )
    sub_1C6BC60(this, 0);
  finishedAt = this->fields.finishedAt;
  v4 = entity->fields.finishedAt;
  if ( finishedAt == v4 )
    return this->fields.id - entity->fields.id;
  if ( !finishedAt )
    return 1;
  if ( v4 )
    return finishedAt - v4;
  return -1;
}


int32_t EventEntity__getBannerID_OfTime(EventEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4CB622A & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB622A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( Time < this->fields.noticeAt )
    return 0;
  if ( Time < this->fields.startedAt )
    return this->fields.noticeBannerId;
  if ( Time >= this->fields.finishedAt )
    return 0;
  else
    return this->fields.bannerId;
}


int32_t EventEntity__getEventBannerID(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.bannerId;
}


int32_t EventEntity__getEventBannerPriority(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.bannerPriority;
}


System_String_o *EventEntity__getEventDetail(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.detail;
}


int64_t EventEntity__getEventEndedAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.endedAt;
}


int64_t EventEntity__getEventFinishedAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.finishedAt;
}


int32_t EventEntity__getEventIconID(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


int32_t EventEntity__getEventId(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventEntity__getEventIntervalHours(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.intervalHours;
}


System_String_o *EventEntity__getEventLinkBody(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.linkBody;
}


System_String_o *EventEntity__getEventName(EventEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4CB6229 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventAddMaster___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6229 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventAddMaster___)) == 0 )
  {
    sub_1C6BC60(Instance, v4);
  }
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Instance,
                              this->fields.id,
                              3,
                              v5);
  p_name = &this->fields.name;
  if ( OverwriteEventAddEntity )
    p_name = &OverwriteEventAddEntity->fields.overwriteText;
  return *p_name;
}


int64_t EventEntity__getEventNoticeAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.noticeAt;
}


int32_t EventEntity__getEventOpenHours(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.openHours;
}


int64_t EventEntity__getEventStartedAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.startedAt;
}


int32_t EventEntity__getEventType(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *EventEntity__getPurchaseShopBannerName(
        EventEntity_o *this,
        System_String_o *bannerName,
        const MethodInfo *method)
{
  if ( (byte_4CB6234 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23012/*"r"*/);
    byte_4CB6234 = 1;
  }
  if ( EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)bannerName) )
    return System_String__Concat_63966792(bannerName, (System_String_o *)StringLiteral_23012/*"r"*/, 0);
  else
    return bannerName;
}


bool EventEntity__isCheckEventDetail(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 12;
}


bool EventEntity__isPurchaseEventOpen(EventEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  _BOOL4 EventFlag; // w20
  _BOOL4 v7; // w8
  ShopMaster_o *v8; // x20
  int32_t EventShopBaseShopId; // w0
  Il2CppObject *v12; // [xsp+0h] [xbp-40h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB6233 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1C6BA08(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C6BA08(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB6233 = 1;
  }
  v12 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_25;
  if ( !UserEventMaster__TryGetEntity(
          (UserEventMaster_o *)MasterData_object,
          &entity,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
          this->fields.id,
          0) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity
    || (EventFlag = UserEventEntity__getEventFlag(entity, 1, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_25:
    sub_1C6BC60(Instance, v4);
  }
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v12,
                                this->fields.id,
                                (const MethodInfo_33F9128 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_25;
    v7 = ((LODWORD(v12[1].monitor) >> 25) & 1) == 0;
  }
  else
  {
    v7 = 1;
  }
  if ( !EventFlag || !v7 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_25;
  v8 = (ShopMaster_o *)Instance;
  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId((ShopMaster_o *)Instance, this->fields.id, 0);
  return !ShopMaster__IsPurchaseCloseEventShopItem(v8, EventShopBaseShopId, 0);
}


void EventEntity_ScriptData___ctor(EventEntity_ScriptData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventEntity___c__DisplayClass65_0___ctor(EventEntity___c__DisplayClass65_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventEntity___c__DisplayClass65_0___TryGetScriptDataByBannerEffectName_b__0(
        EventEntity___c__DisplayClass65_0_o *this,
        EventEntity_ScriptData_o *n,
        const MethodInfo *method)
{
  EventEntity___c__DisplayClass65_0_o *v3; // x19

  if ( !n )
    goto LABEL_6;
  v3 = this;
  if ( System_String__IsNullOrEmpty(n->fields.bannerEffectName, 0) )
    return 0;
  this = (EventEntity___c__DisplayClass65_0_o *)n->fields.bannerEffectName;
  if ( !this )
LABEL_6:
    sub_1C6BC60(this, n);
  return System_String__Equals_64002112((System_String_o *)this, v3->fields.targetEffectName, 0);
}
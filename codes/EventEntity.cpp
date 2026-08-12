void EventEntity___ctor(EventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59707AC & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59707AC = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventEntity__CreatePrimaryKey(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t EventEntity__GetBannerEffectEventTutorialFlag(EventEntity_o *this, const MethodInfo *method)
{
  return 65;
}


int64_t EventEntity__GetEndTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t RestTime; // x0
  __int64 v6; // x1
  int64_t v7; // x21

  if ( (byte_597079D & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597079D = 1;
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
    v7 = RestTime;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
    return NetworkManager__getTime(0) + v7;
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

  if ( (byte_59707A0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59707A0 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
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
    sub_2213CDC(Instance, v4);
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


// local variable allocation has failed, the output may be wrong!
int64_t EventEntity__GetRestTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8

  if ( (byte_597079E & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_597079E = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, isFinishedAt);
  Time = NetworkManager__getTime(0);
  if ( !this )
    sub_2213CDC(Time, v6);
  v8 = 96;
  if ( isFinishedAt )
    v8 = 104;
  return EventEntity__GetRestTime_48976208(this, Time, *(int64_t *)((char *)&this->klass + v8), v7);
}


int64_t EventEntity__GetRestTime_48976032(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v4; // x8

  if ( !this )
    sub_2213CDC(0, checkTime);
  v4 = 96;
  if ( isFinishedAt )
    v4 = 104;
  return EventEntity__GetRestTime_48976208(this, checkTime, *(int64_t *)((char *)&this->klass + v4), method);
}


int64_t EventEntity__GetRestTime_48976208(
        EventEntity_o *this,
        int64_t checkTime,
        int64_t endTime,
        const MethodInfo *method)
{
  int64_t result; // x0
  int64_t startedAt; // x9
  bool v7; // vf
  __int64 v8; // x9
  int32_t openHours; // w10
  int32_t intervalHours; // w8
  int v11; // w10
  __int64 v12; // x8
  int64_t v13; // x8

  result = 0;
  if ( endTime >= checkTime )
  {
    startedAt = this->fields.startedAt;
    v7 = __OFSUB__(checkTime, startedAt);
    v8 = checkTime - startedAt;
    if ( v8 < 0 == v7 )
    {
      if ( this->fields.openType == 1 )
      {
        return endTime - checkTime;
      }
      else
      {
        openHours = this->fields.openHours;
        if ( openHours && (intervalHours = this->fields.intervalHours) != 0 )
        {
          v11 = 3600 * openHours;
          v12 = v8 % (3600 * intervalHours + (__int64)v11);
          v7 = __OFSUB__(v11, v12);
          v13 = v11 - v12;
          if ( v13 < 0 != v7 )
            return 0;
          else
            return v13;
        }
        else
        {
          return 0;
        }
      }
    }
  }
  return result;
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
  __int64 v5; // x11
  unsigned int v6; // w10
  __int64 v7; // x13
  EventEntity_ScriptData_o *v8; // x14
  int64_t v9; // x14
  _BOOL4 v10; // w15
  _BOOL4 v11; // w16

  script = this->fields.script;
  if ( !script )
    return 0;
  max_length = script->max_length;
  if ( !max_length )
    return 0;
  if ( (int)max_length < 1 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v8 = script->m_Items[v5];
      if ( !v8 )
        sub_2213CDC(this, nowTime);
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v6 = v5;
      ++v5;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (_DWORD)max_length != (_DWORD)v5 );
  }
  if ( v6 >= (unsigned int)max_length )
    sub_2213CE4(this);
  return script->m_Items[v6];
}


int64_t EventEntity__GetShopEndTime(EventEntity_o *this, const MethodInfo *method)
{
  int64_t result; // x0
  __int64 v4; // x1
  __int64 v5; // x9
  int64_t v6; // x8
  int64_t v7; // x8
  int64_t v8; // x10

  if ( (byte_59707A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59707A4 = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_15;
  result = (int64_t)DataManager__GetMasterData_object_(
                      (DataManager_o *)result,
                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !result )
    goto LABEL_15;
  result = (int64_t)ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)result, this->fields.id, 0);
  if ( !result )
    goto LABEL_15;
  v5 = *(_QWORD *)(result + 24);
  v6 = result;
  if ( v5 && (int)v5 >= 1 )
  {
    result = 0;
    v7 = v6 + 32;
    while ( *(_QWORD *)v7 )
    {
      v8 = *(_QWORD *)(*(_QWORD *)v7 + 136LL);
      v7 += 8LL;
      if ( result <= v8 )
        result = v8;
      LODWORD(v5) = v5 - 1;
      if ( !(_DWORD)v5 )
        return result;
    }
LABEL_15:
    sub_2213CDC(result, v4);
  }
  return 0;
}


System_String_o *EventEntity__GetShortNameFirstPriority(EventEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( System_String__op_Inequality(this->fields.shortName, **(System_String_o ***)(qword_5984390 + 184), 0) )
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

  if ( (byte_59707A7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59707A7 = 1;
  }
  entity = 0;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   this->fields.id,
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      if ( (BYTE3(entity[1].monitor) & 1) == 0 )
        return 0;
      Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( Instance )
        {
          v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0);
          if ( !Instance || (max_length = Instance->max_length) == 0 )
            return 1;
          if ( !(_DWORD)max_length )
            sub_2213CE4(Instance);
          v9 = Instance->m_Items[0];
          if ( v9 )
          {
            Instance = (ShopEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                             v7,
                                             v9->fields.baseShopId,
                                             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
            if ( Instance )
              return ShopMaster__IsPurchaseCloseEventShopItem((ShopMaster_o *)v7, HIDWORD(Instance->bounds), 0);
          }
        }
      }
    }
LABEL_19:
    sub_2213CDC(Instance, v4);
  }
  return 0;
}


bool EventEntity__IsEventEnded(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_59707A2 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59707A2 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  return this->fields.endedAt < Time;
}


bool EventEntity__IsEventPeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_59707A1 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59707A1 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  return this->fields.startedAt <= Time && Time <= this->fields.endedAt;
}


// local variable allocation has failed, the output may be wrong!
bool EventEntity__IsEventReleaseByWarId(EventEntity_o *this, int32_t releaseWarId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  WarReleaseEntity_o *OpenEntity; // x0

  if ( (byte_59707AA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59707AA = 1;
  }
  if ( releaseWarId < 1 )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&releaseWarId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v5);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, releaseWarId, 0);
  return OpenEntity && WarReleaseEntity__IsOpen(OpenEntity, 0);
}


bool EventEntity__IsExchangePeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_59707A3 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_59707A3 = 1;
  }
  if ( !Time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, nowTime);
    Time = NetworkManager__getTime(0);
  }
  return this->fields.endedAt <= Time && Time <= this->fields.finishedAt;
}


// local variable allocation has failed, the output may be wrong!
bool EventEntity__IsOpen(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)isFinishedAt)
      || EventEntity__GetRestTime(this, isFinishedAt, v5) > 0;
}


bool EventEntity__IsOpen_48975960(EventEntity_o *this, int64_t checkTime, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)checkTime)
      || EventEntity__GetRestTime_48976032(this, checkTime, isFinishedAt, v7) > 0;
}


bool EventEntity__IsReward(int32_t event_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597079F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597079F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          event_id,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_2213CDC(Instance, v4);
  return EventDetailEntity__IsReward((EventDetailEntity_o *)entity, v4);
}


bool EventEntity__IsReward_48976584(EventEntity_o *this, const MethodInfo *method)
{
  return EventEntity__IsReward(this->fields.id, method);
}


bool EventEntity__IsSkillRelease(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Object_array *script; // x21
  System_Func_object__bool__o *v7; // x22
  bool result; // w0

  if ( (byte_59707A8 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventEntity_ScriptData___);
    sub_2213A60(&Method_EventEntity__IsSkillRelease_b__56_0__);
    sub_2213A60(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    byte_59707A8 = 1;
  }
  result = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0)
        && (script = (System_Object_array *)this->fields.script,
            v7 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventEntity_ScriptData__bool__TypeInfo),
            System_Func_object__bool____ctor(v7, (Il2CppObject *)this, Method_EventEntity__IsSkillRelease_b__56_0__, 0),
            BasicHelper__Any_object__58785420(
              script,
              (System_Func_T__bool__o *)v7,
              (const MethodInfo_380FE8C *)Method_BasicHelper_Any_EventEntity_ScriptData___))
        || EventEntity__IsOpen(this, isFinishedAt, v5);
  return result;
}


bool EventEntity__IsTutorialRelease(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  System_Object_array *script; // x21
  System_Func_object__bool__o *v7; // x22
  bool result; // w0

  if ( (byte_59707A9 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_EventEntity_ScriptData___);
    sub_2213A60(&Method_EventEntity__IsTutorialRelease_b__57_0__);
    sub_2213A60(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    byte_59707A9 = 1;
  }
  result = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0)
        && (script = (System_Object_array *)this->fields.script,
            v7 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventEntity_ScriptData__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v7,
              (Il2CppObject *)this,
              Method_EventEntity__IsTutorialRelease_b__57_0__,
              0),
            BasicHelper__Any_object__58785420(
              script,
              (System_Func_T__bool__o *)v7,
              (const MethodInfo_380FE8C *)Method_BasicHelper_Any_EventEntity_ScriptData___))
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Object_array *script; // x20
  System_Func_object__bool__o *v17; // x21
  Il2CppObject *object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_59707AB & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Find_EventEntity_ScriptData___);
    sub_2213A60(&System_Func_EventEntity_ScriptData__bool__TypeInfo);
    sub_2213A60(&Method_EventEntity___c__DisplayClass60_0__TryGetScriptDataByBannerEffectName_b__0__);
    sub_2213A60(&EventEntity___c__DisplayClass60_0_TypeInfo);
    byte_59707AB = 1;
  }
  v7 = sub_2213CCC(EventEntity___c__DisplayClass60_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = targetEffectName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)targetEffectName, v10, v11, v12, v13, v14, v15);
  script = (System_Object_array *)this->fields.script;
  v17 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_EventEntity_ScriptData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_EventEntity___c__DisplayClass60_0__TryGetScriptDataByBannerEffectName_b__0__,
    0);
  object = BasicHelper__Find_object_(
             script,
             (System_Func_T__bool__o *)v17,
             (const MethodInfo_3810A1C *)Method_BasicHelper_Find_EventEntity_ScriptData___);
  *scriptData = (EventEntity_ScriptData_o *)object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)scriptData, (int32_t)object, v19, v20, v21, v22, v23, v24);
  return *scriptData != 0;
}


bool EventEntity___IsSkillRelease_b__56_0(
        EventEntity_o *this,
        EventEntity_ScriptData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return EventEntity__IsEventReleaseByWarId(this, data->fields.skillReleaseByWarId, method);
}


bool EventEntity___IsTutorialRelease_b__57_0(
        EventEntity_o *this,
        EventEntity_ScriptData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_2213CDC(this, 0);
  return EventEntity__IsEventReleaseByWarId(this, data->fields.tutorialReleaseByWarId, method);
}


int64_t EventEntity__cmpShopClosedAt(EventEntity_o *this, EventEntity_o *entity, const MethodInfo *method)
{
  int64_t finishedAt; // x8
  int64_t v4; // x10
  int64_t v5; // x9

  if ( !entity )
    sub_2213CDC(this, 0);
  finishedAt = this->fields.finishedAt;
  v4 = entity->fields.finishedAt;
  v5 = finishedAt - v4;
  if ( finishedAt == v4 )
    return this->fields.id - entity->fields.id;
  if ( !v4 )
    v5 = -1;
  if ( finishedAt )
    return v5;
  else
    return 1;
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
  EventEntity_o *v7; // x8

  if ( (byte_597079C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597079C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Instance,
                              this->fields.id,
                              3,
                              v5);
  if ( OverwriteEventAddEntity )
    v7 = (EventEntity_o *)OverwriteEventAddEntity;
  else
    v7 = this;
  return v7->fields.name;
}


int64_t EventEntity__getEventNoticeAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.noticeAt;
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
  if ( (byte_59707A6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24111/*"r"*/);
    byte_59707A6 = 1;
  }
  if ( EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)bannerName) )
    return System_String__Concat_75651716(bannerName, (System_String_o *)StringLiteral_24111/*"r"*/, 0);
  else
    return bannerName;
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

  if ( (byte_59707A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59707A5 = 1;
  }
  v12 = 0;
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
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
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_25:
    sub_2213CDC(Instance, v4);
  }
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v12,
                                this->fields.id,
                                (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_25;
    v7 = (BYTE3(v12[1].monitor) & 2) == 0;
  }
  else
  {
    v7 = 1;
  }
  if ( !EventFlag || !v7 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ShopMaster___);
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


void EventEntity___c__DisplayClass60_0___ctor(EventEntity___c__DisplayClass60_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventEntity___c__DisplayClass60_0___TryGetScriptDataByBannerEffectName_b__0(
        EventEntity___c__DisplayClass60_0_o *this,
        EventEntity_ScriptData_o *n,
        const MethodInfo *method)
{
  EventEntity___c__DisplayClass60_0_o *v3; // x19

  if ( !n )
    goto LABEL_6;
  v3 = this;
  if ( System_String__IsNullOrEmpty(n->fields.bannerEffectName, 0) )
    return 0;
  this = (EventEntity___c__DisplayClass60_0_o *)n->fields.bannerEffectName;
  if ( !this )
LABEL_6:
    sub_2213CDC(this, n);
  return System_String__Equals_75686512((System_String_o *)this, v3->fields.targetEffectName, 0);
}
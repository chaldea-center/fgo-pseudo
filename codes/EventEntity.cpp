void __fastcall EventEntity___ctor(EventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B0D7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventEntity__CreatePrimaryKey(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


System_String_o *__fastcall EventEntity__FinishTimeString(
        EventEntity_o *this,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x8
  int64_t v6; // x19
  System_String_o *v7; // x19
  System_Object_array *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x21
  __int64 v42; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8

  if ( (byte_4A5B0D6 & 1) == 0 )
  {
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&StringLiteral_5051/*"DISP_TIMESTR_FORMAT"*/);
    byte_4A5B0D6 = 1;
  }
  v5 = 96LL;
  if ( isFinishedAt )
    v5 = 104LL;
  v6 = *(int64_t *)((char *)&this->klass + v5);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_38479168(v6, 0LL).fields._dateData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v7 = LocalizationManager__Get((System_String_o *)StringLiteral_5051/*"DISP_TIMESTR_FORMAT"*/, 0LL);
  v8 = (System_Object_array *)sub_1B88658(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v49.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v49, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v9, v10, v11);
  if ( !v8 )
    sub_1B8880C(v12, v13);
  v16 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_29;
  }
  if ( !v8->max_length )
    goto LABEL_28;
  v8->m_Items[0] = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v8->m_Items, (int32_t)v16, v14, v15);
  v50.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v50, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v17, v18, v19);
  v22 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_29;
  }
  if ( v8->max_length <= 1 )
    goto LABEL_28;
  v8->m_Items[1] = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[1], (int32_t)v22, v20, v21);
  v51.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v51, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v23, v24, v25);
  v28 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_29;
  }
  if ( v8->max_length <= 2 )
    goto LABEL_28;
  v8->m_Items[2] = v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[2], (int32_t)v28, v26, v27);
  v52.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v52, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v29, v30, v31);
  v34 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_29;
  }
  if ( v8->max_length <= 3 )
    goto LABEL_28;
  v8->m_Items[3] = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[3], (int32_t)v34, v32, v33);
  v53.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v53, 0LL);
  v12 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v35, v36, v37);
  v40 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = sub_1B886EC(v12, v8->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_29:
      v42 = sub_1B88830(v12);
      sub_1B886D8(v42, 0LL);
    }
  }
  if ( v8->max_length <= 4 )
LABEL_28:
    sub_1B88814(v12, v13);
  v8->m_Items[4] = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->m_Items[4], (int32_t)v40, v38, v39);
  return System_String__Format_61721540(v7, v8, 0LL);
}


int64_t __fastcall EventEntity__GetEndTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t RestTime; // x0
  int64_t v6; // x21

  if ( (byte_4A5B0CC & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B0CC = 1;
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
    return NetworkManager__getTime(0LL) + v6;
  }
}


int64_t __fastcall EventEntity__GetEndTime_ShopOrReward(EventEntity_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t id; // w20
  ShopMaster_o *v7; // x21
  const MethodInfo *v8; // x2
  int64_t finishedAt; // x20
  int64_t result; // x0

  if ( (byte_4A5B0CF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0CF = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
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
  if ( !v7 || (Instance = ShopMaster__GetEventEntitiyList(v7, id, 0LL)) == 0LL )
LABEL_14:
    sub_1B8880C(Instance, v4);
  if ( Instance->max_length )
    goto LABEL_9;
LABEL_10:
  finishedAt = 0LL;
LABEL_11:
  result = EventEntity__GetShopEndTime(this, v4);
  if ( finishedAt > result )
    return finishedAt;
  return result;
}


int64_t __fastcall EventEntity__GetRestTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8

  if ( (byte_4A5B0CD & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B0CD = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this )
    sub_1B8880C(Time, v6);
  v8 = 96LL;
  if ( isFinishedAt )
    v8 = 104LL;
  return EventEntity__GetRestTime_39121832(this, Time, *(int64_t *)((char *)&this->klass + v8), v7);
}


int64_t __fastcall EventEntity__GetRestTime_39121652(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v4; // x8

  if ( !this )
    sub_1B8880C(0LL, checkTime);
  v4 = 96LL;
  if ( isFinishedAt )
    v4 = 104LL;
  return EventEntity__GetRestTime_39121832(this, checkTime, *(int64_t *)((char *)&this->klass + v4), method);
}


int64_t __fastcall EventEntity__GetRestTime_39121832(
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
  v7 = 0LL;
  if ( v4 != v5 )
    return v7;
  startedAt = this->fields.startedAt;
  if ( startedAt > checkTime )
    return v7;
  if ( this->fields.openType == 1 )
    return v6;
  openHours = this->fields.openHours;
  if ( !openHours )
    return 0LL;
  intervalHours = this->fields.intervalHours;
  if ( !intervalHours )
    return 0LL;
  v11 = 3600 * openHours;
  v12 = (checkTime - startedAt) % (3600 * intervalHours + v11);
  v5 = __OFSUB__(v11, v12);
  v13 = v11 - v12;
  if ( v13 < 0 != v5 )
    return 0LL;
  else
    return v13;
}


EventEntity_ScriptData_array *__fastcall EventEntity__GetScriptData(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.script;
}


EventEntity_ScriptData_o *__fastcall EventEntity__GetScriptDataCondCheck(
        EventEntity_o *this,
        int64_t nowTime,
        const MethodInfo *method)
{
  struct EventEntity_ScriptData_array *script; // x8
  __int64 v4; // x9
  unsigned int v5; // w10
  unsigned int v6; // w11
  __int64 v7; // x12
  EventEntity_ScriptData_o *v8; // x13
  int64_t v9; // x13
  _BOOL4 v10; // w14
  _BOOL4 v11; // w15

  script = this->fields.script;
  if ( !script )
    return 0LL;
  v4 = *(_QWORD *)&script->max_length;
  if ( !v4 )
    return 0LL;
  if ( (int)v4 < 1 )
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
        sub_1B8880C(this, nowTime);
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v5 = v6;
      ++v6;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (_DWORD)v4 != v6 );
  }
  if ( v5 >= (unsigned int)v4 )
    sub_1B88814(this, nowTime);
  return script->m_Items[v5];
}


int64_t __fastcall EventEntity__GetShopEndTime(EventEntity_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x9
  int64_t v6; // x8
  int v7; // w10
  ShopEntity_o *v8; // x11
  int64_t closedAt; // x11

  if ( (byte_4A5B0D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0D2 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v5 = *(_QWORD *)&Instance->max_length;
  if ( v5 && (int)v5 >= 1 )
  {
    v6 = 0LL;
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
      if ( (_DWORD)v5 == v7 )
        return v6;
    }
LABEL_16:
    sub_1B8880C(Instance, v4);
  }
  return 0LL;
}


bool __fastcall EventEntity__IsClosePurchaseShop(EventEntity_o *this, const MethodInfo *method)
{
  ShopEntity_array *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x8
  ShopEntity_o *v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B0D5 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0D5 = 1;
  }
  entity = 0LL;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   this->fields.id,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      if ( (BYTE3(entity[1].monitor) & 1) == 0 )
        return 0;
      Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( Instance )
        {
          v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0LL);
          if ( !Instance || (v8 = *(_QWORD *)&Instance->max_length) == 0 )
            return 1;
          if ( !(_DWORD)v8 )
            sub_1B88814(Instance, v4);
          v9 = Instance->m_Items[0];
          if ( v9 )
          {
            Instance = (ShopEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                             v7,
                                             v9->fields.baseShopId,
                                             (const MethodInfo_311D934 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
            if ( Instance )
              return ShopMaster__IsPurchaseCloseEventShopItem((ShopMaster_o *)v7, HIDWORD(Instance->bounds), 0LL);
          }
        }
      }
    }
LABEL_19:
    sub_1B8880C(Instance, v4);
  }
  return 0;
}


bool __fastcall EventEntity__IsEventPeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4A5B0D0 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B0D0 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= nowTime && nowTime < this->fields.endedAt;
}


bool __fastcall EventEntity__IsExchangePeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  if ( (byte_4A5B0D1 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B0D1 = 1;
  }
  if ( !nowTime )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    nowTime = NetworkManager__getTime(0LL);
  }
  return this->fields.endedAt <= nowTime && nowTime <= this->fields.finishedAt;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEntity__IsOpen(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)isFinishedAt)
      || EventEntity__GetRestTime(this, isFinishedAt, v5) > 0;
}


bool __fastcall EventEntity__IsOpen_39121580(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)checkTime)
      || EventEntity__GetRestTime_39121652(this, checkTime, isFinishedAt, v7) > 0;
}


bool __fastcall EventEntity__IsReward(int32_t event_id, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B0CE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0CE = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          event_id,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B8880C(Instance, v4);
  return EventDetailEntity__IsReward((EventDetailEntity_o *)entity, v4);
}


bool __fastcall EventEntity__IsReward_39122232(EventEntity_o *this, const MethodInfo *method)
{
  return EventEntity__IsReward(this->fields.id, method);
}


int64_t __fastcall EventEntity__cmpShopClosedAt(EventEntity_o *this, EventEntity_o *entity, const MethodInfo *method)
{
  int64_t finishedAt; // x10
  int64_t v4; // x8

  if ( !entity )
    sub_1B8880C(this, 0LL);
  finishedAt = this->fields.finishedAt;
  v4 = entity->fields.finishedAt;
  if ( finishedAt == v4 )
    return this->fields.id - entity->fields.id;
  if ( !finishedAt )
    return 1LL;
  if ( v4 )
    return finishedAt - v4;
  return -1LL;
}


int32_t __fastcall EventEntity__getBannerID_OfTime(EventEntity_o *this, const MethodInfo *method)
{
  int64_t Time; // x0

  if ( (byte_4A5B0CB & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5B0CB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( Time < this->fields.noticeAt )
    return 0;
  if ( Time < this->fields.startedAt )
    return this->fields.noticeBannerId;
  if ( Time >= this->fields.finishedAt )
    return 0;
  else
    return this->fields.bannerId;
}


int32_t __fastcall EventEntity__getEventBannerID(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.bannerId;
}


int32_t __fastcall EventEntity__getEventBannerPriority(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.bannerPriority;
}


System_String_o *__fastcall EventEntity__getEventDetail(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.detail;
}


int64_t __fastcall EventEntity__getEventEndedAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.endedAt;
}


int64_t __fastcall EventEntity__getEventFinishedAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.finishedAt;
}


int32_t __fastcall EventEntity__getEventIconID(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.iconId;
}


int32_t __fastcall EventEntity__getEventId(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall EventEntity__getEventIntervalHours(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.intervalHours;
}


System_String_o *__fastcall EventEntity__getEventLinkBody(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.linkBody;
}


System_String_o *__fastcall EventEntity__getEventName(EventEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4A5B0CA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventAddMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventAddMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Instance,
                              this->fields.id,
                              3,
                              0LL);
  p_name = &this->fields.name;
  if ( OverwriteEventAddEntity )
    p_name = &OverwriteEventAddEntity->fields.overwriteText;
  return *p_name;
}


int64_t __fastcall EventEntity__getEventNoticeAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.noticeAt;
}


int32_t __fastcall EventEntity__getEventOpenHours(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.openHours;
}


int64_t __fastcall EventEntity__getEventStartedAt(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.startedAt;
}


int32_t __fastcall EventEntity__getEventType(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall EventEntity__getPurchaseShopBannerName(
        EventEntity_o *this,
        System_String_o *bannerName,
        const MethodInfo *method)
{
  if ( (byte_4A5B0D4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22742/*"r"*/);
    byte_4A5B0D4 = 1;
  }
  if ( EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)bannerName) )
    return System_String__Concat_61707032(bannerName, (System_String_o *)StringLiteral_22742/*"r"*/, 0LL);
  else
    return bannerName;
}


bool __fastcall EventEntity__isCheckEventDetail(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 12;
}


bool __fastcall EventEntity__isPurchaseEventOpen(EventEntity_o *this, const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  _BOOL4 EventFlag; // w20
  _BOOL4 v7; // w8
  ShopMaster_o *v8; // x20
  int32_t EventShopBaseShopId; // w0
  Il2CppObject *v12; // [xsp+0h] [xbp-30h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B0D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ShopMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0D3 = 1;
  }
  v12 = 0LL;
  entity = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_21;
  if ( !UserEventMaster__TryGetEntity((UserEventMaster_o *)MasterData_object, &entity, Instance, this->fields.id, 0LL) )
    return 0;
  Instance = (int64_t)entity;
  if ( !entity
    || (EventFlag = UserEventEntity__getEventFlag(entity, 1, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_21:
    sub_1B8880C(Instance, v4);
  }
  Instance = DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               &v12,
               this->fields.id,
               (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_21;
    v7 = ((LODWORD(v12[1].monitor) >> 25) & 1) == 0;
  }
  else
  {
    v7 = 1;
  }
  if ( !EventFlag || !v7 )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_21;
  v8 = (ShopMaster_o *)Instance;
  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId((ShopMaster_o *)Instance, this->fields.id, 0LL);
  return !ShopMaster__IsPurchaseCloseEventShopItem(v8, EventShopBaseShopId, 0LL);
}


void __fastcall EventEntity_ScriptData___ctor(EventEntity_ScriptData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
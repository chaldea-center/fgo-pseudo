void __fastcall EventEntity___ctor(EventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC646 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FC646 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventEntity__CreatePrimaryKey(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventEntity__FinishTimeString(
        EventEntity_o *this,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x8
  int64_t v10; // x19
  System_String_o *v11; // x19
  __int64 v12; // x2
  System_Object_array *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x21
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x21
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x21
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x21
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x21
  int32_t Minute; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-38h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Month; // [xsp+10h] [xbp-30h] BYREF
  int32_t Year; // [xsp+14h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v54; // 0:x0.8
  System_DateTime_o v55; // 0:x0.8
  System_DateTime_o v56; // 0:x0.8
  System_DateTime_o v57; // 0:x0.8
  System_DateTime_o v58; // 0:x0.8

  if ( (byte_40FC645 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, isFinishedAt);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&object___TypeInfo, v7);
    sub_B16FFC(&StringLiteral_4587, v8);
    byte_40FC645 = 1;
  }
  dateData = 0LL;
  v9 = 96LL;
  if ( isFinishedAt )
    v9 = 104LL;
  v10 = *(int64_t *)((char *)&this->klass + v9);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime_23685560(v10, 0LL).fields.dateData;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_4587, 0LL);
  v13 = (System_Object_array *)sub_B17014(object___TypeInfo, 5LL, v12);
  v54.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v54, 0LL);
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v13 )
    sub_B170D4();
  v22 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B170BC(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_29;
  }
  if ( !v13->max_length )
    goto LABEL_28;
  v13->m_Items[0] = (Il2CppObject *)v22;
  sub_B16F98((BattleServantConfConponent_o *)v13->m_Items, v22, v16, v17, v18, v19, v20, v21);
  v55.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v55, 0LL);
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v28 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B170BC(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_29;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_28;
  v13->m_Items[1] = (Il2CppObject *)v28;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[1], v28, v16, v23, v24, v25, v26, v27);
  v56.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v56, 0LL);
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v34 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B170BC(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_29;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_28;
  v13->m_Items[2] = (Il2CppObject *)v34;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[2], v34, v16, v29, v30, v31, v32, v33);
  v57.fields.dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v57, 0LL);
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v40 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B170BC(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_29;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_28;
  v13->m_Items[3] = (Il2CppObject *)v40;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[3], v40, v16, v35, v36, v37, v38, v39);
  v58.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v58, 0LL);
  v14 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v46 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B170BC(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_29:
      sub_B170F4(v14);
      sub_B170A0();
    }
  }
  if ( v13->max_length <= 4 )
  {
LABEL_28:
    sub_B17100(v14, v15, v16);
    sub_B170A0();
  }
  v13->m_Items[4] = (Il2CppObject *)v46;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[4], v46, v16, v41, v42, v43, v44, v45);
  return System_String__Format_43822456(v11, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventEntity__GetEndTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t RestTime; // x0
  int64_t v6; // x21

  if ( (byte_40FC63B & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, isFinishedAt);
    byte_40FC63B = 1;
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
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    return NetworkManager__getTime(0LL) + v6;
  }
}


int64_t __fastcall EventEntity__GetEndTime_ShopOrReward(EventEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t id; // w20
  ShopMaster_o *v7; // x21
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  ShopEntity_array *EventEntitiyList; // x0
  int64_t finishedAt; // x20
  int64_t result; // x0

  if ( (byte_40FC63E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FC63E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  id = this->fields.id;
  v7 = (ShopMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !EventEntity__IsOpen(this, 1, v8) )
    goto LABEL_10;
  if ( EventEntity__IsReward(this->fields.id, v9) )
  {
LABEL_9:
    finishedAt = this->fields.finishedAt;
    goto LABEL_11;
  }
  if ( !v7 || (EventEntitiyList = ShopMaster__GetEventEntitiyList(v7, id, 0LL)) == 0LL )
LABEL_14:
    sub_B170D4();
  if ( EventEntitiyList->max_length )
    goto LABEL_9;
LABEL_10:
  finishedAt = 0LL;
LABEL_11:
  result = EventEntity__GetShopEndTime(this, v9);
  if ( finishedAt > result )
    return finishedAt;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventEntity__GetRestTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t Time; // x0
  const MethodInfo *v6; // x3
  __int64 v7; // x8

  if ( (byte_40FC63C & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, isFinishedAt);
    byte_40FC63C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this )
    sub_B170D4();
  v7 = 96LL;
  if ( isFinishedAt )
    v7 = 104LL;
  return EventEntity__GetRestTime_29427440(this, Time, *(int64_t *)((char *)&this->klass + v7), v6);
}


int64_t __fastcall EventEntity__GetRestTime_29427240(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v4; // x8

  if ( !this )
    sub_B170D4();
  v4 = 96LL;
  if ( isFinishedAt )
    v4 = 104LL;
  return EventEntity__GetRestTime_29427440(this, checkTime, *(int64_t *)((char *)&this->klass + v4), method);
}


int64_t __fastcall EventEntity__GetRestTime_29427440(
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
  int v11; // w9
  int64_t v12; // x8

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
  v12 = (checkTime - startedAt) % (3600 * intervalHours + (__int64)v11);
  if ( v12 <= v11 )
    return v11 - v12;
  else
    return 0LL;
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
  __int64 v5; // x11
  unsigned int v6; // w10
  __int64 v7; // x13
  EventEntity_ScriptData_o *v8; // x14
  int64_t v9; // x14
  _BOOL4 v10; // w15
  _BOOL4 v11; // w16

  script = this->fields.script;
  if ( !script )
    return 0LL;
  v4 = *(_QWORD *)&script->max_length;
  if ( !v4 )
    return 0LL;
  if ( (int)v4 < 1 )
  {
    v6 = 0;
  }
  else
  {
    v5 = 0LL;
    v6 = 0;
    v7 = 0x7FFFFFFFFFFFFFFFLL;
    do
    {
      v8 = script->m_Items[v5];
      if ( !v8 )
        sub_B170D4();
      v9 = nowTime - v8->fields.startTime;
      v10 = v9 >= 0;
      v11 = v9 < v7;
      if ( v10 && v11 )
        v6 = v5;
      ++v5;
      if ( v10 && v11 )
        v7 = v9;
    }
    while ( (int)v5 < (int)v4 );
  }
  if ( v6 >= (unsigned int)v4 )
  {
    sub_B17100(this, nowTime, method);
    sub_B170A0();
  }
  return script->m_Items[v6];
}


int64_t __fastcall EventEntity__GetShopEndTime(EventEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  ShopMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ShopEntity_array *EnableEventEntitiyList; // x0
  __int64 v7; // x9
  ShopEntity_array *v8; // x8
  __int64 v9; // x10
  int64_t result; // x0
  ShopEntity_o **m_Items; // x8
  ShopEntity_o *v12; // x11
  int64_t closedAt; // x11

  if ( (byte_40FC641 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FC641 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_WarQuestSelectionMaster = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_15;
  EnableEventEntitiyList = ShopMaster__GetEnableEventEntitiyList(
                             MasterData_WarQuestSelectionMaster,
                             this->fields.id,
                             0LL);
  if ( !EnableEventEntitiyList )
    goto LABEL_15;
  v7 = *(_QWORD *)&EnableEventEntitiyList->max_length;
  v8 = EnableEventEntitiyList;
  if ( v7 && (int)v7 >= 1 )
  {
    v9 = 0LL;
    result = 0LL;
    m_Items = v8->m_Items;
    while ( 1 )
    {
      v12 = m_Items[v9];
      if ( !v12 )
        break;
      closedAt = v12->fields.closedAt;
      ++v9;
      if ( result < closedAt )
        result = closedAt;
      if ( (int)v9 >= (int)v7 )
        return result;
    }
LABEL_15:
    sub_B170D4();
  }
  return 0LL;
}


bool __fastcall EventEntity__IsClosePurchaseShop(EventEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v11; // x0
  ShopMaster_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  ShopEntity_array *EnableEventEntitiyList; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  ShopEntity_o *v18; // x8
  WarEntity_o *v19; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC644 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FC644 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         this->fields.id,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( entity )
    {
      if ( (BYTE3(entity->fields.age) & 1) == 0 )
        return 0;
      v11 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( v11 )
      {
        v12 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)v11,
                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( v12 )
        {
          v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)v12;
          EnableEventEntitiyList = ShopMaster__GetEnableEventEntitiyList(v12, this->fields.id, 0LL);
          if ( !EnableEventEntitiyList || (v17 = *(_QWORD *)&EnableEventEntitiyList->max_length) == 0 )
            return 1;
          if ( !(_DWORD)v17 )
          {
            sub_B17100(EnableEventEntitiyList, v15, v16);
            sub_B170A0();
          }
          v18 = EnableEventEntitiyList->m_Items[0];
          if ( v18 )
          {
            v19 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    v13,
                    v18->fields.baseShopId,
                    (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
            if ( v19 )
              return ShopMaster__IsPurchaseCloseEventShopItem((ShopMaster_o *)v13, *(&v19->fields.id + 1), 0LL);
          }
        }
      }
    }
LABEL_19:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall EventEntity__IsEventPeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_40FC63F & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, nowTime);
    byte_40FC63F = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= Time && Time < this->fields.endedAt;
}


bool __fastcall EventEntity__IsExchangePeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_40FC640 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, nowTime);
    byte_40FC640 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  return this->fields.endedAt <= Time && Time <= this->fields.finishedAt;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEntity__IsOpen(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)isFinishedAt)
      || EventEntity__GetRestTime(this, isFinishedAt, v5) > 0;
}


bool __fastcall EventEntity__IsOpen_29427156(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)checkTime)
      || EventEntity__GetRestTime_29427240(this, checkTime, isFinishedAt, v7) > 0;
}


bool __fastcall EventEntity__IsReward(int32_t event_id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC63D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FC63D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          event_id,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_10:
    sub_B170D4();
  return EventDetailEntity__IsReward((EventDetailEntity_o *)entity, v7);
}


bool __fastcall EventEntity__IsReward_29427848(EventEntity_o *this, const MethodInfo *method)
{
  return EventEntity__IsReward(this->fields.id, method);
}


int64_t __fastcall EventEntity__cmpShopClosedAt(EventEntity_o *this, EventEntity_o *entity, const MethodInfo *method)
{
  int64_t finishedAt; // x10
  int64_t v4; // x8

  if ( !entity )
    sub_B170D4();
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

  if ( (byte_40FC63A & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    byte_40FC63A = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
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
  __int64 v3; // x1
  WebViewManager_o *Instance; // x0
  EventAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_40FC639 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventAddMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FC639 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              MasterData_WarQuestSelectionMaster,
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
  if ( (byte_40FC643 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21570, bannerName);
    byte_40FC643 = 1;
  }
  if ( EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)bannerName) )
    return System_String__Concat_43743732(bannerName, (System_String_o *)StringLiteral_21570, 0LL);
  else
    return bannerName;
}


bool __fastcall EventEntity__isCheckEventDetail(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 12;
}


bool __fastcall EventEntity__isPurchaseEventOpen(EventEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  _BOOL4 EventFlag; // w20
  WebViewManager_o *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x0
  _BOOL4 v14; // w8
  WebViewManager_o *v15; // x0
  ShopMaster_o *v16; // x0
  ShopMaster_o *v17; // x20
  int32_t EventShopBaseShopId; // w0
  WarEntity_o *v21; // [xsp+8h] [xbp-28h] BYREF
  UserEventEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40FC642 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FC642 = 1;
  }
  entity = 0LL;
  v21 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, UserId, this->fields.id, 0LL) )
    return 0;
  if ( !entity
    || (EventFlag = UserEventEntity__getEventFlag(entity, 1, 0LL),
        (v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                               (DataManager_o *)v12,
                                                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v13,
         &v21,
         this->fields.id,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !v21 )
      goto LABEL_22;
    v14 = ((LODWORD(v21->fields.age) >> 25) & 1) == 0;
  }
  else
  {
    v14 = 1;
  }
  if ( !v14 || !EventFlag )
    return 0;
  v15 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v15 )
    goto LABEL_22;
  v16 = (ShopMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v15,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !v16 )
    goto LABEL_22;
  v17 = v16;
  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId(v16, this->fields.id, 0LL);
  return !ShopMaster__IsPurchaseCloseEventShopItem(v17, EventShopBaseShopId, 0LL);
}


void __fastcall EventEntity_ScriptData___ctor(EventEntity_ScriptData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
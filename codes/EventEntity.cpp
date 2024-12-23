void __fastcall EventEntity___ctor(EventEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66B2F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_int___ctor__, method);
    byte_4B66B2F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31FD5C4 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v9; // x1
  __int64 v10; // x8
  int64_t v11; // x19
  System_String_o *v12; // x19
  System_Object_array *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x21
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x21
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x21
  __int64 v67; // x0
  int32_t Minute; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-48h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-44h] BYREF
  int32_t Month; // [xsp+10h] [xbp-40h] BYREF
  int32_t Year; // [xsp+14h] [xbp-3Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-38h] BYREF
  System_DateTime_o v74; // 0:x0.8
  System_DateTime_o v75; // 0:x0.8
  System_DateTime_o v76; // 0:x0.8
  System_DateTime_o v77; // 0:x0.8
  System_DateTime_o v78; // 0:x0.8

  if ( (byte_4B66B2B & 1) == 0 )
  {
    sub_1BE4ACC(&System_DateTime_TypeInfo, isFinishedAt);
    sub_1BE4ACC(&int_TypeInfo, v5);
    sub_1BE4ACC(&LocalizationManager_TypeInfo, v6);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v7);
    sub_1BE4ACC(&object___TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_5136/*"DISP_TIMESTR_FORMAT"*/, v9);
    byte_4B66B2B = 1;
  }
  v10 = 96LL;
  if ( isFinishedAt )
    v10 = 104LL;
  v11 = *(int64_t *)((char *)&this->klass + v10);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime_39466056(v11, 0LL).fields._dateData;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5136/*"DISP_TIMESTR_FORMAT"*/, 0LL);
  v13 = (System_Object_array *)sub_1BE4B74(object___TypeInfo, 5LL);
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v74.fields._dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v74, 0LL);
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &Year, v14, v15, v16);
  if ( !v13 )
    sub_1BE4D28(v17, v18);
  v25 = v17;
  if ( v17 )
  {
    v17 = sub_1BE4C08(v17, v13->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_29;
  }
  if ( !v13->max_length )
    goto LABEL_28;
  v13->m_Items[0] = (Il2CppObject *)v25;
  sub_1BE4A70((PartyOrganizationUtility_o *)v13->m_Items, v25, v19, v20, v21, v22, v23, v24);
  v75.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v75, 0LL);
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &Month, v26, v27, v28);
  v35 = v17;
  if ( v17 )
  {
    v17 = sub_1BE4C08(v17, v13->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_29;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_28;
  v13->m_Items[1] = (Il2CppObject *)v35;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v13->m_Items[1], v35, v29, v30, v31, v32, v33, v34);
  v76.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v76, 0LL);
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &Day, v36, v37, v38);
  v45 = v17;
  if ( v17 )
  {
    v17 = sub_1BE4C08(v17, v13->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_29;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_28;
  v13->m_Items[2] = (Il2CppObject *)v45;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v13->m_Items[2], v45, v39, v40, v41, v42, v43, v44);
  v77.fields._dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v77, 0LL);
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v46, v47, v48);
  v55 = v17;
  if ( v17 )
  {
    v17 = sub_1BE4C08(v17, v13->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_29;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_28;
  v13->m_Items[3] = (Il2CppObject *)v55;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v13->m_Items[3], v55, v49, v50, v51, v52, v53, v54);
  v78.fields._dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v78, 0LL);
  v17 = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v56, v57, v58);
  v65 = v17;
  if ( v17 )
  {
    v17 = sub_1BE4C08(v17, v13->obj.klass->_1.element_class);
    if ( !v17 )
    {
LABEL_29:
      v67 = sub_1BE4D4C(v17);
      sub_1BE4BF4(v67, 0LL);
    }
  }
  if ( v13->max_length <= 4 )
LABEL_28:
    sub_1BE4D30(v17, v18);
  v13->m_Items[4] = (Il2CppObject *)v65;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v13->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
  return System_String__Format_62713316(v12, v13, 0LL);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventEntity__GetEndTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t RestTime; // x0
  int64_t v6; // x21

  if ( (byte_4B66B21 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, isFinishedAt);
    byte_4B66B21 = 1;
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
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  const MethodInfo *v5; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t id; // w20
  ShopMaster_o *v8; // x21
  const MethodInfo *v9; // x2
  int64_t finishedAt; // x20
  int64_t result; // x0

  if ( (byte_4B66B24 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B66B24 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  id = this->fields.id;
  v8 = (ShopMaster_o *)MasterData_object;
  if ( !EventEntity__IsOpen(this, 1, v9) )
    goto LABEL_10;
  Instance = (ShopEntity_array *)EventEntity__IsReward(this->fields.id, v5);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    finishedAt = this->fields.finishedAt;
    goto LABEL_11;
  }
  if ( !v8 || (Instance = ShopMaster__GetEventEntitiyList(v8, id, 0LL)) == 0LL )
LABEL_14:
    sub_1BE4D28(Instance, v5);
  if ( Instance->max_length )
    goto LABEL_9;
LABEL_10:
  finishedAt = 0LL;
LABEL_11:
  result = EventEntity__GetShopEndTime(this, v5);
  if ( finishedAt > result )
    return finishedAt;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall EventEntity__GetRestTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  __int64 v8; // x8

  if ( (byte_4B66B22 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, isFinishedAt);
    byte_4B66B22 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !this )
    sub_1BE4D28(Time, v6);
  v8 = 96LL;
  if ( isFinishedAt )
    v8 = 104LL;
  return EventEntity__GetRestTime_40045516(this, Time, *(int64_t *)((char *)&this->klass + v8), v7);
}


int64_t __fastcall EventEntity__GetRestTime_40045336(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v4; // x8

  if ( !this )
    sub_1BE4D28(0LL, checkTime);
  v4 = 96LL;
  if ( isFinishedAt )
    v4 = 104LL;
  return EventEntity__GetRestTime_40045516(this, checkTime, *(int64_t *)((char *)&this->klass + v4), method);
}


int64_t __fastcall EventEntity__GetRestTime_40045516(
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
        sub_1BE4D28(this, nowTime);
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
    sub_1BE4D30(this, nowTime);
  return script->m_Items[v5];
}


int64_t __fastcall EventEntity__GetShopEndTime(EventEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ShopEntity_array *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x9
  int64_t v7; // x8
  int v8; // w10
  ShopEntity_o *v9; // x11
  int64_t closedAt; // x11

  if ( (byte_4B66B27 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B66B27 = 1;
  }
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0LL);
  if ( !Instance )
    goto LABEL_16;
  v6 = *(_QWORD *)&Instance->max_length;
  if ( v6 && (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = 0;
    while ( 1 )
    {
      v9 = Instance->m_Items[v8];
      if ( !v9 )
        break;
      closedAt = v9->fields.closedAt;
      ++v8;
      if ( v7 < closedAt )
        v7 = closedAt;
      if ( (_DWORD)v6 == v8 )
        return v7;
    }
LABEL_16:
    sub_1BE4D28(Instance, v5);
  }
  return 0LL;
}


bool __fastcall EventEntity__IsClosePurchaseShop(EventEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ShopEntity_array *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  __int64 v12; // x8
  ShopEntity_o *v13; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B66B2A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4B66B2A = 1;
  }
  entity = 0LL;
  Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (ShopEntity_array *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   this->fields.id,
                                   (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      if ( (BYTE3(entity[1].monitor) & 1) == 0 )
        return 0;
      Instance = (ShopEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = (ShopEntity_array *)DataManager__GetMasterData_object_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( Instance )
        {
          v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
          Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0LL);
          if ( !Instance || (v12 = *(_QWORD *)&Instance->max_length) == 0 )
            return 1;
          if ( !(_DWORD)v12 )
            sub_1BE4D30(Instance, v8);
          v13 = Instance->m_Items[0];
          if ( v13 )
          {
            Instance = (ShopEntity_array *)DataMasterBase_object__object__int___GetEntity(
                                             v11,
                                             v13->fields.baseShopId,
                                             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
            if ( Instance )
              return ShopMaster__IsPurchaseCloseEventShopItem((ShopMaster_o *)v11, HIDWORD(Instance->bounds), 0LL);
          }
        }
      }
    }
LABEL_19:
    sub_1BE4D28(Instance, v8);
  }
  return 0;
}


bool __fastcall EventEntity__IsEventPeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_4B66B25 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, nowTime);
    byte_4B66B25 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0LL);
  }
  return this->fields.startedAt <= Time && Time < this->fields.endedAt;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEntity__IsEventReleaseByWarId(EventEntity_o *this, int32_t releaseWarId, const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  WarReleaseEntity_o *OpenEntity; // x0

  if ( (byte_4B66B2E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_WarReleaseMaster___, *(_QWORD *)&releaseWarId);
    sub_1BE4ACC(&DataManager_TypeInfo, v4);
    byte_4B66B2E = 1;
  }
  if ( releaseWarId < 1 )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !Master_object )
    sub_1BE4D28(0LL, v6);
  OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, releaseWarId, 0LL);
  return OpenEntity && WarReleaseEntity__IsOpen(OpenEntity, 0LL);
}


bool __fastcall EventEntity__IsExchangePeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_4B66B26 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, nowTime);
    byte_4B66B26 = 1;
  }
  if ( !Time )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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


bool __fastcall EventEntity__IsOpen_40045264(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)checkTime)
      || EventEntity__GetRestTime_40045336(this, checkTime, isFinishedAt, v7) > 0;
}


bool __fastcall EventEntity__IsReward(int32_t event_id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B66B23 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B66B23 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          event_id,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BE4D28(Instance, v6);
  return EventDetailEntity__IsReward((EventDetailEntity_o *)entity, v6);
}


bool __fastcall EventEntity__IsReward_40045916(EventEntity_o *this, const MethodInfo *method)
{
  return EventEntity__IsReward(this->fields.id, method);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEntity__IsSkillRelease(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Object_array *script; // x21
  System_Func_object__bool__o *v9; // x22
  bool result; // w0

  if ( (byte_4B66B2C & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventEntity_ScriptData___, isFinishedAt);
    sub_1BE4ACC(&Method_EventEntity__IsSkillRelease_b__60_0__, v5);
    sub_1BE4ACC(&System_Func_EventEntity_ScriptData__bool__TypeInfo, v6);
    byte_4B66B2C = 1;
  }
  result = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0LL)
        && (script = (System_Object_array *)this->fields.script,
            v9 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventEntity_ScriptData__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v9,
              (Il2CppObject *)this,
              Method_EventEntity__IsSkillRelease_b__60_0__,
              0LL),
            BasicHelper__Any_object__49561896(
              script,
              (System_Func_T__bool__o *)v9,
              (const MethodInfo_2F44128 *)Method_BasicHelper_Any_EventEntity_ScriptData___))
        || EventEntity__IsOpen(this, isFinishedAt, v7);
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventEntity__IsTutorialRelease(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Object_array *script; // x21
  System_Func_object__bool__o *v9; // x22
  bool result; // w0

  if ( (byte_4B66B2D & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_EventEntity_ScriptData___, isFinishedAt);
    sub_1BE4ACC(&Method_EventEntity__IsTutorialRelease_b__61_0__, v5);
    sub_1BE4ACC(&System_Func_EventEntity_ScriptData__bool__TypeInfo, v6);
    byte_4B66B2D = 1;
  }
  result = !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.script, 0LL)
        && (script = (System_Object_array *)this->fields.script,
            v9 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_EventEntity_ScriptData__bool__TypeInfo),
            System_Func_object__bool____ctor(
              v9,
              (Il2CppObject *)this,
              Method_EventEntity__IsTutorialRelease_b__61_0__,
              0LL),
            BasicHelper__Any_object__49561896(
              script,
              (System_Func_T__bool__o *)v9,
              (const MethodInfo_2F44128 *)Method_BasicHelper_Any_EventEntity_ScriptData___))
        || EventEntity__IsOpen(this, isFinishedAt, v7);
  return result;
}


bool __fastcall EventEntity___IsSkillRelease_b__60_0(
        EventEntity_o *this,
        EventEntity_ScriptData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BE4D28(this, 0LL);
  return EventEntity__IsEventReleaseByWarId(this, data->fields.skillReleaseByWarId, method);
}


bool __fastcall EventEntity___IsTutorialRelease_b__61_0(
        EventEntity_o *this,
        EventEntity_ScriptData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BE4D28(this, 0LL);
  return EventEntity__IsEventReleaseByWarId(this, data->fields.tutorialReleaseByWarId, method);
}


int64_t __fastcall EventEntity__cmpShopClosedAt(EventEntity_o *this, EventEntity_o *entity, const MethodInfo *method)
{
  int64_t finishedAt; // x10
  int64_t v4; // x8

  if ( !entity )
    sub_1BE4D28(this, 0LL);
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

  if ( (byte_4B66B20 & 1) == 0 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, method);
    byte_4B66B20 = 1;
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
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_4B66B1F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventAddMaster___, method);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B66B1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventAddMaster___)) == 0LL )
  {
    sub_1BE4D28(Instance, v5);
  }
  OverwriteEventAddEntity = EventAddMaster__getOverwriteEventAddEntity(
                              (EventAddMaster_o *)Instance,
                              this->fields.id,
                              3,
                              v6);
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
  if ( (byte_4B66B29 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_23064/*"r"*/, bannerName);
    byte_4B66B29 = 1;
  }
  if ( EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)bannerName) )
    return System_String__Concat_62698808(bannerName, (System_String_o *)StringLiteral_23064/*"r"*/, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20
  _BOOL4 EventFlag; // w20
  _BOOL4 v12; // w8
  ShopMaster_o *v13; // x20
  int32_t EventShopBaseShopId; // w0
  Il2CppObject *v17; // [xsp+0h] [xbp-40h] BYREF
  UserEventEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B66B28 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ShopMaster___, v3);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserEventMaster___, v4);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4B66B28 = 1;
  }
  v17 = 0LL;
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v9);
    byte_4B61717 = 1;
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
          0LL) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity
    || (EventFlag = UserEventEntity__getEventFlag(entity, 1, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
LABEL_25:
    sub_1BE4D28(Instance, v9);
  }
  Instance = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                &v17,
                                this->fields.id,
                                (const MethodInfo_31FD818 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_25;
    v12 = ((LODWORD(v17[1].monitor) >> 25) & 1) == 0;
  }
  else
  {
    v12 = 1;
  }
  if ( !EventFlag || !v12 )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_25;
  v13 = (ShopMaster_o *)Instance;
  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId((ShopMaster_o *)Instance, this->fields.id, 0LL);
  return !ShopMaster__IsPurchaseCloseEventShopItem(v13, EventShopBaseShopId, 0LL);
}


void __fastcall EventEntity_ScriptData___ctor(EventEntity_ScriptData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
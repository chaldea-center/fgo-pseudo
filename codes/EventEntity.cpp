void __fastcall EventEntity___ctor(EventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB1BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB1BF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x8
  int64_t v19; // x19
  System_String_o *v20; // x19
  System_Object_array *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x21
  __int64 v60; // x0
  __int64 v61; // x0
  int32_t Minute; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t Hour; // [xsp+8h] [xbp-38h] BYREF
  int32_t Day; // [xsp+Ch] [xbp-34h] BYREF
  int32_t Month; // [xsp+10h] [xbp-30h] BYREF
  int32_t Year; // [xsp+14h] [xbp-2Ch] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-28h] BYREF
  System_DateTime_o v68; // 0:x0.8
  System_DateTime_o v69; // 0:x0.8
  System_DateTime_o v70; // 0:x0.8
  System_DateTime_o v71; // 0:x0.8
  System_DateTime_o v72; // 0:x0.8

  if ( (byte_42EB1BE & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, isFinishedAt, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&object___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_4676/*"DISP_TIMESTR_FORMAT"*/, v15, v16, v17);
    byte_42EB1BE = 1;
  }
  dateData = 0LL;
  v18 = 96LL;
  if ( isFinishedAt )
    v18 = 104LL;
  v19 = *(int64_t *)((char *)&this->klass + v18);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime_26077756(v19, 0LL).fields.dateData;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_4676/*"DISP_TIMESTR_FORMAT"*/, 0LL);
  v21 = (System_Object_array *)sub_B5D5DC(object___TypeInfo, 5LL);
  v68.fields.dateData = (uint64_t)&dateData;
  Year = System_DateTime__get_Year(v68, 0LL);
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &Year);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v30 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = sub_B5D684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_29;
  }
  if ( !v21->max_length )
    goto LABEL_28;
  v21->m_Items[0] = (Il2CppObject *)v30;
  sub_B5D560((BattleServantConfConponent_o *)v21->m_Items, v30, v24, v25, v26, v27, v28, v29);
  v69.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v69, 0LL);
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &Month);
  v37 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = sub_B5D684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_29;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_28;
  v21->m_Items[1] = (Il2CppObject *)v37;
  sub_B5D560((BattleServantConfConponent_o *)&v21->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v70.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v70, 0LL);
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &Day);
  v44 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = sub_B5D684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_29;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_28;
  v21->m_Items[2] = (Il2CppObject *)v44;
  sub_B5D560((BattleServantConfConponent_o *)&v21->m_Items[2], v44, v38, v39, v40, v41, v42, v43);
  v71.fields.dateData = (uint64_t)&dateData;
  Hour = System_DateTime__get_Hour(v71, 0LL);
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
  v51 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = sub_B5D684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_29;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_28;
  v21->m_Items[3] = (Il2CppObject *)v51;
  sub_B5D560((BattleServantConfConponent_o *)&v21->m_Items[3], v51, v45, v46, v47, v48, v49, v50);
  v72.fields.dateData = (uint64_t)&dateData;
  Minute = System_DateTime__get_Minute(v72, 0LL);
  v22 = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
  v58 = (System_Int32_array **)v22;
  if ( v22 )
  {
    v22 = sub_B5D684(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_29:
      v61 = sub_B5D6BC(v22);
      sub_B5D668(v61, 0LL);
    }
  }
  if ( v21->max_length <= 4 )
  {
LABEL_28:
    v60 = sub_B5D6C8(v22);
    sub_B5D668(v60, 0LL);
  }
  v21->m_Items[4] = (Il2CppObject *)v58;
  sub_B5D560((BattleServantConfConponent_o *)&v21->m_Items[4], v58, v52, v53, v54, v55, v56, v57);
  return System_String__Format_44656512(v20, v21, 0LL);
}


int64_t __fastcall EventEntity__GetEndTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t RestTime; // x0
  int64_t v7; // x21

  if ( (byte_42EB1B4 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, isFinishedAt, (_DWORD)method, v3);
    byte_42EB1B4 = 1;
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
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    return NetworkManager__getTime(0LL) + v7;
  }
}


int64_t __fastcall EventEntity__GetEndTime_ShopOrReward(EventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  int32_t id; // w20
  ShopMaster_o *v12; // x21
  const MethodInfo *v13; // x2
  int64_t finishedAt; // x20
  int64_t result; // x0

  if ( (byte_42EB1B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB1B7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  id = this->fields.id;
  v12 = (ShopMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( !EventEntity__IsOpen(this, 1, v13) )
    goto LABEL_10;
  Instance = (DataManager_o *)EventEntity__IsReward(this->fields.id, v9);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
LABEL_9:
    finishedAt = this->fields.finishedAt;
    goto LABEL_11;
  }
  if ( !v12 || (Instance = (DataManager_o *)ShopMaster__GetEventEntitiyList(v12, id, 0LL)) == 0LL )
LABEL_14:
    sub_B5D69C(Instance, v9);
  if ( LODWORD(Instance->fields.datalist) )
    goto LABEL_9;
LABEL_10:
  finishedAt = 0LL;
LABEL_11:
  result = EventEntity__GetShopEndTime(this, v9);
  if ( finishedAt > result )
    return finishedAt;
  return result;
}


int64_t __fastcall EventEntity__GetRestTime(EventEntity_o *this, bool isFinishedAt, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3
  __int64 v9; // x8

  if ( (byte_42EB1B5 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, isFinishedAt, (_DWORD)method, v3);
    byte_42EB1B5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  if ( !this )
    sub_B5D69C(Time, v7);
  v9 = 96LL;
  if ( isFinishedAt )
    v9 = 104LL;
  return EventEntity__GetRestTime_29837352(this, Time, *(int64_t *)((char *)&this->klass + v9), v8);
}


int64_t __fastcall EventEntity__GetRestTime_29837152(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  __int64 v4; // x8

  if ( !this )
    sub_B5D69C(0LL, checkTime);
  v4 = 96LL;
  if ( isFinishedAt )
    v4 = 104LL;
  return EventEntity__GetRestTime_29837352(this, checkTime, *(int64_t *)((char *)&this->klass + v4), method);
}


int64_t __fastcall EventEntity__GetRestTime_29837352(
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
  __int64 v13; // x0

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
        sub_B5D69C(this, nowTime);
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
    v13 = sub_B5D6C8(this);
    sub_B5D668(v13, 0LL);
  }
  return script->m_Items[v6];
}


int64_t __fastcall EventEntity__GetShopEndTime(EventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int64_t result; // x0
  __int64 v9; // x1
  __int64 v10; // x9
  int64_t v11; // x8
  __int64 v12; // x10
  int64_t v13; // x8
  __int64 v14; // x11
  int64_t v15; // x11

  if ( (byte_42EB1BA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB1BA = 1;
  }
  result = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !result )
    goto LABEL_15;
  result = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)result,
                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !result )
    goto LABEL_15;
  result = (int64_t)ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)result, this->fields.id, 0LL);
  if ( !result )
    goto LABEL_15;
  v10 = *(_QWORD *)(result + 24);
  v11 = result;
  if ( v10 && (int)v10 >= 1 )
  {
    v12 = 0LL;
    result = 0LL;
    v13 = v11 + 32;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 8 * v12);
      if ( !v14 )
        break;
      v15 = *(_QWORD *)(v14 + 136);
      ++v12;
      if ( result < v15 )
        result = v15;
      if ( (int)v12 >= (int)v10 )
        return result;
    }
LABEL_15:
    sub_B5D69C(result, v9);
  }
  return 0LL;
}


bool __fastcall EventEntity__IsClosePurchaseShop(EventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  void *Instance; // x0
  __int64 v18; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB1BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15, v16);
    byte_42EB1BD = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = (void *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                       (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                       &entity,
                       this->fields.id,
                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
    {
      if ( (BYTE3(entity->fields.age) & 1) == 0 )
        return 0;
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
        if ( Instance )
        {
          v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
          Instance = ShopMaster__GetEnableEventEntitiyList((ShopMaster_o *)Instance, this->fields.id, 0LL);
          if ( !Instance || (v22 = *((_QWORD *)Instance + 3)) == 0 )
            return 1;
          if ( !(_DWORD)v22 )
          {
            v24 = sub_B5D6C8(Instance);
            sub_B5D668(v24, 0LL);
          }
          v23 = *((_QWORD *)Instance + 4);
          if ( v23 )
          {
            Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                         v21,
                         *(_DWORD *)(v23 + 20),
                         (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
            if ( Instance )
              return ShopMaster__IsPurchaseCloseEventShopItem((ShopMaster_o *)v21, *((_DWORD *)Instance + 5), 0LL);
          }
        }
      }
    }
LABEL_19:
    sub_B5D69C(Instance, v18);
  }
  return 0;
}


bool __fastcall EventEntity__IsEventPeriod(EventEntity_o *this, int64_t nowTime, const MethodInfo *method)
{
  __int64 v3; // x3
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_42EB1B8 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42EB1B8 = 1;
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
  __int64 v3; // x3
  int64_t Time; // x20

  Time = nowTime;
  if ( (byte_42EB1B9 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, nowTime, (_DWORD)method, v3);
    byte_42EB1B9 = 1;
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


bool __fastcall EventEntity__IsOpen_29837068(
        EventEntity_o *this,
        int64_t checkTime,
        bool isFinishedAt,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3

  return EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)checkTime)
      || EventEntity__GetRestTime_29837152(this, checkTime, isFinishedAt, v7) > 0;
}


bool __fastcall EventEntity__IsReward(int32_t event_id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB1B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EB1B6 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          event_id,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B5D69C(Instance, v12);
  return EventDetailEntity__IsReward((EventDetailEntity_o *)entity, v12);
}


bool __fastcall EventEntity__IsReward_29837760(EventEntity_o *this, const MethodInfo *method)
{
  return EventEntity__IsReward(this->fields.id, method);
}


int64_t __fastcall EventEntity__cmpShopClosedAt(EventEntity_o *this, EventEntity_o *entity, const MethodInfo *method)
{
  int64_t finishedAt; // x10
  int64_t v4; // x8

  if ( !entity )
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int64_t Time; // x0

  if ( (byte_42EB1B3 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB1B3 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  EventAddEntity_o *OverwriteEventAddEntity; // x0
  System_String_o **p_name; // x8

  if ( (byte_42EB1B2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42EB1B2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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
  __int64 v3; // x3

  if ( (byte_42EB1BC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21954/*"r"*/, (_DWORD)bannerName, (_DWORD)method, v3);
    byte_42EB1BC = 1;
  }
  if ( EventEntity__isPurchaseEventOpen(this, (const MethodInfo *)bannerName) )
    return System_String__Concat_44577788(bannerName, (System_String_o *)StringLiteral_21954/*"r"*/, 0LL);
  else
    return bannerName;
}


bool __fastcall EventEntity__isCheckEventDetail(EventEntity_o *this, const MethodInfo *method)
{
  return this->fields.type == 12;
}


bool __fastcall EventEntity__isPurchaseEventOpen(EventEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int64_t Instance; // x0
  __int64 v21; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  _BOOL4 EventFlag; // w20
  _BOOL4 v24; // w8
  ShopMaster_o *v25; // x20
  int32_t EventShopBaseShopId; // w0
  WarEntity_o *v29; // [xsp+8h] [xbp-28h] BYREF
  UserEventEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42EB1BB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ShopMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    byte_42EB1BB = 1;
  }
  entity = 0LL;
  v29 = 0LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( !UserEventMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, Instance, this->fields.id, 0LL) )
    return 0;
  Instance = (int64_t)entity;
  if ( !entity
    || (EventFlag = UserEventEntity__getEventFlag(entity, 1, 0LL),
        (Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
LABEL_22:
    sub_B5D69C(Instance, v21);
  }
  Instance = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               &v29,
               this->fields.id,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  if ( (Instance & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_22;
    v24 = ((LODWORD(v29->fields.age) >> 25) & 1) == 0;
  }
  else
  {
    v24 = 1;
  }
  if ( !v24 || !EventFlag )
    return 0;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ShopMaster___);
  if ( !Instance )
    goto LABEL_22;
  v25 = (ShopMaster_o *)Instance;
  EventShopBaseShopId = ShopMaster__GetEventShopBaseShopId((ShopMaster_o *)Instance, this->fields.id, 0LL);
  return !ShopMaster__IsPurchaseCloseEventShopItem(v25, EventShopBaseShopId, 0LL);
}


void __fastcall EventEntity_ScriptData___ctor(EventEntity_ScriptData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
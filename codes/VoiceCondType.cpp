void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  System_Int32_array **v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  int v10; // w8
  System_Int32_array **v11; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v13; // x0

  if ( (byte_421A2BF & 1) == 0 )
  {
    sub_B0D8A4(&GameEventType_TYPE___TypeInfo, v1);
    sub_B0D8A4(&VoiceCondType_TypeInfo, v2);
    byte_421A2BF = 1;
  }
  v3 = (System_Int32_array **)sub_B0D8BC(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v3 )
    sub_B0D97C(0LL);
  v10 = *((_DWORD *)v3 + 6);
  v11 = v3;
  if ( !v10 || (*((_DWORD *)v3 + 8) = 12, v10 == 1) )
  {
    v13 = sub_B0D9A8(v3);
    sub_B0D948(v13, 0LL);
  }
  *((_DWORD *)v3 + 9) = 22;
  static_fields = (BattleServantConfConponent_o *)VoiceCondType_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v11;
  sub_B0D840(static_fields, v11, v4, v5, v6, v7, v8, v9);
}


void __fastcall VoiceCondType___ctor(VoiceCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall VoiceCondType__IsSatisfyBirthdayCondition(const MethodInfo *method)
{
  __int64 v1; // x1
  UserGameEntity_o *SelfUserGame; // x0
  int64_t birthDay; // x19
  int32_t Year; // w1
  int32_t Month; // w19
  int32_t Day; // w19
  uint64_t v8; // [xsp+0h] [xbp-20h] BYREF
  uint64_t v9; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8

  if ( (byte_421A2B5 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, v1);
    byte_421A2B5 = 1;
  }
  dateData = 0LL;
  v9 = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B0D97C(0LL);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v9 = NetworkManager__getDateTime_25504560(birthDay, 0LL).fields.dateData;
  v11.fields.dateData = (uint64_t)&v9;
  if ( System_DateTime__get_Month(v11, 0LL) == 2 )
  {
    v12.fields.dateData = (uint64_t)&v9;
    if ( System_DateTime__get_Day(v12, 0LL) == 29 )
    {
      v13.fields.dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v13, 0LL);
      v8 = 0LL;
      v14.fields.dateData = (uint64_t)&v8;
      System_DateTime___ctor_15033292(v14, Year, 2, 29, 0LL);
      v9 = v8;
    }
  }
  v15.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v15, 0LL);
  v16.fields.dateData = (uint64_t)&v9;
  if ( Month != System_DateTime__get_Month(v16, 0LL) )
    return 0;
  v17.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v17, 0LL);
  v18.fields.dateData = (uint64_t)&v9;
  return Day == System_DateTime__get_Day(v18, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__IsSatisfyCondition(
        int32_t type,
        int32_t condValue,
        int32_t targetValue,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool result; // w0
  bool isPlayable[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421A2BE & 1) == 0 )
  {
    sub_B0D8A4(&VoiceCondType_TypeInfo, *(_QWORD *)&condValue);
    byte_421A2BE = 1;
  }
  result = 0;
  isPlayable[0] = 0;
  switch ( type )
  {
    case 1:
    case 2:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      VoiceCondType__TryIsSatisfyCondition(isPlayable, type, *(const MethodInfo **)&targetValue);
      goto LABEL_17;
    case 3:
    case 5:
    case 9:
    case 17:
    case 20:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      VoiceCondType__TryIsSatisfyCompCondition(isPlayable, type, condValue, targetValue, v4);
      goto LABEL_17;
    case 4:
    case 6:
    case 7:
    case 12:
    case 13:
    case 14:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      VoiceCondType__TryIsSatisfyValueCondition(isPlayable, type, condValue, method);
LABEL_17:
      result = isPlayable[0];
      break;
    case 8:
    case 11:
    case 15:
    case 16:
    case 18:
    case 19:
    case 21:
      result = 1;
      break;
    default:
      return result;
  }
  return result;
}


bool __fastcall VoiceCondType__IsSatisfyCostumeCondition(
        int32_t condValue,
        int32_t targetValue,
        const MethodInfo *method)
{
  if ( condValue <= 0 )
    targetValue = 0;
  return targetValue == condValue;
}


bool __fastcall VoiceCondType__IsSatisfyEventCondition(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  EventMaster_o *v11; // x19
  System_Collections_Generic_List_EventEntity____o *EnableEntityLists; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x19
  _BOOL8 isEventVoicePlay; // x0
  Il2CppObject *current; // x22
  void *monitor; // x23
  unsigned int v17; // w24
  __int64 v18; // x8
  EventDetailEntity_o *Entity; // x0
  __int64 v20; // x0
  char v21; // w19
  int v22; // w20
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421A2B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&VoiceCondType_TypeInfo, v9);
    byte_421A2B6 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  v11 = (EventMaster_o *)Instance;
  if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoiceCondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  }
  if ( !v11
    || (EnableEntityLists = EventMaster__GetEnableEntityLists(
                              v11,
                              VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                              0,
                              0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_30:
    sub_B0D97C(Instance);
  }
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EnableEntityLists,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
LABEL_11:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v25,
                         (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    if ( !isEventVoicePlay )
    {
      v21 = 0;
      v22 = 127;
      goto LABEL_26;
    }
    current = v25.fields.current;
    if ( v25.fields.current )
    {
      monitor = v25.fields.current[1].monitor;
      if ( monitor )
      {
        if ( (int)monitor >= 1 )
          break;
      }
    }
  }
  if ( !(_DWORD)monitor )
  {
LABEL_23:
    v20 = sub_B0D9A8(isEventVoicePlay);
    sub_B0D948(v20, 0LL);
  }
  v17 = 0;
  while ( 1 )
  {
    v18 = *((_QWORD *)&current[2].klass + (int)v17);
    if ( !v18 )
      sub_B0D97C(isEventVoicePlay);
    if ( !v13 )
      sub_B0D97C(isEventVoicePlay);
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v13,
                                      *(_DWORD *)(v18 + 16),
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_B0D97C(0LL);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay(Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( (int)++v17 >= (int)monitor )
      goto LABEL_11;
    if ( v17 >= LODWORD(current[1].monitor) )
      goto LABEL_23;
  }
  v21 = 1;
  v22 = 129;
LABEL_26:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return (v22 == 129) & v21;
}


bool __fastcall VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  int64_t v7; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A2B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&NetworkManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_421A2B8 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                condValue,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B0D97C(Instance);
  v7 = *(_QWORD *)&entity->fields.eventId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return v7 <= NetworkManager__getTime(0LL);
}


bool __fastcall VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421A2B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_421A2B7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_13;
  if ( UserQuestMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, (int64_t)Instance, condValue, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_13:
    sub_B0D97C(Instance);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__IsSatisfySvtGetCondition(
        int32_t condValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  signed int max_length; // w8
  il2cpp_array_size_t v5; // w22
  Il2CppClass **v6; // x24
  Il2CppClass *v7; // x8
  _QWORD *v8; // x24
  Il2CppClass *v9; // t1
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  int32_t v12; // w0
  __int64 v14; // x0
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v15 = condValue;
  if ( (byte_421A2B9 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtList);
    byte_421A2B9 = 1;
  }
  if ( !usrSvtList )
LABEL_20:
    sub_B0D97C(*(_QWORD *)&condValue);
  max_length = usrSvtList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
LABEL_19:
      v14 = sub_B0D9A8(*(_QWORD *)&condValue);
      sub_B0D948(v14, 0LL);
    }
    v6 = &usrSvtList->obj.klass + (int)v5;
    v9 = v6[4];
    v8 = v6 + 4;
    v7 = v9;
    if ( !v9 )
      goto LABEL_20;
    declaringType = v7->_1.declaringType;
    parent = v7->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v16.fields.fakeValue = parent;
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v16, 0LL);
    *(_QWORD *)&condValue = System_Int32__Equals_38472956((int32_t)&v15, v12, 0LL);
    if ( (condValue & 1) != 0 )
    {
      if ( v5 >= usrSvtList->max_length )
        goto LABEL_19;
      *(_QWORD *)&condValue = *v8;
      if ( !*v8 )
        goto LABEL_20;
      *(_QWORD *)&condValue = UserServantEntity__IsEventJoin(*(UserServantEntity_o **)&condValue, 0LL);
      if ( (condValue & 1) == 0 )
        return 1;
    }
    max_length = usrSvtList->max_length;
    if ( (int)++v5 >= max_length )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__IsSatisfySvtGroupCondition(
        int32_t condValue,
        int32_t targetValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  signed int max_length; // w8
  DataManager_o *v11; // x21
  il2cpp_array_size_t v12; // w24
  Il2CppClass **v13; // x26
  Il2CppClass *v14; // x8
  DataManager_o **v15; // x26
  Il2CppClass *v16; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v19; // w22
  int datalist; // w8
  unsigned int v21; // w9
  __int64 v22; // x10
  __int64 v24; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_421A2BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&targetValue);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_421A2BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)ServantGroupMaster__getEntityListById(
                                      (ServantGroupMaster_o *)Instance,
                                      condValue,
                                      0LL),
        !usrSvtList) )
  {
LABEL_27:
    sub_B0D97C(Instance);
  }
  max_length = usrSvtList->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = Instance;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= max_length )
      goto LABEL_28;
    v13 = &usrSvtList->obj.klass + (int)v12;
    v16 = v13[4];
    v15 = (DataManager_o **)(v13 + 4);
    v14 = v16;
    if ( !v16 )
      goto LABEL_27;
    declaringType = v14->_1.declaringType;
    parent = v14->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v25.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v25.fields.fakeValue = parent;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v25, 0LL);
    if ( v12 >= usrSvtList->max_length )
    {
LABEL_28:
      v24 = sub_B0D9A8(Instance);
      sub_B0D948(v24, 0LL);
    }
    v19 = (int)Instance;
    Instance = *v15;
    if ( !*v15 )
      goto LABEL_27;
    Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    if ( v19 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v11 )
        goto LABEL_27;
      datalist = (int)v11->fields.datalist;
      if ( datalist >= 1 )
        break;
    }
LABEL_24:
    max_length = usrSvtList->max_length;
    if ( (int)++v12 >= max_length )
      return 0;
  }
  v21 = 0;
  while ( 1 )
  {
    if ( v21 >= datalist )
      goto LABEL_28;
    v22 = *((_QWORD *)&v11->fields.lookup + (int)v21);
    if ( !v22 )
      goto LABEL_27;
    if ( v19 == *(_DWORD *)(v22 + 20) )
      return 1;
    if ( (int)++v21 >= datalist )
      goto LABEL_24;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__TryIsSatisfyCompCondition(
        bool *isPlayable,
        int32_t type,
        int32_t condValue,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  bool result; // w0
  char IsSatisfySvtGroupCondition; // w8
  DataManager_o *Instance; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x3
  UserServantEntity_array *AllList; // x22
  bool v17; // zf
  int32_t v18; // w8

  if ( (byte_421A2BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&VoiceCondType_TypeInfo, v10);
    byte_421A2BD = 1;
  }
  result = 0;
  *isPlayable = 0;
  if ( condValue != -1 && targetValue != -1 )
  {
    if ( type <= 5 )
    {
      if ( type == 3 )
      {
LABEL_16:
        v17 = condValue == targetValue;
LABEL_17:
        IsSatisfySvtGroupCondition = v17;
      }
      else
      {
        if ( type != 5 )
          return 0;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_B0D97C(Instance);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, v14);
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v15);
      }
LABEL_22:
      result = 1;
      *isPlayable = IsSatisfySvtGroupCondition;
    }
    else
    {
      result = 0;
      switch ( type )
      {
        case 9:
        case 24:
          goto LABEL_16;
        case 17:
        case 20:
        case 25:
          IsSatisfySvtGroupCondition = condValue <= targetValue;
          goto LABEL_22;
        case 22:
        case 26:
          IsSatisfySvtGroupCondition = condValue >= targetValue;
          goto LABEL_22;
        case 23:
          if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !VoiceCondType_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          }
          if ( condValue <= 0 )
            v18 = 0;
          else
            v18 = targetValue;
          v17 = v18 == condValue;
          goto LABEL_17;
        default:
          return result;
      }
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__TryIsSatisfyCondition(bool *isPlayable, int32_t type, const MethodInfo *method)
{
  bool result; // w0
  VoiceCondType_c *v6; // x0
  bool IsSatisfyEventCondition; // w0
  VoiceCondType_c *v8; // x0
  bool v9; // w8

  if ( (byte_421A2BB & 1) == 0 )
  {
    sub_B0D8A4(&VoiceCondType_TypeInfo, *(_QWORD *)&type);
    byte_421A2BB = 1;
  }
  *isPlayable = 0;
  if ( type == 2 )
  {
    v8 = VoiceCondType_TypeInfo;
    if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !VoiceCondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
    }
    IsSatisfyEventCondition = VoiceCondType__IsSatisfyEventCondition((const MethodInfo *)v8);
  }
  else
  {
    result = 0;
    if ( type != 1 )
      return result;
    v6 = VoiceCondType_TypeInfo;
    if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !VoiceCondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
    }
    IsSatisfyEventCondition = VoiceCondType__IsSatisfyBirthdayCondition((const MethodInfo *)v6);
  }
  v9 = IsSatisfyEventCondition;
  result = 1;
  *isPlayable = v9;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__TryIsSatisfyValueCondition(
        bool *isPlayable,
        int32_t type,
        int32_t condValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  bool result; // w0
  DataManager_o *Instance; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v18; // w8

  if ( (byte_421A2BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v9);
    sub_B0D8A4(&VoiceCondType_TypeInfo, v10);
    byte_421A2BC = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_36;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, v13);
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v14);
      goto LABEL_34;
    case 6:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      Condition = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
      goto LABEL_34;
    case 7:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
      goto LABEL_29;
    case 12:
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_36:
        sub_B0D97C(Instance);
      IsSatisfyQuestClearCondition = QuestTree__IsWarNew((QuestTree_o *)Instance, condValue, 0LL);
      goto LABEL_29;
    case 13:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      Condition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_34:
      v18 = Condition;
      goto LABEL_35;
    case 14:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_29:
      v18 = !IsSatisfyQuestClearCondition;
LABEL_35:
      result = 1;
      *isPlayable = v18;
      break;
    default:
      return result;
  }
  return result;
}
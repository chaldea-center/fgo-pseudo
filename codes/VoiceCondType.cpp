void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_Int32_array **v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int v15; // w8
  System_Int32_array **v16; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v18; // x0

  if ( (byte_42EE716 & 1) == 0 )
  {
    sub_B5D5C4(&GameEventType_TYPE___TypeInfo, v1, v2, v3);
    sub_B5D5C4(&VoiceCondType_TypeInfo, v4, v5, v6);
    byte_42EE716 = 1;
  }
  v7 = (System_Int32_array **)sub_B5D5DC(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  v15 = *((_DWORD *)v7 + 6);
  v16 = v7;
  if ( !v15 || (*((_DWORD *)v7 + 8) = 12, v15 == 1) )
  {
    v18 = sub_B5D6C8(v7);
    sub_B5D668(v18, 0LL);
  }
  *((_DWORD *)v7 + 9) = 22;
  static_fields = (BattleServantConfConponent_o *)VoiceCondType_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, v16, v9, v10, v11, v12, v13, v14);
}


void __fastcall VoiceCondType___ctor(VoiceCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall VoiceCondType__IsSatisfyBirthdayCondition(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v5; // x1
  int64_t birthDay; // x19
  int32_t Year; // w1
  int32_t Month; // w19
  int32_t Day; // w19
  uint64_t v11; // [xsp+0h] [xbp-20h] BYREF
  uint64_t v12; // [xsp+8h] [xbp-18h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-8h] BYREF
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8

  if ( (byte_42EE70C & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v1, v2, v3);
    byte_42EE70C = 1;
  }
  dateData = 0LL;
  v12 = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B5D69C(0LL, v5);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v12 = NetworkManager__getDateTime_26077468(birthDay, 0LL).fields.dateData;
  v14.fields.dateData = (uint64_t)&v12;
  if ( System_DateTime__get_Month(v14, 0LL) == 2 )
  {
    v15.fields.dateData = (uint64_t)&v12;
    if ( System_DateTime__get_Day(v15, 0LL) == 29 )
    {
      v16.fields.dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v16, 0LL);
      v11 = 0LL;
      v17.fields.dateData = (uint64_t)&v11;
      System_DateTime___ctor_15564744(v17, Year, 2, 29, 0LL);
      v12 = v11;
    }
  }
  v18.fields.dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v18, 0LL);
  v19.fields.dateData = (uint64_t)&v12;
  if ( Month != System_DateTime__get_Month(v19, 0LL) )
    return 0;
  v20.fields.dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v20, 0LL);
  v21.fields.dateData = (uint64_t)&v12;
  return Day == System_DateTime__get_Day(v21, 0LL);
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

  if ( (byte_42EE715 & 1) == 0 )
  {
    sub_B5D5C4(&VoiceCondType_TypeInfo, condValue, targetValue, method);
    byte_42EE715 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  DataManager_o *Instance; // x0
  __int64 v29; // x1
  EventMaster_o *v30; // x19
  System_Collections_Generic_List_EventEntity____o *EnableEntityLists; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v32; // x19
  _BOOL8 isEventVoicePlay; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x22
  void *monitor; // x23
  unsigned int v37; // w24
  __int64 v38; // x8
  EventDetailEntity_o *Entity; // x0
  __int64 v40; // x1
  __int64 v41; // x0
  char v42; // w19
  int v43; // w20
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v46; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42EE70D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&VoiceCondType_TypeInfo, v25, v26, v27);
    byte_42EE70D = 1;
  }
  memset(&v46, 0, sizeof(v46));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  v30 = (EventMaster_o *)Instance;
  if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoiceCondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  }
  if ( !v30
    || (EnableEntityLists = EventMaster__GetEnableEntityLists(
                              v30,
                              VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                              0,
                              0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_30:
    sub_B5D69C(Instance, v29);
  }
  v32 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v45,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EnableEntityLists,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
LABEL_11:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v46,
                         (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    if ( !isEventVoicePlay )
    {
      v42 = 0;
      v43 = 127;
      goto LABEL_26;
    }
    current = v46.fields.current;
    if ( v46.fields.current )
    {
      monitor = v46.fields.current[1].monitor;
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
    v41 = sub_B5D6C8(isEventVoicePlay);
    sub_B5D668(v41, 0LL);
  }
  v37 = 0;
  while ( 1 )
  {
    v38 = *((_QWORD *)&current[2].klass + (int)v37);
    if ( !v38 )
      sub_B5D69C(isEventVoicePlay, v34);
    if ( !v32 )
      sub_B5D69C(isEventVoicePlay, v34);
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v32,
                                      *(_DWORD *)(v38 + 16),
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_B5D69C(0LL, v40);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay(Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( (int)++v37 >= (int)monitor )
      goto LABEL_11;
    if ( v37 >= LODWORD(current[1].monitor) )
      goto LABEL_23;
  }
  v42 = 1;
  v43 = 129;
LABEL_26:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v46,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return (v43 == 129) & v42;
}


bool __fastcall VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  int64_t v16; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE70F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EE70F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                condValue,
                                (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B5D69C(Instance, v15);
  v16 = *(_QWORD *)&entity->fields.eventId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return v16 <= NetworkManager__getTime(0LL);
}


bool __fastcall VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
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
  __int64 v12; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EE70E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EE70E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B5D69C(Instance, v12);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__IsSatisfySvtGetCondition(
        int32_t condValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  signed int max_length; // w8
  il2cpp_array_size_t v6; // w22
  Il2CppClass **v7; // x24
  Il2CppClass *v8; // x8
  _QWORD *v9; // x24
  Il2CppClass *v10; // t1
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  int32_t v13; // w0
  __int64 v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v16 = condValue;
  if ( (byte_42EE710 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_B5D5C4(
                              &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                              (_DWORD)usrSvtList,
                              (_DWORD)method,
                              v3);
    byte_42EE710 = 1;
  }
  if ( !usrSvtList )
LABEL_20:
    sub_B5D69C(*(_QWORD *)&condValue, usrSvtList);
  max_length = usrSvtList->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  while ( 1 )
  {
    if ( v6 >= max_length )
    {
LABEL_19:
      v15 = sub_B5D6C8(*(_QWORD *)&condValue);
      sub_B5D668(v15, 0LL);
    }
    v7 = &usrSvtList->obj.klass + (int)v6;
    v10 = v7[4];
    v9 = v7 + 4;
    v8 = v10;
    if ( !v10 )
      goto LABEL_20;
    declaringType = v8->_1.declaringType;
    parent = v8->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v17.fields.fakeValue = parent;
    v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v17, 0LL);
    *(_QWORD *)&condValue = System_Int32__Equals_39741700((int32_t)&v16, v13, 0LL);
    if ( (condValue & 1) != 0 )
    {
      if ( v6 >= usrSvtList->max_length )
        goto LABEL_19;
      *(_QWORD *)&condValue = *v9;
      if ( !*v9 )
        goto LABEL_20;
      *(_QWORD *)&condValue = UserServantEntity__IsEventJoin(*(UserServantEntity_o **)&condValue, 0LL);
      if ( (condValue & 1) == 0 )
        return 1;
    }
    max_length = usrSvtList->max_length;
    if ( (int)++v6 >= max_length )
      return 0;
  }
}


bool __fastcall VoiceCondType__IsSatisfySvtGroupCondition(
        int32_t condValue,
        int32_t targetValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  signed int max_length; // w8
  DataManager_o *v16; // x21
  il2cpp_array_size_t v17; // w24
  Il2CppClass **v18; // x26
  Il2CppClass *v19; // x8
  DataManager_o **v20; // x26
  Il2CppClass *v21; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v24; // w22
  int datalist; // w8
  unsigned int v26; // w9
  __int64 v27; // x10
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42EE711 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantGroupMaster___, targetValue, (_DWORD)usrSvtList, method);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11, v12);
    byte_42EE711 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)ServantGroupMaster__getEntityListById(
                                      (ServantGroupMaster_o *)Instance,
                                      condValue,
                                      0LL),
        !usrSvtList) )
  {
LABEL_27:
    sub_B5D69C(Instance, v14);
  }
  max_length = usrSvtList->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = Instance;
  v17 = 0;
  while ( 1 )
  {
    if ( v17 >= max_length )
      goto LABEL_28;
    v18 = &usrSvtList->obj.klass + (int)v17;
    v21 = v18[4];
    v20 = (DataManager_o **)(v18 + 4);
    v19 = v21;
    if ( !v21 )
      goto LABEL_27;
    declaringType = v19->_1.declaringType;
    parent = v19->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v30.fields.fakeValue = parent;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
    if ( v17 >= usrSvtList->max_length )
    {
LABEL_28:
      v29 = sub_B5D6C8(Instance);
      sub_B5D668(v29, 0LL);
    }
    v24 = (int)Instance;
    Instance = *v20;
    if ( !*v20 )
      goto LABEL_27;
    Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    if ( v24 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v16 )
        goto LABEL_27;
      datalist = (int)v16->fields.datalist;
      if ( datalist >= 1 )
        break;
    }
LABEL_24:
    max_length = usrSvtList->max_length;
    if ( (int)++v17 >= max_length )
      return 0;
  }
  v26 = 0;
  while ( 1 )
  {
    if ( v26 >= datalist )
      goto LABEL_28;
    v27 = *((_QWORD *)&v16->fields.lookup + (int)v26);
    if ( !v27 )
      goto LABEL_27;
    if ( v24 == *(_DWORD *)(v27 + 20) )
      return 1;
    if ( (int)++v26 >= datalist )
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  bool result; // w0
  char IsSatisfySvtGroupCondition; // w8
  DataManager_o *Instance; // x0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  UserServantEntity_array *AllList; // x22
  bool v21; // zf
  int32_t v22; // w8

  if ( (byte_42EE714 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, type, condValue, *(_QWORD *)&targetValue);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&VoiceCondType_TypeInfo, v12, v13, v14);
    byte_42EE714 = 1;
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
        v21 = condValue == targetValue;
LABEL_17:
        IsSatisfySvtGroupCondition = v21;
      }
      else
      {
        if ( type != 5 )
          return 0;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_B5D69C(Instance, v18);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, v18);
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v19);
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
            v22 = 0;
          else
            v22 = targetValue;
          v21 = v22 == condValue;
          goto LABEL_17;
        default:
          return result;
      }
    }
  }
  return result;
}


bool __fastcall VoiceCondType__TryIsSatisfyCondition(bool *isPlayable, int32_t type, const MethodInfo *method)
{
  __int64 v3; // x3
  bool result; // w0
  VoiceCondType_c *v7; // x0
  bool IsSatisfyEventCondition; // w0
  VoiceCondType_c *v9; // x0
  bool v10; // w8

  if ( (byte_42EE712 & 1) == 0 )
  {
    sub_B5D5C4(&VoiceCondType_TypeInfo, type, (_DWORD)method, v3);
    byte_42EE712 = 1;
  }
  *isPlayable = 0;
  if ( type == 2 )
  {
    v9 = VoiceCondType_TypeInfo;
    if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !VoiceCondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
    }
    IsSatisfyEventCondition = VoiceCondType__IsSatisfyEventCondition((const MethodInfo *)v9);
  }
  else
  {
    result = 0;
    if ( type != 1 )
      return result;
    v7 = VoiceCondType_TypeInfo;
    if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !VoiceCondType_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
    }
    IsSatisfyEventCondition = VoiceCondType__IsSatisfyBirthdayCondition((const MethodInfo *)v7);
  }
  v10 = IsSatisfyEventCondition;
  result = 1;
  *isPlayable = v10;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__TryIsSatisfyValueCondition(
        bool *isPlayable,
        int32_t type,
        int32_t condValue,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  bool result; // w0
  DataManager_o *Instance; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v26; // w8

  if ( (byte_42EE713 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, type, condValue, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v10, v11, v12);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&VoiceCondType_TypeInfo, v16, v17, v18);
    byte_42EE713 = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_36;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, v21);
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v22);
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
      Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_36:
        sub_B5D69C(Instance, v21);
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
      v26 = Condition;
      goto LABEL_35;
    case 14:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_29:
      v26 = !IsSatisfyQuestClearCondition;
LABEL_35:
      result = 1;
      *isPlayable = v26;
      break;
    default:
      return result;
  }
  return result;
}
void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  System_Int32_array **v1; // x0
  __int64 v2; // x1
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  int v9; // w8
  System_Int32_array **v10; // x1
  BattleServantConfConponent_o *static_fields; // x0
  __int64 v12; // x0

  if ( (byte_43912A8 & 1) == 0 )
  {
    sub_B775C4(&GameEventType_TYPE___TypeInfo);
    sub_B775C4(&VoiceCondType_TypeInfo);
    byte_43912A8 = 1;
  }
  v1 = (System_Int32_array **)sub_B775DC(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v1 )
    sub_B7769C(0LL, v2);
  v9 = *((_DWORD *)v1 + 6);
  v10 = v1;
  if ( !v9 || (*((_DWORD *)v1 + 8) = 12, v9 == 1) )
  {
    v12 = sub_B776C8(v1);
    sub_B77668(v12, 0LL);
  }
  *((_DWORD *)v1 + 9) = 22;
  static_fields = (BattleServantConfConponent_o *)VoiceCondType_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B77560(static_fields, v10, v3, v4, v5, v6, v7, v8);
}


void __fastcall VoiceCondType___ctor(VoiceCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall VoiceCondType__IsSatisfyBirthdayCondition(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
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

  if ( (byte_439129E & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_439129E = 1;
  }
  dateData = 0LL;
  v9 = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_B7769C(0LL, v2);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  dateData = NetworkManager__getServerDateTime(0LL).fields.dateData;
  v9 = NetworkManager__getDateTime_26207384(birthDay, 0LL).fields.dateData;
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
      System_DateTime___ctor_15683012(v14, Year, 2, 29, 0LL);
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

  if ( (byte_43912A7 & 1) == 0 )
  {
    sub_B775C4(&VoiceCondType_TypeInfo);
    byte_43912A7 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v2; // x1
  EventMaster_o *v3; // x19
  System_Collections_Generic_List_EventEntity____o *EnableEntityLists; // x20
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x19
  _BOOL8 isEventVoicePlay; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x22
  void *monitor; // x23
  unsigned int v10; // w24
  __int64 v11; // x8
  EventDetailEntity_o *Entity; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  char v15; // w19
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_439129F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&VoiceCondType_TypeInfo);
    byte_439129F = 1;
  }
  memset(&v19, 0, sizeof(v19));
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  v3 = (EventMaster_o *)Instance;
  if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !VoiceCondType_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  }
  if ( !v3
    || (EnableEntityLists = EventMaster__GetEnableEntityLists(
                              v3,
                              VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                              0,
                              0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_30:
    sub_B7769C(Instance, v2);
  }
  v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EnableEntityLists,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
LABEL_11:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                         &v19,
                         (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    if ( !isEventVoicePlay )
    {
      v15 = 0;
      v16 = 127;
      goto LABEL_26;
    }
    current = v19.fields.current;
    if ( v19.fields.current )
    {
      monitor = v19.fields.current[1].monitor;
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
    v14 = sub_B776C8(isEventVoicePlay);
    sub_B77668(v14, 0LL);
  }
  v10 = 0;
  while ( 1 )
  {
    v11 = *((_QWORD *)&current[2].klass + (int)v10);
    if ( !v11 )
      sub_B7769C(isEventVoicePlay, v7);
    if ( !v5 )
      sub_B7769C(isEventVoicePlay, v7);
    Entity = (EventDetailEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v5,
                                      *(_DWORD *)(v11 + 16),
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_B7769C(0LL, v13);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay(Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( (int)++v10 >= (int)monitor )
      goto LABEL_11;
    if ( v10 >= LODWORD(current[1].monitor) )
      goto LABEL_23;
  }
  v15 = 1;
  v16 = 129;
LABEL_26:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return (v16 == 129) & v15;
}


bool __fastcall VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x19
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43912A1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43912A1 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                condValue,
                                (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_13:
    sub_B7769C(Instance, v4);
  v5 = *(_QWORD *)&entity->fields.eventId;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return v5 <= NetworkManager__getTime(0LL);
}


bool __fastcall VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserQuestMaster_o *MasterData_WarQuestSelectionMaster; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43912A0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43912A0 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  MasterData_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
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
    sub_B7769C(Instance, v4);
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
  if ( (byte_43912A2 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_43912A2 = 1;
  }
  if ( !usrSvtList )
LABEL_20:
    sub_B7769C(*(_QWORD *)&condValue, usrSvtList);
  max_length = usrSvtList->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 >= max_length )
    {
LABEL_19:
      v14 = sub_B776C8(*(_QWORD *)&condValue);
      sub_B77668(v14, 0LL);
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
    v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
    *(_QWORD *)&condValue = System_Int32__Equals_39547160((int32_t)&v15, v12, 0LL);
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


bool __fastcall VoiceCondType__IsSatisfySvtGroupCondition(
        int32_t condValue,
        int32_t targetValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  DataManager_o *v10; // x21
  il2cpp_array_size_t v11; // w24
  Il2CppClass **v12; // x26
  Il2CppClass *v13; // x8
  DataManager_o **v14; // x26
  Il2CppClass *v15; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v18; // w22
  int datalist; // w8
  unsigned int v20; // w9
  __int64 v21; // x10
  __int64 v23; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_43912A3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43912A3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = (DataManager_o *)ServantGroupMaster__getEntityListById(
                                      (ServantGroupMaster_o *)Instance,
                                      condValue,
                                      0LL),
        !usrSvtList) )
  {
LABEL_27:
    sub_B7769C(Instance, v8);
  }
  max_length = usrSvtList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = Instance;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= max_length )
      goto LABEL_28;
    v12 = &usrSvtList->obj.klass + (int)v11;
    v15 = v12[4];
    v14 = (DataManager_o **)(v12 + 4);
    v13 = v15;
    if ( !v15 )
      goto LABEL_27;
    declaringType = v13->_1.declaringType;
    parent = v13->_1.parent;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v24.fields.currentCryptoKey = declaringType;
    *(_QWORD *)&v24.fields.fakeValue = parent;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v24, 0LL);
    if ( v11 >= usrSvtList->max_length )
    {
LABEL_28:
      v23 = sub_B776C8(Instance);
      sub_B77668(v23, 0LL);
    }
    v18 = (int)Instance;
    Instance = *v14;
    if ( !*v14 )
      goto LABEL_27;
    Instance = (DataManager_o *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
    if ( v18 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
    {
      if ( !v10 )
        goto LABEL_27;
      datalist = (int)v10->fields.datalist;
      if ( datalist >= 1 )
        break;
    }
LABEL_24:
    max_length = usrSvtList->max_length;
    if ( (int)++v11 >= max_length )
      return 0;
  }
  v20 = 0;
  while ( 1 )
  {
    if ( v20 >= datalist )
      goto LABEL_28;
    v21 = *((_QWORD *)&v10->fields.lookup + (int)v20);
    if ( !v21 )
      goto LABEL_27;
    if ( v18 == *(_DWORD *)(v21 + 20) )
      return 1;
    if ( (int)++v20 >= datalist )
      goto LABEL_24;
  }
}


bool __fastcall VoiceCondType__TryIsSatisfyCompCondition(
        bool *isPlayable,
        int32_t type,
        int32_t condValue,
        int32_t targetValue,
        const MethodInfo *method)
{
  bool result; // w0
  char IsSatisfySvtGroupCondition; // w8
  DataManager_o *Instance; // x0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  UserServantEntity_array *AllList; // x22
  bool v15; // zf
  int32_t v16; // w8

  if ( (byte_43912A6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&VoiceCondType_TypeInfo);
    byte_43912A6 = 1;
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
        v15 = condValue == targetValue;
LABEL_17:
        IsSatisfySvtGroupCondition = v15;
      }
      else
      {
        if ( type != 5 )
          return 0;
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            Instance,
                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_B7769C(Instance, v12);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, v12);
        if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !VoiceCondType_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        }
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v13);
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
            v16 = 0;
          else
            v16 = targetValue;
          v15 = v16 == condValue;
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
  bool result; // w0
  VoiceCondType_c *v6; // x0
  bool IsSatisfyEventCondition; // w0
  VoiceCondType_c *v8; // x0
  bool v9; // w8

  if ( (byte_43912A4 & 1) == 0 )
  {
    sub_B775C4(&VoiceCondType_TypeInfo);
    byte_43912A4 = 1;
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
  bool result; // w0
  DataManager_o *Instance; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v14; // w8

  if ( (byte_43912A5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B775C4(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B775C4(&VoiceCondType_TypeInfo);
    byte_43912A5 = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_36;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_36;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, v9);
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v10);
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
      Instance = (DataManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2D168C0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_36:
        sub_B7769C(Instance, v9);
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
      v14 = Condition;
      goto LABEL_35;
    case 14:
      if ( (BYTE3(VoiceCondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !VoiceCondType_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      }
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_29:
      v14 = !IsSatisfyQuestClearCondition;
LABEL_35:
      result = 1;
      *isPlayable = v14;
      break;
    default:
      return result;
  }
  return result;
}
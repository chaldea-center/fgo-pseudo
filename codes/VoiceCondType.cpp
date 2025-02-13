void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  struct GameEventType_TYPE_array *v1; // x0
  __int64 v2; // x1
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4BDB55D & 1) == 0 )
  {
    sub_1C21E38(&GameEventType_TYPE___TypeInfo);
    sub_1C21E38(&VoiceCondType_TypeInfo);
    byte_4BDB55D = 1;
  }
  v1 = (struct GameEventType_TYPE_array *)sub_1C21EE0(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v1 )
    sub_1C22094(0LL, v2);
  max_length = v1->max_length;
  if ( !max_length || (v1->m_Items[1] = 12, max_length == 1) )
    sub_1C2209C(v1, v1);
  v1->m_Items[2] = 22;
  VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE = v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)VoiceCondType_TypeInfo->static_fields, (int64_t)v1, v3, v4, v5, v6, v7, v8);
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
  uint64_t v8; // [xsp+0h] [xbp-30h] BYREF
  uint64_t v9; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v11; // 0:x0.8
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8

  if ( (byte_4BDB552 & 1) == 0 )
  {
    sub_1C21E38(&System_DateTime_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDB552 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1C22094(0LL, v2);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  v9 = NetworkManager__getDateTime_39807076(birthDay, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v11.fields._dateData = (uint64_t)&v9;
  if ( System_DateTime__get_Month(v11, 0LL) == 2 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v12.fields._dateData = (uint64_t)&v9;
    if ( System_DateTime__get_Day(v12, 0LL) == 29 )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v13.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v13, 0LL);
      v8 = 0LL;
      v14.fields._dateData = (uint64_t)&v8;
      System_DateTime___ctor_63793684(v14, Year, 2, 29, 0LL);
      v9 = v8;
    }
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v15.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v15, 0LL);
  v16.fields._dateData = (uint64_t)&v9;
  if ( Month != System_DateTime__get_Month(v16, 0LL) )
    return 0;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v17.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v17, 0LL);
  v18.fields._dateData = (uint64_t)&v9;
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

  if ( (byte_4BDB55C & 1) == 0 )
  {
    sub_1C21E38(&VoiceCondType_TypeInfo);
    byte_4BDB55C = 1;
  }
  result = 0;
  isPlayable[0] = 0;
  switch ( type )
  {
    case 1:
    case 2:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      VoiceCondType__TryIsSatisfyCondition(isPlayable, type, *(const MethodInfo **)&targetValue);
      goto LABEL_14;
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
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      VoiceCondType__TryIsSatisfyCompCondition(isPlayable, type, condValue, targetValue, v4);
      goto LABEL_14;
    case 4:
    case 6:
    case 7:
    case 12:
    case 13:
    case 14:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      VoiceCondType__TryIsSatisfyValueCondition(isPlayable, type, condValue, method);
LABEL_14:
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
  int32_t v5; // w8

  if ( (byte_4BDB558 & 1) == 0 )
  {
    sub_1C21E38(&ImageLimitCount_TypeInfo);
    byte_4BDB558 = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  if ( targetValue >= 12 )
    v5 = targetValue;
  else
    v5 = targetValue + 1;
  if ( condValue <= 0 )
    v5 = 0;
  return v5 == condValue;
}


bool __fastcall VoiceCondType__IsSatisfyEventCondition(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1
  EventMaster_o *v3; // x19
  System_Collections_Generic_List_object__o *EnableEntityLists; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19
  _BOOL8 isEventVoicePlay; // x0
  __int64 v7; // x1
  bool v8; // w20
  Il2CppObject *current; // x24
  void *monitor; // x8
  int v11; // w25
  unsigned int v12; // w26
  __int64 v13; // x8
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  int v17; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDB553 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&VoiceCondType_TypeInfo);
    byte_4BDB553 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  v3 = (EventMaster_o *)Instance;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  if ( !v3
    || (EnableEntityLists = (System_Collections_Generic_List_object__o *)EventMaster__GetEnableEntityLists(
                                                                           v3,
                                                                           VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                                                                           0,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_29:
    sub_1C22094(Instance, v2);
  }
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    EnableEntityLists,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v20 = v19;
  while ( 1 )
  {
LABEL_10:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v20,
                         (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    v8 = isEventVoicePlay;
    if ( !isEventVoicePlay )
    {
      v17 = 8;
      goto LABEL_25;
    }
    current = v20.fields._current;
    if ( v20.fields._current )
    {
      monitor = v20.fields._current[1].monitor;
      if ( monitor )
      {
        v11 = (_DWORD)monitor - 1;
        if ( (int)monitor >= 1 )
          break;
      }
    }
  }
  if ( !(_DWORD)monitor )
LABEL_22:
    sub_1C2209C(isEventVoicePlay, v7);
  v12 = 0;
  while ( 1 )
  {
    v13 = *((_QWORD *)&current[2].klass + (int)v12);
    if ( !v13 )
      sub_1C22094(isEventVoicePlay, v7);
    if ( !v5 )
      sub_1C22094(isEventVoicePlay, v7);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v5,
               *(_DWORD *)(v13 + 16),
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C22094(0LL, v15);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay((EventDetailEntity_o *)Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( v11 == v12++ )
      goto LABEL_10;
    if ( v12 >= LODWORD(current[1].monitor) )
      goto LABEL_22;
  }
  v17 = 7;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return v8 && v17 == 7;
}


bool __fastcall VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppClass *klass; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDB555 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB555 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               condValue,
                               (const MethodInfo_325BE14 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1C22094(Instance, v4);
  klass = entity[6].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return (__int64)klass <= NetworkManager__getTime(0LL);
}


bool __fastcall VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDB554 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB554 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_15;
  if ( UserQuestMaster__TryGetEntity(
         (UserQuestMaster_o *)MasterData_object,
         &entity,
         *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
         condValue,
         0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_15:
    sub_1C22094(Instance, v4);
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
  bool v5; // w22
  il2cpp_array_size_t i; // w23
  Il2CppClass **v7; // x25
  Il2CppClass *v8; // x8
  _QWORD *v9; // x25
  Il2CppClass *v10; // t1
  Il2CppClass *parent; // x20
  Il2CppClass *declaringType; // x21
  int32_t v13; // w0
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v15 = condValue;
  if ( (byte_4BDB556 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDB556 = 1;
  }
  if ( !usrSvtList )
LABEL_17:
    sub_1C22094(*(_QWORD *)&condValue, usrSvtList);
  max_length = usrSvtList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; (int)i < max_length; v5 = (int)++i < max_length )
    {
      if ( i >= max_length )
LABEL_16:
        sub_1C2209C(*(_QWORD *)&condValue, usrSvtList);
      v7 = &usrSvtList->obj.klass + (int)i;
      v10 = v7[4];
      v9 = v7 + 4;
      v8 = v10;
      if ( !v10 )
        goto LABEL_17;
      declaringType = v8->_1.declaringType;
      parent = v8->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v16.fields.fakeValue = parent;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v16, 0LL);
      *(_QWORD *)&condValue = System_Int32__Equals_63920912((int32_t)&v15, v13, 0LL);
      if ( (condValue & 1) != 0 )
      {
        if ( i >= usrSvtList->max_length )
          goto LABEL_16;
        *(_QWORD *)&condValue = *v9;
        if ( !*v9 )
          goto LABEL_17;
        *(_QWORD *)&condValue = UserServantEntity__IsEventJoin(*(UserServantEntity_o **)&condValue, 0LL);
        if ( (condValue & 1) == 0 )
          return v5;
      }
      max_length = usrSvtList->max_length;
    }
  }
  return v5;
}


bool __fastcall VoiceCondType__IsSatisfySvtGroupCondition(
        int32_t condValue,
        int32_t targetValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  ServantGroupEntity_array *Instance; // x0
  __int64 v8; // x1
  signed int max_length; // w8
  bool v10; // w24
  ServantGroupEntity_array *v11; // x21
  il2cpp_array_size_t v12; // w25
  Il2CppClass **v13; // x27
  Il2CppClass *v14; // x8
  ServantGroupEntity_array **v15; // x27
  Il2CppClass *v16; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v19; // w22
  int v20; // w8
  int v21; // w9
  ServantGroupEntity_o *v22; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4BDB557 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDB557 = 1;
  }
  Instance = (ServantGroupEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantGroupEntity_array *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condValue, 0LL), !usrSvtList) )
  {
LABEL_25:
    sub_1C22094(Instance, v8);
  }
  max_length = usrSvtList->max_length;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = Instance;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        goto LABEL_26;
      v13 = &usrSvtList->obj.klass + (int)v12;
      v16 = v13[4];
      v15 = (ServantGroupEntity_array **)(v13 + 4);
      v14 = v16;
      if ( !v16 )
        goto LABEL_25;
      declaringType = v14->_1.declaringType;
      parent = v14->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v24.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v24.fields.fakeValue = parent;
      Instance = (ServantGroupEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                               v24,
                                               0LL);
      if ( v12 >= usrSvtList->max_length )
        goto LABEL_26;
      v19 = (int)Instance;
      Instance = *v15;
      if ( !*v15 )
        goto LABEL_25;
      Instance = (ServantGroupEntity_array *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
      if ( v19 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_25;
        v20 = v11->max_length;
        if ( v20 >= 1 )
          break;
      }
LABEL_23:
      max_length = usrSvtList->max_length;
      v10 = (int)++v12 < max_length;
      if ( (int)v12 >= max_length )
        return v10;
    }
    v21 = 0;
    while ( v20 != v21 )
    {
      v22 = v11->m_Items[v21];
      if ( !v22 )
        goto LABEL_25;
      if ( v19 == v22->fields.svtId )
        return v10;
      if ( v20 == ++v21 )
        goto LABEL_23;
    }
LABEL_26:
    sub_1C2209C(Instance, v8);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__TryIsSatisfyCompCondition(
        bool *isPlayable,
        int32_t type,
        int32_t condValue,
        int32_t targetValue,
        const MethodInfo *method)
{
  bool result; // w0
  bool v10; // w8
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  UserServantEntity_array *AllList; // x22
  bool IsSatisfySvtGroupCondition; // w0

  if ( (byte_4BDB55B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&VoiceCondType_TypeInfo);
    byte_4BDB55B = 1;
  }
  result = 0;
  *isPlayable = 0;
  if ( condValue != -1 && targetValue != -1 )
  {
    if ( type <= 5 )
    {
      if ( type == 3 )
      {
LABEL_15:
        v10 = condValue == targetValue;
      }
      else
      {
        if ( type != 5 )
          return 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_1C22094(Instance, v12);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v13);
LABEL_21:
        v10 = IsSatisfySvtGroupCondition;
      }
LABEL_22:
      result = 1;
      *isPlayable = v10;
    }
    else
    {
      result = 0;
      switch ( type )
      {
        case 9:
        case 24:
          goto LABEL_15;
        case 17:
        case 20:
        case 25:
          v10 = condValue <= targetValue;
          goto LABEL_22;
        case 22:
        case 26:
          v10 = condValue >= targetValue;
          goto LABEL_22;
        case 23:
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfyCostumeCondition(
                                         condValue,
                                         targetValue,
                                         *(const MethodInfo **)&condValue);
          goto LABEL_21;
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

  if ( (byte_4BDB559 & 1) == 0 )
  {
    sub_1C21E38(&VoiceCondType_TypeInfo);
    byte_4BDB559 = 1;
  }
  *isPlayable = 0;
  if ( type == 2 )
  {
    v8 = VoiceCondType_TypeInfo;
    if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
    IsSatisfyEventCondition = VoiceCondType__IsSatisfyEventCondition((const MethodInfo *)v8);
  }
  else
  {
    result = 0;
    if ( type != 1 )
      return result;
    v6 = VoiceCondType_TypeInfo;
    if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
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
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v14; // w8

  if ( (byte_4BDB55A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&VoiceCondType_TypeInfo);
    byte_4BDB55A = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v10);
      goto LABEL_22;
    case 6:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
      goto LABEL_22;
    case 7:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
      goto LABEL_26;
    case 12:
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_28:
        sub_1C22094(Instance, v9);
      IsSatisfyQuestClearCondition = QuestTree__IsWarNew((QuestTree_o *)Instance, condValue, 0LL);
      goto LABEL_26;
    case 13:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_22:
      v14 = Condition;
      goto LABEL_27;
    case 14:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_26:
      v14 = !IsSatisfyQuestClearCondition;
LABEL_27:
      result = 1;
      *isPlayable = v14;
      break;
    default:
      return result;
  }
  return result;
}
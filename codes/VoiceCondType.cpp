void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct GameEventType_TYPE_array *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B00FB4 & 1) == 0 )
  {
    sub_1BC3008(&GameEventType_TYPE___TypeInfo, v1);
    sub_1BC3008(&VoiceCondType_TypeInfo, v2);
    byte_4B00FB4 = 1;
  }
  v3 = (struct GameEventType_TYPE_array *)sub_1BC30B0(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v3 )
    sub_1BC3264(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 12, max_length == 1) )
    sub_1BC326C(v3, v3, v5);
  v3->m_Items[2] = 22;
  VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE = v3;
  sub_1BC2FAC((CGThumbnailListItem_o *)VoiceCondType_TypeInfo->static_fields, (int32_t)v3, v5, v6);
}


void __fastcall VoiceCondType___ctor(VoiceCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall VoiceCondType__IsSatisfyBirthdayCondition(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v4; // x1
  int64_t birthDay; // x19
  int32_t Year; // w1
  int32_t Month; // w19
  int32_t Day; // w19
  uint64_t v10; // [xsp+0h] [xbp-30h] BYREF
  uint64_t v11; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8

  if ( (byte_4B00FA9 & 1) == 0 )
  {
    sub_1BC3008(&System_DateTime_TypeInfo, v1);
    sub_1BC3008(&NetworkManager_TypeInfo, v2);
    byte_4B00FA9 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BC3264(0LL, v4);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  v11 = NetworkManager__getDateTime_40293048(birthDay, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v13.fields._dateData = (uint64_t)&v11;
  if ( System_DateTime__get_Month(v13, 0LL) == 2 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v14.fields._dateData = (uint64_t)&v11;
    if ( System_DateTime__get_Day(v14, 0LL) == 29 )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v15.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v15, 0LL);
      v10 = 0LL;
      v16.fields._dateData = (uint64_t)&v10;
      System_DateTime___ctor_63733028(v16, Year, 2, 29, 0LL);
      v11 = v10;
    }
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v17.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v17, 0LL);
  v18.fields._dateData = (uint64_t)&v11;
  if ( Month != System_DateTime__get_Month(v18, 0LL) )
    return 0;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v19.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v19, 0LL);
  v20.fields._dateData = (uint64_t)&v11;
  return Day == System_DateTime__get_Day(v20, 0LL);
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

  if ( (byte_4B00FB3 & 1) == 0 )
  {
    sub_1BC3008(&VoiceCondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4B00FB3 = 1;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__IsSatisfyCostumeCondition(
        int32_t condValue,
        int32_t targetValue,
        const MethodInfo *method)
{
  int32_t v5; // w8

  if ( (byte_4B00FAF & 1) == 0 )
  {
    sub_1BC3008(&ImageLimitCount_TypeInfo, *(_QWORD *)&targetValue);
    byte_4B00FAF = 1;
  }
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  if ( targetValue >= 11 )
    v5 = targetValue;
  else
    v5 = targetValue + 1;
  if ( condValue <= 0 )
    v5 = 0;
  return v5 == condValue;
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
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  EventMaster_o *v12; // x19
  System_Collections_Generic_List_object__o *EnableEntityLists; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x19
  _BOOL8 isEventVoicePlay; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  bool v18; // w20
  Il2CppObject *current; // x24
  void *monitor; // x8
  int v21; // w25
  unsigned int v22; // w26
  __int64 v23; // x8
  Il2CppObject *Entity; // x0
  __int64 v25; // x1
  int v27; // w19
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B00FAA & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BC3008(&VoiceCondType_TypeInfo, v9);
    byte_4B00FAA = 1;
  }
  memset(&v30, 0, sizeof(v30));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
  v12 = (EventMaster_o *)Instance;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  if ( !v12
    || (EnableEntityLists = (System_Collections_Generic_List_object__o *)EventMaster__GetEnableEntityLists(
                                                                           v12,
                                                                           VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                                                                           0,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_29:
    sub_1BC3264(Instance, v11);
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    EnableEntityLists,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
LABEL_10:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v30,
                         (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    v18 = isEventVoicePlay;
    if ( !isEventVoicePlay )
    {
      v27 = 8;
      goto LABEL_25;
    }
    current = v30.fields._current;
    if ( v30.fields._current )
    {
      monitor = v30.fields._current[1].monitor;
      if ( monitor )
      {
        v21 = (_DWORD)monitor - 1;
        if ( (int)monitor >= 1 )
          break;
      }
    }
  }
  if ( !(_DWORD)monitor )
LABEL_22:
    sub_1BC326C(isEventVoicePlay, v16, v17);
  v22 = 0;
  while ( 1 )
  {
    v23 = *((_QWORD *)&current[2].klass + (int)v22);
    if ( !v23 )
      sub_1BC3264(isEventVoicePlay, v16);
    if ( !v14 )
      sub_1BC3264(isEventVoicePlay, v16);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v14,
               *(_DWORD *)(v23 + 16),
               (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_1BC3264(0LL, v25);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay((EventDetailEntity_o *)Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( v21 == v22++ )
      goto LABEL_10;
    if ( v22 >= LODWORD(current[1].monitor) )
      goto LABEL_22;
  }
  v27 = 7;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return v18 && v27 == 7;
}


bool __fastcall VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppClass *klass; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B00FAC & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BC3008(&NetworkManager_TypeInfo, v4);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B00FAC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               condValue,
                               (const MethodInfo_32AF0BC *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1BC3264(Instance, v7);
  klass = entity[6].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return (__int64)klass <= NetworkManager__getTime(0LL);
}


bool __fastcall VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B00FAB & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B00FAB = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4AFC1F1 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, v6);
    byte_4AFC1F1 = 1;
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
    sub_1BC3264(Instance, v6);
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
  if ( (byte_4B00FAD & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtList);
    byte_4B00FAD = 1;
  }
  if ( !usrSvtList )
LABEL_17:
    sub_1BC3264(*(_QWORD *)&condValue, usrSvtList);
  max_length = usrSvtList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; (int)i < max_length; v5 = (int)++i < max_length )
    {
      if ( i >= max_length )
LABEL_16:
        sub_1BC326C(*(_QWORD *)&condValue, usrSvtList, method);
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v16, 0LL);
      *(_QWORD *)&condValue = System_Int32__Equals_63857188((int32_t)&v15, v13, 0LL);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__IsSatisfySvtGroupCondition(
        int32_t condValue,
        int32_t targetValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  ServantGroupEntity_array *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  signed int max_length; // w8
  bool v13; // w24
  ServantGroupEntity_array *v14; // x21
  il2cpp_array_size_t v15; // w25
  Il2CppClass **v16; // x27
  Il2CppClass *v17; // x8
  ServantGroupEntity_array **v18; // x27
  Il2CppClass *v19; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v22; // w22
  int v23; // w8
  int v24; // w9
  ServantGroupEntity_o *v25; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B00FAE & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&targetValue);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B00FAE = 1;
  }
  Instance = (ServantGroupEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantGroupEntity_array *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condValue, 0LL), !usrSvtList) )
  {
LABEL_25:
    sub_1BC3264(Instance, v10);
  }
  max_length = usrSvtList->max_length;
  v13 = max_length > 0;
  if ( max_length >= 1 )
  {
    v14 = Instance;
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        goto LABEL_26;
      v16 = &usrSvtList->obj.klass + (int)v15;
      v19 = v16[4];
      v18 = (ServantGroupEntity_array **)(v16 + 4);
      v17 = v19;
      if ( !v19 )
        goto LABEL_25;
      declaringType = v17->_1.declaringType;
      parent = v17->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v27.fields.fakeValue = parent;
      Instance = (ServantGroupEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(
                                               v27,
                                               0LL);
      if ( v15 >= usrSvtList->max_length )
        goto LABEL_26;
      v22 = (int)Instance;
      Instance = *v18;
      if ( !*v18 )
        goto LABEL_25;
      Instance = (ServantGroupEntity_array *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
      if ( v22 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v14 )
          goto LABEL_25;
        v23 = v14->max_length;
        if ( v23 >= 1 )
          break;
      }
LABEL_23:
      max_length = usrSvtList->max_length;
      v13 = (int)++v15 < max_length;
      if ( (int)v15 >= max_length )
        return v13;
    }
    v24 = 0;
    while ( v23 != v24 )
    {
      v25 = v14->m_Items[v24];
      if ( !v25 )
        goto LABEL_25;
      if ( v22 == v25->fields.svtId )
        return v13;
      if ( v23 == ++v24 )
        goto LABEL_23;
    }
LABEL_26:
    sub_1BC326C(Instance, v10, v11);
  }
  return v13;
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
  bool v12; // w8
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  UserServantEntity_array *AllList; // x22
  bool IsSatisfySvtGroupCondition; // w0

  if ( (byte_4B00FB2 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BC3008(&VoiceCondType_TypeInfo, v10);
    byte_4B00FB2 = 1;
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
        v12 = condValue == targetValue;
      }
      else
      {
        if ( type != 5 )
          return 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_1BC3264(Instance, v14);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v15);
LABEL_21:
        v12 = IsSatisfySvtGroupCondition;
      }
LABEL_22:
      result = 1;
      *isPlayable = v12;
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
          v12 = condValue <= targetValue;
          goto LABEL_22;
        case 22:
        case 26:
          v12 = condValue >= targetValue;
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall VoiceCondType__TryIsSatisfyCondition(bool *isPlayable, int32_t type, const MethodInfo *method)
{
  bool result; // w0
  VoiceCondType_c *v6; // x0
  bool IsSatisfyEventCondition; // w0
  VoiceCondType_c *v8; // x0
  bool v9; // w8

  if ( (byte_4B00FB0 & 1) == 0 )
  {
    sub_1BC3008(&VoiceCondType_TypeInfo, *(_QWORD *)&type);
    byte_4B00FB0 = 1;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v17; // w8

  if ( (byte_4B00FB1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BC3008(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1BC3008(&VoiceCondType_TypeInfo, v9);
    byte_4B00FB1 = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v13);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_28:
        sub_1BC3264(Instance, v12);
      IsSatisfyQuestClearCondition = QuestTree__IsWarNew((QuestTree_o *)Instance, condValue, 0LL);
      goto LABEL_26;
    case 13:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_22:
      v17 = Condition;
      goto LABEL_27;
    case 14:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_26:
      v17 = !IsSatisfyQuestClearCondition;
LABEL_27:
      result = 1;
      *isPlayable = v17;
      break;
    default:
      return result;
  }
  return result;
}
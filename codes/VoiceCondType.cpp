void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  struct GameEventType_TYPE_array *v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B15227 & 1) == 0 )
  {
    sub_1BCA7E0(&GameEventType_TYPE___TypeInfo, v1, v2);
    sub_1BCA7E0(&VoiceCondType_TypeInfo, v3, v4);
    byte_4B15227 = 1;
  }
  v5 = (struct GameEventType_TYPE_array *)sub_1BCA888(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v5 )
    sub_1BCAA3C(0LL, v6);
  max_length = v5->max_length;
  if ( !max_length || (v5->m_Items[1] = 12, max_length == 1) )
    sub_1BCAA44(v5, v5);
  v5->m_Items[2] = 22;
  VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE = v5;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)VoiceCondType_TypeInfo->static_fields,
    (int64_t)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall VoiceCondType___ctor(VoiceCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall VoiceCondType__IsSatisfyBirthdayCondition(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v6; // x1
  int64_t birthDay; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t Year; // w1
  int32_t Month; // w19
  __int64 v12; // x1
  int32_t Day; // w19
  uint64_t v15; // [xsp+0h] [xbp-30h] BYREF
  uint64_t v16; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8
  System_DateTime_o v20; // 0:x0.8
  System_DateTime_o v21; // 0:x0.8
  System_DateTime_o v22; // 0:x0.8
  System_DateTime_o v23; // 0:x0.8
  System_DateTime_o v24; // 0:x0.8
  System_DateTime_o v25; // 0:x0.8

  if ( (byte_4B1521D & 1) == 0 )
  {
    sub_1BCA7E0(&System_DateTime_TypeInfo, v1, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v3, v4);
    byte_4B1521D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BCAA3C(0LL, v6);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  v16 = NetworkManager__getDateTime_39270164(birthDay, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v8);
  v18.fields._dateData = (uint64_t)&v16;
  if ( System_DateTime__get_Month(v18, 0LL) == 2 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9);
    v19.fields._dateData = (uint64_t)&v16;
    if ( System_DateTime__get_Day(v19, 0LL) == 29 )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9);
      v20.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v20, 0LL);
      v15 = 0LL;
      v21.fields._dateData = (uint64_t)&v15;
      System_DateTime___ctor_63079428(v21, Year, 2, 29, 0LL);
      v16 = v15;
    }
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v9);
  v22.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v22, 0LL);
  v23.fields._dateData = (uint64_t)&v16;
  if ( Month != System_DateTime__get_Month(v23, 0LL) )
    return 0;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v12);
  v24.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v24, 0LL);
  v25.fields._dateData = (uint64_t)&v16;
  return Day == System_DateTime__get_Day(v25, 0LL);
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

  if ( (byte_4B15226 & 1) == 0 )
  {
    sub_1BCA7E0(&VoiceCondType_TypeInfo, *(_QWORD *)&condValue, *(_QWORD *)&targetValue);
    byte_4B15226 = 1;
  }
  result = 0;
  isPlayable[0] = 0;
  switch ( type )
  {
    case 1:
    case 2:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&condValue);
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
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&condValue);
      VoiceCondType__TryIsSatisfyCompCondition(isPlayable, type, condValue, targetValue, v4);
      goto LABEL_14;
    case 4:
    case 6:
    case 7:
    case 12:
    case 13:
    case 14:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&condValue);
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
  if ( condValue <= 0 )
    targetValue = 0;
  return targetValue == condValue;
}


bool __fastcall VoiceCondType__IsSatisfyEventCondition(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  EventMaster_o *v21; // x19
  System_Collections_Generic_List_object__o *EnableEntityLists; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x19
  _BOOL8 isEventVoicePlay; // x0
  __int64 v25; // x1
  bool v26; // w20
  Il2CppObject *current; // x24
  void *monitor; // x8
  int v29; // w25
  unsigned int v30; // w26
  __int64 v31; // x8
  Il2CppObject *Entity; // x0
  __int64 v33; // x1
  int v35; // w19
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1521E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v3, v4);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&VoiceCondType_TypeInfo, v17, v18);
    byte_4B1521E = 1;
  }
  memset(&v38, 0, sizeof(v38));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  v21 = (EventMaster_o *)Instance;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v20);
  if ( !v21
    || (EnableEntityLists = (System_Collections_Generic_List_object__o *)EventMaster__GetEnableEntityLists(
                                                                           v21,
                                                                           VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                                                                           0,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_29:
    sub_1BCAA3C(Instance, v20);
  }
  v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    EnableEntityLists,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
LABEL_10:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v38,
                         (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    v26 = isEventVoicePlay;
    if ( !isEventVoicePlay )
    {
      v35 = 8;
      goto LABEL_25;
    }
    current = v38.fields._current;
    if ( v38.fields._current )
    {
      monitor = v38.fields._current[1].monitor;
      if ( monitor )
      {
        v29 = (_DWORD)monitor - 1;
        if ( (int)monitor >= 1 )
          break;
      }
    }
  }
  if ( !(_DWORD)monitor )
LABEL_22:
    sub_1BCAA44(isEventVoicePlay, v25);
  v30 = 0;
  while ( 1 )
  {
    v31 = *((_QWORD *)&current[2].klass + (int)v30);
    if ( !v31 )
      sub_1BCAA3C(isEventVoicePlay, v25);
    if ( !v23 )
      sub_1BCAA3C(isEventVoicePlay, v25);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v23,
               *(_DWORD *)(v31 + 16),
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_1BCAA3C(0LL, v33);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay((EventDetailEntity_o *)Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( v29 == v30++ )
      goto LABEL_10;
    if ( v30 >= LODWORD(current[1].monitor) )
      goto LABEL_22;
  }
  v35 = 7;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return v26 && v35 == 7;
}


bool __fastcall VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppClass *klass; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15220 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B15220 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               condValue,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1BCAA3C(Instance, v11);
  klass = entity[6].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11);
  return (__int64)klass <= NetworkManager__getTime(0LL);
}


bool __fastcall VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1521F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1521F = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, (int64_t)Instance, condValue, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_12:
    sub_1BCAA3C(Instance, v9);
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
  if ( (byte_4B15221 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtList, method);
    byte_4B15221 = 1;
  }
  if ( !usrSvtList )
LABEL_17:
    sub_1BCAA3C(*(_QWORD *)&condValue, usrSvtList);
  max_length = usrSvtList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; (int)i < max_length; v5 = (int)++i < max_length )
    {
      if ( i >= max_length )
LABEL_16:
        sub_1BCAA44(*(_QWORD *)&condValue, usrSvtList);
      v7 = &usrSvtList->obj.klass + (int)i;
      v10 = v7[4];
      v9 = v7 + 4;
      v8 = v10;
      if ( !v10 )
        goto LABEL_17;
      declaringType = v8->_1.declaringType;
      parent = v8->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtList);
      *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v16.fields.fakeValue = parent;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
      *(_QWORD *)&condValue = System_Int32__Equals_63206656((int32_t)&v15, v13, 0LL);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  ServantGroupEntity_array *Instance; // x0
  __int64 v12; // x1
  signed int max_length; // w8
  bool v14; // w24
  ServantGroupEntity_array *v15; // x21
  il2cpp_array_size_t v16; // w25
  Il2CppClass **v17; // x27
  Il2CppClass *v18; // x8
  ServantGroupEntity_array **v19; // x27
  Il2CppClass *v20; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v23; // w22
  int v24; // w8
  int v25; // w9
  ServantGroupEntity_o *v26; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B15222 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&targetValue, usrSvtList);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    byte_4B15222 = 1;
  }
  Instance = (ServantGroupEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantGroupEntity_array *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condValue, 0LL), !usrSvtList) )
  {
LABEL_25:
    sub_1BCAA3C(Instance, v12);
  }
  max_length = usrSvtList->max_length;
  v14 = max_length > 0;
  if ( max_length >= 1 )
  {
    v15 = Instance;
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        goto LABEL_26;
      v17 = &usrSvtList->obj.klass + (int)v16;
      v20 = v17[4];
      v19 = (ServantGroupEntity_array **)(v17 + 4);
      v18 = v20;
      if ( !v20 )
        goto LABEL_25;
      declaringType = v18->_1.declaringType;
      parent = v18->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
      *(_QWORD *)&v28.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v28.fields.fakeValue = parent;
      Instance = (ServantGroupEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                               v28,
                                               0LL);
      if ( v16 >= usrSvtList->max_length )
        goto LABEL_26;
      v23 = (int)Instance;
      Instance = *v19;
      if ( !*v19 )
        goto LABEL_25;
      Instance = (ServantGroupEntity_array *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
      if ( v23 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v15 )
          goto LABEL_25;
        v24 = v15->max_length;
        if ( v24 >= 1 )
          break;
      }
LABEL_23:
      max_length = usrSvtList->max_length;
      v14 = (int)++v16 < max_length;
      if ( (int)v16 >= max_length )
        return v14;
    }
    v25 = 0;
    while ( v24 != v25 )
    {
      v26 = v15->m_Items[v25];
      if ( !v26 )
        goto LABEL_25;
      if ( v23 == v26->fields.svtId )
        return v14;
      if ( v24 == ++v25 )
        goto LABEL_23;
    }
LABEL_26:
    sub_1BCAA44(Instance, v12);
  }
  return v14;
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  bool result; // w0
  char IsSatisfySvtGroupCondition; // w8
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  const MethodInfo *v18; // x3
  UserServantEntity_array *AllList; // x22
  bool v20; // zf
  int32_t v21; // w8

  if ( (byte_4B15225 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type, *(_QWORD *)&condValue);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&VoiceCondType_TypeInfo, v11, v12);
    byte_4B15225 = 1;
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
        v20 = condValue == targetValue;
LABEL_16:
        IsSatisfySvtGroupCondition = v20;
      }
      else
      {
        if ( type != 5 )
          return 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_1BCAA3C(Instance, v16);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v17);
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v18);
      }
LABEL_21:
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
          goto LABEL_15;
        case 17:
        case 20:
        case 25:
          IsSatisfySvtGroupCondition = condValue <= targetValue;
          goto LABEL_21;
        case 22:
        case 26:
          IsSatisfySvtGroupCondition = condValue >= targetValue;
          goto LABEL_21;
        case 23:
          if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type);
          if ( condValue <= 0 )
            v21 = 0;
          else
            v21 = targetValue;
          v20 = v21 == condValue;
          goto LABEL_16;
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

  if ( (byte_4B15223 & 1) == 0 )
  {
    sub_1BCA7E0(&VoiceCondType_TypeInfo, *(_QWORD *)&type, method);
    byte_4B15223 = 1;
  }
  *isPlayable = 0;
  if ( type == 2 )
  {
    v8 = VoiceCondType_TypeInfo;
    if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type);
    IsSatisfyEventCondition = VoiceCondType__IsSatisfyEventCondition((const MethodInfo *)v8);
  }
  else
  {
    result = 0;
    if ( type != 1 )
      return result;
    v6 = VoiceCondType_TypeInfo;
    if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  bool result; // w0
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v21; // w8

  if ( (byte_4B15224 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type, *(_QWORD *)&condValue);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v9, v10);
    sub_1BCA7E0(&VoiceCondType_TypeInfo, v11, v12);
    byte_4B15224 = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v16);
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v17);
      goto LABEL_22;
    case 6:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type);
      Condition = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
      goto LABEL_22;
    case 7:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type);
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
      goto LABEL_26;
    case 12:
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_28:
        sub_1BCAA3C(Instance, v15);
      IsSatisfyQuestClearCondition = QuestTree__IsWarNew((QuestTree_o *)Instance, condValue, 0LL);
      goto LABEL_26;
    case 13:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type);
      Condition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_22:
      v21 = Condition;
      goto LABEL_27;
    case 14:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type);
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_26:
      v21 = !IsSatisfyQuestClearCondition;
LABEL_27:
      result = 1;
      *isPlayable = v21;
      break;
    default:
      return result;
  }
  return result;
}
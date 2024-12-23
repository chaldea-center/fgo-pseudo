void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct GameEventType_TYPE_array *v3; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B65BD8 & 1) == 0 )
  {
    sub_1BE4ACC(&GameEventType_TYPE___TypeInfo, v1);
    sub_1BE4ACC(&VoiceCondType_TypeInfo, v2);
    byte_4B65BD8 = 1;
  }
  v3 = (struct GameEventType_TYPE_array *)sub_1BE4B74(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v3 )
    sub_1BE4D28(0LL, v4);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 12, max_length == 1) )
    sub_1BE4D30(v3, v3);
  v3->m_Items[2] = 22;
  VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE = v3;
  sub_1BE4A70((PartyOrganizationUtility_o *)VoiceCondType_TypeInfo->static_fields, (int64_t)v3, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B65BCD & 1) == 0 )
  {
    sub_1BE4ACC(&System_DateTime_TypeInfo, v1);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v2);
    byte_4B65BCD = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1BE4D28(0LL, v4);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  v11 = NetworkManager__getDateTime_39465728(birthDay, 0LL).fields._dateData;
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
      System_DateTime___ctor_63377016(v16, Year, 2, 29, 0LL);
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

  if ( (byte_4B65BD7 & 1) == 0 )
  {
    sub_1BE4ACC(&VoiceCondType_TypeInfo, *(_QWORD *)&condValue);
    byte_4B65BD7 = 1;
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

  if ( (byte_4B65BD3 & 1) == 0 )
  {
    sub_1BE4ACC(&ImageLimitCount_TypeInfo, *(_QWORD *)&targetValue);
    byte_4B65BD3 = 1;
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
  bool v17; // w20
  Il2CppObject *current; // x24
  void *monitor; // x8
  int v20; // w25
  unsigned int v21; // w26
  __int64 v22; // x8
  Il2CppObject *Entity; // x0
  __int64 v24; // x1
  int v26; // w19
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B65BCE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_1BE4ACC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1BE4ACC(&VoiceCondType_TypeInfo, v9);
    byte_4B65BCE = 1;
  }
  memset(&v29, 0, sizeof(v29));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  v12 = (EventMaster_o *)Instance;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  if ( !v12
    || (EnableEntityLists = (System_Collections_Generic_List_object__o *)EventMaster__GetEnableEntityLists(
                                                                           v12,
                                                                           VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                                                                           0,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_29:
    sub_1BE4D28(Instance, v11);
  }
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    EnableEntityLists,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
LABEL_10:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v29,
                         (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    v17 = isEventVoicePlay;
    if ( !isEventVoicePlay )
    {
      v26 = 8;
      goto LABEL_25;
    }
    current = v29.fields._current;
    if ( v29.fields._current )
    {
      monitor = v29.fields._current[1].monitor;
      if ( monitor )
      {
        v20 = (_DWORD)monitor - 1;
        if ( (int)monitor >= 1 )
          break;
      }
    }
  }
  if ( !(_DWORD)monitor )
LABEL_22:
    sub_1BE4D30(isEventVoicePlay, v16);
  v21 = 0;
  while ( 1 )
  {
    v22 = *((_QWORD *)&current[2].klass + (int)v21);
    if ( !v22 )
      sub_1BE4D28(isEventVoicePlay, v16);
    if ( !v14 )
      sub_1BE4D28(isEventVoicePlay, v16);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v14,
               *(_DWORD *)(v22 + 16),
               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_1BE4D28(0LL, v24);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay((EventDetailEntity_o *)Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( v20 == v21++ )
      goto LABEL_10;
    if ( v21 >= LODWORD(current[1].monitor) )
      goto LABEL_22;
  }
  v26 = 7;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return v17 && v26 == 7;
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

  if ( (byte_4B65BD0 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v4);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4B65BD0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               condValue,
                               (const MethodInfo_31FD818 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1BE4D28(Instance, v7);
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

  if ( (byte_4B65BCF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1BE4ACC(&NetworkManager_TypeInfo, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B65BCF = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B61717 )
  {
    sub_1BE4ACC(&NetworkManager_TypeInfo, v6);
    byte_4B61717 = 1;
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
    sub_1BE4D28(Instance, v6);
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
  if ( (byte_4B65BD1 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtList);
    byte_4B65BD1 = 1;
  }
  if ( !usrSvtList )
LABEL_17:
    sub_1BE4D28(*(_QWORD *)&condValue, usrSvtList);
  max_length = usrSvtList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; (int)i < max_length; v5 = (int)++i < max_length )
    {
      if ( i >= max_length )
LABEL_16:
        sub_1BE4D30(*(_QWORD *)&condValue, usrSvtList);
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(v16, 0LL);
      *(_QWORD *)&condValue = System_Int32__Equals_63504244((int32_t)&v15, v13, 0LL);
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
  signed int max_length; // w8
  bool v12; // w24
  ServantGroupEntity_array *v13; // x21
  il2cpp_array_size_t v14; // w25
  Il2CppClass **v15; // x27
  Il2CppClass *v16; // x8
  ServantGroupEntity_array **v17; // x27
  Il2CppClass *v18; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v21; // w22
  int v22; // w8
  int v23; // w9
  ServantGroupEntity_o *v24; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B65BD2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&targetValue);
    sub_1BE4ACC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B65BD2 = 1;
  }
  Instance = (ServantGroupEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantGroupEntity_array *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condValue, 0LL), !usrSvtList) )
  {
LABEL_25:
    sub_1BE4D28(Instance, v10);
  }
  max_length = usrSvtList->max_length;
  v12 = max_length > 0;
  if ( max_length >= 1 )
  {
    v13 = Instance;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        goto LABEL_26;
      v15 = &usrSvtList->obj.klass + (int)v14;
      v18 = v15[4];
      v17 = (ServantGroupEntity_array **)(v15 + 4);
      v16 = v18;
      if ( !v18 )
        goto LABEL_25;
      declaringType = v16->_1.declaringType;
      parent = v16->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v26.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v26.fields.fakeValue = parent;
      Instance = (ServantGroupEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47299060(
                                               v26,
                                               0LL);
      if ( v14 >= usrSvtList->max_length )
        goto LABEL_26;
      v21 = (int)Instance;
      Instance = *v17;
      if ( !*v17 )
        goto LABEL_25;
      Instance = (ServantGroupEntity_array *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0LL);
      if ( v21 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v13 )
          goto LABEL_25;
        v22 = v13->max_length;
        if ( v22 >= 1 )
          break;
      }
LABEL_23:
      max_length = usrSvtList->max_length;
      v12 = (int)++v14 < max_length;
      if ( (int)v14 >= max_length )
        return v12;
    }
    v23 = 0;
    while ( v22 != v23 )
    {
      v24 = v13->m_Items[v23];
      if ( !v24 )
        goto LABEL_25;
      if ( v21 == v24->fields.svtId )
        return v12;
      if ( v22 == ++v23 )
        goto LABEL_23;
    }
LABEL_26:
    sub_1BE4D30(Instance, v10);
  }
  return v12;
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

  if ( (byte_4B65BD6 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1BE4ACC(&VoiceCondType_TypeInfo, v10);
    byte_4B65BD6 = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_1BE4D28(Instance, v14);
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

  if ( (byte_4B65BD4 & 1) == 0 )
  {
    sub_1BE4ACC(&VoiceCondType_TypeInfo, *(_QWORD *)&type);
    byte_4B65BD4 = 1;
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

  if ( (byte_4B65BD5 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1BE4ACC(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1BE4ACC(&VoiceCondType_TypeInfo, v9);
    byte_4B65BD5 = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_UserServantMaster___);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38291E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_28:
        sub_1BE4D28(Instance, v12);
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
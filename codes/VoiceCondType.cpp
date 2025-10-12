void VoiceCondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int v4; // w8

  if ( (byte_4C36917 & 1) == 0 )
  {
    sub_1C32C20(&GameEventType_TYPE___TypeInfo);
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C36917 = 1;
  }
  v1 = sub_1C32CC8(GameEventType_TYPE___TypeInfo, 2);
  if ( !v1 )
    sub_1C32E7C(0);
  v4 = *(_DWORD *)(v1 + 24);
  if ( !v4 || (*(_DWORD *)(v1 + 32) = 12, v4 == 1) )
    sub_1C32E84(v1);
  *(_DWORD *)(v1 + 36) = 22;
  VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE = (struct GameEventType_TYPE_array *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)VoiceCondType_TypeInfo->static_fields, v1, v2, v3);
}


void VoiceCondType___ctor(VoiceCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool VoiceCondType__IsSatisfyBirthdayCondition(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int64_t birthDay; // x19
  System_DateTime_o v3; // x0
  System_DateTime_o v4; // x0
  System_DateTime_o v5; // x0
  int32_t Year; // w1
  System_DateTime_o v7; // x0
  System_DateTime_o v8; // x0
  int32_t Month; // w19
  System_DateTime_o v10; // x0
  System_DateTime_o v11; // x0
  int32_t Day; // w19
  System_DateTime_o v13; // x0
  uint64_t v15; // [xsp+0h] [xbp-30h] BYREF
  uint64_t v16; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4C3690C & 1) == 0 )
  {
    sub_1C32C20(&System_DateTime_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3690C = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_1C32E7C(0);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  v16 = NetworkManager__getDateTime_41267668(birthDay, 0).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v3.fields._dateData = (uint64_t)&v16;
  if ( System_DateTime__get_Month(v3, 0) == 2 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v4.fields._dateData = (uint64_t)&v16;
    if ( System_DateTime__get_Day(v4, 0) == 29 )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v5.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v5, 0);
      v15 = 0;
      v7.fields._dateData = (uint64_t)&v15;
      System_DateTime___ctor_64904320(v7, Year, 2, 29, 0);
      v16 = v15;
    }
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v8.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v8, 0);
  v10.fields._dateData = (uint64_t)&v16;
  if ( Month != System_DateTime__get_Month(v10, 0) )
    return 0;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v11.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v11, 0);
  v13.fields._dateData = (uint64_t)&v16;
  return Day == System_DateTime__get_Day(v13, 0);
}


// local variable allocation has failed, the output may be wrong!
bool VoiceCondType__IsSatisfyCondition(int32_t type, int32_t condValue, int32_t targetValue, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool result; // w0
  bool isPlayable[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C36916 & 1) == 0 )
  {
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C36916 = 1;
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
    case 41:
    case 42:
    case 43:
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


bool VoiceCondType__IsSatisfyCostumeCondition(int32_t condValue, int32_t targetValue, const MethodInfo *method)
{
  int32_t v5; // w8

  if ( (byte_4C36912 & 1) == 0 )
  {
    sub_1C32C20(&ImageLimitCount_TypeInfo);
    byte_4C36912 = 1;
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


bool VoiceCondType__IsSatisfyEventCondition(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  EventMaster_o *v2; // x19
  System_Collections_Generic_List_object__o *EnableEntityLists; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  _BOOL8 isEventVoicePlay; // x0
  bool v6; // w20
  Il2CppObject *current; // x24
  void *monitor; // x8
  int v9; // w25
  unsigned int v10; // w26
  __int64 v11; // x8
  Il2CppObject *Entity; // x0
  int v14; // w19
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C3690D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C3690D = 1;
  }
  memset(&v17, 0, sizeof(v17));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  v2 = (EventMaster_o *)Instance;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  if ( !v2
    || (EnableEntityLists = (System_Collections_Generic_List_object__o *)EventMaster__GetEnableEntityLists(
                                                                           v2,
                                                                           VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                                                                           0,
                                                                           0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_29:
    sub_1C32E7C(Instance);
  }
  v4 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    EnableEntityLists,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
LABEL_10:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v17,
                         (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    v6 = isEventVoicePlay;
    if ( !isEventVoicePlay )
    {
      v14 = 8;
      goto LABEL_25;
    }
    current = v17.fields._current;
    if ( v17.fields._current )
    {
      monitor = v17.fields._current[1].monitor;
      if ( monitor )
      {
        v9 = (_DWORD)monitor - 1;
        if ( (int)monitor >= 1 )
          break;
      }
    }
  }
  if ( !(_DWORD)monitor )
LABEL_22:
    sub_1C32E84(isEventVoicePlay);
  v10 = 0;
  while ( 1 )
  {
    v11 = *((_QWORD *)&current[2].klass + (int)v10);
    if ( !v11 )
      sub_1C32E7C(isEventVoicePlay);
    if ( !v4 )
      sub_1C32E7C(isEventVoicePlay);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v4,
               *(_DWORD *)(v11 + 16),
               (const MethodInfo_3396838 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C32E7C(0);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay((EventDetailEntity_o *)Entity, 0);
    if ( isEventVoicePlay )
      break;
    if ( v9 == v10++ )
      goto LABEL_10;
    if ( v10 >= LODWORD(current[1].monitor) )
      goto LABEL_22;
  }
  v14 = 7;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return v6 && v14 == 7;
}


bool VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3690F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3690F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               condValue,
                               (const MethodInfo_3396884 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1C32E7C(Instance);
  klass = entity[6].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return (__int64)klass <= NetworkManager__getTime(0);
}


bool VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3690E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3690E = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
         0) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0) > 0;
LABEL_15:
    sub_1C32E7C(Instance);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool VoiceCondType__IsSatisfySvtGetCondition(
        int32_t condValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  int max_length; // w8
  bool v5; // w22
  int i; // w23
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
  if ( (byte_4C36910 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C36910 = 1;
  }
  if ( !usrSvtList )
LABEL_17:
    sub_1C32E7C(*(_QWORD *)&condValue);
  max_length = usrSvtList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = ++i < max_length )
    {
      if ( i >= (unsigned int)max_length )
LABEL_16:
        sub_1C32E84(*(_QWORD *)&condValue);
      v7 = &usrSvtList->obj.klass + i;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v16, 0);
      *(_QWORD *)&condValue = System_Int32__Equals_65028480((int32_t)&v15, v13, 0);
      if ( (condValue & 1) != 0 )
      {
        if ( (unsigned int)i >= LODWORD(usrSvtList->max_length) )
          goto LABEL_16;
        *(_QWORD *)&condValue = *v9;
        if ( !*v9 )
          goto LABEL_17;
        *(_QWORD *)&condValue = UserServantEntity__IsEventJoin(*(UserServantEntity_o **)&condValue, 0);
        if ( (condValue & 1) == 0 )
          return v5;
      }
      max_length = usrSvtList->max_length;
    }
  }
  return v5;
}


bool VoiceCondType__IsSatisfySvtGroupCondition(
        int32_t condValue,
        int32_t targetValue,
        UserServantEntity_array *usrSvtList,
        const MethodInfo *method)
{
  ServantGroupEntity_array *Instance; // x0
  int max_length; // w8
  bool v9; // w24
  ServantGroupEntity_array *v10; // x21
  int v11; // w25
  Il2CppClass **v12; // x27
  Il2CppClass *v13; // x8
  ServantGroupEntity_array **v14; // x27
  Il2CppClass *v15; // t1
  Il2CppClass *parent; // x22
  Il2CppClass *declaringType; // x23
  int v18; // w22
  int v19; // w8
  int v20; // w9
  ServantGroupEntity_o *v21; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4C36911 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C36911 = 1;
  }
  Instance = (ServantGroupEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantGroupEntity_array *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condValue, 0), !usrSvtList) )
  {
LABEL_25:
    sub_1C32E7C(Instance);
  }
  max_length = usrSvtList->max_length;
  v9 = max_length > 0;
  if ( max_length >= 1 )
  {
    v10 = Instance;
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        goto LABEL_26;
      v12 = &usrSvtList->obj.klass + v11;
      v15 = v12[4];
      v14 = (ServantGroupEntity_array **)(v12 + 4);
      v13 = v15;
      if ( !v15 )
        goto LABEL_25;
      declaringType = v13->_1.declaringType;
      parent = v13->_1.parent;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v23.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v23.fields.fakeValue = parent;
      Instance = (ServantGroupEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v23, 0);
      if ( (unsigned int)v11 >= LODWORD(usrSvtList->max_length) )
        goto LABEL_26;
      v18 = (int)Instance;
      Instance = *v14;
      if ( !*v14 )
        goto LABEL_25;
      Instance = (ServantGroupEntity_array *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
      if ( v18 != targetValue && ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_25;
        v19 = v10->max_length;
        if ( v19 >= 1 )
          break;
      }
LABEL_23:
      max_length = usrSvtList->max_length;
      v9 = ++v11 < max_length;
      if ( v11 >= max_length )
        return v9;
    }
    v20 = 0;
    while ( v19 != v20 )
    {
      v21 = v10->m_Items[v20];
      if ( !v21 )
        goto LABEL_25;
      if ( v18 == v21->fields.svtId )
        return v9;
      if ( v19 == ++v20 )
        goto LABEL_23;
    }
LABEL_26:
    sub_1C32E84(Instance);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool VoiceCondType__TryIsSatisfyCompCondition(
        bool *isPlayable,
        int32_t type,
        int32_t condValue,
        int32_t targetValue,
        const MethodInfo *method)
{
  bool result; // w0
  bool IsSatisfySvtGroupCondition; // w0
  Il2CppObject *Instance; // x0
  const MethodInfo *v12; // x3
  UserServantEntity_array *AllList; // x22
  bool v14; // w8

  if ( (byte_4C36915 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C36915 = 1;
  }
  result = 0;
  *isPlayable = 0;
  if ( condValue != -1 && targetValue != -1 )
  {
    if ( type <= 5 )
    {
      if ( type != 3 )
      {
        if ( type != 5 )
          return 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
        {
          sub_1C32E7C(Instance);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v12);
LABEL_18:
        v14 = IsSatisfySvtGroupCondition;
        goto LABEL_26;
      }
    }
    else
    {
      result = 0;
      if ( type <= 40 )
      {
        switch ( type )
        {
          case 9:
          case 24:
            goto LABEL_23;
          case 17:
          case 20:
          case 25:
            goto LABEL_24;
          case 22:
          case 26:
            goto LABEL_25;
          case 23:
            if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
            IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfyCostumeCondition(
                                           condValue,
                                           targetValue,
                                           *(const MethodInfo **)&condValue);
            goto LABEL_18;
          default:
            return result;
        }
        return result;
      }
      if ( type == 43 )
      {
LABEL_25:
        v14 = condValue >= targetValue;
        goto LABEL_26;
      }
      if ( type == 42 )
      {
LABEL_24:
        v14 = condValue <= targetValue;
        goto LABEL_26;
      }
      if ( type != 41 )
        return result;
    }
LABEL_23:
    v14 = condValue == targetValue;
LABEL_26:
    result = 1;
    *isPlayable = v14;
  }
  return result;
}


bool VoiceCondType__TryIsSatisfyCondition(bool *isPlayable, int32_t type, const MethodInfo *method)
{
  bool result; // w0
  VoiceCondType_c *v6; // x0
  bool IsSatisfyEventCondition; // w0
  VoiceCondType_c *v8; // x0
  bool v9; // w8

  if ( (byte_4C36913 & 1) == 0 )
  {
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C36913 = 1;
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
bool VoiceCondType__TryIsSatisfyValueCondition(
        bool *isPlayable,
        int32_t type,
        int32_t condValue,
        const MethodInfo *method)
{
  bool result; // w0
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v13; // w8

  if ( (byte_4C36914 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&VoiceCondType_TypeInfo);
    byte_4C36914 = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v9);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_28:
        sub_1C32E7C(Instance);
      IsSatisfyQuestClearCondition = QuestTree__IsWarNew((QuestTree_o *)Instance, condValue, 0);
      goto LABEL_26;
    case 13:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_22:
      v13 = Condition;
      goto LABEL_27;
    case 14:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_26:
      v13 = !IsSatisfyQuestClearCondition;
LABEL_27:
      result = 1;
      *isPlayable = v13;
      break;
    default:
      return result;
  }
  return result;
}
void VoiceCondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  int v9; // w8
  __int64 v10; // x1
  MissionNaviTransitionBoardItem_o *static_fields; // x0

  if ( (byte_596F700 & 1) == 0 )
  {
    sub_2213A60(&GameEventType_TYPE___TypeInfo);
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_596F700 = 1;
  }
  v1 = sub_2213B20(GameEventType_TYPE___TypeInfo, 2);
  if ( !v1 )
    sub_2213CDC(0, v2);
  v9 = *(_DWORD *)(v1 + 24);
  v10 = v1;
  if ( !v9 || (*(_DWORD *)(v1 + 32) = 12, v9 == 1) )
    sub_2213CE4(v1);
  VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE = (struct GameEventType_TYPE_array *)v1;
  static_fields = (MissionNaviTransitionBoardItem_o *)VoiceCondType_TypeInfo->static_fields;
  *(_DWORD *)(v10 + 36) = 22;
  sub_2213A04(static_fields, v10, v3, v4, v5, v6, v7, v8);
}


void VoiceCondType___ctor(VoiceCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool VoiceCondType__IsSatisfyBirthdayCondition(const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  __int64 v2; // x1
  __int64 v3; // x2
  int64_t birthDay; // x19
  System_DateTime_o v5; // x1
  System_DateTime_o v6; // x2
  System_DateTime_o v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_DateTime_o v10; // x0
  System_DateTime_o v11; // x0
  int32_t Year; // w1
  System_DateTime_o v13; // x0
  System_DateTime_o v14; // x0
  int32_t Month; // w19
  System_DateTime_o v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_DateTime_o v19; // x0
  int32_t Day; // w19
  System_DateTime_o v21; // x0
  uint64_t v23; // [xsp+8h] [xbp-48h] BYREF
  int v24; // [xsp+18h] [xbp-38h]
  uint64_t v25; // [xsp+20h] [xbp-30h] BYREF
  uint64_t dateData; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_596F6F5 & 1) == 0 )
  {
    sub_2213A60(&System_DateTime_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596F6F5 = 1;
  }
  v25 = 0;
  dateData = 0;
  v24 = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    sub_2213CDC(0, v2);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v2, v3);
  dateData = NetworkManager__getServerDateTime(0).fields._dateData;
  v25 = NetworkManager__getDateTime_48347260(birthDay, 0).fields._dateData;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v5.fields._dateData, v6.fields._dateData);
  v7.fields._dateData = (uint64_t)&v25;
  if ( System_DateTime__get_Month(v7, 0) == 2 )
  {
    if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v8, v9);
    v10.fields._dateData = (uint64_t)&v25;
    if ( System_DateTime__get_Day(v10, 0) == 29 )
    {
      if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v8, v9);
      v11.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v11, 0);
      v23 = 0;
      v13.fields._dateData = (uint64_t)&v23;
      System_DateTime___ctor_77013752(v13, Year, 2, 29, 0);
      v25 = v23;
    }
  }
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v8, v9);
  v14.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v14, 0);
  v16.fields._dateData = (uint64_t)&v25;
  if ( Month != System_DateTime__get_Month(v16, 0) )
    return 0;
  if ( !*(&System_DateTime_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo, v17, v18);
  v19.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v19, 0);
  v21.fields._dateData = (uint64_t)&v25;
  return Day == System_DateTime__get_Day(v21, 0);
}


// local variable allocation has failed, the output may be wrong!
bool VoiceCondType__IsSatisfyCondition(int32_t type, int32_t condValue, int32_t targetValue, const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  bool result; // w0
  bool isPlayable[4]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F6FF & 1) == 0 )
  {
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_596F6FF = 1;
  }
  result = 0;
  isPlayable[0] = 0;
  switch ( type )
  {
    case 1:
    case 2:
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&condValue, *(_QWORD *)&targetValue);
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
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&condValue, *(_QWORD *)&targetValue);
      VoiceCondType__TryIsSatisfyCompCondition(isPlayable, type, condValue, targetValue, v4);
      goto LABEL_14;
    case 4:
    case 6:
    case 7:
    case 12:
    case 13:
    case 14:
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&condValue, *(_QWORD *)&targetValue);
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
bool VoiceCondType__IsSatisfyCostumeCondition(int32_t condValue, int32_t targetValue, const MethodInfo *method)
{
  int32_t v5; // w8

  if ( (byte_596F6FB & 1) == 0 )
  {
    sub_2213A60(&ImageLimitCount_TypeInfo);
    byte_596F6FB = 1;
  }
  if ( !*(&ImageLimitCount_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo, *(_QWORD *)&targetValue, method);
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
  __int64 v2; // x1
  __int64 v3; // x2
  EventMaster_o *v4; // x19
  System_Collections_Generic_List_object__o *EnableEntityLists; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19
  _BOOL8 isEventVoicePlay; // x0
  __int64 v8; // x1
  bool v9; // w20
  Il2CppObject *current; // x24
  void *monitor; // x25
  __int64 v12; // x26
  __int64 v13; // x8
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596F6F6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_596F6F6 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  v4 = (EventMaster_o *)Instance;
  if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v2, v3);
  if ( !v4
    || (EnableEntityLists = (System_Collections_Generic_List_object__o *)EventMaster__GetEnableEntityLists(
                                                                           v4,
                                                                           VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                                                                           0,
                                                                           0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_27:
    sub_2213CDC(Instance, v2);
  }
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    EnableEntityLists,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v18 = v17;
  v17.fields._list = 0;
  *(_QWORD *)&v17.fields._index = &v18;
LABEL_10:
  while ( 1 )
  {
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v18,
                         (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    v9 = isEventVoicePlay;
    if ( !isEventVoicePlay )
      break;
    current = v18.fields._current;
    if ( v18.fields._current )
    {
      monitor = v18.fields._current[1].monitor;
      if ( monitor )
      {
        if ( (int)monitor >= 1 )
        {
          v12 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v12 >= LODWORD(current[1].monitor) )
              sub_2213CE4(isEventVoicePlay);
            v13 = *((_QWORD *)&current[2].klass + v12);
            if ( !v13 )
              sub_2213CDC(isEventVoicePlay, v8);
            if ( !v6 )
              sub_2213CDC(isEventVoicePlay, v8);
            Entity = DataMasterBase_object__object__int___GetEntity(
                       v6,
                       *(_DWORD *)(v13 + 16),
                       (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !Entity )
              sub_2213CDC(0, v15);
            isEventVoicePlay = EventDetailEntity__isEventVoicePlay((EventDetailEntity_o *)Entity, 0);
            if ( isEventVoicePlay )
              goto LABEL_22;
            if ( (_DWORD)monitor == (_DWORD)++v12 )
              goto LABEL_10;
          }
        }
      }
    }
  }
LABEL_22:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return v9;
}


bool VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppClass *klass; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F6F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventMaster___);
    sub_2213A60(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F6F8 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               condValue,
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_2213CDC(Instance, v4);
  klass = entity[6].klass;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  return (__int64)klass <= NetworkManager__getTime(0);
}


bool VoiceCondType__IsSatisfyQuestClearCondition(int32_t condValue, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596F6F7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F6F7 = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
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
    sub_2213CDC(Instance, v4);
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
  int i; // w24
  Il2CppClass **v7; // x25
  Il2CppClass *v8; // x8
  _QWORD *v9; // x25
  Il2CppClass *v10; // t1
  Il2CppClass *declaringType; // x20
  Il2CppClass *parent; // x21
  int32_t v13; // w0
  int32_t v15; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v15 = condValue;
  if ( (byte_596F6F9 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596F6F9 = 1;
  }
  if ( !usrSvtList )
LABEL_16:
    sub_2213CDC(*(_QWORD *)&condValue, usrSvtList);
  max_length = usrSvtList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; v5 = ++i < max_length )
    {
      if ( i >= (unsigned int)max_length )
LABEL_17:
        sub_2213CE4(*(_QWORD *)&condValue);
      v7 = &usrSvtList->obj.klass + i;
      v10 = v7[4];
      v9 = v7 + 4;
      v8 = v10;
      if ( !v10 )
        goto LABEL_16;
      declaringType = v8->_1.declaringType;
      parent = v8->_1.parent;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtList, method);
      *(_QWORD *)&v16.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v16.fields.fakeValue = parent;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v16, 0);
      *(_QWORD *)&condValue = System_Int32__Equals_77138484((int32_t)&v15, v13, 0);
      if ( (condValue & 1) != 0 )
      {
        if ( (unsigned int)i >= LODWORD(usrSvtList->max_length) )
          goto LABEL_17;
        *(_QWORD *)&condValue = *v9;
        if ( !*v9 )
          goto LABEL_16;
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
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  bool v11; // w24
  ServantGroupEntity_array *v12; // x21
  int v13; // w26
  Il2CppClass **v14; // x27
  Il2CppClass *v15; // x8
  ServantGroupEntity_array **v16; // x27
  Il2CppClass *v17; // t1
  Il2CppClass *declaringType; // x22
  Il2CppClass *parent; // x23
  int v20; // w22
  int v21; // w8
  int v22; // w10
  ServantGroupEntity_o *v23; // x11
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_596F6FA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantGroupMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F6FA = 1;
  }
  Instance = (ServantGroupEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantGroupEntity_array *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condValue, 0), !usrSvtList) )
  {
LABEL_25:
    sub_2213CDC(Instance, v8);
  }
  max_length = usrSvtList->max_length;
  v11 = max_length > 0;
  if ( max_length >= 1 )
  {
    v12 = Instance;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)max_length )
        goto LABEL_26;
      v14 = &usrSvtList->obj.klass + v13;
      v17 = v14[4];
      v16 = (ServantGroupEntity_array **)(v14 + 4);
      v15 = v17;
      if ( !v17 )
        goto LABEL_25;
      declaringType = v15->_1.declaringType;
      parent = v15->_1.parent;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
      *(_QWORD *)&v25.fields.currentCryptoKey = declaringType;
      *(_QWORD *)&v25.fields.fakeValue = parent;
      Instance = (ServantGroupEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v25, 0);
      if ( (unsigned int)v13 >= LODWORD(usrSvtList->max_length) )
        goto LABEL_26;
      v20 = (int)Instance;
      Instance = *v16;
      if ( !*v16 )
        goto LABEL_25;
      Instance = (ServantGroupEntity_array *)UserServantEntity__IsEventJoin((UserServantEntity_o *)Instance, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && v20 != targetValue )
      {
        if ( !v12 )
          goto LABEL_25;
        v21 = v12->max_length;
        if ( v21 >= 1 )
          break;
      }
LABEL_23:
      max_length = usrSvtList->max_length;
      v11 = ++v13 < max_length;
      if ( v13 >= max_length )
        return v11;
    }
    v22 = 0;
    while ( v21 != v22 )
    {
      v23 = v12->m_Items[v22];
      if ( !v23 )
        goto LABEL_25;
      if ( v20 == v23->fields.svtId )
        return v11;
      if ( (v21 & ~(v21 >> 31)) == ++v22 )
        goto LABEL_23;
    }
LABEL_26:
    sub_2213CE4(Instance);
  }
  return v11;
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  UserServantEntity_array *AllList; // x22
  bool v17; // w8

  if ( (byte_596F6FE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_596F6FE = 1;
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
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0 )
        {
          sub_2213CDC(Instance, v12);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
        if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v13, v14);
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v15);
        goto LABEL_30;
      }
      goto LABEL_27;
    }
    result = 0;
    if ( type > 21 )
    {
      if ( (unsigned int)type > 0x2B )
        goto LABEL_11;
      if ( ((1LL << type) & 0x20001000000LL) == 0 )
      {
        if ( ((1LL << type) & 0x40002000000LL) == 0 )
        {
          if ( ((1LL << type) & 0x80004000000LL) != 0 )
          {
LABEL_29:
            IsSatisfySvtGroupCondition = condValue >= targetValue;
            goto LABEL_30;
          }
LABEL_11:
          if ( type != 22 )
          {
            if ( type != 23 )
              return result;
            if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&condValue);
            IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfyCostumeCondition(
                                           condValue,
                                           targetValue,
                                           *(const MethodInfo **)&condValue);
            goto LABEL_30;
          }
          goto LABEL_29;
        }
        goto LABEL_26;
      }
LABEL_27:
      IsSatisfySvtGroupCondition = condValue == targetValue;
      goto LABEL_30;
    }
    if ( type == 9 )
      goto LABEL_27;
    if ( type == 17 || type == 20 )
    {
LABEL_26:
      IsSatisfySvtGroupCondition = condValue <= targetValue;
LABEL_30:
      v17 = IsSatisfySvtGroupCondition;
      result = 1;
      *isPlayable = v17;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool VoiceCondType__TryIsSatisfyCondition(bool *isPlayable, int32_t type, const MethodInfo *method)
{
  bool result; // w0
  VoiceCondType_c *v6; // x0
  bool IsSatisfyEventCondition; // w0
  VoiceCondType_c *v8; // x0
  bool v9; // w8

  if ( (byte_596F6FC & 1) == 0 )
  {
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_596F6FC = 1;
  }
  *isPlayable = 0;
  if ( type == 2 )
  {
    v8 = VoiceCondType_TypeInfo;
    if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type, method);
    IsSatisfyEventCondition = VoiceCondType__IsSatisfyEventCondition((const MethodInfo *)v8);
  }
  else
  {
    result = 0;
    if ( type != 1 )
      return result;
    v6 = VoiceCondType_TypeInfo;
    if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type, method);
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
  bool IsWarNew; // w0
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UserServantEntity_array *AllList; // x21
  bool IsSatisfyEventEndCondition; // w0
  bool v15; // w8

  if ( (byte_596F6FD & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&VoiceCondType_TypeInfo);
    byte_596F6FD = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  if ( type > 11 )
  {
    if ( type != 12 )
    {
      if ( type == 13 )
      {
        if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&condValue);
        IsSatisfyEventEndCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
        goto LABEL_32;
      }
      if ( type != 14 )
        return result;
      if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&condValue);
      IsWarNew = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
      goto LABEL_25;
    }
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( Instance )
    {
      IsWarNew = QuestTree__IsWarNew((QuestTree_o *)Instance, condValue, 0);
      goto LABEL_25;
    }
LABEL_34:
    sub_2213CDC(Instance, v10);
  }
  if ( type == 4 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( Instance )
      {
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0);
        if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, v11, v12);
        IsSatisfyEventEndCondition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v12);
        goto LABEL_32;
      }
    }
    goto LABEL_34;
  }
  if ( type == 6 )
  {
    if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&condValue);
    IsSatisfyEventEndCondition = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
    goto LABEL_32;
  }
  if ( type != 7 )
    return result;
  if ( !*(&VoiceCondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo, *(_QWORD *)&type, *(_QWORD *)&condValue);
  IsWarNew = VoiceCondType__IsSatisfyQuestClearCondition(condValue, *(const MethodInfo **)&type);
LABEL_25:
  IsSatisfyEventEndCondition = !IsWarNew;
LABEL_32:
  v15 = IsSatisfyEventEndCondition;
  result = 1;
  *isPlayable = v15;
  return result;
}
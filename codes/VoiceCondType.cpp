void __fastcall VoiceCondType___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  struct GameEventType_TYPE_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  il2cpp_array_size_t max_length; // w8

  if ( (byte_49FB48A & 1) == 0 )
  {
    sub_1B640C8(&GameEventType_TYPE___TypeInfo, v1);
    sub_1B640C8(&VoiceCondType_TypeInfo, v2);
    byte_49FB48A = 1;
  }
  v3 = (struct GameEventType_TYPE_array *)sub_1B64170(GameEventType_TYPE___TypeInfo, 2LL);
  if ( !v3 )
    sub_1B64324(0LL);
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 12, max_length == 1) )
    sub_1B6432C(v3, v3);
  v3->m_Items[2] = 22;
  VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE = v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)VoiceCondType_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  int64_t birthDay; // x19
  int32_t Year; // w1
  int32_t Month; // w19
  int32_t Day; // w19
  uint64_t v9; // [xsp+0h] [xbp-30h] BYREF
  uint64_t v10; // [xsp+8h] [xbp-28h] BYREF
  uint64_t dateData; // [xsp+18h] [xbp-18h] BYREF
  System_DateTime_o v12; // 0:x0.8
  System_DateTime_o v13; // 0:x0.8
  System_DateTime_o v14; // 0:x0.8
  System_DateTime_o v15; // 0:x0.8
  System_DateTime_o v16; // 0:x0.8
  System_DateTime_o v17; // 0:x0.8
  System_DateTime_o v18; // 0:x0.8
  System_DateTime_o v19; // 0:x0.8

  if ( (byte_49FB480 & 1) == 0 )
  {
    sub_1B640C8(&System_DateTime_TypeInfo, v1);
    sub_1B640C8(&NetworkManager_TypeInfo, v2);
    byte_49FB480 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    sub_1B64324(0LL);
  birthDay = SelfUserGame->fields.birthDay;
  if ( birthDay < 1 )
    return 0;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  dateData = NetworkManager__getServerDateTime(0LL).fields._dateData;
  v10 = NetworkManager__getDateTime_38073412(birthDay, 0LL).fields._dateData;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v12.fields._dateData = (uint64_t)&v10;
  if ( System_DateTime__get_Month(v12, 0LL) == 2 )
  {
    if ( !System_DateTime_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
    v13.fields._dateData = (uint64_t)&v10;
    if ( System_DateTime__get_Day(v13, 0LL) == 29 )
    {
      if ( !System_DateTime_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
      v14.fields._dateData = (uint64_t)&dateData;
      Year = System_DateTime__get_Year(v14, 0LL);
      v9 = 0LL;
      v15.fields._dateData = (uint64_t)&v9;
      System_DateTime___ctor_62053268(v15, Year, 2, 29, 0LL);
      v10 = v9;
    }
  }
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v16.fields._dateData = (uint64_t)&dateData;
  Month = System_DateTime__get_Month(v16, 0LL);
  v17.fields._dateData = (uint64_t)&v10;
  if ( Month != System_DateTime__get_Month(v17, 0LL) )
    return 0;
  if ( !System_DateTime_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
  v18.fields._dateData = (uint64_t)&dateData;
  Day = System_DateTime__get_Day(v18, 0LL);
  v19.fields._dateData = (uint64_t)&v10;
  return Day == System_DateTime__get_Day(v19, 0LL);
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

  if ( (byte_49FB489 & 1) == 0 )
  {
    sub_1B640C8(&VoiceCondType_TypeInfo, *(_QWORD *)&condValue);
    byte_49FB489 = 1;
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
  Il2CppObject *Instance; // x0
  EventMaster_o *v11; // x19
  System_Collections_Generic_List_object__o *EnableEntityLists; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19
  _BOOL8 isEventVoicePlay; // x0
  __int64 v15; // x1
  bool v16; // w20
  Il2CppObject *current; // x24
  void *monitor; // x8
  int v19; // w25
  unsigned int v20; // w26
  __int64 v21; // x8
  Il2CppObject *Entity; // x0
  int v24; // w19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49FB481 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v1);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, v2);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventEntity____get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventEntity____GetEnumerator__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B640C8(&VoiceCondType_TypeInfo, v9);
    byte_49FB481 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  v11 = (EventMaster_o *)Instance;
  if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
  if ( !v11
    || (EnableEntityLists = (System_Collections_Generic_List_object__o *)EventMaster__GetEnableEntityLists(
                                                                           v11,
                                                                           VoiceCondType_TypeInfo->static_fields->EVENT_TYPES_VOICE,
                                                                           0,
                                                                           0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___),
        !EnableEntityLists) )
  {
LABEL_29:
    sub_1B64324(Instance);
  }
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    EnableEntityLists,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventEntity____GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
LABEL_10:
    isEventVoicePlay = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v27,
                         (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventEntity____MoveNext__);
    v16 = isEventVoicePlay;
    if ( !isEventVoicePlay )
    {
      v24 = 8;
      goto LABEL_25;
    }
    current = v27.fields._current;
    if ( v27.fields._current )
    {
      monitor = v27.fields._current[1].monitor;
      if ( monitor )
      {
        v19 = (_DWORD)monitor - 1;
        if ( (int)monitor >= 1 )
          break;
      }
    }
  }
  if ( !(_DWORD)monitor )
LABEL_22:
    sub_1B6432C(isEventVoicePlay, v15);
  v20 = 0;
  while ( 1 )
  {
    v21 = *((_QWORD *)&current[2].klass + (int)v20);
    if ( !v21 )
      sub_1B64324(isEventVoicePlay);
    if ( !v13 )
      sub_1B64324(isEventVoicePlay);
    Entity = DataMasterBase_object__object__int___GetEntity(
               v13,
               *(_DWORD *)(v21 + 16),
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    if ( !Entity )
      sub_1B64324(0LL);
    isEventVoicePlay = EventDetailEntity__isEventVoicePlay((EventDetailEntity_o *)Entity, 0LL);
    if ( isEventVoicePlay )
      break;
    if ( v19 == v20++ )
      goto LABEL_10;
    if ( v20 >= LODWORD(current[1].monitor) )
      goto LABEL_22;
  }
  v24 = 7;
LABEL_25:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventEntity____Dispose__);
  return v16 && v24 == 7;
}


bool __fastcall VoiceCondType__IsSatisfyEventEndCondition(int32_t condValue, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  Il2CppClass *klass; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FB483 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FB483 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_12;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               condValue,
                               (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_12:
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20
  UserQuestEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FB482 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FB482 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_12;
  if ( UserQuestMaster__TryGetEntity((UserQuestMaster_o *)MasterData_object, &entity, (int64_t)Instance, condValue, 0LL) )
  {
    Instance = (DataManager_o *)entity;
    if ( entity )
      return UserQuestEntity__getClearNum(entity, 0LL) > 0;
LABEL_12:
    sub_1B64324(Instance);
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
  if ( (byte_49FB484 & 1) == 0 )
  {
    *(_QWORD *)&condValue = sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, usrSvtList);
    byte_49FB484 = 1;
  }
  if ( !usrSvtList )
LABEL_17:
    sub_1B64324(*(_QWORD *)&condValue);
  max_length = usrSvtList->max_length;
  v5 = max_length > 0;
  if ( max_length >= 1 )
  {
    for ( i = 0; (int)i < max_length; v5 = (int)++i < max_length )
    {
      if ( i >= max_length )
LABEL_16:
        sub_1B6432C(*(_QWORD *)&condValue, usrSvtList);
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v16, 0LL);
      *(_QWORD *)&condValue = System_Int32__Equals_62180496((int32_t)&v15, v13, 0LL);
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

  if ( (byte_49FB485 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantGroupMaster___, *(_QWORD *)&targetValue);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_49FB485 = 1;
  }
  Instance = (ServantGroupEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (ServantGroupEntity_array *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantGroupMaster___)) == 0LL
    || (Instance = ServantGroupMaster__getEntityListById((ServantGroupMaster_o *)Instance, condValue, 0LL), !usrSvtList) )
  {
LABEL_25:
    sub_1B64324(Instance);
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
      Instance = (ServantGroupEntity_array *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
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
    sub_1B6432C(Instance, v10);
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
  char IsSatisfySvtGroupCondition; // w8
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x3
  UserServantEntity_array *AllList; // x22
  bool v16; // zf
  int32_t v17; // w8

  if ( (byte_49FB488 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B640C8(&VoiceCondType_TypeInfo, v10);
    byte_49FB488 = 1;
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
        v16 = condValue == targetValue;
LABEL_16:
        IsSatisfySvtGroupCondition = v16;
      }
      else
      {
        if ( type != 5 )
          return 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !Instance
          || (Instance = DataManager__GetMasterData_object_(
                           (DataManager_o *)Instance,
                           (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
        {
          sub_1B64324(Instance);
        }
        AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
        if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
        IsSatisfySvtGroupCondition = VoiceCondType__IsSatisfySvtGroupCondition(condValue, targetValue, AllList, v14);
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
            j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
          if ( condValue <= 0 )
            v17 = 0;
          else
            v17 = targetValue;
          v16 = v17 == condValue;
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

  if ( (byte_49FB486 & 1) == 0 )
  {
    sub_1B640C8(&VoiceCondType_TypeInfo, *(_QWORD *)&type);
    byte_49FB486 = 1;
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
  const MethodInfo *v12; // x2
  UserServantEntity_array *AllList; // x21
  bool Condition; // w0
  bool IsSatisfyQuestClearCondition; // w0
  bool v16; // w8

  if ( (byte_49FB487 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&type);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v8);
    sub_1B640C8(&VoiceCondType_TypeInfo, v9);
    byte_49FB487 = 1;
  }
  *isPlayable = 0;
  if ( condValue == -1 )
    return 0;
  result = 0;
  switch ( type )
  {
    case 4:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_28;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_28;
      AllList = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfySvtGetCondition(condValue, AllList, v12);
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
LABEL_28:
        sub_1B64324(Instance);
      IsSatisfyQuestClearCondition = QuestTree__IsWarNew((QuestTree_o *)Instance, condValue, 0LL);
      goto LABEL_26;
    case 13:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      Condition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_22:
      v16 = Condition;
      goto LABEL_27;
    case 14:
      if ( !VoiceCondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(VoiceCondType_TypeInfo);
      IsSatisfyQuestClearCondition = VoiceCondType__IsSatisfyEventEndCondition(condValue, *(const MethodInfo **)&type);
LABEL_26:
      v16 = !IsSatisfyQuestClearCondition;
LABEL_27:
      result = 1;
      *isPlayable = v16;
      break;
    default:
      return result;
  }
  return result;
}
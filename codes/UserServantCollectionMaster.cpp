void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AE1EB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
    sub_B52984(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
    byte_42AE1EB = 1;
  }
  v3 = (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)sub_B52A54(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(v3, 0LL);
  this->fields.cachedUserServantCollectionEntityData = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantCollectionEntityData,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    30,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AE1E9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
    byte_42AE1E9 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23E2728 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x23
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  unsigned __int64 v19; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x11
  __int64 v21; // x0
  UserServantCollectionEntity_o *v22; // x19
  const MethodInfo *v23; // x3
  UserServantCollectionEntity_o *v24; // x0
  __int64 v25; // x10

  if ( (byte_42AE1EC & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    byte_42AE1EC = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v12 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AEB880(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v10);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = (UserServantCollectionEntity_o *)sub_B52A54(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_21466496(v22, userId, svtId, v23);
    return v22;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B52A5C(lookup, v9);
  v17 = lookup->klass;
  v18 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v17->_1.interfaceOffsets->offset;
    while ( *(v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v19;
      v20 += 2;
      if ( v19 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v21 = (__int64)&v17->vtable[*(_DWORD *)v20 + 2].method;
  }
  else
  {
LABEL_16:
    v21 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v16);
  }
  v24 = (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v21)(
                                           v18,
                                           PK,
                                           *(_QWORD *)(v21 + 8));
  if ( !v24 )
    return 0LL;
  v25 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v25 )
    return 0LL;
  if ( (UserServantCollectionEntity_c *)v24->klass->_2.typeHierarchy[v25 - 1] == UserServantCollectionEntity_TypeInfo )
    return v24;
  return 0LL;
}


System_Int32_array *__fastcall UserServantCollectionMaster__GetNewList(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  const MethodInfo *v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v6; // w21
  int32_t v7; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x23
  __int64 v9; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE1F1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    byte_42AE1F1 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v7,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = list;
        v9 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == UserServantCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserServantCollectionEntity__IsNew(
                                                                                               (UserServantCollectionEntity_o *)list,
                                                                                               v4);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            syncRoot = v8->fields._syncRoot;
            klass = v8[1].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v13.fields.currentCryptoKey = syncRoot;
            *(_QWORD *)&v13.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                                 v13,
                                                                                                 0LL);
            if ( !v3 )
              break;
            System_Collections_Generic_List_int___Add(
              v3,
              (int32_t)list,
              (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v7 >= v6 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B52A5C(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall UserServantCollectionMaster__IsCostumeAlreadyGet(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        int32_t costumeId,
        const MethodInfo *method)
{
  int64_t UserId; // x0
  const MethodInfo *v8; // x3
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  __int64 v10; // x1
  struct System_Int32_array *costumeIds; // x10
  __int64 v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10

  if ( (byte_42AE1F4 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE1F4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_B52A5C(0LL, v10);
  costumeIds = EntityDefinitely->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  v12 = *(_QWORD *)&costumeIds->max_length;
  if ( !v12 || (int)v12 < 1 )
    return 0;
  v13 = 0LL;
  v14 = &costumeIds->m_Items[1];
  while ( v14[v13] != costumeId )
  {
    if ( (int)++v13 >= (int)v12 )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__IsNew(
        UserServantCollectionMaster_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantCollectionEntity_o *v10; // x23
  __int64 v11; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42AE1F0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    byte_42AE1F0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B52A5C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v7 = Count;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v8,
             (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v10 = (UserServantCollectionEntity_o *)Item;
      v11 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserServantCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v15.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v15.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v10, *(const MethodInfo **)&svtId);
      }
    }
    if ( ++v8 >= v7 )
      return 0;
  }
}


bool __fastcall UserServantCollectionMaster__IsServantHaving(
        UserServantCollectionMaster_o *this,
        System_Int32_array *svtIds,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *v4; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  int32_t v7; // w21
  int64_t UserId; // x0
  const MethodInfo *v9; // x4
  __int64 v10; // x1
  __int64 v12; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_42AE1F5 & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42AE1F5 = 1;
  }
  entity = 0LL;
  if ( !svtIds )
    return 1;
  v5 = *(_QWORD *)&svtIds->max_length;
  if ( !v5 )
    return 1;
  entity = 0LL;
  if ( (int)v5 < 1 )
    return 1;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v5 )
    {
      v12 = sub_B52A88(this);
      sub_B52A28(v12, 0LL);
    }
    v7 = svtIds->m_Items[v6 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    this = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(v4, &entity, UserId, v7, v9);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( !entity )
      sub_B52A5C(this, v10);
    if ( (unsigned int)(entity->fields.status - 1) > 1 )
      break;
    LODWORD(v5) = svtIds->max_length;
    if ( (__int64)++v6 >= (int)v5 )
      return 1;
  }
  return 0;
}


void __fastcall UserServantCollectionMaster__OnListChangedImplementation(
        UserServantCollectionMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_NotImplementedException_o *v4; // x19
  __int64 v5; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v3 = sub_B52988(&System_NotImplementedException_TypeInfo);
    v4 = (System_NotImplementedException_o *)sub_B52A54(v3);
    System_NotImplementedException___ctor(v4, 0LL);
    v5 = sub_B52988(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_B52A28(v4, v5);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_B52A5C(this, e);
  UserServantCollectionMaster_UserServantCollectionEntityDataCache__Clear(
    (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)this,
    0LL);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AE1EA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
    byte_42AE1EA = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  ServantCommentMaster_o *v5; // x20
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v10; // x23
  __int64 v11; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v14; // x23
  void *v15; // x24
  int32_t v16; // w0
  System_Int32_array *v17; // x23
  System_Int32_array *v18; // x24
  int32_t v19; // w25
  System_Int32_array *v20; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_42AE1F2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantCommentMaster___);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    byte_42AE1F2 = 1;
  }
  v20 = 0LL;
  idList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v5 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v8,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v10 = Item;
        v11 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v22.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v22.fields.fakeValue = klass;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v22, 0LL);
          if ( !v5 )
            break;
          if ( ServantCommentMaster__GetNewList(v5, &idList, &v20, (int32_t)Instance, 0LL) )
          {
            v15 = v10[1].monitor;
            v14 = v10[2].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v23.fields.currentCryptoKey = v15;
            *(_QWORD *)&v23.fields.fakeValue = v14;
            v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v23, 0LL);
            v17 = v20;
            v18 = idList;
            v19 = v16;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            }
            ServantCommentManager__SetOpen_27233136(v19, v18, v17, 0LL);
          }
        }
      }
      if ( ++v8 >= v7 )
        return;
    }
LABEL_25:
    sub_B52A5C(Instance, v4);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v6; // w21
  int32_t v7; // w22
  __int64 v8; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  const MethodInfo *v11; // x1
  System_Int32_array *v12; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_42AE1F3 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    sub_B52984(&UserServantCollectionManager_TypeInfo);
    byte_42AE1F3 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v6 = (int)list;
    v7 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v7,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v8 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v8
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[v8 - 1] == UserServantCollectionEntity_TypeInfo
          && LODWORD(list[1].monitor) == 2 )
        {
          syncRoot = list->fields._syncRoot;
          klass = list[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v13.fields.currentCryptoKey = syncRoot;
          *(_QWORD *)&v13.fields.fakeValue = klass;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                               v13,
                                                                                               0LL);
          if ( !v3 )
            break;
          System_Collections_Generic_List_int___Add(
            v3,
            (int32_t)list,
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v7 >= v6 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B52A5C(list, v4);
  }
LABEL_17:
  if ( !v3 )
    goto LABEL_22;
  v12 = System_Collections_Generic_List_int___ToArray(
          v3,
          (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__SetOld_21484792(v12, v11);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getCollectionList(
        UserServantCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        bool isEquip,
        bool ignoreHideStateSvt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
  const MethodInfo *v10; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v12; // x21
  __int64 v13; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x24
  signed __int64 v15; // x22
  System_String_o **v16; // x28
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v17; // x21
  unsigned __int64 v18; // x20
  System_String_o *v19; // x26
  System_String_o *v20; // x0
  System_String_o *v21; // x26
  __int64 v22; // x3
  __int64 v23; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v24; // x1
  __int64 v25; // x27
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  __int64 v30; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v31; // x1
  __int64 v32; // x27
  unsigned __int64 v33; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v34; // x11
  __int64 v35; // x0
  int64_t v36; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v37; // x25
  UserServantCollectionMaster_o *v38; // x24
  signed __int64 v39; // x23
  _BOOL4 v40; // w22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v41; // x19
  System_String_o **v42; // x21
  int v43; // w28
  UserServantCollectionEntity_o *v44; // x0
  int32_t v45; // w2
  __int64 v46; // x26
  const MethodInfo *v47; // x3
  __int64 v48; // x10
  int v49; // w8
  __int64 v51; // x0
  bool v52; // [xsp+4h] [xbp-8Ch]
  int32_t *v53; // [xsp+8h] [xbp-88h]
  __int64 v55; // [xsp+18h] [xbp-78h]
  int v56; // [xsp+24h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-68h] BYREF
  int32_t findSuma; // [xsp+30h] [xbp-60h] BYREF
  int32_t getSuma; // [xsp+34h] [xbp-5Ch] BYREF
  int64_t userId; // [xsp+38h] [xbp-58h] BYREF

  v6 = ignoreHideStateSvt;
  if ( (byte_42AE1EE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42AE1EE = 1;
  }
  userId = 0LL;
  getSuma = 0;
  findSuma = 0;
  userServantCollectionEntityList = 0LL;
  v56 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  v10 = (const MethodInfo *)userId;
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  if ( UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
         (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
         userId,
         isEquip,
         v6,
         &getSuma,
         &findSuma,
         &userServantCollectionEntityList,
         0LL) )
  {
    *getSum = getSuma;
    *findSum = findSuma;
    cachedUserServantCollectionEntityData = (__int64)userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)cachedUserServantCollectionEntityData,
                                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_57:
    sub_B52A5C(cachedUserServantCollectionEntityData, v10);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v52 = isEquip;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_32157132(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v12 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v13 = cachedUserServantCollectionEntityData;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v53 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v12 >= 1 )
  {
    v15 = (int)v12;
    v16 = (System_String_o **)&StringLiteral_1240/*":"*/;
    v17 = &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo;
    v18 = 0LL;
    v55 = v13;
    do
    {
      if ( v18 >= *(unsigned int *)(v13 + 24) )
      {
        v51 = sub_B52A88(cachedUserServantCollectionEntityData);
        sub_B52A28(v51, 0LL);
      }
      v56 = *(_DWORD *)(v13 + 4 * v18 + 32);
      v19 = System_Int64__ToString((int64_t)&userId, 0LL);
      v20 = System_Int32__ToString((int32_t)&v56, 0LL);
      v21 = System_String__Concat_44570600(v19, *v16, v20, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_57;
      v23 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v24 = *v17;
      v25 = cachedUserServantCollectionEntityData;
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
      {
        v26 = 0LL;
        v27 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v27 - 1) != v24 )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
            goto LABEL_21;
        }
        v28 = v23 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_21:
        v28 = sub_AEB880(cachedUserServantCollectionEntityData, v24, 0LL, v22);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v28)(v25, v21, *(_QWORD *)(v28 + 8)) & 1) != 0 )
      {
        cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !cachedUserServantCollectionEntityData )
          goto LABEL_57;
        v30 = *(_QWORD *)cachedUserServantCollectionEntityData;
        v31 = *v17;
        v32 = cachedUserServantCollectionEntityData;
        if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
        {
          v33 = 0LL;
          v34 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v30 + 176)
                                                                                            + 8LL);
          while ( *(v34 - 1) != v31 )
          {
            ++v33;
            v34 += 2;
            if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
              goto LABEL_29;
          }
          v35 = v30 + 16LL * (*(_DWORD *)v34 + 2) + 312;
        }
        else
        {
LABEL_29:
          v35 = sub_AEB880(cachedUserServantCollectionEntityData, v31, 2LL, v29);
        }
        cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v35)(
                                                  v32,
                                                  v21,
                                                  *(_QWORD *)(v35 + 8));
        if ( cachedUserServantCollectionEntityData
          && (v48 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 300LL) >= (unsigned int)v48) )
        {
          if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 200LL)
                                                 + 8 * v48
                                                 - 8) == UserServantCollectionEntity_TypeInfo )
            v46 = cachedUserServantCollectionEntityData;
          else
            v46 = 0LL;
          if ( !v6 )
          {
LABEL_45:
            if ( !v46 )
              goto LABEL_57;
LABEL_46:
            v49 = *(_DWORD *)(v46 + 40);
            if ( v49 == 1 )
            {
LABEL_49:
              ++*findSum;
            }
            else if ( v49 == 2 )
            {
              ++*v53;
              goto LABEL_49;
            }
LABEL_50:
            if ( !v14 )
              goto LABEL_57;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v14,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
              (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
            goto LABEL_52;
          }
        }
        else
        {
          v46 = 0LL;
          if ( !v6 )
            goto LABEL_45;
        }
        if ( !v46 )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)v46,
                                                  v10);
        if ( (cachedUserServantCollectionEntityData & 1) == 0 )
          goto LABEL_46;
      }
      else
      {
        v36 = userId;
        v37 = v14;
        v38 = this;
        v39 = v15;
        v40 = v6;
        v41 = v17;
        v42 = v16;
        v43 = v56;
        v44 = (UserServantCollectionEntity_o *)sub_B52A54(UserServantCollectionEntity_TypeInfo);
        v45 = v43;
        v16 = v42;
        v17 = v41;
        v6 = v40;
        v15 = v39;
        this = v38;
        v14 = v37;
        v13 = v55;
        v46 = (__int64)v44;
        UserServantCollectionEntity___ctor_21466496(v44, v36, v45, v47);
        if ( !v6 )
          goto LABEL_50;
        if ( !v46 )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)v46,
                                                  v10);
        if ( (cachedUserServantCollectionEntityData & 1) == 0 )
          goto LABEL_50;
      }
LABEL_52:
      ++v18;
    }
    while ( (__int64)v18 < v15 );
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
    (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
    userId,
    v52,
    v6,
    *v53,
    *findSum,
    (System_Collections_Generic_List_UserServantCollectionEntity__o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)v14;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  __int64 v9; // x22
  unsigned __int64 v10; // x25
  signed __int64 v11; // x26
  System_String_o *v12; // x0
  System_String_o *v13; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x23
  __int64 v16; // x3
  __int64 v17; // x8
  __int64 v18; // x24
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v23; // x8
  __int64 v24; // x24
  unsigned __int64 v25; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v26; // x11
  __int64 v27; // x0
  __int64 v28; // x10
  __int64 v30; // x0
  int64_t UserId; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42AE1ED & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42AE1ED = 1;
  }
  UserId = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v8 = *(_QWORD *)(Instance + 24);
  v9 = Instance;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    v11 = (int)v8;
    while ( 1 )
    {
      v12 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v10 >= *(unsigned int *)(v9 + 24) )
      {
        v30 = sub_B52A88(v12);
        sub_B52A28(v30, 0LL);
      }
      v13 = v12;
      v14 = System_Int32__ToString((int)v9 + 4 * (int)v10 + 32, 0LL);
      v15 = System_String__Concat_44570600(v13, (System_String_o *)StringLiteral_1240/*":"*/, v14, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v17 = *(_QWORD *)Instance;
      v18 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_17;
        }
        v21 = v17 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_17:
        v21 = sub_AEB880(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v16);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v21)(v18, v15, *(_QWORD *)(v21 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v23 = *(_QWORD *)Instance;
        v24 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v25 = 0LL;
          v26 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v23 + 176)
                                                                                            + 8LL);
          while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v25;
            v26 += 2;
            if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_25;
          }
          v27 = v23 + 16LL * (*(_DWORD *)v26 + 2) + 312;
        }
        else
        {
LABEL_25:
          v27 = sub_AEB880(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v22);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v27)(v24, v15, *(_QWORD *)(v27 + 8));
        if ( !Instance )
          break;
        v7 = Instance;
        v28 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v28
          || *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v28 - 8) != UserServantCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v5 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v5,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
        }
      }
      if ( (__int64)++v10 >= v11 )
        goto LABEL_34;
    }
LABEL_36:
    sub_B52A5C(Instance, v7);
  }
LABEL_34:
  if ( !v5 )
    goto LABEL_36;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  DataManager_o *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v7; // x1
  struct DataMasterBase_array *datalist; // x24
  DataManager_o *v9; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x23
  __int64 v11; // x0
  unsigned __int64 v12; // x26
  signed __int64 v13; // x27
  int32_t v14; // w1
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  __int64 v17; // x3
  DataManager_c *klass; // x8
  WarBoardEvalValueSquare_CalcEval_o *v19; // x25
  DataManager_o *v20; // x24
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 v23; // x0
  __int64 v24; // x3
  DataManager_c *v25; // x8
  WarBoardEvalValueSquare_CalcEval_o *v26; // x25
  DataManager_o *v27; // x24
  unsigned __int64 v28; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v29; // x11
  __int64 v30; // x0
  __int64 v31; // x10
  __int64 v33; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-68h] BYREF
  int32_t key; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42AE1EF & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__string__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantCollectionEntity_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42AE1EF = 1;
  }
  UserId = 0LL;
  key = 0;
  value = 0LL;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v5 = System_Int64__ToString((int64_t)&UserId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_32157132((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_42;
  datalist = Instance->fields.datalist;
  v9 = Instance;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)datalist >= 1 )
  {
    v12 = 0LL;
    v13 = (int)datalist;
    while ( 1 )
    {
      if ( v12 >= LODWORD(v9->fields.datalist) )
      {
        v33 = sub_B52A88(v11);
        sub_B52A28(v33, 0LL);
      }
      v14 = *((_DWORD *)&v9->fields.lookup + v12);
      key = v14;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)servantEquipIdStrDic,
                v14,
                &value,
                (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v15 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_44570600(
                                                          v5,
                                                          (System_String_o *)StringLiteral_1240/*":"*/,
                                                          v15,
                                                          0LL);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)servantEquipIdStrDic,
            key,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
            (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v16 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_44570600(
                                                        v5,
                                                        (System_String_o *)StringLiteral_1240/*":"*/,
                                                        v16,
                                                        0LL);
      }
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v19 = value;
      v20 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v21 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v21;
          p_offset += 4;
          if ( v21 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_21:
        v23 = sub_AEB880(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v17);
      }
      v11 = (*(__int64 (__fastcall **)(DataManager_o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))v23)(
              v20,
              v19,
              *(_QWORD *)(v23 + 8));
      if ( (v11 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v25 = Instance->klass;
        v26 = value;
        v27 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v28 = 0LL;
          v29 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v25->_1.interfaceOffsets->offset;
          while ( *(v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v28;
            v29 += 2;
            if ( v28 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_29;
          }
          v30 = (__int64)(&v25->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v29);
        }
        else
        {
LABEL_29:
          v30 = sub_AEB880(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v24);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))v30)(
                                      v27,
                                      v26,
                                      *(_QWORD *)(v30 + 8));
        if ( Instance
          && (v31 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v31) )
        {
          if ( (UserServantCollectionEntity_c *)Instance->klass->_2.typeHierarchy[v31 - 1] == UserServantCollectionEntity_TypeInfo )
            v7 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
          else
            v7 = 0LL;
          if ( !v10 )
            break;
        }
        else
        {
          v7 = 0LL;
          if ( !v10 )
            break;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          v7,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
      }
      if ( (__int64)++v12 >= v13 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v10;
    }
LABEL_42:
    sub_B52A5C(Instance, v7);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v10;
}


void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__Clear(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0LL;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0LL;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0LL;
  sub_B52920((BattleServantConfConponent_o *)p_cachedUserServantCollectionEntityList, 0LL, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        int64_t userId,
        bool isEquip,
        bool ignoreHideStateServant,
        int32_t *getSum,
        int32_t *findSum,
        System_Collections_Generic_List_UserServantCollectionEntity__o **userServantCollectionEntityList,
        const MethodInfo *method)
{
  _BOOL4 v13; // w23
  _BOOL4 v14; // w24
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1

  v13 = ignoreHideStateServant;
  v14 = isEquip;
  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)userServantCollectionEntityList,
    0LL,
    (System_String_array **)isEquip,
    (System_String_array **)ignoreHideStateServant,
    (System_Boolean_array **)getSum,
    (System_Int32_array **)findSum,
    (System_Int32_array *)userServantCollectionEntityList,
    (System_Int32_array *)method);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( ((!this->fields.cachedIsEquip ^ v14) & 1) != 0 && ((this->fields.cachedIgnoreHideStateServant ^ v13) & 1) == 0 )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_B52920(
        (BattleServantConfConponent_o *)userServantCollectionEntityList,
        (System_Int32_array **)cachedUserServantCollectionEntityList,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
        UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *this,
        int64_t userId,
        bool isEquip,
        bool ignoreHideStateServant,
        int32_t getSum,
        int32_t findSum,
        System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = userServantCollectionEntityList;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = (struct System_Collections_Generic_List_UserServantCollectionEntity__o *)userId;
  *((_BYTE *)p_cachedUserServantCollectionEntityList - 16) = isEquip;
  *((_BYTE *)p_cachedUserServantCollectionEntityList - 15) = ignoreHideStateServant;
  *((_DWORD *)p_cachedUserServantCollectionEntityList - 3) = getSum;
  *((_DWORD *)p_cachedUserServantCollectionEntityList - 2) = findSum;
  sub_B52920(
    (BattleServantConfConponent_o *)p_cachedUserServantCollectionEntityList,
    (System_Int32_array **)userServantCollectionEntityList,
    (System_String_array **)isEquip,
    (System_String_array **)ignoreHideStateServant,
    *(System_Boolean_array ***)&getSum,
    *(System_Int32_array ***)&findSum,
    (System_Int32_array *)userServantCollectionEntityList,
    (System_Int32_array *)method);
}
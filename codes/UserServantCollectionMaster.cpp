void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4185E9E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__, method);
    sub_B2C35C(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo, v3);
    byte_4185E9E = 1;
  }
  v4 = (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)sub_B2C42C(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(v4, 0LL);
  this->fields.cachedUserServantCollectionEntityData = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantCollectionEntityData,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    29,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4185E9C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__,
      userId);
    byte_4185E9C = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_24E4520 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v13; // x23
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  UserServantCollectionEntity_o *v23; // x19
  const MethodInfo *v24; // x3
  UserServantCollectionEntity_o *v25; // x0
  __int64 v26; // x10

  if ( (byte_4185E9F & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v7);
    byte_4185E9F = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v13 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v11);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v13,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v23 = (UserServantCollectionEntity_o *)sub_B2C42C(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_21610256(v23, userId, svtId, v24);
    return v23;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B2C434(lookup, v10);
  v18 = lookup->klass;
  v19 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v18->_1.interfaceOffsets->offset;
    while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v20;
      v21 += 2;
      if ( v20 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v22 = (__int64)&v18->vtable[*(_DWORD *)v21 + 2].method;
  }
  else
  {
LABEL_16:
    v22 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v17);
  }
  v25 = (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v22)(
                                           v19,
                                           PK,
                                           *(_QWORD *)(v22 + 8));
  if ( !v25 )
    return 0LL;
  v26 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v25->klass->_2.bitflags2 + 1) < (unsigned int)v26 )
    return 0LL;
  if ( (UserServantCollectionEntity_c *)v25->klass->_2.typeHierarchy[v26 - 1] == UserServantCollectionEntity_TypeInfo )
    return v25;
  return 0LL;
}


System_Int32_array *__fastcall UserServantCollectionMaster__GetNewList(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  const MethodInfo *v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w21
  int32_t v14; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v15; // x23
  __int64 v16; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4185EA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v9);
    byte_4185EA4 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v13 = (int)list;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v14,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v15 = list;
        v16 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == UserServantCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserServantCollectionEntity__IsNew(
                                                                                               (UserServantCollectionEntity_o *)list,
                                                                                               v11);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            syncRoot = v15->fields._syncRoot;
            klass = v15[1].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v20.fields.currentCryptoKey = syncRoot;
            *(_QWORD *)&v20.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                                 v20,
                                                                                                 0LL);
            if ( !v10 )
              break;
            System_Collections_Generic_List_int___Add(
              v10,
              (int32_t)list,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v14 >= v13 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B2C434(list, v11);
  }
LABEL_17:
  if ( !v10 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4185EA7 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_4185EA7 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_B2C434(0LL, v10);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v10; // w21
  int32_t v11; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantCollectionEntity_o *v13; // x23
  __int64 v14; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4185EA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v7);
    byte_4185EA3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v11,
             (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v13 = (UserServantCollectionEntity_o *)Item;
      v14 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserServantCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v18.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v18.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v13, *(const MethodInfo **)&svtId);
      }
    }
    if ( ++v11 >= v10 )
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
  if ( (byte_4185EA8 & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_B2C35C(&NetworkManager_TypeInfo, svtIds);
    byte_4185EA8 = 1;
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
      v12 = sub_B2C460(this);
      sub_B2C400(v12, 0LL);
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
      sub_B2C434(this, v10);
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
    v3 = sub_B2C360(&System_NotImplementedException_TypeInfo);
    v4 = (System_NotImplementedException_o *)sub_B2C42C(v3);
    System_NotImplementedException___ctor(v4, 0LL);
    v5 = sub_B2C360(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_B2C400(v4, v5);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_B2C434(this, e);
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

  if ( (byte_4185E9D & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__,
      entity);
    byte_4185E9D = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  ServantCommentMaster_o *v11; // x20
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v16; // x23
  __int64 v17; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v20; // x23
  void *v21; // x24
  int32_t v22; // w0
  System_Int32_array *v23; // x23
  System_Int32_array *v24; // x24
  int32_t v25; // w25
  System_Int32_array *v26; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4185EA5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantCommentMaster___, v4);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v8);
    byte_4185EA5 = 1;
  }
  v26 = 0LL;
  idList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v11 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v14,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v16 = Item;
        v17 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v17 - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v28.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v28.fields.fakeValue = klass;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
          if ( !v11 )
            break;
          if ( ServantCommentMaster__GetNewList(v11, &idList, &v26, (int32_t)Instance, 0LL) )
          {
            v21 = v16[1].monitor;
            v20 = v16[2].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v29.fields.currentCryptoKey = v21;
            *(_QWORD *)&v29.fields.fakeValue = v20;
            v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v29, 0LL);
            v23 = v26;
            v24 = idList;
            v25 = v22;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            }
            ServantCommentManager__SetOpen_29246260(v25, v24, v23, 0LL);
          }
        }
      }
      if ( ++v14 >= v13 )
        return;
    }
LABEL_25:
    sub_B2C434(Instance, v10);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  const MethodInfo *v19; // x1
  System_Int32_array *v20; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4185EA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v9);
    sub_B2C35C(&UserServantCollectionManager_TypeInfo, v10);
    byte_4185EA6 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v14 = (int)list;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v15,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == UserServantCollectionEntity_TypeInfo
          && LODWORD(list[1].monitor) == 2 )
        {
          syncRoot = list->fields._syncRoot;
          klass = list[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v21.fields.currentCryptoKey = syncRoot;
          *(_QWORD *)&v21.fields.fakeValue = klass;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                               v21,
                                                                                               0LL);
          if ( !v11 )
            break;
          System_Collections_Generic_List_int___Add(
            v11,
            (int32_t)list,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B2C434(list, v12);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_22;
  v20 = System_Collections_Generic_List_int___ToArray(
          v11,
          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__SetOld_21628160(v20, v19);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  const MethodInfo *v19; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v21; // x21
  __int64 v22; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x24
  signed __int64 v24; // x22
  System_String_o **v25; // x28
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v26; // x21
  unsigned __int64 v27; // x20
  System_String_o *v28; // x26
  System_String_o *v29; // x0
  System_String_o *v30; // x26
  __int64 v31; // x3
  __int64 v32; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v33; // x1
  __int64 v34; // x27
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  __int64 v39; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v40; // x1
  __int64 v41; // x27
  unsigned __int64 v42; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v43; // x11
  __int64 v44; // x0
  int64_t v45; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v46; // x25
  UserServantCollectionMaster_o *v47; // x24
  signed __int64 v48; // x23
  _BOOL4 v49; // w22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v50; // x19
  System_String_o **v51; // x21
  int v52; // w28
  UserServantCollectionEntity_o *v53; // x0
  int32_t v54; // w2
  __int64 v55; // x26
  const MethodInfo *v56; // x3
  __int64 v57; // x10
  int v58; // w8
  __int64 v60; // x0
  bool v61; // [xsp+4h] [xbp-8Ch]
  int32_t *v62; // [xsp+8h] [xbp-88h]
  __int64 v64; // [xsp+18h] [xbp-78h]
  int v65; // [xsp+24h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-68h] BYREF
  int32_t findSuma; // [xsp+30h] [xbp-60h] BYREF
  int32_t getSuma; // [xsp+34h] [xbp-5Ch] BYREF
  int64_t userId; // [xsp+38h] [xbp-58h] BYREF

  v6 = ignoreHideStateSvt;
  if ( (byte_4185EA1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, getSum);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v18);
    byte_4185EA1 = 1;
  }
  userId = 0LL;
  getSuma = 0;
  findSuma = 0;
  userServantCollectionEntityList = 0LL;
  v65 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  v19 = (const MethodInfo *)userId;
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
                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_57:
    sub_B2C434(cachedUserServantCollectionEntityData, v19);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v61 = isEquip;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_31570700(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v21 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v22 = cachedUserServantCollectionEntityData;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v62 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v21 >= 1 )
  {
    v24 = (int)v21;
    v25 = (System_String_o **)&StringLiteral_1225/*":"*/;
    v26 = &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo;
    v27 = 0LL;
    v64 = v22;
    do
    {
      if ( v27 >= *(unsigned int *)(v22 + 24) )
      {
        v60 = sub_B2C460(cachedUserServantCollectionEntityData);
        sub_B2C400(v60, 0LL);
      }
      v65 = *(_DWORD *)(v22 + 4 * v27 + 32);
      v28 = System_Int64__ToString((int64_t)&userId, 0LL);
      v29 = System_Int32__ToString((int32_t)&v65, 0LL);
      v30 = System_String__Concat_44307816(v28, *v25, v29, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_57;
      v32 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v33 = *v26;
      v34 = cachedUserServantCollectionEntityData;
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
      {
        v35 = 0LL;
        v36 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v36 - 1) != v33 )
        {
          ++v35;
          v36 += 4;
          if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
            goto LABEL_21;
        }
        v37 = v32 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_21:
        v37 = sub_AC5258(cachedUserServantCollectionEntityData, v33, 0LL, v31);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v37)(v34, v30, *(_QWORD *)(v37 + 8)) & 1) != 0 )
      {
        cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !cachedUserServantCollectionEntityData )
          goto LABEL_57;
        v39 = *(_QWORD *)cachedUserServantCollectionEntityData;
        v40 = *v26;
        v41 = cachedUserServantCollectionEntityData;
        if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
        {
          v42 = 0LL;
          v43 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v39 + 176)
                                                                                            + 8LL);
          while ( *(v43 - 1) != v40 )
          {
            ++v42;
            v43 += 2;
            if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
              goto LABEL_29;
          }
          v44 = v39 + 16LL * (*(_DWORD *)v43 + 2) + 312;
        }
        else
        {
LABEL_29:
          v44 = sub_AC5258(cachedUserServantCollectionEntityData, v40, 2LL, v38);
        }
        cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v44)(
                                                  v41,
                                                  v30,
                                                  *(_QWORD *)(v44 + 8));
        if ( cachedUserServantCollectionEntityData
          && (v57 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 300LL) >= (unsigned int)v57) )
        {
          if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 200LL)
                                                 + 8 * v57
                                                 - 8) == UserServantCollectionEntity_TypeInfo )
            v55 = cachedUserServantCollectionEntityData;
          else
            v55 = 0LL;
          if ( !v6 )
          {
LABEL_45:
            if ( !v55 )
              goto LABEL_57;
LABEL_46:
            v58 = *(_DWORD *)(v55 + 40);
            if ( v58 == 1 )
            {
LABEL_49:
              ++*findSum;
            }
            else if ( v58 == 2 )
            {
              ++*v62;
              goto LABEL_49;
            }
LABEL_50:
            if ( !v23 )
              goto LABEL_57;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v23,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v55,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
            goto LABEL_52;
          }
        }
        else
        {
          v55 = 0LL;
          if ( !v6 )
            goto LABEL_45;
        }
        if ( !v55 )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)v55,
                                                  v19);
        if ( (cachedUserServantCollectionEntityData & 1) == 0 )
          goto LABEL_46;
      }
      else
      {
        v45 = userId;
        v46 = v23;
        v47 = this;
        v48 = v24;
        v49 = v6;
        v50 = v26;
        v51 = v25;
        v52 = v65;
        v53 = (UserServantCollectionEntity_o *)sub_B2C42C(UserServantCollectionEntity_TypeInfo);
        v54 = v52;
        v25 = v51;
        v26 = v50;
        v6 = v49;
        v24 = v48;
        this = v47;
        v23 = v46;
        v22 = v64;
        v55 = (__int64)v53;
        UserServantCollectionEntity___ctor_21610256(v53, v45, v54, v56);
        if ( !v6 )
          goto LABEL_50;
        if ( !v55 )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)v55,
                                                  v19);
        if ( (cachedUserServantCollectionEntityData & 1) == 0 )
          goto LABEL_50;
      }
LABEL_52:
      ++v27;
    }
    while ( (__int64)v27 < v24 );
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
    (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
    userId,
    v61,
    v6,
    *v62,
    *findSum,
    (System_Collections_Generic_List_UserServantCollectionEntity__o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)v23;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x21
  __int64 Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  __int64 v18; // x22
  unsigned __int64 v19; // x25
  signed __int64 v20; // x26
  System_String_o *v21; // x0
  System_String_o *v22; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x23
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x24
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  __int64 v33; // x24
  unsigned __int64 v34; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v35; // x11
  __int64 v36; // x0
  __int64 v37; // x10
  __int64 v39; // x0
  int64_t UserId; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4185EA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v13);
    byte_4185EA0 = 1;
  }
  UserId = 0LL;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v17 = *(_QWORD *)(Instance + 24);
  v18 = Instance;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    v20 = (int)v17;
    while ( 1 )
    {
      v21 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v19 >= *(unsigned int *)(v18 + 24) )
      {
        v39 = sub_B2C460(v21);
        sub_B2C400(v39, 0LL);
      }
      v22 = v21;
      v23 = System_Int32__ToString((int)v18 + 4 * (int)v19 + 32, 0LL);
      v24 = System_String__Concat_44307816(v22, (System_String_o *)StringLiteral_1225/*":"*/, v23, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v26 = *(_QWORD *)Instance;
      v27 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_17;
        }
        v30 = v26 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_17:
        v30 = sub_AC5258(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v25);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v30)(v27, v24, *(_QWORD *)(v30 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v32 = *(_QWORD *)Instance;
        v33 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v34 = 0LL;
          v35 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v32 + 176)
                                                                                            + 8LL);
          while ( *(v35 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v34;
            v35 += 2;
            if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_25;
          }
          v36 = v32 + 16LL * (*(_DWORD *)v35 + 2) + 312;
        }
        else
        {
LABEL_25:
          v36 = sub_AC5258(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v31);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v36)(v33, v24, *(_QWORD *)(v36 + 8));
        if ( !Instance )
          break;
        v16 = Instance;
        v37 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v37
          || *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v37 - 8) != UserServantCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v14 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
        }
      }
      if ( (__int64)++v19 >= v20 )
        goto LABEL_34;
    }
LABEL_36:
    sub_B2C434(Instance, v16);
  }
LABEL_34:
  if ( !v14 )
    goto LABEL_36;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                                (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_String_o *v15; // x21
  DataManager_o *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x1
  struct DataMasterBase_array *datalist; // x24
  DataManager_o *v19; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x23
  __int64 v21; // x0
  unsigned __int64 v22; // x26
  signed __int64 v23; // x27
  int32_t v24; // w1
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  __int64 v27; // x3
  DataManager_c *klass; // x8
  WarBoardEvalValueSquare_CalcEval_o *v29; // x25
  DataManager_o *v30; // x24
  unsigned __int64 v31; // x10
  int32_t *p_offset; // x11
  __int64 v33; // x0
  __int64 v34; // x3
  DataManager_c *v35; // x8
  WarBoardEvalValueSquare_CalcEval_o *v36; // x25
  DataManager_o *v37; // x24
  unsigned __int64 v38; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v39; // x11
  __int64 v40; // x0
  __int64 v41; // x10
  __int64 v43; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-68h] BYREF
  int32_t key; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4185EA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, servantEquipIdStrDic);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__, v6);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&UserServantCollectionEntity_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v14);
    byte_4185EA2 = 1;
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
  v15 = System_Int64__ToString((int64_t)&UserId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_31570700((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_42;
  datalist = Instance->fields.datalist;
  v19 = Instance;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)datalist >= 1 )
  {
    v22 = 0LL;
    v23 = (int)datalist;
    while ( 1 )
    {
      if ( v22 >= LODWORD(v19->fields.datalist) )
      {
        v43 = sub_B2C460(v21);
        sub_B2C400(v43, 0LL);
      }
      v24 = *((_DWORD *)&v19->fields.lookup + v22);
      key = v24;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)servantEquipIdStrDic,
                v24,
                &value,
                (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v25 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_44307816(
                                                          v15,
                                                          (System_String_o *)StringLiteral_1225/*":"*/,
                                                          v25,
                                                          0LL);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)servantEquipIdStrDic,
            key,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
            (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v26 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_44307816(
                                                        v15,
                                                        (System_String_o *)StringLiteral_1225/*":"*/,
                                                        v26,
                                                        0LL);
      }
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v29 = value;
      v30 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v31 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v31;
          p_offset += 4;
          if ( v31 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        v33 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_21:
        v33 = sub_AC5258(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v27);
      }
      v21 = (*(__int64 (__fastcall **)(DataManager_o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))v33)(
              v30,
              v29,
              *(_QWORD *)(v33 + 8));
      if ( (v21 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v35 = Instance->klass;
        v36 = value;
        v37 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v38 = 0LL;
          v39 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v35->_1.interfaceOffsets->offset;
          while ( *(v39 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v38;
            v39 += 2;
            if ( v38 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_29;
          }
          v40 = (__int64)(&v35->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v39);
        }
        else
        {
LABEL_29:
          v40 = sub_AC5258(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v34);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))v40)(
                                      v37,
                                      v36,
                                      *(_QWORD *)(v40 + 8));
        if ( Instance
          && (v41 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v41) )
        {
          if ( (UserServantCollectionEntity_c *)Instance->klass->_2.typeHierarchy[v41 - 1] == UserServantCollectionEntity_TypeInfo )
            v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
          else
            v17 = 0LL;
          if ( !v20 )
            break;
        }
        else
        {
          v17 = 0LL;
          if ( !v20 )
            break;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v20,
          v17,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
      }
      if ( (__int64)++v22 >= v23 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v20;
    }
LABEL_42:
    sub_B2C434(Instance, v17);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v20;
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
  struct System_Collections_Generic_List_UserServantCollectionEntity__o **p_cachedUserServantCollectionEntityList; // x0

  this->fields.cachedUserServantCollectionEntityList = 0LL;
  p_cachedUserServantCollectionEntityList = &this->fields.cachedUserServantCollectionEntityList;
  *(p_cachedUserServantCollectionEntityList - 3) = 0LL;
  *((_WORD *)p_cachedUserServantCollectionEntityList - 8) = 0;
  *(struct System_Collections_Generic_List_UserServantCollectionEntity__o **)((char *)p_cachedUserServantCollectionEntityList
                                                                            - 12) = 0LL;
  sub_B2C2F8(p_cachedUserServantCollectionEntityList, 0LL);
}


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
  bool result; // w0
  System_Collections_Generic_List_UserServantCollectionEntity__o *cachedUserServantCollectionEntityList; // x1

  v13 = ignoreHideStateServant;
  v14 = isEquip;
  *getSum = 0;
  *findSum = 0;
  *userServantCollectionEntityList = 0LL;
  sub_B2C2F8(userServantCollectionEntityList, 0LL);
  result = 0;
  if ( this->fields.cachedUserId == userId )
  {
    if ( ((!this->fields.cachedIsEquip ^ v14) & 1) != 0 && ((this->fields.cachedIgnoreHideStateServant ^ v13) & 1) == 0 )
    {
      *getSum = this->fields.cachedGetSum;
      *findSum = this->fields.cachedFindSum;
      cachedUserServantCollectionEntityList = this->fields.cachedUserServantCollectionEntityList;
      *userServantCollectionEntityList = cachedUserServantCollectionEntityList;
      sub_B2C2F8(userServantCollectionEntityList, cachedUserServantCollectionEntityList);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


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
  sub_B2C2F8(p_cachedUserServantCollectionEntityList, userServantCollectionEntityList);
}
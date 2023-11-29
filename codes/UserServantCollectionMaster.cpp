void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8186 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__, method);
    sub_B16FFC(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo, v6);
    byte_40F8186 = 1;
  }
  v7 = (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)sub_B170CC(
                                                                               UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
  UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(v7, 0LL);
  this->fields.cachedUserServantCollectionEntityData = v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantCollectionEntityData,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    29,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F8184 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__,
      userId);
    byte_40F8184 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                            (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x23
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x11
  __int64 v24; // x0
  UserServantCollectionEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserServantCollectionEntity_o *v27; // x0
  __int64 v28; // x10

  if ( (byte_40F8187 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v7);
    byte_40F8187 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v11 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v11,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserServantCollectionEntity_o *)sub_B170CC(UserServantCollectionEntity_TypeInfo, v15, v16, v17, v18);
    UserServantCollectionEntity___ctor_21403640(v25, userId, svtId, v26);
    return v25;
  }
  v19 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !v19 )
LABEL_26:
    sub_B170D4();
  v20 = v19->klass;
  v21 = v19;
  if ( *(_WORD *)&v19->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_AAFEF8(v19, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v27 = (UserServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v24)(
                                           v21,
                                           PK,
                                           *(_QWORD *)(v24 + 8));
  if ( !v27 )
    return 0LL;
  v28 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28 )
    return 0LL;
  if ( (UserServantCollectionEntity_c *)v27->klass->_2.typeHierarchy[v28 - 1] == UserServantCollectionEntity_TypeInfo )
    return v27;
  return 0LL;
}


System_Int32_array *__fastcall UserServantCollectionMaster__GetNewList(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v16; // w21
  int32_t v17; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  const MethodInfo *v20; // x1
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v21; // x23
  __int64 v22; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x23
  void *monitor; // x24
  int32_t v25; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40F818C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v12);
    byte_40F818C = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v16 = Count;
    v17 = 0;
    while ( 1 )
    {
      v18 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v18 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v18,
               v17,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = Item;
        v22 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == UserServantCollectionEntity_TypeInfo
          && UserServantCollectionEntity__IsNew((UserServantCollectionEntity_o *)Item, v20) )
        {
          monitor = v21[1].monitor;
          klass = v21[2].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v27.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v27.fields.fakeValue = klass;
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
          if ( !v13 )
            break;
          System_Collections_Generic_List_int___Add(
            v13,
            v25,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v17 >= v16 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_17:
  if ( !v13 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  struct System_Int32_array *costumeIds; // x10
  __int64 v11; // x8
  __int64 v12; // x9
  int32_t *v13; // x10

  if ( (byte_40F818F & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, *(_QWORD *)&svtId);
    byte_40F818F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_B170D4();
  costumeIds = EntityDefinitely->fields.costumeIds;
  if ( !costumeIds )
    return 0;
  v11 = *(_QWORD *)&costumeIds->max_length;
  if ( !v11 || (int)v11 < 1 )
    return 0;
  v12 = 0LL;
  v13 = &costumeIds->m_Items[1];
  while ( v13[v12] != costumeId )
  {
    if ( (int)++v12 >= (int)v11 )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantCollectionEntity_o *v14; // x23
  __int64 v15; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  const MethodInfo *v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F818B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&svtId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v7);
    byte_40F818B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B170D4();
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v10 = Count;
  v11 = 0;
  while ( 1 )
  {
    v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v12 )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v12,
             v11,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v14 = (UserServantCollectionEntity_o *)Item;
      v15 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == UserServantCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v20.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v20.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v14, v18);
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
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_40F8190 & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_B16FFC(&NetworkManager_TypeInfo, svtIds);
    byte_40F8190 = 1;
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
      sub_B17100(this, svtIds, method);
      sub_B170A0();
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
      sub_B170D4();
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
  UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *cachedUserServantCollectionEntityData; // x0
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  System_NotImplementedException_o *v9; // x0

  if ( !e )
    goto LABEL_5;
  if ( e->fields._action > 4u )
  {
    v4 = sub_B17000(&System_NotImplementedException_TypeInfo);
    v9 = (System_NotImplementedException_o *)sub_B170CC(v4, v5, v6, v7, v8);
    System_NotImplementedException___ctor(v9, 0LL);
    sub_B17000(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_B170A0();
  }
  cachedUserServantCollectionEntityData = this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
LABEL_5:
    sub_B170D4();
  UserServantCollectionMaster_UserServantCollectionEntityDataCache__Clear(cachedUserServantCollectionEntityData, 0LL);
}


bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F8185 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__,
      entity);
    byte_40F8185 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  ServantCommentMaster_o *v11; // x20
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v17; // x23
  __int64 v18; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  int32_t v21; // w0
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v22; // x23
  void *v23; // x24
  int32_t v24; // w0
  System_Int32_array *v25; // x23
  System_Int32_array *v26; // x24
  int32_t v27; // w25
  System_Int32_array *v28; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40F818D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantCommentMaster___, v4);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v8);
    byte_40F818D = 1;
  }
  v28 = 0LL;
  idList = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v11 = (ServantCommentMaster_o *)MasterData_WarQuestSelectionMaster;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               list,
               v14,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v17 = Item;
        v18 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v18
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v30.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v30.fields.fakeValue = klass;
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v30, 0LL);
          if ( !v11 )
            break;
          if ( ServantCommentMaster__GetNewList(v11, &idList, &v28, v21, 0LL) )
          {
            v23 = v17[1].monitor;
            v22 = v17[2].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v31.fields.currentCryptoKey = v23;
            *(_QWORD *)&v31.fields.fakeValue = v22;
            v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL);
            v25 = v28;
            v26 = idList;
            v27 = v24;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            }
            ServantCommentManager__SetOpen_30489560(v27, v26, v25, 0LL);
          }
        }
      }
      if ( ++v14 >= v13 )
        return;
    }
LABEL_25:
    sub_B170D4();
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w21
  int32_t v18; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v21; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x23
  void *monitor; // x24
  int32_t v24; // w0
  const MethodInfo *v25; // x1
  System_Int32_array *v26; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_40F818E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v12);
    sub_B16FFC(&UserServantCollectionManager_TypeInfo, v13);
    byte_40F818E = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v17 = Count;
    v18 = 0;
    while ( 1 )
    {
      v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v19 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v19,
               v18,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v21 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserServantCollectionEntity_TypeInfo
          && LODWORD(Item[2].monitor) == 2 )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v27.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v27.fields.fakeValue = klass;
          v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
          if ( !v14 )
            break;
          System_Collections_Generic_List_int___Add(
            v14,
            v24,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v18 >= v17 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_17:
  if ( !v14 )
    goto LABEL_22;
  v26 = System_Collections_Generic_List_int___ToArray(
          v14,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__SetOld_21421544(v26, v25);
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
  UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *cachedUserServantCollectionEntityData; // x0
  System_Collections_Generic_List_UserServantCollectionEntity__o *v20; // x0
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *CollectionList_31591300; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x21
  System_Int32_array *v29; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x24
  _BOOL8 IsHideStateServant; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  signed __int64 v34; // x22
  System_String_o **v35; // x28
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v36; // x21
  unsigned __int64 v37; // x20
  System_String_o *v38; // x26
  System_String_o *v39; // x0
  System_String_o *v40; // x26
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v43; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v44; // x27
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v52; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v53; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v54; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v55; // x27
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  int64_t v59; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x25
  UserServantCollectionMaster_o *v61; // x24
  signed __int64 v62; // x23
  _BOOL4 v63; // w22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v64; // x19
  System_String_o **v65; // x21
  int v66; // w28
  UserServantCollectionEntity_o *v67; // x0
  int32_t v68; // w2
  __int64 v69; // x26
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x1
  __int64 v72; // x0
  const MethodInfo *v73; // x1
  __int64 v74; // x10
  int v75; // w8
  UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *v76; // x0
  bool v78; // [xsp+4h] [xbp-8Ch]
  int32_t *v79; // [xsp+8h] [xbp-88h]
  System_Int32_array *v81; // [xsp+18h] [xbp-78h]
  int v82; // [xsp+24h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-68h] BYREF
  int32_t findSuma; // [xsp+30h] [xbp-60h] BYREF
  int32_t getSuma; // [xsp+34h] [xbp-5Ch] BYREF
  int64_t userId; // [xsp+38h] [xbp-58h] BYREF

  v6 = ignoreHideStateSvt;
  if ( (byte_40F8189 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, getSum);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v14);
    sub_B16FFC(&NetworkManager_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_1223, v18);
    byte_40F8189 = 1;
  }
  userId = 0LL;
  getSuma = 0;
  findSuma = 0;
  userServantCollectionEntityList = 0LL;
  v82 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  cachedUserServantCollectionEntityData = this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  if ( UserServantCollectionMaster_UserServantCollectionEntityDataCache__LoadCache(
         cachedUserServantCollectionEntityData,
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
    v20 = userServantCollectionEntityList;
    if ( userServantCollectionEntityList )
      return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_57:
    sub_B170D4();
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_57;
  v78 = isEquip;
  CollectionList_31591300 = ServantMaster__GetCollectionList_31591300(MasterData_WarQuestSelectionMaster, isEquip, 0LL);
  if ( !CollectionList_31591300 )
    goto LABEL_57;
  v28 = *(_QWORD *)&CollectionList_31591300->max_length;
  v29 = CollectionList_31591300;
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v79 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v28 >= 1 )
  {
    v34 = (int)v28;
    v35 = (System_String_o **)&StringLiteral_1223;
    v36 = &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo;
    v37 = 0LL;
    v81 = v29;
    do
    {
      if ( v37 >= v29->max_length )
      {
        sub_B17100(IsHideStateServant, v32, v33);
        sub_B170A0();
      }
      v82 = v29->m_Items[v37 + 1];
      v38 = System_Int64__ToString((int64_t)&userId, 0LL);
      v39 = System_Int32__ToString((int32_t)&v82, 0LL);
      v40 = System_String__Concat_43746016(v38, *v35, v39, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_57;
      klass = lookup->klass;
      v43 = *v36;
      v44 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v45 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != v43 )
        {
          ++v45;
          p_offset += 4;
          if ( v45 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_21:
        p_method = sub_AAFEF8(lookup, v43, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v44,
              v40,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        v52 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !v52 )
          goto LABEL_57;
        v53 = v52->klass;
        v54 = *v36;
        v55 = v52;
        if ( *(_WORD *)&v52->klass->_2.bitflags1 )
        {
          v56 = 0LL;
          v57 = &v53->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v57 - 1) != v54 )
          {
            ++v56;
            v57 += 4;
            if ( v56 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
              goto LABEL_29;
          }
          v58 = (__int64)&v53->vtable[*v57 + 2].method;
        }
        else
        {
LABEL_29:
          v58 = sub_AAFEF8(v52, v54, 2LL);
        }
        v72 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v58)(
                v55,
                v40,
                *(_QWORD *)(v58 + 8));
        if ( v72
          && (v74 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)v72 + 300LL) >= (unsigned int)v74) )
        {
          if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v72 + 200LL) + 8 * v74 - 8) == UserServantCollectionEntity_TypeInfo )
            v69 = v72;
          else
            v69 = 0LL;
          if ( !v6 )
          {
LABEL_45:
            if ( !v69 )
              goto LABEL_57;
LABEL_46:
            v75 = *(_DWORD *)(v69 + 40);
            if ( v75 == 1 )
            {
LABEL_49:
              ++*findSum;
            }
            else if ( v75 == 2 )
            {
              ++*v79;
              goto LABEL_49;
            }
LABEL_50:
            if ( !v30 )
              goto LABEL_57;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v30,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
            goto LABEL_52;
          }
        }
        else
        {
          v69 = 0LL;
          if ( !v6 )
            goto LABEL_45;
        }
        if ( !v69 )
          goto LABEL_57;
        IsHideStateServant = UserServantCollectionEntity__IsHideStateServant((UserServantCollectionEntity_o *)v69, v73);
        if ( !IsHideStateServant )
          goto LABEL_46;
      }
      else
      {
        v59 = userId;
        v60 = v30;
        v61 = this;
        v62 = v34;
        v63 = v6;
        v64 = v36;
        v65 = v35;
        v66 = v82;
        v67 = (UserServantCollectionEntity_o *)sub_B170CC(UserServantCollectionEntity_TypeInfo, v48, v49, v50, v51);
        v68 = v66;
        v35 = v65;
        v36 = v64;
        v6 = v63;
        v34 = v62;
        this = v61;
        v30 = v60;
        v29 = v81;
        v69 = (__int64)v67;
        UserServantCollectionEntity___ctor_21403640(v67, v59, v68, v70);
        if ( !v6 )
          goto LABEL_50;
        if ( !v69 )
          goto LABEL_57;
        IsHideStateServant = UserServantCollectionEntity__IsHideStateServant((UserServantCollectionEntity_o *)v69, v71);
        if ( !IsHideStateServant )
          goto LABEL_50;
      }
LABEL_52:
      ++v37;
    }
    while ( (__int64)v37 < v34 );
  }
  v76 = this->fields.cachedUserServantCollectionEntityData;
  if ( !v76 )
    goto LABEL_57;
  UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
    v76,
    userId,
    v78,
    v6,
    *v79,
    *findSum,
    (System_Collections_Generic_List_UserServantCollectionEntity__o *)v30,
    0LL);
  if ( !v30 )
    goto LABEL_57;
  v20 = (System_Collections_Generic_List_UserServantCollectionEntity__o *)v30;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v20,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x21
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *CollectionList; // x0
  __int64 v20; // x8
  System_Int32_array *v21; // x22
  unsigned __int64 v22; // x25
  signed __int64 v23; // x26
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_String_o *v27; // x23
  System_String_o *v28; // x0
  System_String_o *v29; // x23
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v32; // x24
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v36; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v37; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v38; // x24
  unsigned __int64 v39; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x10
  int64_t UserId; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8188 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1223, v15);
    byte_40F8188 = 1;
  }
  UserId = 0LL;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&kind,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_36;
  CollectionList = ServantMaster__GetCollectionList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !CollectionList )
    goto LABEL_36;
  v20 = *(_QWORD *)&CollectionList->max_length;
  v21 = CollectionList;
  if ( (int)v20 >= 1 )
  {
    v22 = 0LL;
    v23 = (int)v20;
    while ( 1 )
    {
      v24 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v22 >= v21->max_length )
      {
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      v27 = v24;
      v28 = System_Int32__ToString((int)v21 + 4 * (int)v22 + 32, 0LL);
      v29 = System_String__Concat_43746016(v27, (System_String_o *)StringLiteral_1223, v28, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        break;
      klass = lookup->klass;
      v32 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v33 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v33;
          p_offset += 4;
          if ( v33 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_17:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
              v32,
              v29,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
      {
        v36 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !v36 )
          break;
        v37 = v36->klass;
        v38 = v36;
        if ( *(_WORD *)&v36->klass->_2.bitflags1 )
        {
          v39 = 0LL;
          v40 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v37->_1.interfaceOffsets->offset;
          while ( *(v40 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v39;
            v40 += 2;
            if ( v39 >= *(unsigned __int16 *)&v36->klass->_2.bitflags1 )
              goto LABEL_25;
          }
          v41 = (__int64)&v37->vtable[*(_DWORD *)v40 + 2].method;
        }
        else
        {
LABEL_25:
          v41 = sub_AAFEF8(v36, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v41)(
                v38,
                v29,
                *(_QWORD *)(v41 + 8));
        if ( !v42 )
          break;
        v43 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) < (unsigned int)v43
          || *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v43 - 8) != UserServantCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(v42 + 40) == kind )
        {
          if ( !v16 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v16,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
        }
      }
      if ( (__int64)++v22 >= v23 )
        goto LABEL_34;
    }
LABEL_36:
    sub_B170D4();
  }
LABEL_34:
  if ( !v16 )
    goto LABEL_36;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
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
  WebViewManager_o *Instance; // x0
  ServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *CollectionList_31591300; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x24
  System_Int32_array *v24; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x23
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x26
  signed __int64 v30; // x27
  int32_t v31; // w1
  System_String_o *v32; // x0
  System_String_o *v33; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  WarBoardEvalValueSquare_CalcEval_o *v36; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v37; // x24
  unsigned __int64 v38; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v41; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v42; // x8
  WarBoardEvalValueSquare_CalcEval_o *v43; // x25
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v44; // x24
  unsigned __int64 v45; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v46; // x11
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x10
  EventMissionProgressRequest_Argument_ProgressData_o *v50; // x1
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-68h] BYREF
  int32_t key; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F818A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, servantEquipIdStrDic);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__, v6);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&UserServantCollectionEntity_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1223, v14);
    byte_40F818A = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (ServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  CollectionList_31591300 = ServantMaster__GetCollectionList_31591300(MasterData_WarQuestSelectionMaster, 1, 0LL);
  if ( !CollectionList_31591300 )
    goto LABEL_42;
  v23 = *(_QWORD *)&CollectionList_31591300->max_length;
  v24 = CollectionList_31591300;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo,
                                                                                                  v19,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)v23 >= 1 )
  {
    v29 = 0LL;
    v30 = (int)v23;
    while ( 1 )
    {
      if ( v29 >= v24->max_length )
      {
        sub_B17100(v26, v27, v28);
        sub_B170A0();
      }
      v31 = v24->m_Items[v29 + 1];
      key = v31;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)servantEquipIdStrDic,
                v31,
                &value,
                (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v32 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_43746016(
                                                          v15,
                                                          (System_String_o *)StringLiteral_1223,
                                                          v32,
                                                          0LL);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)servantEquipIdStrDic,
            key,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
            (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v33 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_43746016(
                                                        v15,
                                                        (System_String_o *)StringLiteral_1223,
                                                        v33,
                                                        0LL);
      }
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        break;
      klass = lookup->klass;
      v36 = value;
      v37 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v38 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v38;
          p_offset += 4;
          if ( v38 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_21:
        p_method = sub_AAFEF8(
                     lookup,
                     System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                     0LL);
      }
      v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))p_method)(
              v37,
              v36,
              *(_QWORD *)(p_method + 8));
      if ( (v26 & 1) != 0 )
      {
        v41 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !v41 )
          break;
        v42 = v41->klass;
        v43 = value;
        v44 = v41;
        if ( *(_WORD *)&v41->klass->_2.bitflags1 )
        {
          v45 = 0LL;
          v46 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v42->_1.interfaceOffsets->offset;
          while ( *(v46 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v45;
            v46 += 2;
            if ( v45 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
              goto LABEL_29;
          }
          v47 = (__int64)&v42->vtable[*(_DWORD *)v46 + 2].method;
        }
        else
        {
LABEL_29:
          v47 = sub_AAFEF8(v41, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
        }
        v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))v47)(
                v44,
                v43,
                *(_QWORD *)(v47 + 8));
        if ( v48
          && (v49 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)v48 + 300LL) >= (unsigned int)v49) )
        {
          if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * v49 - 8) == UserServantCollectionEntity_TypeInfo )
            v50 = (EventMissionProgressRequest_Argument_ProgressData_o *)v48;
          else
            v50 = 0LL;
          if ( !v25 )
            break;
        }
        else
        {
          v50 = 0LL;
          if ( !v25 )
            break;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v25,
          v50,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
      }
      if ( (__int64)++v29 >= v30 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v25;
    }
LABEL_42:
    sub_B170D4();
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v25;
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
  sub_B16F98((BattleServantConfConponent_o *)p_cachedUserServantCollectionEntityList, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B16F98(
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
      sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)p_cachedUserServantCollectionEntityList,
    (System_Int32_array **)userServantCollectionEntityList,
    (System_String_array **)isEquip,
    (System_String_array **)ignoreHideStateServant,
    *(System_Boolean_array ***)&getSum,
    *(System_Int32_array ***)&findSum,
    (System_Int32_array *)userServantCollectionEntityList,
    (System_Int32_array *)method);
}
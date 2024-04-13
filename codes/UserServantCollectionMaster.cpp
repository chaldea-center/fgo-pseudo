void __fastcall UserServantCollectionMaster___ctor(UserServantCollectionMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E6B53 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo, v5, v6, v7);
    byte_42E6B53 = 1;
  }
  v8 = (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)sub_B5D694(UserServantCollectionMaster_UserServantCollectionEntityDataCache_TypeInfo);
  UserServantCollectionMaster_UserServantCollectionEntityDataCache___ctor(v8, 0LL);
  this->fields.cachedUserServantCollectionEntityData = v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.cachedUserServantCollectionEntityData,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    30,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntity(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E6B51 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__,
      userId,
      svtId,
      method);
    byte_42E6B51 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  return (UserServantCollectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                            (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                            PK,
                                            (const MethodInfo_23FB260 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_o *__fastcall UserServantCollectionMaster__GetEntityDefinitely(
        UserServantCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v12; // x1
  __int64 v13; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v15; // x23
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v20; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v21; // x20
  unsigned __int64 v22; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v23; // x11
  __int64 v24; // x0
  UserServantCollectionEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserServantCollectionEntity_o *v27; // x0
  __int64 v28; // x10

  if ( (byte_42E6B54 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId, svtId, method);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v7, v8, v9);
    byte_42E6B54 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, *(const MethodInfo **)&svtId);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v15 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v16 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v16;
      p_offset += 4;
      if ( v16 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AF54C0(
                 lookup,
                 System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                 0LL,
                 v13);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v15,
          PK,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v25 = (UserServantCollectionEntity_o *)sub_B5D694(UserServantCollectionEntity_TypeInfo);
    UserServantCollectionEntity___ctor_21797688(v25, userId, svtId, v26);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B5D69C(lookup, v12);
  v20 = lookup->klass;
  v21 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v20->_1.interfaceOffsets->offset;
    while ( *(v23 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v22;
      v23 += 2;
      if ( v22 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v24 = (__int64)&v20->vtable[*(_DWORD *)v23 + 2].method;
  }
  else
  {
LABEL_16:
    v24 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v19);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x20
  const MethodInfo *v27; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v29; // w21
  int32_t v30; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v31; // x23
  __int64 v32; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_42E6B59 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v23, v24, v25);
    byte_42E6B59 = 1;
  }
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v29 = (int)list;
    v30 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v30,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v31 = list;
        v32 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] == UserServantCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserServantCollectionEntity__IsNew(
                                                                                               (UserServantCollectionEntity_o *)list,
                                                                                               v27);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            syncRoot = v31->fields._syncRoot;
            klass = v31[1].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v36.fields.currentCryptoKey = syncRoot;
            *(_QWORD *)&v36.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                                 v36,
                                                                                                 0LL);
            if ( !v26 )
              break;
            System_Collections_Generic_List_int___Add(
              v26,
              (int32_t)list,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v30 >= v29 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B5D69C(list, v27);
  }
LABEL_17:
  if ( !v26 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_42E6B5C & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, svtId, costumeId, method);
    byte_42E6B5C = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(this, UserId, svtId, v8);
  if ( !EntityDefinitely )
    sub_B5D69C(0LL, v10);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v17; // w21
  int32_t v18; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserServantCollectionEntity_o *v20; // x23
  __int64 v21; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42E6B58 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v12, v13, v14);
    byte_42E6B58 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&svtId);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 0;
  v17 = Count;
  v18 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             list,
             v18,
             (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      v20 = (UserServantCollectionEntity_o *)Item;
      v21 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserServantCollectionEntity_TypeInfo )
      {
        monitor = Item[1].monitor;
        klass = Item[2].klass;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v25.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v25.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL) == svtId )
          return UserServantCollectionEntity__IsNew(v20, *(const MethodInfo **)&svtId);
      }
    }
    if ( ++v18 >= v17 )
      return 0;
  }
}


bool __fastcall UserServantCollectionMaster__IsServantHaving(
        UserServantCollectionMaster_o *this,
        System_Int32_array *svtIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UserServantCollectionMaster_o *v5; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  int32_t v8; // w21
  int64_t UserId; // x0
  const MethodInfo *v10; // x4
  __int64 v11; // x1
  __int64 v13; // x0
  UserServantCollectionEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v5 = this;
  if ( (byte_42E6B5D & 1) == 0 )
  {
    this = (UserServantCollectionMaster_o *)sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)svtIds, (_DWORD)method, v3);
    byte_42E6B5D = 1;
  }
  entity = 0LL;
  if ( !svtIds )
    return 1;
  v6 = *(_QWORD *)&svtIds->max_length;
  if ( !v6 )
    return 1;
  entity = 0LL;
  if ( (int)v6 < 1 )
    return 1;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v8 = svtIds->m_Items[v7 + 1];
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    UserId = NetworkManager__get_UserId(0LL);
    this = (UserServantCollectionMaster_o *)UserServantCollectionMaster__TryGetEntity(v5, &entity, UserId, v8, v10);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    if ( !entity )
      sub_B5D69C(this, v11);
    if ( (unsigned int)(entity->fields.status - 1) > 1 )
      break;
    LODWORD(v6) = svtIds->max_length;
    if ( (__int64)++v7 >= (int)v6 )
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
    v3 = sub_B5D5C8(&System_NotImplementedException_TypeInfo);
    v4 = (System_NotImplementedException_o *)sub_B5D694(v3);
    System_NotImplementedException___ctor(v4, 0LL);
    v5 = sub_B5D5C8(&Method_UserServantCollectionMaster_OnListChangedImplementation__);
    sub_B5D668(v4, v5);
  }
  this = (UserServantCollectionMaster_o *)this->fields.cachedUserServantCollectionEntityData;
  if ( !this )
LABEL_5:
    sub_B5D69C(this, e);
  UserServantCollectionMaster_UserServantCollectionEntityDataCache__Clear(
    (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)this,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserServantCollectionMaster__TryGetEntity(
        UserServantCollectionMaster_o *this,
        UserServantCollectionEntity_o **entity,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E6B52 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&svtId);
    byte_42E6B52 = 1;
  }
  PK = UserServantCollectionEntity__CreatePK(userId, svtId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserServantCollectionMaster__UserServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserServantCollectionMaster__continueDeviceServantComment(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  ServantCommentMaster_o *v25; // x20
  int32_t Count; // w0
  int32_t v27; // w21
  int32_t v28; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v30; // x23
  __int64 v31; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *v34; // x23
  void *v35; // x24
  int32_t v36; // w0
  System_Int32_array *v37; // x23
  System_Int32_array *v38; // x24
  int32_t v39; // w25
  System_Int32_array *v40; // [xsp+0h] [xbp-60h] BYREF
  System_Int32_array *idList; // [xsp+8h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42E6B5A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantCommentMaster___, v8, v9, v10);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v20, v21, v22);
    byte_42E6B5A = 1;
  }
  v40 = 0LL;
  idList = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantCommentMaster___);
  if ( !this->fields.list )
    goto LABEL_25;
  v25 = (ServantCommentMaster_o *)Instance;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v27 = Count;
    v28 = 0;
    while ( 1 )
    {
      Instance = (DataManager_o *)this->fields.list;
      if ( !Instance )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)Instance,
               v28,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( Item )
      {
        v30 = Item;
        v31 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v31
          && (UserServantCollectionEntity_c *)Item->klass->_2.typeHierarchy[v31 - 1] == UserServantCollectionEntity_TypeInfo )
        {
          monitor = Item[1].monitor;
          klass = Item[2].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v42.fields.currentCryptoKey = monitor;
          *(_QWORD *)&v42.fields.fakeValue = klass;
          Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL);
          if ( !v25 )
            break;
          if ( ServantCommentMaster__GetNewList(v25, &idList, &v40, (int32_t)Instance, 0LL) )
          {
            v35 = v30[1].monitor;
            v34 = v30[2].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v43.fields.currentCryptoKey = v35;
            *(_QWORD *)&v43.fields.fakeValue = v34;
            v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
            v37 = v40;
            v38 = idList;
            v39 = v36;
            if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantCommentManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
            }
            ServantCommentManager__SetOpen_27546372(v39, v38, v37, 0LL);
          }
        }
      }
      if ( ++v28 >= v27 )
        return;
    }
LABEL_25:
    sub_B5D69C(Instance, v24);
  }
}


void __fastcall UserServantCollectionMaster__continueDeviceUserServantCollection(
        UserServantCollectionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_int__o *v29; // x20
  __int64 v30; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v32; // w21
  int32_t v33; // w22
  __int64 v34; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  const MethodInfo *v37; // x1
  System_Int32_array *v38; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_42E6B5B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserServantCollectionManager_TypeInfo, v26, v27, v28);
    byte_42E6B5B = 1;
  }
  v29 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( (int)list >= 1 )
  {
    v32 = (int)list;
    v33 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v33,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v34 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (UserServantCollectionEntity_c *)list->klass->_2.typeHierarchy[v34 - 1] == UserServantCollectionEntity_TypeInfo
          && LODWORD(list[1].monitor) == 2 )
        {
          syncRoot = list->fields._syncRoot;
          klass = list[1].klass;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          *(_QWORD *)&v39.fields.currentCryptoKey = syncRoot;
          *(_QWORD *)&v39.fields.fakeValue = klass;
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                               v39,
                                                                                               0LL);
          if ( !v29 )
            break;
          System_Collections_Generic_List_int___Add(
            v29,
            (int32_t)list,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v33 >= v32 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B5D69C(list, v30);
  }
LABEL_17:
  if ( !v29 )
    goto LABEL_22;
  v38 = System_Collections_Generic_List_int___ToArray(
          v29,
          (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( (BYTE3(UserServantCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserServantCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserServantCollectionManager_TypeInfo);
  }
  UserServantCollectionManager__SetOld_21816376(v38, v37);
}


// local variable allocation has failed, the output may be wrong!
UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getCollectionList(
        UserServantCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        bool isEquip,
        bool ignoreHideStateSvt,
        const MethodInfo *method)
{
  _BOOL4 v6; // w19
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  const MethodInfo *v37; // x1
  __int64 cachedUserServantCollectionEntityData; // x0
  __int64 v39; // x21
  __int64 v40; // x25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x24
  signed __int64 v42; // x22
  System_String_o **v43; // x28
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v44; // x21
  unsigned __int64 v45; // x20
  System_String_o *v46; // x26
  System_String_o *v47; // x0
  System_String_o *v48; // x26
  __int64 v49; // x3
  __int64 v50; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v51; // x1
  __int64 v52; // x27
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v58; // x1
  __int64 v59; // x27
  unsigned __int64 v60; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v61; // x11
  __int64 v62; // x0
  int64_t v63; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x25
  UserServantCollectionMaster_o *v65; // x24
  signed __int64 v66; // x23
  _BOOL4 v67; // w22
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v68; // x19
  System_String_o **v69; // x21
  int v70; // w28
  UserServantCollectionEntity_o *v71; // x0
  int32_t v72; // w2
  __int64 v73; // x26
  const MethodInfo *v74; // x3
  __int64 v75; // x10
  int v76; // w8
  __int64 v78; // x0
  bool v79; // [xsp+4h] [xbp-8Ch]
  int32_t *v80; // [xsp+8h] [xbp-88h]
  __int64 v82; // [xsp+18h] [xbp-78h]
  int v83; // [xsp+24h] [xbp-6Ch] BYREF
  System_Collections_Generic_List_UserServantCollectionEntity__o *userServantCollectionEntityList; // [xsp+28h] [xbp-68h] BYREF
  int32_t findSuma; // [xsp+30h] [xbp-60h] BYREF
  int32_t getSuma; // [xsp+34h] [xbp-5Ch] BYREF
  int64_t userId; // [xsp+38h] [xbp-58h] BYREF

  v6 = ignoreHideStateSvt;
  if ( (byte_42E6B56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)getSum, (_DWORD)findSum, isEquip);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&NetworkManager_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v34, v35, v36);
    byte_42E6B56 = 1;
  }
  userId = 0LL;
  getSuma = 0;
  findSuma = 0;
  userServantCollectionEntityList = 0LL;
  v83 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  userId = NetworkManager__get_UserId(0LL);
  v37 = (const MethodInfo *)userId;
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
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
LABEL_57:
    sub_B5D69C(cachedUserServantCollectionEntityData, v37);
  }
  cachedUserServantCollectionEntityData = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                     (DataManager_o *)cachedUserServantCollectionEntityData,
                                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v79 = isEquip;
  cachedUserServantCollectionEntityData = (__int64)ServantMaster__GetCollectionList_32498472(
                                                     (ServantMaster_o *)cachedUserServantCollectionEntityData,
                                                     isEquip,
                                                     0LL);
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  v39 = *(_QWORD *)(cachedUserServantCollectionEntityData + 24);
  v40 = cachedUserServantCollectionEntityData;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  v80 = getSum;
  *getSum = 0;
  *findSum = 0;
  if ( (int)v39 >= 1 )
  {
    v42 = (int)v39;
    v43 = (System_String_o **)&StringLiteral_1245/*":"*/;
    v44 = &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo;
    v45 = 0LL;
    v82 = v40;
    do
    {
      if ( v45 >= *(unsigned int *)(v40 + 24) )
      {
        v78 = sub_B5D6C8(cachedUserServantCollectionEntityData);
        sub_B5D668(v78, 0LL);
      }
      v83 = *(_DWORD *)(v40 + 4 * v45 + 32);
      v46 = System_Int64__ToString((int64_t)&userId, 0LL);
      v47 = System_Int32__ToString((int32_t)&v83, 0LL);
      v48 = System_String__Concat_44580072(v46, *v43, v47, 0LL);
      cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !cachedUserServantCollectionEntityData )
        goto LABEL_57;
      v50 = *(_QWORD *)cachedUserServantCollectionEntityData;
      v51 = *v44;
      v52 = cachedUserServantCollectionEntityData;
      if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
      {
        v53 = 0LL;
        v54 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v54 - 1) != v51 )
        {
          ++v53;
          v54 += 4;
          if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
            goto LABEL_21;
        }
        v55 = v50 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_21:
        v55 = sub_AF54C0(cachedUserServantCollectionEntityData, v51, 0LL, v49);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v55)(v52, v48, *(_QWORD *)(v55 + 8)) & 1) != 0 )
      {
        cachedUserServantCollectionEntityData = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !cachedUserServantCollectionEntityData )
          goto LABEL_57;
        v57 = *(_QWORD *)cachedUserServantCollectionEntityData;
        v58 = *v44;
        v59 = cachedUserServantCollectionEntityData;
        if ( *(_WORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
        {
          v60 = 0LL;
          v61 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v57 + 176)
                                                                                            + 8LL);
          while ( *(v61 - 1) != v58 )
          {
            ++v60;
            v61 += 2;
            if ( v60 >= *(unsigned __int16 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 298LL) )
              goto LABEL_29;
          }
          v62 = v57 + 16LL * (*(_DWORD *)v61 + 2) + 312;
        }
        else
        {
LABEL_29:
          v62 = sub_AF54C0(cachedUserServantCollectionEntityData, v58, 2LL, v56);
        }
        cachedUserServantCollectionEntityData = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v62)(
                                                  v59,
                                                  v48,
                                                  *(_QWORD *)(v62 + 8));
        if ( cachedUserServantCollectionEntityData
          && (v75 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(unsigned __int8 *)(*(_QWORD *)cachedUserServantCollectionEntityData + 300LL) >= (unsigned int)v75) )
        {
          if ( *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)cachedUserServantCollectionEntityData + 200LL)
                                                 + 8 * v75
                                                 - 8) == UserServantCollectionEntity_TypeInfo )
            v73 = cachedUserServantCollectionEntityData;
          else
            v73 = 0LL;
          if ( !v6 )
          {
LABEL_45:
            if ( !v73 )
              goto LABEL_57;
LABEL_46:
            v76 = *(_DWORD *)(v73 + 40);
            if ( v76 == 1 )
            {
LABEL_49:
              ++*findSum;
            }
            else if ( v76 == 2 )
            {
              ++*v80;
              goto LABEL_49;
            }
LABEL_50:
            if ( !v41 )
              goto LABEL_57;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v41,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
            goto LABEL_52;
          }
        }
        else
        {
          v73 = 0LL;
          if ( !v6 )
            goto LABEL_45;
        }
        if ( !v73 )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)v73,
                                                  v37);
        if ( (cachedUserServantCollectionEntityData & 1) == 0 )
          goto LABEL_46;
      }
      else
      {
        v63 = userId;
        v64 = v41;
        v65 = this;
        v66 = v42;
        v67 = v6;
        v68 = v44;
        v69 = v43;
        v70 = v83;
        v71 = (UserServantCollectionEntity_o *)sub_B5D694(UserServantCollectionEntity_TypeInfo);
        v72 = v70;
        v43 = v69;
        v44 = v68;
        v6 = v67;
        v42 = v66;
        this = v65;
        v41 = v64;
        v40 = v82;
        v73 = (__int64)v71;
        UserServantCollectionEntity___ctor_21797688(v71, v63, v72, v74);
        if ( !v6 )
          goto LABEL_50;
        if ( !v73 )
          goto LABEL_57;
        cachedUserServantCollectionEntityData = UserServantCollectionEntity__IsHideStateServant(
                                                  (UserServantCollectionEntity_o *)v73,
                                                  v37);
        if ( (cachedUserServantCollectionEntityData & 1) == 0 )
          goto LABEL_50;
      }
LABEL_52:
      ++v45;
    }
    while ( (__int64)v45 < v42 );
  }
  cachedUserServantCollectionEntityData = (__int64)this->fields.cachedUserServantCollectionEntityData;
  if ( !cachedUserServantCollectionEntityData )
    goto LABEL_57;
  UserServantCollectionMaster_UserServantCollectionEntityDataCache__SaveCache(
    (UserServantCollectionMaster_UserServantCollectionEntityDataCache_o *)cachedUserServantCollectionEntityData,
    userId,
    v79,
    v6,
    *v80,
    *findSum,
    (System_Collections_Generic_List_UserServantCollectionEntity__o *)v41,
    0LL);
  if ( !v41 )
    goto LABEL_57;
  cachedUserServantCollectionEntityData = (__int64)v41;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)cachedUserServantCollectionEntityData,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


UserServantCollectionEntity_array *__fastcall UserServantCollectionMaster__getList(
        UserServantCollectionMaster_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  __int64 Instance; // x0
  __int64 v35; // x1
  __int64 v36; // x8
  __int64 v37; // x22
  unsigned __int64 v38; // x25
  signed __int64 v39; // x26
  System_String_o *v40; // x0
  System_String_o *v41; // x23
  System_String_o *v42; // x0
  System_String_o *v43; // x23
  __int64 v44; // x3
  __int64 v45; // x8
  __int64 v46; // x24
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x3
  __int64 v51; // x8
  __int64 v52; // x24
  unsigned __int64 v53; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v54; // x11
  __int64 v55; // x0
  __int64 v56; // x10
  __int64 v58; // x0
  int64_t UserId; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E6B55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v30, v31, v32);
    byte_42E6B55 = 1;
  }
  UserId = 0LL;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v36 = *(_QWORD *)(Instance + 24);
  v37 = Instance;
  if ( (int)v36 >= 1 )
  {
    v38 = 0LL;
    v39 = (int)v36;
    while ( 1 )
    {
      v40 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v38 >= *(unsigned int *)(v37 + 24) )
      {
        v58 = sub_B5D6C8(v40);
        sub_B5D668(v58, 0LL);
      }
      v41 = v40;
      v42 = System_Int32__ToString((int)v37 + 4 * (int)v38 + 32, 0LL);
      v43 = System_String__Concat_44580072(v41, (System_String_o *)StringLiteral_1245/*":"*/, v42, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v45 = *(_QWORD *)Instance;
      v46 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v47 = 0LL;
        v48 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v48 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_17;
        }
        v49 = v45 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_17:
        v49 = sub_AF54C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v44);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v49)(v46, v43, *(_QWORD *)(v49 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v51 = *(_QWORD *)Instance;
        v52 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v53 = 0LL;
          v54 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v51 + 176)
                                                                                            + 8LL);
          while ( *(v54 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v53;
            v54 += 2;
            if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_25;
          }
          v55 = v51 + 16LL * (*(_DWORD *)v54 + 2) + 312;
        }
        else
        {
LABEL_25:
          v55 = sub_AF54C0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v50);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v55)(v52, v43, *(_QWORD *)(v55 + 8));
        if ( !Instance )
          break;
        v35 = Instance;
        v56 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v56
          || *(UserServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v56 - 8) != UserServantCollectionEntity_TypeInfo )
        {
          break;
        }
        if ( *(_DWORD *)(Instance + 40) == kind )
        {
          if ( !v33 )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v33,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Instance,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
        }
      }
      if ( (__int64)++v38 >= v39 )
        goto LABEL_34;
    }
LABEL_36:
    sub_B5D69C(Instance, v35);
  }
LABEL_34:
  if ( !v33 )
    goto LABEL_36;
  return (UserServantCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                                (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserServantCollectionEntity__ToArray__);
}


System_Collections_Generic_List_UserServantCollectionEntity__o *__fastcall UserServantCollectionMaster__getServantEquipCollectionList(
        UserServantCollectionMaster_o *this,
        System_Collections_Generic_Dictionary_int__string__o *servantEquipIdStrDic,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  System_String_o *v36; // x21
  DataManager_o *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x1
  struct DataMasterBase_array *datalist; // x24
  DataManager_o *v40; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v41; // x23
  __int64 v42; // x0
  unsigned __int64 v43; // x26
  signed __int64 v44; // x27
  int32_t v45; // w1
  System_String_o *v46; // x0
  System_String_o *v47; // x0
  __int64 v48; // x3
  DataManager_c *klass; // x8
  WarBoardEvalValueSquare_CalcEval_o *v50; // x25
  DataManager_o *v51; // x24
  unsigned __int64 v52; // x10
  int32_t *p_offset; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  DataManager_c *v56; // x8
  WarBoardEvalValueSquare_CalcEval_o *v57; // x25
  DataManager_o *v58; // x24
  unsigned __int64 v59; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v60; // x11
  __int64 v61; // x0
  __int64 v62; // x10
  __int64 v64; // x0
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+8h] [xbp-68h] BYREF
  int32_t key; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E6B57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, (_DWORD)servantEquipIdStrDic, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&NetworkManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&UserServantCollectionEntity_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v33, v34, v35);
    byte_42E6B57 = 1;
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
  v36 = System_Int64__ToString((int64_t)&UserId, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)ServantMaster__GetCollectionList_32498472((ServantMaster_o *)Instance, 1, 0LL);
  if ( !Instance )
    goto LABEL_42;
  datalist = Instance->fields.datalist;
  v40 = Instance;
  v41 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v41,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserServantCollectionEntity___ctor__);
  if ( (int)datalist >= 1 )
  {
    v43 = 0LL;
    v44 = (int)datalist;
    while ( 1 )
    {
      if ( v43 >= LODWORD(v40->fields.datalist) )
      {
        v64 = sub_B5D6C8(v42);
        sub_B5D668(v64, 0LL);
      }
      v45 = *((_DWORD *)&v40->fields.lookup + v43);
      key = v45;
      if ( servantEquipIdStrDic )
      {
        if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)servantEquipIdStrDic,
                v45,
                &value,
                (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__string__TryGetValue__) )
        {
          v46 = System_Int32__ToString((int32_t)&key, 0LL);
          value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_44580072(
                                                          v36,
                                                          (System_String_o *)StringLiteral_1245/*":"*/,
                                                          v46,
                                                          0LL);
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
            (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)servantEquipIdStrDic,
            key,
            (WarBoardEvalValueSquare_EvalValueSquare_o *)value,
            (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__string__Add__);
        }
      }
      else
      {
        v47 = System_Int32__ToString((int32_t)&key, 0LL);
        value = (WarBoardEvalValueSquare_CalcEval_o *)System_String__Concat_44580072(
                                                        v36,
                                                        (System_String_o *)StringLiteral_1245/*":"*/,
                                                        v47,
                                                        0LL);
      }
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      klass = Instance->klass;
      v50 = value;
      v51 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v52 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v52;
          p_offset += 4;
          if ( v52 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_21;
        }
        v54 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_21:
        v54 = sub_AF54C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v48);
      }
      v42 = (*(__int64 (__fastcall **)(DataManager_o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))v54)(
              v51,
              v50,
              *(_QWORD *)(v54 + 8));
      if ( (v42 & 1) != 0 )
      {
        Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v56 = Instance->klass;
        v57 = value;
        v58 = Instance;
        if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
        {
          v59 = 0LL;
          v60 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v56->_1.interfaceOffsets->offset;
          while ( *(v60 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v59;
            v60 += 2;
            if ( v59 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
              goto LABEL_29;
          }
          v61 = (__int64)(&v56->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v60);
        }
        else
        {
LABEL_29:
          v61 = sub_AF54C0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL,
                  v55);
        }
        Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, WarBoardEvalValueSquare_CalcEval_o *, _QWORD))v61)(
                                      v58,
                                      v57,
                                      *(_QWORD *)(v61 + 8));
        if ( Instance
          && (v62 = *(&UserServantCollectionEntity_TypeInfo->_2.bitflags2 + 1),
              *(&Instance->klass->_2.bitflags2 + 1) >= (unsigned int)v62) )
        {
          if ( (UserServantCollectionEntity_c *)Instance->klass->_2.typeHierarchy[v62 - 1] == UserServantCollectionEntity_TypeInfo )
            v38 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
          else
            v38 = 0LL;
          if ( !v41 )
            break;
        }
        else
        {
          v38 = 0LL;
          if ( !v41 )
            break;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v41,
          v38,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserServantCollectionEntity__Add__);
      }
      if ( (__int64)++v43 >= v44 )
        return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v41;
    }
LABEL_42:
    sub_B5D69C(Instance, v38);
  }
  return (System_Collections_Generic_List_UserServantCollectionEntity__o *)v41;
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
  sub_B5D560((BattleServantConfConponent_o *)p_cachedUserServantCollectionEntityList, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B5D560(
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
      sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)p_cachedUserServantCollectionEntityList,
    (System_Int32_array **)userServantCollectionEntityList,
    (System_String_array **)isEquip,
    (System_String_array **)ignoreHideStateServant,
    *(System_Boolean_array ***)&getSum,
    *(System_Int32_array ***)&findSum,
    (System_Int32_array *)userServantCollectionEntityList,
    (System_Int32_array *)method);
}
void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188ABE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method);
    byte_4188ABE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    251,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4188ABC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId);
    byte_4188ABC = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_24E4520 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v11; // x1
  __int64 v12; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v14; // x21
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v18; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v19; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x20
  unsigned __int64 v21; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v22; // x11
  __int64 v23; // x0
  int64_t v24; // x20
  int32_t v25; // w21
  UserCommandCodeCollectionEntity_o *v26; // x19
  const MethodInfo *v27; // x3
  UserCommandCodeCollectionEntity_o *v28; // x0
  __int64 v29; // x10
  int32_t v31; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v32; // [xsp+8h] [xbp-28h] BYREF

  v32 = userId;
  v31 = svtId;
  if ( (byte_4188ABF & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B2C35C(&UserCommandCodeCollectionEntity_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v6);
    byte_4188ABF = 1;
  }
  v7 = System_Int64__ToString((int64_t)&v32, 0LL);
  v8 = System_Int32__ToString((int32_t)&v31, 0LL);
  v9 = System_String__Concat_44307816(v7, (System_String_o *)StringLiteral_1225/*":"*/, v8, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v14 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v15 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v15;
      p_offset += 4;
      if ( v15 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
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
                 v12);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v14,
          v9,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v24 = v32;
    v25 = v31;
    v26 = (UserCommandCodeCollectionEntity_o *)sub_B2C42C(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_26957388(v26, v24, v25, v27);
    return v26;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B2C434(lookup, v11);
  v19 = lookup->klass;
  v20 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v19->_1.interfaceOffsets->offset;
    while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v21;
      v22 += 2;
      if ( v21 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v23 = (__int64)&v19->vtable[*(_DWORD *)v22 + 2].method;
  }
  else
  {
LABEL_16:
    v23 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v18);
  }
  v28 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v23)(
                                               v20,
                                               v9,
                                               *(_QWORD *)(v23 + 8));
  if ( !v28 )
    return 0LL;
  v29 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v29 )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v28->klass->_2.typeHierarchy[v29 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v28;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_4188AC3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&UserCommandCodeCollectionEntity_TypeInfo, v9);
    byte_4188AC3 = 1;
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
        v16 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                                               (UserCommandCodeCollectionEntity_o *)list,
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
bool __fastcall UserCommandCodeCollectionMaster__IsNew(
        UserCommandCodeCollectionMaster_o *this,
        int32_t commandCodeId,
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
  UserCommandCodeCollectionEntity_o *v13; // x23
  __int64 v14; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4188AC2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B2C35C(&UserCommandCodeCollectionEntity_TypeInfo, v7);
    byte_4188AC2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B2C434(list, *(_QWORD *)&commandCodeId);
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
      v13 = (UserCommandCodeCollectionEntity_o *)Item;
      v14 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v14
        && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[v14 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v18, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v13, *(const MethodInfo **)&commandCodeId);
      }
    }
    if ( ++v11 >= v10 )
      return 0;
  }
}


bool __fastcall UserCommandCodeCollectionMaster__TryGetEntity(
        UserCommandCodeCollectionMaster_o *this,
        UserCommandCodeCollectionEntity_o **entity,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_4188ABD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity);
    byte_4188ABD = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_4188AC4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&UserCommandCodeCollectionEntity_TypeInfo, v9);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v10);
    byte_4188AC4 = 1;
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
        v16 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v16
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] == UserCommandCodeCollectionEntity_TypeInfo
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
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__SetOld_26962764(v20, v19);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getCollectionList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
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
  DataManager_o *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v15; // x1
  struct DataMasterBase_array *datalist; // x19
  DataManager_o *v17; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x23
  unsigned __int64 v19; // x27
  System_String_o *v20; // x24
  System_String_o *v21; // x0
  System_String_o *v22; // x24
  __int64 v23; // x3
  DataManager_c *klass; // x8
  DataManager_o *v25; // x25
  unsigned __int64 v26; // x10
  int *p_offset; // x11
  __int64 v28; // x0
  __int64 v29; // x3
  DataManager_c *v30; // x8
  DataManager_o *v31; // x25
  unsigned __int64 v32; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v33; // x11
  __int64 v34; // x0
  int64_t v35; // x25
  UserCommandCodeCollectionEntity_o *v36; // x24
  const MethodInfo *v37; // x3
  const MethodInfo_2EF4460 *v38; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x0
  __int64 v40; // x10
  int masterDataBytes; // w8
  __int64 v43; // x0
  int commandCodeId; // [xsp+10h] [xbp-60h]
  int v47; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4188AC1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v13);
    byte_4188AC1 = 1;
  }
  UserId = 0LL;
  v47 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  datalist = Instance->fields.datalist;
  v17 = Instance;
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)datalist >= 1 )
  {
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= LODWORD(v17->fields.datalist) )
      {
        v43 = sub_B2C460(Instance);
        sub_B2C400(v43, 0LL);
      }
      v47 = *((_DWORD *)&v17->fields.lookup + v19);
      v20 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v21 = System_Int32__ToString((int32_t)&v47, 0LL);
      v22 = System_String__Concat_44307816(v20, (System_String_o *)StringLiteral_1225/*":"*/, v21, 0LL);
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_42;
      klass = Instance->klass;
      v25 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v26 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v26;
          p_offset += 4;
          if ( v26 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v28 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_17:
        v28 = sub_AC5258(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v23);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v28)(v25, v22, *(_QWORD *)(v28 + 8)) & 1) != 0 )
        break;
      v35 = UserId;
      commandCodeId = v47;
      v36 = (UserCommandCodeCollectionEntity_o *)sub_B2C42C(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_26957388(v36, v35, commandCodeId, v37);
      if ( !v18 )
        goto LABEL_42;
      v38 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      v39 = v18;
      v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)v36;
LABEL_38:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v39, v15, v38);
      if ( (__int64)++v19 >= (int)datalist )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_42;
    v30 = Instance->klass;
    v31 = Instance;
    if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
    {
      v32 = 0LL;
      v33 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v30->_1.interfaceOffsets->offset;
      while ( *(v33 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v32;
        v33 += 2;
        if ( v32 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      v34 = (__int64)(&v30->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v33);
    }
    else
    {
LABEL_25:
      v34 = sub_AC5258(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v29);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v34)(
                                  v31,
                                  v22,
                                  *(_QWORD *)(v34 + 8));
    if ( !Instance )
      goto LABEL_42;
    v15 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v40 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v40
      || (UserCommandCodeCollectionEntity_c *)Instance->klass->_2.typeHierarchy[v40 - 1] != UserCommandCodeCollectionEntity_TypeInfo )
    {
      goto LABEL_42;
    }
    masterDataBytes = (int)Instance->fields.masterDataBytes;
    if ( masterDataBytes != 1 )
    {
      if ( masterDataBytes != 2 )
      {
LABEL_36:
        if ( !v18 )
          goto LABEL_42;
        v38 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
        v39 = v18;
        goto LABEL_38;
      }
      ++*getSum;
    }
    ++*findSum;
    goto LABEL_36;
  }
  if ( !v18 )
LABEL_42:
    sub_B2C434(Instance, v15);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v18,
                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4188AC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4188AC5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v8);
  }
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           svtId,
           0LL);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_4188AC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_B2C35C(&NetworkManager_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_1225/*":"*/, v13);
    byte_4188AC0 = 1;
  }
  UserId = 0LL;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
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
        v37 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v37
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v37 - 8) != UserCommandCodeCollectionEntity_TypeInfo )
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
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
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
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}
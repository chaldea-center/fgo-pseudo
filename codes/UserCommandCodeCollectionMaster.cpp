void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4215B7F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method);
    byte_4215B7F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    251,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4215B7D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId);
    byte_4215B7D = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_266A024 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
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
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x21
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v18; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v19; // x20
  unsigned __int64 v20; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x11
  __int64 v22; // x0
  int64_t v23; // x20
  int32_t v24; // w21
  UserCommandCodeCollectionEntity_o *v25; // x19
  const MethodInfo *v26; // x3
  UserCommandCodeCollectionEntity_o *v27; // x0
  __int64 v28; // x10
  int32_t v30; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v31; // [xsp+8h] [xbp-28h] BYREF

  v31 = userId;
  v30 = svtId;
  if ( (byte_4215B80 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B0D8A4(&UserCommandCodeCollectionEntity_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v6);
    byte_4215B80 = 1;
  }
  v7 = System_Int64__ToString((int64_t)&v31, 0LL);
  v8 = System_Int32__ToString((int32_t)&v30, 0LL);
  v9 = System_String__Concat_43852188(v7, (System_String_o *)StringLiteral_1232/*":"*/, v8, 0LL);
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
    p_method = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          v9,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v23 = v31;
    v24 = v30;
    v25 = (UserCommandCodeCollectionEntity_o *)sub_B0D974(UserCommandCodeCollectionEntity_TypeInfo, v16, v17);
    UserCommandCodeCollectionEntity___ctor_26709720(v25, v23, v24, v26);
    return v25;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B0D97C(lookup);
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
    v22 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v27 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v22)(
                                               v19,
                                               v9,
                                               *(_QWORD *)(v22 + 8));
  if ( !v27 )
    return 0LL;
  v28 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v27->klass->_2.bitflags2 + 1) < (unsigned int)v28 )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v27->klass->_2.typeHierarchy[v28 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v27;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v13; // w21
  int32_t v14; // w22
  const MethodInfo *v15; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x23
  __int64 v17; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4215B84 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&UserCommandCodeCollectionEntity_TypeInfo, v10);
    byte_4215B84 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( list )
      {
        v16 = list;
        v17 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v17
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[v17 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                                               (UserCommandCodeCollectionEntity_o *)list,
                                                                                               v15);
          if ( ((unsigned __int8)list & 1) != 0 )
          {
            syncRoot = v16->fields._syncRoot;
            klass = v16[1].klass;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v21.fields.currentCryptoKey = syncRoot;
            *(_QWORD *)&v21.fields.fakeValue = klass;
            list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                                 v21,
                                                                                                 0LL);
            if ( !v11 )
              break;
            System_Collections_Generic_List_int___Add(
              v11,
              (int32_t)list,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
      }
      if ( ++v14 >= v13 )
        goto LABEL_17;
    }
LABEL_19:
    sub_B0D97C(list);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  const MethodInfo *v17; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4215B83 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B0D8A4(&UserCommandCodeCollectionEntity_TypeInfo, v7);
    byte_4215B83 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B0D97C(list);
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
             (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        *(_QWORD *)&v19.fields.currentCryptoKey = monitor;
        *(_QWORD *)&v19.fields.fakeValue = klass;
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v13, v17);
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

  if ( (byte_4215B7E & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity);
    byte_4215B7E = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__c *klass; // x23
  Il2CppObject *syncRoot; // x24
  const MethodInfo *v19; // x1
  System_Int32_array *v20; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_4215B85 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&UserCommandCodeCollectionEntity_TypeInfo, v10);
    sub_B0D8A4(&UserCommandCodeCollectionManager_TypeInfo, v11);
    byte_4215B85 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                                                                                       list,
                                                                                       (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                                                                                           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                                                               v21,
                                                                                               0LL);
          if ( !v12 )
            break;
          System_Collections_Generic_List_int___Add(
            v12,
            (int32_t)list,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
      }
      if ( ++v15 >= v14 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B0D97C(list);
  }
LABEL_17:
  if ( !v12 )
    goto LABEL_22;
  v20 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__SetOld_26715096(v20, v19);
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
  __int64 v15; // x1
  __int64 v16; // x2
  struct DataMasterBase_array *datalist; // x19
  DataManager_o *v18; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x23
  unsigned __int64 v20; // x27
  System_String_o *v21; // x24
  System_String_o *v22; // x0
  System_String_o *v23; // x24
  DataManager_c *klass; // x8
  DataManager_o *v25; // x25
  unsigned __int64 v26; // x10
  int *p_offset; // x11
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  DataManager_c *v31; // x8
  DataManager_o *v32; // x25
  unsigned __int64 v33; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v34; // x11
  __int64 v35; // x0
  int64_t v36; // x25
  UserCommandCodeCollectionEntity_o *v37; // x24
  const MethodInfo *v38; // x3
  const MethodInfo_2FC56E8 *v39; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v41; // x1
  __int64 v42; // x10
  int masterDataBytes; // w8
  __int64 v45; // x0
  int commandCodeId; // [xsp+10h] [xbp-60h]
  int v49; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4215B82 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v13);
    byte_4215B82 = 1;
  }
  UserId = 0LL;
  v49 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  datalist = Instance->fields.datalist;
  v18 = Instance;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)datalist >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= LODWORD(v18->fields.datalist) )
      {
        v45 = sub_B0D9A8(Instance);
        sub_B0D948(v45, 0LL);
      }
      v49 = *((_DWORD *)&v18->fields.lookup + v20);
      v21 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v22 = System_Int32__ToString((int32_t)&v49, 0LL);
      v23 = System_String__Concat_43852188(v21, (System_String_o *)StringLiteral_1232/*":"*/, v22, 0LL);
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
        v28 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v28)(v25, v23, *(_QWORD *)(v28 + 8)) & 1) != 0 )
        break;
      v36 = UserId;
      commandCodeId = v49;
      v37 = (UserCommandCodeCollectionEntity_o *)sub_B0D974(UserCommandCodeCollectionEntity_TypeInfo, v29, v30);
      UserCommandCodeCollectionEntity___ctor_26709720(v37, v36, commandCodeId, v38);
      if ( !v19 )
        goto LABEL_42;
      v39 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      v40 = v19;
      v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)v37;
LABEL_38:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v40, v41, v39);
      if ( (__int64)++v20 >= (int)datalist )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_42;
    v31 = Instance->klass;
    v32 = Instance;
    if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v31->_1.interfaceOffsets->offset;
      while ( *(v34 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v33;
        v34 += 2;
        if ( v33 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      v35 = (__int64)(&v31->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v34);
    }
    else
    {
LABEL_25:
      v35 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v35)(
                                  v32,
                                  v23,
                                  *(_QWORD *)(v35 + 8));
    if ( !Instance )
      goto LABEL_42;
    v41 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v42 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (UserCommandCodeCollectionEntity_c *)Instance->klass->_2.typeHierarchy[v42 - 1] != UserCommandCodeCollectionEntity_TypeInfo )
    {
      goto LABEL_42;
    }
    masterDataBytes = (int)Instance->fields.masterDataBytes;
    if ( masterDataBytes != 1 )
    {
      if ( masterDataBytes != 2 )
      {
LABEL_36:
        if ( !v19 )
          goto LABEL_42;
        v39 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
        v40 = v19;
        goto LABEL_38;
      }
      ++*getSum;
    }
    ++*findSum;
    goto LABEL_36;
  }
  if ( !v19 )
LABEL_42:
    sub_B0D97C(Instance);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  DataManager_o *Instance; // x0

  if ( (byte_4215B86 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_4215B86 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_B0D97C(Instance);
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
  __int64 v16; // x8
  __int64 v17; // x22
  unsigned __int64 v18; // x25
  signed __int64 v19; // x26
  System_String_o *v20; // x0
  System_String_o *v21; // x23
  System_String_o *v22; // x0
  System_String_o *v23; // x23
  __int64 v24; // x8
  __int64 v25; // x24
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x24
  unsigned __int64 v31; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v32; // x11
  __int64 v33; // x0
  __int64 v34; // x10
  __int64 v36; // x0
  int64_t UserId; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4215B81 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_B0D8A4(&NetworkManager_TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B0D8A4(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_1232/*":"*/, v13);
    byte_4215B81 = 1;
  }
  UserId = 0LL;
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&kind,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_36;
  Instance = (__int64)ServantMaster__GetCollectionList((ServantMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_36;
  v16 = *(_QWORD *)(Instance + 24);
  v17 = Instance;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    v19 = (int)v16;
    while ( 1 )
    {
      v20 = System_Int64__ToString((int64_t)&UserId, 0LL);
      if ( v18 >= *(unsigned int *)(v17 + 24) )
      {
        v36 = sub_B0D9A8(v20);
        sub_B0D948(v36, 0LL);
      }
      v21 = v20;
      v22 = System_Int32__ToString((int)v17 + 4 * (int)v18 + 32, 0LL);
      v23 = System_String__Concat_43852188(v21, (System_String_o *)StringLiteral_1232/*":"*/, v22, 0LL);
      Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        break;
      v24 = *(_QWORD *)Instance;
      v25 = Instance;
      if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
      {
        v26 = 0LL;
        v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v26;
          v27 += 4;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
            goto LABEL_17;
        }
        v28 = v24 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_17:
        v28 = sub_AA67A0(Instance, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v28)(v25, v23, *(_QWORD *)(v28 + 8));
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
        if ( !Instance )
          break;
        v29 = *(_QWORD *)Instance;
        v30 = Instance;
        if ( *(_WORD *)(*(_QWORD *)Instance + 298LL) )
        {
          v31 = 0LL;
          v32 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v29 + 176)
                                                                                            + 8LL);
          while ( *(v32 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
          {
            ++v31;
            v32 += 2;
            if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)Instance + 298LL) )
              goto LABEL_25;
          }
          v33 = v29 + 16LL * (*(_DWORD *)v32 + 2) + 312;
        }
        else
        {
LABEL_25:
          v33 = sub_AA67A0(
                  Instance,
                  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                  2LL);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v33)(v30, v23, *(_QWORD *)(v33 + 8));
        if ( !Instance )
          break;
        v34 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v34
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v34 - 8) != UserCommandCodeCollectionEntity_TypeInfo )
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
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
        }
      }
      if ( (__int64)++v18 >= v19 )
        goto LABEL_34;
    }
LABEL_36:
    sub_B0D97C(Instance);
  }
LABEL_34:
  if ( !v14 )
    goto LABEL_36;
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}
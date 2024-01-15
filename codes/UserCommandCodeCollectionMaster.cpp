void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FAAE0 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      method);
    byte_40FAAE0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    251,
    (const MethodInfo_266F73C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FAADE & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId);
    byte_40FAADE = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
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
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v20; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v21; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v22; // x20
  unsigned __int64 v23; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x11
  __int64 v25; // x0
  int64_t v26; // x20
  int32_t v27; // w21
  UserCommandCodeCollectionEntity_o *v28; // x19
  const MethodInfo *v29; // x3
  UserCommandCodeCollectionEntity_o *v30; // x0
  __int64 v31; // x10
  int32_t v33; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v34; // [xsp+8h] [xbp-28h] BYREF

  v34 = userId;
  v33 = svtId;
  if ( (byte_40FAAE1 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId);
    sub_B16FFC(&UserCommandCodeCollectionEntity_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v6);
    byte_40FAAE1 = 1;
  }
  v7 = System_Int64__ToString((int64_t)&v34, 0LL);
  v8 = System_Int32__ToString((int32_t)&v33, 0LL);
  v9 = System_String__Concat_43746016(v7, (System_String_o *)StringLiteral_1223/*":"*/, v8, 0LL);
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
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v12,
          v9,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v26 = v34;
    v27 = v33;
    v28 = (UserCommandCodeCollectionEntity_o *)sub_B170CC(UserCommandCodeCollectionEntity_TypeInfo, v16, v17, v18, v19);
    UserCommandCodeCollectionEntity___ctor_26520280(v28, v26, v27, v29);
    return v28;
  }
  v20 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !v20 )
LABEL_26:
    sub_B170D4();
  v21 = v20->klass;
  v22 = v20;
  if ( *(_WORD *)&v20->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v21->_1.interfaceOffsets->offset;
    while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v23;
      v24 += 2;
      if ( v23 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v25 = (__int64)&v21->vtable[*(_DWORD *)v24 + 2].method;
  }
  else
  {
LABEL_16:
    v25 = sub_AAFEF8(v20, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
  }
  v30 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v25)(
                                               v22,
                                               v9,
                                               *(_QWORD *)(v25 + 8));
  if ( !v30 )
    return 0LL;
  v31 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v30->klass->_2.bitflags2 + 1) < (unsigned int)v31 )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v30->klass->_2.typeHierarchy[v31 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v30;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_40FAAE5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    byte_40FAAE5 = 1;
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
        v22 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v22
          && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[v22 - 1] == UserCommandCodeCollectionEntity_TypeInfo
          && UserCommandCodeCollectionEntity__IsNew((UserCommandCodeCollectionEntity_o *)Item, v20) )
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserCommandCodeCollectionEntity_o *v14; // x23
  __int64 v15; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  const MethodInfo *v18; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40FAAE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&commandCodeId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
    sub_B16FFC(&UserCommandCodeCollectionEntity_TypeInfo, v7);
    byte_40FAAE4 = 1;
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
      v14 = (UserCommandCodeCollectionEntity_o *)Item;
      v15 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v15
        && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[v15 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v14, v18);
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

  if ( (byte_40FAADF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      entity);
    byte_40FAADF = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_40FAAE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_B16FFC(&UserCommandCodeCollectionManager_TypeInfo, v13);
    byte_40FAAE6 = 1;
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
        v21 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
          && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserCommandCodeCollectionEntity_TypeInfo
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
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__SetOld_26525656(v26, v25);
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
  WebViewManager_o *Instance; // x0
  CommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *CollectionList; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x19
  System_Int32_array *v22; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x23
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x27
  System_String_o *v28; // x24
  System_String_o *v29; // x0
  System_String_o *v30; // x24
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v33; // x25
  unsigned __int64 v34; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v41; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v42; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v43; // x25
  unsigned __int64 v44; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v45; // x11
  __int64 v46; // x0
  int64_t v47; // x25
  UserCommandCodeCollectionEntity_o *v48; // x24
  const MethodInfo *v49; // x3
  const MethodInfo_2F25CD8 *v50; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v51; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v52; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x0
  __int64 v54; // x10
  int v55; // w8
  int commandCodeId; // [xsp+10h] [xbp-60h]
  int v60; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40FAAE3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_CommandCodeMaster___, getSum);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B16FFC(&UserCommandCodeCollectionEntity_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v13);
    byte_40FAAE3 = 1;
  }
  UserId = 0LL;
  v60 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (CommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_42;
  CollectionList = CommandCodeMaster__GetCollectionList(MasterData_WarQuestSelectionMaster, 0LL);
  if ( !CollectionList )
    goto LABEL_42;
  v21 = *(_QWORD *)&CollectionList->max_length;
  v22 = CollectionList;
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)v21 >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      if ( v27 >= v22->max_length )
      {
        sub_B17100(v24, v25, v26);
        sub_B170A0();
      }
      v60 = v22->m_Items[v27 + 1];
      v28 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v29 = System_Int32__ToString((int32_t)&v60, 0LL);
      v30 = System_String__Concat_43746016(v28, (System_String_o *)StringLiteral_1223/*":"*/, v29, 0LL);
      lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !lookup )
        goto LABEL_42;
      klass = lookup->klass;
      v33 = lookup;
      if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
      {
        v34 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v34;
          p_offset += 4;
          if ( v34 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
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
              v33,
              v30,
              *(_QWORD *)(p_method + 8)) & 1) != 0 )
        break;
      v47 = UserId;
      commandCodeId = v60;
      v48 = (UserCommandCodeCollectionEntity_o *)sub_B170CC(
                                                   UserCommandCodeCollectionEntity_TypeInfo,
                                                   v37,
                                                   v38,
                                                   v39,
                                                   v40);
      UserCommandCodeCollectionEntity___ctor_26520280(v48, v47, commandCodeId, v49);
      if ( !v23 )
        goto LABEL_42;
      v50 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      v51 = v23;
      v52 = (EventMissionProgressRequest_Argument_ProgressData_o *)v48;
LABEL_38:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v51, v52, v50);
      if ( (__int64)++v27 >= (int)v21 )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    v41 = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !v41 )
      goto LABEL_42;
    v42 = v41->klass;
    v43 = v41;
    if ( *(_WORD *)&v41->klass->_2.bitflags1 )
    {
      v44 = 0LL;
      v45 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v42->_1.interfaceOffsets->offset;
      while ( *(v45 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v44;
        v45 += 2;
        if ( v44 >= *(unsigned __int16 *)&v41->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      v46 = (__int64)&v42->vtable[*(_DWORD *)v45 + 2].method;
    }
    else
    {
LABEL_25:
      v46 = sub_AAFEF8(v41, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL);
    }
    v53 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v46)(
                                                                   v43,
                                                                   v30,
                                                                   *(_QWORD *)(v46 + 8));
    if ( !v53 )
      goto LABEL_42;
    v52 = v53;
    v54 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v53->klass->_2.bitflags2 + 1) < (unsigned int)v54
      || (UserCommandCodeCollectionEntity_c *)v53->klass->_2.typeHierarchy[v54 - 1] != UserCommandCodeCollectionEntity_TypeInfo )
    {
      goto LABEL_42;
    }
    v55 = (int)v53[1].klass;
    if ( v55 != 1 )
    {
      if ( v55 != 2 )
      {
LABEL_36:
        if ( !v23 )
          goto LABEL_42;
        v50 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
        v51 = v23;
        goto LABEL_38;
      }
      ++*getSum;
    }
    ++*findSum;
    goto LABEL_36;
  }
  if ( !v23 )
LABEL_42:
    sub_B170D4();
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  UserServantCommandCodeMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FAAE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40FAAE7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (UserServantCommandCodeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                 (DataManager_o *)Instance,
                                                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return UserServantCommandCodeMaster__getCommandCodeIdList(MasterData_WarQuestSelectionMaster, userId, svtId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_40FAAE2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, *(_QWORD *)&kind);
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v11);
    sub_B16FFC(&NetworkManager_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&UserCommandCodeCollectionEntity_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_1223/*":"*/, v15);
    byte_40FAAE2 = 1;
  }
  UserId = 0LL;
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo,
                                                                                                  *(_QWORD *)&kind,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
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
      v29 = System_String__Concat_43746016(v27, (System_String_o *)StringLiteral_1223/*":"*/, v28, 0LL);
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
        v43 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) < (unsigned int)v43
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v42 + 200LL) + 8 * v43 - 8) != UserCommandCodeCollectionEntity_TypeInfo )
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
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
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
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v16,
                                                    (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}
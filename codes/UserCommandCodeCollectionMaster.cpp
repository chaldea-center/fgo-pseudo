void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B14AB & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
    byte_42B14AB = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    252,
    (const MethodInfo_23E268C *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42B14A9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
    byte_42B14A9 = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23E2728 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v12; // x21
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v17; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x20
  unsigned __int64 v19; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v20; // x11
  __int64 v21; // x0
  int64_t v22; // x20
  int32_t v23; // w21
  UserCommandCodeCollectionEntity_o *v24; // x19
  const MethodInfo *v25; // x3
  UserCommandCodeCollectionEntity_o *v26; // x0
  __int64 v27; // x10
  int32_t v29; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v30; // [xsp+8h] [xbp-28h] BYREF

  v30 = userId;
  v29 = svtId;
  if ( (byte_42B14AC & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B14AC = 1;
  }
  v5 = System_Int64__ToString((int64_t)&v30, 0LL);
  v6 = System_Int32__ToString((int32_t)&v29, 0LL);
  v7 = System_String__Concat_44570600(v5, (System_String_o *)StringLiteral_1240/*":"*/, v6, 0LL);
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
          v7,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v22 = v30;
    v23 = v29;
    v24 = (UserCommandCodeCollectionEntity_o *)sub_B52A54(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_27409048(v24, v22, v23, v25);
    return v24;
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
  v26 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v21)(
                                               v18,
                                               v7,
                                               *(_QWORD *)(v21 + 8));
  if ( !v26 )
    return 0LL;
  v27 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27 )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v26->klass->_2.typeHierarchy[v27 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v26;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_42B14B0 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UserCommandCodeCollectionEntity_TypeInfo);
    byte_42B14B0 = 1;
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
        v9 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v9
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                                               (UserCommandCodeCollectionEntity_o *)list,
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeCollectionMaster__IsNew(
        UserCommandCodeCollectionMaster_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  UserCommandCodeCollectionEntity_o *v10; // x23
  __int64 v11; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_42B14AF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UserCommandCodeCollectionEntity_TypeInfo);
    byte_42B14AF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B52A5C(list, *(_QWORD *)&commandCodeId);
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
      v10 = (UserCommandCodeCollectionEntity_o *)Item;
      v11 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v11
        && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[v11 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v15, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v10, *(const MethodInfo **)&commandCodeId);
      }
    }
    if ( ++v8 >= v7 )
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

  if ( (byte_42B14AA & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
    byte_42B14AA = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_42B14B1 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_B52984(&UserCommandCodeCollectionManager_TypeInfo);
    byte_42B14B1 = 1;
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
        v8 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v8
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[v8 - 1] == UserCommandCodeCollectionEntity_TypeInfo
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
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__SetOld_27414424(v12, v11);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getCollectionList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v6; // x1
  struct DataMasterBase_array *datalist; // x19
  DataManager_o *v8; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x23
  unsigned __int64 v10; // x27
  System_String_o *v11; // x24
  System_String_o *v12; // x0
  System_String_o *v13; // x24
  __int64 v14; // x3
  DataManager_c *klass; // x8
  DataManager_o *v16; // x25
  unsigned __int64 v17; // x10
  int *p_offset; // x11
  __int64 v19; // x0
  __int64 v20; // x3
  DataManager_c *v21; // x8
  DataManager_o *v22; // x25
  unsigned __int64 v23; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v24; // x11
  __int64 v25; // x0
  int64_t v26; // x25
  UserCommandCodeCollectionEntity_o *v27; // x24
  const MethodInfo *v28; // x3
  const MethodInfo_2FF1604 *v29; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x0
  __int64 v31; // x10
  int masterDataBytes; // w8
  __int64 v34; // x0
  int commandCodeId; // [xsp+10h] [xbp-60h]
  int v38; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42B14AE & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B14AE = 1;
  }
  UserId = 0LL;
  v38 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  datalist = Instance->fields.datalist;
  v8 = Instance;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)datalist >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= LODWORD(v8->fields.datalist) )
      {
        v34 = sub_B52A88(Instance);
        sub_B52A28(v34, 0LL);
      }
      v38 = *((_DWORD *)&v8->fields.lookup + v10);
      v11 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v12 = System_Int32__ToString((int32_t)&v38, 0LL);
      v13 = System_String__Concat_44570600(v11, (System_String_o *)StringLiteral_1240/*":"*/, v12, 0LL);
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_42;
      klass = Instance->klass;
      v16 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v17 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v17;
          p_offset += 4;
          if ( v17 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_17:
        v19 = sub_AEB880(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v14);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v19)(v16, v13, *(_QWORD *)(v19 + 8)) & 1) != 0 )
        break;
      v26 = UserId;
      commandCodeId = v38;
      v27 = (UserCommandCodeCollectionEntity_o *)sub_B52A54(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_27409048(v27, v26, commandCodeId, v28);
      if ( !v9 )
        goto LABEL_42;
      v29 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      v30 = v9;
      v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)v27;
LABEL_38:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v30, v6, v29);
      if ( (__int64)++v10 >= (int)datalist )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_42;
    v21 = Instance->klass;
    v22 = Instance;
    if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v21->_1.interfaceOffsets->offset;
      while ( *(v24 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      v25 = (__int64)(&v21->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v24);
    }
    else
    {
LABEL_25:
      v25 = sub_AEB880(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v20);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v25)(
                                  v22,
                                  v13,
                                  *(_QWORD *)(v25 + 8));
    if ( !Instance )
      goto LABEL_42;
    v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v31 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (UserCommandCodeCollectionEntity_c *)Instance->klass->_2.typeHierarchy[v31 - 1] != UserCommandCodeCollectionEntity_TypeInfo )
    {
      goto LABEL_42;
    }
    masterDataBytes = (int)Instance->fields.masterDataBytes;
    if ( masterDataBytes != 1 )
    {
      if ( masterDataBytes != 2 )
      {
LABEL_36:
        if ( !v9 )
          goto LABEL_42;
        v29 = (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
        v30 = v9;
        goto LABEL_38;
      }
      ++*getSum;
    }
    ++*findSum;
    goto LABEL_36;
  }
  if ( !v9 )
LABEL_42:
    sub_B52A5C(Instance, v6);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42B14B2 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B14B2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v7);
  }
  return UserServantCommandCodeMaster__getCommandCodeIdList(
           (UserServantCommandCodeMaster_o *)Instance,
           userId,
           svtId,
           0LL);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_42B14AD & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserCommandCodeCollectionEntity_TypeInfo);
    sub_B52984(&StringLiteral_1240/*":"*/);
    byte_42B14AD = 1;
  }
  UserId = 0LL;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
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
        v28 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v28
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v28 - 8) != UserCommandCodeCollectionEntity_TypeInfo )
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
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
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
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}
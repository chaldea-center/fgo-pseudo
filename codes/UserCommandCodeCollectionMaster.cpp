void __fastcall UserCommandCodeCollectionMaster___ctor(
        UserCommandCodeCollectionMaster_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA186 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA186 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    252,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntity(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA184 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__,
      userId,
      commandCodeId,
      method);
    byte_42EA184 = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, *(const MethodInfo **)&commandCodeId);
  return (UserCommandCodeCollectionEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                                PK,
                                                (const MethodInfo_23FB260 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__GetEntity__);
}


UserCommandCodeCollectionEntity_o *__fastcall UserCommandCodeCollectionMaster__GetEntityDefinitely(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  System_String_o *v13; // x19
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v18; // x21
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *v23; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v24; // x20
  unsigned __int64 v25; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v26; // x11
  __int64 v27; // x0
  int64_t v28; // x20
  int32_t v29; // w21
  UserCommandCodeCollectionEntity_o *v30; // x19
  const MethodInfo *v31; // x3
  UserCommandCodeCollectionEntity_o *v32; // x0
  __int64 v33; // x10
  int32_t v35; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t v36; // [xsp+8h] [xbp-28h] BYREF

  v36 = userId;
  v35 = svtId;
  if ( (byte_42EA187 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, userId, svtId, method);
    sub_B5D5C4(&UserCommandCodeCollectionEntity_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v8, v9, v10);
    byte_42EA187 = 1;
  }
  v11 = System_Int64__ToString((int64_t)&v36, 0LL);
  v12 = System_Int32__ToString((int32_t)&v35, 0LL);
  v13 = System_String__Concat_44580072(v11, (System_String_o *)StringLiteral_1245/*":"*/, v12, 0LL);
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
    goto LABEL_26;
  klass = lookup->klass;
  v18 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v19;
      p_offset += 4;
      if ( v19 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
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
                 v16);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))p_method)(
          v18,
          v13,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
  {
    v28 = v36;
    v29 = v35;
    v30 = (UserCommandCodeCollectionEntity_o *)sub_B5D694(UserCommandCodeCollectionEntity_TypeInfo);
    UserCommandCodeCollectionEntity___ctor_28026288(v30, v28, v29, v31);
    return v30;
  }
  lookup = DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
  if ( !lookup )
LABEL_26:
    sub_B5D69C(lookup, v15);
  v23 = lookup->klass;
  v24 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v23->_1.interfaceOffsets->offset;
    while ( *(v26 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v25;
      v26 += 2;
      if ( v25 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v27 = (__int64)&v23->vtable[*(_DWORD *)v26 + 2].method;
  }
  else
  {
LABEL_16:
    v27 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 2LL, v22);
  }
  v32 = (UserCommandCodeCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v27)(
                                               v24,
                                               v13,
                                               *(_QWORD *)(v27 + 8));
  if ( !v32 )
    return 0LL;
  v33 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v32->klass->_2.bitflags2 + 1) < (unsigned int)v33 )
    return 0LL;
  if ( (UserCommandCodeCollectionEntity_c *)v32->klass->_2.typeHierarchy[v33 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
    return v32;
  return 0LL;
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__GetNewList(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_42EA18B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserCommandCodeCollectionEntity_TypeInfo, v23, v24, v25);
    byte_42EA18B = 1;
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
        v32 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v32
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[v32 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)UserCommandCodeCollectionEntity__IsNew(
                                                                                               (UserCommandCodeCollectionEntity_o *)list,
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeCollectionMaster__IsNew(
        UserCommandCodeCollectionMaster_o *this,
        int32_t commandCodeId,
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
  UserCommandCodeCollectionEntity_o *v20; // x23
  __int64 v21; // x10
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  void *monitor; // x25
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_42EA18A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      commandCodeId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UserCommandCodeCollectionEntity_TypeInfo, v12, v13, v14);
    byte_42EA18A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_B5D69C(list, *(_QWORD *)&commandCodeId);
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
      v20 = (UserCommandCodeCollectionEntity_o *)Item;
      v21 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) >= (unsigned int)v21
        && (UserCommandCodeCollectionEntity_c *)Item->klass->_2.typeHierarchy[v21 - 1] == UserCommandCodeCollectionEntity_TypeInfo )
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
        if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v25, 0LL) == commandCodeId )
          return UserCommandCodeCollectionEntity__IsNew(v20, *(const MethodInfo **)&commandCodeId);
      }
    }
    if ( ++v18 >= v17 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall UserCommandCodeCollectionMaster__TryGetEntity(
        UserCommandCodeCollectionMaster_o *this,
        UserCommandCodeCollectionEntity_o **entity,
        int64_t userId,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EA185 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__,
      (_DWORD)entity,
      userId,
      *(_QWORD *)&commandCodeId);
    byte_42EA185 = 1;
  }
  PK = UserCommandCodeCollectionEntity__CreatePK(userId, commandCodeId, (const MethodInfo *)userId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_UserCommandCodeCollectionMaster__UserCommandCodeCollectionEntity__string__TryGetEntity__);
}


void __fastcall UserCommandCodeCollectionMaster__continueDeviceUserCommandCodeCollection(
        UserCommandCodeCollectionMaster_o *this,
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

  if ( (byte_42EA18C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UserCommandCodeCollectionEntity_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&UserCommandCodeCollectionManager_TypeInfo, v26, v27, v28);
    byte_42EA18C = 1;
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
        v34 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(&list->klass->_2.bitflags2 + 1) >= (unsigned int)v34
          && (UserCommandCodeCollectionEntity_c *)list->klass->_2.typeHierarchy[v34 - 1] == UserCommandCodeCollectionEntity_TypeInfo
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
  if ( (BYTE3(UserCommandCodeCollectionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UserCommandCodeCollectionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserCommandCodeCollectionManager_TypeInfo);
  }
  UserCommandCodeCollectionManager__SetOld_28031664(v38, v37);
}


UserCommandCodeCollectionEntity_array *__fastcall UserCommandCodeCollectionMaster__getCollectionList(
        UserCommandCodeCollectionMaster_o *this,
        int32_t *getSum,
        int32_t *findSum,
        const MethodInfo *method)
{
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  DataManager_o *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v33; // x1
  struct DataMasterBase_array *datalist; // x19
  DataManager_o *v35; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x23
  unsigned __int64 v37; // x27
  System_String_o *v38; // x24
  System_String_o *v39; // x0
  System_String_o *v40; // x24
  __int64 v41; // x3
  DataManager_c *klass; // x8
  DataManager_o *v43; // x25
  unsigned __int64 v44; // x10
  int *p_offset; // x11
  __int64 v46; // x0
  __int64 v47; // x3
  DataManager_c *v48; // x8
  DataManager_o *v49; // x25
  unsigned __int64 v50; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v51; // x11
  __int64 v52; // x0
  int64_t v53; // x25
  UserCommandCodeCollectionEntity_o *v54; // x24
  const MethodInfo *v55; // x3
  const MethodInfo_3056FC0 *v56; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x0
  __int64 v58; // x10
  int masterDataBytes; // w8
  __int64 v61; // x0
  int commandCodeId; // [xsp+10h] [xbp-60h]
  int v65; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t UserId; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42EA189 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_CommandCodeMaster___, (_DWORD)getSum, (_DWORD)findSum, method);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&UserCommandCodeCollectionEntity_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v29, v30, v31);
    byte_42EA189 = 1;
  }
  UserId = 0LL;
  v65 = 0;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  if ( !Instance )
    goto LABEL_42;
  Instance = (DataManager_o *)CommandCodeMaster__GetCollectionList((CommandCodeMaster_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_42;
  datalist = Instance->fields.datalist;
  v35 = Instance;
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
  *getSum = 0;
  *findSum = 0;
  if ( (int)datalist >= 1 )
  {
    v37 = 0LL;
    while ( 1 )
    {
      if ( v37 >= LODWORD(v35->fields.datalist) )
      {
        v61 = sub_B5D6C8(Instance);
        sub_B5D668(v61, 0LL);
      }
      v65 = *((_DWORD *)&v35->fields.lookup + v37);
      v38 = System_Int64__ToString((int64_t)&UserId, 0LL);
      v39 = System_Int32__ToString((int32_t)&v65, 0LL);
      v40 = System_String__Concat_44580072(v38, (System_String_o *)StringLiteral_1245/*":"*/, v39, 0LL);
      Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
      if ( !Instance )
        goto LABEL_42;
      klass = Instance->klass;
      v43 = Instance;
      if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
      {
        v44 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
        {
          ++v44;
          p_offset += 4;
          if ( v44 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
            goto LABEL_17;
        }
        v46 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_17:
        v46 = sub_AF54C0(
                Instance,
                System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                0LL,
                v41);
      }
      if ( ((*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v46)(v43, v40, *(_QWORD *)(v46 + 8)) & 1) != 0 )
        break;
      v53 = UserId;
      commandCodeId = v65;
      v54 = (UserCommandCodeCollectionEntity_o *)sub_B5D694(UserCommandCodeCollectionEntity_TypeInfo);
      UserCommandCodeCollectionEntity___ctor_28026288(v54, v53, commandCodeId, v55);
      if ( !v36 )
        goto LABEL_42;
      v56 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
      v57 = v36;
      v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)v54;
LABEL_38:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v57, v33, v56);
      if ( (__int64)++v37 >= (int)datalist )
        return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                                          (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
    }
    Instance = (DataManager_o *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_42;
    v48 = Instance->klass;
    v49 = Instance;
    if ( *(_WORD *)&Instance->klass->_2.bitflags1 )
    {
      v50 = 0LL;
      v51 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&v48->_1.interfaceOffsets->offset;
      while ( *(v51 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        ++v50;
        v51 += 2;
        if ( v50 >= *(unsigned __int16 *)&Instance->klass->_2.bitflags1 )
          goto LABEL_25;
      }
      v52 = (__int64)(&v48->vtable._2_GetHashCode.method + 2 * *(_DWORD *)v51);
    }
    else
    {
LABEL_25:
      v52 = sub_AF54C0(
              Instance,
              System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
              2LL,
              v47);
    }
    Instance = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, System_String_o *, _QWORD))v52)(
                                  v49,
                                  v40,
                                  *(_QWORD *)(v52 + 8));
    if ( !Instance )
      goto LABEL_42;
    v33 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
    v58 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(&Instance->klass->_2.bitflags2 + 1) < (unsigned int)v58
      || (UserCommandCodeCollectionEntity_c *)Instance->klass->_2.typeHierarchy[v58 - 1] != UserCommandCodeCollectionEntity_TypeInfo )
    {
      goto LABEL_42;
    }
    masterDataBytes = (int)Instance->fields.masterDataBytes;
    if ( masterDataBytes != 1 )
    {
      if ( masterDataBytes != 2 )
      {
LABEL_36:
        if ( !v36 )
          goto LABEL_42;
        v56 = (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__;
        v57 = v36;
        goto LABEL_38;
      }
      ++*getSum;
    }
    ++*findSum;
    goto LABEL_36;
  }
  if ( !v36 )
LABEL_42:
    sub_B5D69C(Instance, v33);
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v36,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}


System_Int32_array *__fastcall UserCommandCodeCollectionMaster__getCommandCodeIdList(
        UserCommandCodeCollectionMaster_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1

  if ( (byte_42EA18D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCommandCodeMaster___, userId, svtId, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA18D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCommandCodeMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
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

  if ( (byte_42EA188 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, kind, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&NetworkManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&UserCommandCodeCollectionEntity_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1245/*":"*/, v30, v31, v32);
    byte_42EA188 = 1;
  }
  UserId = 0LL;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UserCommandCodeCollectionEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity___ctor__);
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
        v56 = *(&UserCommandCodeCollectionEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)Instance + 300LL) < (unsigned int)v56
          || *(UserCommandCodeCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)Instance + 200LL) + 8 * v56 - 8) != UserCommandCodeCollectionEntity_TypeInfo )
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
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__Add__);
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
  return (UserCommandCodeCollectionEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserCommandCodeCollectionEntity__ToArray__);
}
void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_int__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418B24F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_418B24F = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantEquipIdList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.servantCollectionIdList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    1,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
}


void __fastcall ServantMaster__AddServantCache(
        ServantMaster_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v10; // x19
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_418B252 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, servantEntity);
    this = (ServantMaster_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_418B252 = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v12.fields.currentCryptoKey = v8;
      *(_QWORD *)&v12.fields.fakeValue = v7;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Add(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v13.fields.currentCryptoKey = v11;
      *(_QWORD *)&v13.fields.fakeValue = v10;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Add(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_18:
      sub_B2C434(this, servantEntity);
    }
  }
}


void __fastcall ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *servantEquipIdList; // x0
  __int64 v9; // x1
  __int64 v10; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v16; // x3
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  ServantEntity_o *v21; // x0
  const MethodInfo *v22; // x2
  __int64 v23; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_418B251 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_B2C35C(&ServantEntity_TypeInfo, v7);
    byte_418B251 = 1;
  }
  servantEquipIdList = this->fields.servantEquipIdList;
  if ( !servantEquipIdList
    || (System_Collections_Generic_List_int___Clear(
          servantEquipIdList,
          (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__),
        (servantEquipIdList = this->fields.servantCollectionIdList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          servantEquipIdList,
          (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__),
        (servantEquipIdList = (System_Collections_Generic_List_int__o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(servantEquipIdList, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)servantEquipIdList,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        p_offset += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v10);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v18;
        v19 += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v16);
    }
    v21 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                               Enumerator,
                               *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      v23 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v23
        && (ServantEntity_c *)v21->klass->_2.typeHierarchy[v23 - 1] == ServantEntity_TypeInfo )
      {
        ServantMaster__AddServantCache(this, v21, v22);
      }
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v16);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
}


System_Int32_array *__fastcall ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v12; // x21
  int32_t v13; // w22
  __int64 v14; // x10
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_418B256 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&ServantEntity_TypeInfo, v9);
    byte_418B256 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v12 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v13,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v14 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( (unsigned int)(HIDWORD(list[2].fields.items) - 1) <= 1 )
      {
        items = list->fields.items;
        syncRoot = list->fields._syncRoot;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v18.fields.currentCryptoKey = items;
        *(_QWORD *)&v18.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                             v18,
                                                                                             0LL);
        if ( !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v12,
          (int32_t)list,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v13 >= Count )
        goto LABEL_17;
    }
LABEL_19:
    sub_B2C434(list, method);
  }
LABEL_17:
  if ( !v12 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_31570700(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_418B257 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, isEquip);
    byte_418B257 = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_B2C434(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall ServantMaster__GetLimitCountMaxList(
        ServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_Dictionary_int__int__o *v11; // x21
  int32_t v12; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v13; // x23
  __int64 v14; // x10
  Il2CppObject *syncRoot; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  int32_t v17; // w24
  int32_t v18; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_418B255 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&ServantEntity_TypeInfo, v8);
    byte_418B255 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v11 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v11,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v12,
                                                                                           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v13 = list;
      v14 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v14
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v14 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)list, 0LL) )
      {
        items = v13->fields.items;
        syncRoot = v13->fields._syncRoot;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v20.fields.currentCryptoKey = items;
        *(_QWORD *)&v20.fields.fakeValue = syncRoot;
        v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v20, 0LL);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantEntity__get_IsServant(
                                                                                             (ServantEntity_o *)v13,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          v18 = (int32_t)v13[2].fields._syncRoot;
          if ( !v11 )
            break;
        }
        else
        {
          v18 = 0;
          if ( !v11 )
            break;
        }
        System_Collections_Generic_Dictionary_int__int___Add(
          v11,
          v17,
          v18,
          (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( ++v12 >= Count )
        return v11;
    }
LABEL_21:
    sub_B2C434(list, method);
  }
  return v11;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v19; // x19
  int32_t v20; // w23
  _QWORD *v21; // x24
  __int64 v22; // x10
  __int64 v23; // x24
  __int64 v24; // x25
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__12_0; // x20
  Il2CppObject *v27; // x21
  struct ServantMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_418B259 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&classId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v6);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort___67311520, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&ServantEntity_TypeInfo, v14);
    sub_B2C35C(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, v15);
    sub_B2C35C(&ServantMaster___c_TypeInfo, v16);
    byte_418B259 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v20,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = list;
      v22 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v22
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0LL) && *((_DWORD *)v21 + 20) == classId )
      {
        v24 = v21[2];
        v23 = v21[3];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = v24;
        *(_QWORD *)&v36.fields.fakeValue = v23;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
        if ( !v19 )
          break;
        System_Collections_Generic_List_int___Add(
          v19,
          (int32_t)list,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v20 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B2C434(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( (BYTE3(ServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  static_fields = (struct ServantMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__12_0 = static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__12_0,
      v27,
      Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__,
      (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
    v28 = ServantMaster___c_TypeInfo->static_fields;
    v28->__9__12_0 = _9__12_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v19 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_49713300(
    v19,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2F69094 *)Method_System_Collections_Generic_List_int__Sort___67311520);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v19; // x19
  int32_t v20; // w23
  _QWORD *v21; // x24
  __int64 v22; // x10
  __int64 v23; // x24
  __int64 v24; // x25
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__13_0; // x20
  Il2CppObject *v27; // x21
  struct ServantMaster___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_418B25A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&classId);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v6);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Sort___67311520, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B2C35C(&ServantEntity_TypeInfo, v14);
    sub_B2C35C(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, v15);
    sub_B2C35C(&ServantMaster___c_TypeInfo, v16);
    byte_418B25A = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v20,
               (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v21 = list;
      v22 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v22
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v22 - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0LL) && *((_DWORD *)v21 + 20) == classId )
      {
        v24 = v21[2];
        v23 = v21[3];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v36.fields.currentCryptoKey = v24;
        *(_QWORD *)&v36.fields.fakeValue = v23;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v36, 0LL);
        if ( !v19 )
          break;
        System_Collections_Generic_List_int___Add(
          v19,
          (int32_t)list,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v20 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B2C434(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( (BYTE3(ServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  static_fields = (struct ServantMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (*((_BYTE *)list + 307) & 4) != 0 && !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      static_fields = ServantMaster___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__13_0,
      v27,
      Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__,
      (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
    v28 = ServantMaster___c_TypeInfo->static_fields;
    v28->__9__13_0 = _9__13_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  if ( !v19 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_49713300(
    v19,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2F69094 *)Method_System_Collections_Generic_List_int__Sort___67311520);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall ServantMaster__MargeServantVoiceId(
        ServantMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 v16; // x10
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_418B258 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantChangeMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B2C35C(&ServantEntity_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_418B258 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
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
      if ( !list )
        break;
      v16 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v16
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v16 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( (unsigned int)(HIDWORD(list[2].fields.items) - 1) <= 1 )
      {
        items = list->fields.items;
        syncRoot = list->fields._syncRoot;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v19.fields.currentCryptoKey = items;
        *(_QWORD *)&v19.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                                                             v19,
                                                                                             0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v15 >= v14 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B2C434(list, isVoiceList);
  }
LABEL_17:
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)list,
                                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_22;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)list,
                                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
  if ( !list )
    goto LABEL_22;
  ServantVoiceRelationMaster__MargeServantVoiceId((ServantVoiceRelationMaster_o *)list, isVoiceList, 0LL);
}


void __fastcall ServantMaster__OnListChangedImplementation(
        ServantMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantMaster_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x0
  System_NotImplementedException_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x3
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  System_Collections_IEnumerator_c **v28; // x11
  __int64 v29; // x0
  __int64 v30; // x0
  ServantEntity_o *v31; // x22
  __int64 v32; // x8
  __int64 v33; // x10
  const MethodInfo *v34; // x2
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x21
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v42; // x8
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x3
  __int64 v48; // x20
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x3
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  System_Collections_IEnumerator_c **v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  ServantEntity_o *v59; // x21
  __int64 v60; // x8
  __int64 v61; // x10
  const MethodInfo *v62; // x2
  int v63; // w23
  __int64 v64; // x0
  __int64 v65; // x3
  __int64 v66; // x8
  __int64 v67; // x20
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  int v71[2]; // [xsp+0h] [xbp-40h]
  int v72; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_418B254 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, e);
    sub_B2C35C(&System_Collections_IEnumerable_TypeInfo, v6);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v7);
    this = (ServantMaster_o *)sub_B2C35C(&ServantEntity_TypeInfo, v8);
    byte_418B254 = 1;
  }
  v72 = 0;
  if ( !e )
    sub_B2C434(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v15 = sub_B2C360(&System_NotImplementedException_TypeInfo);
      v16 = (System_NotImplementedException_o *)sub_B2C42C(v15);
      System_NotImplementedException___ctor(v16, 0LL);
      v17 = sub_B2C360(&Method_ServantMaster_OnListChangedImplementation__);
      sub_B2C400(v16, v17);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AC5258(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v20 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B2C434(0LL, v18);
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v22 = 0LL;
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v22;
          v23 += 4;
          if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_21;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_21:
        v24 = sub_AC5258(v20, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v26 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v27 = 0LL;
        v28 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v27;
          v28 += 2;
          if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_28;
        }
        v29 = v26 + 16LL * (*(_DWORD *)v28 + 1) + 312;
      }
      else
      {
LABEL_28:
        v29 = sub_AC5258(v20, System_Collections_IEnumerator_TypeInfo, 1LL, v25);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
      v31 = (ServantEntity_o *)v30;
      if ( v30 )
      {
        v32 = *(_QWORD *)v30;
        v33 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 300LL) >= (unsigned int)v33
          && *(ServantEntity_c **)(*(_QWORD *)(v32 + 200) + 8 * v33 - 8) == ServantEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v32 + 376))(v30, *(_QWORD *)(v32 + 384)) )
            ServantMaster__RemoveServantCache(v5, v31, v34);
        }
      }
    }
    v71[0] = 117;
    v72 = 1;
    v35 = sub_B2C41C(v20, System_IDisposable_TypeInfo);
    if ( v35 )
    {
      v36 = *(_QWORD *)v35;
      v37 = v35;
      if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
      {
        v38 = 0LL;
        v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
        {
          ++v38;
          v39 += 4;
          if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
            goto LABEL_40;
        }
        v40 = v36 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_40:
        v40 = sub_AC5258(v35, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
    }
    v72 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v42 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v42->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v44 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v45 = (__int64)&v42->vtable[*v44].method;
    }
    else
    {
LABEL_49:
      v45 = sub_AC5258(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v45)(newItems, *(_QWORD *)(v45 + 8));
    if ( !v48 )
      sub_B2C434(0LL, v46);
    while ( 1 )
    {
      v49 = *(_QWORD *)v48;
      if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
      {
        v50 = 0LL;
        v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v50;
          v51 += 4;
          if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
            goto LABEL_56;
        }
        v52 = v49 + 16LL * *v51 + 312;
      }
      else
      {
LABEL_56:
        v52 = sub_AC5258(v48, System_Collections_IEnumerator_TypeInfo, 0LL, v47);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
        break;
      v54 = *(_QWORD *)v48;
      if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
      {
        v55 = 0LL;
        v56 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v55;
          v56 += 2;
          if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
            goto LABEL_63;
        }
        v57 = v54 + 16LL * (*(_DWORD *)v56 + 1) + 312;
      }
      else
      {
LABEL_63:
        v57 = sub_AC5258(v48, System_Collections_IEnumerator_TypeInfo, 1LL, v53);
      }
      v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v48, *(_QWORD *)(v57 + 8));
      v59 = (ServantEntity_o *)v58;
      if ( v58 )
      {
        v60 = *(_QWORD *)v58;
        v61 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v58 + 300LL) >= (unsigned int)v61
          && *(ServantEntity_c **)(*(_QWORD *)(v60 + 200) + 8 * v61 - 8) == ServantEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v60 + 376))(v58, *(_QWORD *)(v60 + 384)) )
        {
          ServantMaster__AddServantCache(v5, v59, v62);
        }
      }
    }
    v71[0] = 213;
    v63 = ++v72;
    v64 = sub_B2C41C(v48, System_IDisposable_TypeInfo);
    if ( v64 )
    {
      v66 = *(_QWORD *)v64;
      v67 = v64;
      if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
      {
        v68 = 0LL;
        v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
        {
          ++v68;
          v69 += 4;
          if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
            goto LABEL_75;
        }
        v70 = v66 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_75:
        v70 = sub_AC5258(v64, System_IDisposable_TypeInfo, 0LL, v65);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
    }
    if ( v63 && v71[v63 - 1] == 213 )
    {
      v72 = v63 - 1;
      return;
    }
LABEL_81:
    ServantMaster__CreateServantCache(v5, (const MethodInfo *)e);
  }
}


void __fastcall ServantMaster__RemoveServantCache(
        ServantMaster_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v10; // x19
  __int64 v11; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  v4 = this;
  if ( (byte_418B253 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, servantEntity);
    this = (ServantMaster_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_418B253 = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v12.fields.currentCryptoKey = v8;
      *(_QWORD *)&v12.fields.fakeValue = v7;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v12, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v13.fields.currentCryptoKey = v11;
      *(_QWORD *)&v13.fields.fakeValue = v10;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v13, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_18:
      sub_B2C434(this, servantEntity);
    }
  }
}


bool __fastcall ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x9
  System_Int32_array **v31; // x1
  BattleServantConfConponent_o *v32; // x20
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0

  if ( (byte_418B250 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_B2C35C(&ServantEntity_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418B250 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        p_offset += 4;
        if ( v14 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v17);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_33;
    v30 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v22 + 300LL) < (unsigned int)v30
      || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v22 + 200LL) + 8 * v30 - 8) != ServantEntity_TypeInfo )
    {
      sub_B2C728(v22);
LABEL_33:
      sub_B2C434(v22, v23);
    }
    v32 = (BattleServantConfConponent_o *)(v22 + 48);
    v31 = *(System_Int32_array ***)(v22 + 48);
    *(_QWORD *)(v22 + 56) = v31;
    sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 56), v31, v24, v25, v26, v27, v28, v29);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v33 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(
                                   (System_String_o *)StringLiteral_1/*""*/,
                                   0LL);
    v32->klass = (BattleServantConfConponent_c *)v33;
    sub_B2C2F8(v32, v33, v34, v35, v36, v37, v38, v39);
  }
  v40 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v41 = 0LL;
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      ++v41;
      v42 += 4;
      if ( v41 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_29:
    v43 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41853F3 & 1) == 0 )
  {
    sub_B2C35C(&ServantMaster___c_TypeInfo, v1);
    byte_41853F3 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall ServantMaster___c___ctor(ServantMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantMaster___c___GetTargetClassMaterialSvtIdList_b__12_0(
        ServantMaster___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return b - a;
}


int32_t __fastcall ServantMaster___c___GetTargetClassStatusUpSvtIdList_b__13_0(
        ServantMaster___c_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  return b - a;
}
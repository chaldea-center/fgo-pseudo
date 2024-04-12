void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_int__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_42B3BF9 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42B3BF9 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantEquipIdList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantCollectionIdList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    1,
    (const MethodInfo_23E223C *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
}


void __fastcall ServantMaster__AddServantCache(
        ServantMaster_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v9; // x19
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_42B3BFC & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    this = (ServantMaster_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B3BFC = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v11.fields.currentCryptoKey = v7;
      *(_QWORD *)&v11.fields.fakeValue = v6;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Add(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v12.fields.currentCryptoKey = v10;
      *(_QWORD *)&v12.fields.fakeValue = v9;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Add(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_18:
      sub_B52A5C(this, servantEntity);
    }
  }
}


void __fastcall ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantEquipIdList; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  ServantEntity_o *v16; // x0
  const MethodInfo *v17; // x2
  __int64 v18; // x10
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0

  if ( (byte_42B3BFB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&ServantEntity_TypeInfo);
    byte_42B3BFB = 1;
  }
  servantEquipIdList = this->fields.servantEquipIdList;
  if ( !servantEquipIdList
    || (System_Collections_Generic_List_int___Clear(
          servantEquipIdList,
          (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__),
        (servantEquipIdList = this->fields.servantCollectionIdList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          servantEquipIdList,
          (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__),
        (servantEquipIdList = (System_Collections_Generic_List_int__o *)this->fields.list) == 0LL) )
  {
    sub_B52A5C(servantEquipIdList, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)servantEquipIdList,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_18:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v16 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                               Enumerator,
                               *(_QWORD *)(v15 + 8));
    if ( v16 )
    {
      v18 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v16->klass->_2.bitflags2 + 1) >= (unsigned int)v18
        && (ServantEntity_c *)v16->klass->_2.typeHierarchy[v18 - 1] == ServantEntity_TypeInfo )
      {
        ServantMaster__AddServantCache(this, v16, v17);
      }
    }
  }
  v19 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v20 = 0LL;
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      ++v20;
      v21 += 4;
      if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_28:
    v22 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
}


System_Int32_array *__fastcall ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  __int64 v7; // x10
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_42B3C00 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantEntity_TypeInfo);
    byte_42B3C00 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v6,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v7 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v7 - 1] != ServantEntity_TypeInfo )
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
        *(_QWORD *)&v11.fields.currentCryptoKey = items;
        *(_QWORD *)&v11.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                             v11,
                                                                                             0LL);
        if ( !v5 )
          break;
        System_Collections_Generic_List_int___Add(
          v5,
          (int32_t)list,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v6 >= Count )
        goto LABEL_17;
    }
LABEL_19:
    sub_B52A5C(list, method);
  }
LABEL_17:
  if ( !v5 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_32157132(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_42B3C01 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_42B3C01 = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_B52A5C(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall ServantMaster__GetLimitCountMaxList(
        ServantMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  int32_t v6; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x23
  __int64 v8; // x10
  Il2CppObject *syncRoot; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  int32_t v11; // w24
  int32_t v12; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_42B3BFF & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantEntity_TypeInfo);
    byte_42B3BFF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v6,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v7 = list;
      v8 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v8 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)list, 0LL) )
      {
        items = v7->fields.items;
        syncRoot = v7->fields._syncRoot;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v14.fields.currentCryptoKey = items;
        *(_QWORD *)&v14.fields.fakeValue = syncRoot;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v14, 0LL);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantEntity__get_IsServant(
                                                                                             (ServantEntity_o *)v7,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          v12 = (int32_t)v7[2].fields._syncRoot;
          if ( !v5 )
            break;
        }
        else
        {
          v12 = 0;
          if ( !v5 )
            break;
        }
        System_Collections_Generic_Dictionary_int__int___Add(
          v5,
          v11,
          v12,
          (const MethodInfo_2EFFA9C *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( ++v6 >= Count )
        return v5;
    }
LABEL_21:
    sub_B52A5C(list, method);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x19
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 v10; // x10
  __int64 v11; // x24
  __int64 v12; // x25
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__12_0; // x20
  Il2CppObject *v15; // x21
  struct ServantMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42B3C03 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_int___ctor__);
    sub_B52984(&System_Comparison_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort___68512952);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantEntity_TypeInfo);
    sub_B52984(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__);
    sub_B52984(&ServantMaster___c_TypeInfo);
    byte_42B3C03 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v8,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = list;
      v10 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v10
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0LL) && *((_DWORD *)v9 + 20) == classId )
      {
        v12 = v9[2];
        v11 = v9[3];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = v12;
        *(_QWORD *)&v24.fields.fakeValue = v11;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v24, 0LL);
        if ( !v7 )
          break;
        System_Collections_Generic_List_int___Add(
          v7,
          (int32_t)list,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v8 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B52A5C(list, *(_QWORD *)&classId);
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_int__o *)sub_B52A54(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__12_0,
      v15,
      Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__,
      (const MethodInfo_2481A3C *)Method_System_Comparison_int___ctor__);
    v16 = ServantMaster___c_TypeInfo->static_fields;
    v16->__9__12_0 = _9__12_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v7 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_50696268(
    v7,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_305904C *)Method_System_Collections_Generic_List_int__Sort___68512952);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x19
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 v10; // x10
  __int64 v11; // x24
  __int64 v12; // x25
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__13_0; // x20
  Il2CppObject *v15; // x21
  struct ServantMaster___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_42B3C04 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_System_Comparison_int___ctor__);
    sub_B52984(&System_Comparison_int__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Sort___68512952);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantEntity_TypeInfo);
    sub_B52984(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__);
    sub_B52984(&ServantMaster___c_TypeInfo);
    byte_42B3C04 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v8,
               (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = list;
      v10 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v10
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v10 - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0LL) && *((_DWORD *)v9 + 20) == classId )
      {
        v12 = v9[2];
        v11 = v9[3];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v24.fields.currentCryptoKey = v12;
        *(_QWORD *)&v24.fields.fakeValue = v11;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v24, 0LL);
        if ( !v7 )
          break;
        System_Collections_Generic_List_int___Add(
          v7,
          (int32_t)list,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v8 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B52A5C(list, *(_QWORD *)&classId);
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
    v15 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_int__o *)sub_B52A54(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__13_0,
      v15,
      Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__,
      (const MethodInfo_2481A3C *)Method_System_Comparison_int___ctor__);
    v16 = ServantMaster___c_TypeInfo->static_fields;
    v16->__9__13_0 = _9__13_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v16->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  if ( !v7 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_50696268(
    v7,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_305904C *)Method_System_Collections_Generic_List_int__Sort___68512952);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall ServantMaster__MargeServantVoiceId(
        ServantMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 v9; // x10
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_42B3C02 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&ServantEntity_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B3C02 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v8,
                                                                                           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v9 - 1] != ServantEntity_TypeInfo )
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
        *(_QWORD *)&v12.fields.currentCryptoKey = items;
        *(_QWORD *)&v12.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                                                                             v12,
                                                                                             0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_2EF813C *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v8 >= v7 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B52A5C(list, isVoiceList);
  }
LABEL_17:
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)list,
                                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_22;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)list,
                                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
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
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x0
  System_NotImplementedException_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  __int64 v17; // x21
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  ServantEntity_o *v28; // x22
  __int64 v29; // x8
  __int64 v30; // x10
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v39; // x8
  unsigned __int64 v40; // x10
  int32_t *v41; // x11
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x3
  __int64 v45; // x20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x3
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  System_Collections_IEnumerator_c **v53; // x11
  __int64 v54; // x0
  __int64 v55; // x0
  ServantEntity_o *v56; // x21
  __int64 v57; // x8
  __int64 v58; // x10
  const MethodInfo *v59; // x2
  int v60; // w23
  __int64 v61; // x0
  __int64 v62; // x3
  __int64 v63; // x8
  __int64 v64; // x20
  unsigned __int64 v65; // x10
  int *v66; // x11
  __int64 v67; // x0
  int v68[2]; // [xsp+0h] [xbp-40h]
  int v69; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_42B3BFE & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_B52984(&ServantEntity_TypeInfo);
    byte_42B3BFE = 1;
  }
  v69 = 0;
  if ( !e )
    sub_B52A5C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v12 = sub_B52988(&System_NotImplementedException_TypeInfo);
      v13 = (System_NotImplementedException_o *)sub_B52A54(v12);
      System_NotImplementedException___ctor(v13, 0LL);
      v14 = sub_B52988(&Method_ServantMaster_OnListChangedImplementation__);
      sub_B52A28(v13, v14);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v17 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v17 )
      sub_B52A5C(0LL, v15);
    while ( 1 )
    {
      v18 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
      {
        v19 = 0LL;
        v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v19;
          v20 += 4;
          if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
            goto LABEL_21;
        }
        v21 = v18 + 16LL * *v20 + 312;
      }
      else
      {
LABEL_21:
        v21 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v17;
      if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
      {
        v24 = 0LL;
        v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v24;
          v25 += 2;
          if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
            goto LABEL_28;
        }
        v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
      }
      else
      {
LABEL_28:
        v26 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
      v28 = (ServantEntity_o *)v27;
      if ( v27 )
      {
        v29 = *(_QWORD *)v27;
        v30 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) >= (unsigned int)v30
          && *(ServantEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * v30 - 8) == ServantEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
            ServantMaster__RemoveServantCache(v5, v28, v31);
        }
      }
    }
    v68[0] = 117;
    v69 = 1;
    v32 = sub_B52A44(v17, System_IDisposable_TypeInfo);
    if ( v32 )
    {
      v33 = *(_QWORD *)v32;
      v34 = v32;
      if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
      {
        v35 = 0LL;
        v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
        {
          ++v35;
          v36 += 4;
          if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
            goto LABEL_40;
        }
        v37 = v33 + 16LL * *v36 + 312;
      }
      else
      {
LABEL_40:
        v37 = sub_AEB880(v32, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
    }
    v69 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v39 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v41 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v42 = (__int64)&v39->vtable[*v41].method;
    }
    else
    {
LABEL_49:
      v42 = sub_AEB880(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v45 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(newItems, *(_QWORD *)(v42 + 8));
    if ( !v45 )
      sub_B52A5C(0LL, v43);
    while ( 1 )
    {
      v46 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v47 = 0LL;
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v47;
          v48 += 4;
          if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_56;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_56:
        v49 = sub_AEB880(v45, System_Collections_IEnumerator_TypeInfo, 0LL, v44);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      v51 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v52 = 0LL;
        v53 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *(v53 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v52;
          v53 += 2;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_63;
        }
        v54 = v51 + 16LL * (*(_DWORD *)v53 + 1) + 312;
      }
      else
      {
LABEL_63:
        v54 = sub_AEB880(v45, System_Collections_IEnumerator_TypeInfo, 1LL, v50);
      }
      v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v45, *(_QWORD *)(v54 + 8));
      v56 = (ServantEntity_o *)v55;
      if ( v55 )
      {
        v57 = *(_QWORD *)v55;
        v58 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v55 + 300LL) >= (unsigned int)v58
          && *(ServantEntity_c **)(*(_QWORD *)(v57 + 200) + 8 * v58 - 8) == ServantEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v57 + 376))(v55, *(_QWORD *)(v57 + 384)) )
        {
          ServantMaster__AddServantCache(v5, v56, v59);
        }
      }
    }
    v68[0] = 213;
    v60 = ++v69;
    v61 = sub_B52A44(v45, System_IDisposable_TypeInfo);
    if ( v61 )
    {
      v63 = *(_QWORD *)v61;
      v64 = v61;
      if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
      {
        v65 = 0LL;
        v66 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
        {
          ++v65;
          v66 += 4;
          if ( v65 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
            goto LABEL_75;
        }
        v67 = v63 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_75:
        v67 = sub_AEB880(v61, System_IDisposable_TypeInfo, 0LL, v62);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
    }
    if ( v60 && v68[v60 - 1] == 213 )
    {
      v69 = v60 - 1;
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
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v9; // x19
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_42B3BFD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    this = (ServantMaster_o *)sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_42B3BFD = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v11.fields.currentCryptoKey = v7;
      *(_QWORD *)&v11.fields.fakeValue = v6;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v11, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v12.fields.currentCryptoKey = v10;
      *(_QWORD *)&v12.fields.fakeValue = v9;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v12, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_18:
      sub_B52A5C(this, servantEntity);
    }
  }
}


bool __fastcall ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x9
  System_Int32_array **v25; // x1
  BattleServantConfConponent_o *v26; // x20
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42B3BFA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_B52984(&ServantEntity_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3BFA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v14 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v13;
        v14 += 4;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v11);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      goto LABEL_33;
    v24 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v16 + 300LL) < (unsigned int)v24
      || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v16 + 200LL) + 8 * v24 - 8) != ServantEntity_TypeInfo )
    {
      sub_B52D50(v16);
LABEL_33:
      sub_B52A5C(v16, v17);
    }
    v26 = (BattleServantConfConponent_o *)(v16 + 48);
    v25 = *(System_Int32_array ***)(v16 + 48);
    *(_QWORD *)(v16 + 56) = v25;
    sub_B52920((BattleServantConfConponent_o *)(v16 + 56), v25, v18, v19, v20, v21, v22, v23);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v27 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(
                                   (System_String_o *)StringLiteral_1/*""*/,
                                   0LL);
    v26->klass = (BattleServantConfConponent_c *)v27;
    sub_B52920(v26, v27, v28, v29, v30, v31, v32, v33);
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_29:
    v37 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v11);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD34D & 1) == 0 )
  {
    sub_B52984(&ServantMaster___c_TypeInfo);
    byte_42AD34D = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(ServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantMaster___c_o *)v1;
  sub_B52920(static_fields);
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
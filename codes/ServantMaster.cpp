void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_int__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_int__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42EC6E9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v8, v9, v10);
    byte_42EC6E9 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.servantEquipIdList = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantEquipIdList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.servantCollectionIdList = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantCollectionIdList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    1,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
}


void __fastcall ServantMaster__AddServantCache(
        ServantMaster_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ServantMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v5 = this;
  if ( (byte_42EC6EC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, (_DWORD)servantEntity, (_DWORD)method, v3);
    this = (ServantMaster_o *)sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42EC6EC = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v5->fields.servantEquipIdList;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v15.fields.currentCryptoKey = v11;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Add(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v5->fields.servantCollectionIdList;
      v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v16.fields.currentCryptoKey = v14;
      *(_QWORD *)&v16.fields.fakeValue = v13;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Add(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_18:
      sub_B5D69C(this, servantEntity);
    }
  }
}


void __fastcall ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *servantEquipIdList; // x0
  __int64 v21; // x1
  __int64 v22; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v25; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v28; // x3
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  ServantEntity_o *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x10
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_42EC6EB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v14, v15, v16);
    sub_B5D5C4(&ServantEntity_TypeInfo, v17, v18, v19);
    byte_42EC6EB = 1;
  }
  servantEquipIdList = this->fields.servantEquipIdList;
  if ( !servantEquipIdList
    || (System_Collections_Generic_List_int___Clear(
          servantEquipIdList,
          (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__),
        (servantEquipIdList = this->fields.servantCollectionIdList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          servantEquipIdList,
          (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__),
        (servantEquipIdList = (System_Collections_Generic_List_int__o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(servantEquipIdList, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)servantEquipIdList,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v25;
        p_offset += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v22);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v29 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v31 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v32 = (__int64)&v29->vtable[*v31].method;
    }
    else
    {
LABEL_18:
      v32 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v28);
    }
    v33 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                               Enumerator,
                               *(_QWORD *)(v32 + 8));
    if ( v33 )
    {
      v35 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v33->klass->_2.bitflags2 + 1) >= (unsigned int)v35
        && (ServantEntity_c *)v33->klass->_2.typeHierarchy[v35 - 1] == ServantEntity_TypeInfo )
      {
        ServantMaster__AddServantCache(this, v33, v34);
      }
    }
  }
  v36 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      ++v37;
      v38 += 4;
      if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_28:
    v39 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v28);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
}


System_Int32_array *__fastcall ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v28; // x21
  int32_t v29; // w22
  __int64 v30; // x10
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42EC6F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ServantEntity_TypeInfo, v23, v24, v25);
    byte_42EC6F0 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v28 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( Count >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v29,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v30 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v30
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v30 - 1] != ServantEntity_TypeInfo )
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
        *(_QWORD *)&v34.fields.currentCryptoKey = items;
        *(_QWORD *)&v34.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                             v34,
                                                                                             0LL);
        if ( !v28 )
          break;
        System_Collections_Generic_List_int___Add(
          v28,
          (int32_t)list,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v29 >= Count )
        goto LABEL_17;
    }
LABEL_19:
    sub_B5D69C(list, method);
  }
LABEL_17:
  if ( !v28 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v28,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_32498472(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_42EC6F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, isEquip, (_DWORD)method, v3);
    byte_42EC6F1 = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_B5D69C(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall ServantMaster__GetLimitCountMaxList(
        ServantMaster_o *this,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_Dictionary_int__int__o *v25; // x21
  int32_t v26; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v27; // x23
  __int64 v28; // x10
  Il2CppObject *syncRoot; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  int32_t v31; // w24
  int32_t v32; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42EC6EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&ServantEntity_TypeInfo, v20, v21, v22);
    byte_42EC6EF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v25 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v25,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                           list,
                                                                                           v26,
                                                                                           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v27 = list;
      v28 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v28
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v28 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)list, 0LL) )
      {
        items = v27->fields.items;
        syncRoot = v27->fields._syncRoot;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v34.fields.currentCryptoKey = items;
        *(_QWORD *)&v34.fields.fakeValue = syncRoot;
        v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v34, 0LL);
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)ServantEntity__get_IsServant(
                                                                                             (ServantEntity_o *)v27,
                                                                                             0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          v32 = (int32_t)v27[2].fields._syncRoot;
          if ( !v25 )
            break;
        }
        else
        {
          v32 = 0;
          if ( !v25 )
            break;
        }
        System_Collections_Generic_Dictionary_int__int___Add(
          v25,
          v31,
          v32,
          (const MethodInfo_2F0AE58 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( ++v26 >= Count )
        return v25;
    }
LABEL_21:
    sub_B5D69C(list, method);
  }
  return v25;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v44; // x19
  int32_t v45; // w23
  _QWORD *v46; // x24
  __int64 v47; // x10
  __int64 v48; // x24
  __int64 v49; // x25
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__12_0; // x20
  Il2CppObject *v52; // x21
  struct ServantMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42EC6F3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      classId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort___68740352, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ServantEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, v36, v37, v38);
    sub_B5D5C4(&ServantMaster___c_TypeInfo, v39, v40, v41);
    byte_42EC6F3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v44 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( Count >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v45,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v46 = list;
      v47 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v47
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v47 - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0LL) && *((_DWORD *)v46 + 20) == classId )
      {
        v49 = v46[2];
        v48 = v46[3];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v61.fields.currentCryptoKey = v49;
        *(_QWORD *)&v61.fields.fakeValue = v48;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL);
        if ( !v44 )
          break;
        System_Collections_Generic_List_int___Add(
          v44,
          (int32_t)list,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v45 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B5D69C(list, *(_QWORD *)&classId);
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__12_0,
      v52,
      Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__,
      (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
    v53 = ServantMaster___c_TypeInfo->static_fields;
    v53->__9__12_0 = _9__12_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v44 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_50881704(
    v44,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_30864A8 *)Method_System_Collections_Generic_List_int__Sort___68740352);
  return System_Collections_Generic_List_int___ToArray(
           v44,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
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
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v44; // x19
  int32_t v45; // w23
  _QWORD *v46; // x24
  __int64 v47; // x10
  __int64 v48; // x24
  __int64 v49; // x25
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__13_0; // x20
  Il2CppObject *v52; // x21
  struct ServantMaster___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  if ( (byte_42EC6F4 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      classId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Sort___68740352, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&ServantEntity_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, v36, v37, v38);
    sub_B5D5C4(&ServantMaster___c_TypeInfo, v39, v40, v41);
    byte_42EC6F4 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v44 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v44,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( Count >= 1 )
  {
    v45 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)list,
               v45,
               (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v46 = list;
      v47 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 300LL) < (unsigned int)v47
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * v47 - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0LL) && *((_DWORD *)v46 + 20) == classId )
      {
        v49 = v46[2];
        v48 = v46[3];
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v61.fields.currentCryptoKey = v49;
        *(_QWORD *)&v61.fields.fakeValue = v48;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v61, 0LL);
        if ( !v44 )
          break;
        System_Collections_Generic_List_int___Add(
          v44,
          (int32_t)list,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v45 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B5D69C(list, *(_QWORD *)&classId);
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
    v52 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(
      _9__13_0,
      v52,
      Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__,
      (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
    v53 = ServantMaster___c_TypeInfo->static_fields;
    v53->__9__13_0 = _9__13_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  if ( !v44 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_50881704(
    v44,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_30864A8 *)Method_System_Collections_Generic_List_int__Sort___68740352);
  return System_Collections_Generic_List_int___ToArray(
           v44,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall ServantMaster__MargeServantVoiceId(
        ServantMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w0
  int32_t v29; // w21
  int32_t v30; // w22
  __int64 v31; // x10
  Il2CppObject *syncRoot; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_42EC6F2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)isVoiceList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantChangeMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v15, v16, v17);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantEntity_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42EC6F2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v29 = Count;
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
      if ( !list )
        break;
      v31 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&list->klass->_2.bitflags2 + 1) < (unsigned int)v31
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[v31 - 1] != ServantEntity_TypeInfo )
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
        *(_QWORD *)&v34.fields.currentCryptoKey = items;
        *(_QWORD *)&v34.fields.fakeValue = syncRoot;
        list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                             v34,
                                                                                             0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_2F034F8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v30 >= v29 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B5D69C(list, isVoiceList);
  }
LABEL_17:
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)list,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_22;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0LL);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_22;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)list,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x0
  System_NotImplementedException_o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  __int64 v26; // x21
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x3
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  System_Collections_IEnumerator_c **v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  ServantEntity_o *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x10
  const MethodInfo *v40; // x2
  __int64 v41; // x0
  __int64 v42; // x8
  __int64 v43; // x21
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x3
  __int64 v54; // x20
  __int64 v55; // x8
  unsigned __int64 v56; // x10
  int *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x8
  unsigned __int64 v61; // x10
  System_Collections_IEnumerator_c **v62; // x11
  __int64 v63; // x0
  __int64 v64; // x0
  ServantEntity_o *v65; // x21
  __int64 v66; // x8
  __int64 v67; // x10
  const MethodInfo *v68; // x2
  int v69; // w23
  __int64 v70; // x0
  __int64 v71; // x3
  __int64 v72; // x8
  __int64 v73; // x20
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  int v77[2]; // [xsp+0h] [xbp-40h]
  int v78; // [xsp+8h] [xbp-38h]

  v5 = this;
  if ( (byte_42EC6EE & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)e, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_IEnumerable_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v9, v10, v11);
    this = (ServantMaster_o *)sub_B5D5C4(&ServantEntity_TypeInfo, v12, v13, v14);
    byte_42EC6EE = 1;
  }
  v78 = 0;
  if ( !e )
    sub_B5D69C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v21 = sub_B5D5C8(&System_NotImplementedException_TypeInfo);
      v22 = (System_NotImplementedException_o *)sub_B5D694(v21);
      System_NotImplementedException___ctor(v22, 0LL);
      v23 = sub_B5D5C8(&Method_ServantMaster_OnListChangedImplementation__);
      sub_B5D668(v22, v23);
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v26 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v26 )
      sub_B5D69C(0LL, v24);
    while ( 1 )
    {
      v27 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v28 = 0LL;
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v28;
          v29 += 4;
          if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_21;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_21:
        v30 = sub_AF54C0(v26, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v32 = *(_QWORD *)v26;
      if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
      {
        v33 = 0LL;
        v34 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *(v34 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v33;
          v34 += 2;
          if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
            goto LABEL_28;
        }
        v35 = v32 + 16LL * (*(_DWORD *)v34 + 1) + 312;
      }
      else
      {
LABEL_28:
        v35 = sub_AF54C0(v26, System_Collections_IEnumerator_TypeInfo, 1LL, v31);
      }
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v26, *(_QWORD *)(v35 + 8));
      v37 = (ServantEntity_o *)v36;
      if ( v36 )
      {
        v38 = *(_QWORD *)v36;
        v39 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 300LL) >= (unsigned int)v39
          && *(ServantEntity_c **)(*(_QWORD *)(v38 + 200) + 8 * v39 - 8) == ServantEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v38 + 376))(v36, *(_QWORD *)(v38 + 384)) )
            ServantMaster__RemoveServantCache(v5, v37, v40);
        }
      }
    }
    v77[0] = 117;
    v78 = 1;
    v41 = sub_B5D684(v26, System_IDisposable_TypeInfo);
    if ( v41 )
    {
      v42 = *(_QWORD *)v41;
      v43 = v41;
      if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
      {
        v44 = 0LL;
        v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          ++v44;
          v45 += 4;
          if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
            goto LABEL_40;
        }
        v46 = v42 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_40:
        v46 = sub_AF54C0(v41, System_IDisposable_TypeInfo, 0LL, v3);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
    }
    v78 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v48 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v50 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v51 = (__int64)&v48->vtable[*v50].method;
    }
    else
    {
LABEL_49:
      v51 = sub_AF54C0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL, v3);
    }
    v54 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v51)(newItems, *(_QWORD *)(v51 + 8));
    if ( !v54 )
      sub_B5D69C(0LL, v52);
    while ( 1 )
    {
      v55 = *(_QWORD *)v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v56 = 0LL;
        v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v56;
          v57 += 4;
          if ( v56 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_56;
        }
        v58 = v55 + 16LL * *v57 + 312;
      }
      else
      {
LABEL_56:
        v58 = sub_AF54C0(v54, System_Collections_IEnumerator_TypeInfo, 0LL, v53);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v54, *(_QWORD *)(v58 + 8)) & 1) == 0 )
        break;
      v60 = *(_QWORD *)v54;
      if ( *(_WORD *)(*(_QWORD *)v54 + 298LL) )
      {
        v61 = 0LL;
        v62 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *(v62 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v61;
          v62 += 2;
          if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v54 + 298LL) )
            goto LABEL_63;
        }
        v63 = v60 + 16LL * (*(_DWORD *)v62 + 1) + 312;
      }
      else
      {
LABEL_63:
        v63 = sub_AF54C0(v54, System_Collections_IEnumerator_TypeInfo, 1LL, v59);
      }
      v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v54, *(_QWORD *)(v63 + 8));
      v65 = (ServantEntity_o *)v64;
      if ( v64 )
      {
        v66 = *(_QWORD *)v64;
        v67 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v64 + 300LL) >= (unsigned int)v67
          && *(ServantEntity_c **)(*(_QWORD *)(v66 + 200) + 8 * v67 - 8) == ServantEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v66 + 376))(v64, *(_QWORD *)(v66 + 384)) )
        {
          ServantMaster__AddServantCache(v5, v65, v68);
        }
      }
    }
    v77[0] = 213;
    v69 = ++v78;
    v70 = sub_B5D684(v54, System_IDisposable_TypeInfo);
    if ( v70 )
    {
      v72 = *(_QWORD *)v70;
      v73 = v70;
      if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
      {
        v74 = 0LL;
        v75 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
        {
          ++v74;
          v75 += 4;
          if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
            goto LABEL_75;
        }
        v76 = v72 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_75:
        v76 = sub_AF54C0(v70, System_IDisposable_TypeInfo, 0LL, v71);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v76)(v73, *(_QWORD *)(v76 + 8));
    }
    if ( v69 && v77[v69 - 1] == 213 )
    {
      v78 = v69 - 1;
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
  __int64 v3; // x3
  ServantMaster_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v5 = this;
  if ( (byte_42EC6ED & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, (_DWORD)servantEntity, (_DWORD)method, v3);
    this = (ServantMaster_o *)sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    byte_42EC6ED = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v5->fields.servantEquipIdList;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v15.fields.currentCryptoKey = v11;
      *(_QWORD *)&v15.fields.fakeValue = v10;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v15, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v5->fields.servantCollectionIdList;
      v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v16.fields.currentCryptoKey = v14;
      *(_QWORD *)&v16.fields.fakeValue = v13;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v16, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_18:
      sub_B5D69C(this, servantEntity);
    }
  }
}


bool __fastcall ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v31; // x3
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x9
  System_Int32_array **v45; // x1
  BattleServantConfConponent_o *v46; // x20
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0

  if ( (byte_42EC6EA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&ServantEntity_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42EC6EA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v24);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        p_offset += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v25);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v32 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v33 = 0LL;
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v34 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v35 = (__int64)&v32->vtable[*v34].method;
    }
    else
    {
LABEL_16:
      v35 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v31);
    }
    v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
            Enumerator,
            *(_QWORD *)(v35 + 8));
    if ( !v36 )
      goto LABEL_33;
    v44 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v36 + 300LL) < (unsigned int)v44
      || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v36 + 200LL) + 8 * v44 - 8) != ServantEntity_TypeInfo )
    {
      sub_B5D990(v36);
LABEL_33:
      sub_B5D69C(v36, v37);
    }
    v46 = (BattleServantConfConponent_o *)(v36 + 48);
    v45 = *(System_Int32_array ***)(v36 + 48);
    *(_QWORD *)(v36 + 56) = v45;
    sub_B5D560((BattleServantConfConponent_o *)(v36 + 56), v45, v38, v39, v40, v41, v42, v43);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v47 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(
                                   (System_String_o *)StringLiteral_1/*""*/,
                                   0LL);
    v46->klass = (BattleServantConfConponent_c *)v47;
    sub_B5D560(v46, v47, v48, v49, v50, v51, v52, v53);
  }
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_29;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_29:
    v57 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v31);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D65 & 1) == 0 )
  {
    sub_B5D5C4(&ServantMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5D65 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
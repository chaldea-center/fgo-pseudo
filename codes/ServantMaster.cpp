void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FCB85 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_49FCB85 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantEquipIdList, (int32_t)v6, v7, v8);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v9, v10);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantCollectionIdList, (int32_t)v11, v12, v13);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    1,
    (const MethodInfo_30D3E64 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
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
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  struct System_Int32_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  v4 = this;
  if ( (byte_49FCB88 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, servantEntity);
    this = (ServantMaster_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49FCB88 = 1;
  }
  if ( !servantEntity )
    goto LABEL_22;
  if ( servantEntity->fields.collectionNo < 1 )
    return;
  if ( SvtType__IsServantEquip(servantEntity->fields.type, 0LL) )
  {
    servantEquipIdList = v4->fields.servantEquipIdList;
    v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v8;
    *(_QWORD *)&v18.fields.fakeValue = v7;
    this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v18, 0LL);
    if ( !servantEquipIdList )
      goto LABEL_22;
    items = servantEquipIdList->fields._items;
    v10 = Method_System_Collections_Generic_List_int__Add__;
    ++servantEquipIdList->fields._version;
    if ( !items )
      goto LABEL_22;
    size = servantEquipIdList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        servantEquipIdList,
        (int32_t)this,
        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      servantEquipIdList->fields._size = size + 1;
      items->m_Items[size + 1] = (int)this;
    }
  }
  if ( !SvtType__IsServantCollection(servantEntity->fields.type, 0LL) )
    return;
  servantCollectionIdList = v4->fields.servantCollectionIdList;
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v19, 0LL);
  if ( !servantCollectionIdList
    || (v15 = servantCollectionIdList->fields._items,
        v16 = Method_System_Collections_Generic_List_int__Add__,
        ++servantCollectionIdList->fields._version,
        !v15) )
  {
LABEL_22:
    sub_1B64324(this);
  }
  v17 = servantCollectionIdList->fields._size;
  if ( (unsigned int)v17 >= v15->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      servantCollectionIdList,
      (int32_t)this,
      *(const MethodInfo_348FEDC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    servantCollectionIdList->fields._size = v17 + 1;
    v15->m_Items[v17 + 1] = (int)this;
  }
}


void __fastcall ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  ServantMaster_o *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_int__o *servantEquipIdList; // x8
  int v9; // w9
  struct System_Collections_Generic_List_int__o *servantCollectionIdList; // x8
  int v11; // w9
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  ServantEntity_o *v21; // x0
  const MethodInfo *v22; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  v2 = this;
  if ( (byte_49FCB87 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Clear__, v6);
    this = (ServantMaster_o *)sub_1B640C8(&ServantEntity_TypeInfo, v7);
    byte_49FCB87 = 1;
  }
  servantEquipIdList = v2->fields.servantEquipIdList;
  if ( !servantEquipIdList )
    goto LABEL_31;
  v9 = servantEquipIdList->fields._version + 1;
  servantEquipIdList->fields._size = 0;
  servantEquipIdList->fields._version = v9;
  servantCollectionIdList = v2->fields.servantCollectionIdList;
  if ( !servantCollectionIdList
    || (v11 = servantCollectionIdList->fields._version + 1,
        servantCollectionIdList->fields._size = 0,
        servantCollectionIdList->fields._version = v11,
        (this = (ServantMaster_o *)v2->fields.list) == 0LL) )
  {
LABEL_31:
    sub_1B64324(this);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_18:
      v20 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v21 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                               Enumerator,
                               *(_QWORD *)(v20 + 8));
    if ( v21 )
    {
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v21->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantEntity_c *)v21->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantEntity_TypeInfo )
      {
        ServantMaster__AddServantCache(v2, v21, v22);
      }
    }
  }
  v24 = Enumerator->klass;
  v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      --v25;
      v26 += 4;
      if ( !v25 )
        goto LABEL_28;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_28:
    v27 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_int__o *v14; // x21
  int32_t v15; // w22
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  struct System_Int32_array *v19; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_49FCB8C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1B640C8(&ServantEntity_TypeInfo, v9);
    byte_49FCB8C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v12, v13);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v23.fields.currentCryptoKey = items;
        *(_QWORD *)&v23.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                   v23,
                                                                   0LL);
        if ( !v14 )
          break;
        v19 = v14->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !v19 )
          break;
        size = v14->fields._size;
        if ( (unsigned int)size >= v19->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v14,
            (int32_t)list,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v14->fields._size = size + 1;
          v19->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v15 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B64324(list);
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_39376492(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_49FCB8D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, isEquip);
    byte_49FCB8D = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_1B64324(servantCollectionIdList);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  void *list; // x0
  int32_t Count; // w20
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__int__o *v13; // x21
  int32_t v14; // w22
  void *v15; // x23
  __int64 methodPtr_low; // x10
  __int64 v17; // x24
  __int64 v18; // x25
  int32_t v19; // w24
  int32_t v20; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_49FCB8B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B640C8(&ServantEntity_TypeInfo, v8);
    byte_49FCB8B = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v13 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v11,
                                                               v12);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v13,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v14,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v15 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( !SvtType__IsEnemy(*((_DWORD *)list + 21), 0LL) )
      {
        v18 = *((_QWORD *)v15 + 2);
        v17 = *((_QWORD *)v15 + 3);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = v18;
        *(_QWORD *)&v22.fields.fakeValue = v17;
        v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v22, 0LL);
        list = (void *)SvtType__IsServant(*((_DWORD *)v15 + 21), 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
          v20 = *((_DWORD *)v15 + 22);
        else
          v20 = 0;
        if ( !v13 )
          break;
        System_Collections_Generic_Dictionary_int__int___Add(
          v13,
          v19,
          v20,
          (const MethodInfo_311AEB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( Count == ++v14 )
        return v13;
    }
LABEL_20:
    sub_1B64324(list);
  }
  return v13;
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
  void *list; // x0
  int32_t Count; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  _QWORD *v24; // x24
  __int64 methodPtr_low; // x10
  __int64 v26; // x24
  __int64 v27; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_Comparison_int__o *v31; // x19
  Il2CppObject *v32; // x20
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_49FCB8F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&classId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort___75657344, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&ServantEntity_TypeInfo, v13);
    sub_1B640C8(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, v14);
    sub_1B640C8(&ServantMaster___c_TypeInfo, v15);
    byte_49FCB8F = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v18, v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v23,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v24 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( SvtType__IsCombineMaterial(*((_DWORD *)list + 21), 0LL) && *((_DWORD *)v24 + 20) == classId )
      {
        v27 = v24[2];
        v26 = v24[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v37.fields.currentCryptoKey = v27;
        *(_QWORD *)&v37.fields.fakeValue = v26;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v37, 0LL);
        if ( !v20 )
          break;
        items = v20->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        v21 = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v20,
            (int32_t)list,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v23 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B64324(list);
  }
LABEL_20:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, v21, v22);
    System_Comparison_int____ctor(v31, v32, Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v31, v34, v35);
  }
  if ( !v20 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_55122336(
    v20,
    (System_Comparison_T__o *)v31,
    (const MethodInfo_34919A0 *)Method_System_Collections_Generic_List_int__Sort___75657344);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  void *list; // x0
  int32_t Count; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  int32_t v23; // w23
  _QWORD *v24; // x24
  __int64 methodPtr_low; // x10
  __int64 v26; // x24
  __int64 v27; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  System_Comparison_int__o *v31; // x19
  Il2CppObject *v32; // x20
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_49FCB90 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&classId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Sort___75657344, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&ServantEntity_TypeInfo, v13);
    sub_1B640C8(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, v14);
    sub_1B640C8(&ServantMaster___c_TypeInfo, v15);
    byte_49FCB90 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v18, v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v23,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v24 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( SvtType__IsStatusUp(*((_DWORD *)list + 21), 0LL) && *((_DWORD *)v24 + 20) == classId )
      {
        v27 = v24[2];
        v26 = v24[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v37.fields.currentCryptoKey = v27;
        *(_QWORD *)&v37.fields.fakeValue = v26;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v37, 0LL);
        if ( !v20 )
          break;
        items = v20->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v20->fields._version;
        if ( !items )
          break;
        size = v20->fields._size;
        v21 = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v20,
            (int32_t)list,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v20->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v23 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B64324(list);
  }
LABEL_20:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v31 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)list + 23);
    v31 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, v21, v22);
    System_Comparison_int____ctor(v31, v32, Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)v31, v34, v35);
  }
  if ( !v20 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_55122336(
    v20,
    (System_Comparison_T__o *)v31,
    (const MethodInfo_34919A0 *)Method_System_Collections_Generic_List_int__Sort___75657344);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v14; // w21
  int32_t v15; // w22
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  const MethodInfo *v19; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_49FCB8E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantChangeMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B640C8(&ServantEntity_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FCB8E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v20.fields.currentCryptoKey = items;
        *(_QWORD *)&v20.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                                                   v20,
                                                                   0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_31150E8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v14 == ++v15 )
        goto LABEL_16;
    }
LABEL_21:
    sub_1B64324(list);
  }
LABEL_16:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_21;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, v19);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
  if ( !list )
    goto LABEL_21;
  ServantVoiceRelationMaster__MargeServantVoiceId((ServantVoiceRelationMaster_o *)list, isVoiceList, 0LL);
}


void __fastcall ServantMaster__OnListChangedImplementation(
        ServantMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_NotImplementedException_o *v17; // x19
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  ServantEntity_o *v29; // x22
  __int64 v30; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x21
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x20
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  System_Collections_IEnumerator_c **v51; // x10
  __int64 v52; // x0
  __int64 v53; // x0
  ServantEntity_o *v54; // x21
  __int64 v55; // x8
  __int64 v56; // x10
  const MethodInfo *v57; // x2
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x20
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0

  v4 = this;
  if ( (byte_49FCB8A & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, e);
    sub_1B640C8(&System_Collections_IEnumerable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v6);
    this = (ServantMaster_o *)sub_1B640C8(&ServantEntity_TypeInfo, v7);
    byte_49FCB8A = 1;
  }
  if ( !e )
    sub_1B64324(this);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v14 = sub_1B640DC(&System_NotImplementedException_TypeInfo);
        v17 = (System_NotImplementedException_o *)sub_1B64314(v14, v15, v16);
        System_NotImplementedException___ctor(v17, 0LL);
        v18 = sub_1B640DC(&Method_ServantMaster_OnListChangedImplementation__);
        sub_1B641F0(v17, v18);
      }
      ServantMaster__CreateServantCache(v4, (const MethodInfo *)e);
    }
  }
  else
  {
    oldItems = e->fields._oldItems;
    if ( oldItems )
    {
      klass = oldItems->klass;
      v11 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1BB60A8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v19 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v19 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v20 = *(_QWORD *)v19;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
        {
          v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 4;
            if ( !v21 )
              goto LABEL_20;
          }
          v23 = v20 + 16LL * *v22 + 312;
        }
        else
        {
LABEL_20:
          v23 = sub_1BB60A8(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
          break;
        v24 = *(_QWORD *)v19;
        v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
        {
          v26 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v25;
            v26 += 2;
            if ( !v25 )
              goto LABEL_27;
          }
          v27 = v24 + 16LL * (*(_DWORD *)v26 + 1) + 312;
        }
        else
        {
LABEL_27:
          v27 = sub_1BB60A8(v19, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
        v29 = (ServantEntity_o *)v28;
        if ( v28 )
        {
          v30 = *(_QWORD *)v28;
          methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v28 + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantEntity_c **)(*(_QWORD *)(v30 + 200) + 8 * methodPtr_low - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v30 + 376))(v28, *(_QWORD *)(v30 + 384)) )
              ServantMaster__RemoveServantCache(v4, v29, v32);
          }
        }
      }
      v33 = sub_1B64204(v19, System_IDisposable_TypeInfo);
      if ( v33 )
      {
        v34 = *(_QWORD *)v33;
        v35 = v33;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_39;
          }
          v38 = v34 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_39:
          v38 = sub_1BB60A8(v33, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v40 = newItems->klass;
      v41 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v42 = &v40->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v41;
          v42 += 4;
          if ( !v41 )
            goto LABEL_47;
        }
        v43 = (__int64)&v40->vtable[*v42].method;
      }
      else
      {
LABEL_47:
        v43 = sub_1BB60A8(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(newItems, *(_QWORD *)(v43 + 8));
      if ( !v44 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v45 = *(_QWORD *)v44;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_54;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_54:
          v48 = sub_1BB60A8(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
          break;
        v49 = *(_QWORD *)v44;
        v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v51 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v49 + 176) + 8LL);
          while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v50;
            v51 += 2;
            if ( !v50 )
              goto LABEL_61;
          }
          v52 = v49 + 16LL * (*(_DWORD *)v51 + 1) + 312;
        }
        else
        {
LABEL_61:
          v52 = sub_1BB60A8(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
        v54 = (ServantEntity_o *)v53;
        if ( v53 )
        {
          v55 = *(_QWORD *)v53;
          v56 = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v53 + 304LL) >= (unsigned int)v56
            && *(ServantEntity_c **)(*(_QWORD *)(v55 + 200) + 8 * v56 - 8) == ServantEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v55 + 376))(v53, *(_QWORD *)(v55 + 384)) )
          {
            ServantMaster__AddServantCache(v4, v54, v57);
          }
        }
      }
      v58 = sub_1B64204(v44, System_IDisposable_TypeInfo);
      if ( v58 )
      {
        v59 = *(_QWORD *)v58;
        v60 = v58;
        v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
        {
          v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
          {
            --v61;
            v62 += 4;
            if ( !v61 )
              goto LABEL_73;
          }
          v63 = v59 + 16LL * *v62 + 312;
        }
        else
        {
LABEL_73:
          v63 = sub_1BB60A8(v58, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
      }
    }
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
  if ( (byte_49FCB89 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Remove__, servantEntity);
    this = (ServantMaster_o *)sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_49FCB89 = 1;
  }
  if ( !servantEntity )
    goto LABEL_16;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( SvtType__IsServantEquip(servantEntity->fields.type, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v12.fields.currentCryptoKey = v8;
      *(_QWORD *)&v12.fields.fakeValue = v7;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v12, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_16;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( SvtType__IsServantCollection(servantEntity->fields.type, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v13.fields.currentCryptoKey = v11;
      *(_QWORD *)&v13.fields.fakeValue = v10;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v13, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_3491478 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_16:
      sub_1B64324(this);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 methodPtr_low; // x9
  __int64 v23; // x1
  ServantStatusBattleListViewItem_o *v24; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_49FCB86 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_1B640C8(&ServantEntity_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    byte_49FCB86 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
    {
      sub_1B645E4(v19);
LABEL_32:
      sub_1B64324(v19);
    }
    v24 = (ServantStatusBattleListViewItem_o *)(v19 + 48);
    v23 = *(_QWORD *)(v19 + 48);
    *(_QWORD *)(v19 + 56) = v23;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 56), v23, v20, v21);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    v24->klass = (ServantStatusBattleListViewItem_c *)v25;
    sub_1B6406C(v24, (int32_t)v25, v26, v27);
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_28;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_28:
    v31 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCB91 & 1) == 0 )
  {
    sub_1B640C8(&ServantMaster___c_TypeInfo, v1);
    byte_49FCB91 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaster___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ServantMaster___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
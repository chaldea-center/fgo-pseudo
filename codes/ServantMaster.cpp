void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5B8F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5B8F4 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantEquipIdList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantCollectionIdList, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    1,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
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
  struct System_Int32_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v12; // x19
  __int64 v13; // x21
  struct System_Int32_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  v4 = this;
  if ( (byte_4A5B8F7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (ServantMaster_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5B8F7 = 1;
  }
  if ( !servantEntity )
    goto LABEL_22;
  if ( servantEntity->fields.collectionNo < 1 )
    return;
  if ( SvtType__IsServantEquip(servantEntity->fields.type, 0LL) )
  {
    servantEquipIdList = v4->fields.servantEquipIdList;
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = v7;
    *(_QWORD *)&v17.fields.fakeValue = v6;
    this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
    if ( !servantEquipIdList )
      goto LABEL_22;
    items = servantEquipIdList->fields._items;
    v9 = Method_System_Collections_Generic_List_int__Add__;
    ++servantEquipIdList->fields._version;
    if ( !items )
      goto LABEL_22;
    size = servantEquipIdList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        servantEquipIdList,
        (int32_t)this,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v12 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v13;
  *(_QWORD *)&v18.fields.fakeValue = v12;
  this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  if ( !servantCollectionIdList
    || (v14 = servantCollectionIdList->fields._items,
        v15 = Method_System_Collections_Generic_List_int__Add__,
        ++servantCollectionIdList->fields._version,
        !v14) )
  {
LABEL_22:
    sub_1B8880C(this, servantEntity);
  }
  v16 = servantCollectionIdList->fields._size;
  if ( (unsigned int)v16 >= v14->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      servantCollectionIdList,
      (int32_t)this,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    servantCollectionIdList->fields._size = v16 + 1;
    v14->m_Items[v16 + 1] = (int)this;
  }
}


void __fastcall ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  ServantMaster_o *v2; // x20
  struct System_Collections_Generic_List_int__o *servantEquipIdList; // x8
  int v4; // w9
  struct System_Collections_Generic_List_int__o *servantCollectionIdList; // x8
  int v6; // w9
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantEntity_o *v17; // x0
  const MethodInfo *v18; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0

  v2 = this;
  if ( (byte_4A5B8F6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Clear__);
    this = (ServantMaster_o *)sub_1B885B0(&ServantEntity_TypeInfo);
    byte_4A5B8F6 = 1;
  }
  servantEquipIdList = v2->fields.servantEquipIdList;
  if ( !servantEquipIdList )
    goto LABEL_31;
  v4 = servantEquipIdList->fields._version + 1;
  servantEquipIdList->fields._size = 0;
  servantEquipIdList->fields._version = v4;
  servantCollectionIdList = v2->fields.servantCollectionIdList;
  if ( !servantCollectionIdList
    || (v6 = servantCollectionIdList->fields._version + 1,
        servantCollectionIdList->fields._size = 0,
        servantCollectionIdList->fields._version = v6,
        (this = (ServantMaster_o *)v2->fields.list) == 0LL) )
  {
LABEL_31:
    sub_1B8880C(this, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v15 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_18:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                               Enumerator,
                               *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantEntity_TypeInfo )
      {
        ServantMaster__AddServantCache(v2, v17, v18);
      }
    }
  }
  v20 = Enumerator->klass;
  v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_28;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_28:
    v23 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(Enumerator, *(_QWORD *)(v23 + 8));
}


System_Int32_array *__fastcall ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v5; // x21
  int32_t v6; // w22
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  struct System_Int32_array *v10; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5B8FB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantEntity_TypeInfo);
    byte_4A5B8FB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v6,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        *(_QWORD *)&v14.fields.currentCryptoKey = items;
        *(_QWORD *)&v14.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                   v14,
                                                                   0LL);
        if ( !v5 )
          break;
        v10 = v5->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !v10 )
          break;
        size = v5->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= v10->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            (int32_t)list,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = size + 1;
          v10->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v6 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1B8880C(list, method);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_39705836(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_4A5B8FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5B8FC = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_1B8880C(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall ServantMaster__GetLimitCountMaxList(
        ServantMaster_o *this,
        const MethodInfo *method)
{
  void *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21
  int32_t v6; // w22
  void *v7; // x23
  __int64 methodPtr_low; // x10
  __int64 v9; // x24
  __int64 v10; // x25
  int32_t v11; // w24
  int32_t v12; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A5B8FA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantEntity_TypeInfo);
    byte_4A5B8FA = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v6,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v7 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( !SvtType__IsEnemy(*((_DWORD *)list + 21), 0LL) )
      {
        v10 = *((_QWORD *)v7 + 2);
        v9 = *((_QWORD *)v7 + 3);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v14.fields.currentCryptoKey = v10;
        *(_QWORD *)&v14.fields.fakeValue = v9;
        v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
        list = (void *)SvtType__IsServant(*((_DWORD *)v7 + 21), 0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
          v12 = *((_DWORD *)v7 + 22);
        else
          v12 = 0;
        if ( !v5 )
          break;
        System_Collections_Generic_Dictionary_int__int___Add(
          v5,
          v11,
          v12,
          (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( Count == ++v6 )
        return v5;
    }
LABEL_20:
    sub_1B8880C(list, method);
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x21
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 methodPtr_low; // x10
  __int64 v11; // x24
  __int64 v12; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Comparison_int__o *v16; // x19
  Il2CppObject *v17; // x20
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v3 = classId;
  if ( (byte_4A5B8FE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort___76036656);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantEntity_TypeInfo);
    sub_1B885B0(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__);
    sub_1B885B0(&ServantMaster___c_TypeInfo);
    byte_4A5B8FE = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( SvtType__IsCombineMaterial(*((_DWORD *)list + 21), 0LL) && *((_DWORD *)v9 + 20) == v3 )
      {
        v12 = v9[2];
        v11 = v9[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = v12;
        *(_QWORD *)&v22.fields.fakeValue = v11;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v8 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B8880C(list, *(_QWORD *)&classId);
  }
LABEL_20:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v16 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)list + 23);
    v16 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v16, v17, Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)v16, v19, v20);
  }
  if ( !v7 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_55452212(
    v7,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_34E2234 *)Method_System_Collections_Generic_List_int__Sort___76036656);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v7; // x21
  int32_t v8; // w23
  _QWORD *v9; // x24
  __int64 methodPtr_low; // x10
  __int64 v11; // x24
  __int64 v12; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Comparison_int__o *v16; // x19
  Il2CppObject *v17; // x20
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v3 = classId;
  if ( (byte_4A5B8FF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&System_Comparison_int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Sort___76036656);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantEntity_TypeInfo);
    sub_1B885B0(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__);
    sub_1B885B0(&ServantMaster___c_TypeInfo);
    byte_4A5B8FF = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v8,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v9 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( SvtType__IsStatusUp(*((_DWORD *)list + 21), 0LL) && *((_DWORD *)v9 + 20) == v3 )
      {
        v12 = v9[2];
        v11 = v9[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v22.fields.currentCryptoKey = v12;
        *(_QWORD *)&v22.fields.fakeValue = v11;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v22, 0LL);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            (int32_t)list,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v8 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1B8880C(list, *(_QWORD *)&classId);
  }
LABEL_20:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v16 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v16 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)**((_QWORD **)list + 23);
    v16 = (System_Comparison_int__o *)sub_1B887FC(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v16, v17, Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)v16, v19, v20);
  }
  if ( !v7 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_55452212(
    v7,
    (System_Comparison_T__o *)v16,
    (const MethodInfo_34E2234 *)Method_System_Collections_Generic_List_int__Sort___76036656);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall ServantMaster__MargeServantVoiceId(
        ServantMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  const MethodInfo *v12; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A5B8FD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantChangeMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantEntity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B8FD = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v7 = Count;
    v8 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v8,
                                                                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
        *(_QWORD *)&v13.fields.currentCryptoKey = items;
        *(_QWORD *)&v13.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                                                   v13,
                                                                   0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v7 == ++v8 )
        goto LABEL_16;
    }
LABEL_21:
    sub_1B8880C(list, isVoiceList);
  }
LABEL_16:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_21;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, v12);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
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
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v11; // x0
  System_NotImplementedException_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  ServantEntity_o *v25; // x22
  __int64 v26; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v28; // x2
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x21
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  System_Collections_IEnumerator_c **v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  ServantEntity_o *v51; // x21
  __int64 v52; // x8
  __int64 v53; // x10
  const MethodInfo *v54; // x2
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x20
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0

  v4 = this;
  if ( (byte_4A5B8F9 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    this = (ServantMaster_o *)sub_1B885B0(&ServantEntity_TypeInfo);
    byte_4A5B8F9 = 1;
  }
  if ( !e )
    sub_1B8880C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v11 = sub_1B885C4(&System_NotImplementedException_TypeInfo);
        v12 = (System_NotImplementedException_o *)sub_1B887FC(v11);
        System_NotImplementedException___ctor(v12, 0LL);
        v13 = sub_1B885C4(&Method_ServantMaster_OnListChangedImplementation__);
        sub_1B886D8(v12, v13);
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
      v8 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v8;
          p_offset += 4;
          if ( !v8 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1BDA590(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v15 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v15 )
        sub_1B8880C(0LL, v14);
      while ( 1 )
      {
        v16 = *(_QWORD *)v15;
        v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v17;
            v18 += 4;
            if ( !v17 )
              goto LABEL_20;
          }
          v19 = v16 + 16LL * *v18 + 312;
        }
        else
        {
LABEL_20:
          v19 = sub_1BDA590(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
          break;
        v20 = *(_QWORD *)v15;
        v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
        {
          v22 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v20 + 176) + 8LL);
          while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v21;
            v22 += 2;
            if ( !v21 )
              goto LABEL_27;
          }
          v23 = v20 + 16LL * (*(_DWORD *)v22 + 1) + 312;
        }
        else
        {
LABEL_27:
          v23 = sub_1BDA590(v15, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
        v25 = (ServantEntity_o *)v24;
        if ( v24 )
        {
          v26 = *(_QWORD *)v24;
          methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantEntity_c **)(*(_QWORD *)(v26 + 200) + 8 * methodPtr_low - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v26 + 376))(v24, *(_QWORD *)(v26 + 384)) )
              ServantMaster__RemoveServantCache(v4, v25, v28);
          }
        }
      }
      v29 = sub_1B886EC(v15, System_IDisposable_TypeInfo);
      if ( v29 )
      {
        v30 = *(_QWORD *)v29;
        v31 = v29;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_39;
          }
          v34 = v30 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_39:
          v34 = sub_1BDA590(v29, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v36 = newItems->klass;
      v37 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v38 = &v36->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v38 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v37;
          v38 += 4;
          if ( !v37 )
            goto LABEL_47;
        }
        v39 = (__int64)&v36->vtable[*v38].method;
      }
      else
      {
LABEL_47:
        v39 = sub_1BDA590(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v41 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v39)(newItems, *(_QWORD *)(v39 + 8));
      if ( !v41 )
        sub_1B8880C(0LL, v40);
      while ( 1 )
      {
        v42 = *(_QWORD *)v41;
        v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v43;
            v44 += 4;
            if ( !v43 )
              goto LABEL_54;
          }
          v45 = v42 + 16LL * *v44 + 312;
        }
        else
        {
LABEL_54:
          v45 = sub_1BDA590(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
          break;
        v46 = *(_QWORD *)v41;
        v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
        {
          v48 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *(v48 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v47;
            v48 += 2;
            if ( !v47 )
              goto LABEL_61;
          }
          v49 = v46 + 16LL * (*(_DWORD *)v48 + 1) + 312;
        }
        else
        {
LABEL_61:
          v49 = sub_1BDA590(v41, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
        v51 = (ServantEntity_o *)v50;
        if ( v50 )
        {
          v52 = *(_QWORD *)v50;
          v53 = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v50 + 304LL) >= (unsigned int)v53
            && *(ServantEntity_c **)(*(_QWORD *)(v52 + 200) + 8 * v53 - 8) == ServantEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v52 + 376))(v50, *(_QWORD *)(v52 + 384)) )
          {
            ServantMaster__AddServantCache(v4, v51, v54);
          }
        }
      }
      v55 = sub_1B886EC(v41, System_IDisposable_TypeInfo);
      if ( v55 )
      {
        v56 = *(_QWORD *)v55;
        v57 = v55;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_73;
          }
          v60 = v56 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_73:
          v60 = sub_1BDA590(v55, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v60)(v57, *(_QWORD *)(v60 + 8));
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
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v9; // x19
  __int64 v10; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  v4 = this;
  if ( (byte_4A5B8F8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    this = (ServantMaster_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5B8F8 = 1;
  }
  if ( !servantEntity )
    goto LABEL_16;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( SvtType__IsServantEquip(servantEntity->fields.type, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v6 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v11.fields.currentCryptoKey = v7;
      *(_QWORD *)&v11.fields.fakeValue = v6;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v11, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_16;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( SvtType__IsServantCollection(servantEntity->fields.type, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v12.fields.currentCryptoKey = v10;
      *(_QWORD *)&v12.fields.fakeValue = v9;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v12, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_16:
      sub_1B8880C(this, servantEntity);
    }
  }
}


bool __fastcall ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 methodPtr_low; // x9
  __int64 v19; // x1
  ServantStatusBattleListViewItem_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5B8F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    sub_1B885B0(&ServantEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B8F5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12].method;
    }
    else
    {
LABEL_16:
      v13 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v14 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v14 + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
    {
      sub_1B88ACC(v14);
LABEL_32:
      sub_1B8880C(v14, v15);
    }
    v20 = (ServantStatusBattleListViewItem_o *)(v14 + 48);
    v19 = *(_QWORD *)(v14 + 48);
    *(_QWORD *)(v14 + 56) = v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 56), v19, v16, v17);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    v20->klass = (ServantStatusBattleListViewItem_c *)v21;
    sub_1B88554(v20, (int32_t)v21, v22, v23);
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
    v27 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(Enumerator, *(_QWORD *)(v27 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B900 & 1) == 0 )
  {
    sub_1B885B0(&ServantMaster___c_TypeInfo);
    byte_4A5B900 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ServantMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
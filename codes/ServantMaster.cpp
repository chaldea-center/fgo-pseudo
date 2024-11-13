void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_int__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_int__o *v19; // x20
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B16A82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v7, v8);
    byte_4B16A82 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantEquipIdList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v19 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v19;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.servantCollectionIdList,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    1,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
}


void __fastcall ServantMaster__AddServantCache(
        ServantMaster_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  __int64 v14; // x1
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v16; // x19
  __int64 v17; // x21
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v4 = this;
  if ( (byte_4B16A85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, servantEntity, method);
    this = (ServantMaster_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B16A85 = 1;
  }
  if ( !servantEntity )
    goto LABEL_22;
  if ( servantEntity->fields.collectionNo < 1 )
    return;
  if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
  {
    servantEquipIdList = v4->fields.servantEquipIdList;
    v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    *(_QWORD *)&v21.fields.currentCryptoKey = v10;
    *(_QWORD *)&v21.fields.fakeValue = v9;
    this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v21, 0LL);
    if ( !servantEquipIdList )
      goto LABEL_22;
    items = servantEquipIdList->fields._items;
    v12 = Method_System_Collections_Generic_List_int__Add__;
    ++servantEquipIdList->fields._version;
    if ( !items )
      goto LABEL_22;
    size = servantEquipIdList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        servantEquipIdList,
        (int32_t)this,
        *(const MethodInfo_3584C38 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      servantEquipIdList->fields._size = size + 1;
      items->m_Items[size + 1] = (int)this;
    }
  }
  if ( !ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    return;
  servantCollectionIdList = v4->fields.servantCollectionIdList;
  v17 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v16 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v22.fields.currentCryptoKey = v17;
  *(_QWORD *)&v22.fields.fakeValue = v16;
  this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v22, 0LL);
  if ( !servantCollectionIdList
    || (v18 = servantCollectionIdList->fields._items,
        v19 = Method_System_Collections_Generic_List_int__Add__,
        ++servantCollectionIdList->fields._version,
        !v18) )
  {
LABEL_22:
    sub_1BCAA3C(this, servantEntity);
  }
  v20 = servantCollectionIdList->fields._size;
  if ( (unsigned int)v20 >= v18->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      servantCollectionIdList,
      (int32_t)this,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    servantCollectionIdList->fields._size = v20 + 1;
    v18->m_Items[v20 + 1] = (int)this;
  }
}


void __fastcall ServantMaster__CreateServantCache(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  ServantMaster_o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_int__o *servantEquipIdList; // x8
  int v15; // w9
  struct System_Collections_Generic_List_int__o *servantCollectionIdList; // x8
  int v17; // w9
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  ServantEntity_o *v28; // x0
  const MethodInfo *v29; // x2
  __int64 methodPtr_low; // x10
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0

  v3 = this;
  if ( (byte_4B16A84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Clear__, v10, v11);
    this = (ServantMaster_o *)sub_1BCA7E0(&ServantEntity_TypeInfo, v12, v13);
    byte_4B16A84 = 1;
  }
  servantEquipIdList = v3->fields.servantEquipIdList;
  if ( !servantEquipIdList )
    goto LABEL_31;
  v15 = servantEquipIdList->fields._version + 1;
  servantEquipIdList->fields._size = 0;
  servantEquipIdList->fields._version = v15;
  servantCollectionIdList = v3->fields.servantCollectionIdList;
  if ( !servantCollectionIdList
    || (v17 = servantCollectionIdList->fields._version + 1,
        servantCollectionIdList->fields._size = 0,
        servantCollectionIdList->fields._version = v17,
        (this = (ServantMaster_o *)v3->fields.list) == 0LL) )
  {
LABEL_31:
    sub_1BCAA3C(this, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_18;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_18:
      v27 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v28 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                               Enumerator,
                               *(_QWORD *)(v27 + 8));
    if ( v28 )
    {
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v28->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (ServantEntity_c *)v28->klass->_2.typeHierarchy[methodPtr_low - 1] == ServantEntity_TypeInfo )
      {
        ServantMaster__AddServantCache(v3, v28, v29);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_28;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_28:
    v34 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
}


System_Int32_array *__fastcall ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_List_int__o *v23; // x21
  int32_t v24; // w22
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4B16A89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v12, v13);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantEntity_TypeInfo, v16, v17);
    byte_4B16A89 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v24,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v32.fields.currentCryptoKey = items;
        *(_QWORD *)&v32.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                   v32,
                                                                   0LL);
        if ( !v23 )
          break;
        v28 = v23->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !v28 )
          break;
        size = v23->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= v28->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            (int32_t)list,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = size + 1;
          v28->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v24 )
        goto LABEL_19;
    }
LABEL_21:
    sub_1BCAA3C(list, method);
  }
LABEL_19:
  if ( !v23 )
    goto LABEL_21;
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_40519096(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_4B16A8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, isEquip, method);
    byte_4B16A8A = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_1BCAA3C(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_Dictionary_int__int__o *__fastcall ServantMaster__GetLimitCountMaxList(
        ServantMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_Dictionary_int__int__o *v21; // x21
  int32_t v22; // w22
  System_Collections_ObjectModel_Collection_T__o *v23; // x23
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  int32_t v27; // w24
  int32_t v28; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B16A88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13);
    sub_1BCA7E0(&ServantEntity_TypeInfo, v14, v15);
    byte_4B16A88 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v18,
                                                               v19,
                                                               v20);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v21,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v23 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)list, 0LL) )
      {
        items = v23->fields.items;
        klass = v23[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
        *(_QWORD *)&v30.fields.currentCryptoKey = items;
        *(_QWORD *)&v30.fields.fakeValue = klass;
        v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v30, 0LL);
        list = (System_Collections_ObjectModel_Collection_T__o *)ServantEntity__get_IsServant(
                                                                   (ServantEntity_o *)v23,
                                                                   0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
          v28 = (int32_t)v23[3].fields.items;
        else
          v28 = 0;
        if ( !v21 )
          break;
        System_Collections_Generic_Dictionary_int__int___Add(
          v21,
          v27,
          v28,
          (const MethodInfo_31FD274 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( Count == ++v22 )
        return v21;
    }
LABEL_20:
    sub_1BCAA3C(list, method);
  }
  return v21;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *list; // x0
  int32_t Count; // w22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  int32_t v35; // w23
  _QWORD *v36; // x24
  __int64 methodPtr_low; // x10
  __int64 v38; // x24
  __int64 v39; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  System_Comparison_int__o *v43; // x19
  Il2CppObject *v44; // x20
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v3 = classId;
  if ( (byte_4B16A8C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&classId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort___76787584, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, v23, v24);
    sub_1BCA7E0(&ServantMaster___c_TypeInfo, v25, v26);
    byte_4B16A8C = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v35,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v36 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0LL) && *((_DWORD *)v36 + 20) == v3 )
      {
        v39 = v36[2];
        v38 = v36[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classId);
        *(_QWORD *)&v53.fields.currentCryptoKey = v39;
        *(_QWORD *)&v53.fields.fakeValue = v38;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
        if ( !v32 )
          break;
        items = v32->fields._items;
        v41 = Method_System_Collections_Generic_List_int__Add__;
        ++v32->fields._version;
        if ( !items )
          break;
        size = v32->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v32,
            (int32_t)list,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v32->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v35 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1BCAA3C(list, *(_QWORD *)&classId);
  }
LABEL_20:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo, *(_QWORD *)&classId);
    list = ServantMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&classId);
      list = ServantMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, *(_QWORD *)&classId, v33, v34);
    System_Comparison_int____ctor(v43, v44, Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v32 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_56125020(
    v32,
    (System_Comparison_T__o *)v43,
    (const MethodInfo_358665C *)Method_System_Collections_Generic_List_int__Sort___76787584);
  return System_Collections_Generic_List_int___ToArray(
           v32,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  void *list; // x0
  int32_t Count; // w22
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Collections_Generic_List_int__o *v32; // x21
  __int64 v33; // x2
  __int64 v34; // x3
  int32_t v35; // w23
  _QWORD *v36; // x24
  __int64 methodPtr_low; // x10
  __int64 v38; // x24
  __int64 v39; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  System_Comparison_int__o *v43; // x19
  Il2CppObject *v44; // x20
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  v3 = classId;
  if ( (byte_4B16A8D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&classId,
      method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&System_Comparison_int__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Sort___76787584, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20);
    sub_1BCA7E0(&ServantEntity_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, v23, v24);
    sub_1BCA7E0(&ServantMaster___c_TypeInfo, v25, v26);
    byte_4B16A8D = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v32 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v29,
                                                    v30,
                                                    v31);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v35,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !list )
        break;
      v36 = list;
      methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
        || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0LL) && *((_DWORD *)v36 + 20) == v3 )
      {
        v39 = v36[2];
        v38 = v36[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&classId);
        *(_QWORD *)&v53.fields.currentCryptoKey = v39;
        *(_QWORD *)&v53.fields.fakeValue = v38;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v53, 0LL);
        if ( !v32 )
          break;
        items = v32->fields._items;
        v41 = Method_System_Collections_Generic_List_int__Add__;
        ++v32->fields._version;
        if ( !items )
          break;
        size = v32->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v32,
            (int32_t)list,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v32->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v35 )
        goto LABEL_20;
    }
LABEL_28:
    sub_1BCAA3C(list, *(_QWORD *)&classId);
  }
LABEL_20:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo, *(_QWORD *)&classId);
    list = ServantMaster___c_TypeInfo;
  }
  v43 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list, *(_QWORD *)&classId);
      list = ServantMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)list + 23);
    v43 = (System_Comparison_int__o *)sub_1BCAA2C(System_Comparison_int__TypeInfo, *(_QWORD *)&classId, v33, v34);
    System_Comparison_int____ctor(v43, v44, Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = v43;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)v43, v46, v47, v48, v49, v50, v51);
  }
  if ( !v32 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_56125020(
    v32,
    (System_Comparison_T__o *)v43,
    (const MethodInfo_358665C *)Method_System_Collections_Generic_List_int__Sort___76787584);
  return System_Collections_Generic_List_int___ToArray(
           v32,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


void __fastcall ServantMaster__MargeServantVoiceId(
        ServantMaster_o *this,
        System_Collections_Generic_Dictionary_int__bool__o *isVoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v21; // w21
  int32_t v22; // w22
  __int64 methodPtr_low; // x10
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4B16A8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantChangeMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v11, v12);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14);
    sub_1BCA7E0(&ServantEntity_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B16A8B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v21 = Count;
    v22 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v22,
                                                                 (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, isVoiceList);
        *(_QWORD *)&v27.fields.currentCryptoKey = items;
        *(_QWORD *)&v27.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                                   v27,
                                                                   0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v21 == ++v22 )
        goto LABEL_16;
    }
LABEL_21:
    sub_1BCAA3C(list, isVoiceList);
  }
LABEL_16:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_21;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_21;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
  if ( !list )
    goto LABEL_21;
  ServantVoiceRelationMaster__MargeServantVoiceId((ServantVoiceRelationMaster_o *)list, isVoiceList, v26);
}


void __fastcall ServantMaster__OnListChangedImplementation(
        ServantMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  ServantMaster_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_NotImplementedException_o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  System_Collections_IEnumerator_c **v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  ServantEntity_o *v35; // x22
  __int64 v36; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v38; // x2
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x21
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x20
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  System_Collections_IEnumerator_c **v58; // x10
  __int64 v59; // x0
  __int64 v60; // x0
  ServantEntity_o *v61; // x21
  __int64 v62; // x8
  __int64 v63; // x10
  const MethodInfo *v64; // x2
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x20
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0

  v4 = this;
  if ( (byte_4B16A87 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, e, method);
    sub_1BCA7E0(&System_Collections_IEnumerable_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v7, v8);
    this = (ServantMaster_o *)sub_1BCA7E0(&ServantEntity_TypeInfo, v9, v10);
    byte_4B16A87 = 1;
  }
  if ( !e )
    sub_1BCAA3C(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v17 = sub_1BCA7F4(&System_NotImplementedException_TypeInfo, e);
        v21 = (System_NotImplementedException_o *)sub_1BCAA2C(v17, v18, v19, v20);
        System_NotImplementedException___ctor(v21, 0LL);
        v23 = sub_1BCA7F4(&Method_ServantMaster_OnListChangedImplementation__, v22);
        sub_1BCA908(v21, v23);
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
      v14 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v14;
          p_offset += 4;
          if ( !v14 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1C1C7C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v25 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v25 )
        sub_1BCAA3C(0LL, v24);
      while ( 1 )
      {
        v26 = *(_QWORD *)v25;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_20;
          }
          v29 = v26 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_20:
          v29 = sub_1C1C7C0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
          break;
        v30 = *(_QWORD *)v25;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v32 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *(v32 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v31;
            v32 += 2;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = v30 + 16LL * (*(_DWORD *)v32 + 1) + 312;
        }
        else
        {
LABEL_27:
          v33 = sub_1C1C7C0(v25, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
        v35 = (ServantEntity_o *)v34;
        if ( v34 )
        {
          v36 = *(_QWORD *)v34;
          methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v34 + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantEntity_c **)(*(_QWORD *)(v36 + 200) + 8 * methodPtr_low - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v36 + 376))(v34, *(_QWORD *)(v36 + 384)) )
              ServantMaster__RemoveServantCache(v4, v35, v38);
          }
        }
      }
      v39 = sub_1BCA91C(v25, System_IDisposable_TypeInfo);
      if ( v39 )
      {
        v40 = *(_QWORD *)v39;
        v41 = v39;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_39;
          }
          v44 = v40 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_39:
          v44 = sub_1C1C7C0(v39, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v46 = newItems->klass;
      v47 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v48 = &v46->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v48 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_47;
        }
        v49 = (__int64)&v46->vtable[*v48].method;
      }
      else
      {
LABEL_47:
        v49 = sub_1C1C7C0(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v51 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v49)(newItems, *(_QWORD *)(v49 + 8));
      if ( !v51 )
        sub_1BCAA3C(0LL, v50);
      while ( 1 )
      {
        v52 = *(_QWORD *)v51;
        v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v53;
            v54 += 4;
            if ( !v53 )
              goto LABEL_54;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_54:
          v55 = sub_1C1C7C0(v51, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
          break;
        v56 = *(_QWORD *)v51;
        v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
        {
          v58 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *(v58 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v57;
            v58 += 2;
            if ( !v57 )
              goto LABEL_61;
          }
          v59 = v56 + 16LL * (*(_DWORD *)v58 + 1) + 312;
        }
        else
        {
LABEL_61:
          v59 = sub_1C1C7C0(v51, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
        v61 = (ServantEntity_o *)v60;
        if ( v60 )
        {
          v62 = *(_QWORD *)v60;
          v63 = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v60 + 304LL) >= (unsigned int)v63
            && *(ServantEntity_c **)(*(_QWORD *)(v62 + 200) + 8 * v63 - 8) == ServantEntity_TypeInfo
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(v62 + 376))(v60, *(_QWORD *)(v62 + 384)) )
          {
            ServantMaster__AddServantCache(v4, v61, v64);
          }
        }
      }
      v65 = sub_1BCA91C(v51, System_IDisposable_TypeInfo);
      if ( v65 )
      {
        v66 = *(_QWORD *)v65;
        v67 = v65;
        v68 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
        {
          v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
          {
            --v68;
            v69 += 4;
            if ( !v68 )
              goto LABEL_73;
          }
          v70 = v66 + 16LL * *v69 + 312;
        }
        else
        {
LABEL_73:
          v70 = sub_1C1C7C0(v65, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
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
  __int64 v6; // x2
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v9; // x22
  __int64 v10; // x23
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v13; // x19
  __int64 v14; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  v4 = this;
  if ( (byte_4B16A86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Remove__, servantEntity, method);
    this = (ServantMaster_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6);
    byte_4B16A86 = 1;
  }
  if ( !servantEntity )
    goto LABEL_16;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v9 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
      *(_QWORD *)&v15.fields.currentCryptoKey = v10;
      *(_QWORD *)&v15.fields.fakeValue = v9;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v15, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_16;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
      *(_QWORD *)&v16.fields.currentCryptoKey = v14;
      *(_QWORD *)&v16.fields.fakeValue = v13;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v16, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_3586134 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_16:
      sub_1BCAA3C(this, servantEntity);
    }
  }
}


bool __fastcall ServantMaster__preProcess(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 methodPtr_low; // x9
  int64_t v36; // x1
  PartyOrganizationUtility_o *v37; // x20
  __int64 v38; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0

  if ( (byte_4B16A83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v10, v11);
    sub_1BCA7E0(&ServantEntity_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    byte_4B16A83 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_32;
    methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != ServantEntity_TypeInfo )
    {
      sub_1BCACFC(v27);
LABEL_32:
      sub_1BCAA3C(v27, v28);
    }
    v37 = (PartyOrganizationUtility_o *)(v27 + 48);
    v36 = *(_QWORD *)(v27 + 48);
    *(_QWORD *)(v27 + 56) = v36;
    sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 56), v36, v29, v30, v31, v32, v33, v34);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v38);
    v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    v37->klass = (PartyOrganizationUtility_c *)v39;
    sub_1BCA784(v37, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  }
  v46 = Enumerator->klass;
  v47 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v48 = &v46->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_28;
    }
    v49 = (__int64)&v46->vtable[*v48].method;
  }
  else
  {
LABEL_28:
    v49 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(Enumerator, *(_QWORD *)(v49 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16A8E & 1) == 0 )
  {
    sub_1BCA7E0(&ServantMaster___c_TypeInfo, v1, v2);
    byte_4B16A8E = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
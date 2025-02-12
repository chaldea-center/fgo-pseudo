void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_int__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_List_int__o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4BB4F9B & 1) == 0 )
  {
    sub_1C13D24(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v4);
    byte_4BB4F9B = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v5;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.servantEquipIdList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v12;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.servantCollectionIdList,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    1,
    (const MethodInfo_3236300 *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
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
  if ( (byte_4BB4F9E & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, servantEntity);
    this = (ServantMaster_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4BB4F9E = 1;
  }
  if ( !servantEntity )
    goto LABEL_22;
  if ( servantEntity->fields.collectionNo < 1 )
    return;
  if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
  {
    servantEquipIdList = v4->fields.servantEquipIdList;
    v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
    v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = v8;
    *(_QWORD *)&v18.fields.fakeValue = v7;
    this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL);
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
        *(const MethodInfo_36101A8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
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
  v14 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
  v13 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v19, 0LL);
  if ( !servantCollectionIdList
    || (v15 = servantCollectionIdList->fields._items,
        v16 = Method_System_Collections_Generic_List_int__Add__,
        ++servantCollectionIdList->fields._version,
        !v15) )
  {
LABEL_22:
    sub_1C13F80(this, servantEntity);
  }
  v17 = servantCollectionIdList->fields._size;
  if ( (unsigned int)v17 >= v15->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      servantCollectionIdList,
      (int32_t)this,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
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
  struct System_Collections_Generic_List_int__o *servantEquipIdList; // x8
  int v8; // w9
  struct System_Collections_Generic_List_int__o *servantCollectionIdList; // x8
  int v10; // w9
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  ServantEntity_o *v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  v2 = this;
  if ( (byte_4BB4F9D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__, method);
    sub_1C13D24(&System_IDisposable_TypeInfo, v3);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, v4);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v5);
    this = (ServantMaster_o *)sub_1C13D24(&Method_System_Collections_Generic_List_int__Clear__, v6);
    byte_4BB4F9D = 1;
  }
  servantEquipIdList = v2->fields.servantEquipIdList;
  if ( !servantEquipIdList )
    goto LABEL_29;
  v8 = servantEquipIdList->fields._version + 1;
  servantEquipIdList->fields._size = 0;
  servantEquipIdList->fields._version = v8;
  servantCollectionIdList = v2->fields.servantCollectionIdList;
  if ( !servantCollectionIdList
    || (v10 = servantCollectionIdList->fields._version + 1,
        servantCollectionIdList->fields._size = 0,
        servantCollectionIdList->fields._version = v10,
        (this = (ServantMaster_o *)v2->fields.list) == 0LL) )
  {
LABEL_29:
    sub_1C13F80(this, method);
  }
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)this,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v11);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
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
      v20 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0LL);
    }
    v21 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                               Enumerator,
                               *(_QWORD *)(v20 + 8));
    if ( v21 )
      ServantMaster__AddServantCache(v2, v21, v22);
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_26;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_26:
    v26 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


System_Int32_array *__fastcall ServantMaster__GetCollectionList(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_List_int__o *v11; // x21
  int32_t v12; // w22
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  struct System_Int32_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BB4FA2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    byte_4BB4FA2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v12,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v19.fields.currentCryptoKey = items;
        *(_QWORD *)&v19.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                                   v19,
                                                                   0LL);
        if ( !v11 )
          break;
        v15 = v11->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v11->fields._version;
        if ( !v15 )
          break;
        size = v11->fields._size;
        method = (const MethodInfo *)(unsigned int)list;
        if ( (unsigned int)size >= v15->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v11,
            (int32_t)list,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v11->fields._size = size + 1;
          v15->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v12 )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C13F80(list, method);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_40955956(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_4BB4FA3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, isEquip);
    byte_4BB4FA3 = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_1C13F80(servantCollectionIdList, isEquip);
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w20
  System_Collections_Generic_Dictionary_int__int__o *v10; // x21
  int32_t v11; // w22
  System_Collections_ObjectModel_Collection_T__o *v12; // x23
  System_Collections_ObjectModel_Collection_T__c *klass; // x24
  struct System_Collections_Generic_IList_T__o *items; // x25
  int32_t v15; // w24
  int32_t v16; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4BB4FA1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1C13D24(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    byte_4BB4FA1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C13F70(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_3288E14 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v11,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v12 = list;
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)list, 0LL) )
      {
        items = v12->fields.items;
        klass = v12[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = items;
        *(_QWORD *)&v18.fields.fakeValue = klass;
        v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v18, 0LL);
        list = (System_Collections_ObjectModel_Collection_T__o *)ServantEntity__get_IsServant(
                                                                   (ServantEntity_o *)v12,
                                                                   0LL);
        if ( ((unsigned __int8)list & 1) != 0 )
          v16 = (int32_t)v12[3].fields.items;
        else
          v16 = 0;
        if ( !v10 )
          break;
        System_Collections_Generic_Dictionary_int__int___Add(
          v10,
          v15,
          v16,
          (const MethodInfo_32897D8 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( Count == ++v11 )
        return v10;
    }
LABEL_18:
    sub_1C13F80(list, method);
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassMaterialSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v17; // x20
  int32_t v18; // w23
  _QWORD *v19; // x24
  __int64 v20; // x24
  __int64 v21; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Comparison_int__o *v25; // x19
  Il2CppObject *v26; // x21
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v3 = classId;
  if ( (byte_4BB4FA5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__, *(_QWORD *)&classId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_int__TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Sort___77417448, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C13D24(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, v13);
    sub_1C13D24(&ServantMaster___c_TypeInfo, v14);
    byte_4BB4FA5 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v19 = list;
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)list, 0LL) && *((_DWORD *)v19 + 20) == v3 )
      {
        v21 = v19[2];
        v20 = v19[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v21;
        *(_QWORD *)&v35.fields.fakeValue = v20;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v35, 0LL);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            (int32_t)list,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v18 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C13F80(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 8LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)list + 23);
    v25 = (System_Comparison_int__o *)sub_1C13F70(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v25, v26, Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = v25;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__12_0, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v17 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_56695756(
    v17,
    (System_Comparison_T__o *)v25,
    (const MethodInfo_3611BCC *)Method_System_Collections_Generic_List_int__Sort___77417448);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetTargetClassStatusUpSvtIdList(
        ServantMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  int32_t v3; // w19
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
  void *list; // x0
  int32_t Count; // w22
  System_Collections_Generic_List_int__o *v17; // x20
  int32_t v18; // w23
  _QWORD *v19; // x24
  __int64 v20; // x24
  __int64 v21; // x25
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  System_Comparison_int__o *v25; // x19
  Il2CppObject *v26; // x21
  struct ServantMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  v3 = classId;
  if ( (byte_4BB4FA6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__, *(_QWORD *)&classId);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__, v5);
    sub_1C13D24(&System_Comparison_int__TypeInfo, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Sort___77417448, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1C13D24(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, v13);
    sub_1C13D24(&ServantMaster___c_TypeInfo, v14);
    byte_4BB4FA6 = 1;
  }
  list = this->fields.list;
  if ( !list )
    goto LABEL_26;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            (System_Collections_ObjectModel_Collection_T__o *)list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      list = this->fields.list;
      if ( !list )
        break;
      list = System_Collections_ObjectModel_Collection_object___get_Item(
               (System_Collections_ObjectModel_Collection_T__o *)list,
               v18,
               (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      v19 = list;
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)list, 0LL) && *((_DWORD *)v19 + 20) == v3 )
      {
        v21 = v19[2];
        v20 = v19[3];
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v35.fields.currentCryptoKey = v21;
        *(_QWORD *)&v35.fields.fakeValue = v20;
        list = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v35, 0LL);
        if ( !v17 )
          break;
        items = v17->fields._items;
        v23 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          break;
        size = v17->fields._size;
        *(_QWORD *)&classId = (unsigned int)list;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v17,
            (int32_t)list,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v17->fields._size = size + 1;
          items->m_Items[size + 1] = (int)list;
        }
      }
      if ( Count == ++v18 )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C13F80(list, *(_QWORD *)&classId);
  }
LABEL_18:
  list = ServantMaster___c_TypeInfo;
  if ( !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    list = ServantMaster___c_TypeInfo;
  }
  v25 = *(System_Comparison_int__o **)(*((_QWORD *)list + 23) + 16LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)list + 56) )
    {
      j_il2cpp_runtime_class_init_0(list);
      list = ServantMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)list + 23);
    v25 = (System_Comparison_int__o *)sub_1C13F70(System_Comparison_int__TypeInfo);
    System_Comparison_int____ctor(v25, v26, Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, 0LL);
    static_fields = ServantMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = v25;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__13_0, (int64_t)v25, v28, v29, v30, v31, v32, v33);
  }
  if ( !v17 )
    goto LABEL_26;
  System_Collections_Generic_List_int___Sort_56695756(
    v17,
    (System_Comparison_T__o *)v25,
    (const MethodInfo_3611BCC *)Method_System_Collections_Generic_List_int__Sort___77417448);
  return System_Collections_Generic_List_int___ToArray(
           v17,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v13; // w21
  int32_t v14; // w22
  System_Collections_ObjectModel_Collection_T__c *klass; // x23
  struct System_Collections_Generic_IList_T__o *items; // x24
  const MethodInfo *v17; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4BB4FA4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__, isVoiceList);
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__, v5);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantChangeMaster___, v6);
    sub_1C13D24(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4BB4FA4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31D2928 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Count__);
  if ( Count >= 1 )
  {
    v13 = Count;
    v14 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v14,
                                                                 (const MethodInfo_31D29B8 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__get_Item__);
      if ( !list )
        break;
      if ( (unsigned int)(HIDWORD(list[3].monitor) - 1) <= 1 )
      {
        items = list->fields.items;
        klass = list[1].klass;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v18.fields.currentCryptoKey = items;
        *(_QWORD *)&v18.fields.fakeValue = klass;
        list = (System_Collections_ObjectModel_Collection_T__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(
                                                                   v18,
                                                                   0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          (int32_t)list,
          1,
          (const MethodInfo_32836CC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( v13 == ++v14 )
        goto LABEL_14;
    }
LABEL_19:
    sub_1C13F80(list, isVoiceList);
  }
LABEL_14:
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !list )
    goto LABEL_19;
  ServantChangeMaster__MargeServantVoiceId((ServantChangeMaster_o *)list, isVoiceList, 0LL);
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !list )
    goto LABEL_19;
  list = (System_Collections_ObjectModel_Collection_T__o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)list,
                                                             (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
  if ( !list )
    goto LABEL_19;
  ServantVoiceRelationMaster__MargeServantVoiceId((ServantVoiceRelationMaster_o *)list, isVoiceList, v17);
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
  System_NotImplementedException_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x21
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  ServantEntity_o *v28; // x22
  __int64 v29; // x8
  __int64 methodPtr_low; // x10
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x21
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x1
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
  if ( (byte_4BB4FA0 & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, e);
    sub_1C13D24(&System_Collections_IEnumerable_TypeInfo, v5);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v6);
    this = (ServantMaster_o *)sub_1C13D24(&ServantEntity_TypeInfo, v7);
    byte_4BB4FA0 = 1;
  }
  if ( !e )
    sub_1C13F80(this, e);
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action != 3 )
    {
      if ( action != 4 )
      {
        v14 = sub_1C13D38(&System_NotImplementedException_TypeInfo);
        v15 = (System_NotImplementedException_o *)sub_1C13F70(v14);
        System_NotImplementedException___ctor(v15, 0LL);
        v16 = sub_1C13D38(&Method_ServantMaster_OnListChangedImplementation__);
        sub_1C13E4C(v15, v16);
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
        p_method = sub_1C65D04(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v18 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
              oldItems,
              *(_QWORD *)(p_method + 8));
      if ( !v18 )
        sub_1C13F80(0LL, v17);
      while ( 1 )
      {
        v19 = *(_QWORD *)v18;
        v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v20;
            v21 += 4;
            if ( !v20 )
              goto LABEL_20;
          }
          v22 = v19 + 16LL * *v21 + 312;
        }
        else
        {
LABEL_20:
          v22 = sub_1C65D04(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
          break;
        v23 = *(_QWORD *)v18;
        v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
        {
          v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
          while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v24;
            v25 += 2;
            if ( !v24 )
              goto LABEL_27;
          }
          v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
        }
        else
        {
LABEL_27:
          v26 = sub_1C65D04(v18, System_Collections_IEnumerator_TypeInfo, 1LL);
        }
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
        v28 = (ServantEntity_o *)v27;
        if ( v27 )
        {
          v29 = *(_QWORD *)v27;
          methodPtr_low = LOBYTE(ServantEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) >= (unsigned int)methodPtr_low
            && *(ServantEntity_c **)(*(_QWORD *)(v29 + 200) + 8 * methodPtr_low - 8) == ServantEntity_TypeInfo )
          {
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
              ServantMaster__RemoveServantCache(v4, v28, v31);
          }
        }
      }
      v32 = sub_1C13E60(v18, System_IDisposable_TypeInfo);
      if ( v32 )
      {
        v33 = *(_QWORD *)v32;
        v34 = v32;
        v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v36 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
          {
            --v35;
            v36 += 4;
            if ( !v35 )
              goto LABEL_39;
          }
          v37 = v33 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_39:
          v37 = sub_1C65D04(v32, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
      }
    }
    newItems = e->fields._newItems;
    if ( newItems )
    {
      v39 = newItems->klass;
      v40 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
      {
        v41 = &v39->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerable_c **)v41 - 1) != System_Collections_IEnumerable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_47;
        }
        v42 = (__int64)&v39->vtable[*v41].method;
      }
      else
      {
LABEL_47:
        v42 = sub_1C65D04(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(newItems, *(_QWORD *)(v42 + 8));
      if ( !v44 )
        sub_1C13F80(0LL, v43);
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
          v48 = sub_1C65D04(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
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
          v52 = sub_1C65D04(v44, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      v58 = sub_1C13E60(v44, System_IDisposable_TypeInfo);
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
          v63 = sub_1C65D04(v58, System_IDisposable_TypeInfo, 0LL);
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
  if ( (byte_4BB4F9F & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Remove__, servantEntity);
    this = (ServantMaster_o *)sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4BB4F9F = 1;
  }
  if ( !servantEntity )
    goto LABEL_16;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = v4->fields.servantEquipIdList;
      v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v12.fields.currentCryptoKey = v8;
      *(_QWORD *)&v12.fields.fakeValue = v7;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v12, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_16;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        (int32_t)this,
        (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = v4->fields.servantCollectionIdList;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v10 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v13.fields.currentCryptoKey = v11;
      *(_QWORD *)&v13.fields.fakeValue = v10;
      this = (ServantMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47490608(v13, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          (int32_t)this,
          (const MethodInfo_36116A4 *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_16:
      sub_1C13F80(this, servantEntity);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v9; // x1
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
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  PartyOrganizationUtility_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4BB4F9C & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__, method);
    sub_1C13D24(&System_IDisposable_TypeInfo, v3);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, v4);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1C13D24(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_1C13D24(&StringLiteral_1/*""*/, v7);
    byte_4BB4F9C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C13F80(0LL, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31D2F00 *)Method_System_Collections_ObjectModel_Collection_ServantEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C13F80(0LL, v9);
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
      p_method = sub_1C65D04(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_ServantEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo )
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
      v18 = sub_1C65D04(Enumerator, System_Collections_Generic_IEnumerator_ServantEntity__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C13F80(0LL, v20);
    v28 = (PartyOrganizationUtility_o *)(v19 + 48);
    v27 = *(_QWORD *)(v19 + 48);
    *(_QWORD *)(v19 + 56) = v27;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v19 + 56), v27, v21, v22, v23, v24, v25, v26);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit((System_String_o *)StringLiteral_1/*""*/, 0LL);
    v28->klass = (PartyOrganizationUtility_c *)v29;
    sub_1C13CC8(v28, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_26;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_26:
    v39 = sub_1C65D04(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB4FA7 & 1) == 0 )
  {
    sub_1C13D24(&ServantMaster___c_TypeInfo, v1);
    byte_4BB4FA7 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantMaster___c_TypeInfo->static_fields->__9 = (struct ServantMaster___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
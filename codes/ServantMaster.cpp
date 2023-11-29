void __fastcall ServantMaster___ctor(ServantMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_int__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FD6D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_40FD6D8 = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantEquipIdList = v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantEquipIdList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.servantCollectionIdList = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantCollectionIdList,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    1,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int___ctor__);
}


void __fastcall ServantMaster__AddServantCache(
        ServantMaster_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v11; // x19
  __int64 v12; // x21
  int32_t v13; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40FD6DB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, servantEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FD6DB = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = this->fields.servantEquipIdList;
      v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v14.fields.currentCryptoKey = v8;
      *(_QWORD *)&v14.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Add(
        servantEquipIdList,
        v9,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = this->fields.servantCollectionIdList;
      v12 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v15.fields.currentCryptoKey = v12;
      *(_QWORD *)&v15.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Add(
          servantCollectionIdList,
          v13,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        return;
      }
LABEL_18:
      sub_B170D4();
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
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  ServantEntity_o *v20; // x0
  const MethodInfo *v21; // x2
  __int64 v22; // x10
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  unsigned __int64 v24; // x10
  int32_t *v25; // x11
  __int64 v26; // x0

  if ( (byte_40FD6DA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v6);
    sub_B16FFC(&ServantEntity_TypeInfo, v7);
    byte_40FD6DA = 1;
  }
  servantEquipIdList = this->fields.servantEquipIdList;
  if ( !servantEquipIdList
    || (System_Collections_Generic_List_int___Clear(
          servantEquipIdList,
          (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__),
        (servantCollectionIdList = this->fields.servantCollectionIdList) == 0LL)
    || (System_Collections_Generic_List_int___Clear(
          servantCollectionIdList,
          (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__),
        (list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_18:
      v19 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v20 = (ServantEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                               Enumerator,
                               *(_QWORD *)(v19 + 8));
    if ( v20 )
    {
      v22 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (ServantEntity_c *)v20->klass->_2.typeHierarchy[v22 - 1] == ServantEntity_TypeInfo )
      {
        ServantMaster__AddServantCache(this, v20, v21);
      }
    }
  }
  v23 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      ++v24;
      v25 += 4;
      if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_28:
    v26 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_int__o *v16; // x21
  int32_t v17; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v20; // x10
  void *monitor; // x23
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  int32_t v23; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_40FD6DF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B16FFC(&ServantEntity_TypeInfo, v9);
    byte_40FD6DF = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v16 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v12,
                                                    v13,
                                                    v14,
                                                    v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
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
      if ( !Item )
        break;
      v20 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (ServantEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( (unsigned int)(HIDWORD(Item[5].klass) - 1) <= 1 )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v25.fields.currentCryptoKey = klass;
        *(_QWORD *)&v25.fields.fakeValue = monitor;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v25, 0LL);
        if ( !v16 )
          break;
        System_Collections_Generic_List_int___Add(
          v16,
          v23,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v17 >= Count )
        goto LABEL_17;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_17:
  if ( !v16 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantMaster__GetCollectionList_31591300(
        ServantMaster_o *this,
        bool isEquip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x0

  if ( (byte_40FD6E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, isEquip);
    byte_40FD6E0 = 1;
  }
  if ( !isEquip )
  {
    servantCollectionIdList = this->fields.servantCollectionIdList;
    if ( servantCollectionIdList )
      return System_Collections_Generic_List_int___ToArray(
               servantCollectionIdList,
               (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_7:
    sub_B170D4();
  }
  servantCollectionIdList = this->fields.servantEquipIdList;
  if ( !servantCollectionIdList )
    goto LABEL_7;
  return System_Collections_Generic_List_int___ToArray(
           servantCollectionIdList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_Dictionary_int__int__o *v15; // x21
  int32_t v16; // w22
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v19; // x23
  __int64 v20; // x10
  void *monitor; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x25
  int32_t v23; // w24
  int32_t v24; // w2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FD6DE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&ServantEntity_TypeInfo, v8);
    byte_40FD6DE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v15 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v11,
                                                               v12,
                                                               v13,
                                                               v14);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v15,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  if ( Count >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v17 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v17,
               v16,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v19 = Item;
      v20 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20
        || (ServantEntity_c *)Item->klass->_2.typeHierarchy[v20 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( !ServantEntity__get_IsEnemy((ServantEntity_o *)Item, 0LL) )
      {
        klass = v19[1].klass;
        monitor = v19[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v26.fields.currentCryptoKey = klass;
        *(_QWORD *)&v26.fields.fakeValue = monitor;
        v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
        if ( ServantEntity__get_IsServant((ServantEntity_o *)v19, 0LL) )
        {
          v24 = (int32_t)v19[5].monitor;
          if ( !v15 )
            break;
        }
        else
        {
          v24 = 0;
          if ( !v15 )
            break;
        }
        System_Collections_Generic_Dictionary_int__int___Add(
          v15,
          v23,
          v24,
          (const MethodInfo_2DDCFB4 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
      }
      if ( ++v16 >= Count )
        return v15;
    }
LABEL_21:
    sub_B170D4();
  }
  return v15;
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_int__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int32_t v28; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x24
  __int64 v32; // x10
  void *monitor; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x25
  int32_t v35; // w0
  ServantMaster___c_c *v36; // x0
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__12_0; // x20
  Il2CppObject *v39; // x21
  struct ServantMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_40FD6E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&classId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v6);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort___66737336, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&ServantEntity_TypeInfo, v14);
    sub_B16FFC(&Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__, v15);
    sub_B16FFC(&ServantMaster___c_TypeInfo, v16);
    byte_40FD6E2 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v29,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v31 = Item;
      v32 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v32
        || (ServantEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsCombineMaterial((ServantEntity_o *)Item, 0LL) && LODWORD(v31[5].klass) == classId )
      {
        klass = v31[1].klass;
        monitor = v31[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = klass;
        *(_QWORD *)&v48.fields.fakeValue = monitor;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL);
        if ( !v23 )
          break;
        System_Collections_Generic_List_int___Add(
          v23,
          v35,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v28 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_18:
  v36 = ServantMaster___c_TypeInfo;
  if ( (BYTE3(ServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    v36 = ServantMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__12_0 = static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = ServantMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__12_0 = (System_Comparison_int__o *)sub_B170CC(System_Comparison_int__TypeInfo, v24, v25, v26, v27);
    System_Comparison_int____ctor(
      _9__12_0,
      v39,
      Method_ServantMaster___c__GetTargetClassMaterialSvtIdList_b__12_0__,
      (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
    v40 = ServantMaster___c_TypeInfo->static_fields;
    v40->__9__12_0 = _9__12_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__12_0,
      (System_Int32_array **)_9__12_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v23 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_49358220(
    v23,
    (System_Comparison_T__o *)_9__12_0,
    (const MethodInfo_2F1258C *)Method_System_Collections_Generic_List_int__Sort___66737336);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  int32_t Count; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_int__o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int32_t v28; // w23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v29; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v31; // x24
  __int64 v32; // x10
  void *monitor; // x24
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x25
  int32_t v35; // w0
  ServantMaster___c_c *v36; // x0
  struct ServantMaster___c_StaticFields *static_fields; // x8
  System_Comparison_int__o *_9__13_0; // x20
  Il2CppObject *v39; // x21
  struct ServantMaster___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16

  if ( (byte_40FD6E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&classId);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_System_Comparison_int___ctor__, v6);
    sub_B16FFC(&System_Comparison_int__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Sort___66737336, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&ServantEntity_TypeInfo, v14);
    sub_B16FFC(&Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__, v15);
    sub_B16FFC(&ServantMaster___c_TypeInfo, v16);
    byte_40FD6E3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_28;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v23 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v19,
                                                    v20,
                                                    v21,
                                                    v22);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( Count >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v29 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v29,
               v28,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v31 = Item;
      v32 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v32
        || (ServantEntity_c *)Item->klass->_2.typeHierarchy[v32 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( ServantEntity__get_IsStatusUp((ServantEntity_o *)Item, 0LL) && LODWORD(v31[5].klass) == classId )
      {
        klass = v31[1].klass;
        monitor = v31[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v48.fields.currentCryptoKey = klass;
        *(_QWORD *)&v48.fields.fakeValue = monitor;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v48, 0LL);
        if ( !v23 )
          break;
        System_Collections_Generic_List_int___Add(
          v23,
          v35,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      if ( ++v28 >= Count )
        goto LABEL_18;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_18:
  v36 = ServantMaster___c_TypeInfo;
  if ( (BYTE3(ServantMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantMaster___c_TypeInfo);
    v36 = ServantMaster___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__13_0 = static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = ServantMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Comparison_int__o *)sub_B170CC(System_Comparison_int__TypeInfo, v24, v25, v26, v27);
    System_Comparison_int____ctor(
      _9__13_0,
      v39,
      Method_ServantMaster___c__GetTargetClassStatusUpSvtIdList_b__13_0__,
      (const MethodInfo_25BE414 *)Method_System_Comparison_int___ctor__);
    v40 = ServantMaster___c_TypeInfo->static_fields;
    v40->__9__13_0 = _9__13_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__13_0,
      (System_Int32_array **)_9__13_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  if ( !v23 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Sort_49358220(
    v23,
    (System_Comparison_T__o *)_9__13_0,
    (const MethodInfo_2F1258C *)Method_System_Collections_Generic_List_int__Sort___66737336);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v16; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  __int64 v18; // x10
  void *monitor; // x23
  System_Net_NetworkInformation_UnicastIPAddressInformation_c *klass; // x24
  int32_t v21; // w0
  WebViewManager_o *Instance; // x0
  ServantChangeMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WebViewManager_o *v24; // x0
  ServantVoiceRelationMaster_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_40FD6E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, isVoiceList);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantChangeMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantVoiceRelationMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&ServantEntity_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FD6E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_22;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    v14 = Count;
    v15 = 0;
    while ( 1 )
    {
      v16 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
      if ( !v16 )
        break;
      Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
               v16,
               v15,
               (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      if ( !Item )
        break;
      v18 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v18
        || (ServantEntity_c *)Item->klass->_2.typeHierarchy[v18 - 1] != ServantEntity_TypeInfo )
      {
        break;
      }
      if ( (unsigned int)(HIDWORD(Item[5].klass) - 1) <= 1 )
      {
        klass = Item[1].klass;
        monitor = Item[1].monitor;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v26.fields.currentCryptoKey = klass;
        *(_QWORD *)&v26.fields.fakeValue = monitor;
        v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v26, 0LL);
        if ( !isVoiceList )
          break;
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          isVoiceList,
          v21,
          1,
          (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      if ( ++v15 >= v14 )
        goto LABEL_17;
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_17:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_WarQuestSelectionMaster = (ServantChangeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantChangeMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_22;
  ServantChangeMaster__MargeServantVoiceId(MasterData_WarQuestSelectionMaster, isVoiceList, 0LL);
  v24 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v24 )
    goto LABEL_22;
  v25 = (ServantVoiceRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v24,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantVoiceRelationMaster___);
  if ( !v25 )
    goto LABEL_22;
  ServantVoiceRelationMaster__MargeServantVoiceId(v25, isVoiceList, 0LL);
}


void __fastcall ServantMaster__OnListChangedImplementation(
        ServantMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_NotImplementedException_o *v19; // x0
  __int64 v20; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  System_Collections_IEnumerator_c **v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  ServantEntity_o *v30; // x22
  __int64 v31; // x8
  __int64 v32; // x10
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x21
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  struct System_Collections_IList_o *newItems; // x20
  System_Collections_IList_c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x20
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  System_Collections_IEnumerator_c **v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  ServantEntity_o *v55; // x21
  __int64 v56; // x8
  __int64 v57; // x10
  const MethodInfo *v58; // x2
  int v59; // w23
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x20
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  int v66[2]; // [xsp+0h] [xbp-40h]
  int v67; // [xsp+8h] [xbp-38h]

  if ( (byte_40FD6DD & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, e);
    sub_B16FFC(&System_Collections_IEnumerable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v6);
    sub_B16FFC(&ServantEntity_TypeInfo, v7);
    byte_40FD6DD = 1;
  }
  v67 = 0;
  if ( !e )
    sub_B170D4();
  action = e->fields._action;
  if ( action >= 3 )
  {
    if ( action == 3 )
      return;
    if ( action != 4 )
    {
      v14 = sub_B17000(&System_NotImplementedException_TypeInfo);
      v19 = (System_NotImplementedException_o *)sub_B170CC(v14, v15, v16, v17, v18);
      System_NotImplementedException___ctor(v19, 0LL);
      sub_B17000(&Method_ServantMaster_OnListChangedImplementation__);
      sub_B170A0();
    }
    goto LABEL_81;
  }
  oldItems = e->fields._oldItems;
  if ( oldItems )
  {
    klass = oldItems->klass;
    if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AAFEF8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
            oldItems,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_B170D4();
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
        v24 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = *(_QWORD *)v20;
      if ( *(_WORD *)(*(_QWORD *)v20 + 298LL) )
      {
        v26 = 0LL;
        v27 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *(v27 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v26;
          v27 += 2;
          if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v20 + 298LL) )
            goto LABEL_28;
        }
        v28 = v25 + 16LL * (*(_DWORD *)v27 + 1) + 312;
      }
      else
      {
LABEL_28:
        v28 = sub_AAFEF8(v20, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
      v30 = (ServantEntity_o *)v29;
      if ( v29 )
      {
        v31 = *(_QWORD *)v29;
        v32 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v29 + 300LL) >= (unsigned int)v32
          && *(ServantEntity_c **)(*(_QWORD *)(v31 + 200) + 8 * v32 - 8) == ServantEntity_TypeInfo )
        {
          if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(v31 + 376))(v29, *(_QWORD *)(v31 + 384)) )
            ServantMaster__RemoveServantCache(this, v30, v33);
        }
      }
    }
    v66[0] = 117;
    v67 = 1;
    v34 = sub_B170BC(v20, System_IDisposable_TypeInfo);
    if ( v34 )
    {
      v35 = *(_QWORD *)v34;
      v36 = v34;
      if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
      {
        v37 = 0LL;
        v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
        {
          ++v37;
          v38 += 4;
          if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
            goto LABEL_40;
        }
        v39 = v35 + 16LL * *v38 + 312;
      }
      else
      {
LABEL_40:
        v39 = sub_AAFEF8(v34, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
    }
    v67 = 0;
  }
  newItems = e->fields._newItems;
  if ( newItems )
  {
    v41 = newItems->klass;
    if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerable_c **)v43 - 1) != System_Collections_IEnumerable_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
          goto LABEL_49;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_49:
      v44 = sub_AAFEF8(newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
    }
    v45 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v44)(newItems, *(_QWORD *)(v44 + 8));
    if ( !v45 )
      sub_B170D4();
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
        v49 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
        break;
      v50 = *(_QWORD *)v45;
      if ( *(_WORD *)(*(_QWORD *)v45 + 298LL) )
      {
        v51 = 0LL;
        v52 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *(v52 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v51;
          v52 += 2;
          if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v45 + 298LL) )
            goto LABEL_63;
        }
        v53 = v50 + 16LL * (*(_DWORD *)v52 + 1) + 312;
      }
      else
      {
LABEL_63:
        v53 = sub_AAFEF8(v45, System_Collections_IEnumerator_TypeInfo, 1LL);
      }
      v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
      v55 = (ServantEntity_o *)v54;
      if ( v54 )
      {
        v56 = *(_QWORD *)v54;
        v57 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
        if ( *(unsigned __int8 *)(*(_QWORD *)v54 + 300LL) >= (unsigned int)v57
          && *(ServantEntity_c **)(*(_QWORD *)(v56 + 200) + 8 * v57 - 8) == ServantEntity_TypeInfo
          && (*(__int64 (__fastcall **)(__int64, _QWORD))(v56 + 376))(v54, *(_QWORD *)(v56 + 384)) )
        {
          ServantMaster__AddServantCache(this, v55, v58);
        }
      }
    }
    v66[0] = 213;
    v59 = ++v67;
    v60 = sub_B170BC(v45, System_IDisposable_TypeInfo);
    if ( v60 )
    {
      v61 = *(_QWORD *)v60;
      v62 = v60;
      if ( *(_WORD *)(*(_QWORD *)v60 + 298LL) )
      {
        v63 = 0LL;
        v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
        {
          ++v63;
          v64 += 4;
          if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v60 + 298LL) )
            goto LABEL_75;
        }
        v65 = v61 + 16LL * *v64 + 312;
      }
      else
      {
LABEL_75:
        v65 = sub_AAFEF8(v60, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
    }
    if ( v59 && v66[v59 - 1] == 213 )
    {
      v67 = v59 - 1;
      return;
    }
LABEL_81:
    ServantMaster__CreateServantCache(this, (const MethodInfo *)e);
  }
}


void __fastcall ServantMaster__RemoveServantCache(
        ServantMaster_o *this,
        ServantEntity_o *servantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *servantEquipIdList; // x21
  __int64 v7; // x22
  __int64 v8; // x23
  int32_t v9; // w0
  System_Collections_Generic_List_int__o *servantCollectionIdList; // x20
  __int64 v11; // x19
  __int64 v12; // x21
  int32_t v13; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_40FD6DC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, servantEntity);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40FD6DC = 1;
  }
  if ( !servantEntity )
    goto LABEL_18;
  if ( servantEntity->fields.collectionNo >= 1 )
  {
    if ( ServantEntity__get_IsServantEquip(servantEntity, 0LL) )
    {
      servantEquipIdList = this->fields.servantEquipIdList;
      v8 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v7 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v14.fields.currentCryptoKey = v8;
      *(_QWORD *)&v14.fields.fakeValue = v7;
      v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v14, 0LL);
      if ( !servantEquipIdList )
        goto LABEL_18;
      System_Collections_Generic_List_int___Remove(
        servantEquipIdList,
        v9,
        (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
    }
    if ( ServantEntity__get_IsServantCollection(servantEntity, 0LL) )
    {
      servantCollectionIdList = this->fields.servantCollectionIdList;
      v12 = *(_QWORD *)&servantEntity->fields.id.fields.currentCryptoKey;
      v11 = *(_QWORD *)&servantEntity->fields.id.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v15.fields.currentCryptoKey = v12;
      *(_QWORD *)&v15.fields.fakeValue = v11;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v15, 0LL);
      if ( servantCollectionIdList )
      {
        System_Collections_Generic_List_int___Remove(
          servantCollectionIdList,
          v13,
          (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
        return;
      }
LABEL_18:
      sub_B170D4();
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  unsigned __int64 v16; // x10
  int32_t *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x9
  System_Int32_array **v27; // x1
  BattleServantConfConponent_o *v28; // x20
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  unsigned __int64 v37; // x10
  int32_t *v38; // x11
  __int64 v39; // x0

  if ( (byte_40FD6D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&System_IDisposable_TypeInfo, v3);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v4);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, v6);
    sub_B16FFC(&ServantEntity_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1, v8);
    byte_40FD6D9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      goto LABEL_33;
    v26 = *(&ServantEntity_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 300LL) < (unsigned int)v26
      || *(ServantEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * v26 - 8) != ServantEntity_TypeInfo )
    {
      sub_B173C8(v19);
LABEL_33:
      sub_B170D4();
    }
    v28 = (BattleServantConfConponent_o *)(v19 + 48);
    v27 = *(System_Int32_array ***)(v19 + 48);
    *(_QWORD *)(v19 + 56) = v27;
    sub_B16F98((BattleServantConfConponent_o *)(v19 + 56), v27, v20, v21, v22, v23, v24, v25);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    }
    v29 = (System_Int32_array **)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit(
                                   (System_String_o *)StringLiteral_1,
                                   0LL);
    v28->klass = (BattleServantConfConponent_c *)v29;
    sub_B16F98(v28, v29, v30, v31, v32, v33, v34, v35);
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
        goto LABEL_29;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_29:
    v39 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return 1;
}


void __fastcall ServantMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7637 & 1) == 0 )
  {
    sub_B16FFC(&ServantMaster___c_TypeInfo, v1);
    byte_40F7637 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ServantMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
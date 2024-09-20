void __fastcall ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B7D8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
    byte_4A5B7D8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    314,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *__fastcall ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B7D6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
    byte_4A5B7D6 = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_311DC8C *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  DataManager_o *v7; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  const MethodInfo *v12; // x2
  Il2CppObject *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4A5B7DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5B7DB = 1;
  }
  entitya = 0LL;
  if ( entity )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1BDA48C(v5);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BDA48C(v6);
    v7 = **(DataManager_o ***)(v6 + 184);
    if ( !v7 )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          v7,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v15, 0LL);
    if ( !v11 )
      goto LABEL_16;
    v7 = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                            v11,
                            &entitya,
                            (int32_t)v7,
                            (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( entitya )
        return ServantCollectionMaster__GetOverrideDisplayType_39615872(this, (int32_t)entitya[13].klass, v12);
LABEL_16:
      sub_1B8880C(v7, entity);
    }
  }
  return -1;
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType_39615872(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  ServantCollectionEntity_array *SortedEntities; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x8
  ServantCollectionEntity_array *v6; // x19
  __int64 v7; // x21
  ServantCollectionEntity_o *v8; // x20

  SortedEntities = ServantCollectionMaster__GetSortedEntities(this, collectionNo, method);
  if ( !SortedEntities )
LABEL_13:
    sub_1B8880C(SortedEntities, v4);
  v5 = *(_QWORD *)&SortedEntities->max_length;
  v6 = SortedEntities;
  SortedEntities = (ServantCollectionEntity_array *)0xFFFFFFFFLL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= (unsigned int)v5 )
        sub_1B88814(SortedEntities, v4);
      v8 = v6->m_Items[v7];
      if ( !v8 )
        goto LABEL_13;
      SortedEntities = (ServantCollectionEntity_array *)ServantCollectionEntity__IsOpenCondition(v6->m_Items[v7], v4);
      if ( ((unsigned __int8)SortedEntities & 1) != 0 )
        break;
      LODWORD(v5) = v6->max_length;
      if ( (int)++v7 >= (int)v5 )
      {
        LODWORD(SortedEntities) = -1;
        return (int)SortedEntities;
      }
    }
    LODWORD(SortedEntities) = v8->fields.type;
  }
  return (int)SortedEntities;
}


ServantCollectionEntity_array *__fastcall ServantCollectionMaster__GetSortedEntities(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  ServantCollectionEntity_c *v22; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  ServantCollectionMaster___c_c *v32; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v34; // x21
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3

  if ( (byte_4A5B7DC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Comparison_ServantCollectionEntity__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
    sub_1B885B0(&ServantCollectionEntity_TypeInfo);
    sub_1B885B0(&Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__);
    sub_1B885B0(&ServantCollectionMaster___c_TypeInfo);
    byte_4A5B7DC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_46;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
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
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v21 = v18;
    if ( v18 )
    {
      v22 = ServantCollectionEntity_TypeInfo;
      methodPtr_low = LOBYTE(ServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) < (unsigned int)methodPtr_low
        || *(ServantCollectionEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) != ServantCollectionEntity_TypeInfo )
      {
        sub_1B88ACC(v18);
LABEL_44:
        sub_1B8880C(v18, v22);
      }
      if ( *(_DWORD *)(v18 + 16) == collectionNo )
      {
        if ( !v5 )
          goto LABEL_44;
        items = v5->fields._items;
        v25 = Method_System_Collections_Generic_List_ServantCollectionEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1B8880C(v18, v22);
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)v18,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v21;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), v21, v19, v20);
        }
      }
    }
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
        goto LABEL_31;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_31:
    v31 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
                                                             Enumerator,
                                                             *(_QWORD *)(v31 + 8));
  if ( !v5 )
LABEL_46:
    sub_1B8880C(list, v6);
  if ( v5->fields._size >= 1 )
  {
    v32 = ServantCollectionMaster___c_TypeInfo;
    if ( !ServantCollectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo);
      v32 = ServantCollectionMaster___c_TypeInfo;
    }
    _9__7_0 = (System_Comparison_T__o *)v32->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = ServantCollectionMaster___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__7_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__7_0,
        v34,
        Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__,
        0LL);
      static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__7_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v36, v37);
    }
    System_Collections_Generic_List_object___Sort_55571192(
      v5,
      _9__7_0,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v5,
                                            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
}


bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  DataManager_o *v7; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v9; // x21
  __int64 v10; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x20
  const MethodInfo *v12; // x2
  Il2CppObject *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_4A5B7D9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5B7D9 = 1;
  }
  entitya = 0LL;
  if ( !entity )
    return 0;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  v7 = **(DataManager_o ***)(v6 + 184);
  if ( !v7 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v7,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v16.fields.currentCryptoKey = v10;
  *(_QWORD *)&v16.fields.fakeValue = v9;
  v7 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v16, 0LL);
  if ( !v11 )
LABEL_17:
    sub_1B8880C(v7, entity);
  v7 = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                          v11,
                          &entitya,
                          (int32_t)v7,
                          (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)v7 & 1) == 0 )
    return 0;
  if ( !entitya )
    goto LABEL_17;
  return ServantCollectionMaster__IsNeedOverrideDisplayType_39614808(this, (int32_t)entitya[13].klass, v12);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType_39614808(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v12; // w21
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantCollectionEntity_o *v17; // x0
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4A5B7DA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&ServantCollectionEntity_TypeInfo);
    byte_4A5B7DA = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_33:
    sub_1B8880C(list, *(_QWORD *)&collectionNo);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v12 & 1) == 0 )
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
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v17 = (ServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                         Enumerator,
                                         *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      methodPtr_low = LOBYTE(ServantCollectionEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v17->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
        || (ServantCollectionEntity_c *)v17->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantCollectionEntity_TypeInfo )
      {
        sub_1B88ACC(v17);
        goto LABEL_33;
      }
      if ( v17->fields.collectionNo == collectionNo
        && ServantCollectionEntity__IsOpenCondition(v17, (const MethodInfo *)ServantCollectionEntity_TypeInfo) )
      {
        goto LABEL_25;
      }
    }
  }
  v12 = 0;
LABEL_25:
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_29;
    }
    v22 = (__int64)&v19->vtable[*v21].method;
  }
  else
  {
LABEL_29:
    v22 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v12 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__TryGetEntity(
        ServantCollectionMaster_o *this,
        ServantCollectionEntity_o **entity,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5B7D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
    byte_4A5B7D7 = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5B7DD & 1) == 0 )
  {
    sub_1B885B0(&ServantCollectionMaster___c_TypeInfo);
    byte_4A5B7DD = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantCollectionMaster___c_TypeInfo->static_fields->__9 = (struct ServantCollectionMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantCollectionMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall ServantCollectionMaster___c___ctor(ServantCollectionMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantCollectionMaster___c___GetSortedEntities_b__7_0(
        ServantCollectionMaster___c_o *this,
        ServantCollectionEntity_o *a,
        ServantCollectionEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}
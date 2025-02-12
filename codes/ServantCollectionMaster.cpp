void __fastcall ServantCollectionMaster___ctor(ServantCollectionMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8175 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__, method);
    byte_4BC8175 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    318,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_o *__fastcall ServantCollectionMaster__GetEntity(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC8173 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__,
      *(_QWORD *)&collectionNo);
    byte_4BC8173 = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&priority);
  return (ServantCollectionEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_324D130 *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__GetEntity__);
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  DataManager_o *v11; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  const MethodInfo *v16; // x2
  Il2CppObject *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4BC8178 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, entity);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_4BC8178 = 1;
  }
  entitya = 0LL;
  if ( entity )
  {
    v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C6CAB0(v3);
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C6CAB0(v3);
    v11 = **(DataManager_o ***)(v10 + 184);
    if ( !v11 )
      goto LABEL_16;
    MasterData_object = DataManager__GetMasterData_object_(
                          v11,
                          (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
    v14 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v19.fields.currentCryptoKey = v14;
    *(_QWORD *)&v19.fields.fakeValue = v13;
    v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v19, 0LL);
    if ( !v15 )
      goto LABEL_16;
    v11 = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                             v15,
                             &entitya,
                             (int32_t)v11,
                             (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)v11 & 1) != 0 )
    {
      if ( entitya )
        return ServantCollectionMaster__GetOverrideDisplayType_40835316(this, (int32_t)entitya[13].klass, v16);
LABEL_16:
      sub_1C1AE30(v11, entity);
    }
  }
  return -1;
}


int32_t __fastcall ServantCollectionMaster__GetOverrideDisplayType_40835316(
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
    sub_1C1AE30(SortedEntities, v4);
  v5 = *(_QWORD *)&SortedEntities->max_length;
  v6 = SortedEntities;
  SortedEntities = (ServantCollectionEntity_array *)0xFFFFFFFFLL;
  if ( v5 && (int)v5 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= (unsigned int)v5 )
        sub_1C1AE38(SortedEntities, v4);
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


// local variable allocation has failed, the output may be wrong!
ServantCollectionEntity_array *__fastcall ServantCollectionMaster__GetSortedEntities(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
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
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x0
  ServantCollectionMaster___c_c *v46; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v48; // x21
  struct ServantCollectionMaster___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7

  if ( (byte_4BC8179 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__,
      *(_QWORD *)&collectionNo);
    sub_1C1ABD4(&System_Comparison_ServantCollectionEntity__TypeInfo, v5);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCollectionEntity__Add__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__, v11);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__, v12);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_ServantCollectionEntity__get_Count__, v13);
    sub_1C1ABD4(&System_Collections_Generic_List_ServantCollectionEntity__TypeInfo, v14);
    sub_1C1ABD4(&Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__, v15);
    sub_1C1ABD4(&ServantCollectionMaster___c_TypeInfo, v16);
    byte_4BC8179 = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_ServantCollectionEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_ServantCollectionEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_43;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        p_offset += 4;
        if ( !v23 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v26 = Enumerator->klass;
    v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantCollectionEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      v29 = (__int64)&v26->vtable[*v28].method;
    }
    else
    {
LABEL_16:
      v29 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
            Enumerator,
            *(_QWORD *)(v29 + 8));
    v37 = v30;
    if ( v30 && *(_DWORD *)(v30 + 16) == collectionNo )
    {
      if ( !v17 )
        sub_1C1AE30(v30, v30);
      items = v17->fields._items;
      v39 = Method_System_Collections_Generic_List_ServantCollectionEntity__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1C1AE30(v30, v30);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v30,
          *(const MethodInfo_363C890 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v37;
        sub_1C1AB78((PartyOrganizationUtility_o *)(v41 + 4), v37, v31, v32, v33, v34, v35, v36);
      }
    }
  }
  v42 = Enumerator->klass;
  v43 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v44 = &v42->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_29;
    }
    v45 = (__int64)&v42->vtable[*v44].method;
  }
  else
  {
LABEL_29:
    v45 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
                                                             Enumerator,
                                                             *(_QWORD *)(v45 + 8));
  if ( !v17 )
LABEL_43:
    sub_1C1AE30(list, v18);
  if ( v17->fields._size >= 1 )
  {
    v46 = ServantCollectionMaster___c_TypeInfo;
    if ( !ServantCollectionMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCollectionMaster___c_TypeInfo);
      v46 = ServantCollectionMaster___c_TypeInfo;
    }
    _9__7_0 = (System_Comparison_T__o *)v46->static_fields->__9__7_0;
    if ( !_9__7_0 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = ServantCollectionMaster___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v46->static_fields->__9;
      _9__7_0 = (System_Comparison_T__o *)sub_1C1AE20(System_Comparison_ServantCollectionEntity__TypeInfo);
      System_Comparison_object____ctor(
        _9__7_0,
        v48,
        Method_ServantCollectionMaster___c__GetSortedEntities_b__7_0__,
        0LL);
      static_fields = ServantCollectionMaster___c_TypeInfo->static_fields;
      static_fields->__9__7_0 = (struct System_Comparison_ServantCollectionEntity__o *)_9__7_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
        (int64_t)_9__7_0,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    System_Collections_Generic_List_object___Sort_56877908(
      v17,
      _9__7_0,
      (const MethodInfo_363E354 *)Method_System_Collections_Generic_List_ServantCollectionEntity__Sort__);
  }
  return (ServantCollectionEntity_array *)System_Collections_Generic_List_object___ToArray(
                                            v17,
                                            (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_ServantCollectionEntity__ToArray__);
}


bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType(
        ServantCollectionMaster_o *this,
        UserServantCollectionEntity_o *entity,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  DataManager_o *v11; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v13; // x21
  __int64 v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  const MethodInfo *v16; // x2
  Il2CppObject *entitya; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4BC8176 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantMaster___, entity);
    sub_1C1ABD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    byte_4BC8176 = 1;
  }
  entitya = 0LL;
  if ( !entity )
    return 0;
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C6CAB0(v3);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C6CAB0(v3);
  v11 = **(DataManager_o ***)(v10 + 184);
  if ( !v11 )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        v11,
                        (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantMaster___);
  v14 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v20.fields.currentCryptoKey = v14;
  *(_QWORD *)&v20.fields.fakeValue = v13;
  v11 = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v20, 0LL);
  if ( !v15 )
LABEL_17:
    sub_1C1AE30(v11, entity);
  v11 = (DataManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                           v15,
                           &entitya,
                           (int32_t)v11,
                           (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)v11 & 1) == 0 )
    return 0;
  if ( !entitya )
    goto LABEL_17;
  return ServantCollectionMaster__IsNeedOverrideDisplayType_40834324(this, (int32_t)entitya[13].klass, v16);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ServantCollectionMaster__IsNeedOverrideDisplayType_40834324(
        ServantCollectionMaster_o *this,
        int32_t collectionNo,
        const MethodInfo *method)
{
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
  char v15; // w21
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  ServantCollectionEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4BC8177 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__,
      *(_QWORD *)&collectionNo);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v5);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo, v6);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v7);
    byte_4BC8177 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, *(_QWORD *)&collectionNo);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_ServantCollectionEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v9);
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
      p_method = sub_1C6CBB4(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v15 & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantCollectionEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_ServantCollectionEntity__TypeInfo, 0LL);
    }
    v20 = (ServantCollectionEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                         Enumerator,
                                         *(_QWORD *)(v19 + 8));
    if ( v20 && v20->fields.collectionNo == collectionNo && ServantCollectionEntity__IsOpenCondition(v20, v21) )
      goto LABEL_23;
  }
  v15 = 0;
LABEL_23:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_27;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_27:
    v25 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v15 & 1;
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

  if ( (byte_4BC8174 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__, entity);
    byte_4BC8174 = 1;
  }
  PK = (Il2CppObject *)ServantCollectionEntity__CreatePK(collectionNo, priority, *(const MethodInfo **)&collectionNo);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_ServantCollectionMaster__ServantCollectionEntity__string__TryGetEntity__);
}


void __fastcall ServantCollectionMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC817A & 1) == 0 )
  {
    sub_1C1ABD4(&ServantCollectionMaster___c_TypeInfo, v1);
    byte_4BC817A = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(ServantCollectionMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantCollectionMaster___c_TypeInfo->static_fields->__9 = (struct ServantCollectionMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)ServantCollectionMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C1AE30(this, a);
  return b->fields.priority - a->fields.priority;
}
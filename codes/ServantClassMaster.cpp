void __fastcall ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BC8167 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__, v3);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo, v4);
    byte_4BC8167 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
  System_Collections_Generic_Dictionary_ValueTuple_int__bool___object____ctor(
    v5,
    (const MethodInfo_3262B2C *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
  this->fields.cachedIndividualityWithRelatedDict = (struct System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____o *)v5;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.cachedIndividualityWithRelatedDict,
    (int64_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    9,
    (const MethodInfo_3246354 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall ServantClassMaster__GetIndividualityWithRelated(
        ServantClassMaster_o *this,
        int32_t classId,
        bool isServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *cachedIndividualityWithRelatedDict; // x0
  const MethodInfo *v11; // x2
  System_Int32_array *v12; // x19
  System_ValueTuple_int__bool__o v13; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v14; // x20
  System_Int32_array *v16; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_int__bool__o key; // [xsp+8h] [xbp-38h] BYREF
  System_ValueTuple_int__bool__o p_key; // 0:x0.8
  System_ValueTuple_int__bool__o v19; // 0:x1.8
  System_ValueTuple_int__bool__o v20; // 0:x1.8
  System_ValueTuple_int__bool__o v21; // 0:x1.8

  if ( (byte_4BC816E & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__,
      *(_QWORD *)&classId);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__, v7);
    sub_1C1ABD4(&Method_System_ValueTuple_int__bool___ctor__, v8);
    byte_4BC816E = 1;
  }
  p_key = (System_ValueTuple_int__bool__o)&key;
  v16 = 0LL;
  key = 0LL;
  System_ValueTuple_int__bool____ctor(
    p_key,
    classId,
    isServant,
    (const MethodInfo_398C720 *)Method_System_ValueTuple_int__bool___ctor__);
  cachedIndividualityWithRelatedDict = (Il2CppObject *)this->fields.cachedIndividualityWithRelatedDict;
  if ( !cachedIndividualityWithRelatedDict )
    goto LABEL_9;
  v19 = key;
  if ( !System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)cachedIndividualityWithRelatedDict,
          v19,
          (Il2CppObject **)&v16,
          (const MethodInfo_3264C74 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__) )
  {
    v13 = key;
    v14 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.cachedIndividualityWithRelatedDict;
    v20 = key;
    cachedIndividualityWithRelatedDict = (Il2CppObject *)ServantClassMaster__GetIndividualityWithRelated_40832904(
                                                           this,
                                                           v20,
                                                           v11);
    if ( v14 )
    {
      v12 = (System_Int32_array *)cachedIndividualityWithRelatedDict;
      v21 = v13;
      System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___set_Item(
        v14,
        v21,
        cachedIndividualityWithRelatedDict,
        (const MethodInfo_32634E8 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
      return v12;
    }
LABEL_9:
    sub_1C1AE30(cachedIndividualityWithRelatedDict, v9);
  }
  return v16;
}


System_Int32_array *__fastcall ServantClassMaster__GetIndividualityWithRelated_40832904(
        ServantClassMaster_o *this,
        System_ValueTuple_int__bool__o tupleKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  Il2CppObject *Entity; // x0
  __int64 klass_low; // x1
  long double inited; // q0
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  Il2CppObject *v17; // x21
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x0

  if ( (byte_4BC816F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Array_Empty_int___, tupleKey);
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4BC816F = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             tupleKey.fields.Item1,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( v11 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1C1AE30(Entity, klass_low);
  }
  if ( !v11 )
    goto LABEL_10;
  klass_low = LODWORD(Entity[2].klass);
  items = v11->fields._items;
  v16 = Method_System_Collections_Generic_List_int__Add__;
  v17 = Entity;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v11,
      klass_low,
      *(const MethodInfo_361F86C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v11->fields._size = size + 1;
    items->m_Items[size + 1] = klass_low;
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v11,
               (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  monitor = (System_Collections_Generic_IEnumerable_T__o *)v17[4].monitor;
  if ( !monitor )
  {
    v20 = Method_System_Array_Empty_int___;
    v21 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v21 )
    {
      sub_1C6CB0C(Method_System_Array_Empty_int___);
      v21 = v20[7];
    }
    v22 = *(_QWORD *)(v21 + 16);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C6CAB0(inited);
    if ( !*(_DWORD *)(v22 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v22);
    v23 = *(_QWORD *)(v20[7] + 16LL);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C6CAB0(inited);
    monitor = **(System_Collections_Generic_IEnumerable_T__o ***)(v23 + 184);
  }
  System_Collections_Generic_List_int___AddRange(
    v11,
    monitor,
    (const MethodInfo_361FA78 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}


bool __fastcall ServantClassMaster__TryGetEntityByIndividuality(
        ServantClassMaster_o *this,
        ServantClassEntity_o **entity,
        int32_t individuality,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  ServantClassEntity_o *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  bool v29; // w22
  int v30; // w24
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7

  if ( (byte_4BC816D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__, entity);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BC816D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, entity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v11);
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
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*v19].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0LL);
    }
    v21 = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                    Enumerator,
                                    *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_1C1AE30(0LL, v22);
    if ( v21->fields.individuality == individuality )
    {
      *entity = v21;
      sub_1C1AB78((PartyOrganizationUtility_o *)entity, (int64_t)v21, v23, v24, v25, v26, v27, v28);
      v29 = 1;
      v30 = 4;
      goto LABEL_22;
    }
  }
  v29 = 0;
  v30 = 5;
LABEL_22:
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
        goto LABEL_26;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_26:
    v34 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  if ( v30 == 5 )
  {
    *entity = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)entity, 0LL, v35, v36, v37, v38, v39, v40);
    return 0;
  }
  return v29;
}


float __fastcall ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BC8168 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4BC8168 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_3248678 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C1AE30(Instance, v6);
  }
  return (float)SHIDWORD(Instance[2].klass) / 1000.0;
}


System_Collections_Generic_List_int__o *__fastcall ServantClassMaster__getExtraClassIdList(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x20
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4BC816C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__, method);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v3);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, v4);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1C1ABD4(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_4BC816C = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C1AE20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_361F018 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
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
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1C1AE30(0LL, v23);
    if ( *(_DWORD *)(v22 + 64) == 8 )
    {
      if ( !v9 )
        sub_1C1AE30(v22, v23);
      v24 = *(unsigned int *)(v22 + 16);
      items = v9->fields._items;
      v26 = Method_System_Collections_Generic_List_int__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C1AE30(v22, v24);
      size = v9->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v9,
          v24,
          *(const MethodInfo_361F86C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v9->fields._size = size + 1;
        items->m_Items[size + 1] = v24;
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
        goto LABEL_29;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_29:
    v31 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantClassMaster__getRelationId(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4BC8169 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, *(_QWORD *)&classId);
    byte_4BC8169 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             classId,
             (const MethodInfo_3248678 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C1AE30(0LL, v6);
  return HIDWORD(Entity[3].monitor);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantClassMaster__getSupportGroupType(
        ServantClassMaster_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BC816B & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, *(_QWORD *)&classId);
    byte_4BC816B = 1;
  }
  entity = 0LL;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         classId,
         (const MethodInfo_32486C4 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_1C1AE30(v5, v6);
  return (int32_t)entity[4].klass;
}


bool __fastcall ServantClassMaster__preProcess(ServantClassMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_int__int__o *v10; // x20
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  AtlasManager_c *v36; // x0
  struct AtlasManager_StaticFields *static_fields; // x0

  if ( (byte_4BC816A & 1) == 0 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__, v5);
    sub_1C1ABD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v6);
    sub_1C1ABD4(&System_IDisposable_TypeInfo, v7);
    sub_1C1ABD4(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, v8);
    sub_1C1ABD4(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4BC816A = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C1AE20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v10,
    (const MethodInfo_3298E68 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31E2F54 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C1AE30(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
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
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C6CBB4(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !v23 )
      sub_1C1AE30(0LL, v24);
    if ( !v10 )
      sub_1C1AE30(v23, v24);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v10,
      *(_DWORD *)(v23 + 16),
      *(_DWORD *)(v23 + 48),
      (const MethodInfo_3299818 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_25;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_25:
    v28 = sub_1C6CBB4(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !byte_4BC8230 )
  {
    sub_1C1ABD4(&AtlasManager_TypeInfo, v29);
    byte_4BC8230 = 1;
  }
  v36 = AtlasManager_TypeInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v36 = AtlasManager_TypeInfo;
  }
  static_fields = v36->static_fields;
  static_fields->classFrameIdList = v10;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&static_fields->classFrameIdList,
    (int64_t)v10,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  return 1;
}
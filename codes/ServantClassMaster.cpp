void ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C43828 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
    byte_4C43828 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
  System_Collections_Generic_Dictionary_ValueTuple_int__bool___object____ctor(
    v3,
    (const MethodInfo_33BAD8C *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
  this->fields.cachedIndividualityWithRelatedDict = (struct System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cachedIndividualityWithRelatedDict, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    9,
    (const MethodInfo_339ED7C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
}


System_Int32_array *ServantClassMaster__GetIndividualityWithRelated(
        ServantClassMaster_o *this,
        int32_t classId,
        bool isServant,
        const MethodInfo *method)
{
  System_ValueTuple_int__bool__o p_key; // x0
  Il2CppObject *cachedIndividualityWithRelatedDict; // x0
  System_ValueTuple_int__bool__o v9; // x1
  const MethodInfo *v10; // x2
  System_Int32_array *v11; // x19
  System_ValueTuple_int__bool__o v12; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x20
  System_ValueTuple_int__bool__o v14; // x1
  System_ValueTuple_int__bool__o v15; // x1
  System_Int32_array *v17; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_int__bool__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C43823 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
    sub_1C37058(&Method_System_ValueTuple_int__bool___ctor__);
    byte_4C43823 = 1;
  }
  p_key = (System_ValueTuple_int__bool__o)&key;
  v17 = 0;
  key = 0;
  System_ValueTuple_int__bool____ctor(
    p_key,
    classId,
    isServant,
    (const MethodInfo_3AFBD88 *)Method_System_ValueTuple_int__bool___ctor__);
  cachedIndividualityWithRelatedDict = (Il2CppObject *)this->fields.cachedIndividualityWithRelatedDict;
  if ( !cachedIndividualityWithRelatedDict )
    goto LABEL_9;
  v9 = key;
  if ( !System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)cachedIndividualityWithRelatedDict,
          v9,
          (Il2CppObject **)&v17,
          (const MethodInfo_33BCED4 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__) )
  {
    v12 = key;
    v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.cachedIndividualityWithRelatedDict;
    v14 = key;
    cachedIndividualityWithRelatedDict = (Il2CppObject *)ServantClassMaster__GetIndividualityWithRelated_42623444(
                                                           this,
                                                           v14,
                                                           v10);
    if ( v13 )
    {
      v11 = (System_Int32_array *)cachedIndividualityWithRelatedDict;
      v15 = v12;
      System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___set_Item(
        v13,
        v15,
        cachedIndividualityWithRelatedDict,
        (const MethodInfo_33BB748 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
      return v11;
    }
LABEL_9:
    sub_1C372B4(cachedIndividualityWithRelatedDict);
  }
  return v17;
}


System_Int32_array *ServantClassMaster__GetIndividualityWithRelated_42623444(
        ServantClassMaster_o *this,
        System_ValueTuple_int__bool__o tupleKey,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  Il2CppObject *Entity; // x0
  long double inited; // q0
  int32_t klass; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  Il2CppObject *v11; // x21
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4C43824 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C43824 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             tupleKey.fields.Item1,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( v5 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1C372B4(Entity);
  }
  if ( !v5 )
    goto LABEL_10;
  klass = (int32_t)Entity[2].klass;
  items = v5->fields._items;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  v11 = Entity;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      klass,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v5->fields._size = size + 1;
    items->m_Items[size] = klass;
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  monitor = (System_Collections_Generic_IEnumerable_T__o *)v11[4].monitor;
  if ( !monitor )
  {
    v14 = Method_System_Array_Empty_int___;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_1C877C8(Method_System_Array_Empty_int___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C8776C(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C8776C(inited);
    monitor = **(System_Collections_Generic_IEnumerable_T__o ***)(v17 + 184);
  }
  System_Collections_Generic_List_int___AddRange(
    v5,
    monitor,
    (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t ServantClassMaster__GetPlayableGrandBeastBaseClassId(ServantClassMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  GrandGraphDetailMaster_o *v3; // x19

  if ( (byte_4C43827 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C43827 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  v3 = (GrandGraphDetailMaster_o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v3 )
    sub_1C372B4(Master_object);
  return GrandGraphDetailMaster__GetGrandClassId(v3, BalanceConfig_TypeInfo->static_fields->PlayableBeastBaseClassId, 0);
}


System_Int32_array *ServantClassMaster__GetPlayableGrandBeastClassIds(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x19
  ServantClassMaster___c_c *v4; // x0
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v6; // x21
  struct ServantClassMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  ServantClassMaster___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__int__o *_9__10_1; // x20
  Il2CppObject *v14; // x21
  struct ServantClassMaster___c_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_4C43826 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__getEntityList__);
    sub_1C37058(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
    sub_1C37058(&System_Func_GrandGraphDetailEntity__int__TypeInfo);
    sub_1C37058(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C37058(&Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_0__);
    sub_1C37058(&Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_1__);
    sub_1C37058(&ServantClassMaster___c_TypeInfo);
    byte_4C43826 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  v4 = ServantClassMaster___c_TypeInfo;
  if ( !ServantClassMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantClassMaster___c_TypeInfo);
    v4 = ServantClassMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v4->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = ServantClassMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__10_0,
      v6,
      Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_0__,
      0);
    static_fields = ServantClassMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_GrandGraphDetailEntity__bool__o *)_9__10_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          monitor,
          (System_Func_TSource__bool__o *)_9__10_0,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
  v11 = ServantClassMaster___c_TypeInfo;
  v12 = v10;
  if ( !ServantClassMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantClassMaster___c_TypeInfo);
    v11 = ServantClassMaster___c_TypeInfo;
  }
  _9__10_1 = (System_Func_object__int__o *)v11->static_fields->__9__10_1;
  if ( !_9__10_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantClassMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__10_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__10_1,
      v14,
      Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_1__,
      0);
    v15 = ServantClassMaster___c_TypeInfo->static_fields;
    v15->__9__10_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__10_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v15->__9__10_1, (int32_t)_9__10_1, v16, v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__10_1,
                                                               (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  v19 = System_Linq_Enumerable__Distinct_int_(
          v18,
          (const MethodInfo_310AE44 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t ServantClassMaster__GetSupportGroupByGrandGraphId(
        ServantClassMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  Il2CppObject *v7; // [xsp+8h] [xbp-38h] BYREF
  GrandGraphDetailEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C43825 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_4C43825 = 1;
  }
  entity = 0;
  v7 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    goto LABEL_13;
  Master_object = (Il2CppObject *)GrandGraphDetailMaster__TryGetEntityByGrandGraphId(
                                    (GrandGraphDetailMaster_o *)Master_object,
                                    &entity,
                                    grandGraphId,
                                    0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_13;
    Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                      &v7,
                                      entity->fields.grandClassId,
                                      (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v7 )
        return (int32_t)v7[4].klass;
LABEL_13:
      sub_1C372B4(Master_object);
    }
  }
  return 0;
}


bool ServantClassMaster__TryGetEntityByIndividuality(
        ServantClassMaster_o *this,
        ServantClassEntity_o **entity,
        int32_t individuality,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  ServantClassEntity_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool v20; // w22
  int v21; // w24
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C43822 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C43822 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15];
    }
    else
    {
LABEL_16:
      v16 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v17 = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
                                    Enumerator,
                                    *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_1C372B4(0);
    if ( v17->fields.individuality == individuality )
    {
      *entity = v17;
      sub_1C36FFC((CGThumbnailListItem_o *)entity, (int32_t)v17, v18, v19);
      v20 = 1;
      v21 = 4;
      goto LABEL_22;
    }
  }
  v20 = 0;
  v21 = 5;
LABEL_22:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_26;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_26:
    v25 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  if ( v21 == 5 )
  {
    *entity = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)entity, 0, v26, v27);
    return 0;
  }
  return v20;
}


float ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C4381D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4381D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  return (float)SHIDWORD(Instance[2].klass) / 1000.0;
}


System_Collections_Generic_List_int__o *ServantClassMaster__getExtraClassIdList(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t v15; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0

  if ( (byte_4C43821 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C43821 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C372B4(0);
    if ( *(_DWORD *)(v14 + 64) == 8 )
    {
      if ( !v3 )
        sub_1C372B4(v14);
      v15 = *(_DWORD *)(v14 + 16);
      items = v3->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C372B4(v14);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v15,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v15;
      }
    }
  }
  v19 = Enumerator->klass;
  v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v21 = &v19->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v21 - 1) != System_IDisposable_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_29;
    }
    v22 = (__int64)&v19->vtable[*v21];
  }
  else
  {
LABEL_29:
    v22 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(Enumerator, *(_QWORD *)(v22 + 8));
  return v3;
}


int32_t ServantClassMaster__getRelationId(ServantClassMaster_o *this, int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0

  if ( (byte_4C4381E & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_4C4381E = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             classId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C372B4(0);
  return HIDWORD(Entity[3].monitor);
}


int32_t ServantClassMaster__getSupportGroupType(ServantClassMaster_o *this, int32_t classId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C43820 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_4C43820 = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         classId,
         (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_1C372B4(v5);
  return *(int *)((char *)&dword_40 + (_QWORD)entity);
}


bool ServantClassMaster__preProcess(ServantClassMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  AtlasManager_c *v21; // x0
  struct AtlasManager_StaticFields *static_fields; // x0

  if ( (byte_4C4381F & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C4381F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_33F1108 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_333AAE8 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C87870(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( !v14 )
      sub_1C372B4(0);
    if ( !v3 )
      sub_1C372B4(v14);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v3,
      *(_DWORD *)(v14 + 16),
      *(_DWORD *)(v14 + 48),
      (const MethodInfo_33F1AB8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v15 = Enumerator->klass;
  v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v17 = &v15->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v17 - 1) != System_IDisposable_TypeInfo )
    {
      --v16;
      v17 += 4;
      if ( !v16 )
        goto LABEL_25;
    }
    v18 = (__int64)&v15->vtable[*v17];
  }
  else
  {
LABEL_25:
    v18 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(Enumerator, *(_QWORD *)(v18 + 8));
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !byte_4C4395C )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    byte_4C4395C = 1;
  }
  v21 = AtlasManager_TypeInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v21 = AtlasManager_TypeInfo;
  }
  static_fields = v21->static_fields;
  static_fields->classFrameIdList = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->classFrameIdList, (int32_t)v3, v19, v20);
  return 1;
}


void ServantClassMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C43829 & 1) == 0 )
  {
    sub_1C37058(&ServantClassMaster___c_TypeInfo);
    byte_4C43829 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantClassMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantClassMaster___c_TypeInfo->static_fields->__9 = (struct ServantClassMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantClassMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ServantClassMaster___c___ctor(ServantClassMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ServantClassMaster___c___GetPlayableGrandBeastClassIds_b__10_0(
        ServantClassMaster___c_o *this,
        GrandGraphDetailEntity_o *x,
        const MethodInfo *method)
{
  BalanceConfig_c *v4; // x0

  if ( (byte_4C4382A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C4382A = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !x )
    sub_1C372B4(v4);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
           x->fields.baseClassId,
           (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t ServantClassMaster___c___GetPlayableGrandBeastClassIds_b__10_1(
        ServantClassMaster___c_o *this,
        GrandGraphDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.grandClassId;
}
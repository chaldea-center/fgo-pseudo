void ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D31265 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
    byte_4D31265 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
  System_Collections_Generic_Dictionary_ValueTuple_int__bool___object____ctor(
    v3,
    (const MethodInfo_347D65C *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
  this->fields.cachedIndividualityWithRelatedDict = (struct System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedIndividualityWithRelatedDict,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    9,
    (const MethodInfo_3460CFC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
}


System_Int32_array *ServantClassMaster__GetIndividualityWithRelated(
        ServantClassMaster_o *this,
        int32_t classId,
        bool isServant,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *cachedIndividualityWithRelatedDict; // x0
  const MethodInfo *v9; // x2
  System_Int32_array *v10; // x19
  System_ValueTuple_int__bool__o v11; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v12; // x20
  System_Int32_array *v14; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_int__bool__o key; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D31260 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
    sub_1C93AD4(&Method_System_ValueTuple_int__bool___ctor__);
    byte_4D31260 = 1;
  }
  v14 = 0;
  key = 0;
  System_ValueTuple_int__bool____ctor(
    (System_ValueTuple_int__bool__o)&key,
    classId,
    isServant,
    (const MethodInfo_3BD6818 *)Method_System_ValueTuple_int__bool___ctor__);
  cachedIndividualityWithRelatedDict = (Il2CppObject *)this->fields.cachedIndividualityWithRelatedDict;
  if ( !cachedIndividualityWithRelatedDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)cachedIndividualityWithRelatedDict,
          key,
          (Il2CppObject **)&v14,
          (const MethodInfo_347F7A4 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__) )
  {
    v11 = key;
    v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.cachedIndividualityWithRelatedDict;
    cachedIndividualityWithRelatedDict = (Il2CppObject *)ServantClassMaster__GetIndividualityWithRelated_43340040(
                                                           this,
                                                           key,
                                                           v9);
    if ( v12 )
    {
      v10 = (System_Int32_array *)cachedIndividualityWithRelatedDict;
      System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___set_Item(
        v12,
        v11,
        cachedIndividualityWithRelatedDict,
        (const MethodInfo_347E018 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
      return v10;
    }
LABEL_9:
    sub_1C93D2C(cachedIndividualityWithRelatedDict, v7);
  }
  return v14;
}


System_Int32_array *ServantClassMaster__GetIndividualityWithRelated_43340040(
        ServantClassMaster_o *this,
        System_ValueTuple_int__bool__o tupleKey,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  Il2CppObject *Entity; // x0
  __int64 klass_low; // x1
  long double inited; // q0
  struct System_Int32_array *items; // x8
  _QWORD *v10; // x9
  Il2CppObject *v11; // x21
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4D31261 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D31261 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             tupleKey.fields.Item1,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( v5 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_1C93D2C(Entity, klass_low);
  }
  if ( !v5 )
    goto LABEL_10;
  klass_low = LODWORD(Entity[2].klass);
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
      klass_low,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v5->fields._size = size + 1;
    items->m_Items[size] = klass_low;
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  monitor = (System_Collections_Generic_IEnumerable_T__o *)v11[4].monitor;
  if ( !monitor )
  {
    v14 = Method_System_Array_Empty_int___;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_1C69BC4(Method_System_Array_Empty_int___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
      v17 = sub_1C69B68(inited);
    monitor = **(System_Collections_Generic_IEnumerable_T__o ***)(v17 + 184);
  }
  System_Collections_Generic_List_int___AddRange(
    v5,
    monitor,
    (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t ServantClassMaster__GetPlayableGrandBeastBaseClassId(ServantClassMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  GrandGraphDetailMaster_o *v4; // x19

  if ( (byte_4D31264 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D31264 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  v4 = (GrandGraphDetailMaster_o *)Master_object;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !v4 )
    sub_1C93D2C(Master_object, v3);
  return GrandGraphDetailMaster__GetGrandClassId(v4, BalanceConfig_TypeInfo->static_fields->PlayableBeastBaseClassId, 0);
}


System_Int32_array *ServantClassMaster__GetPlayableGrandBeastClassIds(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x19
  ServantClassMaster___c_c *v5; // x0
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v7; // x21
  struct ServantClassMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  ServantClassMaster___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__int__o *_9__10_1; // x20
  Il2CppObject *v19; // x21
  struct ServantClassMaster___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4D31263 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__getEntityList__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
    sub_1C93AD4(&System_Func_GrandGraphDetailEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_0__);
    sub_1C93AD4(&Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_1__);
    sub_1C93AD4(&ServantClassMaster___c_TypeInfo);
    byte_4D31263 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v3);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  v5 = ServantClassMaster___c_TypeInfo;
  if ( !ServantClassMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantClassMaster___c_TypeInfo);
    v5 = ServantClassMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__bool__o *)v5->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantClassMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__10_0,
      v7,
      Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_0__,
      0);
    static_fields = ServantClassMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_GrandGraphDetailEntity__bool__o *)_9__10_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
      (int32_t)_9__10_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          monitor,
          (System_Func_TSource__bool__o *)_9__10_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
  v16 = ServantClassMaster___c_TypeInfo;
  v17 = v15;
  if ( !ServantClassMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantClassMaster___c_TypeInfo);
    v16 = ServantClassMaster___c_TypeInfo;
  }
  _9__10_1 = (System_Func_object__int__o *)v16->static_fields->__9__10_1;
  if ( !_9__10_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = ServantClassMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__10_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__10_1,
      v19,
      Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_1__,
      0);
    v20 = ServantClassMaster___c_TypeInfo->static_fields;
    v20->__9__10_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__10_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20->__9__10_1, (int32_t)_9__10_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__10_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  v28 = System_Linq_Enumerable__Distinct_int_(
          v27,
          (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v28,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


int32_t ServantClassMaster__GetSupportGroupByGrandGraphId(
        ServantClassMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *v8; // [xsp+8h] [xbp-38h] BYREF
  GrandGraphDetailEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4D31262 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_4D31262 = 1;
  }
  entity = 0;
  v8 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
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
                                      &v8,
                                      entity->fields.grandClassId,
                                      (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v8 )
        return (int32_t)v8[4].klass;
LABEL_13:
      sub_1C93D2C(Master_object, v6);
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
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  ServantClassEntity_o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  bool v26; // w22
  int v27; // w24
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D3125F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D3125F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, entity);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v18 = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                    Enumerator,
                                    *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C93D2C(0, v19);
    if ( v18->fields.individuality == individuality )
    {
      *entity = v18;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)entity, (int32_t)v18, v20, v21, v22, v23, v24, v25);
      v26 = 1;
      v27 = 4;
      goto LABEL_22;
    }
  }
  v26 = 0;
  v27 = 5;
LABEL_22:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_26;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_26:
    v31 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  if ( v27 == 5 )
  {
    *entity = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)entity, 0, v32, v33, v34, v35, v36, v37);
    return 0;
  }
  return v26;
}


float ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D3125A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D3125A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  return (float)SHIDWORD(Instance[2].klass) / 1000.0;
}


System_Collections_Generic_List_int__o *ServantClassMaster__getExtraClassIdList(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4D3125E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D3125E = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C93D2C(0, v17);
    if ( *(_DWORD *)(v16 + 64) == 8 )
    {
      if ( !v3 )
        sub_1C93D2C(v16, v17);
      v18 = *(unsigned int *)(v16 + 16);
      items = v3->fields._items;
      v20 = Method_System_Collections_Generic_List_int__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C93D2C(v16, v18);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v18,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v18;
      }
    }
  }
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
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_29:
    v25 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v3;
}


int32_t ServantClassMaster__getRelationId(ServantClassMaster_o *this, int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_4D3125B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_4D3125B = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             classId,
             (const MethodInfo_3463274 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_1C93D2C(0, v6);
  return HIDWORD(Entity[3].monitor);
}


int32_t ServantClassMaster__getSupportGroupType(ServantClassMaster_o *this, int32_t classId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D3125D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_4D3125D = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         classId,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_1C93D2C(v5, v6);
  return *(int *)((char *)&dword_40 + (_QWORD)entity);
}


bool ServantClassMaster__preProcess(ServantClassMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x20
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  AtlasManager_c *v28; // x0
  struct AtlasManager_StaticFields *static_fields; // x0

  if ( (byte_4D3125C & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D3125C = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_34B3908 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_1C93D2C(0, v17);
    if ( !v3 )
      sub_1C93D2C(v16, v17);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v3,
      *(_DWORD *)(v16 + 16),
      *(_DWORD *)(v16 + 48),
      (const MethodInfo_34B42B8 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_25;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_25:
    v21 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(Enumerator, *(_QWORD *)(v21 + 8));
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !byte_4D313A0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    byte_4D313A0 = 1;
  }
  v28 = AtlasManager_TypeInfo;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v28 = AtlasManager_TypeInfo;
  }
  static_fields = v28->static_fields;
  static_fields->classFrameIdList = v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->classFrameIdList,
    (int32_t)v3,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return 1;
}


void ServantClassMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31266 & 1) == 0 )
  {
    sub_1C93AD4(&ServantClassMaster___c_TypeInfo);
    byte_4D31266 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantClassMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantClassMaster___c_TypeInfo->static_fields->__9 = (struct ServantClassMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantClassMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4D31267 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D31267 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !x )
    sub_1C93D2C(v4, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
           x->fields.baseClassId,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t ServantClassMaster___c___GetPlayableGrandBeastClassIds_b__10_1(
        ServantClassMaster___c_o *this,
        GrandGraphDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.grandClassId;
}
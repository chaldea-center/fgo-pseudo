void ServantClassMaster___ctor(ServantClassMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971126 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
    byte_5971126 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TypeInfo);
  System_Collections_Generic_Dictionary_ValueTuple_int__bool___object____ctor(
    v3,
    (const MethodInfo_3F466C4 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int_____ctor__);
  this->fields.cachedIndividualityWithRelatedDict = (struct System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedIndividualityWithRelatedDict,
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
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int___ctor__);
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

  if ( (byte_5971121 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
    sub_2213A60(&Method_System_ValueTuple_int__bool___ctor__);
    byte_5971121 = 1;
  }
  v14 = 0;
  key = 0;
  System_ValueTuple_int__bool____ctor(
    (System_ValueTuple_int__bool__o)&key,
    classId,
    isServant,
    (const MethodInfo_3CECD7C *)Method_System_ValueTuple_int__bool___ctor__);
  cachedIndividualityWithRelatedDict = (Il2CppObject *)this->fields.cachedIndividualityWithRelatedDict;
  if ( !cachedIndividualityWithRelatedDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_ValueTuple_int__bool___object___TryGetValue(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)cachedIndividualityWithRelatedDict,
          key,
          (Il2CppObject **)&v14,
          (const MethodInfo_3F48B2C *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____TryGetValue__) )
  {
    v11 = key;
    v12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.cachedIndividualityWithRelatedDict;
    cachedIndividualityWithRelatedDict = (Il2CppObject *)ServantClassMaster__GetIndividualityWithRelated_49650488(
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
        (const MethodInfo_3F47060 *)Method_System_Collections_Generic_Dictionary_ValueTuple_int__bool___int____set_Item__);
      return v10;
    }
LABEL_9:
    sub_2213CDC(cachedIndividualityWithRelatedDict, v7);
  }
  return v14;
}


System_Int32_array *ServantClassMaster__GetIndividualityWithRelated_49650488(
        ServantClassMaster_o *this,
        System_ValueTuple_int__bool__o tupleKey,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  Il2CppObject *Entity; // x0
  __int64 klass_low; // x1
  long double v8; // q0
  Il2CppObject *v9; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_5971122 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_int___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_5971122 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             tupleKey.fields.Item1,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
  {
    if ( v5 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_10:
    sub_2213CDC(Entity, klass_low);
  }
  if ( !v5 )
    goto LABEL_10;
  v9 = Entity;
  items = v5->fields._items;
  klass_low = LODWORD(Entity[2].klass);
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      klass_low,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  else
  {
    v5->fields._size = size + 1;
    items->m_Items[size] = klass_low;
    if ( (*(_QWORD *)&tupleKey & 0x100000000LL) == 0 )
      return System_Collections_Generic_List_int___ToArray(
               v5,
               (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  }
  monitor = (System_Collections_Generic_IEnumerable_T__o *)v9[4].monitor;
  if ( !monitor )
  {
    v14 = Method_System_Array_Empty_int___;
    v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v15 )
    {
      sub_224B964(Method_System_Array_Empty_int___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
      v16 = sub_224B908(v8);
    if ( !*(_DWORD *)(v16 + 228) )
      *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v16, monitor);
    v17 = *(_QWORD *)(v14[7] + 16LL);
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_224B908(v8);
    monitor = **(System_Collections_Generic_IEnumerable_T__o ***)(v17 + 184);
  }
  System_Collections_Generic_List_int___AddRange(
    v5,
    monitor,
    (const MethodInfo_446747C *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t ServantClassMaster__GetPlayableGrandBeastBaseClassId(ServantClassMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v3; // x1
  GrandGraphDetailMaster_o *v4; // x19

  if ( (byte_5971125 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_5971125 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  v4 = (GrandGraphDetailMaster_o *)Master_object;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v3);
  if ( !v4 )
    sub_2213CDC(Master_object, v3);
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
  struct ServantClassMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__10_0; // x20
  Il2CppObject *v8; // x21
  struct ServantClassMaster___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  ServantClassMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  struct ServantClassMaster___c_StaticFields *v20; // x9
  System_Func_object__int__o *_9__10_1; // x20
  Il2CppObject *v22; // x21
  struct ServantClassMaster___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_5971124 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_GrandGraphDetailMaster__GrandGraphDetailEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
    sub_2213A60(&System_Func_GrandGraphDetailEntity__int__TypeInfo);
    sub_2213A60(&System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    sub_2213A60(&Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_0__);
    sub_2213A60(&Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_1__);
    sub_2213A60(&ServantClassMaster___c_TypeInfo);
    byte_5971124 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v3);
  monitor = (System_Collections_Generic_IEnumerable_TSource__o *)Master_object[2].monitor;
  v5 = ServantClassMaster___c_TypeInfo;
  if ( !*(&ServantClassMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantClassMaster___c_TypeInfo, v3);
    v5 = ServantClassMaster___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__10_0 = (System_Func_object__bool__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v3);
      static_fields = ServantClassMaster___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_GrandGraphDetailEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__10_0,
      v8,
      Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_0__,
      0);
    v9 = ServantClassMaster___c_TypeInfo->static_fields;
    v9->__9__10_0 = (struct System_Func_GrandGraphDetailEntity__bool__o *)_9__10_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->__9__10_0, (int32_t)_9__10_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          monitor,
          (System_Func_TSource__bool__o *)_9__10_0,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_GrandGraphDetailEntity___);
  v18 = ServantClassMaster___c_TypeInfo;
  v19 = v16;
  if ( !*(&ServantClassMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantClassMaster___c_TypeInfo, v17);
    v18 = ServantClassMaster___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__10_1 = (System_Func_object__int__o *)v20->__9__10_1;
  if ( !_9__10_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v17);
      v20 = ServantClassMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__10_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_GrandGraphDetailEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__10_1,
      v22,
      Method_ServantClassMaster___c__GetPlayableGrandBeastClassIds_b__10_1__,
      0);
    v23 = ServantClassMaster___c_TypeInfo->static_fields;
    v23->__9__10_1 = (struct System_Func_GrandGraphDetailEntity__int__o *)_9__10_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->__9__10_1, (int32_t)_9__10_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__10_1,
                                                               (const MethodInfo_389085C *)Method_System_Linq_Enumerable_Select_GrandGraphDetailEntity__int___);
  v31 = System_Linq_Enumerable__Distinct_int_(
          v30,
          (const MethodInfo_387C5EC *)Method_System_Linq_Enumerable_Distinct_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v31,
           (const MethodInfo_389B994 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantClassMaster__GetSupportGroupByGrandGraphId(
        ServantClassMaster_o *this,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  Il2CppObject *v9; // [xsp+8h] [xbp-38h] BYREF
  GrandGraphDetailEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5971123 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_GrandGraphDetailMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_5971123 = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  v9 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&grandGraphId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_GrandGraphDetailMaster___);
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
                                      &v9,
                                      entity->fields.grandClassId,
                                      (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( v9 )
        return (int32_t)v9[4].klass;
LABEL_13:
      sub_2213CDC(Master_object, v7);
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
  ServantClassEntity_o *Enumerator; // x0
  ServantClassEntity_o *v9; // x1
  ServantClassEntity_c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  ServantClassEntity_c *v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  bool v24; // w21
  int v25; // w24
  ServantClassEntity_c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  ServantClassEntity_o *v37; // [xsp+18h] [xbp-38h]

  if ( (byte_5971120 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971120 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, entity);
  Enumerator = (ServantClassEntity_o *)System_Collections_ObjectModel_Collection_object___GetEnumerator(
                                         list,
                                         (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  v37 = Enumerator;
  while ( 1 )
  {
    if ( !v37 )
      sub_2213CDC(Enumerator, v9);
    klass = v37->klass;
    v11 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v13 = sub_224BC3C(v37, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(ServantClassEntity_o *, _QWORD))v13)(v37, *(_QWORD *)(v13 + 8)) & 1) == 0 )
      break;
    v14 = v37->klass;
    v15 = *(unsigned __int16 *)&v37->klass->_2.rank;
    if ( *(_WORD *)&v37->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable + 16 * *v16;
    }
    else
    {
LABEL_17:
      v17 = sub_224BC3C(v37, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    Enumerator = (ServantClassEntity_o *)(*(__int64 (__fastcall **)(ServantClassEntity_o *, _QWORD))v17)(
                                           v37,
                                           *(_QWORD *)(v17 + 8));
    v9 = Enumerator;
    if ( !Enumerator )
      sub_2213CDC(0, 0);
    if ( Enumerator->fields.individuality == individuality )
    {
      *entity = Enumerator;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)Enumerator, v18, v19, v20, v21, v22, v23);
      v24 = 1;
      v25 = 4;
      goto LABEL_23;
    }
  }
  v24 = 0;
  v25 = 5;
LABEL_23:
  v26 = v37->klass;
  v27 = *(unsigned __int16 *)&v37->klass->_2.rank;
  if ( *(_WORD *)&v37->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_27;
    }
    v29 = (__int64)&v26->vtable + 16 * *v28;
  }
  else
  {
LABEL_27:
    v29 = sub_224BC3C(v37, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(ServantClassEntity_o *, _QWORD))v29)(v37, *(_QWORD *)(v29 + 8));
  if ( v25 == 5 )
  {
    *entity = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, 0, v30, v31, v32, v33, v34, v35);
    return 0;
  }
  return v24;
}


float ServantClassMaster__getClassAtk(int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_597111B & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597111B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ServantClassMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     classId,
                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__)) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  return (float)SHIDWORD(Instance[2].klass) / 1000.0;
}


System_Collections_Generic_List_int__o *ServantClassMaster__getExtraClassIdList(
        ServantClassMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  System_Collections_Generic_IEnumerator_T__o *v29; // [xsp+18h] [xbp-38h]

  if ( (byte_597111F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597111F = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  v29 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v29 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v29 )
      sub_2213CDC(v13, v14);
    v15 = v29->klass;
    v16 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v29, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v29,
            *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_2213CDC(0, v20);
    if ( *(_DWORD *)(v19 + 64) == 8 )
    {
      if ( !v3
        || (items = v3->fields._items,
            v20 = *(unsigned int *)(v19 + 16),
            v22 = Method_System_Collections_Generic_List_int__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(v19, v20);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v3,
          v20,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v3->fields._size = size + 1;
        items->m_Items[size] = v20;
      }
    }
  }
  if ( v29 )
  {
    v24 = v29->klass;
    v25 = *(unsigned __int16 *)&v29->klass->_2.rank;
    if ( *(_WORD *)&v29->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_34;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_34:
      v27 = sub_224BC3C(v29, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(v29, *(_QWORD *)(v27 + 8));
  }
  return v3;
}


int32_t ServantClassMaster__getRelationId(ServantClassMaster_o *this, int32_t classId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  __int64 v6; // x1

  if ( (byte_597111C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    byte_597111C = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             classId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  if ( !Entity )
    sub_2213CDC(0, v6);
  return HIDWORD(Entity[3].monitor);
}


int32_t ServantClassMaster__getSupportGroupType(ServantClassMaster_o *this, int32_t classId, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597111E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    byte_597111E = 1;
  }
  entity = 0;
  v5 = DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         classId,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( !v5 )
    return 999;
  if ( !entity )
    sub_2213CDC(v5, v6);
  return *(int *)((char *)&dword_40 + (_QWORD)entity);
}


bool ServantClassMaster__preProcess(ServantClassMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__int__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  AtlasManager_c *v29; // x0
  struct AtlasManager_StaticFields *static_fields; // x0
  System_Collections_Generic_IEnumerator_T__o *v32; // [xsp+18h] [xbp-48h]

  if ( (byte_597111D & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_597111D = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v3,
    (const MethodInfo_3F9227C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_ServantClassEntity__GetEnumerator__);
  v32 = Enumerator;
  while ( 1 )
  {
    if ( !v32 )
      sub_2213CDC(Enumerator, v7);
    klass = v32->klass;
    v9 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_10;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v11 = sub_224BC3C(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            v32,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = v32->klass;
    v13 = *(unsigned __int16 *)&v32->klass->_2.rank;
    if ( *(_WORD *)&v32->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_ServantClassEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_17:
      v15 = sub_224BC3C(v32, System_Collections_Generic_IEnumerator_ServantClassEntity__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            v32,
            *(_QWORD *)(v15 + 8));
    if ( !v16 )
      sub_2213CDC(0, v17);
    if ( !v3 )
      sub_2213CDC(v16, v17);
    System_Collections_Generic_Dictionary_int__int___set_Item(
      v3,
      *(_DWORD *)(v16 + 16),
      *(_DWORD *)(v16 + 48),
      (const MethodInfo_3F92C0C *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
  }
  v18 = v32->klass;
  v19 = *(unsigned __int16 *)&v32->klass->_2.rank;
  if ( *(_WORD *)&v32->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_26:
    v21 = sub_224BC3C(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(v32, *(_QWORD *)(v21 + 8));
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
  if ( !byte_59711CD )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    byte_59711CD = 1;
  }
  v29 = AtlasManager_TypeInfo;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v22);
    v29 = AtlasManager_TypeInfo;
  }
  static_fields = v29->static_fields;
  static_fields->classFrameIdList = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->classFrameIdList,
    (int32_t)v3,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  return 1;
}


void ServantClassMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971127 & 1) == 0 )
  {
    sub_2213A60(&ServantClassMaster___c_TypeInfo);
    byte_5971127 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(ServantClassMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantClassMaster___c_TypeInfo->static_fields->__9 = (struct ServantClassMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantClassMaster___c_TypeInfo->static_fields,
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

  if ( (byte_5971128 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5971128 = 1;
  }
  v4 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, x);
  if ( !x )
    sub_2213CDC(v4, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
           x->fields.baseClassId,
           (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t ServantClassMaster___c___GetPlayableGrandBeastClassIds_b__10_1(
        ServantClassMaster___c_o *this,
        GrandGraphDetailEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.grandClassId;
}
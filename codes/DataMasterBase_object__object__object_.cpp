// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_object__object__object____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_32CA594 *method)
{
  __int64 _0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v11; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_4B21DF9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, *(_QWORD *)&kind);
    byte_4B21DF9 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C1B45C();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1BCB244(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_38144FC *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.list, (int32_t)v7, v8, v9);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0LL);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_301AD10 *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v11 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1BCB244(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v13 = v11;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0LL);
  if ( !list )
    sub_1BCB254(v14, v15);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._39_add_CollectionChanged.method)(
    list,
    v13,
    list->klass->vtable._40_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase_object__object__object___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_32CBA08 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_3263874 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void __fastcall DataMasterBase_object__object__object___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CB270 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_32639C4 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void __fastcall DataMasterBase_object__object__object___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CB45C *method)
{
  __int64 v4; // x1
  __int64 _6_System_Collections_Generic_Dictionary_string__TEntity; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x19
  struct System_Collections_Generic_Dictionary_string__TEntity__o **p_lookup; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 _27_System_Collections_Generic_IEnumerator_TEntity; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  __int64 v26; // x1
  Il2CppObject *v27; // x23
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4B21DFF & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, method);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v4);
    byte_4B21DFF = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C1B45C();
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_33853C8 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v6;
  p_lookup = &this->fields._lookup;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_lookup, (int32_t)v6, v8, v9);
  v11 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v11 )
    sub_1BCB254(0LL, v10);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v11,
                 (const MethodInfo_3263BC0 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1BCB254(0LL, v12);
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
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C1B45C();
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)v21 - 1) != _27_System_Collections_Generic_IEnumerator_TEntity )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_20;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_20:
      v22 = sub_1C1B560(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = (Il2CppObject *)v23;
    if ( !v23 )
      sub_1BCB254(0LL, v24);
    v27 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 376LL))(
                            v23,
                            *(_QWORD *)(*(_QWORD *)v23 + 384LL));
    if ( v27 )
    {
      if ( !*p_lookup )
        sub_1BCB254(0LL, v26);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v27,
              (const MethodInfo_3385F6C *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1BCB254(0LL, v28);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v27,
          v25,
          (const MethodInfo_3385D78 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_32;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_32:
    v32 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
}


bool __fastcall DataMasterBase_object__object__object___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_32CB910 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int monitor; // w8
  Il2CppObject *v10; // x21
  int i; // w23
  Il2CppObject *v12; // x22
  __int64 v13; // x0

  if ( (byte_4B21E01 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4B21E01 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._16_OnListChangedImplementation.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_1BCB254(Instance, v7);
  }
  monitor = (int)Instance[1].monitor;
  v10 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1BCB25C(Instance, v7, v8);
      v12 = (Il2CppObject *)*((_QWORD *)&v10[2].klass + i);
      if ( !v12 )
        goto LABEL_15;
      v13 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v12->klass->vtable[4].method)(
              v12,
              v12->klass->vtable[5].methodPtr);
      if ( !v13 )
        return v13;
      Instance = (Il2CppObject *)DataMasterBase_object__object__object___RemoveEntity(
                                   this,
                                   v12,
                                   (const MethodInfo_32CBA2C *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
      monitor = (int)v10[1].monitor;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v13) = 1;
  return v13;
}


void __fastcall DataMasterBase_object__object__object___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CCADC *method)
{
  ;
}


DataEntityBase_array *__fastcall DataMasterBase_object__object__object___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CBB58 *method)
{
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0

  if ( (byte_4B21E02 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OfType_DataEntityBase___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, v3);
    byte_4B21E02 = 1;
  }
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3045CA8 *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v4,
                                   (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataMasterBase_object__object__object___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CBBC4 *method)
{
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v5; // x20

  if ( (byte_4B21E03 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, method);
    sub_1BCAFF8(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v3);
    byte_4B21E03 = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v5 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1BCB244(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_58803468(
    v5,
    list,
    (const MethodInfo_381450C *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v5;
}


Il2CppObject *__fastcall DataMasterBase_object__object__object___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *key,
        const MethodInfo_32CC8B8 *method)
{
  System_String_o *v5; // x0

  if ( !key )
    sub_1BCB254(this, 0LL);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                            key,
                            key->klass->vtable[4].methodPtr);
  return DataMasterBase_object__object__object___getEntityFromKey(
           this,
           v5,
           (const MethodInfo_32CBC40 *)method->klass->rgctx_data->_57_DataMasterBase_TMaster__TEntity__PKType__TryGetEntityFromId);
}


System_Type_o *__fastcall DataMasterBase_object__object__object___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CCA78 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v5; // 0:w0.4

  if ( (byte_4B21E06 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Type_TypeInfo, method);
    byte_4B21E06 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (int)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v5, 0LL);
}


Il2CppObject *__fastcall DataMasterBase_object__object__object___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CC954 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_32635E8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_32635E8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_3263678 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1BCB254(list, method);
  }
  return 0LL;
}


void __fastcall DataMasterBase_object__object__object___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_32CC10C *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x22
  System_Collections_IList_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v15; // x0
  System_NotImplementedException_o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x22
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  System_Collections_IEnumerator_c **v25; // x10
  __int64 v26; // x0
  __int64 v27; // x23
  __int64 _29_TEntity; // x1
  __int64 v29; // x23
  __int64 v30; // x24
  __int64 v31; // x0
  __int64 v32; // x25
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x1
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x22
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_Collections_IList_o *newItems; // x22
  System_Collections_IList_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x22
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  __int64 v57; // x23
  __int64 v58; // x1
  __int64 v59; // x25
  __int64 v60; // x0
  Il2CppObject *v61; // x23
  System_Collections_Generic_Dictionary_object__object__o *v62; // x24
  Il2CppObject *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x22
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0

  v6 = this;
  if ( (byte_4B21E05 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IDisposable_TypeInfo, sender);
    sub_1BCAFF8(&System_Collections_IEnumerable_TypeInfo, v7);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4B21E05 = 1;
  }
  if ( v6->fields._lookup )
  {
    if ( !e )
      sub_1BCB254(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v15 = sub_1BCB00C(&System_NotImplementedException_TypeInfo);
          v16 = (System_NotImplementedException_o *)sub_1BCB244(v15);
          System_NotImplementedException___ctor(v16, 0LL);
          sub_1BCB120(v16, method);
        }
        DataMasterBase_object__object__object___CreateLookupTable(
          v6,
          (const MethodInfo_32CB45C *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
      }
    }
    else
    {
      oldItems = e->fields._oldItems;
      if ( oldItems )
      {
        klass = oldItems->klass;
        v12 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v12;
            p_offset += 4;
            if ( !v12 )
              goto LABEL_11;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_11:
          p_method = sub_1C1B560(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v18 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v18 )
          sub_1BCB254(0LL, v17);
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
                goto LABEL_21;
            }
            v22 = v19 + 16LL * *v21 + 312;
          }
          else
          {
LABEL_21:
            v22 = sub_1C1B560(v18, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_28;
            }
            v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
          }
          else
          {
LABEL_28:
            v26 = sub_1C1B560(v18, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C1B45C();
          v29 = sub_1BCB134(v27, _29_TEntity);
          v30 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
            v30 = sub_1C1B45C();
          if ( v29 )
          {
            v31 = sub_1BCB134(v29, v30);
            v32 = v31;
            if ( !v31 )
            {
              sub_1BCB514(v29);
LABEL_89:
              sub_1BCB514(v30);
LABEL_90:
              sub_1BCB254(v34, v35);
            }
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 376LL))(
                   v31,
                   *(_QWORD *)(*(_QWORD *)v31 + 384LL)) )
            {
              lookup = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
              v34 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 376LL))(
                                      v32,
                                      *(_QWORD *)(*(_QWORD *)v32 + 384LL));
              v35 = v34;
              if ( !lookup )
                goto LABEL_90;
              System_Collections_Generic_Dictionary_object__object___Remove(
                lookup,
                v34,
                (const MethodInfo_3387274 *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v36 = sub_1BCB134(v18, System_IDisposable_TypeInfo);
        if ( v36 )
        {
          v37 = *(_QWORD *)v36;
          v38 = v36;
          v39 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
          {
            v40 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
            {
              --v39;
              v40 += 4;
              if ( !v39 )
                goto LABEL_44;
            }
            v41 = v37 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_44:
            v41 = sub_1C1B560(v36, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v43 = newItems->klass;
        v44 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
        {
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v45 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_52;
          }
          v46 = (__int64)&v43->vtable[*v45].method;
        }
        else
        {
LABEL_52:
          v46 = sub_1C1B560(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v46)(
                newItems,
                *(_QWORD *)(v46 + 8));
        if ( !v48 )
          sub_1BCB254(0LL, v47);
        while ( 1 )
        {
          v49 = *(_QWORD *)v48;
          v50 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
          {
            v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v50;
              v51 += 4;
              if ( !v50 )
                goto LABEL_59;
            }
            v52 = v49 + 16LL * *v51 + 312;
          }
          else
          {
LABEL_59:
            v52 = sub_1C1B560(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
            break;
          v53 = *(_QWORD *)v48;
          v54 = *(unsigned __int16 *)(*(_QWORD *)v48 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v48 + 302LL) )
          {
            v55 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v53 + 176) + 8LL);
            while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v54;
              v55 += 2;
              if ( !v54 )
                goto LABEL_66;
            }
            v56 = v53 + 16LL * (*(_DWORD *)v55 + 1) + 312;
          }
          else
          {
LABEL_66:
            v56 = sub_1C1B560(v48, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
          v58 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
            v58 = sub_1C1B45C();
          v30 = sub_1BCB134(v57, v58);
          v59 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
            v59 = sub_1C1B45C();
          if ( v30 )
          {
            v60 = sub_1BCB134(v30, v59);
            v61 = (Il2CppObject *)v60;
            if ( !v60 )
              goto LABEL_89;
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v60 + 376LL))(
                   v60,
                   *(_QWORD *)(*(_QWORD *)v60 + 384LL)) )
            {
              v62 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
              v63 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v61->klass->vtable[4].method)(
                                      v61,
                                      v61->klass->vtable[5].methodPtr);
              if ( !v62 )
                sub_1BCB254(v63, v63);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v62,
                v63,
                v61,
                (const MethodInfo_3385D64 *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v64 = sub_1BCB134(v48, System_IDisposable_TypeInfo);
        if ( v64 )
        {
          v65 = *(_QWORD *)v64;
          v66 = v64;
          v67 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
          {
            v68 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
            {
              --v67;
              v68 += 4;
              if ( !v67 )
                goto LABEL_82;
            }
            v69 = v65 + 16LL * *v68 + 312;
          }
          else
          {
LABEL_82:
            v69 = sub_1C1B560(v64, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
        }
      }
    }
  }
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, void *))v6->klass->vtable._16_OnListChangedImplementation.method)(
    v6,
    e,
    v6->klass[1]._1.image);
}


void __fastcall DataMasterBase_object__object__object___OnListChangedImplementation(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_32CC8B4 *method)
{
  ;
}


bool __fastcall DataMasterBase_object__object__object___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_32CBA2C *method)
{
  __int64 _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType; // x8
  __int64 v7; // x21
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x22
  __int64 _39_System_Predicate_TEntity; // x0
  System_Predicate_object__o *v14; // x23
  int32_t Index_object; // w21

  _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = (__int64)method->klass->rgctx_data->_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType_;
  if ( (*(_BYTE *)(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType + 309) & 1) == 0 )
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C1B45C();
  v7 = sub_1BCB244(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  DataMasterBase___c__DisplayClass23_0_object__object__object____ctor(
    (DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *)v7,
    (const MethodInfo_31E4D00 *)method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor);
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))entity->klass->vtable[4].method)(
                                                           entity,
                                                           entity->klass->vtable[5].methodPtr);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v8, v10, v11);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C1B45C();
  v14 = (System_Predicate_object__o *)sub_1BCB244(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_3821798 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v14,
                   (const MethodInfo_30A509C *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_3263FB0 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1BCB254(v8, v9);
  }
  return Index_object >= 0;
}


bool __fastcall DataMasterBase_object__object__object___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_32CB294 *method)
{
  int64_t value; // x21
  __int64 v7; // x22
  int64_t v8; // x23
  __int64 v9; // x24
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x26
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Nullable_long__o v17; // 0:x2.16
  System_Nullable_long__o v18; // 0:x4.16

  value = lenght.fields.value;
  v7 = *(_QWORD *)&lenght.fields.hasValue;
  v8 = start.fields.value;
  v9 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4B21DFE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, objOrBytes);
    byte_4B21DFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_7;
  if ( !this )
    goto LABEL_7;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))this->klass->vtable._6_Clear.method)(
    this,
    this->klass->vtable._7_Replaced.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v17.fields.hasValue = v9;
  v17.fields.value = v8;
  *(_QWORD *)&v18.fields.hasValue = v7;
  v18.fields.value = value;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___abstractGetList(
                                                         this,
                                                         objOrBytes,
                                                         v17,
                                                         v18,
                                                         (const MethodInfo_32CA9C0 *)method->klass->rgctx_data->_22_DataMasterBase_TMaster__TEntity__PKType__abstractGetList);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v15,
    (const MethodInfo_30A3F10 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_7:
    sub_1BCB254(Instance, v13);
  ++this->fields.revision;
  return 1;
}


bool __fastcall DataMasterBase_object__object__object___ReplacedForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_32CB388 *method)
{
  int64_t value; // x21
  __int64 v10; // x22
  int64_t v11; // x23
  __int64 v12; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *ListForThread; // x0
  System_Nullable_long__o v18; // 0:x3.16
  System_Nullable_long__o v19; // 0:x5.16

  if ( !this )
    sub_1BCB254(0LL, objOrBytes);
  value = lenght.fields.value;
  v10 = *(_QWORD *)&lenght.fields.hasValue;
  v11 = start.fields.value;
  v12 = *(_QWORD *)&start.fields.hasValue;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))this->klass->vtable._6_Clear.method)(
    this,
    this->klass->vtable._7_Replaced.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v18.fields.hasValue = v12;
  v18.fields.value = v11;
  *(_QWORD *)&v19.fields.hasValue = v10;
  v19.fields.value = value;
  ListForThread = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___abstractGetListForThread(
                                                                   this,
                                                                   objOrBytes,
                                                                   context,
                                                                   v18,
                                                                   v19,
                                                                   work,
                                                                   (const MethodInfo_32CACB0 *)method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    ListForThread,
    (const MethodInfo_30A3F10 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool __fastcall DataMasterBase_object__object__object___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Il2CppObject *key,
        const MethodInfo_32CC904 *method)
{
  System_String_o *v7; // x2

  if ( !key )
    sub_1BCB254(this, entity);
  v7 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))key->klass->vtable[3].method)(
                            key,
                            key->klass->vtable[4].methodPtr);
  return DataMasterBase_object__object__object___TryGetEntityFromId(
           this,
           entity,
           v7,
           (const MethodInfo_32CBF68 *)method->klass->rgctx_data->_58_TEntity);
}


bool __fastcall DataMasterBase_object__object__object___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_32CBF68 *method)
{
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x21
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0

  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_32CB45C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1BCB254(this, result);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C1B45C();
  klass = lookup->klass;
  v11 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v13 = sub_1C1B560(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, Il2CppObject **, _QWORD))v13)(
           lookup,
           key,
           result,
           *(_QWORD *)(v13 + 8));
}


bool __fastcall DataMasterBase_object__object__object___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_32CC9D4 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_32635E8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0LL;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1BCB254(list, entity);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_3263678 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1BCAF9C((CGThumbnailListItem_o *)entity, (int32_t)Item, v9, v10);
  return Count > 0;
}


bool __fastcall DataMasterBase_object__object__object___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_32CB798 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x21
  unsigned __int64 v10; // x23
  unsigned int monitor; // w8

  if ( (byte_4B21E00 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4B21E00 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._16_OnListChangedImplementation.methodPtr)) == 0LL )
  {
    sub_1BCB254(Instance, v7);
  }
  v9 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v10 = 0LL;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v10 >= monitor )
      sub_1BCB25C(Instance, v7, v8);
    Instance = (Il2CppObject *)DataMasterBase_object__object__object___UpdatedEntity(
                                 this,
                                 *((Il2CppObject **)&v9[2].klass + v10),
                                 (const MethodInfo_32CB890 *)method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    monitor = (unsigned int)v9[1].monitor;
    if ( (__int64)++v10 >= (int)monitor )
    {
      ++this->fields.revision;
      return 1;
    }
  }
  return 0;
}


bool __fastcall DataMasterBase_object__object__object___UpdatedEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_32CB890 *method)
{
  __int64 v6; // x22

  if ( !entity )
    sub_1BCB254(this, 0LL);
  v6 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))entity->klass->vtable[4].method)(
         entity,
         entity->klass->vtable[5].methodPtr);
  if ( v6 )
  {
    DataMasterBase_object__object__object___RemoveEntity(
      this,
      entity,
      (const MethodInfo_32CBA2C *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
    DataMasterBase_object__object__object___AddEntity(
      this,
      entity,
      (const MethodInfo_32CBA08 *)method->klass->rgctx_data->_34_DataMasterBase_TMaster__TEntity__PKType__AddEntity);
  }
  return v6 != 0;
}


System_Object_array *__fastcall DataMasterBase_object__object__object___abstractGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_32CA9C0 *method)
{
  bool hasValue; // w23
  bool v7; // w24
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  long double v13; // q0
  MiniMessagePack_MiniMessagePacker_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int64_t Value; // x0
  __int64 v18; // x1
  const MethodInfo_37D95CC *v19; // x2
  int64_t v20; // x21
  int32_t v22; // w24
  __int64 v23; // x3
  System_Object_array *List; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Nullable_long__o v27; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v28; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v29; // 0:x0.16
  System_Nullable_long__o v30; // 0:x0.16

  v28 = start;
  v27 = lenght;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  if ( (byte_4B21DFC & 1) == 0 )
  {
    sub_1BCAFF8(&byte___TypeInfo, objOrBytes);
    sub_1BCAFF8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Nullable_long__get_HasValue__, v11);
    sub_1BCAFF8(&Method_System_Nullable_long__get_Value__, v12);
    byte_4B21DFC = 1;
  }
  if ( !sub_1BCB134(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._15_getList.method)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._16_OnListChangedImplementation.methodPtr,
                                    v13);
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCB244(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  this->fields.seriazlier = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v14, v15, v16);
  if ( objOrBytes )
  {
    Value = sub_1BCB134(objOrBytes, byte___TypeInfo);
    v20 = Value;
    if ( !Value )
    {
      v13 = sub_1BCB514(objOrBytes);
      return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._15_getList.method)(
                                      this,
                                      objOrBytes,
                                      this->klass->vtable._16_OnListChangedImplementation.methodPtr,
                                      v13);
    }
  }
  else
  {
    v20 = 0LL;
  }
  if ( v7 )
  {
    v29.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v29.fields.hasValue = &v28;
    Value = System_Nullable_long___get_Value(v29, v19);
    hasValue = v27.fields.hasValue;
    v22 = Value;
  }
  else
  {
    v22 = 0;
  }
  if ( hasValue )
  {
    v30.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v30.fields.hasValue = &v27;
    LODWORD(v23) = System_Nullable_long___get_Value(v30, v19);
  }
  else
  {
    if ( !v20 )
      sub_1BCB254(Value, v18);
    v23 = *(_QWORD *)(v20 + 24);
  }
  List = DataMasterBase_object__object__object___directGetList(
           this,
           (System_Byte_array *)v20,
           v22,
           v23,
           (const MethodInfo_32CA748 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seriazlier, 0, v25, v26);
  return List;
}


System_Object_array *__fastcall DataMasterBase_object__object__object___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_32CACB0 *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x22
  MiniMessagePack_MiniMessagePacker_o *v17; // x26
  CGThumbnailListItem_o *p_seriazlier; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_37D95CC *v25; // x2
  int32_t Value; // w24
  __int64 v28; // x3
  int64_t List; // x0
  __int64 v30; // x1
  const MethodInfo_37D95CC *v31; // x2
  const MethodInfo *v32; // x3
  System_Object_array *v33; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v35; // w24
  __int64 v36; // x3
  Il2CppObject *v37; // x1
  System_Nullable_long__o v38; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v39; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v40; // 0:x0.16
  System_Nullable_long__o v41; // 0:x0.16
  System_Nullable_long__o v42; // 0:x0.16
  System_Nullable_long__o v43; // 0:x0.16

  v39 = start;
  v38 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4B21DFD & 1) == 0 )
  {
    sub_1BCAFF8(&byte___TypeInfo, objOrBytes);
    sub_1BCAFF8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_1BCAFF8(&Method_System_Nullable_long__get_Value__, v14);
    byte_4B21DFD = 1;
  }
  v15 = sub_1BCB134(objOrBytes, byte___TypeInfo);
  if ( !v15 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._16_OnListChangedImplementation.methodPtr);
  v16 = v15;
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCB244(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0LL);
  this->fields.seriazlier = v17;
  p_seriazlier = (CGThumbnailListItem_o *)&this->fields.seriazlier;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v17, v19, v20);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1BCB254(0LL, v21);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1BCAF9C((CGThumbnailListItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v22, v23);
  if ( v9 )
  {
    v40.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v40.fields.hasValue = &v39;
    hasValue = v38.fields.hasValue;
    Value = System_Nullable_long___get_Value(v40, v25);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v41.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v41.fields.hasValue = &v38;
    LODWORD(v28) = System_Nullable_long___get_Value(v41, v25);
  }
  else
  {
    v28 = *(_QWORD *)(v16 + 24);
  }
  List = (int64_t)DataMasterBase_object__object__object___directGetList(
                    this,
                    (System_Byte_array *)v16,
                    Value,
                    v28,
                    (const MethodInfo_32CA748 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v33 = (System_Object_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v39.fields.hasValue )
    {
      v42.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v42.fields.hasValue = &v39;
      List = System_Nullable_long___get_Value(v42, v31);
      v35 = List;
    }
    else
    {
      v35 = 0;
    }
    if ( v38.fields.hasValue )
    {
      v43.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v43.fields.hasValue = &v38;
      List = System_Nullable_long___get_Value(v43, v31);
      LODWORD(v36) = List;
      if ( klass )
      {
LABEL_18:
        v37 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v16, v35, v36, 0LL);
        v33 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                       this,
                                       v37,
                                       this->klass->vtable._16_OnListChangedImplementation.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v36 = *(_QWORD *)(v16 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_1BCB254(List, v30);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_1BCAF9C(p_seriazlier, 0, (int32_t)v31, v32);
  return v33;
}


System_String_o *__fastcall DataMasterBase_object__object__object___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_32CBD28 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  __int64 v5; // x1
  signed int max_length; // w8
  __int64 v7; // x22
  CGThumbnailListItem_o *p_sb; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *sb; // t1
  System_Text_StringBuilder_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x2
  il2cpp_array_size_t v15; // w8
  unsigned __int64 v16; // x21

  v4 = this;
  if ( (byte_4B21E04 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, args);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BCAFF8(&StringLiteral_1/*""*/, v5);
    byte_4B21E04 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v7 = (unsigned int)(max_length - 1);
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.sb;
  p_sb = (CGThumbnailListItem_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v11 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_62527720(v11, 128, 0LL);
    p_sb->klass = (CGThumbnailListItem_c *)v11;
    sub_1BCAF9C(p_sb, (int32_t)v11, v12, v13);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
  v15 = args->max_length;
  v16 = 0LL;
  do
  {
    if ( v16 >= v15 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_62536952((System_Text_StringBuilder_o *)this, args->m_Items[v16], 0LL);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_62536696((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v15 = args->max_length;
    ++v16;
  }
  while ( v7 != v16 );
  if ( (unsigned int)v7 >= v15 )
LABEL_20:
    sub_1BCB25C(this, args, v14);
  if ( !this
    || (System_Text_StringBuilder__Append_62536952((System_Text_StringBuilder_o *)this, args->m_Items[(int)v7], 0LL),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_1BCB254(this, args);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                              this,
                              this->klass->vtable._4_ForForceDerived.methodPtr);
}


System_Object_array *__fastcall DataMasterBase_object__object__object___directGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo_32CA748 *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  System_IO_MemoryStream_o *v12; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x23
  DataIO_Runtime_Deserializer_o *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_IEnumerable_o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v25; // x0
  System_FormatException_o *v26; // x21
  System_String_o *v27; // x0

  if ( (byte_4B21DFB & 1) == 0 )
  {
    sub_1BCAFF8(&DataIO_Runtime_Deserializer_TypeInfo, bytes);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v10);
    sub_1BCAFF8(&System_IO_MemoryStream_TypeInfo, v11);
    byte_4B21DFB = 1;
  }
  v12 = (System_IO_MemoryStream_o *)sub_1BCB244(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_63272200(v12, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v14 = (DataIO_Runtime_Deserializer_o *)sub_1BCB244(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v14, seriazlier, 0LL);
  if ( !v14 )
    sub_1BCB254(v15, v16);
  v17 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v14,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v12,
                                              0LL);
  if ( !v17 )
  {
    v25 = sub_1BCB00C(&System_FormatException_TypeInfo);
    v26 = (System_FormatException_o *)sub_1BCB244(v25);
    v27 = (System_String_o *)sub_1BCB00C(&StringLiteral_19628/*"getList family cannot return null."*/);
    System_FormatException___ctor_63874384(v26, v27, 0LL);
    sub_1BCB120(v26, method);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v17,
                                                               (const MethodInfo_3045CA8 *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_30572C4 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
  if ( v12 )
  {
    klass = v12->klass;
    v21 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_10;
      }
      v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v23 = sub_1C1B560(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v23)(v12, *(_QWORD *)(v23 + 8));
  }
  return v19;
}


Il2CppObject *__fastcall DataMasterBase_object__object__object___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_32CBC40 *method)
{
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  Il2CppObject *v13; // [xsp+8h] [xbp-28h] BYREF

  v13 = 0LL;
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_32CB45C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1BCB254(this, key);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C1B45C();
  klass = lookup->klass;
  v9 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v11 = sub_1C1B560(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, Il2CppObject **, _QWORD))v11)(
          lookup,
          key,
          &v13,
          *(_QWORD *)(v11 + 8)) & 1) != 0 )
    return v13;
  else
    return 0LL;
}


System_Collections_ObjectModel_ObservableCollection_TEntity__o *__fastcall DataMasterBase_object__object__object___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CBB50 *method)
{
  return this->fields.list;
}


System_Object_array *__fastcall DataMasterBase_object__object__object___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CBB3C *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_30572C4 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *__fastcall DataMasterBase_object__object__object___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_2F49C0C *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  long double v6; // q0
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v8; // x8
  System_Object_array *v9; // x21
  unsigned __int64 v10; // x22
  CGThumbnailListItem_o *p_monitor; // x23
  long double v12; // q0
  System_Collections_ObjectModel_Collection_T__o *v13; // x24
  Il2CppClass *_1_T; // x1
  __int64 v15; // x0
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  long double v18; // q0
  __int64 v19; // x25
  Il2CppClass *v20; // x24
  CGThumbnailListItem_c *v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x0
  const MethodInfo_2F49D88 *v23; // x1

  if ( !method->rgctx_data )
    sub_1C1B4B8(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_32635E8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C1B45C(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BCB0A0(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1BCB254(list, method);
  v9 = (System_Object_array *)list;
  v10 = 0LL;
  p_monitor = (CGThumbnailListItem_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_32635E8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3263678 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C1B45C(v12);
    v15 = sub_1BCB134(v13, _1_T);
    v19 = v15;
    v20 = method->rgctx_data->_1_T;
    if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
    {
      v15 = sub_1C1B45C(v18);
      v20 = (Il2CppClass *)v15;
    }
    if ( v19 )
    {
      v15 = sub_1BCB134(v19, v20);
      v21 = (CGThumbnailListItem_c *)v15;
      if ( !v15 )
      {
        sub_1BCB514(v19);
        return DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(v22, v23);
      }
    }
    else
    {
      v21 = 0LL;
    }
    if ( v10 >= v9->max_length )
      sub_1BCB25C(v15, v21, v16);
    p_monitor->klass = v21;
    sub_1BCAF9C(p_monitor, (int32_t)v21, v16, v17);
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
    if ( !v8 )
      goto LABEL_21;
  }
  return v9;
}


System_Object_array *__fastcall DataMasterBase_object__object__object___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_32CA6DC *method)
{
  if ( (byte_4B21DFA & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, obj);
    byte_4B21DFA = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_3086694 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool __fastcall DataMasterBase_object__object__object___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CA69C *method)
{
  return this->fields._lookup != 0LL;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *__fastcall DataMasterBase_object__object__object___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32CA6AC *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *result; // x0

  result = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  if ( !result )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_32CB45C *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
    return (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  }
  return result;
}


bool __fastcall DataMasterBase_object__object__object___isEntityExistsFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_32CBE94 *method)
{
  System_String_o *Key; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  System_String_o *v8; // x19
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0

  Key = DataMasterBase_object__object__object___createKey(this, args, (const MethodInfo_32CBD28 *)method);
  lookup = this->fields._lookup;
  v8 = Key;
  if ( !lookup )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_32CB45C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1BCB254(Key, v6);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C1B45C();
  klass = lookup->klass;
  v11 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v13 = sub_1C1B560(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
           lookup,
           v8,
           *(_QWORD *)(v13 + 8));
}


bool __fastcall DataMasterBase_object__object__object___isEntityExistsFromId_53264448(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_32CC040 *method)
{
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0

  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_32CB45C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1BCB254(this, key);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C1B45C();
  klass = lookup->klass;
  v9 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v11 = sub_1C1B560(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v11)(
           lookup,
           key,
           *(_QWORD *)(v11 + 8));
}
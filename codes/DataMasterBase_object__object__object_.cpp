void DataMasterBase_object__object__object____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_33FB870 *method)
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

  if ( (byte_4CBBDD2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_4CBBDD2 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C41A9C();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C6BC54(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_3967198 *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.list, (int32_t)v7, v8, v9);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_313B5D4 *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v11 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1C6BC54(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v13 = v11;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0);
  if ( !list )
    sub_1C6BC60(v14, v15);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, const MethodInfo *))list->klass->vtable._39_add_CollectionChanged.methodPtr)(
    list,
    v13,
    list->klass->vtable._39_add_CollectionChanged.method);
}


void DataMasterBase_object__object__object___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_33FCCE4 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_33920F0 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void DataMasterBase_object__object__object___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FC54C *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_3392240 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void DataMasterBase_object__object__object___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FC738 *method)
{
  __int64 _6_System_Collections_Generic_Dictionary_string__TEntity; // x0
  System_Collections_Generic_Dictionary_object__object__o *v5; // x19
  struct System_Collections_Generic_Dictionary_string__TEntity__o **p_lookup; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 _27_System_Collections_Generic_IEnumerator_TEntity; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x22
  __int64 v25; // x1
  Il2CppObject *v26; // x23
  __int64 v27; // x1
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4CBBDD8 & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CBBDD8 = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C41A9C();
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_34BAF8C *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v5;
  p_lookup = &this->fields._lookup;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_lookup, (int32_t)v5, v7, v8);
  v10 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v10 )
    sub_1C6BC60(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v10,
                 (const MethodInfo_339243C *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1C6BC60(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v16 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C41A9C();
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)v20 - 1) != _27_System_Collections_Generic_IEnumerator_TEntity )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_20;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_20:
      v21 = sub_1C41D90(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v24 = (Il2CppObject *)v22;
    if ( !v22 )
      sub_1C6BC60(0, v23);
    v26 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 376LL))(
                            v22,
                            *(_QWORD *)(*(_QWORD *)v22 + 384LL));
    if ( v26 )
    {
      if ( !*p_lookup )
        sub_1C6BC60(0, v25);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v26,
              (const MethodInfo_34BBB30 *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1C6BC60(0, v27);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v26,
          v24,
          (const MethodInfo_34BB93C *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
      }
    }
  }
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
        goto LABEL_32;
    }
    v31 = (__int64)&v28->vtable[*v30];
  }
  else
  {
LABEL_32:
    v31 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
}


bool DataMasterBase_object__object__object___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_33FCBEC *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int monitor; // w8
  Il2CppObject *v9; // x21
  int i; // w23
  Il2CppObject *v11; // x22
  __int64 v12; // x0

  if ( (byte_4CBBDDA & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBBDDA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                     this,
                                     obj,
                                     this->klass->vtable._15_getList.method)) == 0 )
  {
LABEL_15:
    sub_1C6BC60(Instance, v7);
  }
  monitor = (int)Instance[1].monitor;
  v9 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1C6BC68(Instance);
      v11 = (Il2CppObject *)*((_QWORD *)&v9[2].klass + i);
      if ( !v11 )
        goto LABEL_15;
      v12 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v11->klass->vtable[4].methodPtr)(
              v11,
              v11->klass->vtable[4].method);
      if ( !v12 )
        return v12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__object___RemoveEntity(
                                   this,
                                   v11,
                                   (const MethodInfo_33FCD08 *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
      monitor = (int)v9[1].monitor;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v12) = 1;
  return v12;
}


void DataMasterBase_object__object__object___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FDDB8 *method)
{
  ;
}


DataEntityBase_array *DataMasterBase_object__object__object___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FCE34 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4CBBDDB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_4CBBDDB = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_316A620 *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *DataMasterBase_object__object__object___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FCEA0 *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_4CBBDDC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_1C6BA08(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_4CBBDDC = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C6BC54(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_60191144(
    v4,
    list,
    (const MethodInfo_39671A8 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *DataMasterBase_object__object__object___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *key,
        const MethodInfo_33FDB94 *method)
{
  System_String_o *v5; // x0

  if ( !key )
    sub_1C6BC60(this, 0);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))key->klass->vtable[3].methodPtr)(
                            key,
                            key->klass->vtable[3].method);
  return DataMasterBase_object__object__object___getEntityFromKey(
           this,
           v5,
           (const MethodInfo_33FCF1C *)method->klass->rgctx_data->_57_DataMasterBase_TMaster__TEntity__PKType__TryGetEntityFromId);
}


System_Type_o *DataMasterBase_object__object__object___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FDD54 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v4; // x0

  if ( (byte_4CBBDDF & 1) == 0 )
  {
    sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CBBDDF = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v4, 0);
}


Il2CppObject *DataMasterBase_object__object__object___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FDC30 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3391E64 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3391E64 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_3391EF4 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1C6BC60(list, method);
  }
  return 0;
}


void DataMasterBase_object__object__object___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_33FD3E8 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x22
  System_Collections_IList_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  System_NotImplementedException_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x22
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  System_Collections_IEnumerator_c **v23; // x10
  __int64 v24; // x0
  __int64 v25; // x23
  __int64 _29_TEntity; // x1
  __int64 v27; // x23
  __int64 v28; // x24
  __int64 v29; // x0
  __int64 v30; // x25
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x22
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  struct System_Collections_IList_o *newItems; // x22
  System_Collections_IList_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x22
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  System_Collections_IEnumerator_c **v53; // x10
  __int64 v54; // x0
  __int64 v55; // x23
  __int64 v56; // x1
  __int64 v57; // x25
  __int64 v58; // x0
  Il2CppObject *v59; // x23
  System_Collections_Generic_Dictionary_object__object__o *v60; // x24
  Il2CppObject *v61; // x0
  __int64 v62; // x0
  __int64 v63; // x8
  __int64 v64; // x22
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  v6 = this;
  if ( (byte_4CBBDDE & 1) == 0 )
  {
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerable_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    byte_4CBBDDE = 1;
  }
  if ( v6->fields._lookup )
  {
    if ( !e )
      sub_1C6BC60(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v13 = sub_1C6BA1C(&System_NotImplementedException_TypeInfo);
          v14 = (System_NotImplementedException_o *)sub_1C6BC54(v13);
          System_NotImplementedException___ctor(v14, 0);
          sub_1C6BB30(v14, method);
        }
        DataMasterBase_object__object__object___CreateLookupTable(
          v6,
          (const MethodInfo_33FC738 *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
      }
    }
    else
    {
      oldItems = e->fields._oldItems;
      if ( oldItems )
      {
        klass = oldItems->klass;
        v10 = *(unsigned __int16 *)&oldItems->klass->_2.rank;
        if ( *(_WORD *)&oldItems->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v10;
            p_offset += 4;
            if ( !v10 )
              goto LABEL_11;
          }
          v12 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_11:
          v12 = sub_1C41D90(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v16 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v12)(
                oldItems,
                *(_QWORD *)(v12 + 8));
        if ( !v16 )
          sub_1C6BC60(0, v15);
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v18;
              v19 += 4;
              if ( !v18 )
                goto LABEL_21;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_21:
            v20 = sub_1C41D90(v16, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v16;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
          {
            v23 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v22;
              v23 += 2;
              if ( !v22 )
                goto LABEL_28;
            }
            v24 = v21 + 16LL * (*(_DWORD *)v23 + 1) + 312;
          }
          else
          {
LABEL_28:
            v24 = sub_1C41D90(v16, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C41A9C();
          v27 = sub_1C6BB44(v25, _29_TEntity);
          v28 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
            v28 = sub_1C41A9C();
          if ( v27 )
          {
            v29 = sub_1C6BB44(v27, v28);
            v30 = v29;
            if ( !v29 )
            {
              sub_1C6BFFC(v27);
LABEL_89:
              sub_1C6BFFC(v28);
LABEL_90:
              sub_1C6BC60(v32, v33);
            }
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 376LL))(
                   v29,
                   *(_QWORD *)(*(_QWORD *)v29 + 384LL)) )
            {
              lookup = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
              v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 376LL))(
                                      v30,
                                      *(_QWORD *)(*(_QWORD *)v30 + 384LL));
              v33 = v32;
              if ( !lookup )
                goto LABEL_90;
              System_Collections_Generic_Dictionary_object__object___Remove(
                lookup,
                v32,
                (const MethodInfo_34BCE38 *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v34 = sub_1C6BB44(v16, System_IDisposable_TypeInfo);
        if ( v34 )
        {
          v35 = *(_QWORD *)v34;
          v36 = v34;
          v37 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
          {
            v38 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
            {
              --v37;
              v38 += 4;
              if ( !v37 )
                goto LABEL_44;
            }
            v39 = v35 + 16LL * *v38 + 312;
          }
          else
          {
LABEL_44:
            v39 = sub_1C41D90(v34, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v41 = newItems->klass;
        v42 = *(unsigned __int16 *)&newItems->klass->_2.rank;
        if ( *(_WORD *)&newItems->klass->_2.rank )
        {
          v43 = &v41->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v43 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_52;
          }
          v44 = (__int64)&v41->vtable[*v43];
        }
        else
        {
LABEL_52:
          v44 = sub_1C41D90(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v46 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v44)(
                newItems,
                *(_QWORD *)(v44 + 8));
        if ( !v46 )
          sub_1C6BC60(0, v45);
        while ( 1 )
        {
          v47 = *(_QWORD *)v46;
          v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
          {
            v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v48;
              v49 += 4;
              if ( !v48 )
                goto LABEL_59;
            }
            v50 = v47 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_59:
            v50 = sub_1C41D90(v46, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
            break;
          v51 = *(_QWORD *)v46;
          v52 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
          {
            v53 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *(v53 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v52;
              v53 += 2;
              if ( !v52 )
                goto LABEL_66;
            }
            v54 = v51 + 16LL * (*(_DWORD *)v53 + 1) + 312;
          }
          else
          {
LABEL_66:
            v54 = sub_1C41D90(v46, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
          v56 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
            v56 = sub_1C41A9C();
          v28 = sub_1C6BB44(v55, v56);
          v57 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
            v57 = sub_1C41A9C();
          if ( v28 )
          {
            v58 = sub_1C6BB44(v28, v57);
            v59 = (Il2CppObject *)v58;
            if ( !v58 )
              goto LABEL_89;
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v58 + 376LL))(
                   v58,
                   *(_QWORD *)(*(_QWORD *)v58 + 384LL)) )
            {
              v60 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
              v61 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v59->klass->vtable[4].methodPtr)(
                                      v59,
                                      v59->klass->vtable[4].method);
              if ( !v60 )
                sub_1C6BC60(v61, v61);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v60,
                v61,
                v59,
                (const MethodInfo_34BB928 *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v62 = sub_1C6BB44(v46, System_IDisposable_TypeInfo);
        if ( v62 )
        {
          v63 = *(_QWORD *)v62;
          v64 = v62;
          v65 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
          {
            v66 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
            {
              --v65;
              v66 += 4;
              if ( !v65 )
                goto LABEL_82;
            }
            v67 = v63 + 16LL * *v66 + 312;
          }
          else
          {
LABEL_82:
            v67 = sub_1C41D90(v62, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
        }
      }
    }
  }
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, const MethodInfo *))v6->klass->vtable._16_OnListChangedImplementation.methodPtr)(
    v6,
    e,
    v6->klass->vtable._16_OnListChangedImplementation.method);
}


void DataMasterBase_object__object__object___OnListChangedImplementation(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_33FDB90 *method)
{
  ;
}


bool DataMasterBase_object__object__object___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_33FCD08 *method)
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
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C41A9C();
  v7 = sub_1C6BC54(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  DataMasterBase___c__DisplayClass23_0_object__object__object____ctor(
    (DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *)v7,
    (const MethodInfo_330BB30 *)method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor);
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
                                                           entity,
                                                           entity->klass->vtable[4].method);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v8, v10, v11);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C41A9C();
  v14 = (System_Predicate_object__o *)sub_1C6BC54(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_399E3D4 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v14,
                   (const MethodInfo_31C93FC *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_339282C *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1C6BC60(v8, v9);
  }
  return Index_object >= 0;
}


bool DataMasterBase_object__object__object___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_33FC570 *method)
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
  if ( (byte_4CBBDD7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBBDD7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_7;
  if ( !this )
    goto LABEL_7;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._6_Clear.methodPtr)(
    this,
    this->klass->vtable._6_Clear.method);
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
                                                         (const MethodInfo_33FBC9C *)method->klass->rgctx_data->_22_DataMasterBase_TMaster__TEntity__PKType__abstractGetList);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v15,
    (const MethodInfo_31C8270 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_7:
    sub_1C6BC60(Instance, v13);
  ++this->fields.revision;
  return 1;
}


bool DataMasterBase_object__object__object___ReplacedForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_33FC664 *method)
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
    sub_1C6BC60(0, objOrBytes);
  value = lenght.fields.value;
  v10 = *(_QWORD *)&lenght.fields.hasValue;
  v11 = start.fields.value;
  v12 = *(_QWORD *)&start.fields.hasValue;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._6_Clear.methodPtr)(
    this,
    this->klass->vtable._6_Clear.method);
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
                                                                   (const MethodInfo_33FBF8C *)method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    ListForThread,
    (const MethodInfo_31C8270 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool DataMasterBase_object__object__object___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Il2CppObject *key,
        const MethodInfo_33FDBE0 *method)
{
  System_String_o *v7; // x2

  if ( !key )
    sub_1C6BC60(this, entity);
  v7 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))key->klass->vtable[3].methodPtr)(
                            key,
                            key->klass->vtable[3].method);
  return DataMasterBase_object__object__object___TryGetEntityFromId(
           this,
           entity,
           v7,
           (const MethodInfo_33FD244 *)method->klass->rgctx_data->_58_TEntity);
}


bool DataMasterBase_object__object__object___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_33FD244 *method)
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
      (const MethodInfo_33FC738 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C6BC60(this, result);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C41A9C();
  klass = lookup->klass;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_10;
    }
    v13 = (__int64)(&klass->vtable._1_Finalize + *p_offset);
  }
  else
  {
LABEL_10:
    v13 = sub_1C41D90(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, Il2CppObject **, _QWORD))v13)(
           lookup,
           key,
           result,
           *(_QWORD *)(v13 + 8));
}


bool DataMasterBase_object__object__object___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_33FDCB0 *method)
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
    (const MethodInfo_3391E64 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C6BC60(list, entity);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_3391EF4 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1C6B9AC((CGThumbnailListItem_o *)entity, (int32_t)Item, v9, v10);
  return Count > 0;
}


bool DataMasterBase_object__object__object___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_33FCA74 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  unsigned __int64 v9; // x23
  unsigned int monitor; // w8

  if ( (byte_4CBBDD9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CBBDD9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                     this,
                                     obj,
                                     this->klass->vtable._15_getList.method)) == 0 )
  {
    sub_1C6BC60(Instance, v7);
  }
  v8 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v9 = 0;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1C6BC68(Instance);
    Instance = (Il2CppObject *)DataMasterBase_object__object__object___UpdatedEntity(
                                 this,
                                 *((Il2CppObject **)&v8[2].klass + v9),
                                 (const MethodInfo_33FCB6C *)method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    monitor = (unsigned int)v8[1].monitor;
    if ( (__int64)++v9 >= (int)monitor )
    {
      ++this->fields.revision;
      return 1;
    }
  }
  return 0;
}


bool DataMasterBase_object__object__object___UpdatedEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_33FCB6C *method)
{
  if ( !entity )
    sub_1C6BC60(this, 0);
  if ( !((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
          entity,
          entity->klass->vtable[4].method) )
    return 0;
  DataMasterBase_object__object__object___RemoveEntity(
    this,
    entity,
    (const MethodInfo_33FCD08 *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
  DataMasterBase_object__object__object___AddEntity(
    this,
    entity,
    (const MethodInfo_33FCCE4 *)method->klass->rgctx_data->_34_DataMasterBase_TMaster__TEntity__PKType__AddEntity);
  return 1;
}


System_Object_array *DataMasterBase_object__object__object___abstractGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_33FBC9C *method)
{
  bool hasValue; // w23
  bool v7; // w24
  long double v10; // q0
  MiniMessagePack_MiniMessagePacker_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int64_t Value; // x0
  __int64 v15; // x1
  const MethodInfo_392973C *v16; // x2
  System_Byte_array *v17; // x21
  int32_t v19; // w24
  il2cpp_array_size_t max_length; // x3
  System_Object_array *List; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Nullable_long__o v24; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v25; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v26; // 0:x0.16
  System_Nullable_long__o v27; // 0:x0.16

  v25 = start;
  v24 = lenght;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  if ( (byte_4CBBDD5 & 1) == 0 )
  {
    sub_1C6BA08(&byte___TypeInfo);
    sub_1C6BA08(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_long__get_HasValue__);
    sub_1C6BA08(&Method_System_Nullable_long__get_Value__);
    byte_4CBBDD5 = 1;
  }
  if ( !sub_1C6BB44(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method,
                                    v10);
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C6BC54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  this->fields.seriazlier = v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v11, v12, v13);
  if ( objOrBytes )
  {
    Value = sub_1C6BB44(objOrBytes, byte___TypeInfo);
    v17 = (System_Byte_array *)Value;
    if ( !Value )
    {
      v10 = sub_1C6BFFC(objOrBytes);
      return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                      this,
                                      objOrBytes,
                                      this->klass->vtable._15_getList.method,
                                      v10);
    }
  }
  else
  {
    v17 = 0;
  }
  if ( v7 )
  {
    v26.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v26.fields.hasValue = &v25;
    Value = System_Nullable_long___get_Value(v26, v16);
    hasValue = v24.fields.hasValue;
    v19 = Value;
  }
  else
  {
    v19 = 0;
  }
  if ( hasValue )
  {
    v27.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v27.fields.hasValue = &v24;
    LODWORD(max_length) = System_Nullable_long___get_Value(v27, v16);
  }
  else
  {
    if ( !v17 )
      sub_1C6BC60(Value, v15);
    max_length = v17->max_length;
  }
  List = DataMasterBase_object__object__object___directGetList(
           this,
           v17,
           v19,
           max_length,
           (const MethodInfo_33FBA24 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seriazlier, 0, v22, v23);
  return List;
}


System_Object_array *DataMasterBase_object__object__object___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_33FBF8C *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x0
  System_Byte_array *v13; // x22
  MiniMessagePack_MiniMessagePacker_o *v14; // x26
  CGThumbnailListItem_o *p_seriazlier; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_392973C *v22; // x2
  int32_t Value; // w24
  il2cpp_array_size_t max_length; // x3
  int64_t List; // x0
  __int64 v27; // x1
  const MethodInfo_392973C *v28; // x2
  const MethodInfo *v29; // x3
  System_Object_array *v30; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v32; // w24
  il2cpp_array_size_t v33; // x3
  Il2CppObject *v34; // x1
  System_Nullable_long__o v35; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v36; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v37; // 0:x0.16
  System_Nullable_long__o v38; // 0:x0.16
  System_Nullable_long__o v39; // 0:x0.16
  System_Nullable_long__o v40; // 0:x0.16

  v36 = start;
  v35 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4CBBDD6 & 1) == 0 )
  {
    sub_1C6BA08(&byte___TypeInfo);
    sub_1C6BA08(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_long__get_HasValue__);
    sub_1C6BA08(&Method_System_Nullable_long__get_Value__);
    byte_4CBBDD6 = 1;
  }
  v12 = sub_1C6BB44(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method);
  v13 = (System_Byte_array *)v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C6BC54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0);
  this->fields.seriazlier = v14;
  p_seriazlier = (CGThumbnailListItem_o *)&this->fields.seriazlier;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v14, v16, v17);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1C6BC60(0, v18);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1C6B9AC((CGThumbnailListItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v19, v20);
  if ( v9 )
  {
    v37.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v37.fields.hasValue = &v36;
    hasValue = v35.fields.hasValue;
    Value = System_Nullable_long___get_Value(v37, v22);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v38.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v38.fields.hasValue = &v35;
    LODWORD(max_length) = System_Nullable_long___get_Value(v38, v22);
  }
  else
  {
    max_length = v13->max_length;
  }
  List = (int64_t)DataMasterBase_object__object__object___directGetList(
                    this,
                    v13,
                    Value,
                    max_length,
                    (const MethodInfo_33FBA24 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v30 = (System_Object_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v36.fields.hasValue )
    {
      v39.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v39.fields.hasValue = &v36;
      List = System_Nullable_long___get_Value(v39, v28);
      v32 = List;
    }
    else
    {
      v32 = 0;
    }
    if ( v35.fields.hasValue )
    {
      v40.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v40.fields.hasValue = &v35;
      List = System_Nullable_long___get_Value(v40, v28);
      LODWORD(v33) = List;
      if ( klass )
      {
LABEL_18:
        v34 = MiniMessagePack_MiniMessagePacker__Unpack(klass, v13, v32, v33, 0);
        v30 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                       this,
                                       v34,
                                       this->klass->vtable._15_getList.method);
        goto LABEL_19;
      }
    }
    else
    {
      v33 = v13->max_length;
      if ( klass )
        goto LABEL_18;
    }
    sub_1C6BC60(List, v27);
  }
LABEL_19:
  p_seriazlier->klass = 0;
  sub_1C6B9AC(p_seriazlier, 0, (int32_t)v28, v29);
  return v30;
}


System_String_o *DataMasterBase_object__object__object___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_33FD004 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  int max_length; // w8
  __int64 v6; // x22
  CGThumbnailListItem_o *p_sb; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *sb; // t1
  System_Text_StringBuilder_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  unsigned int v13; // w8
  unsigned __int64 v14; // x21

  v4 = this;
  if ( (byte_4CBBDDD & 1) == 0 )
  {
    sub_1C6BA08(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CBBDDD = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v6 = (unsigned int)(max_length - 1);
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.sb;
  p_sb = (CGThumbnailListItem_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C6BC54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_64044104(v10, 128, 0);
    p_sb->klass = (CGThumbnailListItem_c *)v10;
    sub_1C6B9AC(p_sb, (int32_t)v10, v11, v12);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0);
  this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
  v13 = args->max_length;
  v14 = 0;
  do
  {
    if ( v14 >= v13 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_64053336((System_Text_StringBuilder_o *)this, args->m_Items[v14], 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_64053080((System_Text_StringBuilder_o *)this, 0x3Au, 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v13 = args->max_length;
    ++v14;
  }
  while ( v6 != v14 );
  if ( (unsigned int)v6 >= v13 )
LABEL_20:
    sub_1C6BC68(this);
  if ( !this
    || (System_Text_StringBuilder__Append_64053336((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0) )
  {
LABEL_19:
    sub_1C6BC60(this, args);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                              this,
                              this->klass->vtable._3_ToString.method);
}


System_Object_array *DataMasterBase_object__object__object___directGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo_33FBA24 *method)
{
  System_IO_MemoryStream_o *v10; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x23
  DataIO_Runtime_Deserializer_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_IEnumerable_o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v23; // x0
  System_FormatException_o *v24; // x21
  System_String_o *v25; // x0

  if ( (byte_4CBBDD4 & 1) == 0 )
  {
    sub_1C6BA08(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_IO_MemoryStream_TypeInfo);
    byte_4CBBDD4 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_1C6BC54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64787972(v10, bytes, start, length, 0);
  seriazlier = this->fields.seriazlier;
  v12 = (DataIO_Runtime_Deserializer_o *)sub_1C6BC54(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v12, seriazlier, 0);
  if ( !v12 )
    sub_1C6BC60(v13, v14);
  v15 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v12,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v10,
                                              0);
  if ( !v15 )
  {
    v23 = sub_1C6BA1C(&System_FormatException_TypeInfo);
    v24 = (System_FormatException_o *)sub_1C6BC54(v23);
    v25 = (System_String_o *)sub_1C6BA1C(&StringLiteral_19868/*"getList family cannot return null."*/);
    System_FormatException___ctor_65390536(v24, v25, 0);
    sub_1C6BB30(v24, method);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v15,
                                                               (const MethodInfo_316A620 *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_317B248 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
  if ( v10 )
  {
    klass = v10->klass;
    v19 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_10;
      }
      v21 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v21 = sub_1C41D90(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v10, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *DataMasterBase_object__object__object___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_33FCF1C *method)
{
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  Il2CppObject *v13; // [xsp+8h] [xbp-28h] BYREF

  v13 = 0;
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_33FC738 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C6BC60(this, key);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C41A9C();
  klass = lookup->klass;
  v9 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)(&klass->vtable._1_Finalize + *p_offset);
  }
  else
  {
LABEL_10:
    v11 = sub_1C41D90(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, Il2CppObject **, _QWORD))v11)(
          lookup,
          key,
          &v13,
          *(_QWORD *)(v11 + 8))
      & 1) != 0 )
    return v13;
  else
    return 0;
}


System_Collections_ObjectModel_ObservableCollection_TEntity__o *DataMasterBase_object__object__object___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FCE2C *method)
{
  return this->fields.list;
}


System_Object_array *DataMasterBase_object__object__object___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FCE18 *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_317B248 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *DataMasterBase_object__object__object___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_306077C *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  long double v6; // q0
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v8; // x8
  System_Collections_ObjectModel_Collection_T__o *v9; // x21
  unsigned __int64 v10; // x22
  CGThumbnailListItem_o *p_monitor; // x23
  long double v12; // q0
  System_Collections_ObjectModel_Collection_T__o *v13; // x24
  Il2CppClass *_1_T; // x1
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  long double v18; // q0
  __int64 v19; // x25
  Il2CppClass *v20; // x24
  CGThumbnailListItem_c *v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x0
  const MethodInfo_30608F8 *v23; // x1

  if ( !method->rgctx_data )
    sub_1C41AF8(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3391E64 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C41A9C(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C6BAB0(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1C6BC60(list, method);
  v9 = list;
  v10 = 0;
  p_monitor = (CGThumbnailListItem_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_3391E64 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3391EF4 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C41A9C(v12);
    v15 = sub_1C6BB44(v13, _1_T);
    v19 = v15;
    v20 = method->rgctx_data->_1_T;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
    {
      v15 = sub_1C41A9C(v18);
      v20 = (Il2CppClass *)v15;
    }
    if ( v19 )
    {
      v15 = sub_1C6BB44(v19, v20);
      v21 = (CGThumbnailListItem_c *)v15;
      if ( !v15 )
      {
        sub_1C6BFFC(v19);
        return DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(v22, v23);
      }
    }
    else
    {
      v21 = 0;
    }
    if ( v10 >= LODWORD(v9[1].klass) )
      sub_1C6BC68(v15);
    p_monitor->klass = v21;
    sub_1C6B9AC(p_monitor, (int32_t)v21, v16, v17);
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
    if ( !v8 )
      goto LABEL_21;
  }
  return (System_Object_array *)v9;
}


System_Object_array *DataMasterBase_object__object__object___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_33FB9B8 *method)
{
  if ( (byte_4CBBDD3 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    byte_4CBBDD3 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_31AB018 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool DataMasterBase_object__object__object___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FB978 *method)
{
  return this->fields._lookup != 0;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *DataMasterBase_object__object__object___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33FB988 *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *result; // x0

  result = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  if ( !result )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_33FC738 *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
    return (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  }
  return result;
}


bool DataMasterBase_object__object__object___isEntityExistsFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_33FD170 *method)
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

  Key = DataMasterBase_object__object__object___createKey(this, args, (const MethodInfo_33FD004 *)method);
  lookup = this->fields._lookup;
  v8 = Key;
  if ( !lookup )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_33FC738 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C6BC60(Key, v6);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C41A9C();
  klass = lookup->klass;
  v11 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
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
    v13 = sub_1C41D90(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
           lookup,
           v8,
           *(_QWORD *)(v13 + 8));
}


bool DataMasterBase_object__object__object___isEntityExistsFromId_54514460(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_33FD31C *method)
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
      (const MethodInfo_33FC738 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C6BC60(this, key);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C41A9C();
  klass = lookup->klass;
  v9 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_10;
    }
    v11 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v11 = sub_1C41D90(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v11)(
           lookup,
           key,
           *(_QWORD *)(v11 + 8));
}
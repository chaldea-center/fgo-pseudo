void DataMasterBase_object__object__object____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_33A3834 *method)
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

  if ( (byte_4C48882 & 1) == 0 )
  {
    sub_1C37058(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_4C48882 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C8776C();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C372A4(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_3905B9C *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.list, (int32_t)v7, v8, v9);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_30E7EC4 *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v11 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1C372A4(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v13 = v11;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0);
  if ( !list )
    sub_1C372B4(v14);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, const MethodInfo *))list->klass->vtable._39_add_CollectionChanged.methodPtr)(
    list,
    v13,
    list->klass->vtable._39_add_CollectionChanged.method);
}


void DataMasterBase_object__object__object___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_33A4CA8 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_333A79C *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void DataMasterBase_object__object__object___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A4510 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C372B4(0);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_333A8EC *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void DataMasterBase_object__object__object___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A46FC *method)
{
  __int64 _6_System_Collections_Generic_Dictionary_string__TEntity; // x0
  System_Collections_Generic_Dictionary_object__object__o *v5; // x19
  struct System_Collections_Generic_Dictionary_string__TEntity__o **p_lookup; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_ObjectModel_Collection_T__o *v9; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 _27_System_Collections_Generic_IEnumerator_TEntity; // x1
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x23
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4C48888 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C48888 = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C8776C();
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3462C80 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v5;
  p_lookup = &this->fields._lookup;
  sub_1C36FFC((CGThumbnailListItem_o *)p_lookup, (int32_t)v5, v7, v8);
  v9 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v9 )
    sub_1C372B4(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v9,
                 (const MethodInfo_333AAE8 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C8776C();
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)v18 - 1) != _27_System_Collections_Generic_IEnumerator_TEntity )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_20;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_20:
      v19 = sub_1C87870(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v21 = (Il2CppObject *)v20;
    if ( !v20 )
      sub_1C372B4(0);
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 376LL))(
                            v20,
                            *(_QWORD *)(*(_QWORD *)v20 + 384LL));
    if ( v22 )
    {
      if ( !*p_lookup )
        sub_1C372B4(0);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v22,
              (const MethodInfo_3463824 *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1C372B4(0);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v22,
          v21,
          (const MethodInfo_3463630 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
      }
    }
  }
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_32;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_32:
    v26 = sub_1C87870(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


bool DataMasterBase_object__object__object___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_33A4BB0 *method)
{
  Il2CppObject *Instance; // x0
  int monitor; // w8
  Il2CppObject *v8; // x21
  int i; // w23
  Il2CppObject *v10; // x22
  __int64 v11; // x0

  if ( (byte_4C4888A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C4888A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                     this,
                                     obj,
                                     this->klass->vtable._15_getList.method)) == 0 )
  {
LABEL_15:
    sub_1C372B4(Instance);
  }
  monitor = (int)Instance[1].monitor;
  v8 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1C372BC(Instance);
      v10 = (Il2CppObject *)*((_QWORD *)&v8[2].klass + i);
      if ( !v10 )
        goto LABEL_15;
      v11 = ((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v10->klass->vtable[4].methodPtr)(
              v10,
              v10->klass->vtable[4].method);
      if ( !v11 )
        return v11;
      Instance = (Il2CppObject *)DataMasterBase_object__object__object___RemoveEntity(
                                   this,
                                   v10,
                                   (const MethodInfo_33A4CCC *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
      monitor = (int)v8[1].monitor;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v11) = 1;
  return v11;
}


void DataMasterBase_object__object__object___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A5D7C *method)
{
  ;
}


DataEntityBase_array *DataMasterBase_object__object__object___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A4DF8 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4C4888B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_4C4888B = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *DataMasterBase_object__object__object___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A4E64 *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_4C4888C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_1C37058(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_4C4888C = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C372A4(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_59792300(
    v4,
    list,
    (const MethodInfo_3905BAC *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *DataMasterBase_object__object__object___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *key,
        const MethodInfo_33A5B58 *method)
{
  System_String_o *v5; // x0

  if ( !key )
    sub_1C372B4(this);
  v5 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))key->klass->vtable[3].methodPtr)(
                            key,
                            key->klass->vtable[3].method);
  return DataMasterBase_object__object__object___getEntityFromKey(
           this,
           v5,
           (const MethodInfo_33A4EE0 *)method->klass->rgctx_data->_57_DataMasterBase_TMaster__TEntity__PKType__TryGetEntityFromId);
}


System_Type_o *DataMasterBase_object__object__object___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A5D18 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v4; // x0

  if ( (byte_4C4888F & 1) == 0 )
  {
    sub_1C37058(&System_Type_TypeInfo);
    byte_4C4888F = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v4, 0);
}


Il2CppObject *DataMasterBase_object__object__object___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A5BF4 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_333A510 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_333A510 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_333A5A0 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1C372B4(list);
  }
  return 0;
}


void DataMasterBase_object__object__object___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_33A53AC *method)
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
  __int64 v15; // x22
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  System_Collections_IEnumerator_c **v22; // x10
  __int64 v23; // x0
  __int64 v24; // x23
  __int64 _29_TEntity; // x1
  __int64 v26; // x23
  __int64 v27; // x24
  __int64 v28; // x0
  __int64 v29; // x25
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v31; // x0
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x22
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  struct System_Collections_IList_o *newItems; // x22
  System_Collections_IList_c *v39; // x8
  __int64 v40; // x9
  int32_t *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x22
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  System_Collections_IEnumerator_c **v50; // x10
  __int64 v51; // x0
  __int64 v52; // x23
  __int64 v53; // x1
  __int64 v54; // x25
  __int64 v55; // x0
  Il2CppObject *v56; // x23
  System_Collections_Generic_Dictionary_object__object__o *v57; // x24
  Il2CppObject *v58; // x0
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x22
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0

  v6 = this;
  if ( (byte_4C4888E & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerable_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    byte_4C4888E = 1;
  }
  if ( v6->fields._lookup )
  {
    if ( !e )
      sub_1C372B4(this);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v13 = sub_1C3706C(&System_NotImplementedException_TypeInfo);
          v14 = (System_NotImplementedException_o *)sub_1C372A4(v13);
          System_NotImplementedException___ctor(v14, 0);
          sub_1C37180(v14, method);
        }
        DataMasterBase_object__object__object___CreateLookupTable(
          v6,
          (const MethodInfo_33A46FC *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
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
          v12 = sub_1C87870(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v15 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v12)(
                oldItems,
                *(_QWORD *)(v12 + 8));
        if ( !v15 )
          sub_1C372B4(0);
        while ( 1 )
        {
          v16 = *(_QWORD *)v15;
          v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
          {
            v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v17;
              v18 += 4;
              if ( !v17 )
                goto LABEL_21;
            }
            v19 = v16 + 16LL * *v18 + 312;
          }
          else
          {
LABEL_21:
            v19 = sub_1C87870(v15, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
            break;
          v20 = *(_QWORD *)v15;
          v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
          {
            v22 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v20 + 176) + 8LL);
            while ( *(v22 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v21;
              v22 += 2;
              if ( !v21 )
                goto LABEL_28;
            }
            v23 = v20 + 16LL * (*(_DWORD *)v22 + 1) + 312;
          }
          else
          {
LABEL_28:
            v23 = sub_1C87870(v15, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C8776C();
          v26 = sub_1C37194(v24, _29_TEntity);
          v27 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v27 + 309) & 1) == 0 )
            v27 = sub_1C8776C();
          if ( v26 )
          {
            v28 = sub_1C37194(v26, v27);
            v29 = v28;
            if ( !v28 )
            {
              sub_1C37574(v26);
LABEL_89:
              sub_1C37574(v27);
LABEL_90:
              sub_1C372B4(v31);
            }
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 376LL))(
                   v28,
                   *(_QWORD *)(*(_QWORD *)v28 + 384LL)) )
            {
              lookup = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
              v31 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 376LL))(
                                      v29,
                                      *(_QWORD *)(*(_QWORD *)v29 + 384LL));
              if ( !lookup )
                goto LABEL_90;
              System_Collections_Generic_Dictionary_object__object___Remove(
                lookup,
                v31,
                (const MethodInfo_3464B2C *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v32 = sub_1C37194(v15, System_IDisposable_TypeInfo);
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
                goto LABEL_44;
            }
            v37 = v33 + 16LL * *v36 + 312;
          }
          else
          {
LABEL_44:
            v37 = sub_1C87870(v32, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v37)(v34, *(_QWORD *)(v37 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v39 = newItems->klass;
        v40 = *(unsigned __int16 *)&newItems->klass->_2.rank;
        if ( *(_WORD *)&newItems->klass->_2.rank )
        {
          v41 = &v39->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v41 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v40;
            v41 += 4;
            if ( !v40 )
              goto LABEL_52;
          }
          v42 = (__int64)&v39->vtable[*v41];
        }
        else
        {
LABEL_52:
          v42 = sub_1C87870(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v43 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v42)(
                newItems,
                *(_QWORD *)(v42 + 8));
        if ( !v43 )
          sub_1C372B4(0);
        while ( 1 )
        {
          v44 = *(_QWORD *)v43;
          v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
          {
            v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v45;
              v46 += 4;
              if ( !v45 )
                goto LABEL_59;
            }
            v47 = v44 + 16LL * *v46 + 312;
          }
          else
          {
LABEL_59:
            v47 = sub_1C87870(v43, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
            break;
          v48 = *(_QWORD *)v43;
          v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
          {
            v50 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *(v50 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v49;
              v50 += 2;
              if ( !v49 )
                goto LABEL_66;
            }
            v51 = v48 + 16LL * (*(_DWORD *)v50 + 1) + 312;
          }
          else
          {
LABEL_66:
            v51 = sub_1C87870(v43, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
          v53 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v53 + 309) & 1) == 0 )
            v53 = sub_1C8776C();
          v27 = sub_1C37194(v52, v53);
          v54 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
            v54 = sub_1C8776C();
          if ( v27 )
          {
            v55 = sub_1C37194(v27, v54);
            v56 = (Il2CppObject *)v55;
            if ( !v55 )
              goto LABEL_89;
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 376LL))(
                   v55,
                   *(_QWORD *)(*(_QWORD *)v55 + 384LL)) )
            {
              v57 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
              v58 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v56->klass->vtable[4].methodPtr)(
                                      v56,
                                      v56->klass->vtable[4].method);
              if ( !v57 )
                sub_1C372B4(v58);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v57,
                v58,
                v56,
                (const MethodInfo_346361C *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v59 = sub_1C37194(v43, System_IDisposable_TypeInfo);
        if ( v59 )
        {
          v60 = *(_QWORD *)v59;
          v61 = v59;
          v62 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
          {
            v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
            {
              --v62;
              v63 += 4;
              if ( !v62 )
                goto LABEL_82;
            }
            v64 = v60 + 16LL * *v63 + 312;
          }
          else
          {
LABEL_82:
            v64 = sub_1C87870(v59, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
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
        const MethodInfo_33A5B54 *method)
{
  ;
}


bool DataMasterBase_object__object__object___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_33A4CCC *method)
{
  __int64 _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType; // x8
  __int64 v7; // x21
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x22
  __int64 _39_System_Predicate_TEntity; // x0
  System_Predicate_object__o *v13; // x23
  int32_t Index_object; // w21

  _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = (__int64)method->klass->rgctx_data->_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType_;
  if ( (*(_BYTE *)(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType + 309) & 1) == 0 )
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C8776C();
  v7 = sub_1C372A4(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  DataMasterBase___c__DisplayClass23_0_object__object__object____ctor(
    (DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *)v7,
    (const MethodInfo_32B7420 *)method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor);
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
                                                           entity,
                                                           entity->klass->vtable[4].method);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v8, v9, v10);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C8776C();
  v13 = (System_Predicate_object__o *)sub_1C372A4(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_3913660 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v13,
                   (const MethodInfo_31754A8 *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_333AED8 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1C372B4(v8);
  }
  return Index_object >= 0;
}


bool DataMasterBase_object__object__object___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_33A4534 *method)
{
  int64_t value; // x21
  __int64 v7; // x22
  int64_t v8; // x23
  __int64 v9; // x24
  Il2CppObject *Instance; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x26
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  System_Nullable_long__o v16; // 0:x2.16
  System_Nullable_long__o v17; // 0:x4.16

  value = lenght.fields.value;
  v7 = *(_QWORD *)&lenght.fields.hasValue;
  v8 = start.fields.value;
  v9 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4C48887 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C48887 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_7;
  if ( !this )
    goto LABEL_7;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._6_Clear.methodPtr)(
    this,
    this->klass->vtable._6_Clear.method);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v16.fields.hasValue = v9;
  v16.fields.value = v8;
  *(_QWORD *)&v17.fields.hasValue = v7;
  v17.fields.value = value;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__object___abstractGetList(
                                                         this,
                                                         objOrBytes,
                                                         v16,
                                                         v17,
                                                         (const MethodInfo_33A3C60 *)method->klass->rgctx_data->_22_DataMasterBase_TMaster__TEntity__PKType__abstractGetList);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v14,
    (const MethodInfo_317431C *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_7:
    sub_1C372B4(Instance);
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
        const MethodInfo_33A4628 *method)
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
    sub_1C372B4(0);
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
                                                                   (const MethodInfo_33A3F50 *)method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    ListForThread,
    (const MethodInfo_317431C *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool DataMasterBase_object__object__object___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Il2CppObject *key,
        const MethodInfo_33A5BA4 *method)
{
  System_String_o *v7; // x2

  if ( !key )
    sub_1C372B4(this);
  v7 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))key->klass->vtable[3].methodPtr)(
                            key,
                            key->klass->vtable[3].method);
  return DataMasterBase_object__object__object___TryGetEntityFromId(
           this,
           entity,
           v7,
           (const MethodInfo_33A5208 *)method->klass->rgctx_data->_58_TEntity);
}


bool DataMasterBase_object__object__object___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_33A5208 *method)
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
      (const MethodInfo_33A46FC *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C372B4(this);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C8776C();
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
    v13 = sub_1C87870(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
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
        const MethodInfo_33A5C74 *method)
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
    (const MethodInfo_333A510 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C372B4(list);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_333A5A0 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1C36FFC((CGThumbnailListItem_o *)entity, (int32_t)Item, v9, v10);
  return Count > 0;
}


bool DataMasterBase_object__object__object___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_33A4A38 *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v7; // x21
  unsigned __int64 v8; // x23
  unsigned int monitor; // w8

  if ( (byte_4C48889 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C48889 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                     this,
                                     obj,
                                     this->klass->vtable._15_getList.method)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  v7 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v8 = 0;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v8 >= monitor )
      sub_1C372BC(Instance);
    Instance = (Il2CppObject *)DataMasterBase_object__object__object___UpdatedEntity(
                                 this,
                                 *((Il2CppObject **)&v7[2].klass + v8),
                                 (const MethodInfo_33A4B30 *)method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    monitor = (unsigned int)v7[1].monitor;
    if ( (__int64)++v8 >= (int)monitor )
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
        const MethodInfo_33A4B30 *method)
{
  if ( !entity )
    sub_1C372B4(this);
  if ( !((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
          entity,
          entity->klass->vtable[4].method) )
    return 0;
  DataMasterBase_object__object__object___RemoveEntity(
    this,
    entity,
    (const MethodInfo_33A4CCC *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
  DataMasterBase_object__object__object___AddEntity(
    this,
    entity,
    (const MethodInfo_33A4CA8 *)method->klass->rgctx_data->_34_DataMasterBase_TMaster__TEntity__PKType__AddEntity);
  return 1;
}


System_Object_array *DataMasterBase_object__object__object___abstractGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_33A3C60 *method)
{
  bool hasValue; // w23
  bool v7; // w24
  long double v10; // q0
  MiniMessagePack_MiniMessagePacker_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int64_t Value; // x0
  const MethodInfo_38C8F48 *v15; // x2
  System_Byte_array *v16; // x21
  int32_t v18; // w24
  il2cpp_array_size_t max_length; // x3
  System_Object_array *List; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Nullable_long__o v23; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v24; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v25; // 0:x0.16
  System_Nullable_long__o v26; // 0:x0.16

  v24 = start;
  v23 = lenght;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  if ( (byte_4C48885 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C37058(&Method_System_Nullable_long__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_long__get_Value__);
    byte_4C48885 = 1;
  }
  if ( !sub_1C37194(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method,
                                    v10);
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C372A4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  this->fields.seriazlier = v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v11, v12, v13);
  if ( objOrBytes )
  {
    Value = sub_1C37194(objOrBytes, byte___TypeInfo);
    v16 = (System_Byte_array *)Value;
    if ( !Value )
    {
      v10 = sub_1C37574(objOrBytes);
      return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                      this,
                                      objOrBytes,
                                      this->klass->vtable._15_getList.method,
                                      v10);
    }
  }
  else
  {
    v16 = 0;
  }
  if ( v7 )
  {
    v25.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v25.fields.hasValue = &v24;
    Value = System_Nullable_long___get_Value(v25, v15);
    hasValue = v23.fields.hasValue;
    v18 = Value;
  }
  else
  {
    v18 = 0;
  }
  if ( hasValue )
  {
    v26.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v26.fields.hasValue = &v23;
    LODWORD(max_length) = System_Nullable_long___get_Value(v26, v15);
  }
  else
  {
    if ( !v16 )
      sub_1C372B4(Value);
    max_length = v16->max_length;
  }
  List = DataMasterBase_object__object__object___directGetList(
           this,
           v16,
           v18,
           max_length,
           (const MethodInfo_33A39E8 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seriazlier, 0, v21, v22);
  return List;
}


System_Object_array *DataMasterBase_object__object__object___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_33A3F50 *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x0
  System_Byte_array *v13; // x22
  MiniMessagePack_MiniMessagePacker_o *v14; // x26
  CGThumbnailListItem_o *p_seriazlier; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_38C8F48 *v21; // x2
  int32_t Value; // w24
  il2cpp_array_size_t max_length; // x3
  int64_t List; // x0
  const MethodInfo_38C8F48 *v26; // x2
  const MethodInfo *v27; // x3
  System_Object_array *v28; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v30; // w24
  il2cpp_array_size_t v31; // x3
  Il2CppObject *v32; // x1
  System_Nullable_long__o v33; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v34; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v35; // 0:x0.16
  System_Nullable_long__o v36; // 0:x0.16
  System_Nullable_long__o v37; // 0:x0.16
  System_Nullable_long__o v38; // 0:x0.16

  v34 = start;
  v33 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4C48886 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    sub_1C37058(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C37058(&Method_System_Nullable_long__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_long__get_Value__);
    byte_4C48886 = 1;
  }
  v12 = sub_1C37194(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method);
  v13 = (System_Byte_array *)v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C372A4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0);
  this->fields.seriazlier = v14;
  p_seriazlier = (CGThumbnailListItem_o *)&this->fields.seriazlier;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v14, v16, v17);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1C372B4(0);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1C36FFC((CGThumbnailListItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v18, v19);
  if ( v9 )
  {
    v35.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v35.fields.hasValue = &v34;
    hasValue = v33.fields.hasValue;
    Value = System_Nullable_long___get_Value(v35, v21);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v36.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v36.fields.hasValue = &v33;
    LODWORD(max_length) = System_Nullable_long___get_Value(v36, v21);
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
                    (const MethodInfo_33A39E8 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v28 = (System_Object_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v34.fields.hasValue )
    {
      v37.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v37.fields.hasValue = &v34;
      List = System_Nullable_long___get_Value(v37, v26);
      v30 = List;
    }
    else
    {
      v30 = 0;
    }
    if ( v33.fields.hasValue )
    {
      v38.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v38.fields.hasValue = &v33;
      List = System_Nullable_long___get_Value(v38, v26);
      LODWORD(v31) = List;
      if ( klass )
      {
LABEL_18:
        v32 = MiniMessagePack_MiniMessagePacker__Unpack(klass, v13, v30, v31, 0);
        v28 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                       this,
                                       v32,
                                       this->klass->vtable._15_getList.method);
        goto LABEL_19;
      }
    }
    else
    {
      v31 = v13->max_length;
      if ( klass )
        goto LABEL_18;
    }
    sub_1C372B4(List);
  }
LABEL_19:
  p_seriazlier->klass = 0;
  sub_1C36FFC(p_seriazlier, 0, (int32_t)v26, v27);
  return v28;
}


System_String_o *DataMasterBase_object__object__object___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_33A4FC8 *method)
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
  if ( (byte_4C4888D & 1) == 0 )
  {
    sub_1C37058(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4888D = 1;
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
    v10 = (System_Text_StringBuilder_o *)sub_1C372A4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_63640072(v10, 128, 0);
    p_sb->klass = (CGThumbnailListItem_c *)v10;
    sub_1C36FFC(p_sb, (int32_t)v10, v11, v12);
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
    System_Text_StringBuilder__Append_63649304((System_Text_StringBuilder_o *)this, args->m_Items[v14], 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_63649048((System_Text_StringBuilder_o *)this, 0x3Au, 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v13 = args->max_length;
    ++v14;
  }
  while ( v6 != v14 );
  if ( (unsigned int)v6 >= v13 )
LABEL_20:
    sub_1C372BC(this);
  if ( !this
    || (System_Text_StringBuilder__Append_63649304((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0) )
  {
LABEL_19:
    sub_1C372B4(this);
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
        const MethodInfo_33A39E8 *method)
{
  System_IO_MemoryStream_o *v10; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x23
  DataIO_Runtime_Deserializer_o *v12; // x22
  __int64 v13; // x0
  System_Collections_IEnumerable_o *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v22; // x0
  System_FormatException_o *v23; // x21
  System_String_o *v24; // x0

  if ( (byte_4C48884 & 1) == 0 )
  {
    sub_1C37058(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_IO_MemoryStream_TypeInfo);
    byte_4C48884 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_1C372A4(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64384388(v10, bytes, start, length, 0);
  seriazlier = this->fields.seriazlier;
  v12 = (DataIO_Runtime_Deserializer_o *)sub_1C372A4(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v12, seriazlier, 0);
  if ( !v12 )
    sub_1C372B4(v13);
  v14 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v12,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v10,
                                              0);
  if ( !v14 )
  {
    v22 = sub_1C3706C(&System_FormatException_TypeInfo);
    v23 = (System_FormatException_o *)sub_1C372A4(v22);
    v24 = (System_String_o *)sub_1C3706C(&StringLiteral_19804/*"getList family cannot return null."*/);
    System_FormatException___ctor_64987012(v23, v24, 0);
    sub_1C37180(v23, method);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v14,
                                                               (const MethodInfo_3116E34 *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_31272F4 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
  if ( v10 )
  {
    klass = v10->klass;
    v18 = *(unsigned __int16 *)&v10->klass->_2.rank;
    if ( *(_WORD *)&v10->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_10:
      v20 = sub_1C87870(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v20)(v10, *(_QWORD *)(v20 + 8));
  }
  return v16;
}


Il2CppObject *DataMasterBase_object__object__object___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_33A4EE0 *method)
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
      (const MethodInfo_33A46FC *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C372B4(this);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C8776C();
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
    v11 = sub_1C87870(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
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
        const MethodInfo_33A4DF0 *method)
{
  return this->fields.list;
}


System_Object_array *DataMasterBase_object__object__object___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A4DDC *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_31272F4 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *DataMasterBase_object__object__object___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_300ED60 *method)
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
  const MethodInfo_300EEDC *v23; // x1

  if ( !method->rgctx_data )
    sub_1C877C8(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_333A510 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C8776C(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C37100(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1C372B4(list);
  v9 = list;
  v10 = 0;
  p_monitor = (CGThumbnailListItem_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_333A510 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_333A5A0 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C8776C(v12);
    v15 = sub_1C37194(v13, _1_T);
    v19 = v15;
    v20 = method->rgctx_data->_1_T;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
    {
      v15 = sub_1C8776C(v18);
      v20 = (Il2CppClass *)v15;
    }
    if ( v19 )
    {
      v15 = sub_1C37194(v19, v20);
      v21 = (CGThumbnailListItem_c *)v15;
      if ( !v15 )
      {
        sub_1C37574(v19);
        return DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(v22, v23);
      }
    }
    else
    {
      v21 = 0;
    }
    if ( v10 >= LODWORD(v9[1].klass) )
      sub_1C372BC(v15);
    p_monitor->klass = v21;
    sub_1C36FFC(p_monitor, (int32_t)v21, v16, v17);
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
        const MethodInfo_33A397C *method)
{
  if ( (byte_4C48883 & 1) == 0 )
  {
    sub_1C37058(&JsonManager_TypeInfo);
    byte_4C48883 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_31570C4 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool DataMasterBase_object__object__object___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A393C *method)
{
  return this->fields._lookup != 0;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *DataMasterBase_object__object__object___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_33A394C *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *result; // x0

  result = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  if ( !result )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_33A46FC *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
    return (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  }
  return result;
}


bool DataMasterBase_object__object__object___isEntityExistsFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_33A5134 *method)
{
  System_String_o *Key; // x0
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  System_String_o *v7; // x19
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0

  Key = DataMasterBase_object__object__object___createKey(this, args, (const MethodInfo_33A4FC8 *)method);
  lookup = this->fields._lookup;
  v7 = Key;
  if ( !lookup )
  {
    DataMasterBase_object__object__object___CreateLookupTable(
      this,
      (const MethodInfo_33A46FC *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C372B4(Key);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C8776C();
  klass = lookup->klass;
  v10 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_10;
    }
    v12 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v12 = sub_1C87870(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v12)(
           lookup,
           v7,
           *(_QWORD *)(v12 + 8));
}


bool DataMasterBase_object__object__object___isEntityExistsFromId_54153952(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_33A52E0 *method)
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
      (const MethodInfo_33A46FC *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C372B4(this);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C8776C();
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
    v11 = sub_1C87870(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v11)(
           lookup,
           key,
           *(_QWORD *)(v11 + 8));
}
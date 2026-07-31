void DataMasterBase_object__object__int____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_3EDAF38 *method)
{
  __int64 _0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v15; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_593EF65 & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_593EF65 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_WORD *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_2237AF8();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_21FFEBC(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_4600188 *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.list, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_3823100 *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v15 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_21FFEBC(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v17 = v15;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0);
  if ( !list )
    sub_21FFECC(v18, v19);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, const MethodInfo *))list->klass->vtable._39_add_CollectionChanged.methodPtr)(
    list,
    v17,
    list->klass->vtable._39_add_CollectionChanged.method);
}


void DataMasterBase_object__object__int___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_3EDC5CC *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_3E60D08 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void DataMasterBase_object__object__int___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDBE48 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_3E60E60 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void DataMasterBase_object__object__int___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDC030 *method)
{
  __int64 _6_System_Collections_Generic_Dictionary_string__TEntity; // x0
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  struct System_Collections_Generic_Dictionary_string__TEntity__o **p_lookup; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *v14; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 _27_System_Collections_Generic_IEnumerator_TEntity; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  Il2CppObject *v31; // x21
  __int64 v32; // x1
  Il2CppObject *v33; // x22
  __int64 v34; // x1
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v39; // [xsp+18h] [xbp-38h]

  if ( (byte_593EF6B & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593EF6B = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_WORD *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_2237AF8();
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3FC9AD8 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v5;
  p_lookup = &this->fields._lookup;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_lookup, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v14 )
    sub_21FFECC(0, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v14,
                 (const MethodInfo_3E61068 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  v39 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v16);
  for ( i = Enumerator; ; i = v39 )
  {
    klass = i->klass;
    v19 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_12;
      }
      v21 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v21 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            i,
            *(_QWORD *)(v21 + 8));
    if ( (v22 & 1) == 0 )
      break;
    if ( !v39 )
      sub_21FFECC(v22, v23);
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_WORD *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_2237AF8();
    v25 = v39->klass;
    v26 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)v27 - 1) != _27_System_Collections_Generic_IEnumerator_TEntity )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_22;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_22:
      v28 = sub_2237E2C(v39, _27_System_Collections_Generic_IEnumerator_TEntity, 0);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            v39,
            *(_QWORD *)(v28 + 8));
    v31 = (Il2CppObject *)v29;
    if ( !v29 )
      sub_21FFECC(0, v30);
    v33 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 376LL))(
                            v29,
                            *(_QWORD *)(*(_QWORD *)v29 + 384LL));
    if ( v33 )
    {
      if ( !*p_lookup )
        sub_21FFECC(0, v32);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v33,
              (const MethodInfo_3FCA65C *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_21FFECC(0, v34);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v33,
          v31,
          (const MethodInfo_3FCA468 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
      }
    }
  }
  if ( v39 )
  {
    v35 = v39->klass;
    v36 = *(unsigned __int16 *)&v39->klass->_2.rank;
    if ( *(_WORD *)&v39->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_37;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_37:
      v38 = sub_2237E2C(v39, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v39, *(_QWORD *)(v38 + 8));
  }
}


bool DataMasterBase_object__object__int___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3EDC4B8 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int monitor; // w8
  Il2CppObject *v9; // x21
  bool v10; // w23
  __int64 v11; // x24
  Il2CppObject *v12; // x22

  if ( (byte_593EF6D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593EF6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                     this,
                                     obj,
                                     this->klass->vtable._15_getList.method)) == 0 )
  {
LABEL_15:
    sub_21FFECC(Instance, v7);
  }
  monitor = (int)Instance[1].monitor;
  v9 = Instance;
  v10 = monitor < 1;
  if ( monitor >= 1 )
  {
    v11 = 0;
    do
    {
      if ( (unsigned int)v11 >= monitor )
        sub_21FFED4(Instance);
      v12 = (Il2CppObject *)*((_QWORD *)&v9[2].klass + v11);
      if ( !v12 )
        goto LABEL_15;
      if ( !((__int64 (__fastcall *)(_QWORD, const MethodInfo *))v12->klass->vtable[4].methodPtr)(
              *((_QWORD *)&v9[2].klass + v11),
              v12->klass->vtable[4].method) )
        return v10;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___RemoveEntity(
                                   this,
                                   v12,
                                   (const MethodInfo_3EDC5EC *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
      monitor = (int)v9[1].monitor;
      v10 = (int)++v11 >= monitor;
    }
    while ( (int)v11 < monitor );
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  return v10;
}


void DataMasterBase_object__object__int___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDD594 *method)
{
  ;
}


DataEntityBase_array *DataMasterBase_object__object__int___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDC720 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_593EF6E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_593EF6E = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *DataMasterBase_object__object__int___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDC78C *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_593EF6F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_21FFC50(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_593EF6F = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_21FFEBC(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_73400728(
    v4,
    list,
    (const MethodInfo_4600198 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *DataMasterBase_object__object__int___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t key,
        const MethodInfo_3EDD388 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  klass = method->klass;
  v8 = key;
  v6 = System_Int32__ToString(
         (int32_t)&v8,
         klass->rgctx_data->_56_DataMasterBase_TMaster__TEntity__PKType__getEntityFromKey);
  return DataMasterBase_object__object__int___getEntityFromKey(
           this,
           v6,
           (const MethodInfo_3EDC808 *)method->klass->rgctx_data->_57_DataMasterBase_TMaster__TEntity__PKType__TryGetEntityFromId);
}


System_Type_o *DataMasterBase_object__object__int___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDD55C *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v3; // x0

  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, method);
  v3.fields.value = (intptr_t)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v3, 0);
}


Il2CppObject *DataMasterBase_object__object__int___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDD438 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3E60A6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E60A6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_3E60B00 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_21FFECC(list, method);
  }
  return 0;
}


void DataMasterBase_object__object__int___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_3EDCCE4 *method)
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
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 i; // x22
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  System_Collections_IEnumerator_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x22
  __int64 _29_TEntity; // x1
  __int64 v30; // x0
  __int64 v31; // x22
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v33; // x0
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x23
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  struct System_Collections_IList_o *newItems; // x22
  System_Collections_IList_c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 j; // x22
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x8
  __int64 v55; // x9
  System_Collections_IEnumerator_c **v56; // x10
  __int64 v57; // x0
  __int64 v58; // x22
  __int64 v59; // x1
  __int64 v60; // x0
  Il2CppObject *v61; // x22
  System_Collections_Generic_Dictionary_object__object__o *v62; // x23
  Il2CppObject *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x23
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // [xsp+28h] [xbp-48h]
  __int64 v71; // [xsp+28h] [xbp-48h]

  v6 = this;
  if ( (byte_593EF71 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerable_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593EF71 = 1;
  }
  if ( v6->fields._lookup )
  {
    if ( !e )
      sub_21FFECC(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v13 = sub_21FFC64(&System_NotImplementedException_TypeInfo);
          v14 = (System_NotImplementedException_o *)sub_21FFEBC(v13);
          System_NotImplementedException___ctor(v14, 0);
          sub_21FFD90(v14, method);
        }
        DataMasterBase_object__object__int___CreateLookupTable(
          v6,
          (const MethodInfo_3EDC030 *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
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
          v12 = sub_2237E2C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v15 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v12)(
                oldItems,
                *(_QWORD *)(v12 + 8));
        v70 = v15;
        if ( !v15 )
          sub_21FFECC(0, v16);
        for ( i = v15; ; i = v70 )
        {
          v18 = *(_QWORD *)i;
          v19 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
          if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
          {
            v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v19;
              v20 += 4;
              if ( !v19 )
                goto LABEL_22;
            }
            v21 = v18 + 16LL * *v20 + 312;
          }
          else
          {
LABEL_22:
            v21 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(i, *(_QWORD *)(v21 + 8));
          if ( (v22 & 1) == 0 )
            break;
          if ( !v70 )
            sub_21FFECC(v22, v23);
          v24 = *(_QWORD *)v70;
          v25 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
          {
            v26 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *(v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v25;
              v26 += 2;
              if ( !v25 )
                goto LABEL_30;
            }
            v27 = v24 + 16LL * (*(_DWORD *)v26 + 1) + 312;
          }
          else
          {
LABEL_30:
            v27 = sub_2237E2C(v70, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v70, *(_QWORD *)(v27 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_WORD *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_2237AF8();
          v30 = sub_21FFDA4(v28, _29_TEntity);
          v31 = v30;
          if ( v30
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 376LL))(
                 v30,
                 *(_QWORD *)(*(_QWORD *)v30 + 384LL)) )
          {
            lookup = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
            v33 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 376LL))(
                                    v31,
                                    *(_QWORD *)(*(_QWORD *)v31 + 384LL));
            if ( !lookup )
              sub_21FFECC(v33, v33);
            System_Collections_Generic_Dictionary_object__object___Remove(
              lookup,
              v33,
              (const MethodInfo_3FCB984 *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
          }
        }
        v34 = sub_21FFDA4(v70, System_IDisposable_TypeInfo);
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
                goto LABEL_45;
            }
            v39 = v35 + 16LL * *v38 + 312;
          }
          else
          {
LABEL_45:
            v39 = sub_2237E2C(v34, System_IDisposable_TypeInfo, 0);
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
              goto LABEL_53;
          }
          v44 = (__int64)&v41->vtable[*v43];
        }
        else
        {
LABEL_53:
          v44 = sub_2237E2C(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v45 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v44)(
                newItems,
                *(_QWORD *)(v44 + 8));
        v71 = v45;
        if ( !v45 )
          sub_21FFECC(0, v46);
        for ( j = v45; ; j = v71 )
        {
          v48 = *(_QWORD *)j;
          v49 = *(unsigned __int16 *)(*(_QWORD *)j + 302LL);
          if ( *(_WORD *)(*(_QWORD *)j + 302LL) )
          {
            v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v49;
              v50 += 4;
              if ( !v49 )
                goto LABEL_61;
            }
            v51 = v48 + 16LL * *v50 + 312;
          }
          else
          {
LABEL_61:
            v51 = sub_2237E2C(j, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(j, *(_QWORD *)(v51 + 8));
          if ( (v52 & 1) == 0 )
            break;
          if ( !v71 )
            sub_21FFECC(v52, v53);
          v54 = *(_QWORD *)v71;
          v55 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
          {
            v56 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v54 + 176) + 8LL);
            while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v55;
              v56 += 2;
              if ( !v55 )
                goto LABEL_69;
            }
            v57 = v54 + 16LL * (*(_DWORD *)v56 + 1) + 312;
          }
          else
          {
LABEL_69:
            v57 = sub_2237E2C(v71, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v71, *(_QWORD *)(v57 + 8));
          v59 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_WORD *)(v59 + 309) & 1) == 0 )
            v59 = sub_2237AF8();
          v60 = sub_21FFDA4(v58, v59);
          v61 = (Il2CppObject *)v60;
          if ( v60
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v60 + 376LL))(
                 v60,
                 *(_QWORD *)(*(_QWORD *)v60 + 384LL)) )
          {
            v62 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
            v63 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v61->klass->vtable[4].methodPtr)(
                                    v61,
                                    v61->klass->vtable[4].method);
            if ( !v62 )
              sub_21FFECC(v63, v63);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v62,
              v63,
              v61,
              (const MethodInfo_3FCA454 *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
          }
        }
        v64 = sub_21FFDA4(v71, System_IDisposable_TypeInfo);
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
                goto LABEL_84;
            }
            v69 = v65 + 16LL * *v68 + 312;
          }
          else
          {
LABEL_84:
            v69 = sub_2237E2C(v64, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
        }
      }
    }
  }
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, const MethodInfo *))v6->klass->vtable._16_OnListChangedImplementation.methodPtr)(
    v6,
    e,
    v6->klass->vtable._16_OnListChangedImplementation.method);
}


void DataMasterBase_object__object__int___OnListChangedImplementation(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_3EDD384 *method)
{
  ;
}


bool DataMasterBase_object__object__int___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_3EDC5EC *method)
{
  __int64 _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType; // x8
  __int64 v7; // x21
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x22
  __int64 _39_System_Predicate_TEntity; // x0
  System_Predicate_object__o *v18; // x23
  int32_t Index_object; // w21

  _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = (__int64)method->klass->rgctx_data->_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType_;
  if ( (*(_WORD *)(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType + 309) & 1) == 0 )
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_2237AF8();
  v7 = sub_21FFEBC(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  DataMasterBase___c__DisplayClass23_0_object__object__int____ctor(
    (DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *)v7,
    (const MethodInfo_3ACE950 *)method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor);
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
                                                           entity,
                                                           entity->klass->vtable[4].method);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v8, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_WORD *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_2237AF8();
  v18 = (System_Predicate_object__o *)sub_21FFEBC(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_4611460 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v18,
                   (const MethodInfo_38C14B0 *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_3E61470 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_21FFECC(v8, v9);
  }
  return Index_object >= 0;
}


bool DataMasterBase_object__object__int___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_3EDBE68 *method)
{
  int64_t value; // x21
  __int64 v7; // x22
  int64_t v8; // x23
  __int64 v9; // x24
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x26
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  bool result; // w0
  System_Nullable_long__o v17; // 0:x2.16
  System_Nullable_long__o v18; // 0:x4.16

  value = lenght.fields.value;
  v7 = *(_QWORD *)&lenght.fields.hasValue;
  v8 = start.fields.value;
  v9 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_593EF6A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593EF6A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
  v15 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__int___abstractGetList(
                                                         this,
                                                         objOrBytes,
                                                         v17,
                                                         v18,
                                                         (const MethodInfo_3EDB4D8 *)method->klass->rgctx_data->_22_DataMasterBase_TMaster__TEntity__PKType__abstractGetList);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v15,
    (const MethodInfo_38C036C *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_7:
    sub_21FFECC(Instance, v13);
  result = 1;
  ++this->fields.revision;
  return result;
}


bool DataMasterBase_object__object__int___ReplacedForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_3EDBF5C *method)
{
  int64_t value; // x21
  __int64 v10; // x22
  int64_t v12; // x23
  __int64 v13; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *ListForThread; // x0
  bool result; // w0
  System_Nullable_long__o v18; // 0:x3.16
  System_Nullable_long__o v19; // 0:x5.16

  if ( !this )
    sub_21FFECC(0, objOrBytes);
  value = lenght.fields.value;
  v10 = *(_QWORD *)&lenght.fields.hasValue;
  v12 = start.fields.value;
  v13 = *(_QWORD *)&start.fields.hasValue;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._6_Clear.methodPtr)(
    this,
    this->klass->vtable._6_Clear.method);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v18.fields.hasValue = v13;
  v18.fields.value = v12;
  *(_QWORD *)&v19.fields.hasValue = v10;
  v19.fields.value = value;
  ListForThread = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__int___abstractGetListForThread(
                                                                   this,
                                                                   objOrBytes,
                                                                   context,
                                                                   v18,
                                                                   v19,
                                                                   work,
                                                                   (const MethodInfo_3EDB7EC *)method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    ListForThread,
    (const MethodInfo_38C036C *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  result = 1;
  ++this->fields.revision;
  return result;
}


bool DataMasterBase_object__object__int___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        int32_t key,
        const MethodInfo_3EDD3D8 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  System_String_o *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  klass = method->klass;
  v10 = key;
  v8 = System_Int32__ToString(
         (int32_t)&v10,
         klass->rgctx_data->_56_DataMasterBase_TMaster__TEntity__PKType__getEntityFromKey);
  return DataMasterBase_object__object__int___TryGetEntityFromId(
           this,
           entity,
           v8,
           (const MethodInfo_3EDCB38 *)method->klass->rgctx_data->_58_TEntity);
}


bool DataMasterBase_object__object__int___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_3EDCB38 *method)
{
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0

  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_3EDC030 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_21FFECC(v9, v10);
  }
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
  klass = lookup->klass;
  v13 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_9;
    }
    v15 = (__int64)(&klass->vtable._1_Finalize + *p_offset);
  }
  else
  {
LABEL_9:
    v15 = sub_2237E2C(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, Il2CppObject **, _QWORD))v15)(
           lookup,
           key,
           result,
           *(_QWORD *)(v15 + 8));
}


bool DataMasterBase_object__object__int___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_3EDD4B8 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3E60A6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_21FFECC(list, entity);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_3E60B00 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entity, (int32_t)Item, v9, v10, v11, v12, v13, v14);
  return Count > 0;
}


bool DataMasterBase_object__object__int___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3EDC340 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  void *monitor; // x23
  Il2CppObject *v9; // x21
  bool v10; // w22
  unsigned __int64 v11; // x24
  unsigned int v12; // w8

  if ( (byte_593EF6C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593EF6C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                     this,
                                     obj,
                                     this->klass->vtable._15_getList.method)) == 0 )
  {
    sub_21FFECC(Instance, v7);
  }
  monitor = Instance[1].monitor;
  v9 = Instance;
  v10 = (int)monitor < 1;
  if ( (int)monitor < 1 )
  {
LABEL_10:
    if ( (int)monitor >= 1 )
      ++this->fields.revision;
  }
  else
  {
    v11 = 0;
    v12 = (unsigned int)Instance[1].monitor;
    while ( 1 )
    {
      if ( v11 >= v12 )
        sub_21FFED4(Instance);
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___UpdatedEntity(
                                   this,
                                   *((Il2CppObject **)&v9[2].klass + v11),
                                   (const MethodInfo_3EDC438 *)method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        break;
      v12 = (unsigned int)v9[1].monitor;
      v10 = (__int64)++v11 >= (int)v12;
      if ( (__int64)v11 >= (int)v12 )
        goto LABEL_10;
    }
  }
  return v10;
}


bool DataMasterBase_object__object__int___UpdatedEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_3EDC438 *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  if ( !((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
          entity,
          entity->klass->vtable[4].method) )
    return 0;
  DataMasterBase_object__object__int___RemoveEntity(
    this,
    entity,
    (const MethodInfo_3EDC5EC *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
  DataMasterBase_object__object__int___AddEntity(
    this,
    entity,
    (const MethodInfo_3EDC5CC *)method->klass->rgctx_data->_34_DataMasterBase_TMaster__TEntity__PKType__AddEntity);
  return 1;
}


System_Object_array *DataMasterBase_object__object__int___abstractGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_3EDB4D8 *method)
{
  bool hasValue; // w23
  bool v7; // w25
  long double v10; // q0
  MiniMessagePack_MiniMessagePacker_o *v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int64_t Value; // x0
  __int64 v19; // x1
  const MethodInfo_45B0930 *v20; // x2
  Il2CppClass *v21; // x26
  System_Byte_array *v22; // x21
  int32_t v24; // w24
  il2cpp_array_size_t max_length; // x3
  System_Object_array *List; // x22
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int v33; // [xsp+8h] [xbp-78h]
  System_Nullable_long__o v34; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_long__o v35; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_long__o v36; // 0:x0.16
  System_Nullable_long__o v37; // 0:x0.16

  v35 = start;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  v34 = lenght;
  if ( (byte_593EF68 & 1) == 0 )
  {
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_long__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_long__get_Value__);
    byte_593EF68 = 1;
  }
  v33 = 0;
  if ( !sub_21FFDA4(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method,
                                    v10);
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_21FFEBC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  this->fields.seriazlier = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seriazlier, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( objOrBytes )
  {
    v21 = byte___TypeInfo;
    Value = sub_21FFDA4(objOrBytes, byte___TypeInfo);
    v22 = (System_Byte_array *)Value;
    if ( !Value )
    {
      v10 = sub_220024C(objOrBytes, v21, v20);
      return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                      this,
                                      objOrBytes,
                                      this->klass->vtable._15_getList.method,
                                      v10);
    }
  }
  else
  {
    v22 = 0;
  }
  if ( !v7 )
  {
    v24 = 0;
    if ( hasValue )
      goto LABEL_11;
LABEL_13:
    if ( !v22 )
      sub_21FFECC(Value, v19);
    max_length = v22->max_length;
    goto LABEL_15;
  }
  v36.fields.value = Method_System_Nullable_long__get_Value__;
  *(_QWORD *)&v36.fields.hasValue = &v35;
  Value = System_Nullable_long___get_Value(v36, v20);
  v24 = Value;
  if ( !v34.fields.hasValue )
    goto LABEL_13;
LABEL_11:
  v37.fields.value = Method_System_Nullable_long__get_Value__;
  *(_QWORD *)&v37.fields.hasValue = &v34;
  LODWORD(max_length) = System_Nullable_long___get_Value(v37, v20);
LABEL_15:
  List = DataMasterBase_object__object__int___directGetList(
           this,
           v22,
           v24,
           max_length,
           (const MethodInfo_3EDB0F0 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seriazlier, 0, v27, v28, v29, v30, v31, v32);
  return List;
}


System_Object_array *DataMasterBase_object__object__int___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_3EDB7EC *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x0
  System_Byte_array *v13; // x22
  MiniMessagePack_MiniMessagePacker_o *v14; // x26
  MissionNaviTransitionBoardItem_o *p_seriazlier; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_45B0930 *v30; // x2
  int32_t Value; // w24
  il2cpp_array_size_t max_length; // x3
  int64_t List; // x0
  __int64 v35; // x1
  MethodInfo_45B0930 *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Object_array *v42; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v44; // w24
  il2cpp_array_size_t v45; // x3
  Il2CppObject *v46; // x1
  System_Nullable_long__o v47; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_long__o v48; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_long__o v49; // 0:x0.16
  System_Nullable_long__o v50; // 0:x0.16
  System_Nullable_long__o v51; // 0:x0.16
  System_Nullable_long__o v52; // 0:x0.16

  v48 = start;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  v47 = lenght;
  if ( (byte_593EF69 & 1) == 0 )
  {
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_long__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_long__get_Value__);
    byte_593EF69 = 1;
  }
  v12 = sub_21FFDA4(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method);
  v13 = (System_Byte_array *)v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_21FFEBC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0);
  this->fields.seriazlier = v14;
  p_seriazlier = (MissionNaviTransitionBoardItem_o *)&this->fields.seriazlier;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seriazlier, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_21FFECC(0, v22);
  seriazlier->fields.threadSafeStringHash = work;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&seriazlier->fields.threadSafeStringHash,
    (int32_t)work,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( v9 )
  {
    v49.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v49.fields.hasValue = &v48;
    Value = System_Nullable_long___get_Value(v49, v30);
    if ( v47.fields.hasValue )
    {
LABEL_7:
      v50.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v50.fields.hasValue = &v47;
      LODWORD(max_length) = System_Nullable_long___get_Value(v50, v30);
      goto LABEL_11;
    }
  }
  else
  {
    Value = 0;
    if ( hasValue )
      goto LABEL_7;
  }
  max_length = v13->max_length;
LABEL_11:
  List = (int64_t)DataMasterBase_object__object__int___directGetList(
                    this,
                    v13,
                    Value,
                    max_length,
                    (const MethodInfo_3EDB0F0 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v42 = (System_Object_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v48.fields.hasValue )
    {
      v51.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v51.fields.hasValue = &v48;
      List = System_Nullable_long___get_Value(v51, v36);
      v44 = List;
    }
    else
    {
      v44 = 0;
    }
    if ( v47.fields.hasValue )
    {
      v52.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v52.fields.hasValue = &v47;
      List = System_Nullable_long___get_Value(v52, v36);
      LODWORD(v45) = List;
      if ( klass )
      {
LABEL_17:
        v46 = MiniMessagePack_MiniMessagePacker__Unpack(klass, v13, v44, v45, 0);
        v42 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                       this,
                                       v46,
                                       this->klass->vtable._15_getList.method);
        goto LABEL_18;
      }
    }
    else
    {
      v45 = v13->max_length;
      if ( klass )
        goto LABEL_17;
    }
    sub_21FFECC(List, v35);
  }
LABEL_18:
  p_seriazlier->klass = 0;
  sub_21FFBF4(p_seriazlier, 0, (System_String_o *)v36, v37, v38, v39, v40, v41);
  return v42;
}


System_String_o *DataMasterBase_object__object__int___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_3EDC8F4 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  int max_length; // w8
  __int64 v6; // x22
  MissionNaviTransitionBoardItem_o *p_sb; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *sb; // t1
  System_Text_StringBuilder_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Text_StringBuilder_o *appended; // x0
  unsigned __int64 v18; // x21

  v4 = this;
  if ( (byte_593EF70 & 1) == 0 )
  {
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593EF70 = 1;
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
  p_sb = (MissionNaviTransitionBoardItem_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v10 = (System_Text_StringBuilder_o *)sub_21FFEBC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_75515192(v10, 128, 0);
    p_sb->klass = (MissionNaviTransitionBoardItem_c *)v10;
    sub_21FFBF4(p_sb, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0);
  v18 = 0;
  do
  {
    if ( v18 >= LODWORD(args->max_length) )
      goto LABEL_20;
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_75524348((System_Text_StringBuilder_o *)this, args->m_Items[v18], 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    appended = System_Text_StringBuilder__Append_75524092((System_Text_StringBuilder_o *)this, 0x3Au, 0);
    ++v18;
  }
  while ( v6 != v18 );
  if ( (unsigned int)v6 >= LODWORD(args->max_length) )
LABEL_20:
    sub_21FFED4(appended);
  this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
  if ( !p_sb->klass
    || (System_Text_StringBuilder__Append_75524348((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0) )
  {
LABEL_19:
    sub_21FFECC(this, args);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
                              this,
                              this->klass->vtable._3_ToString.method);
}


System_Object_array *DataMasterBase_object__object__int___directGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo_3EDB0F0 *method)
{
  System_IO_MemoryStream_o *v10; // x24
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x23
  DataIO_Runtime_Deserializer_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_IEnumerable_o *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x20
  System_IO_MemoryStream_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v23; // x0
  System_FormatException_o *v24; // x21
  System_String_o *v25; // x0

  if ( (byte_593EF67 & 1) == 0 )
  {
    sub_21FFC50(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_IO_MemoryStream_TypeInfo);
    byte_593EF67 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_21FFEBC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_76663496(v10, bytes, start, length, 0);
  seriazlier = this->fields.seriazlier;
  v12 = (DataIO_Runtime_Deserializer_o *)sub_21FFEBC(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v12, seriazlier, 0);
  if ( !v12 )
    sub_21FFECC(v13, v14);
  v15 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v12,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v10,
                                              0);
  if ( !v15 )
  {
    v23 = sub_21FFC64(&System_FormatException_TypeInfo);
    v24 = (System_FormatException_o *)sub_21FFEBC(v23);
    v25 = (System_String_o *)sub_21FFC64(&StringLiteral_20693/*"getList family cannot return null."*/);
    System_FormatException___ctor_76840176(v24, v25, 0);
    sub_21FFD90(v24, method);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v15,
                                                               (const MethodInfo_3855054 *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_3868664 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
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
      v21 = sub_2237E2C(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v10, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *DataMasterBase_object__object__int___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_3EDC808 *method)
{
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  Il2CppObject *v15; // [xsp+8h] [xbp-28h] BYREF

  lookup = this->fields._lookup;
  v15 = 0;
  if ( !lookup )
  {
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_3EDC030 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_21FFECC(v7, v8);
  }
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
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
        goto LABEL_9;
    }
    v13 = (__int64)(&klass->vtable._1_Finalize + *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_2237E2C(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, Il2CppObject **, _QWORD))v13)(
          lookup,
          key,
          &v15,
          *(_QWORD *)(v13 + 8))
      & 1) != 0 )
    return v15;
  else
    return 0;
}


System_Collections_ObjectModel_ObservableCollection_TEntity__o *DataMasterBase_object__object__int___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDC718 *method)
{
  return this->fields.list;
}


System_Object_array *DataMasterBase_object__object__int___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDC704 *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_3868664 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *DataMasterBase_object__object__int___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_36A4F30 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  long double v6; // q0
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v8; // x8
  System_Collections_ObjectModel_Collection_T__o *v9; // x21
  unsigned __int64 v10; // x22
  __int64 v11; // x24
  long double v12; // q0
  System_Collections_ObjectModel_Collection_T__o *v13; // x23
  Il2CppClass *_1_T; // x1
  __int64 v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( !method->rgctx_data )
    sub_2237B54(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3E60A6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_2237AF8(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_21FFD10(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_15:
    sub_21FFECC(list, method);
  v9 = list;
  v10 = 0;
  v11 = 32;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_3E60A6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v10,
                                                                 (const MethodInfo_3E60B00 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
      if ( v9 )
      {
        v13 = list;
        _1_T = method->rgctx_data->_1_T;
        if ( (*((_WORD *)&_1_T->_2.bitflags2 + 1) & 1) == 0 )
          _1_T = (Il2CppClass *)sub_2237AF8(v12);
        v15 = sub_21FFDA4(v13, _1_T);
        if ( v10 >= LODWORD(v9[1].klass) )
          sub_21FFED4(v15);
        *((_QWORD *)&v9[1].monitor + v10) = v15;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v9 + v11), v15, v16, v17, v18, v19, v20, v21);
        v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        ++v10;
        v11 += 8;
        if ( v8 )
          continue;
      }
    }
    goto LABEL_15;
  }
  return (System_Object_array *)v9;
}


System_Object_array *DataMasterBase_object__object__int___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3EDB084 *method)
{
  if ( (byte_593EF66 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_593EF66 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, obj);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_38A056C *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool DataMasterBase_object__object__int___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDB044 *method)
{
  return this->fields._lookup != 0;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *DataMasterBase_object__object__int___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EDB054 *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *result; // x0

  result = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  if ( !result )
  {
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_3EDC030 *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
    return (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  }
  return result;
}


bool DataMasterBase_object__object__int___isEntityExistsFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_3EDCA60 *method)
{
  System_String_o *Key; // x0
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  System_String_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0

  Key = DataMasterBase_object__object__int___createKey(this, args, (const MethodInfo_3EDC8F4 *)method);
  lookup = this->fields._lookup;
  v7 = Key;
  if ( !lookup )
  {
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_3EDC030 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_21FFECC(v8, v9);
  }
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
  klass = lookup->klass;
  v12 = *(unsigned __int16 *)&lookup->klass->_2.rank;
  if ( *(_WORD *)&lookup->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((_QWORD *)p_offset - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v12;
      p_offset += 4;
      if ( !v12 )
        goto LABEL_9;
    }
    v14 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v14 = sub_2237E2C(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v14)(
           lookup,
           v7,
           *(_QWORD *)(v14 + 8));
}


bool DataMasterBase_object__object__int___isEntityExistsFromId_65915924(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_3EDCC14 *method)
{
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  System_Collections_Generic_Dictionary_string__TEntity__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0

  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_3EDC030 *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_21FFECC(v7, v8);
  }
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
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
        goto LABEL_9;
    }
    v13 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v13 = sub_2237E2C(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
           lookup,
           key,
           *(_QWORD *)(v13 + 8));
}
void DataMasterBase_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_3EE2240 *method)
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

  if ( (byte_593EF8C & 1) == 0 )
  {
    sub_21FFC50(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_593EF8C = 1;
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


void DataMasterBase_object__object____Il2CppFullySharedGenericType___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_3EE38F8 *method)
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


void DataMasterBase_object__object____Il2CppFullySharedGenericType___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE315C *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_3E60E60 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE334C *method)
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

  if ( (byte_593EF92 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593EF92 = 1;
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


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3EE37E0 *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  int v8; // w8
  __int64 v9; // x21
  bool v10; // w23
  __int64 v11; // x24
  __int64 v12; // x22

  if ( (byte_593EF94 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593EF94 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
LABEL_15:
    sub_21FFECC(Instance, v7);
  }
  v8 = *(_DWORD *)(Instance + 24);
  v9 = Instance;
  v10 = v8 < 1;
  if ( v8 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( (unsigned int)v11 >= v8 )
        sub_21FFED4(Instance);
      v12 = *(_QWORD *)(v9 + 32 + 8 * v11);
      if ( !v12 )
        goto LABEL_15;
      if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 376LL))(
              *(_QWORD *)(v9 + 32 + 8 * v11),
              *(_QWORD *)(*(_QWORD *)v12 + 384LL)) )
        return v10;
      Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, __int64))method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity->methodPointer)(
                   this,
                   v12);
      v8 = *(_DWORD *)(v9 + 24);
      v10 = (int)++v11 >= v8;
    }
    while ( (int)v11 < v8 );
    if ( (Instance & 1) != 0 )
      ++this->fields.revision;
  }
  return v10;
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE4A1C *method)
{
  ;
}


DataEntityBase_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE3A50 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_593EF95 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_593EF95 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE3ABC *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_593EF96 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_21FFC50(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_593EF96 = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_21FFEBC(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_73400728(
    v4,
    list,
    (const MethodInfo_4600198 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_3EE4684 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8
  __int16 v9; // w10
  __int64 v10; // x0
  char *v11; // x22
  int v12; // w0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v13; // x3
  _QWORD v16[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v16[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((_QWORD *)key.monitor + 4);
  v16[0] = key.klass;
  v7 = *(_QWORD *)(v6 + 192);
  v8 = *(_QWORD *)(v7 + 432);
  v9 = *(_WORD *)(v8 + 309);
  if ( (v9 & 1) != 0 )
  {
    v10 = *(_QWORD *)(v7 + 432);
  }
  else
  {
    v10 = sub_2237AF8();
    v7 = *(_QWORD *)(monitor[4] + 192LL);
    v8 = *(_QWORD *)(v7 + 432);
    v9 = *(_WORD *)(v8 + 309);
  }
  v11 = (char *)&v16[-1] - (((unsigned int)(*(_DWORD *)(v10 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v9 & 1) != 0 )
  {
    v12 = v8;
  }
  else
  {
    v12 = sub_2237AF8();
    v7 = *(_QWORD *)(monitor[4] + 192LL);
    v8 = *(_QWORD *)(v7 + 432);
  }
  if ( *(int *)(v8 + 40) >= 0 )
    v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v16;
  else
    v13 = klass;
  sub_22008A4(v12, *(_QWORD *)(v7 + 440), (int)v11, v13);
  return (Il2CppObject *)(**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 448LL))(
                           this,
                           v16[1]);
}


System_Type_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE49E4 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v3; // x0

  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, method);
  v3.fields.value = (intptr_t)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v3, 0);
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE48C0 *method)
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


void DataMasterBase_object__object____Il2CppFullySharedGenericType___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_3EE3FC8 *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x22
  System_Collections_IList_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  System_NotImplementedException_o *v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 i; // x22
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  __int64 v27; // x9
  System_Collections_IEnumerator_c **v28; // x10
  __int64 v29; // x0
  __int64 v30; // x22
  __int64 _29_TEntity; // x1
  __int64 v32; // x0
  __int64 v33; // x22
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x23
  Il2CppObject *v35; // x0
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x23
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_Collections_IList_o *newItems; // x22
  System_Collections_IList_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 j; // x22
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x8
  __int64 v57; // x9
  System_Collections_IEnumerator_c **v58; // x10
  __int64 v59; // x0
  __int64 v60; // x22
  __int64 v61; // x1
  __int64 v62; // x0
  Il2CppObject *v63; // x22
  struct System_Collections_Generic_Dictionary_string__TEntity__o *v64; // x23
  Il2CppObject *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x23
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // [xsp+28h] [xbp-48h]
  __int64 v73; // [xsp+28h] [xbp-48h]

  if ( (byte_593EF98 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerable_TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593EF98 = 1;
  }
  v7 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_50_DataMasterBase_TMaster__TEntity__PKType__get_IsCreatedLookupTable->methodPointer)(this);
  if ( (v7 & 1) != 0 )
  {
    if ( !e )
      sub_21FFECC(v7, v8);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v15 = sub_21FFC64(&System_NotImplementedException_TypeInfo);
          v16 = (System_NotImplementedException_o *)sub_21FFEBC(v15);
          System_NotImplementedException___ctor(v16, 0);
          sub_21FFD90(v16, method);
        }
        ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable->methodPointer)(this);
      }
    }
    else
    {
      oldItems = e->fields._oldItems;
      if ( oldItems )
      {
        klass = oldItems->klass;
        v12 = *(unsigned __int16 *)&oldItems->klass->_2.rank;
        if ( *(_WORD *)&oldItems->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
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
          v14 = sub_2237E2C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v17 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v14)(
                oldItems,
                *(_QWORD *)(v14 + 8));
        v72 = v17;
        if ( !v17 )
          sub_21FFECC(0, v18);
        for ( i = v17; ; i = v72 )
        {
          v20 = *(_QWORD *)i;
          v21 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
          if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
          {
            v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v21;
              v22 += 4;
              if ( !v21 )
                goto LABEL_22;
            }
            v23 = v20 + 16LL * *v22 + 312;
          }
          else
          {
LABEL_22:
            v23 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(i, *(_QWORD *)(v23 + 8));
          if ( (v24 & 1) == 0 )
            break;
          if ( !v72 )
            sub_21FFECC(v24, v25);
          v26 = *(_QWORD *)v72;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v28 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v27;
              v28 += 2;
              if ( !v27 )
                goto LABEL_30;
            }
            v29 = v26 + 16LL * (*(_DWORD *)v28 + 1) + 312;
          }
          else
          {
LABEL_30:
            v29 = sub_2237E2C(v72, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v72, *(_QWORD *)(v29 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_WORD *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_2237AF8();
          v32 = sub_21FFDA4(v30, _29_TEntity);
          v33 = v32;
          if ( v32
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 376LL))(
                 v32,
                 *(_QWORD *)(*(_QWORD *)v32 + 384LL)) )
          {
            lookup = this->fields._lookup;
            v35 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 376LL))(
                                    v33,
                                    *(_QWORD *)(*(_QWORD *)v33 + 384LL));
            if ( !lookup )
              sub_21FFECC(v35, v35);
            System_Collections_Generic_Dictionary_object__object___Remove(
              (System_Collections_Generic_Dictionary_object__object__o *)lookup,
              v35,
              (const MethodInfo_3FCB984 *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
          }
        }
        v36 = sub_21FFDA4(v72, System_IDisposable_TypeInfo);
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
                goto LABEL_45;
            }
            v41 = v37 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_45:
            v41 = sub_2237E2C(v36, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v43 = newItems->klass;
        v44 = *(unsigned __int16 *)&newItems->klass->_2.rank;
        if ( *(_WORD *)&newItems->klass->_2.rank )
        {
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v45 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_53;
          }
          v46 = (__int64)&v43->vtable[*v45];
        }
        else
        {
LABEL_53:
          v46 = sub_2237E2C(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v47 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v46)(
                newItems,
                *(_QWORD *)(v46 + 8));
        v73 = v47;
        if ( !v47 )
          sub_21FFECC(0, v48);
        for ( j = v47; ; j = v73 )
        {
          v50 = *(_QWORD *)j;
          v51 = *(unsigned __int16 *)(*(_QWORD *)j + 302LL);
          if ( *(_WORD *)(*(_QWORD *)j + 302LL) )
          {
            v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v51;
              v52 += 4;
              if ( !v51 )
                goto LABEL_61;
            }
            v53 = v50 + 16LL * *v52 + 312;
          }
          else
          {
LABEL_61:
            v53 = sub_2237E2C(j, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(j, *(_QWORD *)(v53 + 8));
          if ( (v54 & 1) == 0 )
            break;
          if ( !v73 )
            sub_21FFECC(v54, v55);
          v56 = *(_QWORD *)v73;
          v57 = *(unsigned __int16 *)(*(_QWORD *)v73 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v73 + 302LL) )
          {
            v58 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v56 + 176) + 8LL);
            while ( *(v58 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v57;
              v58 += 2;
              if ( !v57 )
                goto LABEL_69;
            }
            v59 = v56 + 16LL * (*(_DWORD *)v58 + 1) + 312;
          }
          else
          {
LABEL_69:
            v59 = sub_2237E2C(v73, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v73, *(_QWORD *)(v59 + 8));
          v61 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_WORD *)(v61 + 309) & 1) == 0 )
            v61 = sub_2237AF8();
          v62 = sub_21FFDA4(v60, v61);
          v63 = (Il2CppObject *)v62;
          if ( v62
            && (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v62 + 376LL))(
                 v62,
                 *(_QWORD *)(*(_QWORD *)v62 + 384LL)) )
          {
            v64 = this->fields._lookup;
            v65 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v63->klass->vtable[4].methodPtr)(
                                    v63,
                                    v63->klass->vtable[4].method);
            if ( !v64 )
              sub_21FFECC(v65, v65);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)v64,
              v65,
              v63,
              (const MethodInfo_3FCA454 *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
          }
        }
        v66 = sub_21FFDA4(v73, System_IDisposable_TypeInfo);
        if ( v66 )
        {
          v67 = *(_QWORD *)v66;
          v68 = v66;
          v69 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
          {
            v70 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
            {
              --v69;
              v70 += 4;
              if ( !v69 )
                goto LABEL_84;
            }
            v71 = v67 + 16LL * *v70 + 312;
          }
          else
          {
LABEL_84:
            v71 = sub_2237E2C(v66, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v71)(v68, *(_QWORD *)(v71 + 8));
        }
      }
    }
  }
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, const MethodInfo *))this->klass->vtable._16_OnListChangedImplementation.methodPtr)(
    this,
    e,
    this->klass->vtable._16_OnListChangedImplementation.method);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___OnListChangedImplementation(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_3EE4680 *method)
{
  ;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_3EE3918 *method)
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
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor->methodPointer)();
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


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_3EE317C *method)
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

  value = lenght.fields.value;
  v7 = *(_QWORD *)&lenght.fields.hasValue;
  v8 = start.fields.value;
  v9 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_593EF91 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593EF91 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || !this
    || (((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._6_Clear.methodPtr)(
          this,
          this->klass->vtable._6_Clear.method),
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v15 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, __int64, int64_t, __int64, int64_t))method->klass->rgctx_data->_22_DataMasterBase_TMaster__TEntity__PKType__abstractGetList->methodPointer)(
                                                               this,
                                                               objOrBytes,
                                                               v9,
                                                               v8,
                                                               v7,
                                                               value),
        ObservableCollectionExtensions__AddRange_object_(
          list,
          v15,
          (const MethodInfo_38C036C *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v13);
  }
  result = 1;
  ++this->fields.revision;
  return result;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___ReplacedForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_3EE3274 *method)
{
  int64_t value; // x21
  __int64 v10; // x22
  int64_t v12; // x23
  __int64 v13; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  bool result; // w0

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
  v16 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, System_Threading_SynchronizationContext_o *, __int64, int64_t, __int64, int64_t, System_Byte_array *, MethodInfo *))method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread->methodPointer)(
                                                         this,
                                                         objOrBytes,
                                                         context,
                                                         v13,
                                                         v12,
                                                         v10,
                                                         value,
                                                         work,
                                                         method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v16,
    (const MethodInfo_38C036C *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  result = 1;
  ++this->fields.revision;
  return result;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_3EE479C *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x8
  __int16 v11; // w10
  __int64 v12; // x0
  char *v13; // x23
  int v14; // w0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v15; // x3
  _QWORD v18[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v18[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = *((_QWORD *)key.monitor + 4);
  v18[0] = key.klass;
  v9 = *(_QWORD *)(v8 + 192);
  v10 = *(_QWORD *)(v9 + 432);
  v11 = *(_WORD *)(v10 + 309);
  if ( (v11 & 1) != 0 )
  {
    v12 = *(_QWORD *)(v9 + 432);
  }
  else
  {
    v12 = sub_2237AF8();
    v9 = *(_QWORD *)(monitor[4] + 192LL);
    v10 = *(_QWORD *)(v9 + 432);
    v11 = *(_WORD *)(v10 + 309);
  }
  v13 = (char *)&v18[-1] - (((unsigned int)(*(_DWORD *)(v12 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v11 & 1) != 0 )
  {
    v14 = v10;
  }
  else
  {
    v14 = sub_2237AF8();
    v9 = *(_QWORD *)(monitor[4] + 192LL);
    v10 = *(_QWORD *)(v9 + 432);
  }
  if ( *(int *)(v10 + 40) >= 0 )
    v15 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v18;
  else
    v15 = klass;
  sub_22008A4(v14, *(_QWORD *)(v9 + 440), (int)v13, v15);
  return (**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject **, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 456LL))(
           this,
           entity,
           v18[1])
       & 1;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_3EE3E4C *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v11; // x8
  __int64 v12; // x9
  _DWORD *v13; // x10
  __int64 v14; // x0

  v7 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v7 )
    sub_21FFECC(0, v8);
  v9 = v7;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
  v11 = *(_QWORD *)v9;
  v12 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
  {
    v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
    while ( *((_QWORD *)v13 - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v12;
      v13 += 4;
      if ( !v12 )
        goto LABEL_8;
    }
    v14 = v11 + 16LL * (*v13 + 1) + 312;
  }
  else
  {
LABEL_8:
    v14 = sub_2237E2C(v9, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppObject **, _QWORD))v14)(
           v9,
           key,
           result,
           *(_QWORD *)(v14 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_3EE4940 *method)
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


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3EE365C *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x23
  __int64 v9; // x21
  bool v10; // w22
  unsigned __int64 v11; // x24
  unsigned int v12; // w8

  if ( (byte_593EF93 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593EF93 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
    sub_21FFECC(Instance, v7);
  }
  v8 = *(_QWORD *)(Instance + 24);
  v9 = Instance;
  v10 = (int)v8 < 1;
  if ( (int)v8 < 1 )
  {
LABEL_10:
    if ( (int)v8 >= 1 )
      ++this->fields.revision;
  }
  else
  {
    v11 = 0;
    v12 = *(_QWORD *)(Instance + 24);
    while ( 1 )
    {
      if ( v11 >= v12 )
        sub_21FFED4(Instance);
      Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity->methodPointer)(
                   this,
                   *(_QWORD *)(v9 + 32 + 8 * v11));
      if ( (Instance & 1) == 0 )
        break;
      v12 = *(_DWORD *)(v9 + 24);
      v10 = (__int64)++v11 >= (int)v12;
      if ( (__int64)v11 >= (int)v12 )
        goto LABEL_10;
    }
  }
  return v10;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___UpdatedEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_3EE3758 *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  if ( !((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
          entity,
          entity->klass->vtable[4].method) )
    return 0;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *))method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity->methodPointer)(
    this,
    entity);
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *))method->klass->rgctx_data->_34_DataMasterBase_TMaster__TEntity__PKType__AddEntity->methodPointer)(
    this,
    entity);
  return 1;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___abstractGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_3EE27E4 *method)
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
  int64_t v22; // x21
  unsigned int v24; // w24
  int64_t v25; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  System_Object_array *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int v34; // [xsp+8h] [xbp-78h]
  System_Nullable_long__o v35; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_long__o v36; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_long__o v37; // 0:x0.16
  System_Nullable_long__o v38; // 0:x0.16

  v36 = start;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  v35 = lenght;
  if ( (byte_593EF8F & 1) == 0 )
  {
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_long__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_long__get_Value__);
    byte_593EF8F = 1;
  }
  v34 = 0;
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
    v22 = Value;
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
    v25 = *(_QWORD *)(v22 + 24);
    goto LABEL_15;
  }
  v37.fields.value = Method_System_Nullable_long__get_Value__;
  *(_QWORD *)&v37.fields.hasValue = &v36;
  Value = System_Nullable_long___get_Value(v37, v20);
  v24 = Value;
  if ( !v35.fields.hasValue )
    goto LABEL_13;
LABEL_11:
  v38.fields.value = Method_System_Nullable_long__get_Value__;
  *(_QWORD *)&v38.fields.hasValue = &v35;
  v25 = System_Nullable_long___get_Value(v38, v20);
LABEL_15:
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v27 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, int64_t, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
                                 this,
                                 v22,
                                 v24,
                                 v25,
                                 _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seriazlier, 0, v28, v29, v30, v31, v32, v33);
  return v27;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_3EE2AFC *method)
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
  unsigned int Value; // w24
  int64_t max_length; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  int64_t v35; // x0
  __int64 v36; // x1
  MethodInfo_45B0930 *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Object_array *v43; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v45; // w24
  il2cpp_array_size_t v46; // x3
  Il2CppObject *v47; // x1
  System_Nullable_long__o v48; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_long__o v49; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_long__o v50; // 0:x0.16
  System_Nullable_long__o v51; // 0:x0.16
  System_Nullable_long__o v52; // 0:x0.16
  System_Nullable_long__o v53; // 0:x0.16

  v49 = start;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  v48 = lenght;
  if ( (byte_593EF90 & 1) == 0 )
  {
    sub_21FFC50(&byte___TypeInfo);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_long__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_long__get_Value__);
    byte_593EF90 = 1;
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
    v50.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v50.fields.hasValue = &v49;
    Value = System_Nullable_long___get_Value(v50, v30);
    if ( v48.fields.hasValue )
    {
LABEL_7:
      v51.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v51.fields.hasValue = &v48;
      max_length = System_Nullable_long___get_Value(v51, v30);
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
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v35 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Byte_array *, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
          this,
          v13,
          Value,
          max_length,
          _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v43 = (System_Object_array *)v35;
  if ( !v35 )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v49.fields.hasValue )
    {
      v52.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v52.fields.hasValue = &v49;
      v35 = System_Nullable_long___get_Value(v52, v37);
      v45 = v35;
    }
    else
    {
      v45 = 0;
    }
    if ( v48.fields.hasValue )
    {
      v53.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v53.fields.hasValue = &v48;
      v35 = System_Nullable_long___get_Value(v53, v37);
      LODWORD(v46) = v35;
      if ( klass )
      {
LABEL_17:
        v47 = MiniMessagePack_MiniMessagePacker__Unpack(klass, v13, v45, v46, 0);
        v43 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                       this,
                                       v47,
                                       this->klass->vtable._15_getList.method);
        goto LABEL_18;
      }
    }
    else
    {
      v46 = v13->max_length;
      if ( klass )
        goto LABEL_17;
    }
    sub_21FFECC(v35, v36);
  }
LABEL_18:
  p_seriazlier->klass = 0;
  sub_21FFBF4(p_seriazlier, 0, (System_String_o *)v37, v38, v39, v40, v41, v42);
  return v43;
}


System_String_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_3EE3C10 *method)
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
  if ( (byte_593EF97 & 1) == 0 )
  {
    sub_21FFC50(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593EF97 = 1;
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


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___directGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo_3EE23FC *method)
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

  if ( (byte_593EF8E & 1) == 0 )
  {
    sub_21FFC50(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_IO_MemoryStream_TypeInfo);
    byte_593EF8E = 1;
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


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_3EE3B38 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  _DWORD *v12; // x10
  __int64 v13; // x0
  Il2CppObject *v15; // [xsp+8h] [xbp-28h] BYREF

  klass = method->klass;
  v15 = 0;
  v6 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v8 = v6;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
  v10 = *(_QWORD *)v8;
  v11 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
  {
    v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
    while ( *((_QWORD *)v12 - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = v10 + 16LL * (*v12 + 1) + 312;
  }
  else
  {
LABEL_8:
    v13 = sub_2237E2C(v8, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppObject **, _QWORD))v13)(
          v8,
          key,
          &v15,
          *(_QWORD *)(v13 + 8))
      & 1) != 0 )
    return v15;
  else
    return 0;
}


System_Collections_ObjectModel_ObservableCollection_TEntity__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE3A48 *method)
{
  return this->fields.list;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE3A34 *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_3868664 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_36A52E4 *method)
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


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3EE2390 *method)
{
  if ( (byte_593EF8D & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_593EF8D = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, obj);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_38A056C *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE234C *method)
{
  return this->fields._lookup != 0;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3EE235C *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *result; // x0

  result = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  if ( !result )
  {
    ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable->methodPointer)(this);
    return (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  }
  return result;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___isEntityExistsFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_3EE3D7C *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0

  v5 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Int64_array *))method->klass->rgctx_data->_48_DataMasterBase_TMaster__TEntity__PKType__createKey->methodPointer)(
         this,
         args);
  v6 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v8 = v6;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
  v10 = *(_QWORD *)v8;
  v11 = *(unsigned __int16 *)(*(_QWORD *)v8 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v8 + 302LL) )
  {
    v12 = (int *)(*(_QWORD *)(v10 + 176) + 8LL);
    while ( *((_QWORD *)v12 - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v11;
      v12 += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = v10 + 16LL * *v12 + 312;
  }
  else
  {
LABEL_8:
    v13 = sub_2237E2C(v8, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))v13)(v8, v5, *(_QWORD *)(v13 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___isEntityExistsFromId_65945364(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_3EE3F14 *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  int *v11; // x10
  __int64 v12; // x0

  v5 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v5 )
    sub_21FFECC(0, v6);
  v7 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_WORD *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_2237AF8();
  v9 = *(_QWORD *)v7;
  v10 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
  {
    v11 = (int *)(*(_QWORD *)(v9 + 176) + 8LL);
    while ( *((_QWORD *)v11 - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v10;
      v11 += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = v9 + 16LL * *v11 + 312;
  }
  else
  {
LABEL_8:
    v12 = sub_2237E2C(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v12)(v7, key, *(_QWORD *)(v12 + 8));
}
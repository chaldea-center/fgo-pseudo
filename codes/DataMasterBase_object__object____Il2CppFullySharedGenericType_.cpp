void DataMasterBase_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_339B518 *method)
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

  if ( (byte_4C3D310 & 1) == 0 )
  {
    sub_1C32C20(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_4C3D310 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C83334();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C32E6C(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_38FB334 *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.list, (int32_t)v7, v8, v9);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_30DD65C *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v11 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1C32E6C(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v13 = v11;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0);
  if ( !list )
    sub_1C32E7C(v14);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, const MethodInfo *))list->klass->vtable._39_add_CollectionChanged.methodPtr)(
    list,
    v13,
    list->klass->vtable._39_add_CollectionChanged.method);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_339C9B0 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_332FF34 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339C200 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_3330084 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339C3F4 *method)
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

  if ( (byte_4C3D316 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C3D316 = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C83334();
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3458418 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v5;
  p_lookup = &this->fields._lookup;
  sub_1C32BC4((CGThumbnailListItem_o *)p_lookup, (int32_t)v5, v7, v8);
  v9 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v9 )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v9,
                 (const MethodInfo_3330280 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1C32E7C(0);
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
      v14 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C83334();
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
      v19 = sub_1C83438(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v21 = (Il2CppObject *)v20;
    if ( !v20 )
      sub_1C32E7C(0);
    v22 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 376LL))(
                            v20,
                            *(_QWORD *)(*(_QWORD *)v20 + 384LL));
    if ( v22 )
    {
      if ( !*p_lookup )
        sub_1C32E7C(0);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v22,
              (const MethodInfo_3458FBC *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1C32E7C(0);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v22,
          v21,
          (const MethodInfo_3458DC8 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
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
    v26 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_339C8B4 *method)
{
  __int64 Instance; // x0
  int v7; // w8
  __int64 v8; // x21
  int i; // w23
  __int64 v10; // x22
  __int64 v11; // x0

  if ( (byte_4C3D318 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D318 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
LABEL_15:
    sub_1C32E7C(Instance);
  }
  v7 = *(_DWORD *)(Instance + 24);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    for ( i = 0; i < v7; ++i )
    {
      if ( i >= (unsigned int)v7 )
        sub_1C32E84(Instance);
      v10 = *(_QWORD *)(v8 + 8LL * i + 32);
      if ( !v10 )
        goto LABEL_15;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 376LL))(
              v10,
              *(_QWORD *)(*(_QWORD *)v10 + 384LL));
      if ( !v11 )
        return v11;
      Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, __int64))method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity->methodPointer)(
                   this,
                   v10);
      v7 = *(_DWORD *)(v8 + 24);
    }
    if ( (Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v11) = 1;
  return v11;
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339DBF4 *method)
{
  ;
}


DataEntityBase_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339CB04 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4C3D319 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_4C3D319 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339CB70 *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_4C3D31A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_1C32C20(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_4C3D31A = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C32E6C(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_59749188(
    v4,
    list,
    (const MethodInfo_38FB344 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_339D830 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v6; // x9
  __int64 v7; // x8
  __int16 v8; // w10
  __int64 v9; // x0
  char *v10; // x22
  int v11; // w0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v12; // x3
  _QWORD v15[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v15[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v15[0] = key.klass;
  v6 = *(_QWORD *)(*((_QWORD *)key.monitor + 4) + 192LL);
  v7 = *(_QWORD *)(v6 + 432);
  v8 = *(_WORD *)(v7 + 309);
  if ( (v8 & 1) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 432);
  }
  else
  {
    v9 = sub_1C83334();
    v6 = *(_QWORD *)(monitor[4] + 192LL);
    v7 = *(_QWORD *)(v6 + 432);
    v8 = *(_WORD *)(v7 + 309);
  }
  v10 = (char *)&v15[-1] - (((unsigned int)(*(_DWORD *)(v9 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v8 & 1) != 0 )
  {
    v11 = v7;
  }
  else
  {
    v11 = sub_1C83334();
    v6 = *(_QWORD *)(monitor[4] + 192LL);
    v7 = *(_QWORD *)(v6 + 432);
  }
  if ( *(int *)(v7 + 40) >= 0 )
    v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v15;
  else
    v12 = klass;
  sub_1C33688(v11, *(_QWORD *)(v6 + 440), (int)v10, v12);
  return (Il2CppObject *)(**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 448LL))(
                           this,
                           v15[1]);
}


System_Type_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339DB90 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v4; // x0

  if ( (byte_4C3D31D & 1) == 0 )
  {
    sub_1C32C20(&System_Type_TypeInfo);
    byte_4C3D31D = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v4, 0);
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339DA6C *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_332FCA8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_332FCA8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_332FD38 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1C32E7C(list);
  }
  return 0;
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_339D06C *method)
{
  __int64 v7; // x0
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x22
  System_Collections_IList_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  System_NotImplementedException_o *v15; // x20
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
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x23
  Il2CppObject *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x22
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x22
  System_Collections_IList_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x22
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  System_Collections_IEnumerator_c **v51; // x10
  __int64 v52; // x0
  __int64 v53; // x23
  __int64 v54; // x1
  __int64 v55; // x25
  __int64 v56; // x0
  Il2CppObject *v57; // x23
  struct System_Collections_Generic_Dictionary_string__TEntity__o *v58; // x24
  Il2CppObject *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x8
  __int64 v62; // x22
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0

  if ( (byte_4C3D31C & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerable_TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    byte_4C3D31C = 1;
  }
  v7 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_50_DataMasterBase_TMaster__TEntity__PKType__get_IsCreatedLookupTable->methodPointer)(this);
  if ( (v7 & 1) != 0 )
  {
    if ( !e )
      sub_1C32E7C(v7);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v14 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
          v15 = (System_NotImplementedException_o *)sub_1C32E6C(v14);
          System_NotImplementedException___ctor(v15, 0);
          sub_1C32D48(v15, method);
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
        v11 = *(unsigned __int16 *)&oldItems->klass->_2.rank;
        if ( *(_WORD *)&oldItems->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v11;
            p_offset += 4;
            if ( !v11 )
              goto LABEL_11;
          }
          v13 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_11:
          v13 = sub_1C83438(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v16 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v13)(
                oldItems,
                *(_QWORD *)(v13 + 8));
        if ( !v16 )
          sub_1C32E7C(0);
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
            v20 = sub_1C83438(v16, System_Collections_IEnumerator_TypeInfo, 0);
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
            v24 = sub_1C83438(v16, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C83334();
          v27 = sub_1C32D5C(v25, _29_TEntity);
          v28 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
            v28 = sub_1C83334();
          if ( v27 )
          {
            v29 = sub_1C32D5C(v27, v28);
            v30 = v29;
            if ( !v29 )
            {
              sub_1C3313C(v27);
LABEL_89:
              sub_1C3313C(v28);
LABEL_90:
              sub_1C32E7C(v32);
            }
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 376LL))(
                   v29,
                   *(_QWORD *)(*(_QWORD *)v29 + 384LL)) )
            {
              lookup = this->fields._lookup;
              v32 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 376LL))(
                                      v30,
                                      *(_QWORD *)(*(_QWORD *)v30 + 384LL));
              if ( !lookup )
                goto LABEL_90;
              System_Collections_Generic_Dictionary_object__object___Remove(
                (System_Collections_Generic_Dictionary_object__object__o *)lookup,
                v32,
                (const MethodInfo_345A2C4 *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v33 = sub_1C32D5C(v16, System_IDisposable_TypeInfo);
        if ( v33 )
        {
          v34 = *(_QWORD *)v33;
          v35 = v33;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
          {
            v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
            {
              --v36;
              v37 += 4;
              if ( !v36 )
                goto LABEL_44;
            }
            v38 = v34 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_44:
            v38 = sub_1C83438(v33, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v40 = newItems->klass;
        v41 = *(unsigned __int16 *)&newItems->klass->_2.rank;
        if ( *(_WORD *)&newItems->klass->_2.rank )
        {
          v42 = &v40->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_52;
          }
          v43 = (__int64)&v40->vtable[*v42];
        }
        else
        {
LABEL_52:
          v43 = sub_1C83438(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v44 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(
                newItems,
                *(_QWORD *)(v43 + 8));
        if ( !v44 )
          sub_1C32E7C(0);
        while ( 1 )
        {
          v45 = *(_QWORD *)v44;
          v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
          {
            v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v46;
              v47 += 4;
              if ( !v46 )
                goto LABEL_59;
            }
            v48 = v45 + 16LL * *v47 + 312;
          }
          else
          {
LABEL_59:
            v48 = sub_1C83438(v44, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
            break;
          v49 = *(_QWORD *)v44;
          v50 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
          {
            v51 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *(v51 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v50;
              v51 += 2;
              if ( !v50 )
                goto LABEL_66;
            }
            v52 = v49 + 16LL * (*(_DWORD *)v51 + 1) + 312;
          }
          else
          {
LABEL_66:
            v52 = sub_1C83438(v44, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v44, *(_QWORD *)(v52 + 8));
          v54 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v54 + 309) & 1) == 0 )
            v54 = sub_1C83334();
          v28 = sub_1C32D5C(v53, v54);
          v55 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
            v55 = sub_1C83334();
          if ( v28 )
          {
            v56 = sub_1C32D5C(v28, v55);
            v57 = (Il2CppObject *)v56;
            if ( !v56 )
              goto LABEL_89;
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v56 + 376LL))(
                   v56,
                   *(_QWORD *)(*(_QWORD *)v56 + 384LL)) )
            {
              v58 = this->fields._lookup;
              v59 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v57->klass->vtable[4].methodPtr)(
                                      v57,
                                      v57->klass->vtable[4].method);
              if ( !v58 )
                sub_1C32E7C(v59);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)v58,
                v59,
                v57,
                (const MethodInfo_3458DB4 *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v60 = sub_1C32D5C(v44, System_IDisposable_TypeInfo);
        if ( v60 )
        {
          v61 = *(_QWORD *)v60;
          v62 = v60;
          v63 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
          {
            v64 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
            {
              --v63;
              v64 += 4;
              if ( !v63 )
                goto LABEL_82;
            }
            v65 = v61 + 16LL * *v64 + 312;
          }
          else
          {
LABEL_82:
            v65 = sub_1C83438(v60, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
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
        const MethodInfo_339D82C *method)
{
  ;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_339C9D4 *method)
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
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C83334();
  v7 = sub_1C32E6C(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor->methodPointer)();
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
                                                           entity,
                                                           entity->klass->vtable[4].method);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v8, v9, v10);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C83334();
  v13 = (System_Predicate_object__o *)sub_1C32E6C(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_3908DF8 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v13,
                   (const MethodInfo_316AC40 *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_3330670 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1C32E7C(v8);
  }
  return Index_object >= 0;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_339C224 *method)
{
  int64_t value; // x21
  __int64 v7; // x22
  int64_t v8; // x23
  __int64 v9; // x24
  Il2CppObject *Instance; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x26
  System_Collections_Generic_IEnumerable_T__o *v14; // x0

  value = lenght.fields.value;
  v7 = *(_QWORD *)&lenght.fields.hasValue;
  v8 = start.fields.value;
  v9 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4C3D315 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D315 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || !this
    || (((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._6_Clear.methodPtr)(
          this,
          this->klass->vtable._6_Clear.method),
        list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list,
        v14 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, __int64, int64_t, __int64, int64_t))method->klass->rgctx_data->_22_DataMasterBase_TMaster__TEntity__PKType__abstractGetList->methodPointer)(
                                                               this,
                                                               objOrBytes,
                                                               v9,
                                                               v8,
                                                               v7,
                                                               value),
        ObservableCollectionExtensions__AddRange_object_(
          list,
          v14,
          (const MethodInfo_3169AB4 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  ++this->fields.revision;
  return 1;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___ReplacedForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_339C31C *method)
{
  int64_t value; // x21
  __int64 v10; // x22
  int64_t v11; // x23
  __int64 v12; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( !this )
    sub_1C32E7C(0);
  value = lenght.fields.value;
  v10 = *(_QWORD *)&lenght.fields.hasValue;
  v11 = start.fields.value;
  v12 = *(_QWORD *)&start.fields.hasValue;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, const MethodInfo *))this->klass->vtable._6_Clear.methodPtr)(
    this,
    this->klass->vtable._6_Clear.method);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, System_Threading_SynchronizationContext_o *, __int64, int64_t, __int64, int64_t, System_Byte_array *, MethodInfo *))method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread->methodPointer)(
                                                         this,
                                                         objOrBytes,
                                                         context,
                                                         v12,
                                                         v11,
                                                         v10,
                                                         value,
                                                         work,
                                                         method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v16,
    (const MethodInfo_3169AB4 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_339D948 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  __int64 v8; // x9
  __int64 v9; // x8
  __int16 v10; // w10
  __int64 v11; // x0
  char *v12; // x23
  int v13; // w0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *v14; // x3
  _QWORD v17[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v17[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v17[0] = key.klass;
  v8 = *(_QWORD *)(*((_QWORD *)key.monitor + 4) + 192LL);
  v9 = *(_QWORD *)(v8 + 432);
  v10 = *(_WORD *)(v9 + 309);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 432);
  }
  else
  {
    v11 = sub_1C83334();
    v8 = *(_QWORD *)(monitor[4] + 192LL);
    v9 = *(_QWORD *)(v8 + 432);
    v10 = *(_WORD *)(v9 + 309);
  }
  v12 = (char *)&v17[-1] - (((unsigned int)(*(_DWORD *)(v11 + 252) + 16) + 15LL) & 0x1FFFFFFF0LL);
  if ( (v10 & 1) != 0 )
  {
    v13 = v9;
  }
  else
  {
    v13 = sub_1C83334();
    v8 = *(_QWORD *)(monitor[4] + 192LL);
    v9 = *(_QWORD *)(v8 + 432);
  }
  if ( *(int *)(v9 + 40) >= 0 )
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v17;
  else
    v14 = klass;
  sub_1C33688(v13, *(_QWORD *)(v8 + 440), (int)v12, v14);
  return (**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject **, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 456LL))(
           this,
           entity,
           v17[1])
       & 1;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_339CEF8 *method)
{
  __int64 v7; // x0
  __int64 v8; // x21
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v10; // x8
  __int64 v11; // x9
  _DWORD *v12; // x10
  __int64 v13; // x0

  v7 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v7 )
    sub_1C32E7C(0);
  v8 = v7;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C83334();
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
    v13 = sub_1C83438(v8, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppObject **, _QWORD))v13)(
           v8,
           key,
           result,
           *(_QWORD *)(v13 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_339DAEC *method)
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
    (const MethodInfo_332FCA8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C32E7C(list);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_332FD38 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1C32BC4((CGThumbnailListItem_o *)entity, (int32_t)Item, v9, v10);
  return Count > 0;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_339C730 *method)
{
  __int64 Instance; // x0
  __int64 v7; // x21
  unsigned __int64 v8; // x23
  unsigned int v9; // w8

  if ( (byte_4C3D317 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D317 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  v7 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) < 1 )
    return 1;
  v8 = 0;
  v9 = *(_QWORD *)(Instance + 24);
  while ( 1 )
  {
    if ( v8 >= v9 )
      sub_1C32E84(Instance);
    Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity->methodPointer)(
                 this,
                 *(_QWORD *)(v7 + 32 + 8 * v8));
    if ( (Instance & 1) == 0 )
      break;
    v9 = *(_DWORD *)(v7 + 24);
    if ( (__int64)++v8 >= (int)v9 )
    {
      ++this->fields.revision;
      return 1;
    }
  }
  return 0;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___UpdatedEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_339C82C *method)
{
  if ( !entity )
    sub_1C32E7C(this);
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
        const MethodInfo_339B948 *method)
{
  bool hasValue; // w23
  bool v7; // w24
  long double v10; // q0
  MiniMessagePack_MiniMessagePacker_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int64_t Value; // x0
  const MethodInfo_38BE6E0 *v15; // x2
  int64_t v16; // x21
  unsigned int v18; // w24
  int64_t v19; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  System_Object_array *v21; // x22
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
  if ( (byte_4C3D313 & 1) == 0 )
  {
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_long__get_HasValue__);
    sub_1C32C20(&Method_System_Nullable_long__get_Value__);
    byte_4C3D313 = 1;
  }
  if ( !sub_1C32D5C(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method,
                                    v10);
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C32E6C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  this->fields.seriazlier = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v11, v12, v13);
  if ( objOrBytes )
  {
    Value = sub_1C32D5C(objOrBytes, byte___TypeInfo);
    v16 = Value;
    if ( !Value )
    {
      v10 = sub_1C3313C(objOrBytes);
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
    v26.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v26.fields.hasValue = &v25;
    Value = System_Nullable_long___get_Value(v26, v15);
    hasValue = v24.fields.hasValue;
    v18 = Value;
  }
  else
  {
    v18 = 0;
  }
  if ( hasValue )
  {
    v27.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v27.fields.hasValue = &v24;
    v19 = System_Nullable_long___get_Value(v27, v15);
  }
  else
  {
    if ( !v16 )
      sub_1C32E7C(Value);
    v19 = *(_QWORD *)(v16 + 24);
  }
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v21 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, int64_t, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
                                 this,
                                 v16,
                                 v18,
                                 v19,
                                 _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seriazlier, 0, v22, v23);
  return v21;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_339BC3C *method)
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
  const MethodInfo_38BE6E0 *v21; // x2
  unsigned int Value; // w24
  int64_t max_length; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  int64_t v26; // x0
  const MethodInfo_38BE6E0 *v27; // x2
  const MethodInfo *v28; // x3
  System_Object_array *v29; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v31; // w24
  il2cpp_array_size_t v32; // x3
  Il2CppObject *v33; // x1
  System_Nullable_long__o v34; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v35; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v36; // 0:x0.16
  System_Nullable_long__o v37; // 0:x0.16
  System_Nullable_long__o v38; // 0:x0.16
  System_Nullable_long__o v39; // 0:x0.16

  v35 = start;
  v34 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4C3D314 & 1) == 0 )
  {
    sub_1C32C20(&byte___TypeInfo);
    sub_1C32C20(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_long__get_HasValue__);
    sub_1C32C20(&Method_System_Nullable_long__get_Value__);
    byte_4C3D314 = 1;
  }
  v12 = sub_1C32D5C(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method);
  v13 = (System_Byte_array *)v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C32E6C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0);
  this->fields.seriazlier = v14;
  p_seriazlier = (CGThumbnailListItem_o *)&this->fields.seriazlier;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v14, v16, v17);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1C32E7C(0);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1C32BC4((CGThumbnailListItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v18, v19);
  if ( v9 )
  {
    v36.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v36.fields.hasValue = &v35;
    hasValue = v34.fields.hasValue;
    Value = System_Nullable_long___get_Value(v36, v21);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v37.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v37.fields.hasValue = &v34;
    max_length = System_Nullable_long___get_Value(v37, v21);
  }
  else
  {
    max_length = v13->max_length;
  }
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v26 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Byte_array *, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
          this,
          v13,
          Value,
          max_length,
          _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v29 = (System_Object_array *)v26;
  if ( !v26 )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v35.fields.hasValue )
    {
      v38.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v38.fields.hasValue = &v35;
      v26 = System_Nullable_long___get_Value(v38, v27);
      v31 = v26;
    }
    else
    {
      v31 = 0;
    }
    if ( v34.fields.hasValue )
    {
      v39.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v39.fields.hasValue = &v34;
      v26 = System_Nullable_long___get_Value(v39, v27);
      LODWORD(v32) = v26;
      if ( klass )
      {
LABEL_18:
        v33 = MiniMessagePack_MiniMessagePacker__Unpack(klass, v13, v31, v32, 0);
        v29 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                       this,
                                       v33,
                                       this->klass->vtable._15_getList.method);
        goto LABEL_19;
      }
    }
    else
    {
      v32 = v13->max_length;
      if ( klass )
        goto LABEL_18;
    }
    sub_1C32E7C(v26);
  }
LABEL_19:
  p_seriazlier->klass = 0;
  sub_1C32BC4(p_seriazlier, 0, (int32_t)v27, v28);
  return v29;
}


System_String_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_339CCC0 *method)
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
  if ( (byte_4C3D31B & 1) == 0 )
  {
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3D31B = 1;
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
    v10 = (System_Text_StringBuilder_o *)sub_1C32E6C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_63596960(v10, 128, 0);
    p_sb->klass = (CGThumbnailListItem_c *)v10;
    sub_1C32BC4(p_sb, (int32_t)v10, v11, v12);
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
    System_Text_StringBuilder__Append_63606192((System_Text_StringBuilder_o *)this, args->m_Items[v14], 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_63605936((System_Text_StringBuilder_o *)this, 0x3Au, 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v13 = args->max_length;
    ++v14;
  }
  while ( v6 != v14 );
  if ( (unsigned int)v6 >= v13 )
LABEL_20:
    sub_1C32E84(this);
  if ( !this
    || (System_Text_StringBuilder__Append_63606192((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0) )
  {
LABEL_19:
    sub_1C32E7C(this);
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
        const MethodInfo_339B6D0 *method)
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

  if ( (byte_4C3D312 & 1) == 0 )
  {
    sub_1C32C20(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_IO_MemoryStream_TypeInfo);
    byte_4C3D312 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_1C32E6C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64341276(v10, bytes, start, length, 0);
  seriazlier = this->fields.seriazlier;
  v12 = (DataIO_Runtime_Deserializer_o *)sub_1C32E6C(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v12, seriazlier, 0);
  if ( !v12 )
    sub_1C32E7C(v13);
  v14 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v12,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v10,
                                              0);
  if ( !v14 )
  {
    v22 = sub_1C32C34(&System_FormatException_TypeInfo);
    v23 = (System_FormatException_o *)sub_1C32E6C(v22);
    v24 = (System_String_o *)sub_1C32C34(&StringLiteral_19801/*"getList family cannot return null."*/);
    System_FormatException___ctor_64943900(v23, v24, 0);
    sub_1C32D48(v23, method);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v14,
                                                               (const MethodInfo_310C5CC *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_311CA8C *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
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
      v20 = sub_1C83438(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v20)(v10, *(_QWORD *)(v20 + 8));
  }
  return v16;
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_339CBEC *method)
{
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v8; // x8
  __int64 v9; // x9
  _DWORD *v10; // x10
  __int64 v11; // x0
  Il2CppObject *v13; // [xsp+8h] [xbp-28h] BYREF

  v13 = 0;
  v5 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v5 )
    sub_1C32E7C(0);
  v6 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C83334();
  v8 = *(_QWORD *)v6;
  v9 = *(unsigned __int16 *)(*(_QWORD *)v6 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v6 + 302LL) )
  {
    v10 = (_DWORD *)(*(_QWORD *)(v8 + 176) + 8LL);
    while ( *((_QWORD *)v10 - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = v8 + 16LL * (*v10 + 1) + 312;
  }
  else
  {
LABEL_8:
    v11 = sub_1C83438(v6, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppObject **, _QWORD))v11)(
          v6,
          key,
          &v13,
          *(_QWORD *)(v11 + 8))
      & 1) != 0 )
    return v13;
  else
    return 0;
}


System_Collections_ObjectModel_ObservableCollection_TEntity__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339CAFC *method)
{
  return this->fields.list;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339CAE8 *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_311CA8C *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3004674 *method)
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
  System_Collections_Generic_List_int__o *v22; // x0
  System_Converter_T__TOutput__o *v23; // x1
  const MethodInfo_30047F0 *v24; // x2

  if ( !method->rgctx_data )
    sub_1C83390(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_332FCA8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C83334(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C32CC8(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1C32E7C(list);
  v9 = list;
  v10 = 0;
  p_monitor = (CGThumbnailListItem_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_332FCA8 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_332FD38 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C83334(v12);
    v15 = sub_1C32D5C(v13, _1_T);
    v19 = v15;
    v20 = method->rgctx_data->_1_T;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
    {
      v15 = sub_1C83334(v18);
      v20 = (Il2CppClass *)v15;
    }
    if ( v19 )
    {
      v15 = sub_1C32D5C(v19, v20);
      v21 = (CGThumbnailListItem_c *)v15;
      if ( !v15 )
      {
        sub_1C3313C(v19);
        return (System_Object_array *)System_Collections_Generic_List_int___ConvertAll_object_(v22, v23, v24);
      }
    }
    else
    {
      v21 = 0;
    }
    if ( v10 >= LODWORD(v9[1].klass) )
      sub_1C32E84(v15);
    p_monitor->klass = v21;
    sub_1C32BC4(p_monitor, (int32_t)v21, v16, v17);
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    p_monitor = (CGThumbnailListItem_o *)((char *)p_monitor + 8);
    if ( !v8 )
      goto LABEL_21;
  }
  return (System_Object_array *)v9;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_339B664 *method)
{
  if ( (byte_4C3D311 & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    byte_4C3D311 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_314C85C *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339B620 *method)
{
  return this->fields._lookup != 0;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_339B630 *method)
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
        const MethodInfo_339CE2C *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  int *v11; // x10
  __int64 v12; // x0

  v5 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Int64_array *))method->klass->rgctx_data->_48_DataMasterBase_TMaster__TEntity__PKType__createKey->methodPointer)(
         this,
         args);
  v6 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v6 )
    sub_1C32E7C(0);
  v7 = v6;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C83334();
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
    v12 = sub_1C83438(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))v12)(v7, v5, *(_QWORD *)(v12 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___isEntityExistsFromId_54120380(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_339CFBC *method)
{
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v8; // x8
  __int64 v9; // x9
  int *v10; // x10
  __int64 v11; // x0

  v5 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v5 )
    sub_1C32E7C(0);
  v6 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C83334();
  v8 = *(_QWORD *)v6;
  v9 = *(unsigned __int16 *)(*(_QWORD *)v6 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v6 + 302LL) )
  {
    v10 = (int *)(*(_QWORD *)(v8 + 176) + 8LL);
    while ( *((_QWORD *)v10 - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v9;
      v10 += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = v8 + 16LL * *v10 + 312;
  }
  else
  {
LABEL_8:
    v11 = sub_1C83438(v6, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v11)(v6, key, *(_QWORD *)(v11 + 8));
}
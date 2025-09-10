void DataMasterBase_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_338CA78 *method)
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

  if ( (byte_4C2CC90 & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_4C2CC90 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C7DBA4();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C2D6DC(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_38EC6FC *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.list, (int32_t)v7, v8, v9);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_30CEBBC *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v11 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1C2D6DC(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v13 = v11;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0);
  if ( !list )
    sub_1C2D6EC(v14, v15);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, const MethodInfo *))list->klass->vtable._39_add_CollectionChanged.methodPtr)(
    list,
    v13,
    list->klass->vtable._39_add_CollectionChanged.method);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_338DF10 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_3321494 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338D760 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_33215E4 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338D954 *method)
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

  if ( (byte_4C2CC96 & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C2CC96 = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C7DBA4();
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3449978 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v5;
  p_lookup = &this->fields._lookup;
  sub_1C2D434((CGThumbnailListItem_o *)p_lookup, (int32_t)v5, v7, v8);
  v10 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v10 )
    sub_1C2D6EC(0, v9);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v10,
                 (const MethodInfo_33217E0 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1C2D6EC(0, v11);
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
      v16 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C7DBA4();
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
      v21 = sub_1C7DCA8(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
            Enumerator,
            *(_QWORD *)(v21 + 8));
    v24 = (Il2CppObject *)v22;
    if ( !v22 )
      sub_1C2D6EC(0, v23);
    v26 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 376LL))(
                            v22,
                            *(_QWORD *)(*(_QWORD *)v22 + 384LL));
    if ( v26 )
    {
      if ( !*p_lookup )
        sub_1C2D6EC(0, v25);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v26,
              (const MethodInfo_344A51C *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1C2D6EC(0, v27);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v26,
          v24,
          (const MethodInfo_344A328 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
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
    v31 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_338DE14 *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w8
  __int64 v10; // x21
  int i; // w23
  __int64 v12; // x22
  __int64 v13; // x0

  if ( (byte_4C2CC98 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2CC98 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
LABEL_15:
    sub_1C2D6EC(Instance, v7);
  }
  v9 = *(_DWORD *)(Instance + 24);
  v10 = Instance;
  if ( v9 >= 1 )
  {
    for ( i = 0; i < v9; ++i )
    {
      if ( i >= (unsigned int)v9 )
        sub_1C2D6F4(Instance, v7, v8);
      v12 = *(_QWORD *)(v10 + 8LL * i + 32);
      if ( !v12 )
        goto LABEL_15;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 376LL))(
              v12,
              *(_QWORD *)(*(_QWORD *)v12 + 384LL));
      if ( !v13 )
        return v13;
      Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, __int64))method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity->methodPointer)(
                   this,
                   v12);
      v9 = *(_DWORD *)(v10 + 24);
    }
    if ( (Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v13) = 1;
  return v13;
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338F154 *method)
{
  ;
}


DataEntityBase_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338E064 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4C2CC99 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_4C2CC99 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_30FDB2C *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338E0D0 *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_4C2CC9A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_1C2D490(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_4C2CC9A = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C2D6DC(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_59688716(
    v4,
    list,
    (const MethodInfo_38EC70C *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_338ED90 *method)
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
    v9 = sub_1C7DBA4();
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
    v11 = sub_1C7DBA4();
    v6 = *(_QWORD *)(monitor[4] + 192LL);
    v7 = *(_QWORD *)(v6 + 432);
  }
  if ( *(int *)(v7 + 40) >= 0 )
    v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v15;
  else
    v12 = klass;
  sub_1C2DEF8(v11, *(_QWORD *)(v6 + 440), (int)v10, v12);
  return (Il2CppObject *)(**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 448LL))(
                           this,
                           v15[1]);
}


System_Type_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338F0F0 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v4; // x0

  if ( (byte_4C2CC9D & 1) == 0 )
  {
    sub_1C2D490(&System_Type_TypeInfo);
    byte_4C2CC9D = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v4, 0);
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338EFCC *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3321208 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3321208 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_3321298 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1C2D6EC(list, method);
  }
  return 0;
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_338E5CC *method)
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
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x23
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
  struct System_Collections_Generic_Dictionary_string__TEntity__o *v62; // x24
  Il2CppObject *v63; // x0
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x22
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0

  if ( (byte_4C2CC9C & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C2CC9C = 1;
  }
  v7 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_50_DataMasterBase_TMaster__TEntity__PKType__get_IsCreatedLookupTable->methodPointer)(this);
  if ( (v7 & 1) != 0 )
  {
    if ( !e )
      sub_1C2D6EC(v7, v8);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v15 = sub_1C2D4A4(&System_NotImplementedException_TypeInfo);
          v16 = (System_NotImplementedException_o *)sub_1C2D6DC(v15);
          System_NotImplementedException___ctor(v16, 0);
          sub_1C2D5B8(v16, method);
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
          v14 = sub_1C7DCA8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v18 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v14)(
                oldItems,
                *(_QWORD *)(v14 + 8));
        if ( !v18 )
          sub_1C2D6EC(0, v17);
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
            v22 = sub_1C7DCA8(v18, System_Collections_IEnumerator_TypeInfo, 0);
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
            v26 = sub_1C7DCA8(v18, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C7DBA4();
          v29 = sub_1C2D5CC(v27, _29_TEntity);
          v30 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
            v30 = sub_1C7DBA4();
          if ( v29 )
          {
            v31 = sub_1C2D5CC(v29, v30);
            v32 = v31;
            if ( !v31 )
            {
              sub_1C2D9AC(v29);
LABEL_89:
              sub_1C2D9AC(v30);
LABEL_90:
              sub_1C2D6EC(v34, v35);
            }
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 376LL))(
                   v31,
                   *(_QWORD *)(*(_QWORD *)v31 + 384LL)) )
            {
              lookup = this->fields._lookup;
              v34 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 376LL))(
                                      v32,
                                      *(_QWORD *)(*(_QWORD *)v32 + 384LL));
              v35 = v34;
              if ( !lookup )
                goto LABEL_90;
              System_Collections_Generic_Dictionary_object__object___Remove(
                (System_Collections_Generic_Dictionary_object__object__o *)lookup,
                v34,
                (const MethodInfo_344B824 *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v36 = sub_1C2D5CC(v18, System_IDisposable_TypeInfo);
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
            v41 = sub_1C7DCA8(v36, System_IDisposable_TypeInfo, 0);
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
              goto LABEL_52;
          }
          v46 = (__int64)&v43->vtable[*v45];
        }
        else
        {
LABEL_52:
          v46 = sub_1C7DCA8(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v46)(
                newItems,
                *(_QWORD *)(v46 + 8));
        if ( !v48 )
          sub_1C2D6EC(0, v47);
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
            v52 = sub_1C7DCA8(v48, System_Collections_IEnumerator_TypeInfo, 0);
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
            v56 = sub_1C7DCA8(v48, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
          v58 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
            v58 = sub_1C7DBA4();
          v30 = sub_1C2D5CC(v57, v58);
          v59 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
            v59 = sub_1C7DBA4();
          if ( v30 )
          {
            v60 = sub_1C2D5CC(v30, v59);
            v61 = (Il2CppObject *)v60;
            if ( !v60 )
              goto LABEL_89;
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v60 + 376LL))(
                   v60,
                   *(_QWORD *)(*(_QWORD *)v60 + 384LL)) )
            {
              v62 = this->fields._lookup;
              v63 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))v61->klass->vtable[4].methodPtr)(
                                      v61,
                                      v61->klass->vtable[4].method);
              if ( !v62 )
                sub_1C2D6EC(v63, v63);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)v62,
                v63,
                v61,
                (const MethodInfo_344A314 *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v64 = sub_1C2D5CC(v48, System_IDisposable_TypeInfo);
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
            v69 = sub_1C7DCA8(v64, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
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
        const MethodInfo_338ED8C *method)
{
  ;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_338DF34 *method)
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
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C7DBA4();
  v7 = sub_1C2D6DC(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor->methodPointer)();
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
                                                           entity,
                                                           entity->klass->vtable[4].method);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v8, v10, v11);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C7DBA4();
  v14 = (System_Predicate_object__o *)sub_1C2D6DC(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v14,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_38FA1C0 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v14,
                   (const MethodInfo_315C1A0 *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_3321BD0 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1C2D6EC(v8, v9);
  }
  return Index_object >= 0;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_338D784 *method)
{
  int64_t value; // x21
  __int64 v7; // x22
  int64_t v8; // x23
  __int64 v9; // x24
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x26
  System_Collections_Generic_IEnumerable_T__o *v15; // x0

  value = lenght.fields.value;
  v7 = *(_QWORD *)&lenght.fields.hasValue;
  v8 = start.fields.value;
  v9 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4C2CC95 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2CC95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
          (const MethodInfo_315B014 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v13);
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
        const MethodInfo_338D87C *method)
{
  int64_t value; // x21
  __int64 v10; // x22
  int64_t v11; // x23
  __int64 v12; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( !this )
    sub_1C2D6EC(0, objOrBytes);
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
    (const MethodInfo_315B014 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_338EEA8 *method)
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
    v11 = sub_1C7DBA4();
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
    v13 = sub_1C7DBA4();
    v8 = *(_QWORD *)(monitor[4] + 192LL);
    v9 = *(_QWORD *)(v8 + 432);
  }
  if ( *(int *)(v9 + 40) >= 0 )
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v17;
  else
    v14 = klass;
  sub_1C2DEF8(v13, *(_QWORD *)(v8 + 440), (int)v12, v14);
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
        const MethodInfo_338E458 *method)
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
    sub_1C2D6EC(0, v8);
  v9 = v7;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C7DBA4();
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
    v14 = sub_1C7DCA8(v9, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
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
        const MethodInfo_338F04C *method)
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
    (const MethodInfo_3321208 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C2D6EC(list, entity);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_3321298 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1C2D434((CGThumbnailListItem_o *)entity, (int32_t)Item, v9, v10);
  return Count > 0;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_338DC90 *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x21
  unsigned __int64 v10; // x23
  unsigned int v11; // w8

  if ( (byte_4C2CC97 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2CC97 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
    sub_1C2D6EC(Instance, v7);
  }
  v9 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) < 1 )
    return 1;
  v10 = 0;
  v11 = *(_QWORD *)(Instance + 24);
  while ( 1 )
  {
    if ( v10 >= v11 )
      sub_1C2D6F4(Instance, v7, v8);
    Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity->methodPointer)(
                 this,
                 *(_QWORD *)(v9 + 32 + 8 * v10));
    if ( (Instance & 1) == 0 )
      break;
    v11 = *(_DWORD *)(v9 + 24);
    if ( (__int64)++v10 >= (int)v11 )
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
        const MethodInfo_338DD8C *method)
{
  if ( !entity )
    sub_1C2D6EC(this, 0);
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
        const MethodInfo_338CEA8 *method)
{
  bool hasValue; // w23
  bool v7; // w24
  long double v10; // q0
  MiniMessagePack_MiniMessagePacker_o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int64_t Value; // x0
  __int64 v15; // x1
  const MethodInfo_38AFAA8 *v16; // x2
  int64_t v17; // x21
  unsigned int v19; // w24
  int64_t v20; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  System_Object_array *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Nullable_long__o v25; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v26; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v27; // 0:x0.16
  System_Nullable_long__o v28; // 0:x0.16

  v26 = start;
  v25 = lenght;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  if ( (byte_4C2CC93 & 1) == 0 )
  {
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_long__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_long__get_Value__);
    byte_4C2CC93 = 1;
  }
  if ( !sub_1C2D5CC(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method,
                                    v10);
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2D6DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  this->fields.seriazlier = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v11, v12, v13);
  if ( objOrBytes )
  {
    Value = sub_1C2D5CC(objOrBytes, byte___TypeInfo);
    v17 = Value;
    if ( !Value )
    {
      v10 = sub_1C2D9AC(objOrBytes);
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
    v27.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v27.fields.hasValue = &v26;
    Value = System_Nullable_long___get_Value(v27, v16);
    hasValue = v25.fields.hasValue;
    v19 = Value;
  }
  else
  {
    v19 = 0;
  }
  if ( hasValue )
  {
    v28.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v28.fields.hasValue = &v25;
    v20 = System_Nullable_long___get_Value(v28, v16);
  }
  else
  {
    if ( !v17 )
      sub_1C2D6EC(Value, v15);
    v20 = *(_QWORD *)(v17 + 24);
  }
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v22 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, int64_t, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
                                 this,
                                 v17,
                                 v19,
                                 v20,
                                 _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seriazlier, 0, v23, v24);
  return v22;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_338D19C *method)
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
  const MethodInfo_38AFAA8 *v22; // x2
  unsigned int Value; // w24
  int64_t max_length; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  int64_t v27; // x0
  __int64 v28; // x1
  const MethodInfo_38AFAA8 *v29; // x2
  const MethodInfo *v30; // x3
  System_Object_array *v31; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v33; // w24
  il2cpp_array_size_t v34; // x3
  Il2CppObject *v35; // x1
  System_Nullable_long__o v36; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v37; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v38; // 0:x0.16
  System_Nullable_long__o v39; // 0:x0.16
  System_Nullable_long__o v40; // 0:x0.16
  System_Nullable_long__o v41; // 0:x0.16

  v37 = start;
  v36 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4C2CC94 & 1) == 0 )
  {
    sub_1C2D490(&byte___TypeInfo);
    sub_1C2D490(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C2D490(&Method_System_Nullable_long__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_long__get_Value__);
    byte_4C2CC94 = 1;
  }
  v12 = sub_1C2D5CC(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method);
  v13 = (System_Byte_array *)v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2D6DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0);
  this->fields.seriazlier = v14;
  p_seriazlier = (CGThumbnailListItem_o *)&this->fields.seriazlier;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.seriazlier, (int32_t)v14, v16, v17);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1C2D6EC(0, v18);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1C2D434((CGThumbnailListItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v19, v20);
  if ( v9 )
  {
    v38.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v38.fields.hasValue = &v37;
    hasValue = v36.fields.hasValue;
    Value = System_Nullable_long___get_Value(v38, v22);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v39.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v39.fields.hasValue = &v36;
    max_length = System_Nullable_long___get_Value(v39, v22);
  }
  else
  {
    max_length = v13->max_length;
  }
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v27 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Byte_array *, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
          this,
          v13,
          Value,
          max_length,
          _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v31 = (System_Object_array *)v27;
  if ( !v27 )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v37.fields.hasValue )
    {
      v40.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v40.fields.hasValue = &v37;
      v27 = System_Nullable_long___get_Value(v40, v29);
      v33 = v27;
    }
    else
    {
      v33 = 0;
    }
    if ( v36.fields.hasValue )
    {
      v41.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v41.fields.hasValue = &v36;
      v27 = System_Nullable_long___get_Value(v41, v29);
      LODWORD(v34) = v27;
      if ( klass )
      {
LABEL_18:
        v35 = MiniMessagePack_MiniMessagePacker__Unpack(klass, v13, v33, v34, 0);
        v31 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                       this,
                                       v35,
                                       this->klass->vtable._15_getList.method);
        goto LABEL_19;
      }
    }
    else
    {
      v34 = v13->max_length;
      if ( klass )
        goto LABEL_18;
    }
    sub_1C2D6EC(v27, v28);
  }
LABEL_19:
  p_seriazlier->klass = 0;
  sub_1C2D434(p_seriazlier, 0, (int32_t)v29, v30);
  return v31;
}


System_String_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_338E220 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  int max_length; // w8
  __int64 v6; // x22
  CGThumbnailListItem_o *p_sb; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *sb; // t1
  System_Text_StringBuilder_o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x2
  unsigned int v14; // w8
  unsigned __int64 v15; // x21

  v4 = this;
  if ( (byte_4C2CC9B & 1) == 0 )
  {
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2CC9B = 1;
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
    v10 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_63536280(v10, 128, 0);
    p_sb->klass = (CGThumbnailListItem_c *)v10;
    sub_1C2D434(p_sb, (int32_t)v10, v11, v12);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0);
  this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
  v14 = args->max_length;
  v15 = 0;
  do
  {
    if ( v15 >= v14 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_63545512((System_Text_StringBuilder_o *)this, args->m_Items[v15], 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_63545256((System_Text_StringBuilder_o *)this, 0x3Au, 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v14 = args->max_length;
    ++v15;
  }
  while ( v6 != v15 );
  if ( (unsigned int)v6 >= v14 )
LABEL_20:
    sub_1C2D6F4(this, args, v13);
  if ( !this
    || (System_Text_StringBuilder__Append_63545512((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0) )
  {
LABEL_19:
    sub_1C2D6EC(this, args);
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
        const MethodInfo_338CC30 *method)
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

  if ( (byte_4C2CC92 & 1) == 0 )
  {
    sub_1C2D490(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_IO_MemoryStream_TypeInfo);
    byte_4C2CC92 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_1C2D6DC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64281340(v10, bytes, start, length, 0);
  seriazlier = this->fields.seriazlier;
  v12 = (DataIO_Runtime_Deserializer_o *)sub_1C2D6DC(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v12, seriazlier, 0);
  if ( !v12 )
    sub_1C2D6EC(v13, v14);
  v15 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v12,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v10,
                                              0);
  if ( !v15 )
  {
    v23 = sub_1C2D4A4(&System_FormatException_TypeInfo);
    v24 = (System_FormatException_o *)sub_1C2D6DC(v23);
    v25 = (System_String_o *)sub_1C2D4A4(&StringLiteral_19789/*"getList family cannot return null."*/);
    System_FormatException___ctor_64883964(v24, v25, 0);
    sub_1C2D5B8(v24, method);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v15,
                                                               (const MethodInfo_30FDB2C *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_310DFEC *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
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
      v21 = sub_1C7DCA8(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v10, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_338E14C *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity; // x1
  __int64 v9; // x8
  __int64 v10; // x9
  _DWORD *v11; // x10
  __int64 v12; // x0
  Il2CppObject *v14; // [xsp+8h] [xbp-28h] BYREF

  v14 = 0;
  v5 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v5 )
    sub_1C2D6EC(0, v6);
  v7 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C7DBA4();
  v9 = *(_QWORD *)v7;
  v10 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
  {
    v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
    while ( *((_QWORD *)v11 - 1) != _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity )
    {
      --v10;
      v11 += 4;
      if ( !v10 )
        goto LABEL_8;
    }
    v12 = v9 + 16LL * (*v11 + 1) + 312;
  }
  else
  {
LABEL_8:
    v12 = sub_1C7DCA8(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppObject **, _QWORD))v12)(
          v7,
          key,
          &v14,
          *(_QWORD *)(v12 + 8))
      & 1) != 0 )
    return v14;
  else
    return 0;
}


System_Collections_ObjectModel_ObservableCollection_TEntity__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338E05C *method)
{
  return this->fields.list;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338E048 *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_310DFEC *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_2FF5BD4 *method)
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
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  long double v18; // q0
  __int64 v19; // x25
  Il2CppClass *v20; // x24
  CGThumbnailListItem_c *v21; // x1
  System_Collections_Generic_List_int__o *v22; // x0
  System_Converter_T__TOutput__o *v23; // x1
  const MethodInfo_2FF5D50 *v24; // x2

  if ( !method->rgctx_data )
    sub_1C7DC00(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3321208 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C7DBA4(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C2D538(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1C2D6EC(list, method);
  v9 = list;
  v10 = 0;
  p_monitor = (CGThumbnailListItem_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_3321208 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3321298 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C7DBA4(v12);
    v15 = sub_1C2D5CC(v13, _1_T);
    v19 = v15;
    v20 = method->rgctx_data->_1_T;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
    {
      v15 = sub_1C7DBA4(v18);
      v20 = (Il2CppClass *)v15;
    }
    if ( v19 )
    {
      v15 = sub_1C2D5CC(v19, v20);
      v21 = (CGThumbnailListItem_c *)v15;
      if ( !v15 )
      {
        sub_1C2D9AC(v19);
        return (System_Object_array *)System_Collections_Generic_List_int___ConvertAll_object_(v22, v23, v24);
      }
    }
    else
    {
      v21 = 0;
    }
    if ( v10 >= LODWORD(v9[1].klass) )
      sub_1C2D6F4(v15, v21, v16);
    p_monitor->klass = v21;
    sub_1C2D434(p_monitor, (int32_t)v21, v16, v17);
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
        const MethodInfo_338CBC4 *method)
{
  if ( (byte_4C2CC91 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    byte_4C2CC91 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_313DDBC *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338CB80 *method)
{
  return this->fields._lookup != 0;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_338CB90 *method)
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
        const MethodInfo_338E38C *method)
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
    sub_1C2D6EC(0, v7);
  v8 = v6;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C7DBA4();
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
    v13 = sub_1C7DCA8(v8, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))v13)(v8, v5, *(_QWORD *)(v13 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___isEntityExistsFromId_54060316(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_338E51C *method)
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
    sub_1C2D6EC(0, v6);
  v7 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C7DBA4();
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
    v12 = sub_1C7DCA8(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v12)(v7, key, *(_QWORD *)(v12 + 8));
}
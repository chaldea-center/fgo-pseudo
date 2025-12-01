void DataMasterBase_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_340DB60 *method)
{
  __int64 _0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v15; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4CCCF38 & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_4CCCF38 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C47444();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C715FC(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_3976F3C *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.list, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_314B378 *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v15 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1C715FC(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v17 = v15;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0);
  if ( !list )
    sub_1C71608(v18, v19);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, const MethodInfo *))list->klass->vtable._39_add_CollectionChanged.methodPtr)(
    list,
    v17,
    list->klass->vtable._39_add_CollectionChanged.method);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_340EFF8 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_33A1E94 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_340E848 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_33A1FE4 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_340EA3C *method)
{
  __int64 _6_System_Collections_Generic_Dictionary_string__TEntity; // x0
  System_Collections_Generic_Dictionary_object__object__o *v5; // x19
  struct System_Collections_Generic_Dictionary_string__TEntity__o **p_lookup; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 _27_System_Collections_Generic_IEnumerator_TEntity; // x1
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  __int64 v29; // x1
  Il2CppObject *v30; // x23
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4CCCF3E & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CCCF3E = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C47444();
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_34CAD30 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v5;
  p_lookup = &this->fields._lookup;
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_lookup, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v14 )
    sub_1C71608(0, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v14,
                 (const MethodInfo_33A21E0 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1C71608(0, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_11;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v20 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8))
        & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C47444();
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)v24 - 1) != _27_System_Collections_Generic_IEnumerator_TEntity )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_20;
      }
      v25 = (__int64)&v22->vtable[*v24];
    }
    else
    {
LABEL_20:
      v25 = sub_1C47738(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v28 = (Il2CppObject *)v26;
    if ( !v26 )
      sub_1C71608(0, v27);
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 376LL))(
                            v26,
                            *(_QWORD *)(*(_QWORD *)v26 + 384LL));
    if ( v30 )
    {
      if ( !*p_lookup )
        sub_1C71608(0, v29);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v30,
              (const MethodInfo_34CB8D4 *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1C71608(0, v31);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v30,
          v28,
          (const MethodInfo_34CB6E0 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_32:
    v35 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_340EEFC *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  int v8; // w8
  __int64 v9; // x21
  int i; // w23
  __int64 v11; // x22
  __int64 v12; // x0

  if ( (byte_4CCCF40 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCCF40 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
LABEL_15:
    sub_1C71608(Instance, v7);
  }
  v8 = *(_DWORD *)(Instance + 24);
  v9 = Instance;
  if ( v8 >= 1 )
  {
    for ( i = 0; i < v8; ++i )
    {
      if ( i >= (unsigned int)v8 )
        sub_1C71610(Instance);
      v11 = *(_QWORD *)(v9 + 8LL * i + 32);
      if ( !v11 )
        goto LABEL_15;
      v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 376LL))(
              v11,
              *(_QWORD *)(*(_QWORD *)v11 + 384LL));
      if ( !v12 )
        return v12;
      Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, __int64))method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity->methodPointer)(
                   this,
                   v11);
      v8 = *(_DWORD *)(v9 + 24);
    }
    if ( (Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v12) = 1;
  return v12;
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_341023C *method)
{
  ;
}


DataEntityBase_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_340F14C *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4CCCF41 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_4CCCF41 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_340F1B8 *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_4CCCF42 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_1C713B0(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_4CCCF42 = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C715FC(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_60256076(
    v4,
    list,
    (const MethodInfo_3976F4C *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_340FE78 *method)
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
    v9 = sub_1C47444();
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
    v11 = sub_1C47444();
    v6 = *(_QWORD *)(monitor[4] + 192LL);
    v7 = *(_QWORD *)(v6 + 432);
  }
  if ( *(int *)(v7 + 40) >= 0 )
    v12 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v15;
  else
    v12 = klass;
  sub_1C71EEC(v11, *(_QWORD *)(v6 + 440), (int)v10, v12);
  return (Il2CppObject *)(**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))(*(_QWORD *)(monitor[4] + 192LL) + 448LL))(
                           this,
                           v15[1]);
}


System_Type_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_34101D8 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v4; // x0

  if ( (byte_4CCCF45 & 1) == 0 )
  {
    sub_1C713B0(&System_Type_TypeInfo);
    byte_4CCCF45 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v4.fields.value = (intptr_t)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v4, 0);
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_34100B4 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_33A1C08 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_33A1C08 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_33A1C98 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1C71608(list, method);
  }
  return 0;
}


void DataMasterBase_object__object____Il2CppFullySharedGenericType___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_340F6B4 *method)
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

  if ( (byte_4CCCF44 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CCCF44 = 1;
  }
  v7 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_50_DataMasterBase_TMaster__TEntity__PKType__get_IsCreatedLookupTable->methodPointer)(this);
  if ( (v7 & 1) != 0 )
  {
    if ( !e )
      sub_1C71608(v7, v8);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v15 = sub_1C713C4(&System_NotImplementedException_TypeInfo);
          v16 = (System_NotImplementedException_o *)sub_1C715FC(v15);
          System_NotImplementedException___ctor(v16, 0);
          sub_1C714D8(v16, method);
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
          v14 = sub_1C47738(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v18 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v14)(
                oldItems,
                *(_QWORD *)(v14 + 8));
        if ( !v18 )
          sub_1C71608(0, v17);
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
            v22 = sub_1C47738(v18, System_Collections_IEnumerator_TypeInfo, 0);
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
            v26 = sub_1C47738(v18, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C47444();
          v29 = sub_1C714EC(v27, _29_TEntity);
          v30 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
            v30 = sub_1C47444();
          if ( v29 )
          {
            v31 = sub_1C714EC(v29, v30);
            v32 = v31;
            if ( !v31 )
            {
              sub_1C719A4(v29);
LABEL_89:
              sub_1C719A4(v30);
LABEL_90:
              sub_1C71608(v34, v35);
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
                (const MethodInfo_34CCBDC *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v36 = sub_1C714EC(v18, System_IDisposable_TypeInfo);
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
            v41 = sub_1C47738(v36, System_IDisposable_TypeInfo, 0);
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
          v46 = sub_1C47738(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0);
        }
        v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v46)(
                newItems,
                *(_QWORD *)(v46 + 8));
        if ( !v48 )
          sub_1C71608(0, v47);
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
            v52 = sub_1C47738(v48, System_Collections_IEnumerator_TypeInfo, 0);
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
            v56 = sub_1C47738(v48, System_Collections_IEnumerator_TypeInfo, 1);
          }
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
          v58 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v58 + 309) & 1) == 0 )
            v58 = sub_1C47444();
          v30 = sub_1C714EC(v57, v58);
          v59 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v59 + 309) & 1) == 0 )
            v59 = sub_1C47444();
          if ( v30 )
          {
            v60 = sub_1C714EC(v30, v59);
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
                sub_1C71608(v63, v63);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)v62,
                v63,
                v61,
                (const MethodInfo_34CB6CC *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v64 = sub_1C714EC(v48, System_IDisposable_TypeInfo);
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
            v69 = sub_1C47738(v64, System_IDisposable_TypeInfo, 0);
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
        const MethodInfo_340FE74 *method)
{
  ;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_340F01C *method)
{
  __int64 _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType; // x8
  __int64 v7; // x21
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x22
  __int64 _39_System_Predicate_TEntity; // x0
  System_Predicate_object__o *v18; // x23
  int32_t Index_object; // w21

  _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = (__int64)method->klass->rgctx_data->_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType_;
  if ( (*(_BYTE *)(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType + 309) & 1) == 0 )
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C47444();
  v7 = sub_1C715FC(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor->methodPointer)();
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))entity->klass->vtable[4].methodPtr)(
                                                           entity,
                                                           entity->klass->vtable[4].method);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)v8, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C47444();
  v18 = (System_Predicate_object__o *)sub_1C715FC(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_39AE178 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v18,
                   (const MethodInfo_31D91A0 *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_33A25D0 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1C71608(v8, v9);
  }
  return Index_object >= 0;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_340E86C *method)
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
  if ( (byte_4CCCF3D & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCCF3D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
          (const MethodInfo_31D8014 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
    sub_1C71608(Instance, v13);
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
        const MethodInfo_340E964 *method)
{
  int64_t value; // x21
  __int64 v10; // x22
  int64_t v11; // x23
  __int64 v12; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( !this )
    sub_1C71608(0, objOrBytes);
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
    (const MethodInfo_31D8014 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_340FF90 *method)
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
    v11 = sub_1C47444();
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
    v13 = sub_1C47444();
    v8 = *(_QWORD *)(monitor[4] + 192LL);
    v9 = *(_QWORD *)(v8 + 432);
  }
  if ( *(int *)(v9 + 40) >= 0 )
    v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)v17;
  else
    v14 = klass;
  sub_1C71EEC(v13, *(_QWORD *)(v8 + 440), (int)v12, v14);
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
        const MethodInfo_340F540 *method)
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
    sub_1C71608(0, v8);
  v9 = v7;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C47444();
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
    v14 = sub_1C47738(v9, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
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
        const MethodInfo_3410134 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_33A1C08 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C71608(list, entity);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_33A1C98 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1C71354((GrandQuestFolderBoardItem_o *)entity, (int32_t)Item, v9, v10, v11, v12, v13, v14);
  return Count > 0;
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_340ED78 *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  unsigned __int64 v9; // x23
  unsigned int v10; // w8

  if ( (byte_4CCCF3F & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCCF3F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                     this,
                     obj,
                     this->klass->vtable._15_getList.method)) == 0 )
  {
    sub_1C71608(Instance, v7);
  }
  v8 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) < 1 )
    return 1;
  v9 = 0;
  v10 = *(_QWORD *)(Instance + 24);
  while ( 1 )
  {
    if ( v9 >= v10 )
      sub_1C71610(Instance);
    Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, _QWORD))method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity->methodPointer)(
                 this,
                 *(_QWORD *)(v8 + 32 + 8 * v9));
    if ( (Instance & 1) == 0 )
      break;
    v10 = *(_DWORD *)(v8 + 24);
    if ( (__int64)++v9 >= (int)v10 )
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
        const MethodInfo_340EE74 *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
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
        const MethodInfo_340DF90 *method)
{
  bool hasValue; // w23
  bool v7; // w24
  long double v10; // q0
  MiniMessagePack_MiniMessagePacker_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int64_t Value; // x0
  __int64 v19; // x1
  const MethodInfo_39394E0 *v20; // x2
  int64_t v21; // x21
  unsigned int v23; // w24
  int64_t v24; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  System_Object_array *v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Nullable_long__o v33; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v34; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v35; // 0:x0.16
  System_Nullable_long__o v36; // 0:x0.16

  v34 = start;
  v33 = lenght;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  if ( (byte_4CCCF3B & 1) == 0 )
  {
    sub_1C713B0(&byte___TypeInfo);
    sub_1C713B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_long__get_Value__);
    byte_4CCCF3B = 1;
  }
  if ( !sub_1C714EC(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method,
                                    v10);
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C715FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0);
  this->fields.seriazlier = v11;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.seriazlier, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( objOrBytes )
  {
    Value = sub_1C714EC(objOrBytes, byte___TypeInfo);
    v21 = Value;
    if ( !Value )
    {
      v10 = sub_1C719A4(objOrBytes);
      return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *, long double))this->klass->vtable._15_getList.methodPtr)(
                                      this,
                                      objOrBytes,
                                      this->klass->vtable._15_getList.method,
                                      v10);
    }
  }
  else
  {
    v21 = 0;
  }
  if ( v7 )
  {
    v35.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v35.fields.hasValue = &v34;
    Value = System_Nullable_long___get_Value(v35, v20);
    hasValue = v33.fields.hasValue;
    v23 = Value;
  }
  else
  {
    v23 = 0;
  }
  if ( hasValue )
  {
    v36.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v36.fields.hasValue = &v33;
    v24 = System_Nullable_long___get_Value(v36, v20);
  }
  else
  {
    if ( !v21 )
      sub_1C71608(Value, v19);
    v24 = *(_QWORD *)(v21 + 24);
  }
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v26 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, int64_t, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
                                 this,
                                 v21,
                                 v23,
                                 v24,
                                 _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.seriazlier, 0, v27, v28, v29, v30, v31, v32);
  return v26;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_340E284 *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x0
  System_Byte_array *v13; // x22
  MiniMessagePack_MiniMessagePacker_o *v14; // x26
  GrandQuestFolderBoardItem_o *p_seriazlier; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_39394E0 *v30; // x2
  unsigned int Value; // w24
  int64_t max_length; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  int64_t v35; // x0
  __int64 v36; // x1
  const MethodInfo_39394E0 *v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Object_array *v43; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v45; // w24
  il2cpp_array_size_t v46; // x3
  Il2CppObject *v47; // x1
  System_Nullable_long__o v48; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v49; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v50; // 0:x0.16
  System_Nullable_long__o v51; // 0:x0.16
  System_Nullable_long__o v52; // 0:x0.16
  System_Nullable_long__o v53; // 0:x0.16

  v49 = start;
  v48 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4CCCF3C & 1) == 0 )
  {
    sub_1C713B0(&byte___TypeInfo);
    sub_1C713B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_long__get_Value__);
    byte_4CCCF3C = 1;
  }
  v12 = sub_1C714EC(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._15_getList.method);
  v13 = (System_Byte_array *)v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C715FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0);
  this->fields.seriazlier = v14;
  p_seriazlier = (GrandQuestFolderBoardItem_o *)&this->fields.seriazlier;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.seriazlier, (int32_t)v14, v16, v17, v18, v19, v20, v21);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1C71608(0, v22);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&seriazlier->fields.threadSafeStringHash,
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
    hasValue = v48.fields.hasValue;
    Value = System_Nullable_long___get_Value(v50, v30);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v51.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v51.fields.hasValue = &v48;
    max_length = System_Nullable_long___get_Value(v51, v30);
  }
  else
  {
    max_length = v13->max_length;
  }
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
LABEL_18:
        v47 = MiniMessagePack_MiniMessagePacker__Unpack(klass, v13, v45, v46, 0);
        v43 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._15_getList.methodPtr)(
                                       this,
                                       v47,
                                       this->klass->vtable._15_getList.method);
        goto LABEL_19;
      }
    }
    else
    {
      v46 = v13->max_length;
      if ( klass )
        goto LABEL_18;
    }
    sub_1C71608(v35, v36);
  }
LABEL_19:
  p_seriazlier->klass = 0;
  sub_1C71354(p_seriazlier, 0, (int32_t)v37, v38, v39, v40, v41, v42);
  return v43;
}


System_String_o *DataMasterBase_object__object____Il2CppFullySharedGenericType___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_340F308 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  int max_length; // w8
  __int64 v6; // x22
  GrandQuestFolderBoardItem_o *p_sb; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *sb; // t1
  System_Text_StringBuilder_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  unsigned int v17; // w8
  unsigned __int64 v18; // x21

  v4 = this;
  if ( (byte_4CCCF43 & 1) == 0 )
  {
    sub_1C713B0(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CCCF43 = 1;
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
  p_sb = (GrandQuestFolderBoardItem_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C715FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_64109036(v10, 128, 0);
    p_sb->klass = (GrandQuestFolderBoardItem_c *)v10;
    sub_1C71354(p_sb, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0);
  this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
  v17 = args->max_length;
  v18 = 0;
  do
  {
    if ( v18 >= v17 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_64118268((System_Text_StringBuilder_o *)this, args->m_Items[v18], 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_64118012((System_Text_StringBuilder_o *)this, 0x3Au, 0);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v17 = args->max_length;
    ++v18;
  }
  while ( v6 != v18 );
  if ( (unsigned int)v6 >= v17 )
LABEL_20:
    sub_1C71610(this);
  if ( !this
    || (System_Text_StringBuilder__Append_64118268((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0) )
  {
LABEL_19:
    sub_1C71608(this, args);
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
        const MethodInfo_340DD18 *method)
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

  if ( (byte_4CCCF3A & 1) == 0 )
  {
    sub_1C713B0(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_IO_MemoryStream_TypeInfo);
    byte_4CCCF3A = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_1C715FC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_64852904(v10, bytes, start, length, 0);
  seriazlier = this->fields.seriazlier;
  v12 = (DataIO_Runtime_Deserializer_o *)sub_1C715FC(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v12, seriazlier, 0);
  if ( !v12 )
    sub_1C71608(v13, v14);
  v15 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v12,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v10,
                                              0);
  if ( !v15 )
  {
    v23 = sub_1C713C4(&System_FormatException_TypeInfo);
    v24 = (System_FormatException_o *)sub_1C715FC(v23);
    v25 = (System_String_o *)sub_1C713C4(&StringLiteral_19879/*"getList family cannot return null."*/);
    System_FormatException___ctor_65455468(v24, v25, 0);
    sub_1C714D8(v24, method);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v15,
                                                               (const MethodInfo_317A3C4 *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_318AFEC *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
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
      v21 = sub_1C47738(v10, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v10, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_340F234 *method)
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
    sub_1C71608(0, v6);
  v7 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C47444();
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
    v12 = sub_1C47738(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1);
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
        const MethodInfo_340F144 *method)
{
  return this->fields.list;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_340F130 *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_318AFEC *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_307069C *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  long double v6; // q0
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v8; // x8
  System_Collections_ObjectModel_Collection_T__o *v9; // x21
  unsigned __int64 v10; // x22
  GrandQuestFolderBoardItem_o *p_monitor; // x23
  long double v12; // q0
  System_Collections_ObjectModel_Collection_T__o *v13; // x24
  Il2CppClass *_1_T; // x1
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  long double v22; // q0
  __int64 v23; // x25
  Il2CppClass *v24; // x24
  GrandQuestFolderBoardItem_c *v25; // x1
  System_Collections_Generic_List_int__o *v26; // x0
  System_Converter_T__TOutput__o *v27; // x1
  const MethodInfo_3070818 *v28; // x2

  if ( !method->rgctx_data )
    sub_1C474A0(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33A1C08 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C47444(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C71458(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1C71608(list, method);
  v9 = list;
  v10 = 0;
  p_monitor = (GrandQuestFolderBoardItem_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_33A1C08 *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_33A1C98 *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C47444(v12);
    v15 = sub_1C714EC(v13, _1_T);
    v23 = v15;
    v24 = method->rgctx_data->_1_T;
    if ( (*(&v24->_2.bitflags2 + 2) & 1) == 0 )
    {
      v15 = sub_1C47444(v22);
      v24 = (Il2CppClass *)v15;
    }
    if ( v23 )
    {
      v15 = sub_1C714EC(v23, v24);
      v25 = (GrandQuestFolderBoardItem_c *)v15;
      if ( !v15 )
      {
        sub_1C719A4(v23);
        return (System_Object_array *)System_Collections_Generic_List_int___ConvertAll_object_(v26, v27, v28);
      }
    }
    else
    {
      v25 = 0;
    }
    if ( v10 >= LODWORD(v9[1].klass) )
      sub_1C71610(v15);
    p_monitor->klass = v25;
    sub_1C71354(p_monitor, (int32_t)v25, v16, v17, v18, v19, v20, v21);
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    p_monitor = (GrandQuestFolderBoardItem_o *)((char *)p_monitor + 8);
    if ( !v8 )
      goto LABEL_21;
  }
  return (System_Object_array *)v9;
}


System_Object_array *DataMasterBase_object__object____Il2CppFullySharedGenericType___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_340DCAC *method)
{
  if ( (byte_4CCCF39 & 1) == 0 )
  {
    sub_1C713B0(&JsonManager_TypeInfo);
    byte_4CCCF39 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_31BADBC *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_340DC68 *method)
{
  return this->fields._lookup != 0;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *DataMasterBase_object__object____Il2CppFullySharedGenericType___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_340DC78 *method)
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
        const MethodInfo_340F474 *method)
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
    sub_1C71608(0, v7);
  v8 = v6;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C47444();
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
    v13 = sub_1C47738(v8, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))v13)(v8, v5, *(_QWORD *)(v13 + 8));
}


bool DataMasterBase_object__object____Il2CppFullySharedGenericType___isEntityExistsFromId_54588932(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_340F604 *method)
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
    sub_1C71608(0, v6);
  v7 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C47444();
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
    v12 = sub_1C47738(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v12)(v7, key, *(_QWORD *)(v12 + 8));
}
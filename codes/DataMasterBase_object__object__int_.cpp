void __fastcall DataMasterBase_object__object__int____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_3259AA4 *method)
{
  __int64 _0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v15; // x0
  DataMasterBase_TMaster__TEntity__PKType__c *klass; // x8
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4BE24E5 & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    byte_4BE24E5 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C73D14();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C22084(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_37A67C8 *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.list, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0LL);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_2FB0070 *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v15 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1C22084(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v17 = v15;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0LL);
  if ( !list )
    sub_1C22094(v18, v19);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v17,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase_object__object__int___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_325AF18 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_31F6358 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void __fastcall DataMasterBase_object__object__int___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325A780 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_31F64A8 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void __fastcall DataMasterBase_object__object__int___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325A96C *method)
{
  __int64 _6_System_Collections_Generic_Dictionary_string__TEntity; // x0
  System_Collections_Generic_Dictionary_object__object__o *v5; // x19
  struct System_Collections_Generic_Dictionary_string__TEntity__o **p_lookup; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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

  if ( (byte_4BE24EB & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BE24EB = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C73D14();
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3315CD0 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v5;
  p_lookup = &this->fields._lookup;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_lookup, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  v14 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v14 )
    sub_1C22094(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v14,
                 (const MethodInfo_31F66A4 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1C22094(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C73D14();
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)v24 - 1) != _27_System_Collections_Generic_IEnumerator_TEntity )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_20;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_20:
      v25 = sub_1C73E18(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v28 = (Il2CppObject *)v26;
    if ( !v26 )
      sub_1C22094(0LL, v27);
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 376LL))(
                            v26,
                            *(_QWORD *)(*(_QWORD *)v26 + 384LL));
    if ( v30 )
    {
      if ( !*p_lookup )
        sub_1C22094(0LL, v29);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v30,
              (const MethodInfo_3316874 *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1C22094(0LL, v31);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v30,
          v28,
          (const MethodInfo_3316680 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_32:
    v35 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
}


bool __fastcall DataMasterBase_object__object__int___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_325AE20 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int monitor; // w8
  Il2CppObject *v9; // x21
  int i; // w23
  Il2CppObject *v11; // x22
  __int64 v12; // x0

  if ( (byte_4BE24ED & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE24ED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._16_OnListChangedImplementation.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_1C22094(Instance, v7);
  }
  monitor = (int)Instance[1].monitor;
  v9 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1C2209C(Instance, v7);
      v11 = (Il2CppObject *)*((_QWORD *)&v9[2].klass + i);
      if ( !v11 )
        goto LABEL_15;
      v12 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v11->klass->vtable[4].method)(
              v11,
              v11->klass->vtable[5].methodPtr);
      if ( !v12 )
        return v12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___RemoveEntity(
                                   this,
                                   v11,
                                   (const MethodInfo_325AF3C *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
      monitor = (int)v9[1].monitor;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v12) = 1;
  return v12;
}


void __fastcall DataMasterBase_object__object__int___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325BFFC *method)
{
  ;
}


DataEntityBase_array *__fastcall DataMasterBase_object__object__int___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325B068 *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_4BE24EE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_DataEntityBase___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_4BE24EE = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v3,
                                   (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataMasterBase_object__object__int___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325B0D4 *method)
{
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v4; // x20

  if ( (byte_4BE24EF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_1C21E38(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_4BE24EF = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v4 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C22084(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_58353624(
    v4,
    list,
    (const MethodInfo_37A67D8 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v4;
}


Il2CppObject *__fastcall DataMasterBase_object__object__int___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t key,
        const MethodInfo_325BDC8 *method)
{
  System_String_o *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  v7 = key;
  v5 = System_Int32__ToString(
         (int32_t)&v7,
         method->klass->rgctx_data->_56_DataMasterBase_TMaster__TEntity__PKType__getEntityFromKey);
  return DataMasterBase_object__object__int___getEntityFromKey(
           this,
           v5,
           (const MethodInfo_325B150 *)method->klass->rgctx_data->_57_DataMasterBase_TMaster__TEntity__PKType__TryGetEntityFromId);
}


System_Type_o *__fastcall DataMasterBase_object__object__int___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325BF98 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v5; // 0:w0.4

  if ( (byte_4BE24F2 & 1) == 0 )
  {
    sub_1C21E38(&System_Type_TypeInfo);
    byte_4BE24F2 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (int)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v5, 0LL);
}


Il2CppObject *__fastcall DataMasterBase_object__object__int___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325BE74 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_31F60CC *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_31F60CC *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_31F615C *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1C22094(list, method);
  }
  return 0LL;
}


void __fastcall DataMasterBase_object__object__int___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_325B61C *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x22
  System_Collections_IList_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  if ( (byte_4BE24F1 & 1) == 0 )
  {
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerable_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    byte_4BE24F1 = 1;
  }
  if ( v6->fields._lookup )
  {
    if ( !e )
      sub_1C22094(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v13 = sub_1C21E4C(&System_NotImplementedException_TypeInfo);
          v14 = (System_NotImplementedException_o *)sub_1C22084(v13);
          System_NotImplementedException___ctor(v14, 0LL);
          sub_1C21F60(v14, method);
        }
        DataMasterBase_object__object__int___CreateLookupTable(
          v6,
          (const MethodInfo_325A96C *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
      }
    }
    else
    {
      oldItems = e->fields._oldItems;
      if ( oldItems )
      {
        klass = oldItems->klass;
        v10 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v10;
            p_offset += 4;
            if ( !v10 )
              goto LABEL_11;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_11:
          p_method = sub_1C73E18(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v16 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v16 )
          sub_1C22094(0LL, v15);
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
            v20 = sub_1C73E18(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v24 = sub_1C73E18(v16, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C73D14();
          v27 = sub_1C21F74(v25, _29_TEntity);
          v28 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
            v28 = sub_1C73D14();
          if ( v27 )
          {
            v29 = sub_1C21F74(v27, v28);
            v30 = v29;
            if ( !v29 )
            {
              sub_1C22354(v27);
LABEL_89:
              sub_1C22354(v28);
LABEL_90:
              sub_1C22094(v32, v33);
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
                (const MethodInfo_3317B7C *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v34 = sub_1C21F74(v16, System_IDisposable_TypeInfo);
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
            v39 = sub_1C73E18(v34, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v39)(v36, *(_QWORD *)(v39 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v41 = newItems->klass;
        v42 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
        {
          v43 = &v41->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v43 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_52;
          }
          v44 = (__int64)&v41->vtable[*v43].method;
        }
        else
        {
LABEL_52:
          v44 = sub_1C73E18(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v46 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v44)(
                newItems,
                *(_QWORD *)(v44 + 8));
        if ( !v46 )
          sub_1C22094(0LL, v45);
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
            v50 = sub_1C73E18(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v54 = sub_1C73E18(v46, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
          v56 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
            v56 = sub_1C73D14();
          v28 = sub_1C21F74(v55, v56);
          v57 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
            v57 = sub_1C73D14();
          if ( v28 )
          {
            v58 = sub_1C21F74(v28, v57);
            v59 = (Il2CppObject *)v58;
            if ( !v58 )
              goto LABEL_89;
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v58 + 376LL))(
                   v58,
                   *(_QWORD *)(*(_QWORD *)v58 + 384LL)) )
            {
              v60 = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields._lookup;
              v61 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v59->klass->vtable[4].method)(
                                      v59,
                                      v59->klass->vtable[5].methodPtr);
              if ( !v60 )
                sub_1C22094(v61, v61);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v60,
                v61,
                v59,
                (const MethodInfo_331666C *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v62 = sub_1C21F74(v46, System_IDisposable_TypeInfo);
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
            v67 = sub_1C73E18(v62, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v67)(v64, *(_QWORD *)(v67 + 8));
        }
      }
    }
  }
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, void *))v6->klass->vtable._16_OnListChangedImplementation.method)(
    v6,
    e,
    v6->klass[1]._1.image);
}


void __fastcall DataMasterBase_object__object__int___OnListChangedImplementation(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_325BDC4 *method)
{
  ;
}


bool __fastcall DataMasterBase_object__object__int___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_325AF3C *method)
{
  __int64 _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType; // x8
  __int64 v7; // x21
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x22
  __int64 _39_System_Predicate_TEntity; // x0
  System_Predicate_object__o *v18; // x23
  int32_t Index_object; // w21

  _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = (__int64)method->klass->rgctx_data->_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType_;
  if ( (*(_BYTE *)(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType + 309) & 1) == 0 )
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C73D14();
  v7 = sub_1C22084(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  DataMasterBase___c__DisplayClass23_0_object__object__int____ctor(
    (DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *)v7,
    (const MethodInfo_31766B8 *)method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor);
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))entity->klass->vtable[4].method)(
                                                           entity,
                                                           entity->klass->vtable[5].methodPtr);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)v8, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C73D14();
  v18 = (System_Predicate_object__o *)sub_1C22084(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_37B3BC0 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v18,
                   (const MethodInfo_3036DA4 *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_31F6A94 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1C22094(v8, v9);
  }
  return Index_object >= 0;
}


bool __fastcall DataMasterBase_object__object__int___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_325A7A4 *method)
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
  if ( (byte_4BE24EA & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE24EA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
  v15 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__int___abstractGetList(
                                                         this,
                                                         objOrBytes,
                                                         v17,
                                                         v18,
                                                         (const MethodInfo_3259ED0 *)method->klass->rgctx_data->_22_DataMasterBase_TMaster__TEntity__PKType__abstractGetList);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v15,
    (const MethodInfo_3035C18 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_7:
    sub_1C22094(Instance, v13);
  ++this->fields.revision;
  return 1;
}


bool __fastcall DataMasterBase_object__object__int___ReplacedForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_325A898 *method)
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
    sub_1C22094(0LL, objOrBytes);
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
  ListForThread = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__int___abstractGetListForThread(
                                                                   this,
                                                                   objOrBytes,
                                                                   context,
                                                                   v18,
                                                                   v19,
                                                                   work,
                                                                   (const MethodInfo_325A1C0 *)method->klass->rgctx_data->_24_DataMasterBase_TMaster__TEntity__PKType__abstractGetListForThread);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    ListForThread,
    (const MethodInfo_3035C18 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool __fastcall DataMasterBase_object__object__int___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        int32_t key,
        const MethodInfo_325BE14 *method)
{
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = key;
  v7 = System_Int32__ToString(
         (int32_t)&v9,
         method->klass->rgctx_data->_56_DataMasterBase_TMaster__TEntity__PKType__getEntityFromKey);
  return DataMasterBase_object__object__int___TryGetEntityFromId(
           this,
           entity,
           v7,
           (const MethodInfo_325B478 *)method->klass->rgctx_data->_58_TEntity);
}


bool __fastcall DataMasterBase_object__object__int___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_325B478 *method)
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
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_325A96C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C22094(this, result);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C73D14();
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
    v13 = sub_1C73E18(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, Il2CppObject **, _QWORD))v13)(
           lookup,
           key,
           result,
           *(_QWORD *)(v13 + 8));
}


bool __fastcall DataMasterBase_object__object__int___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_325BEF4 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w22
  Il2CppObject *Item; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_31F60CC *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0LL;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C22094(list, entity);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_31F615C *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1C21DDC((PartyOrganizationUtility_o *)entity, (int64_t)Item, v9, v10, v11, v12, v13, v14);
  return Count > 0;
}


bool __fastcall DataMasterBase_object__object__int___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_325ACA8 *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  unsigned __int64 v9; // x23
  unsigned int monitor; // w8

  if ( (byte_4BE24EC & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BE24EC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._16_OnListChangedImplementation.methodPtr)) == 0LL )
  {
    sub_1C22094(Instance, v7);
  }
  v8 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v9 = 0LL;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1C2209C(Instance, v7);
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___UpdatedEntity(
                                 this,
                                 *((Il2CppObject **)&v8[2].klass + v9),
                                 (const MethodInfo_325ADA0 *)method->klass->rgctx_data->_32_DataMasterBase_TMaster__TEntity__PKType__UpdatedEntity);
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


bool __fastcall DataMasterBase_object__object__int___UpdatedEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_325ADA0 *method)
{
  __int64 v6; // x22

  if ( !entity )
    sub_1C22094(this, 0LL);
  v6 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))entity->klass->vtable[4].method)(
         entity,
         entity->klass->vtable[5].methodPtr);
  if ( v6 )
  {
    DataMasterBase_object__object__int___RemoveEntity(
      this,
      entity,
      (const MethodInfo_325AF3C *)method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity);
    DataMasterBase_object__object__int___AddEntity(
      this,
      entity,
      (const MethodInfo_325AF18 *)method->klass->rgctx_data->_34_DataMasterBase_TMaster__TEntity__PKType__AddEntity);
  }
  return v6 != 0;
}


System_Object_array *__fastcall DataMasterBase_object__object__int___abstractGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_3259ED0 *method)
{
  bool hasValue; // w23
  bool v7; // w24
  long double v10; // q0
  MiniMessagePack_MiniMessagePacker_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t Value; // x0
  __int64 v19; // x1
  const MethodInfo_376BF44 *v20; // x2
  int64_t v21; // x21
  int32_t v23; // w24
  __int64 v24; // x3
  System_Object_array *List; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Nullable_long__o v32; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v33; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v34; // 0:x0.16
  System_Nullable_long__o v35; // 0:x0.16

  v33 = start;
  v32 = lenght;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  if ( (byte_4BE24E8 & 1) == 0 )
  {
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_long__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_long__get_Value__);
    byte_4BE24E8 = 1;
  }
  if ( !sub_1C21F74(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._15_getList.method)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._16_OnListChangedImplementation.methodPtr,
                                    v10);
  v11 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C22084(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v11, 0LL);
  this->fields.seriazlier = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.seriazlier, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  if ( objOrBytes )
  {
    Value = sub_1C21F74(objOrBytes, byte___TypeInfo);
    v21 = Value;
    if ( !Value )
    {
      v10 = sub_1C22354(objOrBytes);
      return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._15_getList.method)(
                                      this,
                                      objOrBytes,
                                      this->klass->vtable._16_OnListChangedImplementation.methodPtr,
                                      v10);
    }
  }
  else
  {
    v21 = 0LL;
  }
  if ( v7 )
  {
    v34.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v34.fields.hasValue = &v33;
    Value = System_Nullable_long___get_Value(v34, v20);
    hasValue = v32.fields.hasValue;
    v23 = Value;
  }
  else
  {
    v23 = 0;
  }
  if ( hasValue )
  {
    v35.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v35.fields.hasValue = &v32;
    LODWORD(v24) = System_Nullable_long___get_Value(v35, v20);
  }
  else
  {
    if ( !v21 )
      sub_1C22094(Value, v19);
    v24 = *(_QWORD *)(v21 + 24);
  }
  List = DataMasterBase_object__object__int___directGetList(
           this,
           (System_Byte_array *)v21,
           v23,
           v24,
           (const MethodInfo_3259C58 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.seriazlier, 0LL, v26, v27, v28, v29, v30, v31);
  return List;
}


System_Object_array *__fastcall DataMasterBase_object__object__int___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_325A1C0 *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x0
  __int64 v13; // x22
  MiniMessagePack_MiniMessagePacker_o *v14; // x26
  PartyOrganizationUtility_o *p_seriazlier; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_376BF44 *v30; // x2
  int32_t Value; // w24
  __int64 v33; // x3
  int64_t List; // x0
  __int64 v35; // x1
  const MethodInfo_376BF44 *v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Object_array *v42; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v44; // w24
  __int64 v45; // x3
  Il2CppObject *v46; // x1
  System_Nullable_long__o v47; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v48; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v49; // 0:x0.16
  System_Nullable_long__o v50; // 0:x0.16
  System_Nullable_long__o v51; // 0:x0.16
  System_Nullable_long__o v52; // 0:x0.16

  v48 = start;
  v47 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4BE24E9 & 1) == 0 )
  {
    sub_1C21E38(&byte___TypeInfo);
    sub_1C21E38(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_long__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_long__get_Value__);
    byte_4BE24E9 = 1;
  }
  v12 = sub_1C21F74(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._16_OnListChangedImplementation.methodPtr);
  v13 = v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C22084(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  this->fields.seriazlier = v14;
  p_seriazlier = (PartyOrganizationUtility_o *)&this->fields.seriazlier;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.seriazlier, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1C22094(0LL, v22);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&seriazlier->fields.threadSafeStringHash,
    (int64_t)work,
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
    hasValue = v47.fields.hasValue;
    Value = System_Nullable_long___get_Value(v49, v30);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v50.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v50.fields.hasValue = &v47;
    LODWORD(v33) = System_Nullable_long___get_Value(v50, v30);
  }
  else
  {
    v33 = *(_QWORD *)(v13 + 24);
  }
  List = (int64_t)DataMasterBase_object__object__int___directGetList(
                    this,
                    (System_Byte_array *)v13,
                    Value,
                    v33,
                    (const MethodInfo_3259C58 *)method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
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
LABEL_18:
        v46 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v13, v44, v45, 0LL);
        v42 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                       this,
                                       v46,
                                       this->klass->vtable._16_OnListChangedImplementation.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v45 = *(_QWORD *)(v13 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_1C22094(List, v35);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_1C21DDC(p_seriazlier, 0LL, (int64_t)v36, v37, v38, v39, v40, v41);
  return v42;
}


System_String_o *__fastcall DataMasterBase_object__object__int___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_325B238 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  signed int max_length; // w8
  __int64 v6; // x22
  PartyOrganizationUtility_o *p_sb; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *sb; // t1
  System_Text_StringBuilder_o *v10; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  il2cpp_array_size_t v17; // w8
  unsigned __int64 v18; // x21

  v4 = this;
  if ( (byte_4BE24F0 & 1) == 0 )
  {
    sub_1C21E38(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE24F0 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v6 = (unsigned int)(max_length - 1);
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.sb;
  p_sb = (PartyOrganizationUtility_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1C22084(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_62269980(v10, 128, 0LL);
    p_sb->klass = (PartyOrganizationUtility_c *)v10;
    sub_1C21DDC(p_sb, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
  v17 = args->max_length;
  v18 = 0LL;
  do
  {
    if ( v18 >= v17 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_62279212((System_Text_StringBuilder_o *)this, args->m_Items[v18], 0LL);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_62278956((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v17 = args->max_length;
    ++v18;
  }
  while ( v6 != v18 );
  if ( (unsigned int)v6 >= v17 )
LABEL_20:
    sub_1C2209C(this, args);
  if ( !this
    || (System_Text_StringBuilder__Append_62279212((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0LL),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_1C22094(this, args);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                              this,
                              this->klass->vtable._4_ForForceDerived.methodPtr);
}


System_Object_array *__fastcall DataMasterBase_object__object__int___directGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo_3259C58 *method)
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

  if ( (byte_4BE24E7 & 1) == 0 )
  {
    sub_1C21E38(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_IO_MemoryStream_TypeInfo);
    byte_4BE24E7 = 1;
  }
  v10 = (System_IO_MemoryStream_o *)sub_1C22084(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_63259744(v10, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v12 = (DataIO_Runtime_Deserializer_o *)sub_1C22084(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v12, seriazlier, 0LL);
  if ( !v12 )
    sub_1C22094(v13, v14);
  v15 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v12,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v10,
                                              0LL);
  if ( !v15 )
  {
    v23 = sub_1C21E4C(&System_FormatException_TypeInfo);
    v24 = (System_FormatException_o *)sub_1C22084(v23);
    v25 = (System_String_o *)sub_1C21E4C(&StringLiteral_20101/*"getList family cannot return null."*/);
    System_FormatException___ctor_63736728(v24, v25, 0LL);
    sub_1C21F60(v24, method);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v15,
                                                               (const MethodInfo_2FD8A3C *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_2FE97E4 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
  if ( v10 )
  {
    klass = v10->klass;
    v19 = *(unsigned __int16 *)(&v10->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v10->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_10;
      }
      v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v21 = sub_1C73E18(v10, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v10, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *__fastcall DataMasterBase_object__object__int___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_325B150 *method)
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
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_325A96C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C22094(this, key);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C73D14();
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
    v11 = sub_1C73E18(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1LL);
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


System_Collections_ObjectModel_ObservableCollection_TEntity__o *__fastcall DataMasterBase_object__object__int___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325B060 *method)
{
  return this->fields.list;
}


System_Object_array *__fastcall DataMasterBase_object__object__int___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_325B04C *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_2FE97E4 *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *__fastcall DataMasterBase_object__object__int___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_2EDF4D8 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  long double v6; // q0
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v8; // x8
  System_Object_array *v9; // x21
  unsigned __int64 v10; // x22
  PartyOrganizationUtility_o *p_monitor; // x23
  long double v12; // q0
  System_Collections_ObjectModel_Collection_T__o *v13; // x24
  Il2CppClass *_1_T; // x1
  __int64 v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  long double v22; // q0
  __int64 v23; // x25
  Il2CppClass *v24; // x24
  int64_t v25; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x0
  const MethodInfo_2EDF654 *v27; // x1

  if ( !method->rgctx_data )
    sub_1C73D70(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_31F60CC *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C73D14(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C21EE0(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1C22094(list, method);
  v9 = (System_Object_array *)list;
  v10 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_31F60CC *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_31F615C *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C73D14(v12);
    v15 = sub_1C21F74(v13, _1_T);
    v23 = v15;
    v24 = method->rgctx_data->_1_T;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
    {
      v15 = sub_1C73D14(v22);
      v24 = (Il2CppClass *)v15;
    }
    if ( v23 )
    {
      v15 = sub_1C21F74(v23, v24);
      v25 = v15;
      if ( !v15 )
      {
        sub_1C22354(v23);
        return DataMasterBase_object__object__long___getEntitys_object_(v26, v27);
      }
    }
    else
    {
      v25 = 0LL;
    }
    if ( v10 >= v9->max_length )
      sub_1C2209C(v15, v25);
    p_monitor->klass = (PartyOrganizationUtility_c *)v25;
    sub_1C21DDC(p_monitor, v25, v16, v17, v18, v19, v20, v21);
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
    if ( !v8 )
      goto LABEL_21;
  }
  return v9;
}


System_Object_array *__fastcall DataMasterBase_object__object__int___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3259BEC *method)
{
  if ( (byte_4BE24E6 & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    byte_4BE24E6 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_3017804 *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool __fastcall DataMasterBase_object__object__int___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3259BAC *method)
{
  return this->fields._lookup != 0LL;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *__fastcall DataMasterBase_object__object__int___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3259BBC *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *result; // x0

  result = (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  if ( !result )
  {
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_325A96C *)method->klass->rgctx_data->_7_DataMasterBase_TMaster__TEntity__PKType__CreateLookupTable);
    return (System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *)this->fields._lookup;
  }
  return result;
}


bool __fastcall DataMasterBase_object__object__int___isEntityExistsFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_325B3A4 *method)
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

  Key = DataMasterBase_object__object__int___createKey(this, args, (const MethodInfo_325B238 *)method);
  lookup = this->fields._lookup;
  v8 = Key;
  if ( !lookup )
  {
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_325A96C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C22094(Key, v6);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C73D14();
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
    v13 = sub_1C73E18(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v13)(
           lookup,
           v8,
           *(_QWORD *)(v13 + 8));
}


bool __fastcall DataMasterBase_object__object__int___isEntityExistsFromId_52802896(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_325B550 *method)
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
    DataMasterBase_object__object__int___CreateLookupTable(
      this,
      (const MethodInfo_325A96C *)method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->klass->rgctx_data[7].rgctxDataDummy);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1C22094(this, key);
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C73D14();
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
    v11 = sub_1C73E18(lookup, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__TEntity__o *, System_String_o *, _QWORD))v11)(
           lookup,
           key,
           *(_QWORD *)(v11 + 8));
}
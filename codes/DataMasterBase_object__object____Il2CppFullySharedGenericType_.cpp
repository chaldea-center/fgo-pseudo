// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        int32_t kind,
        const MethodInfo_327FE60 *method)
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

  if ( (byte_4C0379A & 1) == 0 )
  {
    sub_1C2E12C(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, *(_QWORD *)&kind);
    byte_4C0379A = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = (__int64)method->klass->rgctx_data->_0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( (*(_BYTE *)(_0_System_Collections_ObjectModel_ObservableCollection_TEntity + 309) & 1) == 0 )
    _0_System_Collections_ObjectModel_ObservableCollection_TEntity = sub_1C80008();
  v7 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C2E378(_0_System_Collections_ObjectModel_ObservableCollection_TEntity);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v7,
    (const MethodInfo_37C2BDC *)method->klass->rgctx_data->_1_System_Collections_ObjectModel_ObservableCollection_TEntity___ctor);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *)v7;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.list, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  DataMasterBase___ctor((DataMasterBase_o *)this, kind, 0LL);
  DataMasterBase__RegisterKindAndName_object_(
    this->fields._MasterKind_k__BackingField,
    this->fields._MasterName_k__BackingField,
    (const MethodInfo_2FD1A9C *)method->klass->rgctx_data->_3_DataMasterBase_RegisterKindAndName_TMaster_);
  list = this->fields.list;
  v15 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1C2E378(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  klass = method->klass;
  v17 = v15;
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)klass->rgctx_data->_4_DataMasterBase_TMaster__TEntity__PKType__OnListChanged,
    0LL);
  if ( !list )
    sub_1C2E388(v18, v19);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v17,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___AddEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_32812F8 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2E388(0LL, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    entity,
    (const MethodInfo_3215DF8 *)method->klass->rgctx_data->_35_System_Collections_ObjectModel_Collection_TEntity__Add);
}


void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___Clear(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3280B48 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2E388(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_3215F48 *)method->klass->rgctx_data->_21_System_Collections_ObjectModel_Collection_TEntity__Clear);
}


void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___CreateLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3280D3C *method)
{
  __int64 v4; // x1
  __int64 _6_System_Collections_Generic_Dictionary_string__TEntity; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x19
  struct System_Collections_Generic_Dictionary_string__TEntity__o **p_lookup; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 _27_System_Collections_Generic_IEnumerator_TEntity; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  Il2CppObject *v29; // x22
  __int64 v30; // x1
  Il2CppObject *v31; // x23
  __int64 v32; // x1
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0

  if ( (byte_4C037A0 & 1) == 0 )
  {
    sub_1C2E12C(&System_IDisposable_TypeInfo, method);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v4);
    byte_4C037A0 = 1;
  }
  _6_System_Collections_Generic_Dictionary_string__TEntity = (__int64)method->klass->rgctx_data->_6_System_Collections_Generic_Dictionary_string__TEntity_;
  if ( (*(_BYTE *)(_6_System_Collections_Generic_Dictionary_string__TEntity + 309) & 1) == 0 )
    _6_System_Collections_Generic_Dictionary_string__TEntity = sub_1C80008();
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(_6_System_Collections_Generic_Dictionary_string__TEntity);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_33351C4 *)method->klass->rgctx_data->_25_System_Collections_Generic_Dictionary_string__TEntity___ctor);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__TEntity__o *)v6;
  p_lookup = &this->fields._lookup;
  sub_1C2E0D0((PartyOrganizationUtility_o *)p_lookup, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  v15 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v15 )
    sub_1C2E388(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v15,
                 (const MethodInfo_3216144 *)method->klass->rgctx_data->_26_System_Collections_ObjectModel_Collection_TEntity__GetEnumerator);
  if ( !Enumerator )
    sub_1C2E388(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C8010C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    _27_System_Collections_Generic_IEnumerator_TEntity = (__int64)method->klass->rgctx_data->_27_System_Collections_Generic_IEnumerator_TEntity_;
    if ( (*(_BYTE *)(_27_System_Collections_Generic_IEnumerator_TEntity + 309) & 1) == 0 )
      _27_System_Collections_Generic_IEnumerator_TEntity = sub_1C80008();
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((_QWORD *)v25 - 1) != _27_System_Collections_Generic_IEnumerator_TEntity )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_20;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_20:
      v26 = sub_1C8010C(Enumerator, _27_System_Collections_Generic_IEnumerator_TEntity, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    v29 = (Il2CppObject *)v27;
    if ( !v27 )
      sub_1C2E388(0LL, v28);
    v31 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 376LL))(
                            v27,
                            *(_QWORD *)(*(_QWORD *)v27 + 384LL));
    if ( v31 )
    {
      if ( !*p_lookup )
        sub_1C2E388(0LL, v30);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v31,
              (const MethodInfo_3335D68 *)method->klass->rgctx_data->_30_System_Collections_Generic_Dictionary_string__TEntity__ContainsKey) )
      {
        if ( !*p_lookup )
          sub_1C2E388(0LL, v32);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v31,
          v29,
          (const MethodInfo_3335B74 *)method->klass->rgctx_data->_31_System_Collections_Generic_Dictionary_string__TEntity__Add);
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_32;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_32:
    v36 = sub_1C8010C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___Deleted(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_32811FC *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  int v8; // w8
  __int64 v9; // x21
  int i; // w23
  __int64 v11; // x22
  __int64 v12; // x0

  if ( (byte_4C037A2 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4C037A2 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                     this,
                     obj,
                     this->klass->vtable._16_OnListChangedImplementation.methodPtr)) == 0 )
  {
LABEL_15:
    sub_1C2E388(Instance, v7);
  }
  v8 = *(_DWORD *)(Instance + 24);
  v9 = Instance;
  if ( v8 >= 1 )
  {
    for ( i = 0; i < v8; ++i )
    {
      if ( i >= (unsigned int)v8 )
        sub_1C2E390(Instance, v7);
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


void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___ForForceDerived(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_328253C *method)
{
  ;
}


DataEntityBase_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntities(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_328144C *method)
{
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0

  if ( (byte_4C037A3 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_OfType_DataEntityBase___, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, v3);
    byte_4C037A3 = 1;
  }
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2FFB080 *)Method_System_Linq_Enumerable_OfType_DataEntityBase___);
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   v4,
                                   (const MethodInfo_300BDBC *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___GetBaseEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32814B8 *method)
{
  __int64 v3; // x1
  System_Collections_Generic_IEnumerable_T__o *list; // x19
  System_Collections_ObjectModel_ObservableCollection_T__o *v5; // x20

  if ( (byte_4C037A4 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, method);
    sub_1C2E12C(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v3);
    byte_4C037A4 = 1;
  }
  list = (System_Collections_Generic_IEnumerable_T__o *)this->fields.list;
  v5 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1C2E378(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor_58469356(
    v5,
    list,
    (const MethodInfo_37C2BEC *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v5;
}


Il2CppObject *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_3282178 *method)
{
  _QWORD *monitor; // x19
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x21
  __int64 v6; // x9
  __int64 v7; // x8
  __int16 v8; // w10
  __int64 v9; // x0
  char *v10; // x22
  int v11; // w0
  __int64 *v12; // x3
  __int64 v15[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v15[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v15[0] = (__int64)key.klass;
  v6 = *(_QWORD *)(*((_QWORD *)key.monitor + 4) + 192LL);
  v7 = *(_QWORD *)(v6 + 432);
  v8 = *(_WORD *)(v7 + 309);
  if ( (v8 & 1) != 0 )
  {
    v9 = *(_QWORD *)(v6 + 432);
  }
  else
  {
    v9 = sub_1C80008();
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
    v11 = sub_1C80008();
    v6 = *(_QWORD *)(monitor[4] + 192LL);
    v7 = *(_QWORD *)(v6 + 432);
  }
  if ( *(int *)(v7 + 40) >= 0 )
    v12 = v15;
  else
    v12 = (__int64 *)klass;
  sub_1C2EB94(v11, *(_QWORD *)(v6 + 440), (int)v10, v12);
  return (Il2CppObject *)(**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 448LL))(
                           this,
                           v15[1]);
}


System_Type_o *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___GetEntityType(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32824D8 *method)
{
  Il2CppClass *_0_System_Collections_ObjectModel_ObservableCollection_TEntity; // x19
  System_RuntimeTypeHandle_o v5; // 0:w0.4

  if ( (byte_4C037A7 & 1) == 0 )
  {
    sub_1C2E12C(&System_Type_TypeInfo, method);
    byte_4C037A7 = 1;
  }
  _0_System_Collections_ObjectModel_ObservableCollection_TEntity = method->klass->rgctx_data[1]._0_System_Collections_ObjectModel_ObservableCollection_TEntity_;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (int)_0_System_Collections_ObjectModel_ObservableCollection_TEntity;
  return System_Type__GetTypeFromHandle(v5, 0LL);
}


Il2CppObject *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___GetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_32823B4 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3215B6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_7;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3215B6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
      return System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_3215BFC *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
LABEL_7:
    sub_1C2E388(list, method);
  }
  return 0LL;
}


void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___OnListChanged(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_32819B4 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x22
  System_Collections_IList_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x0
  System_NotImplementedException_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x22
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  System_Collections_IEnumerator_c **v27; // x10
  __int64 v28; // x0
  __int64 v29; // x23
  __int64 _29_TEntity; // x1
  __int64 v31; // x23
  __int64 v32; // x24
  __int64 v33; // x0
  __int64 v34; // x25
  struct System_Collections_Generic_Dictionary_string__TEntity__o *lookup; // x23
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x1
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x22
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  struct System_Collections_IList_o *newItems; // x22
  System_Collections_IList_c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x22
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  System_Collections_IEnumerator_c **v57; // x10
  __int64 v58; // x0
  __int64 v59; // x23
  __int64 v60; // x1
  __int64 v61; // x25
  __int64 v62; // x0
  Il2CppObject *v63; // x23
  struct System_Collections_Generic_Dictionary_string__TEntity__o *v64; // x24
  Il2CppObject *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x8
  __int64 v68; // x22
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0

  if ( (byte_4C037A6 & 1) == 0 )
  {
    sub_1C2E12C(&System_IDisposable_TypeInfo, sender);
    sub_1C2E12C(&System_Collections_IEnumerable_TypeInfo, v7);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v8);
    byte_4C037A6 = 1;
  }
  v9 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_50_DataMasterBase_TMaster__TEntity__PKType__get_IsCreatedLookupTable->methodPointer)(this);
  if ( (v9 & 1) != 0 )
  {
    if ( !e )
      sub_1C2E388(v9, v10);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v17 = sub_1C2E140(&System_NotImplementedException_TypeInfo);
          v18 = (System_NotImplementedException_o *)sub_1C2E378(v17);
          System_NotImplementedException___ctor(v18, 0LL);
          sub_1C2E254(v18, method);
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
        v14 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v14;
            p_offset += 4;
            if ( !v14 )
              goto LABEL_11;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_11:
          p_method = sub_1C8010C(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v20 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v20 )
          sub_1C2E388(0LL, v19);
        while ( 1 )
        {
          v21 = *(_QWORD *)v20;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
          {
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v22;
              v23 += 4;
              if ( !v22 )
                goto LABEL_21;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_21:
            v24 = sub_1C8010C(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
            break;
          v25 = *(_QWORD *)v20;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
          {
            v27 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *(v27 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v26;
              v27 += 2;
              if ( !v26 )
                goto LABEL_28;
            }
            v28 = v25 + 16LL * (*(_DWORD *)v27 + 1) + 312;
          }
          else
          {
LABEL_28:
            v28 = sub_1C8010C(v20, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
          _29_TEntity = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(_29_TEntity + 309) & 1) == 0 )
            _29_TEntity = sub_1C80008();
          v31 = sub_1C2E268(v29, _29_TEntity);
          v32 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
            v32 = sub_1C80008();
          if ( v31 )
          {
            v33 = sub_1C2E268(v31, v32);
            v34 = v33;
            if ( !v33 )
            {
              sub_1C2E648(v31);
LABEL_89:
              sub_1C2E648(v32);
LABEL_90:
              sub_1C2E388(v36, v37);
            }
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 376LL))(
                   v33,
                   *(_QWORD *)(*(_QWORD *)v33 + 384LL)) )
            {
              lookup = this->fields._lookup;
              v36 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v34 + 376LL))(
                                      v34,
                                      *(_QWORD *)(*(_QWORD *)v34 + 384LL));
              v37 = v36;
              if ( !lookup )
                goto LABEL_90;
              System_Collections_Generic_Dictionary_object__object___Remove(
                (System_Collections_Generic_Dictionary_object__object__o *)lookup,
                v36,
                (const MethodInfo_3337070 *)method->klass->rgctx_data->_51_System_Collections_Generic_Dictionary_string__TEntity__Remove);
            }
          }
        }
        v38 = sub_1C2E268(v20, System_IDisposable_TypeInfo);
        if ( v38 )
        {
          v39 = *(_QWORD *)v38;
          v40 = v38;
          v41 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
          {
            v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
            {
              --v41;
              v42 += 4;
              if ( !v41 )
                goto LABEL_44;
            }
            v43 = v39 + 16LL * *v42 + 312;
          }
          else
          {
LABEL_44:
            v43 = sub_1C8010C(v38, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v45 = newItems->klass;
        v46 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
        {
          v47 = &v45->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v47 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_52;
          }
          v48 = (__int64)&v45->vtable[*v47].method;
        }
        else
        {
LABEL_52:
          v48 = sub_1C8010C(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v50 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v48)(
                newItems,
                *(_QWORD *)(v48 + 8));
        if ( !v50 )
          sub_1C2E388(0LL, v49);
        while ( 1 )
        {
          v51 = *(_QWORD *)v50;
          v52 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
          {
            v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v52;
              v53 += 4;
              if ( !v52 )
                goto LABEL_59;
            }
            v54 = v51 + 16LL * *v53 + 312;
          }
          else
          {
LABEL_59:
            v54 = sub_1C8010C(v50, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8)) & 1) == 0 )
            break;
          v55 = *(_QWORD *)v50;
          v56 = *(unsigned __int16 *)(*(_QWORD *)v50 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v50 + 302LL) )
          {
            v57 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v55 + 176) + 8LL);
            while ( *(v57 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v56;
              v57 += 2;
              if ( !v56 )
                goto LABEL_66;
            }
            v58 = v55 + 16LL * (*(_DWORD *)v57 + 1) + 312;
          }
          else
          {
LABEL_66:
            v58 = sub_1C8010C(v50, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v59 = (*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v50, *(_QWORD *)(v58 + 8));
          v60 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
            v60 = sub_1C80008();
          v32 = sub_1C2E268(v59, v60);
          v61 = (__int64)method->klass->rgctx_data->_29_TEntity;
          if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
            v61 = sub_1C80008();
          if ( v32 )
          {
            v62 = sub_1C2E268(v32, v61);
            v63 = (Il2CppObject *)v62;
            if ( !v62 )
              goto LABEL_89;
            if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v62 + 376LL))(
                   v62,
                   *(_QWORD *)(*(_QWORD *)v62 + 384LL)) )
            {
              v64 = this->fields._lookup;
              v65 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v63->klass->vtable[4].method)(
                                      v63,
                                      v63->klass->vtable[5].methodPtr);
              if ( !v64 )
                sub_1C2E388(v65, v65);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)v64,
                v65,
                v63,
                (const MethodInfo_3335B60 *)method->klass->rgctx_data->_52_System_Collections_Generic_Dictionary_string__TEntity__set_Item);
            }
          }
        }
        v66 = sub_1C2E268(v50, System_IDisposable_TypeInfo);
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
                goto LABEL_82;
            }
            v71 = v67 + 16LL * *v70 + 312;
          }
          else
          {
LABEL_82:
            v71 = sub_1C8010C(v66, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v71)(v68, *(_QWORD *)(v71 + 8));
        }
      }
    }
  }
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, void *))this->klass->vtable._16_OnListChangedImplementation.method)(
    this,
    e,
    this->klass[1]._1.image);
}


void __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___OnListChangedImplementation(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo_3282174 *method)
{
  ;
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___RemoveEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_328131C *method)
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
    _36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType = sub_1C80008();
  v7 = sub_1C2E378(_36_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (*)(void))method->klass->rgctx_data->_37_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___ctor->methodPointer)();
  if ( !entity )
    goto LABEL_11;
  v8 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))entity->klass->vtable[4].method)(
                                                           entity,
                                                           entity->klass->vtable[5].methodPtr);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = v8;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)v8, v10, v11, v12, v13, v14, v15);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  _39_System_Predicate_TEntity = (__int64)method->klass->rgctx_data->_39_System_Predicate_TEntity_;
  if ( (*(_BYTE *)(_39_System_Predicate_TEntity + 309) & 1) == 0 )
    _39_System_Predicate_TEntity = sub_1C80008();
  v18 = (System_Predicate_object__o *)sub_1C2E378(_39_System_Predicate_TEntity);
  System_Predicate_object____ctor(
    v18,
    (Il2CppObject *)v7,
    (intptr_t)method->klass->rgctx_data->_38_DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType___RemoveEntity_b__0,
    (const MethodInfo_37CFE88 *)method->klass->rgctx_data->_40_System_Predicate_TEntity___ctor);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v18,
                   (const MethodInfo_305937C *)method->klass->rgctx_data->_41_ObservableCollectionExtensions_FindIndex_TEntity_);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v8 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v8,
        Index_object,
        (const MethodInfo_3216534 *)method->klass->rgctx_data->_42_System_Collections_ObjectModel_Collection_TEntity__RemoveAt);
      return Index_object >= 0;
    }
LABEL_11:
    sub_1C2E388(v8, v9);
  }
  return Index_object >= 0;
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___Replaced(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_3280B6C *method)
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
  if ( (byte_4C0379F & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, objOrBytes);
    byte_4C0379F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || !this
    || (((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))this->klass->vtable._6_Clear.method)(
          this,
          this->klass->vtable._7_Replaced.methodPtr),
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
          (const MethodInfo_30581F0 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL) )
  {
    sub_1C2E388(Instance, v13);
  }
  ++this->fields.revision;
  return 1;
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___ReplacedForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_3280C64 *method)
{
  int64_t value; // x21
  __int64 v10; // x22
  int64_t v11; // x23
  __int64 v12; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( !this )
    sub_1C2E388(0LL, objOrBytes);
  value = lenght.fields.value;
  v10 = *(_QWORD *)&lenght.fields.hasValue;
  v11 = start.fields.value;
  v12 = *(_QWORD *)&start.fields.hasValue;
  ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))this->klass->vtable._6_Clear.method)(
    this,
    this->klass->vtable._7_Replaced.methodPtr);
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
    (const MethodInfo_30581F0 *)method->klass->rgctx_data->_23_ObservableCollectionExtensions_AddRange_TEntity_);
  ++this->fields.revision;
  return 1;
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
        const MethodInfo_3282290 *method)
{
  _QWORD *monitor; // x20
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *klass; // x22
  __int64 v8; // x9
  __int64 v9; // x8
  __int16 v10; // w10
  __int64 v11; // x0
  char *v12; // x23
  int v13; // w0
  __int64 *v14; // x3
  __int64 v17[3]; // [xsp+8h] [xbp-18h] BYREF

  monitor = key.monitor;
  klass = key.klass;
  v17[2] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  v17[0] = (__int64)key.klass;
  v8 = *(_QWORD *)(*((_QWORD *)key.monitor + 4) + 192LL);
  v9 = *(_QWORD *)(v8 + 432);
  v10 = *(_WORD *)(v9 + 309);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(_QWORD *)(v8 + 432);
  }
  else
  {
    v11 = sub_1C80008();
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
    v13 = sub_1C80008();
    v8 = *(_QWORD *)(monitor[4] + 192LL);
    v9 = *(_QWORD *)(v8 + 432);
  }
  if ( *(int *)(v9 + 40) >= 0 )
    v14 = v17;
  else
    v14 = (__int64 *)klass;
  sub_1C2EB94(v13, *(_QWORD *)(v8 + 440), (int)v12, v14);
  return (**(__int64 (__fastcall ***)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject **, __int64))(*(_QWORD *)(monitor[4] + 192LL) + 456LL))(
           this,
           entity,
           v17[1]) & 1;
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetEntityFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_3281840 *method)
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
    sub_1C2E388(0LL, v8);
  v9 = v7;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C80008();
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
    v14 = sub_1C8010C(v9, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1LL);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppObject **, _QWORD))v14)(
           v9,
           key,
           result,
           *(_QWORD *)(v14 + 8));
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___TryGetSingleEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject **entity,
        const MethodInfo_3282434 *method)
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
    (const MethodInfo_3215B6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_8;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  if ( Count < 1 )
  {
    *entity = 0LL;
    return Count > 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_8:
    sub_1C2E388(list, entity);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_3215BFC *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
  *entity = Item;
  sub_1C2E0D0((PartyOrganizationUtility_o *)entity, (int64_t)Item, v9, v10, v11, v12, v13, v14);
  return Count > 0;
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___Updated(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_3281078 *method)
{
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  unsigned __int64 v9; // x23
  unsigned int v10; // w8

  if ( (byte_4C037A1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4C037A1 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                     this,
                     obj,
                     this->klass->vtable._16_OnListChangedImplementation.methodPtr)) == 0 )
  {
    sub_1C2E388(Instance, v7);
  }
  v8 = Instance;
  if ( (int)*(_QWORD *)(Instance + 24) < 1 )
    return 1;
  v9 = 0LL;
  v10 = *(_QWORD *)(Instance + 24);
  while ( 1 )
  {
    if ( v9 >= v10 )
      sub_1C2E390(Instance, v7);
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


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___UpdatedEntity(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *entity,
        const MethodInfo_3281174 *method)
{
  __int64 v6; // x22

  if ( !entity )
    sub_1C2E388(this, 0LL);
  v6 = ((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))entity->klass->vtable[4].method)(
         entity,
         entity->klass->vtable[5].methodPtr);
  if ( v6 )
  {
    ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *))method->klass->rgctx_data->_33_DataMasterBase_TMaster__TEntity__PKType__RemoveEntity->methodPointer)(
      this,
      entity);
    ((void (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *))method->klass->rgctx_data->_34_DataMasterBase_TMaster__TEntity__PKType__AddEntity->methodPointer)(
      this,
      entity);
  }
  return v6 != 0;
}


System_Object_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___abstractGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo_3280290 *method)
{
  bool hasValue; // w23
  bool v7; // w24
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  long double v13; // q0
  MiniMessagePack_MiniMessagePacker_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t Value; // x0
  __int64 v22; // x1
  const MethodInfo_378870C *v23; // x2
  int64_t v24; // x21
  unsigned int v26; // w24
  int64_t v27; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  System_Object_array *v29; // x22
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Nullable_long__o v36; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v37; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v38; // 0:x0.16
  System_Nullable_long__o v39; // 0:x0.16

  v37 = start;
  v36 = lenght;
  hasValue = lenght.fields.hasValue;
  v7 = start.fields.hasValue;
  if ( (byte_4C0379D & 1) == 0 )
  {
    sub_1C2E12C(&byte___TypeInfo, objOrBytes);
    sub_1C2E12C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v10);
    sub_1C2E12C(&Method_System_Nullable_long__get_HasValue__, v11);
    sub_1C2E12C(&Method_System_Nullable_long__get_Value__, v12);
    byte_4C0379D = 1;
  }
  if ( !sub_1C2E268(objOrBytes, byte___TypeInfo) )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._15_getList.method)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._16_OnListChangedImplementation.methodPtr,
                                    v13);
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2E378(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  this->fields.seriazlier = v14;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.seriazlier, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  if ( objOrBytes )
  {
    Value = sub_1C2E268(objOrBytes, byte___TypeInfo);
    v24 = Value;
    if ( !Value )
    {
      v13 = sub_1C2E648(objOrBytes);
      return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._15_getList.method)(
                                      this,
                                      objOrBytes,
                                      this->klass->vtable._16_OnListChangedImplementation.methodPtr,
                                      v13);
    }
  }
  else
  {
    v24 = 0LL;
  }
  if ( v7 )
  {
    v38.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v38.fields.hasValue = &v37;
    Value = System_Nullable_long___get_Value(v38, v23);
    hasValue = v36.fields.hasValue;
    v26 = Value;
  }
  else
  {
    v26 = 0;
  }
  if ( hasValue )
  {
    v39.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v39.fields.hasValue = &v36;
    v27 = System_Nullable_long___get_Value(v39, v23);
  }
  else
  {
    if ( !v24 )
      sub_1C2E388(Value, v22);
    v27 = *(_QWORD *)(v24 + 24);
  }
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v29 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, int64_t, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
                                 this,
                                 v24,
                                 v26,
                                 v27,
                                 _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  this->fields.seriazlier = 0LL;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.seriazlier, 0LL, v30, v31, v32, v33, v34, v35);
  return v29;
}


System_Object_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___abstractGetListForThread(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo_3280584 *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x22
  MiniMessagePack_MiniMessagePacker_o *v17; // x26
  PartyOrganizationUtility_o *p_seriazlier; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_378870C *v33; // x2
  unsigned int Value; // w24
  int64_t v36; // x3
  MethodInfo *_14_DataMasterBase_TMaster__TEntity__PKType__directGetList; // x4
  int64_t v38; // x0
  __int64 v39; // x1
  const MethodInfo_378870C *v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Object_array *v46; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v48; // w24
  __int64 v49; // x3
  Il2CppObject *v50; // x1
  System_Nullable_long__o v51; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v52; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v53; // 0:x0.16
  System_Nullable_long__o v54; // 0:x0.16
  System_Nullable_long__o v55; // 0:x0.16
  System_Nullable_long__o v56; // 0:x0.16

  v52 = start;
  v51 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4C0379E & 1) == 0 )
  {
    sub_1C2E12C(&byte___TypeInfo, objOrBytes);
    sub_1C2E12C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_1C2E12C(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_1C2E12C(&Method_System_Nullable_long__get_Value__, v14);
    byte_4C0379E = 1;
  }
  v15 = sub_1C2E268(objOrBytes, byte___TypeInfo);
  if ( !v15 )
    return (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                    this,
                                    objOrBytes,
                                    this->klass->vtable._16_OnListChangedImplementation.methodPtr);
  v16 = v15;
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2E378(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0LL);
  this->fields.seriazlier = v17;
  p_seriazlier = (PartyOrganizationUtility_o *)&this->fields.seriazlier;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.seriazlier, (int64_t)v17, v19, v20, v21, v22, v23, v24);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1C2E388(0LL, v25);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&seriazlier->fields.threadSafeStringHash,
    (int64_t)work,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( v9 )
  {
    v53.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v53.fields.hasValue = &v52;
    hasValue = v51.fields.hasValue;
    Value = System_Nullable_long___get_Value(v53, v33);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v54.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v54.fields.hasValue = &v51;
    v36 = System_Nullable_long___get_Value(v54, v33);
  }
  else
  {
    v36 = *(_QWORD *)(v16 + 24);
  }
  _14_DataMasterBase_TMaster__TEntity__PKType__directGetList = method->klass->rgctx_data->_14_DataMasterBase_TMaster__TEntity__PKType__directGetList;
  v38 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, __int64, _QWORD, int64_t, MethodInfo *))_14_DataMasterBase_TMaster__TEntity__PKType__directGetList->methodPointer)(
          this,
          v16,
          Value,
          v36,
          _14_DataMasterBase_TMaster__TEntity__PKType__directGetList);
  v46 = (System_Object_array *)v38;
  if ( !v38 )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v52.fields.hasValue )
    {
      v55.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v55.fields.hasValue = &v52;
      v38 = System_Nullable_long___get_Value(v55, v40);
      v48 = v38;
    }
    else
    {
      v48 = 0;
    }
    if ( v51.fields.hasValue )
    {
      v56.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v56.fields.hasValue = &v51;
      v38 = System_Nullable_long___get_Value(v56, v40);
      LODWORD(v49) = v38;
      if ( klass )
      {
LABEL_18:
        v50 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v16, v48, v49, 0LL);
        v46 = (System_Object_array *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._15_getList.method)(
                                       this,
                                       v50,
                                       this->klass->vtable._16_OnListChangedImplementation.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v49 = *(_QWORD *)(v16 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_1C2E388(v38, v39);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_1C2E0D0(p_seriazlier, 0LL, (int64_t)v40, v41, v42, v43, v44, v45);
  return v46;
}


System_String_o *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___createKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_3281608 *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *v4; // x19
  __int64 v5; // x1
  signed int max_length; // w8
  __int64 v7; // x22
  PartyOrganizationUtility_o *p_sb; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *sb; // t1
  System_Text_StringBuilder_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  il2cpp_array_size_t v18; // w8
  unsigned __int64 v19; // x21

  v4 = this;
  if ( (byte_4C037A5 & 1) == 0 )
  {
    sub_1C2E12C(&System_Text_StringBuilder_TypeInfo, args);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C2E12C(&StringLiteral_1/*""*/, v5);
    byte_4C037A5 = 1;
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
  p_sb = (PartyOrganizationUtility_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v11 = (System_Text_StringBuilder_o *)sub_1C2E378(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_62390088(v11, 128, 0LL);
    p_sb->klass = (PartyOrganizationUtility_c *)v11;
    sub_1C2E0D0(p_sb, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
  v18 = args->max_length;
  v19 = 0LL;
  do
  {
    if ( v19 >= v18 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_62399320((System_Text_StringBuilder_o *)this, args->m_Items[v19], 0LL);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_62399064((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass;
    v18 = args->max_length;
    ++v19;
  }
  while ( v7 != v19 );
  if ( (unsigned int)v7 >= v18 )
LABEL_20:
    sub_1C2E390(this, args);
  if ( !this
    || (System_Text_StringBuilder__Append_62399320((System_Text_StringBuilder_o *)this, args->m_Items[(int)v7], 0LL),
        (this = (DataMasterBase_TMaster__TEntity__PKType__o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_1C2E388(this, args);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                              this,
                              this->klass->vtable._4_ForForceDerived.methodPtr);
}


System_Object_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___directGetList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo_3280018 *method)
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

  if ( (byte_4C0379C & 1) == 0 )
  {
    sub_1C2E12C(&DataIO_Runtime_Deserializer_TypeInfo, bytes);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v10);
    sub_1C2E12C(&System_IO_MemoryStream_TypeInfo, v11);
    byte_4C0379C = 1;
  }
  v12 = (System_IO_MemoryStream_o *)sub_1C2E378(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_63379852(v12, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v14 = (DataIO_Runtime_Deserializer_o *)sub_1C2E378(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v14, seriazlier, 0LL);
  if ( !v14 )
    sub_1C2E388(v15, v16);
  v17 = (System_Collections_IEnumerable_o *)DataIO_Runtime_Deserializer__DispatchDeserialize(
                                              v14,
                                              this->fields._MasterName_k__BackingField,
                                              (System_IO_Stream_o *)v12,
                                              0LL);
  if ( !v17 )
  {
    v25 = sub_1C2E140(&System_FormatException_TypeInfo);
    v26 = (System_FormatException_o *)sub_1C2E378(v25);
    v27 = (System_String_o *)sub_1C2E140(&StringLiteral_20112/*"getList family cannot return null."*/);
    System_FormatException___ctor_63856836(v26, v27, 0LL);
    sub_1C2E254(v26, method);
  }
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v17,
                                                               (const MethodInfo_2FFB080 *)method->klass->rgctx_data->_11_System_Linq_Enumerable_OfType_TEntity_);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_300BDBC *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
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
      v23 = sub_1C8010C(v12, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v23)(v12, *(_QWORD *)(v23 + 8));
  }
  return v19;
}


Il2CppObject *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityFromKey(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_3281534 *method)
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

  v14 = 0LL;
  v5 = ((__int64 (__fastcall *)(DataMasterBase_TMaster__TEntity__PKType__o *))method->klass->rgctx_data->_45_DataMasterBase_TMaster__TEntity__PKType__get_lookup->methodPointer)(this);
  if ( !v5 )
    sub_1C2E388(0LL, v6);
  v7 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C80008();
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
    v12 = sub_1C8010C(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(__int64, System_String_o *, Il2CppObject **, _QWORD))v12)(
          v7,
          key,
          &v14,
          *(_QWORD *)(v12 + 8)) & 1) != 0 )
    return v14;
  else
    return 0LL;
}


System_Collections_ObjectModel_ObservableCollection_TEntity__o *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntityList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3281444 *method)
{
  return this->fields.list;
}


System_Object_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3281430 *method)
{
  return System_Linq_Enumerable__ToArray_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
           (const MethodInfo_300BDBC *)method->klass->rgctx_data->_13_System_Linq_Enumerable_ToArray_TEntity_);
}


System_Object_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___getEntitys_object_(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_2F012DC *method)
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
  System_Collections_Generic_List_int__o *v26; // x0
  System_Converter_T__TOutput__o *v27; // x1
  const MethodInfo_2F01458 *v28; // x2

  if ( !method->rgctx_data )
    sub_1C80064(method);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3215B6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C80008(v6);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C2E1D4(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_21:
    sub_1C2E388(list, method);
  v9 = (System_Object_array *)list;
  v10 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_3215B6C *)method->klass->rgctx_data->_43_System_Collections_ObjectModel_Collection_TEntity__get_Count) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_21;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3215BFC *)method->klass->rgctx_data->_44_System_Collections_ObjectModel_Collection_TEntity__get_Item);
    if ( !v9 )
      goto LABEL_21;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
      _1_T = (Il2CppClass *)sub_1C80008(v12);
    v15 = sub_1C2E268(v13, _1_T);
    v23 = v15;
    v24 = method->rgctx_data->_1_T;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
    {
      v15 = sub_1C80008(v22);
      v24 = (Il2CppClass *)v15;
    }
    if ( v23 )
    {
      v15 = sub_1C2E268(v23, v24);
      v25 = v15;
      if ( !v15 )
      {
        sub_1C2E648(v23);
        return (System_Object_array *)System_Collections_Generic_List_int___ConvertAll_object_(v26, v27, v28);
      }
    }
    else
    {
      v25 = 0LL;
    }
    if ( v10 >= v9->max_length )
      sub_1C2E390(v15, v25);
    p_monitor->klass = (PartyOrganizationUtility_c *)v25;
    sub_1C2E0D0(p_monitor, v25, v16, v17, v18, v19, v20, v21);
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
    if ( !v8 )
      goto LABEL_21;
  }
  return v9;
}


System_Object_array *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___getList(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        Il2CppObject *obj,
        const MethodInfo_327FFAC *method)
{
  if ( (byte_4C0379B & 1) == 0 )
  {
    sub_1C2E12C(&JsonManager_TypeInfo, obj);
    byte_4C0379B = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__DeserializeArray_object_(
           obj,
           (const MethodInfo_3039DDC *)method->klass->rgctx_data->_9_JsonManager_DeserializeArray_TEntity_);
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___get_IsCreatedLookupTable(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_327FF68 *method)
{
  return this->fields._lookup != 0LL;
}


System_Collections_Generic_IReadOnlyDictionary_string__TEntity__o *__fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___get_lookup(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        const MethodInfo_327FF78 *method)
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


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___isEntityExistsFromId(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_Int64_array *args,
        const MethodInfo_3281774 *method)
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
    sub_1C2E388(0LL, v7);
  v8 = v6;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C80008();
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
    v13 = sub_1C8010C(v8, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0LL);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))v13)(v8, v5, *(_QWORD *)(v13 + 8));
}


bool __fastcall DataMasterBase_object__object____Il2CppFullySharedGenericType___isEntityExistsFromId_52959492(
        DataMasterBase_TMaster__TEntity__PKType__o *this,
        System_String_o *key,
        const MethodInfo_3281904 *method)
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
    sub_1C2E388(0LL, v6);
  v7 = v5;
  _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = (__int64)method->klass->rgctx_data->_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity_;
  if ( (*(_BYTE *)(_8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity + 309) & 1) == 0 )
    _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity = sub_1C80008();
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
    v12 = sub_1C8010C(v7, _8_System_Collections_Generic_IReadOnlyDictionary_string__TEntity, 0LL);
  }
  return (*(__int64 (__fastcall **)(__int64, System_String_o *, _QWORD))v12)(v7, key, *(_QWORD *)(v12 + 8));
}
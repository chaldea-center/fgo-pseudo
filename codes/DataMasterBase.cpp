// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  struct System_String_o *Name; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v33; // x21
  __int64 v34; // x0
  __int64 v35; // x1

  if ( (byte_4B15DE4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_OnListChanged__, *(_QWORD *)&kind, method);
    sub_1BCA7E0(&DataNameKind_TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v12, v13);
    byte_4B15DE4 = 1;
  }
  v14 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1BCAA2C(
                                                                      System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo,
                                                                      *(_QWORD *)&kind,
                                                                      method,
                                                                      v3);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v14,
    (const MethodInfo_36F9AC4 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v14;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.list, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo, v21);
  Name = DataNameKind__GetName(kind, 0LL);
  this->fields._MasterName_k__BackingField = Name;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MasterName_k__BackingField,
    (int64_t)Name,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  list = this->fields.list;
  v33 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1BCAA2C(
                                                                                  System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo,
                                                                                  v30,
                                                                                  v31,
                                                                                  v32);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v33,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_1BCAA3C(v34, v35);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v33,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B15DEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__, entity, method);
    byte_4B15DEE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    (Il2CppObject *)entity,
    (const MethodInfo_314F69C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4B15DE8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__, method, v2);
    byte_4B15DE8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_314F7EC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
}


void __fastcall DataMasterBase__CreateLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_object__object__o *v19; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  System_Collections_ObjectModel_Collection_T__o *v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  Il2CppObject *v41; // x21
  __int64 v42; // x1
  Il2CppObject *v43; // x22
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_4B15DEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    byte_4B15DEB = 1;
  }
  v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo,
                                                                     method,
                                                                     v2,
                                                                     v3);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v19,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v19;
  p_lookup = &this->fields._lookup;
  sub_1BCA784((PartyOrganizationUtility_o *)p_lookup, (int64_t)v19, v21, v22, v23, v24, v25, v26);
  v28 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v28 )
    sub_1BCAA3C(0LL, v27);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v28,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v29);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        p_offset += 4;
        if ( !v32 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v35 = Enumerator->klass;
    v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v37 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_16;
      }
      v38 = (__int64)&v35->vtable[*v37].method;
    }
    else
    {
LABEL_16:
      v38 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
            Enumerator,
            *(_QWORD *)(v38 + 8));
    v41 = (Il2CppObject *)v39;
    if ( !v39 )
      sub_1BCAA3C(0LL, v40);
    v43 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 376LL))(
                            v39,
                            *(_QWORD *)(*(_QWORD *)v39 + 384LL));
    if ( v43 )
    {
      if ( !*p_lookup )
        sub_1BCAA3C(0LL, v42);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v43,
              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_1BCAA3C(0LL, v44);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v43,
          v41,
          (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_28;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_28:
    v48 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
}


bool __fastcall DataMasterBase__Deleted(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  int monitor; // w8
  Il2CppObject *v8; // x20
  int i; // w22
  DataEntityBase_o *v10; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4B15DED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj, method);
    byte_4B15DED = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_1BCAA3C(Instance, v6);
  }
  monitor = (int)Instance[1].monitor;
  v8 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1BCAA44(Instance, v6);
      v10 = (DataEntityBase_o *)*((_QWORD *)&v8[2].klass + i);
      if ( !v10 )
        goto LABEL_15;
      v11 = ((__int64 (__fastcall *)(DataEntityBase_o *, const char *))v10->klass[1]._1.gc_desc)(
              v10,
              v10->klass[1]._1.name);
      if ( !v11 )
        return v11;
      Instance = (Il2CppObject *)DataMasterBase__RemoveEntity(this, v10, v12);
      monitor = (int)v8[1].monitor;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v11) = 1;
  return v11;
}


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_2F12F58 *method)
{
  long double v1; // q0
  const MethodInfo_2F12F58_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method);
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C1C6BC(v1);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_2F12F90 *method)
{
  long double v1; // q0
  const MethodInfo_2F12F90_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method);
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C1C6BC(v1);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_2F12FC8 *method)
{
  __int64 v2; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *Item; // x20
  long double v9; // q0
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BCAA3C(list, method);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C1C6BC(v9);
  if ( Item )
  {
    result = (Il2CppObject *)sub_1BCA91C(Item, _0_T);
    if ( result )
      return result;
    sub_1BCACFC(Item);
  }
  return 0LL;
}


bool __fastcall DataMasterBase__Modified(DataMasterBase_o *this, int32_t revision, const MethodInfo *method)
{
  return this->fields.revision != revision;
}


void __fastcall DataMasterBase__OnListChanged(
        DataMasterBase_o *this,
        Il2CppObject *sender,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  DataMasterBase_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_NotImplementedException_o *v26; // x19
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  System_Collections_IEnumerator_c **v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x22
  __int64 v41; // x8
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x21
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v52; // x8
  __int64 v53; // x9
  int32_t *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x21
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  System_Collections_IEnumerator_c **v64; // x10
  __int64 v65; // x0
  __int64 v66; // x0
  Il2CppObject *v67; // x22
  __int64 v68; // x8
  __int64 v69; // x10
  System_Collections_Generic_Dictionary_object__object__o *v70; // x23
  Il2CppObject *v71; // x0
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x21
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0

  v5 = this;
  if ( (byte_4B15DF4 & 1) == 0 )
  {
    sub_1BCA7E0(&DataEntityBase_TypeInfo, sender, e);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerable_TypeInfo, v12, v13);
    this = (DataMasterBase_o *)sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    byte_4B15DF4 = 1;
  }
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_1BCAA3C(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v22 = sub_1BCA7F4(&System_NotImplementedException_TypeInfo, sender);
          v26 = (System_NotImplementedException_o *)sub_1BCAA2C(v22, v23, v24, v25);
          System_NotImplementedException___ctor(v26, 0LL);
          v28 = sub_1BCA7F4(&Method_DataMasterBase_OnListChanged__, v27);
          sub_1BCA908(v26, v28);
        }
        DataMasterBase__CreateLookupTable(v5, (const MethodInfo *)sender);
      }
    }
    else
    {
      oldItems = e->fields._oldItems;
      if ( oldItems )
      {
        klass = oldItems->klass;
        v19 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
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
          p_method = sub_1C1C7C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v30 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v30 )
          sub_1BCAA3C(0LL, v29);
        while ( 1 )
        {
          v31 = *(_QWORD *)v30;
          v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v32;
              v33 += 4;
              if ( !v32 )
                goto LABEL_21;
            }
            v34 = v31 + 16LL * *v33 + 312;
          }
          else
          {
LABEL_21:
            v34 = sub_1C1C7C0(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
            break;
          v35 = *(_QWORD *)v30;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v37 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *(v37 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v36;
              v37 += 2;
              if ( !v36 )
                goto LABEL_28;
            }
            v38 = v35 + 16LL * (*(_DWORD *)v37 + 1) + 312;
          }
          else
          {
LABEL_28:
            v38 = sub_1C1C7C0(v30, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
          v40 = v39;
          if ( v39 )
          {
            v41 = *(_QWORD *)v39;
            methodPtr_low = LOBYTE(DataEntityBase_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v39 + 304LL) >= (unsigned int)methodPtr_low
              && *(DataEntityBase_c **)(*(_QWORD *)(v41 + 200) + 8 * methodPtr_low - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v41 + 376))(v39, *(_QWORD *)(v41 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields._lookup;
              v44 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v40 + 376LL))(
                                      v40,
                                      *(_QWORD *)(*(_QWORD *)v40 + 384LL));
              if ( !lookup )
                sub_1BCAA3C(v44, v44);
              System_Collections_Generic_Dictionary_object__object___Remove(
                lookup,
                v44,
                (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v45 = sub_1BCA91C(v30, System_IDisposable_TypeInfo);
        if ( v45 )
        {
          v46 = *(_QWORD *)v45;
          v47 = v45;
          v48 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
          {
            v49 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
            {
              --v48;
              v49 += 4;
              if ( !v48 )
                goto LABEL_41;
            }
            v50 = v46 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_41:
            v50 = sub_1C1C7C0(v45, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v52 = newItems->klass;
        v53 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
        {
          v54 = &v52->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v54 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v53;
            v54 += 4;
            if ( !v53 )
              goto LABEL_49;
          }
          v55 = (__int64)&v52->vtable[*v54].method;
        }
        else
        {
LABEL_49:
          v55 = sub_1C1C7C0(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v57 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v55)(
                newItems,
                *(_QWORD *)(v55 + 8));
        if ( !v57 )
          sub_1BCAA3C(0LL, v56);
        while ( 1 )
        {
          v58 = *(_QWORD *)v57;
          v59 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
          {
            v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v59;
              v60 += 4;
              if ( !v59 )
                goto LABEL_56;
            }
            v61 = v58 + 16LL * *v60 + 312;
          }
          else
          {
LABEL_56:
            v61 = sub_1C1C7C0(v57, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
            break;
          v62 = *(_QWORD *)v57;
          v63 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
          {
            v64 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v62 + 176) + 8LL);
            while ( *(v64 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v63;
              v64 += 2;
              if ( !v63 )
                goto LABEL_63;
            }
            v65 = v62 + 16LL * (*(_DWORD *)v64 + 1) + 312;
          }
          else
          {
LABEL_63:
            v65 = sub_1C1C7C0(v57, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v66 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
          v67 = (Il2CppObject *)v66;
          if ( v66 )
          {
            v68 = *(_QWORD *)v66;
            v69 = LOBYTE(DataEntityBase_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v66 + 304LL) >= (unsigned int)v69
              && *(DataEntityBase_c **)(*(_QWORD *)(v68 + 200) + 8 * v69 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v68 + 376))(v66, *(_QWORD *)(v68 + 384)) )
            {
              v70 = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields._lookup;
              v71 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v67->klass->vtable[4].method)(
                                      v67,
                                      v67->klass->vtable[5].methodPtr);
              if ( !v70 )
                sub_1BCAA3C(v71, v71);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v70,
                v71,
                v67,
                (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v72 = sub_1BCA91C(v57, System_IDisposable_TypeInfo);
        if ( v72 )
        {
          v73 = *(_QWORD *)v72;
          v74 = v72;
          v75 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
          {
            v76 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
            {
              --v75;
              v76 += 4;
              if ( !v75 )
                goto LABEL_76;
            }
            v77 = v73 + 16LL * *v76 + 312;
          }
          else
          {
LABEL_76:
            v77 = sub_1C1C7C0(v72, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v77)(v74, *(_QWORD *)(v77 + 8));
        }
      }
    }
  }
  ((void (__fastcall *)(DataMasterBase_o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, void *))v5->klass->vtable._8_OnListChangedImplementation.method)(
    v5,
    e,
    v5->klass[1]._1.image);
}


void __fastcall DataMasterBase__OnListChangedImplementation(
        DataMasterBase_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataMasterBase__RegisterKindAndName_object_(
        int32_t kind,
        System_String_o *name,
        const MethodInfo_2F130A8 *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double v8; // q0
  const MethodInfo_2F130A8_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v14; // x0
  Il2CppClass *v15; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1C718(method);
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C1C6BC(v8);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v14 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1C1C6BC(v8);
  *((_QWORD *)v14->static_fields + 1) = name;
  v15 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
    v15 = (Il2CppClass *)sub_1C1C6BC(v8);
  sub_1BCA784(
    (PartyOrganizationUtility_o *)((char *)v15->static_fields + 8),
    (int64_t)name,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall DataMasterBase__RemoveEntity(
        DataMasterBase_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  System_Collections_ObjectModel_Collection_T__o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Predicate_object__o *v27; // x22
  int32_t Index_object; // w20

  if ( (byte_4B15DEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__, entity, method);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___, v6, v7);
    sub_1BCA7E0(&System_Predicate_DataEntityBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__, v10, v11);
    sub_1BCA7E0(&DataMasterBase___c__DisplayClass40_0_TypeInfo, v12, v13);
    byte_4B15DEF = 1;
  }
  v14 = sub_1BCAA2C(DataMasterBase___c__DisplayClass40_0_TypeInfo, entity, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !entity )
    goto LABEL_9;
  v15 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                                            entity,
                                                            entity->klass[1]._1.name);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)v15, v17, v18, v19, v20, v21, v22);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v27 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_DataEntityBase__TypeInfo, v24, v25, v26);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v14,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    0LL);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v27,
                   (const MethodInfo_2F98C84 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v15 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v15 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v15,
        Index_object,
        (const MethodInfo_314FDD8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return Index_object >= 0;
    }
LABEL_9:
    sub_1BCAA3C(v15, v16);
  }
  return Index_object >= 0;
}


bool __fastcall DataMasterBase__Replaced(
        DataMasterBase_o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo *method)
{
  int64_t value; // x20
  __int64 v6; // x21
  int64_t v7; // x22
  __int64 v8; // x23
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v16; // x6
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  System_Nullable_long__o v19; // 0:x2.16
  System_Nullable_long__o v20; // 0:x4.16

  value = lenght.fields.value;
  v6 = *(_QWORD *)&lenght.fields.hasValue;
  v7 = start.fields.value;
  v8 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4B15DE9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_ObservableCollectionExtensions_AddRange_DataEntityBase___,
      objOrBytes,
      *(_QWORD *)&start.fields.hasValue);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B15DE9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_6;
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v19.fields.hasValue = v8;
  v19.fields.value = v7;
  *(_QWORD *)&v20.fields.hasValue = v6;
  v20.fields.value = value;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetList(this, objOrBytes, v19, v20, v16);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v17,
    (const MethodInfo_2F97AF8 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_1BCAA3C(Instance, v14);
  ++this->fields.revision;
  return 1;
}


bool __fastcall DataMasterBase__ReplacedForThread(
        DataMasterBase_o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo *method)
{
  int64_t value; // x21
  __int64 v9; // x22
  int64_t v10; // x23
  __int64 v11; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *ListForThread; // x0
  const MethodInfo *v18; // [xsp+0h] [xbp-70h]
  System_Nullable_long__o v19; // 0:x3.16
  System_Nullable_long__o v20; // 0:x5.16

  value = lenght.fields.value;
  v9 = *(_QWORD *)&lenght.fields.hasValue;
  v10 = start.fields.value;
  v11 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4B15DEA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes, context);
    byte_4B15DEA = 1;
  }
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v19.fields.hasValue = v11;
  v19.fields.value = v10;
  *(_QWORD *)&v20.fields.hasValue = v9;
  v20.fields.value = value;
  ListForThread = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetListForThread(
                                                                   this,
                                                                   objOrBytes,
                                                                   context,
                                                                   v19,
                                                                   v20,
                                                                   work,
                                                                   v18);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    ListForThread,
    (const MethodInfo_2F97AF8 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  ++this->fields.revision;
  return 1;
}


int32_t __fastcall DataMasterBase__Revision(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields.revision;
}


bool __fastcall DataMasterBase__TryGetEntityFromId_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        System_String_o *key,
        const MethodInfo_2F13130 *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x22
  __int64 v12; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  char v21; // w21
  long double v22; // q0
  __int64 v23; // x22
  Il2CppClass *_1_T; // x23
  Il2CppObject *v25; // x0
  Il2CppClass *v26; // x20
  int64_t v27; // x1
  __int64 v29; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, result, key);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  v29 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1BCAA3C(0LL, v9);
  klass = lookup->klass;
  v11 = lookup;
  v12 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v12;
      p_offset += 2;
      if ( !v12 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v11,
          key,
          &v29,
          *(_QWORD *)(p_method + 8));
  if ( (v21 & 1) == 0 )
    goto LABEL_17;
  v23 = v29;
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C1C6BC(v22);
  if ( !v23 )
  {
    v25 = 0LL;
LABEL_19:
    *result = v25;
    v26 = method->rgctx_data->_1_T;
    if ( (BYTE5(v26->vtable[0].methodPtr) & 1) == 0 )
      v26 = (Il2CppClass *)sub_1C1C6BC(v22);
    if ( v23 )
    {
      v27 = sub_1BCA91C(v23, v26);
      if ( v27 )
      {
LABEL_25:
        sub_1BCA784((PartyOrganizationUtility_o *)result, v27, v15, v16, v17, v18, v19, v20);
        return v21 & 1;
      }
      sub_1BCACFC(v23);
    }
    v27 = 0LL;
    goto LABEL_25;
  }
  v25 = (Il2CppObject *)sub_1BCA91C(v23, _1_T);
  if ( v25 )
    goto LABEL_19;
  sub_1BCACFC(v23);
LABEL_17:
  *result = 0LL;
  return v21 & 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_2F132B8 *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  Il2CppObject *Item; // x22
  long double v17; // q0
  Il2CppClass *_1_T; // x23
  Il2CppObject *v19; // x0
  Il2CppClass *v20; // x20
  int64_t v21; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, result, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1C1C6BC(v17);
      if ( Item )
      {
        v19 = (Il2CppObject *)sub_1BCA91C(Item, _1_T);
        if ( !v19 )
        {
          sub_1BCACFC(Item);
          goto LABEL_13;
        }
      }
      else
      {
        v19 = 0LL;
      }
      *result = v19;
      v20 = method->rgctx_data->_1_T;
      if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
        v20 = (Il2CppClass *)sub_1C1C6BC(v17);
      if ( Item )
      {
        v21 = sub_1BCA91C(Item, v20);
        if ( v21 )
        {
LABEL_21:
          sub_1BCA784((PartyOrganizationUtility_o *)result, v21, v10, v11, v12, v13, v14, v15);
          return Count > 0;
        }
        sub_1BCACFC(Item);
      }
      v21 = 0LL;
      goto LABEL_21;
    }
LABEL_23:
    sub_1BCAA3C(list, result);
  }
LABEL_13:
  *result = 0LL;
  return Count > 0;
}


bool __fastcall DataMasterBase__Updated(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  Il2CppObject *v8; // x20
  unsigned __int64 v9; // x22
  unsigned int monitor; // w8

  if ( (byte_4B15DEC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj, method);
    byte_4B15DEC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_1BCAA3C(Instance, v6);
  }
  v8 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v9 = 0LL;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1BCAA44(Instance, v6);
    Instance = (Il2CppObject *)DataMasterBase__UpdatedEntity(this, *((DataEntityBase_o **)&v8[2].klass + v9), v7);
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


bool __fastcall DataMasterBase__UpdatedEntity(
        DataMasterBase_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  __int64 v6; // x21
  const MethodInfo *v7; // x2

  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  v6 = ((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))entity->klass[1]._1.gc_desc)(
         entity,
         entity->klass[1]._1.name,
         method);
  if ( v6 )
  {
    DataMasterBase__RemoveEntity(this, entity, v5);
    DataMasterBase__AddEntity(this, entity, v7);
  }
  return v6 != 0;
}


DataEntityBase_array *__fastcall DataMasterBase__abstractGetList(
        DataMasterBase_o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo *method)
{
  bool hasValue; // w22
  bool v6; // w23
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  long double v18; // q0
  MiniMessagePack_MiniMessagePacker_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t Value; // x0
  __int64 v27; // x1
  const MethodInfo_36BF244 *v28; // x2
  const MethodInfo *v29; // x4
  int64_t v30; // x21
  int32_t v32; // w23
  __int64 v33; // x3
  DataEntityBase_array *List; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Nullable_long__o v41; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v42; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v43; // 0:x0.16
  System_Nullable_long__o v44; // 0:x0.16

  v42 = start;
  v41 = lenght;
  hasValue = lenght.fields.hasValue;
  v6 = start.fields.hasValue;
  if ( (byte_4B15DE6 & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, objOrBytes, *(_QWORD *)&start.fields.hasValue);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_long__get_HasValue__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_long__get_Value__, v13, v14);
    byte_4B15DE6 = 1;
  }
  if ( !sub_1BCA91C(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr,
                                     v18);
  v19 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, v15, v16, v17);
  MiniMessagePack_MiniMessagePacker___ctor(v19, 0LL);
  this->fields.seriazlier = v19;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seriazlier, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  if ( objOrBytes )
  {
    Value = sub_1BCA91C(objOrBytes, byte___TypeInfo);
    v30 = Value;
    if ( !Value )
    {
      v18 = sub_1BCACFC(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr,
                                       v18);
    }
  }
  else
  {
    v30 = 0LL;
  }
  if ( v6 )
  {
    v43.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v43.fields.hasValue = &v42;
    Value = System_Nullable_long___get_Value(v43, v28);
    hasValue = v41.fields.hasValue;
    v32 = Value;
  }
  else
  {
    v32 = 0;
  }
  if ( hasValue )
  {
    v44.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v44.fields.hasValue = &v41;
    LODWORD(v33) = System_Nullable_long___get_Value(v44, v28);
  }
  else
  {
    if ( !v30 )
      sub_1BCAA3C(Value, v27);
    v33 = *(_QWORD *)(v30 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v30, v32, v33, v29);
  this->fields.seriazlier = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seriazlier, 0LL, v35, v36, v37, v38, v39, v40);
  return List;
}


DataEntityBase_array *__fastcall DataMasterBase__abstractGetListForThread(
        DataMasterBase_o *this,
        Il2CppObject *objOrBytes,
        System_Threading_SynchronizationContext_o *context,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        System_Byte_array *work,
        const MethodInfo *method)
{
  bool hasValue; // w23
  bool v9; // w25
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x22
  MiniMessagePack_MiniMessagePacker_o *v23; // x26
  PartyOrganizationUtility_o *p_seriazlier; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_36BF244 *v39; // x2
  const MethodInfo *v40; // x4
  int32_t Value; // w24
  __int64 v43; // x3
  int64_t List; // x0
  __int64 v45; // x1
  const MethodInfo_36BF244 *v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  DataEntityBase_array *v52; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v54; // w24
  __int64 v55; // x3
  Il2CppObject *v56; // x1
  System_Nullable_long__o v57; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v58; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v59; // 0:x0.16
  System_Nullable_long__o v60; // 0:x0.16
  System_Nullable_long__o v61; // 0:x0.16
  System_Nullable_long__o v62; // 0:x0.16

  v58 = start;
  v57 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_4B15DE7 & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, objOrBytes, context);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Nullable_long__get_HasValue__, v14, v15);
    sub_1BCA7E0(&Method_System_Nullable_long__get_Value__, v16, v17);
    byte_4B15DE7 = 1;
  }
  v18 = sub_1BCA91C(objOrBytes, byte___TypeInfo);
  if ( !v18 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v22 = v18;
  v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(MiniMessagePack_MiniMessagePacker_TypeInfo, v19, v20, v21);
  MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL);
  this->fields.seriazlier = v23;
  p_seriazlier = (PartyOrganizationUtility_o *)&this->fields.seriazlier;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seriazlier, (int64_t)v23, v25, v26, v27, v28, v29, v30);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1BCAA3C(0LL, v31);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&seriazlier->fields.threadSafeStringHash,
    (int64_t)work,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( v9 )
  {
    v59.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v59.fields.hasValue = &v58;
    hasValue = v57.fields.hasValue;
    Value = System_Nullable_long___get_Value(v59, v39);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v60.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v60.fields.hasValue = &v57;
    LODWORD(v43) = System_Nullable_long___get_Value(v60, v39);
  }
  else
  {
    v43 = *(_QWORD *)(v22 + 24);
  }
  List = (int64_t)DataMasterBase__directGetList(this, (System_Byte_array *)v22, Value, v43, v40);
  v52 = (DataEntityBase_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v58.fields.hasValue )
    {
      v61.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v61.fields.hasValue = &v58;
      List = System_Nullable_long___get_Value(v61, v46);
      v54 = List;
    }
    else
    {
      v54 = 0;
    }
    if ( v57.fields.hasValue )
    {
      v62.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v62.fields.hasValue = &v57;
      List = System_Nullable_long___get_Value(v62, v46);
      LODWORD(v55) = List;
      if ( klass )
      {
LABEL_18:
        v56 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v22, v54, v55, 0LL);
        v52 = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                        this,
                                        v56,
                                        this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v55 = *(_QWORD *)(v22 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_1BCAA3C(List, v45);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_1BCA784(p_seriazlier, 0LL, (int64_t)v46, v47, v48, v49, v50, v51);
  return v52;
}


System_String_o *__fastcall DataMasterBase__createKey(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataMasterBase_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  signed int max_length; // w8
  __int64 v9; // x22
  PartyOrganizationUtility_o *p_sb; // x19
  DataMasterBase_o *sb; // t1
  System_Text_StringBuilder_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  il2cpp_array_size_t v20; // w8
  unsigned __int64 v21; // x21

  v5 = this;
  if ( (byte_4B15DF1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Text_StringBuilder_TypeInfo, args, method);
    this = (DataMasterBase_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B15DF1 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v9 = (unsigned int)(max_length - 1);
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_o *)v5->fields.sb;
  p_sb = (PartyOrganizationUtility_o *)&v5->fields.sb;
  this = sb;
  if ( !sb )
  {
    v13 = (System_Text_StringBuilder_o *)sub_1BCAA2C(System_Text_StringBuilder_TypeInfo, args, method, v3);
    System_Text_StringBuilder___ctor_61556468(v13, 128, 0LL);
    p_sb->klass = (PartyOrganizationUtility_c *)v13;
    sub_1BCA784(p_sb, (int64_t)v13, v14, v15, v16, v17, v18, v19);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_o *)p_sb->klass;
  v20 = args->max_length;
  v21 = 0LL;
  do
  {
    if ( v21 >= v20 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_61565700((System_Text_StringBuilder_o *)this, args->m_Items[v21], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_61565444((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v20 = args->max_length;
    ++v21;
  }
  while ( v9 != v21 );
  if ( (unsigned int)v9 >= v20 )
LABEL_20:
    sub_1BCAA44(this, args);
  if ( !this
    || (System_Text_StringBuilder__Append_61565700((System_Text_StringBuilder_o *)this, args->m_Items[(int)v9], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_1BCAA3C(this, args);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                              this,
                              this->klass->vtable._4_unknown.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
DataEntityBase_array *__fastcall DataMasterBase__directGetList(
        DataMasterBase_o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_IO_MemoryStream_o *v13; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x22
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  DataIO_Runtime_Deserializer_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  DataEntityBase_array *v22; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_FormatException_o *v32; // x20
  __int64 v33; // x1
  System_String_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x0

  if ( (byte_4B15DE5 & 1) == 0 )
  {
    sub_1BCA7E0(&DataIO_Runtime_Deserializer_TypeInfo, bytes, *(_QWORD *)&start);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IO_MemoryStream_TypeInfo, v11, v12);
    byte_4B15DE5 = 1;
  }
  v13 = (System_IO_MemoryStream_o *)sub_1BCAA2C(
                                      System_IO_MemoryStream_TypeInfo,
                                      bytes,
                                      *(_QWORD *)&start,
                                      *(_QWORD *)&length);
  System_IO_MemoryStream___ctor_62545488(v13, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v18 = (DataIO_Runtime_Deserializer_o *)sub_1BCAA2C(DataIO_Runtime_Deserializer_TypeInfo, v15, v16, v17);
  DataIO_Runtime_Deserializer___ctor(v18, seriazlier, 0LL);
  if ( !v18 )
    sub_1BCAA3C(v19, v20);
  v22 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v18,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v13,
          0LL);
  if ( !v22 )
  {
    v28 = sub_1BCA7F4(&System_FormatException_TypeInfo, v21);
    v32 = (System_FormatException_o *)sub_1BCAA2C(v28, v29, v30, v31);
    v34 = (System_String_o *)sub_1BCA7F4(&StringLiteral_19960/*"getList family cannot return null."*/, v33);
    System_FormatException___ctor_63022472(v32, v34, 0LL);
    v36 = sub_1BCA7F4(&Method_DataMasterBase_directGetList__, v35);
    sub_1BCA908(v32, v36);
  }
  if ( v13 )
  {
    klass = v13->klass;
    v24 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_10;
      }
      v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v26 = sub_1C1C7C0(v13, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v26)(v13, *(_QWORD *)(v26 + 8));
  }
  return v22;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_2F13408 *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v7; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v9; // x21
  __int64 v10; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  long double v13; // q0
  __int64 v14; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0
  __int64 v17; // [xsp+8h] [xbp-28h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, key, method);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  v17 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1BCAA3C(0LL, v7);
  klass = lookup->klass;
  v9 = lookup;
  v10 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v9,
          key,
          &v17,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v14 = v17;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C1C6BC(v13);
    if ( v14 )
    {
      result = (Il2CppObject *)sub_1BCA91C(v14, _0_T);
      if ( result )
        return result;
      sub_1BCACFC(v14);
    }
  }
  return 0LL;
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataMasterBase__getEntityList(
        DataMasterBase_o *this,
        const MethodInfo *method)
{
  return this->fields.list;
}


DataEntityBase_array *__fastcall DataMasterBase__getEntitys(DataMasterBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15DF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, method, v2);
    byte_4B15DF0 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Object_array *__fastcall DataMasterBase__getEntitys_object_(
        DataMasterBase_o *this,
        const MethodInfo_2F13524 *method)
{
  __int64 v2; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  long double v9; // q0
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v11; // x8
  System_Object_array *v12; // x21
  unsigned __int64 v13; // x22
  PartyOrganizationUtility_o *p_monitor; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  long double v21; // q0
  System_Collections_ObjectModel_Collection_T__o *v22; // x24
  Il2CppClass *_1_T; // x25
  int64_t v24; // x1
  UnityEngine_UIElements_DefaultEventSystem_o *v25; // x0
  System_Func_TArg__EventBase__o *v26; // x1
  const MethodInfo_2F13698 *v27; // x4
  System_Object_array *result; // x0
  System_ValueTuple_Int32Enum__Int32Enum__object__o v29; // 0:x2.16

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5, v6);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1C1C6BC(v9);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BCA888(_0_T, Count);
  v11 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v11 )
LABEL_20:
    sub_1BCAA3C(list, method);
  v12 = (System_Object_array *)list;
  v13 = 0LL;
  p_monitor = (PartyOrganizationUtility_o *)&list[1].monitor;
  while ( (__int64)v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v11,
                           (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v12 )
      goto LABEL_20;
    v22 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1C1C6BC(v21);
      _1_T = (Il2CppClass *)list;
    }
    if ( v22 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BCA91C(v22, _1_T);
      v24 = (int64_t)list;
      if ( !list )
      {
        sub_1BCACFC(v22);
        UnityEngine_UIElements_DefaultEventSystem__SendFocusBasedEvent_ValueTuple_Int32Enum__Int32Enum__object__(
          v25,
          v26,
          v29,
          v27);
        return result;
      }
    }
    else
    {
      v24 = 0LL;
    }
    if ( v13 >= v12->max_length )
      sub_1BCAA44(list, v24);
    p_monitor->klass = (PartyOrganizationUtility_c *)v24;
    sub_1BCA784(p_monitor, v24, v15, v16, v17, v18, v19, v20);
    v11 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    p_monitor = (PartyOrganizationUtility_o *)((char *)p_monitor + 8);
    if ( !v11 )
      goto LABEL_20;
  }
  return v12;
}


bool __fastcall DataMasterBase__get_IsCreatedLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._lookup != 0LL;
}


int32_t __fastcall DataMasterBase__get_MasterKind(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterKind_k__BackingField;
}


System_String_o *__fastcall DataMasterBase__get_MasterName(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterName_k__BackingField;
}


System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *__fastcall DataMasterBase__get_lookup(
        DataMasterBase_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *result; // x0

  result = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)this->fields._lookup;
  if ( !result )
  {
    DataMasterBase__CreateLookupTable(this, method);
    return (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *)this->fields._lookup;
  }
  return result;
}


bool __fastcall DataMasterBase__isEntityExistsFromId(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  System_String_o *Key; // x0
  const MethodInfo *v6; // x1
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v8; // x19
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0

  if ( (byte_4B15DF2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, args, method);
    byte_4B15DF2 = 1;
  }
  Key = DataMasterBase__createKey(this, args, method);
  lookup = this->fields._lookup;
  v8 = Key;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, v6);
    lookup = this->fields._lookup;
  }
  if ( !lookup )
    sub_1BCAA3C(Key, v6);
  klass = lookup->klass;
  v10 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_10;
    }
    v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v12 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v12)(
           lookup,
           v8,
           *(_QWORD *)(v12 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_39651284(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  DataMasterBase_o *v4; // x21
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0

  v4 = this;
  if ( (byte_4B15DF3 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_1BCA7E0(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 key,
                                 method);
    byte_4B15DF3 = 1;
  }
  lookup = v4->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(v4, (const MethodInfo *)key);
    lookup = v4->fields._lookup;
  }
  if ( !lookup )
    sub_1BCAA3C(this, key);
  klass = lookup->klass;
  v7 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_10:
    v9 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v9)(
           lookup,
           key,
           *(_QWORD *)(v9 + 8));
}


bool __fastcall DataMasterBase__preProcess(DataMasterBase_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall DataMasterBase__set_MasterKind(DataMasterBase_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MasterKind_k__BackingField = value;
}


void __fastcall DataMasterBase__set_MasterName(
        DataMasterBase_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._MasterName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._MasterName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataMasterBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15DF5 & 1) == 0 )
  {
    sub_1BCA7E0(&DataMasterBase___c_TypeInfo, v1, v2);
    byte_4B15DF5 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DataMasterBase___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DataMasterBase___c_TypeInfo->static_fields->__9 = (struct DataMasterBase___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)DataMasterBase___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall DataMasterBase___c___ctor(DataMasterBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataMasterBase___c___abstractGetListForThread_b__30_0(
        DataMasterBase___c_o *this,
        Il2CppObject *_,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataMasterBase___c___abstractGetListForThread_b__30_1(
        DataMasterBase___c_o *this,
        Il2CppObject *_,
        const MethodInfo *method)
{
  ;
}


void __fastcall DataMasterBase___c__DisplayClass40_0___ctor(
        DataMasterBase___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DataMasterBase___c__DisplayClass40_0___RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass40_0_o *this,
        DataEntityBase_o *item,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1BCAA3C(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
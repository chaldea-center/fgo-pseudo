void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  System_Collections_ObjectModel_ObservableCollection_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *Name; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1

  if ( (byte_4A5AD5A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_OnListChanged__);
    sub_1B885B0(&DataNameKind_TypeInfo);
    sub_1B885B0(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_1B885B0(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_4A5AD5A = 1;
  }
  v5 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1B887FC(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v5,
    (const MethodInfo_3654F78 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.list, (int32_t)v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, 0LL);
  this->fields._MasterName_k__BackingField = Name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._MasterName_k__BackingField, (int32_t)Name, v9, v10);
  list = this->fields.list;
  v12 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1B887FC(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v12,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_1B8880C(v13, v14);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v12,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4A5AD64 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
    byte_4A5AD64 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    (Il2CppObject *)entity,
    (const MethodInfo_30BA80C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4A5AD5E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
    byte_4A5AD5E = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_30BA95C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
}


void __fastcall DataMasterBase__CreateLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  __int64 v22; // x1
  Il2CppObject *v23; // x22
  __int64 v24; // x1
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int32_t *v27; // x10
  __int64 v28; // x0

  if ( (byte_4A5AD61 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5AD61 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v3;
  p_lookup = &this->fields._lookup;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_lookup, (int32_t)v3, v5, v6);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v8 )
    sub_1B8880C(0LL, v7);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v8,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17].method;
    }
    else
    {
LABEL_16:
      v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8));
    v21 = (Il2CppObject *)v19;
    if ( !v19 )
      sub_1B8880C(0LL, v20);
    v23 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 376LL))(
                            v19,
                            *(_QWORD *)(*(_QWORD *)v19 + 384LL));
    if ( v23 )
    {
      if ( !*p_lookup )
        sub_1B8880C(0LL, v22);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v23,
              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_1B8880C(0LL, v24);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v23,
          v21,
          (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v25 = Enumerator->klass;
  v26 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v27 = &v25->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_28;
    }
    v28 = (__int64)&v25->vtable[*v27].method;
  }
  else
  {
LABEL_28:
    v28 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(Enumerator, *(_QWORD *)(v28 + 8));
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

  if ( (byte_4A5AD63 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD63 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_1B8880C(Instance, v6);
  }
  monitor = (int)Instance[1].monitor;
  v8 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1B88814(Instance, v6);
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


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_2E7FBD0 *method)
{
  const MethodInfo_2E7FBD0_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BDA4E8();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BDA48C(_1_DataMasterBase_Registration_TMaster);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_2E7FC08 *method)
{
  const MethodInfo_2E7FC08_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BDA4E8();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BDA48C(_1_DataMasterBase_Registration_TMaster);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_2E7FC40 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B8880C(list, method);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BDA48C(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_1B886EC(Item, _0_T);
    if ( result )
      return result;
    sub_1B88ACC(Item);
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
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x0
  System_NotImplementedException_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  System_Collections_IEnumerator_c **v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x22
  __int64 v27; // x8
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x21
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  System_Collections_IEnumerator_c **v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  Il2CppObject *v53; // x22
  __int64 v54; // x8
  __int64 v55; // x10
  System_Collections_Generic_Dictionary_object__object__o *v56; // x23
  Il2CppObject *v57; // x0
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x21
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0

  v5 = this;
  if ( (byte_4A5AD6A & 1) == 0 )
  {
    sub_1B885B0(&DataEntityBase_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerable_TypeInfo);
    this = (DataMasterBase_o *)sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4A5AD6A = 1;
  }
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_1B8880C(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v12 = sub_1B885C4(&System_NotImplementedException_TypeInfo);
          v13 = (System_NotImplementedException_o *)sub_1B887FC(v12);
          System_NotImplementedException___ctor(v13, 0LL);
          v14 = sub_1B885C4(&Method_DataMasterBase_OnListChanged__);
          sub_1B886D8(v13, v14);
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
        v9 = *(unsigned __int16 *)(&oldItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&oldItems->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v9;
            p_offset += 4;
            if ( !v9 )
              goto LABEL_11;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_11:
          p_method = sub_1BDA590(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v16 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v16 )
          sub_1B8880C(0LL, v15);
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
            v20 = sub_1BDA590(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v24 = sub_1BDA590(v16, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          v26 = v25;
          if ( v25 )
          {
            v27 = *(_QWORD *)v25;
            methodPtr_low = LOBYTE(DataEntityBase_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) >= (unsigned int)methodPtr_low
              && *(DataEntityBase_c **)(*(_QWORD *)(v27 + 200) + 8 * methodPtr_low - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v27 + 376))(v25, *(_QWORD *)(v27 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields._lookup;
              v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 376LL))(
                                      v26,
                                      *(_QWORD *)(*(_QWORD *)v26 + 384LL));
              if ( !lookup )
                sub_1B8880C(v30, v30);
              System_Collections_Generic_Dictionary_object__object___Remove(
                lookup,
                v30,
                (const MethodInfo_31C86C4 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v31 = sub_1B886EC(v16, System_IDisposable_TypeInfo);
        if ( v31 )
        {
          v32 = *(_QWORD *)v31;
          v33 = v31;
          v34 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
          {
            v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
            {
              --v34;
              v35 += 4;
              if ( !v34 )
                goto LABEL_41;
            }
            v36 = v32 + 16LL * *v35 + 312;
          }
          else
          {
LABEL_41:
            v36 = sub_1BDA590(v31, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v38 = newItems->klass;
        v39 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
        {
          v40 = &v38->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v40 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_49;
          }
          v41 = (__int64)&v38->vtable[*v40].method;
        }
        else
        {
LABEL_49:
          v41 = sub_1BDA590(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v43 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v41)(
                newItems,
                *(_QWORD *)(v41 + 8));
        if ( !v43 )
          sub_1B8880C(0LL, v42);
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
                goto LABEL_56;
            }
            v47 = v44 + 16LL * *v46 + 312;
          }
          else
          {
LABEL_56:
            v47 = sub_1BDA590(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_63;
            }
            v51 = v48 + 16LL * (*(_DWORD *)v50 + 1) + 312;
          }
          else
          {
LABEL_63:
            v51 = sub_1BDA590(v43, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
          v53 = (Il2CppObject *)v52;
          if ( v52 )
          {
            v54 = *(_QWORD *)v52;
            v55 = LOBYTE(DataEntityBase_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v52 + 304LL) >= (unsigned int)v55
              && *(DataEntityBase_c **)(*(_QWORD *)(v54 + 200) + 8 * v55 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v54 + 376))(v52, *(_QWORD *)(v54 + 384)) )
            {
              v56 = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields._lookup;
              v57 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v53->klass->vtable[4].method)(
                                      v53,
                                      v53->klass->vtable[5].methodPtr);
              if ( !v56 )
                sub_1B8880C(v57, v57);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v56,
                v57,
                v53,
                (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v58 = sub_1B886EC(v43, System_IDisposable_TypeInfo);
        if ( v58 )
        {
          v59 = *(_QWORD *)v58;
          v60 = v58;
          v61 = *(unsigned __int16 *)(*(_QWORD *)v58 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v58 + 302LL) )
          {
            v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
            {
              --v61;
              v62 += 4;
              if ( !v61 )
                goto LABEL_76;
            }
            v63 = v59 + 16LL * *v62 + 312;
          }
          else
          {
LABEL_76:
            v63 = sub_1BDA590(v58, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v63)(v60, *(_QWORD *)(v63 + 8));
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
        const MethodInfo_2E7FD20 *method)
{
  int32_t v3; // w3
  const MethodInfo_2E7FD20_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v9; // x0
  Il2CppClass *v10; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BDA4E8();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BDA48C(_1_DataMasterBase_Registration_TMaster);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v9 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BDA48C(v9);
  *((_QWORD *)v9->static_fields + 1) = name;
  v10 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1BDA48C(v10);
  sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v10->static_fields + 8), (int32_t)name, (int32_t)method, v3);
}


bool __fastcall DataMasterBase__RemoveEntity(
        DataMasterBase_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v11; // x22
  int32_t Index_object; // w20

  if ( (byte_4A5AD65 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
    sub_1B885B0(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
    sub_1B885B0(&System_Predicate_DataEntityBase__TypeInfo);
    sub_1B885B0(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__);
    sub_1B885B0(&DataMasterBase___c__DisplayClass40_0_TypeInfo);
    byte_4A5AD65 = 1;
  }
  v5 = sub_1B887FC(DataMasterBase___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !entity )
    goto LABEL_9;
  v6 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                                           entity,
                                                           entity->klass[1]._1.name);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v6, v8, v9);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    0LL);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v11,
                   (const MethodInfo_2F04D44 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v6 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v6 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v6,
        Index_object,
        (const MethodInfo_30BAF48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return Index_object >= 0;
    }
LABEL_9:
    sub_1B8880C(v6, v7);
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
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v14; // x6
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Nullable_long__o v17; // 0:x2.16
  System_Nullable_long__o v18; // 0:x4.16

  value = lenght.fields.value;
  v6 = *(_QWORD *)&lenght.fields.hasValue;
  v7 = start.fields.value;
  v8 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4A5AD5F & 1) == 0 )
  {
    sub_1B885B0(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD5F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_6;
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v17.fields.hasValue = v8;
  v17.fields.value = v7;
  *(_QWORD *)&v18.fields.hasValue = v6;
  v18.fields.value = value;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetList(this, objOrBytes, v17, v18, v14);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v15,
    (const MethodInfo_2F03BB8 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_1B8880C(Instance, v12);
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
  if ( (byte_4A5AD60 & 1) == 0 )
  {
    sub_1B885B0(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
    byte_4A5AD60 = 1;
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
    (const MethodInfo_2F03BB8 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_2E7FDA8 *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v9; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v11; // x22
  __int64 v12; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  char v17; // w21
  __int64 v18; // x22
  Il2CppClass *_1_T; // x23
  Il2CppObject *v20; // x0
  Il2CppClass *v21; // x20
  __int64 v22; // x0
  int32_t v23; // w1
  __int64 v25; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  v25 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1B8880C(0LL, v9);
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
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v11,
          key,
          &v25,
          *(_QWORD *)(p_method + 8));
  if ( (v17 & 1) == 0 )
    goto LABEL_17;
  v18 = v25;
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
  if ( !v18 )
  {
    v20 = 0LL;
LABEL_19:
    *result = v20;
    v21 = method->rgctx_data->_1_T;
    if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
      v21 = (Il2CppClass *)sub_1BDA48C(v21);
    if ( v18 )
    {
      v22 = sub_1B886EC(v18, v21);
      v23 = v22;
      if ( v22 )
      {
LABEL_25:
        sub_1B88554((ServantStatusBattleListViewItem_o *)result, v23, v15, v16);
        return v17 & 1;
      }
      sub_1B88ACC(v18);
    }
    v23 = 0;
    goto LABEL_25;
  }
  v20 = (Il2CppObject *)sub_1B886EC(v18, _1_T);
  if ( v20 )
    goto LABEL_19;
  sub_1B88ACC(v18);
LABEL_17:
  *result = 0LL;
  return v17 & 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_2E7FF30 *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *Item; // x22
  Il2CppClass *_1_T; // x23
  Il2CppObject *v12; // x0
  Il2CppClass *v13; // x20
  __int64 v14; // x0
  int32_t v15; // w1

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_1_T);
      if ( Item )
      {
        v12 = (Il2CppObject *)sub_1B886EC(Item, _1_T);
        if ( !v12 )
        {
          sub_1B88ACC(Item);
          goto LABEL_13;
        }
      }
      else
      {
        v12 = 0LL;
      }
      *result = v12;
      v13 = method->rgctx_data->_1_T;
      if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1BDA48C(v13);
      if ( Item )
      {
        v14 = sub_1B886EC(Item, v13);
        v15 = v14;
        if ( v14 )
        {
LABEL_21:
          sub_1B88554((ServantStatusBattleListViewItem_o *)result, v15, v8, v9);
          return Count > 0;
        }
        sub_1B88ACC(Item);
      }
      v15 = 0;
      goto LABEL_21;
    }
LABEL_23:
    sub_1B8880C(list, result);
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

  if ( (byte_4A5AD62 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AD62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  v8 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v9 = 0LL;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1B88814(Instance, v6);
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
    sub_1B8880C(this, 0LL);
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
  long double v9; // q0
  MiniMessagePack_MiniMessagePacker_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  int64_t Value; // x0
  __int64 v14; // x1
  const MethodInfo_361AA64 *v15; // x2
  const MethodInfo *v16; // x4
  int64_t v17; // x21
  int32_t v19; // w23
  __int64 v20; // x3
  DataEntityBase_array *List; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_Nullable_long__o v24; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v25; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v26; // 0:x0.16
  System_Nullable_long__o v27; // 0:x0.16

  v25 = start;
  v24 = lenght;
  hasValue = lenght.fields.hasValue;
  v6 = start.fields.hasValue;
  if ( (byte_4A5AD5C & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_long__get_Value__);
    byte_4A5AD5C = 1;
  }
  if ( !sub_1B886EC(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr,
                                     v9);
  v10 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v10, 0LL);
  this->fields.seriazlier = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, (int32_t)v10, v11, v12);
  if ( objOrBytes )
  {
    Value = sub_1B886EC(objOrBytes, byte___TypeInfo);
    v17 = Value;
    if ( !Value )
    {
      v9 = sub_1B88ACC(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr,
                                       v9);
    }
  }
  else
  {
    v17 = 0LL;
  }
  if ( v6 )
  {
    v26.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v26.fields.hasValue = &v25;
    Value = System_Nullable_long___get_Value(v26, v15);
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
    LODWORD(v20) = System_Nullable_long___get_Value(v27, v15);
  }
  else
  {
    if ( !v17 )
      sub_1B8880C(Value, v14);
    v20 = *(_QWORD *)(v17 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v17, v19, v20, v16);
  this->fields.seriazlier = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, 0, v22, v23);
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
  __int64 v12; // x0
  __int64 v13; // x22
  MiniMessagePack_MiniMessagePacker_o *v14; // x26
  ServantStatusBattleListViewItem_o *p_seriazlier; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_361AA64 *v22; // x2
  const MethodInfo *v23; // x4
  int32_t Value; // w24
  __int64 v26; // x3
  int64_t List; // x0
  __int64 v28; // x1
  const MethodInfo_361AA64 *v29; // x2
  int32_t v30; // w3
  DataEntityBase_array *v31; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v33; // w24
  __int64 v34; // x3
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
  if ( (byte_4A5AD5D & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_long__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_long__get_Value__);
    byte_4A5AD5D = 1;
  }
  v12 = sub_1B886EC(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v13 = v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  this->fields.seriazlier = v14;
  p_seriazlier = (ServantStatusBattleListViewItem_o *)&this->fields.seriazlier;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, (int32_t)v14, v16, v17);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1B8880C(0LL, v18);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v19, v20);
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
    LODWORD(v26) = System_Nullable_long___get_Value(v39, v22);
  }
  else
  {
    v26 = *(_QWORD *)(v13 + 24);
  }
  List = (int64_t)DataMasterBase__directGetList(this, (System_Byte_array *)v13, Value, v26, v23);
  v31 = (DataEntityBase_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v37.fields.hasValue )
    {
      v40.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v40.fields.hasValue = &v37;
      List = System_Nullable_long___get_Value(v40, v29);
      v33 = List;
    }
    else
    {
      v33 = 0;
    }
    if ( v36.fields.hasValue )
    {
      v41.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v41.fields.hasValue = &v36;
      List = System_Nullable_long___get_Value(v41, v29);
      LODWORD(v34) = List;
      if ( klass )
      {
LABEL_18:
        v35 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v13, v33, v34, 0LL);
        v31 = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                        this,
                                        v35,
                                        this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v34 = *(_QWORD *)(v13 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_1B8880C(List, v28);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_1B88554(p_seriazlier, 0, (int32_t)v29, v30);
  return v31;
}


System_String_o *__fastcall DataMasterBase__createKey(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  DataMasterBase_o *v4; // x19
  signed int max_length; // w8
  __int64 v6; // x22
  ServantStatusBattleListViewItem_o *p_sb; // x19
  DataMasterBase_o *sb; // t1
  System_Text_StringBuilder_o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  il2cpp_array_size_t v13; // w8
  unsigned __int64 v14; // x21

  v4 = this;
  if ( (byte_4A5AD67 & 1) == 0 )
  {
    sub_1B885B0(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AD67 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v6 = (unsigned int)(max_length - 1);
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_o *)v4->fields.sb;
  p_sb = (ServantStatusBattleListViewItem_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v10 = (System_Text_StringBuilder_o *)sub_1B887FC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_60862280(v10, 128, 0LL);
    p_sb->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B88554(p_sb, (int32_t)v10, v11, v12);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_o *)p_sb->klass;
  v13 = args->max_length;
  v14 = 0LL;
  do
  {
    if ( v14 >= v13 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_60871512((System_Text_StringBuilder_o *)this, args->m_Items[v14], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_60871256((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v13 = args->max_length;
    ++v14;
  }
  while ( v6 != v14 );
  if ( (unsigned int)v6 >= v13 )
LABEL_20:
    sub_1B88814(this, args);
  if ( !this
    || (System_Text_StringBuilder__Append_60871512((System_Text_StringBuilder_o *)this, args->m_Items[(int)v6], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_1B8880C(this, args);
  }
  return (System_String_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._3_ToString.method)(
                              this,
                              this->klass->vtable._4_unknown.methodPtr);
}


DataEntityBase_array *__fastcall DataMasterBase__directGetList(
        DataMasterBase_o *this,
        System_Byte_array *bytes,
        int32_t start,
        int32_t length,
        const MethodInfo *method)
{
  System_IO_MemoryStream_o *v9; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x22
  DataIO_Runtime_Deserializer_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  DataEntityBase_array *v14; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v20; // x0
  System_FormatException_o *v21; // x20
  System_String_o *v22; // x0
  __int64 v23; // x0

  if ( (byte_4A5AD5B & 1) == 0 )
  {
    sub_1B885B0(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_IO_MemoryStream_TypeInfo);
    byte_4A5AD5B = 1;
  }
  v9 = (System_IO_MemoryStream_o *)sub_1B887FC(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_61851300(v9, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v11 = (DataIO_Runtime_Deserializer_o *)sub_1B887FC(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v11, seriazlier, 0LL);
  if ( !v11 )
    sub_1B8880C(v12, v13);
  v14 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v11,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v9,
          0LL);
  if ( !v14 )
  {
    v20 = sub_1B885C4(&System_FormatException_TypeInfo);
    v21 = (System_FormatException_o *)sub_1B887FC(v20);
    v22 = (System_String_o *)sub_1B885C4(&StringLiteral_19758/*"getList family cannot return null."*/);
    System_FormatException___ctor_62327956(v21, v22, 0LL);
    v23 = sub_1B885C4(&Method_DataMasterBase_directGetList__);
    sub_1B886D8(v21, v23);
  }
  if ( v9 )
  {
    klass = v9->klass;
    v16 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v18 = sub_1BDA590(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v18)(v9, *(_QWORD *)(v18 + 8));
  }
  return v14;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_2E80080 *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  __int64 v7; // x1
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v9; // x21
  __int64 v10; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  v16 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1B8880C(0LL, v7);
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
    p_method = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v9,
          key,
          &v16,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v13 = v16;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1BDA48C(_0_T);
    if ( v13 )
    {
      result = (Il2CppObject *)sub_1B886EC(v13, _0_T);
      if ( result )
        return result;
      sub_1B88ACC(v13);
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
  if ( (byte_4A5AD66 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_4A5AD66 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Object_array *__fastcall DataMasterBase__getEntitys_object_(
        DataMasterBase_o *this,
        const MethodInfo_2E8019C *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v7; // x8
  System_Object_array *v8; // x21
  unsigned __int64 v9; // x22
  ServantStatusBattleListViewItem_o *p_monitor; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_ObjectModel_Collection_T__o *v13; // x24
  Il2CppClass *_1_T; // x25
  ServantStatusBattleListViewItem_c *v15; // x1
  UnityEngine_UIElements_DefaultEventSystem_o *v16; // x0
  System_Func_TArg__EventBase__o *v17; // x1
  const MethodInfo_2E80310 *v18; // x4
  System_Object_array *result; // x0
  System_ValueTuple_Int32Enum__Int32Enum__object__o v20; // 0:x2.16

  if ( !method->rgctx_data )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_0_T__);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1B88658(_0_T, Count);
  v7 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v7 )
LABEL_20:
    sub_1B8880C(list, method);
  v8 = (System_Object_array *)list;
  v9 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&list[1].monitor;
  while ( (__int64)v9 < System_Collections_ObjectModel_Collection_object___get_Count(
                          v7,
                          (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v9,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v8 )
      goto LABEL_20;
    v13 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BDA48C(method->rgctx_data->_1_T);
      _1_T = (Il2CppClass *)list;
    }
    if ( v13 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1B886EC(v13, _1_T);
      v15 = (ServantStatusBattleListViewItem_c *)list;
      if ( !list )
      {
        sub_1B88ACC(v13);
        UnityEngine_UIElements_DefaultEventSystem__SendFocusBasedEvent_ValueTuple_Int32Enum__Int32Enum__object__(
          v16,
          v17,
          v20,
          v18);
        return result;
      }
    }
    else
    {
      v15 = 0LL;
    }
    if ( v9 >= v8->max_length )
      sub_1B88814(list, v15);
    p_monitor->klass = v15;
    sub_1B88554(p_monitor, (int32_t)v15, v11, v12);
    v7 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
    p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
    if ( !v7 )
      goto LABEL_20;
  }
  return v8;
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

  if ( (byte_4A5AD68 & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_4A5AD68 = 1;
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
    sub_1B8880C(Key, v6);
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
    v12 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v12)(
           lookup,
           v8,
           *(_QWORD *)(v12 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_38931676(
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
  if ( (byte_4A5AD69 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_1B885B0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_4A5AD69 = 1;
  }
  lookup = v4->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(v4, (const MethodInfo *)key);
    lookup = v4->fields._lookup;
  }
  if ( !lookup )
    sub_1B8880C(this, key);
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
    v9 = sub_1BDA590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
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

  this->fields._MasterName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._MasterName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DataMasterBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AD6B & 1) == 0 )
  {
    sub_1B885B0(&DataMasterBase___c_TypeInfo);
    byte_4A5AD6B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(DataMasterBase___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  DataMasterBase___c_TypeInfo->static_fields->__9 = (struct DataMasterBase___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)DataMasterBase___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
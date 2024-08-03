// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_o *Name; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v18; // x21
  __int64 v19; // x0

  if ( (byte_49FC017 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_OnListChanged__, *(_QWORD *)&kind);
    sub_1B640C8(&DataNameKind_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, v7);
    sub_1B640C8(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v8);
    byte_49FC017 = 1;
  }
  v9 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1B64314(
                                                                     System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo,
                                                                     *(_QWORD *)&kind,
                                                                     method);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v9,
    (const MethodInfo_3608264 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.list, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, 0LL);
  this->fields._MasterName_k__BackingField = Name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._MasterName_k__BackingField, (int32_t)Name, v13, v14);
  list = this->fields.list;
  v18 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1B64314(
                                                                                  System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo,
                                                                                  v16,
                                                                                  v17);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v18,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_1B64324(v19);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v18,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_49FC021 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__, entity);
    byte_49FC021 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    (Il2CppObject *)entity,
    (const MethodInfo_3070D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_49FC01B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__, method);
    byte_49FC01B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_3070EE4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
}


void __fastcall DataMasterBase__CreateLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *v11; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_ObjectModel_Collection_T__o *v15; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_49FC01E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_49FC01E = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo,
                                                                     method,
                                                                     v2);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v11,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v11;
  p_lookup = &this->fields._lookup;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_lookup, (int32_t)v11, v13, v14);
  v15 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v15 )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v15,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v26 = (Il2CppObject *)v25;
    if ( !v25 )
      sub_1B64324(0LL);
    v27 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 376LL))(
                            v25,
                            *(_QWORD *)(*(_QWORD *)v25 + 384LL));
    if ( v27 )
    {
      if ( !*p_lookup )
        sub_1B64324(0LL);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v27,
              (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_1B64324(0LL);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v27,
          v26,
          (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_28;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_28:
    v31 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
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

  if ( (byte_49FC020 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_49FC020 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_1B64324(Instance);
  }
  monitor = (int)Instance[1].monitor;
  v8 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1B6432C(Instance, v6);
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


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_2E396B4 *method)
{
  const MethodInfo_2E396B4_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BB5FA4(_1_DataMasterBase_Registration_TMaster);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_2E396EC *method)
{
  const MethodInfo_2E396EC_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BB5FA4(_1_DataMasterBase_Registration_TMaster);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_2E39724 *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B64324(list);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BB5FA4(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_1B64204(Item, _0_T);
    if ( result )
      return result;
    sub_1B645E4(Item);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_NotImplementedException_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x21
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  System_Collections_IEnumerator_c **v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v36; // x0
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x21
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x21
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  System_Collections_IEnumerator_c **v55; // x10
  __int64 v56; // x0
  __int64 v57; // x0
  Il2CppObject *v58; // x22
  __int64 v59; // x8
  __int64 v60; // x10
  System_Collections_Generic_Dictionary_object__object__o *v61; // x23
  Il2CppObject *v62; // x0
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x21
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0

  v5 = this;
  if ( (byte_49FC027 & 1) == 0 )
  {
    sub_1B640C8(&DataEntityBase_TypeInfo, sender);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerable_TypeInfo, v9);
    this = (DataMasterBase_o *)sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_49FC027 = 1;
  }
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_1B64324(this);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v17 = sub_1B640DC(&System_NotImplementedException_TypeInfo);
          v20 = (System_NotImplementedException_o *)sub_1B64314(v17, v18, v19);
          System_NotImplementedException___ctor(v20, 0LL);
          v21 = sub_1B640DC(&Method_DataMasterBase_OnListChanged__);
          sub_1B641F0(v20, v21);
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
          p_method = sub_1BB60A8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v22 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v22 )
          sub_1B64324(0LL);
        while ( 1 )
        {
          v23 = *(_QWORD *)v22;
          v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
          {
            v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v24;
              v25 += 4;
              if ( !v24 )
                goto LABEL_21;
            }
            v26 = v23 + 16LL * *v25 + 312;
          }
          else
          {
LABEL_21:
            v26 = sub_1BB60A8(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
            break;
          v27 = *(_QWORD *)v22;
          v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
          {
            v29 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *(v29 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v28;
              v29 += 2;
              if ( !v28 )
                goto LABEL_28;
            }
            v30 = v27 + 16LL * (*(_DWORD *)v29 + 1) + 312;
          }
          else
          {
LABEL_28:
            v30 = sub_1BB60A8(v22, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
          v32 = v31;
          if ( v31 )
          {
            v33 = *(_QWORD *)v31;
            methodPtr_low = LOBYTE(DataEntityBase_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) >= (unsigned int)methodPtr_low
              && *(DataEntityBase_c **)(*(_QWORD *)(v33 + 200) + 8 * methodPtr_low - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v33 + 376))(v31, *(_QWORD *)(v33 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields._lookup;
              v36 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 376LL))(
                                      v32,
                                      *(_QWORD *)(*(_QWORD *)v32 + 384LL));
              if ( !lookup )
                sub_1B64324(v36);
              System_Collections_Generic_Dictionary_object__object___Remove(
                lookup,
                v36,
                (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v37 = sub_1B64204(v22, System_IDisposable_TypeInfo);
        if ( v37 )
        {
          v38 = *(_QWORD *)v37;
          v39 = v37;
          v40 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
          {
            v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
            {
              --v40;
              v41 += 4;
              if ( !v40 )
                goto LABEL_41;
            }
            v42 = v38 + 16LL * *v41 + 312;
          }
          else
          {
LABEL_41:
            v42 = sub_1BB60A8(v37, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v44 = newItems->klass;
        v45 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
        {
          v46 = &v44->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v46 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_49;
          }
          v47 = (__int64)&v44->vtable[*v46].method;
        }
        else
        {
LABEL_49:
          v47 = sub_1BB60A8(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v47)(
                newItems,
                *(_QWORD *)(v47 + 8));
        if ( !v48 )
          sub_1B64324(0LL);
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
                goto LABEL_56;
            }
            v52 = v49 + 16LL * *v51 + 312;
          }
          else
          {
LABEL_56:
            v52 = sub_1BB60A8(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
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
                goto LABEL_63;
            }
            v56 = v53 + 16LL * (*(_DWORD *)v55 + 1) + 312;
          }
          else
          {
LABEL_63:
            v56 = sub_1BB60A8(v48, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
          v58 = (Il2CppObject *)v57;
          if ( v57 )
          {
            v59 = *(_QWORD *)v57;
            v60 = LOBYTE(DataEntityBase_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v57 + 304LL) >= (unsigned int)v60
              && *(DataEntityBase_c **)(*(_QWORD *)(v59 + 200) + 8 * v60 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v59 + 376))(v57, *(_QWORD *)(v59 + 384)) )
            {
              v61 = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields._lookup;
              v62 = (Il2CppObject *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))v58->klass->vtable[4].method)(
                                      v58,
                                      v58->klass->vtable[5].methodPtr);
              if ( !v61 )
                sub_1B64324(v62);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v61,
                v62,
                v58,
                (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v63 = sub_1B64204(v48, System_IDisposable_TypeInfo);
        if ( v63 )
        {
          v64 = *(_QWORD *)v63;
          v65 = v63;
          v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
          {
            v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
            {
              --v66;
              v67 += 4;
              if ( !v66 )
                goto LABEL_76;
            }
            v68 = v64 + 16LL * *v67 + 312;
          }
          else
          {
LABEL_76:
            v68 = sub_1BB60A8(v63, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
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
        const MethodInfo_2E39804 *method)
{
  int32_t v3; // w3
  const MethodInfo_2E39804_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v9; // x0
  Il2CppClass *v10; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BB6000();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BB5FA4(_1_DataMasterBase_Registration_TMaster);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v9 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1BB5FA4(v9);
  *((_QWORD *)v9->static_fields + 1) = name;
  v10 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1BB5FA4(v10);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v10->static_fields + 8), (int32_t)name, (int32_t)method, v3);
}


bool __fastcall DataMasterBase__RemoveEntity(
        DataMasterBase_o *this,
        DataEntityBase_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_Collections_ObjectModel_Collection_T__o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Predicate_object__o *v16; // x22
  int32_t Index_object; // w20

  if ( (byte_49FC022 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__, entity);
    sub_1B640C8(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___, v5);
    sub_1B640C8(&System_Predicate_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__, v7);
    sub_1B640C8(&DataMasterBase___c__DisplayClass40_0_TypeInfo, v8);
    byte_49FC022 = 1;
  }
  v9 = sub_1B64314(DataMasterBase___c__DisplayClass40_0_TypeInfo, entity, method);
  DataMasterBase___c__DisplayClass40_0___ctor((DataMasterBase___c__DisplayClass40_0_o *)v9, 0LL);
  if ( !entity )
    goto LABEL_9;
  v10 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                                            entity,
                                                            entity->klass[1]._1.name);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v10, v11, v12);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v16 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DataEntityBase__TypeInfo, v14, v15);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    0LL);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v16,
                   (const MethodInfo_2EBD188 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v10 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v10 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v10,
        Index_object,
        (const MethodInfo_30714D0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return Index_object >= 0;
    }
LABEL_9:
    sub_1B64324(v10);
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
  Il2CppObject *Instance; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v14; // x6
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Nullable_long__o v17; // 0:x2.16
  System_Nullable_long__o v18; // 0:x4.16

  value = lenght.fields.value;
  v6 = *(_QWORD *)&lenght.fields.hasValue;
  v7 = start.fields.value;
  v8 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_49FC01C & 1) == 0 )
  {
    sub_1B640C8(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FC01C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
    (const MethodInfo_2EBBFFC *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_1B64324(Instance);
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
  if ( (byte_49FC01D & 1) == 0 )
  {
    sub_1B640C8(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    byte_49FC01D = 1;
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
    (const MethodInfo_2EBBFFC *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_2E3988C *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v10; // x22
  __int64 v11; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  char v16; // w21
  __int64 v17; // x22
  Il2CppClass *_1_T; // x23
  Il2CppObject *v19; // x0
  Il2CppClass *v20; // x20
  __int64 v21; // x0
  int32_t v22; // w1
  __int64 v24; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, result);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  v24 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1B64324(0LL);
  klass = lookup->klass;
  v10 = lookup;
  v11 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v11;
      p_offset += 2;
      if ( !v11 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v10,
          key,
          &v24,
          *(_QWORD *)(p_method + 8));
  if ( (v16 & 1) == 0 )
    goto LABEL_17;
  v17 = v24;
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
  if ( !v17 )
  {
    v19 = 0LL;
LABEL_19:
    *result = v19;
    v20 = method->rgctx_data->_1_T;
    if ( (BYTE5(v20->vtable[0].methodPtr) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1BB5FA4(v20);
    if ( v17 )
    {
      v21 = sub_1B64204(v17, v20);
      v22 = v21;
      if ( v21 )
      {
LABEL_25:
        sub_1B6406C((ServantStatusBattleListViewItem_o *)result, v22, v14, v15);
        return v16 & 1;
      }
      sub_1B645E4(v17);
    }
    v22 = 0;
    goto LABEL_25;
  }
  v19 = (Il2CppObject *)sub_1B64204(v17, _1_T);
  if ( v19 )
    goto LABEL_19;
  sub_1B645E4(v17);
LABEL_17:
  *result = 0LL;
  return v16 & 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_2E39A14 *method)
{
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Item; // x22
  Il2CppClass *_1_T; // x23
  Il2CppObject *v13; // x0
  Il2CppClass *v14; // x20
  __int64 v15; // x0
  int32_t v16; // w1

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, result);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_1_T);
      if ( Item )
      {
        v13 = (Il2CppObject *)sub_1B64204(Item, _1_T);
        if ( !v13 )
        {
          sub_1B645E4(Item);
          goto LABEL_13;
        }
      }
      else
      {
        v13 = 0LL;
      }
      *result = v13;
      v14 = method->rgctx_data->_1_T;
      if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
        v14 = (Il2CppClass *)sub_1BB5FA4(v14);
      if ( Item )
      {
        v15 = sub_1B64204(Item, v14);
        v16 = v15;
        if ( v15 )
        {
LABEL_21:
          sub_1B6406C((ServantStatusBattleListViewItem_o *)result, v16, v9, v10);
          return Count > 0;
        }
        sub_1B645E4(Item);
      }
      v16 = 0;
      goto LABEL_21;
    }
LABEL_23:
    sub_1B64324(list);
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

  if ( (byte_49FC01F & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_49FC01F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_1B64324(Instance);
  }
  v8 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v9 = 0LL;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1B6432C(Instance, v6);
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
    sub_1B64324(this);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  long double v14; // q0
  MiniMessagePack_MiniMessagePacker_o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  int64_t Value; // x0
  const MethodInfo_35CE52C *v19; // x2
  const MethodInfo *v20; // x4
  int64_t v21; // x21
  int32_t v23; // w23
  __int64 v24; // x3
  DataEntityBase_array *List; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_Nullable_long__o v28; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v29; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v30; // 0:x0.16
  System_Nullable_long__o v31; // 0:x0.16

  v29 = start;
  v28 = lenght;
  hasValue = lenght.fields.hasValue;
  v6 = start.fields.hasValue;
  if ( (byte_49FC019 & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, objOrBytes);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    sub_1B640C8(&Method_System_Nullable_long__get_HasValue__, v10);
    sub_1B640C8(&Method_System_Nullable_long__get_Value__, v11);
    byte_49FC019 = 1;
  }
  if ( !sub_1B64204(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr,
                                     v14);
  v15 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v12, v13);
  MiniMessagePack_MiniMessagePacker___ctor(v15, 0LL);
  this->fields.seriazlier = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, (int32_t)v15, v16, v17);
  if ( objOrBytes )
  {
    Value = sub_1B64204(objOrBytes, byte___TypeInfo);
    v21 = Value;
    if ( !Value )
    {
      v14 = sub_1B645E4(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr,
                                       v14);
    }
  }
  else
  {
    v21 = 0LL;
  }
  if ( v6 )
  {
    v30.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v30.fields.hasValue = &v29;
    Value = System_Nullable_long___get_Value(v30, v19);
    hasValue = v28.fields.hasValue;
    v23 = Value;
  }
  else
  {
    v23 = 0;
  }
  if ( hasValue )
  {
    v31.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v31.fields.hasValue = &v28;
    LODWORD(v24) = System_Nullable_long___get_Value(v31, v19);
  }
  else
  {
    if ( !v21 )
      sub_1B64324(Value);
    v24 = *(_QWORD *)(v21 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v21, v23, v24, v20);
  this->fields.seriazlier = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, 0, v26, v27);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x22
  MiniMessagePack_MiniMessagePacker_o *v19; // x26
  ServantStatusBattleListViewItem_o *p_seriazlier; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_35CE52C *v26; // x2
  const MethodInfo *v27; // x4
  int32_t Value; // w24
  __int64 v30; // x3
  int64_t List; // x0
  const MethodInfo_35CE52C *v32; // x2
  int32_t v33; // w3
  DataEntityBase_array *v34; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v36; // w24
  __int64 v37; // x3
  Il2CppObject *v38; // x1
  System_Nullable_long__o v39; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v40; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v41; // 0:x0.16
  System_Nullable_long__o v42; // 0:x0.16
  System_Nullable_long__o v43; // 0:x0.16
  System_Nullable_long__o v44; // 0:x0.16

  v40 = start;
  v39 = lenght;
  hasValue = lenght.fields.hasValue;
  v9 = start.fields.hasValue;
  if ( (byte_49FC01A & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, objOrBytes);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_1B640C8(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_1B640C8(&Method_System_Nullable_long__get_Value__, v14);
    byte_49FC01A = 1;
  }
  v15 = sub_1B64204(objOrBytes, byte___TypeInfo);
  if ( !v15 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v18 = v15;
  v19 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v16, v17);
  MiniMessagePack_MiniMessagePacker___ctor(v19, 0LL);
  this->fields.seriazlier = v19;
  p_seriazlier = (ServantStatusBattleListViewItem_o *)&this->fields.seriazlier;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, (int32_t)v19, v21, v22);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1B64324(0LL);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v23, v24);
  if ( v9 )
  {
    v41.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v41.fields.hasValue = &v40;
    hasValue = v39.fields.hasValue;
    Value = System_Nullable_long___get_Value(v41, v26);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v42.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v42.fields.hasValue = &v39;
    LODWORD(v30) = System_Nullable_long___get_Value(v42, v26);
  }
  else
  {
    v30 = *(_QWORD *)(v18 + 24);
  }
  List = (int64_t)DataMasterBase__directGetList(this, (System_Byte_array *)v18, Value, v30, v27);
  v34 = (DataEntityBase_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v40.fields.hasValue )
    {
      v43.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v43.fields.hasValue = &v40;
      List = System_Nullable_long___get_Value(v43, v32);
      v36 = List;
    }
    else
    {
      v36 = 0;
    }
    if ( v39.fields.hasValue )
    {
      v44.fields.value = Method_System_Nullable_long__get_Value__;
      *(_QWORD *)&v44.fields.hasValue = &v39;
      List = System_Nullable_long___get_Value(v44, v32);
      LODWORD(v37) = List;
      if ( klass )
      {
LABEL_18:
        v38 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v18, v36, v37, 0LL);
        v34 = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                        this,
                                        v38,
                                        this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v37 = *(_QWORD *)(v18 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_1B64324(List);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_1B6406C(p_seriazlier, 0, (int32_t)v32, v33);
  return v34;
}


System_String_o *__fastcall DataMasterBase__createKey(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  DataMasterBase_o *v4; // x19
  __int64 v5; // x1
  signed int max_length; // w8
  __int64 v7; // x22
  ServantStatusBattleListViewItem_o *p_sb; // x19
  DataMasterBase_o *sb; // t1
  System_Text_StringBuilder_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  il2cpp_array_size_t v15; // w8
  unsigned __int64 v16; // x21

  v4 = this;
  if ( (byte_49FC024 & 1) == 0 )
  {
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, args);
    this = (DataMasterBase_o *)sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FC024 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v7 = (unsigned int)(max_length - 1);
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_o *)v4->fields.sb;
  p_sb = (ServantStatusBattleListViewItem_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v11 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, args, method);
    System_Text_StringBuilder___ctor_60529900(v11, 128, 0LL);
    p_sb->klass = (ServantStatusBattleListViewItem_c *)v11;
    sub_1B6406C(p_sb, (int32_t)v11, v12, v13);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_o *)p_sb->klass;
  v15 = args->max_length;
  v16 = 0LL;
  do
  {
    if ( v16 >= v15 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_60539132((System_Text_StringBuilder_o *)this, args->m_Items[v16], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_60538876((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v15 = args->max_length;
    ++v16;
  }
  while ( v7 != v16 );
  if ( (unsigned int)v7 >= v15 )
LABEL_20:
    sub_1B6432C(this, v14);
  if ( !this
    || (System_Text_StringBuilder__Append_60539132((System_Text_StringBuilder_o *)this, args->m_Items[(int)v7], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_1B64324(this);
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
  __int64 v10; // x1
  System_IO_MemoryStream_o *v11; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  DataIO_Runtime_Deserializer_o *v15; // x21
  __int64 v16; // x0
  DataEntityBase_array *v17; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_FormatException_o *v26; // x20
  System_String_o *v27; // x0
  __int64 v28; // x0

  if ( (byte_49FC018 & 1) == 0 )
  {
    sub_1B640C8(&DataIO_Runtime_Deserializer_TypeInfo, bytes);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_IO_MemoryStream_TypeInfo, v10);
    byte_49FC018 = 1;
  }
  v11 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, bytes, *(_QWORD *)&start);
  System_IO_MemoryStream___ctor_61519656(v11, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v15 = (DataIO_Runtime_Deserializer_o *)sub_1B64314(DataIO_Runtime_Deserializer_TypeInfo, v13, v14);
  DataIO_Runtime_Deserializer___ctor(v15, seriazlier, 0LL);
  if ( !v15 )
    sub_1B64324(v16);
  v17 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v15,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v11,
          0LL);
  if ( !v17 )
  {
    v23 = sub_1B640DC(&System_FormatException_TypeInfo);
    v26 = (System_FormatException_o *)sub_1B64314(v23, v24, v25);
    v27 = (System_String_o *)sub_1B640DC(&StringLiteral_19679/*"getList family cannot return null."*/);
    System_FormatException___ctor_61996312(v26, v27, 0LL);
    v28 = sub_1B640DC(&Method_DataMasterBase_directGetList__);
    sub_1B641F0(v26, v28);
  }
  if ( v11 )
  {
    klass = v11->klass;
    v19 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
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
      v21 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v11, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_2E39B64 *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v8; // x21
  __int64 v9; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x10
  __int64 p_method; // x0
  __int64 v12; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, key);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  v15 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1B64324(0LL);
  klass = lookup->klass;
  v8 = lookup;
  v9 = *(unsigned __int16 *)(&lookup->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lookup->klass->_2.bitflags2 + 3) )
  {
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      --v9;
      p_offset += 2;
      if ( !v9 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v8,
          key,
          &v15,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v12 = v15;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1BB5FA4(_0_T);
    if ( v12 )
    {
      result = (Il2CppObject *)sub_1B64204(v12, _0_T);
      if ( result )
        return result;
      sub_1B645E4(v12);
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
  if ( (byte_49FC023 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, method);
    byte_49FC023 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Object_array *__fastcall DataMasterBase__getEntitys_object_(
        DataMasterBase_o *this,
        const MethodInfo_2E39C80 *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v8; // x8
  System_Object_array *v9; // x21
  unsigned __int64 v10; // x22
  ServantStatusBattleListViewItem_o *p_monitor; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_ObjectModel_Collection_T__o *v14; // x24
  Il2CppClass *_1_T; // x25
  ServantStatusBattleListViewItem_c *v16; // x1
  UnityEngine_UIElements_DefaultEventSystem_o *v17; // x0
  System_Func_TArg__EventBase__o *v18; // x1
  const MethodInfo_2E39DF4 *v19; // x4
  System_Object_array *result; // x0
  System_ValueTuple_Int32Enum__Int32Enum__object__o v21; // 0:x2.16

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T__);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1B64170(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v8 )
LABEL_20:
    sub_1B64324(list);
  v9 = (System_Object_array *)list;
  v10 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&list[1].monitor;
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v8,
                           (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v9 )
      goto LABEL_20;
    v14 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BB5FA4(method->rgctx_data->_1_T);
      _1_T = (Il2CppClass *)list;
    }
    if ( v14 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1B64204(v14, _1_T);
      v16 = (ServantStatusBattleListViewItem_c *)list;
      if ( !list )
      {
        sub_1B645E4(v14);
        UnityEngine_UIElements_DefaultEventSystem__SendFocusBasedEvent_ValueTuple_Int32Enum__Int32Enum__object__(
          v17,
          v18,
          v21,
          v19);
        return result;
      }
    }
    else
    {
      v16 = 0LL;
    }
    if ( v10 >= v9->max_length )
      sub_1B6432C(list, v16);
    p_monitor->klass = v16;
    sub_1B6406C(p_monitor, (int32_t)v16, v12, v13);
    v8 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
    if ( !v8 )
      goto LABEL_20;
  }
  return v9;
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

  if ( (byte_49FC025 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, args);
    byte_49FC025 = 1;
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
    sub_1B64324(Key);
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
    v12 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v12)(
           lookup,
           v8,
           *(_QWORD *)(v12 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_38614048(
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
  if ( (byte_49FC026 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_1B640C8(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 key);
    byte_49FC026 = 1;
  }
  lookup = v4->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(v4, (const MethodInfo *)key);
    lookup = v4->fields._lookup;
  }
  if ( !lookup )
    sub_1B64324(this);
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
    v9 = sub_1BB60A8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
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
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._MasterName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DataMasterBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC028 & 1) == 0 )
  {
    sub_1B640C8(&DataMasterBase___c_TypeInfo, v1);
    byte_49FC028 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DataMasterBase___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DataMasterBase___c_TypeInfo->static_fields->__9 = (struct DataMasterBase___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DataMasterBase___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
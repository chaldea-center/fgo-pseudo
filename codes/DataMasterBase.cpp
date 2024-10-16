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
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1

  if ( (byte_4AB5948 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataMasterBase_OnListChanged__, *(_QWORD *)&kind);
    sub_1BAB41C(&DataNameKind_TypeInfo, v5);
    sub_1BAB41C(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, v7);
    sub_1BAB41C(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v8);
    byte_4AB5948 = 1;
  }
  v9 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_1BAB668(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v9,
    (const MethodInfo_36A5274 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v9;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.list, (int32_t)v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, 0LL);
  this->fields._MasterName_k__BackingField = Name;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields._MasterName_k__BackingField, (int32_t)Name, v13, v14);
  list = this->fields.list;
  v16 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_1BAB668(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v16,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_1BAB678(v17, v18);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v16,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4AB5952 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__, entity);
    byte_4AB5952 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, entity);
  System_Collections_ObjectModel_Collection_object___Add(
    list,
    (Il2CppObject *)entity,
    (const MethodInfo_31005EC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4AB594C & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__, method);
    byte_4AB594C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BAB678(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_310073C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
}


void __fastcall DataMasterBase__CreateLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_object__object__o *v10; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x21
  __int64 v29; // x1
  Il2CppObject *v30; // x22
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4AB594F & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__, v5);
    sub_1BAB41C(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo, v6);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v7);
    sub_1BAB41C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4AB594F = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BAB668(System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v10,
    (const MethodInfo_3212B9C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v10;
  p_lookup = &this->fields._lookup;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_lookup, (int32_t)v10, v12, v13);
  v15 = (System_Collections_ObjectModel_Collection_T__o *)*(p_lookup - 1);
  if ( !v15 )
    sub_1BAB678(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 v15,
                 (const MethodInfo_3100938 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BAB678(0LL, v16);
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
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BFD3FC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BFD3FC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    v28 = (Il2CppObject *)v26;
    if ( !v26 )
      sub_1BAB678(0LL, v27);
    v30 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 376LL))(
                            v26,
                            *(_QWORD *)(*(_QWORD *)v26 + 384LL));
    if ( v30 )
    {
      if ( !*p_lookup )
        sub_1BAB678(0LL, v29);
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
              v30,
              (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_1BAB678(0LL, v31);
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)*p_lookup,
          v30,
          v28,
          (const MethodInfo_321354C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
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
        goto LABEL_28;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_28:
    v35 = sub_1BFD3FC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
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

  if ( (byte_4AB5951 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4AB5951 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_1BAB678(Instance, v6);
  }
  monitor = (int)Instance[1].monitor;
  v8 = Instance;
  if ( monitor >= 1 )
  {
    for ( i = 0; i < monitor; ++i )
    {
      if ( i >= (unsigned int)monitor )
        sub_1BAB680(Instance, v6);
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


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_2EC5890 *method)
{
  long double v1; // q0
  const MethodInfo_2EC5890_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BFD354();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BFD2F8(v1);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_2EC58C8 *method)
{
  long double v1; // q0
  const MethodInfo_2EC58C8_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BFD354();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BFD2F8(v1);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_2EC5900 *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  Il2CppObject *Item; // x20
  long double v7; // q0
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( !method->rgctx_data )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    if ( !method->rgctx_data )
      sub_1BFD354();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BAB678(list, method);
  Item = System_Collections_ObjectModel_Collection_object___get_Item(
           list,
           0,
           (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BFD2F8(v7);
  if ( Item )
  {
    result = (Il2CppObject *)sub_1BAB558(Item, _0_T);
    if ( result )
      return result;
    sub_1BAB938(Item);
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
  System_NotImplementedException_o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  System_Collections_IEnumerator_c **v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x22
  __int64 v32; // x8
  __int64 methodPtr_low; // x10
  System_Collections_Generic_Dictionary_object__object__o *lookup; // x23
  Il2CppObject *v35; // x0
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x21
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x1
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
  if ( (byte_4AB5958 & 1) == 0 )
  {
    sub_1BAB41C(&DataEntityBase_TypeInfo, sender);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__, v7);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v8);
    sub_1BAB41C(&System_Collections_IEnumerable_TypeInfo, v9);
    this = (DataMasterBase_o *)sub_1BAB41C(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4AB5958 = 1;
  }
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_1BAB678(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v17 = sub_1BAB430(&System_NotImplementedException_TypeInfo);
          v18 = (System_NotImplementedException_o *)sub_1BAB668(v17);
          System_NotImplementedException___ctor(v18, 0LL);
          v19 = sub_1BAB430(&Method_DataMasterBase_OnListChanged__);
          sub_1BAB544(v18, v19);
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
          p_method = sub_1BFD3FC(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v21 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v21 )
          sub_1BAB678(0LL, v20);
        while ( 1 )
        {
          v22 = *(_QWORD *)v21;
          v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v23;
              v24 += 4;
              if ( !v23 )
                goto LABEL_21;
            }
            v25 = v22 + 16LL * *v24 + 312;
          }
          else
          {
LABEL_21:
            v25 = sub_1BFD3FC(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
            break;
          v26 = *(_QWORD *)v21;
          v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
          {
            v28 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *(v28 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v27;
              v28 += 2;
              if ( !v27 )
                goto LABEL_28;
            }
            v29 = v26 + 16LL * (*(_DWORD *)v28 + 1) + 312;
          }
          else
          {
LABEL_28:
            v29 = sub_1BFD3FC(v21, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
          v31 = v30;
          if ( v30 )
          {
            v32 = *(_QWORD *)v30;
            methodPtr_low = LOBYTE(DataEntityBase_TypeInfo->vtable._0_Equals.methodPtr);
            if ( *(unsigned __int8 *)(*(_QWORD *)v30 + 304LL) >= (unsigned int)methodPtr_low
              && *(DataEntityBase_c **)(*(_QWORD *)(v32 + 200) + 8 * methodPtr_low - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v32 + 376))(v30, *(_QWORD *)(v32 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields._lookup;
              v35 = (Il2CppObject *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 376LL))(
                                      v31,
                                      *(_QWORD *)(*(_QWORD *)v31 + 384LL));
              if ( !lookup )
                sub_1BAB678(v35, v35);
              System_Collections_Generic_Dictionary_object__object___Remove(
                lookup,
                v35,
                (const MethodInfo_3214A48 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v36 = sub_1BAB558(v21, System_IDisposable_TypeInfo);
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
                goto LABEL_41;
            }
            v41 = v37 + 16LL * *v40 + 312;
          }
          else
          {
LABEL_41:
            v41 = sub_1BFD3FC(v36, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
        }
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v43 = newItems->klass;
        v44 = *(unsigned __int16 *)(&newItems->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&newItems->klass->_2.bitflags2 + 3) )
        {
          v45 = &v43->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v45 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            --v44;
            v45 += 4;
            if ( !v44 )
              goto LABEL_49;
          }
          v46 = (__int64)&v43->vtable[*v45].method;
        }
        else
        {
LABEL_49:
          v46 = sub_1BFD3FC(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v46)(
                newItems,
                *(_QWORD *)(v46 + 8));
        if ( !v48 )
          sub_1BAB678(0LL, v47);
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
            v52 = sub_1BFD3FC(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
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
            v56 = sub_1BFD3FC(v48, System_Collections_IEnumerator_TypeInfo, 1LL);
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
                sub_1BAB678(v62, v62);
              System_Collections_Generic_Dictionary_object__object___set_Item(
                v61,
                v62,
                v58,
                (const MethodInfo_3213538 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v63 = sub_1BAB558(v48, System_IDisposable_TypeInfo);
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
            v68 = sub_1BFD3FC(v63, System_IDisposable_TypeInfo, 0LL);
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
        const MethodInfo_2EC59E0 *method)
{
  int32_t v3; // w3
  long double v4; // q0
  const MethodInfo_2EC59E0_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v10; // x0
  Il2CppClass *v11; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BFD354();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1BFD2F8(v4);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v10 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
    v10 = (Il2CppClass *)sub_1BFD2F8(v4);
  *((_QWORD *)v10->static_fields + 1) = name;
  v11 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
    v11 = (Il2CppClass *)sub_1BFD2F8(v4);
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)((char *)v11->static_fields + 8), (int32_t)name, (int32_t)method, v3);
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
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_object__o *v15; // x22
  int32_t Index_object; // w20

  if ( (byte_4AB5953 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__, entity);
    sub_1BAB41C(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___, v5);
    sub_1BAB41C(&System_Predicate_DataEntityBase__TypeInfo, v6);
    sub_1BAB41C(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__, v7);
    sub_1BAB41C(&DataMasterBase___c__DisplayClass40_0_TypeInfo, v8);
    byte_4AB5953 = 1;
  }
  v9 = sub_1BAB668(DataMasterBase___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !entity )
    goto LABEL_9;
  v10 = (System_Collections_ObjectModel_Collection_T__o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                                            entity,
                                                            entity->klass[1]._1.name);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = v10;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v10, v12, v13);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v15 = (System_Predicate_object__o *)sub_1BAB668(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_object____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    0LL);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v15,
                   (const MethodInfo_2F498C0 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v10 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v10 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v10,
        Index_object,
        (const MethodInfo_3100D28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return Index_object >= 0;
    }
LABEL_9:
    sub_1BAB678(v10, v11);
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
  __int64 v13; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v15; // x6
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Nullable_long__o v18; // 0:x2.16
  System_Nullable_long__o v19; // 0:x4.16

  value = lenght.fields.value;
  v6 = *(_QWORD *)&lenght.fields.hasValue;
  v7 = start.fields.value;
  v8 = *(_QWORD *)&start.fields.hasValue;
  if ( (byte_4AB594D & 1) == 0 )
  {
    sub_1BAB41C(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4AB594D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_6;
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_QWORD *)&v18.fields.hasValue = v8;
  v18.fields.value = v7;
  *(_QWORD *)&v19.fields.hasValue = v6;
  v19.fields.value = value;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetList(this, objOrBytes, v18, v19, v15);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v16,
    (const MethodInfo_2F48734 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_1BAB678(Instance, v13);
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
  if ( (byte_4AB594E & 1) == 0 )
  {
    sub_1BAB41C(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    byte_4AB594E = 1;
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
    (const MethodInfo_2F48734 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_2EC5A68 *method)
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
  long double v18; // q0
  __int64 v19; // x22
  Il2CppClass *_1_T; // x23
  Il2CppObject *v21; // x0
  Il2CppClass *v22; // x20
  __int64 v23; // x0
  int32_t v24; // w1
  __int64 v26; // [xsp+8h] [xbp-38h] BYREF

  if ( !method->rgctx_data )
  {
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, result);
    if ( !method->rgctx_data )
      sub_1BFD354();
  }
  v26 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1BAB678(0LL, v9);
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
    p_method = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v11,
          key,
          &v26,
          *(_QWORD *)(p_method + 8));
  if ( (v17 & 1) == 0 )
    goto LABEL_17;
  v19 = v26;
  _1_T = method->rgctx_data->_1_T;
  if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1BFD2F8(v18);
  if ( !v19 )
  {
    v21 = 0LL;
LABEL_19:
    *result = v21;
    v22 = method->rgctx_data->_1_T;
    if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1BFD2F8(v18);
    if ( v19 )
    {
      v23 = sub_1BAB558(v19, v22);
      v24 = v23;
      if ( v23 )
      {
LABEL_25:
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)result, v24, v15, v16);
        return v17 & 1;
      }
      sub_1BAB938(v19);
    }
    v24 = 0;
    goto LABEL_25;
  }
  v21 = (Il2CppObject *)sub_1BAB558(v19, _1_T);
  if ( v21 )
    goto LABEL_19;
  sub_1BAB938(v19);
LABEL_17:
  *result = 0LL;
  return v17 & 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_2EC5BF0 *method)
{
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w21
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *Item; // x22
  long double v12; // q0
  Il2CppClass *_1_T; // x23
  Il2CppObject *v14; // x0
  Il2CppClass *v15; // x20
  __int64 v16; // x0
  int32_t v17; // w1

  if ( !method->rgctx_data )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, result);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    if ( !method->rgctx_data )
      sub_1BFD354();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  System_Collections_ObjectModel_Collection_object___get_Count(
    list,
    (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_23;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count >= 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( list )
    {
      Item = System_Collections_ObjectModel_Collection_object___get_Item(
               list,
               0,
               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
      _1_T = method->rgctx_data->_1_T;
      if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
        _1_T = (Il2CppClass *)sub_1BFD2F8(v12);
      if ( Item )
      {
        v14 = (Il2CppObject *)sub_1BAB558(Item, _1_T);
        if ( !v14 )
        {
          sub_1BAB938(Item);
          goto LABEL_13;
        }
      }
      else
      {
        v14 = 0LL;
      }
      *result = v14;
      v15 = method->rgctx_data->_1_T;
      if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
        v15 = (Il2CppClass *)sub_1BFD2F8(v12);
      if ( Item )
      {
        v16 = sub_1BAB558(Item, v15);
        v17 = v16;
        if ( v16 )
        {
LABEL_21:
          sub_1BAB3C0((ServantStatusBattleListViewItem_o *)result, v17, v9, v10);
          return Count > 0;
        }
        sub_1BAB938(Item);
      }
      v17 = 0;
      goto LABEL_21;
    }
LABEL_23:
    sub_1BAB678(list, result);
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

  if ( (byte_4AB5950 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4AB5950 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (Il2CppObject *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     obj,
                                     this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_1BAB678(Instance, v6);
  }
  v8 = Instance;
  if ( (int)Instance[1].monitor < 1 )
    return 1;
  v9 = 0LL;
  monitor = (unsigned int)Instance[1].monitor;
  while ( 1 )
  {
    if ( v9 >= monitor )
      sub_1BAB680(Instance, v6);
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
    sub_1BAB678(this, 0LL);
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
  long double v12; // q0
  MiniMessagePack_MiniMessagePacker_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  int64_t Value; // x0
  __int64 v17; // x1
  const MethodInfo_366AD78 *v18; // x2
  const MethodInfo *v19; // x4
  int64_t v20; // x21
  int32_t v22; // w23
  __int64 v23; // x3
  DataEntityBase_array *List; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  System_Nullable_long__o v27; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v28; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v29; // 0:x0.16
  System_Nullable_long__o v30; // 0:x0.16

  v28 = start;
  v27 = lenght;
  hasValue = lenght.fields.hasValue;
  v6 = start.fields.hasValue;
  if ( (byte_4AB594A & 1) == 0 )
  {
    sub_1BAB41C(&byte___TypeInfo, objOrBytes);
    sub_1BAB41C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    sub_1BAB41C(&Method_System_Nullable_long__get_HasValue__, v10);
    sub_1BAB41C(&Method_System_Nullable_long__get_Value__, v11);
    byte_4AB594A = 1;
  }
  if ( !sub_1BAB558(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr,
                                     v12);
  v13 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BAB668(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v13, 0LL);
  this->fields.seriazlier = v13;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, (int32_t)v13, v14, v15);
  if ( objOrBytes )
  {
    Value = sub_1BAB558(objOrBytes, byte___TypeInfo);
    v20 = Value;
    if ( !Value )
    {
      v12 = sub_1BAB938(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr,
                                       v12);
    }
  }
  else
  {
    v20 = 0LL;
  }
  if ( v6 )
  {
    v29.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v29.fields.hasValue = &v28;
    Value = System_Nullable_long___get_Value(v29, v18);
    hasValue = v27.fields.hasValue;
    v22 = Value;
  }
  else
  {
    v22 = 0;
  }
  if ( hasValue )
  {
    v30.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v30.fields.hasValue = &v27;
    LODWORD(v23) = System_Nullable_long___get_Value(v30, v18);
  }
  else
  {
    if ( !v20 )
      sub_1BAB678(Value, v17);
    v23 = *(_QWORD *)(v20 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v20, v22, v23, v19);
  this->fields.seriazlier = 0LL;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, 0, v25, v26);
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
  __int64 v16; // x22
  MiniMessagePack_MiniMessagePacker_o *v17; // x26
  ServantStatusBattleListViewItem_o *p_seriazlier; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_366AD78 *v25; // x2
  const MethodInfo *v26; // x4
  int32_t Value; // w24
  __int64 v29; // x3
  int64_t List; // x0
  __int64 v31; // x1
  const MethodInfo_366AD78 *v32; // x2
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
  if ( (byte_4AB594B & 1) == 0 )
  {
    sub_1BAB41C(&byte___TypeInfo, objOrBytes);
    sub_1BAB41C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_1BAB41C(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_1BAB41C(&Method_System_Nullable_long__get_Value__, v14);
    byte_4AB594B = 1;
  }
  v15 = sub_1BAB558(objOrBytes, byte___TypeInfo);
  if ( !v15 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v16 = v15;
  v17 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BAB668(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v17, 0LL);
  this->fields.seriazlier = v17;
  p_seriazlier = (ServantStatusBattleListViewItem_o *)&this->fields.seriazlier;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.seriazlier, (int32_t)v17, v19, v20);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_1BAB678(0LL, v21);
  seriazlier->fields.threadSafeStringHash = work;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&seriazlier->fields.threadSafeStringHash, (int32_t)work, v22, v23);
  if ( v9 )
  {
    v41.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v41.fields.hasValue = &v40;
    hasValue = v39.fields.hasValue;
    Value = System_Nullable_long___get_Value(v41, v25);
  }
  else
  {
    Value = 0;
  }
  if ( hasValue )
  {
    v42.fields.value = Method_System_Nullable_long__get_Value__;
    *(_QWORD *)&v42.fields.hasValue = &v39;
    LODWORD(v29) = System_Nullable_long___get_Value(v42, v25);
  }
  else
  {
    v29 = *(_QWORD *)(v16 + 24);
  }
  List = (int64_t)DataMasterBase__directGetList(this, (System_Byte_array *)v16, Value, v29, v26);
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
        v38 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v16, v36, v37, 0LL);
        v34 = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                        this,
                                        v38,
                                        this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v37 = *(_QWORD *)(v16 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_1BAB678(List, v31);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_1BAB3C0(p_seriazlier, 0, (int32_t)v32, v33);
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
  il2cpp_array_size_t v14; // w8
  unsigned __int64 v15; // x21

  v4 = this;
  if ( (byte_4AB5955 & 1) == 0 )
  {
    sub_1BAB41C(&System_Text_StringBuilder_TypeInfo, args);
    this = (DataMasterBase_o *)sub_1BAB41C(&StringLiteral_1/*""*/, v5);
    byte_4AB5955 = 1;
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
    v11 = (System_Text_StringBuilder_o *)sub_1BAB668(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_61203376(v11, 128, 0LL);
    p_sb->klass = (ServantStatusBattleListViewItem_c *)v11;
    sub_1BAB3C0(p_sb, (int32_t)v11, v12, v13);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_o *)p_sb->klass;
  v14 = args->max_length;
  v15 = 0LL;
  do
  {
    if ( v15 >= v14 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_61212608((System_Text_StringBuilder_o *)this, args->m_Items[v15], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_61212352((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v14 = args->max_length;
    ++v15;
  }
  while ( v7 != v15 );
  if ( (unsigned int)v7 >= v14 )
LABEL_20:
    sub_1BAB680(this, args);
  if ( !this
    || (System_Text_StringBuilder__Append_61212608((System_Text_StringBuilder_o *)this, args->m_Items[(int)v7], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_1BAB678(this, args);
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_IO_MemoryStream_o *v11; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x22
  DataIO_Runtime_Deserializer_o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  DataEntityBase_array *v16; // x21
  System_IO_MemoryStream_c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v22; // x0
  System_FormatException_o *v23; // x20
  System_String_o *v24; // x0
  __int64 v25; // x0

  if ( (byte_4AB5949 & 1) == 0 )
  {
    sub_1BAB41C(&DataIO_Runtime_Deserializer_TypeInfo, bytes);
    sub_1BAB41C(&System_IDisposable_TypeInfo, v9);
    sub_1BAB41C(&System_IO_MemoryStream_TypeInfo, v10);
    byte_4AB5949 = 1;
  }
  v11 = (System_IO_MemoryStream_o *)sub_1BAB668(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_62192396(v11, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v13 = (DataIO_Runtime_Deserializer_o *)sub_1BAB668(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v13, seriazlier, 0LL);
  if ( !v13 )
    sub_1BAB678(v14, v15);
  v16 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v13,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v11,
          0LL);
  if ( !v16 )
  {
    v22 = sub_1BAB430(&System_FormatException_TypeInfo);
    v23 = (System_FormatException_o *)sub_1BAB668(v22);
    v24 = (System_String_o *)sub_1BAB430(&StringLiteral_19788/*"getList family cannot return null."*/);
    System_FormatException___ctor_62669052(v23, v24, 0LL);
    v25 = sub_1BAB430(&Method_DataMasterBase_directGetList__);
    sub_1BAB544(v23, v25);
  }
  if ( v11 )
  {
    klass = v11->klass;
    v18 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v20 = sub_1BFD3FC(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v20)(v11, *(_QWORD *)(v20 + 8));
  }
  return v16;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_2EC5D40 *method)
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
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, key);
    if ( !method->rgctx_data )
      sub_1BFD354();
  }
  v17 = 0LL;
  lookup = DataMasterBase__get_lookup(this, 0LL);
  if ( !lookup )
    sub_1BAB678(0LL, v7);
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
    p_method = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
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
      _0_T = (Il2CppClass *)sub_1BFD2F8(v13);
    if ( v14 )
    {
      result = (Il2CppObject *)sub_1BAB558(v14, _0_T);
      if ( result )
        return result;
      sub_1BAB938(v14);
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
  if ( (byte_4AB5954 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, method);
    byte_4AB5954 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_object_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_2EFD0EC *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


System_Object_array *__fastcall DataMasterBase__getEntitys_object_(
        DataMasterBase_o *this,
        const MethodInfo_2EC5E5C *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  unsigned int Count; // w21
  long double v7; // q0
  Il2CppClass *_0_T; // x8
  System_Collections_ObjectModel_Collection_T__o *v9; // x8
  System_Object_array *v10; // x21
  unsigned __int64 v11; // x22
  ServantStatusBattleListViewItem_o *p_monitor; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  long double v15; // q0
  System_Collections_ObjectModel_Collection_T__o *v16; // x24
  Il2CppClass *_1_T; // x25
  ServantStatusBattleListViewItem_c *v18; // x1
  UnityEngine_UIElements_DefaultEventSystem_o *v19; // x0
  System_Func_TArg__EventBase__o *v20; // x1
  const MethodInfo_2EC5FD0 *v21; // x4
  System_Object_array *result; // x0
  System_ValueTuple_Int32Enum__Int32Enum__object__o v23; // 0:x2.16

  if ( !method->rgctx_data )
  {
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BAB41C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    if ( !method->rgctx_data )
      sub_1BFD354();
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
    _0_T = (Il2CppClass *)sub_1BFD2F8(v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BAB4C4(_0_T, Count);
  v9 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !v9 )
LABEL_20:
    sub_1BAB678(list, method);
  v10 = (System_Object_array *)list;
  v11 = 0LL;
  p_monitor = (ServantStatusBattleListViewItem_o *)&list[1].monitor;
  while ( (__int64)v11 < System_Collections_ObjectModel_Collection_object___get_Count(
                           v9,
                           (const MethodInfo_3100360 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v11,
                                                               (const MethodInfo_31003F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v10 )
      goto LABEL_20;
    v16 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE5(_1_T->vtable[0].methodPtr) & 1) == 0 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BFD2F8(v15);
      _1_T = (Il2CppClass *)list;
    }
    if ( v16 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)sub_1BAB558(v16, _1_T);
      v18 = (ServantStatusBattleListViewItem_c *)list;
      if ( !list )
      {
        sub_1BAB938(v16);
        UnityEngine_UIElements_DefaultEventSystem__SendFocusBasedEvent_ValueTuple_Int32Enum__Int32Enum__object__(
          v19,
          v20,
          v23,
          v21);
        return result;
      }
    }
    else
    {
      v18 = 0LL;
    }
    if ( v11 >= v10->max_length )
      sub_1BAB680(list, v18);
    p_monitor->klass = v18;
    sub_1BAB3C0(p_monitor, (int32_t)v18, v13, v14);
    v9 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v11;
    p_monitor = (ServantStatusBattleListViewItem_o *)((char *)p_monitor + 8);
    if ( !v9 )
      goto LABEL_20;
  }
  return v10;
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

  if ( (byte_4AB5956 & 1) == 0 )
  {
    sub_1BAB41C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, args);
    byte_4AB5956 = 1;
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
    sub_1BAB678(Key, v6);
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
    v12 = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v12)(
           lookup,
           v8,
           *(_QWORD *)(v12 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_39319432(
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
  if ( (byte_4AB5957 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_1BAB41C(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 key);
    byte_4AB5957 = 1;
  }
  lookup = v4->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(v4, (const MethodInfo *)key);
    lookup = v4->fields._lookup;
  }
  if ( !lookup )
    sub_1BAB678(this, key);
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
    v9 = sub_1BFD3FC(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
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
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields._MasterName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DataMasterBase___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4AB5959 & 1) == 0 )
  {
    sub_1BAB41C(&DataMasterBase___c_TypeInfo, v1);
    byte_4AB5959 = 1;
  }
  v2 = (Il2CppObject *)sub_1BAB668(DataMasterBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataMasterBase___c_TypeInfo->static_fields->__9 = (struct DataMasterBase___c_o *)v2;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)DataMasterBase___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BAB678(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
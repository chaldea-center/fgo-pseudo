void __fastcall DataMasterBase___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  System_Collections_ObjectModel_ObservableCollection_T__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  struct System_String_o *Name; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_43548D4 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_OnListChanged__);
    sub_B70694(&DataNameKind_TypeInfo);
    sub_B70694(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_B70694(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_43548D4 = 1;
  }
  v5 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_B70764(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v5,
    (const MethodInfo_2BE7628 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v5;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.list, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, v12);
  this->fields._MasterName_k__BackingField = Name;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._MasterName_k__BackingField,
    (System_Int32_array **)Name,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  list = this->fields.list;
  v21 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_B70764(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_B7076C(v22, v23);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v21,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_43548DE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
    byte_43548DE = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, entity);
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___Add(
    list,
    (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)entity,
    (const MethodInfo_2C86248 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_43548D8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
    byte_43548D8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_B7076C(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_2C863B8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
}


void __fastcall DataMasterBase__CreateLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  unsigned __int64 v20; // x10
  int32_t *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  System_Xml_Schema_XmlSchemaObject_o *v25; // x21
  __int64 v26; // x1
  System_Xml_XmlQualifiedName_o *v27; // x22
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_43548DB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_43548DB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v3;
  p_lookup = &this->fields._lookup;
  sub_B70630((BattleServantConfConponent_o *)p_lookup, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_lookup - 1);
  if ( !v12 )
    sub_B7076C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v12,
                 (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B7076C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v25 = (System_Xml_Schema_XmlSchemaObject_o *)v23;
    if ( !v23 )
      sub_B7076C(0LL, v24);
    v27 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 376LL))(
                                             v23,
                                             *(_QWORD *)(*(_QWORD *)v23 + 384LL));
    if ( v27 )
    {
      if ( !*p_lookup )
        sub_B7076C(0LL, v26);
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
              v27,
              (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_B7076C(0LL, v28);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
          v27,
          v25,
          (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_28:
    v32 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
}


bool __fastcall DataMasterBase__Deleted(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  int basePanel; // w8
  WebViewManager_o *v8; // x20
  int i; // w22
  DataEntityBase_o *v10; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  if ( (byte_43548DD & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43548DD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_B7076C(Instance, v6);
  }
  basePanel = (int)Instance->fields.basePanel;
  v8 = Instance;
  if ( basePanel >= 1 )
  {
    for ( i = 0; i < basePanel; ++i )
    {
      if ( i >= (unsigned int)basePanel )
      {
        v13 = sub_B70798(Instance);
        sub_B70738(v13, 0LL);
      }
      v10 = (DataEntityBase_o *)*((_QWORD *)&v8->fields.baseWindow + i);
      if ( !v10 )
        goto LABEL_15;
      v11 = ((__int64 (__fastcall *)(DataEntityBase_o *, const char *))v10->klass[1]._1.gc_desc)(
              v10,
              v10->klass[1]._1.name);
      if ( !v11 )
        return v11;
      Instance = (WebViewManager_o *)DataMasterBase__RemoveEntity(this, v10, v12);
      basePanel = (int)v8->fields.basePanel;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v11) = 1;
  return v11;
}


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_1CA38B4 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields;
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_1CA38EC *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return (System_String_o *)*((_QWORD *)_0_DataMasterBase_Registration_TMaster->static_fields + 1);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_1CA3924 *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( (byte_43546D3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_43546D3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B7076C(list, method);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_B70754(Item, _0_T);
    if ( result )
      return result;
    sub_B70A60(Item);
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
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x0
  System_NotImplementedException_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x8
  unsigned __int64 v18; // x10
  int *v19; // x11
  __int64 v20; // x0
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  System_Collections_IEnumerator_c **v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x22
  __int64 v27; // x8
  __int64 v28; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *lookup; // x23
  System_Xml_XmlQualifiedName_o *v30; // x0
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x21
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x21
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  System_Collections_IEnumerator_c **v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  System_Xml_Schema_XmlSchemaObject_o *v53; // x22
  __int64 v54; // x8
  __int64 v55; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v56; // x23
  System_Xml_XmlQualifiedName_o *v57; // x0
  int v58; // w24
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x21
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  int v65[2]; // [xsp+0h] [xbp-60h]
  int v66; // [xsp+8h] [xbp-58h]

  v5 = this;
  if ( (byte_43548E4 & 1) == 0 )
  {
    sub_B70694(&DataEntityBase_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_IEnumerable_TypeInfo);
    this = (DataMasterBase_o *)sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_43548E4 = 1;
  }
  v66 = 0;
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_B7076C(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v12 = sub_B70698(&System_NotImplementedException_TypeInfo);
          v13 = (System_NotImplementedException_o *)sub_B70764(v12);
          System_NotImplementedException___ctor(v13, 0LL);
          v14 = sub_B70698(&Method_DataMasterBase_OnListChanged__);
          sub_B70738(v13, v14);
        }
        goto LABEL_84;
      }
    }
    else
    {
      oldItems = e->fields._oldItems;
      if ( oldItems )
      {
        klass = oldItems->klass;
        if ( *(_WORD *)&oldItems->klass->_2.bitflags1 )
        {
          v9 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v9;
            p_offset += 4;
            if ( v9 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
              goto LABEL_11;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_11:
          p_method = sub_B08590(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v16 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v16 )
          sub_B7076C(0LL, v15);
        while ( 1 )
        {
          v17 = *(_QWORD *)v16;
          if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
          {
            v18 = 0LL;
            v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v18;
              v19 += 4;
              if ( v18 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
                goto LABEL_22;
            }
            v20 = v17 + 16LL * *v19 + 312;
          }
          else
          {
LABEL_22:
            v20 = sub_B08590(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
            break;
          v21 = *(_QWORD *)v16;
          if ( *(_WORD *)(*(_QWORD *)v16 + 298LL) )
          {
            v22 = 0LL;
            v23 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *(v23 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v22;
              v23 += 2;
              if ( v22 >= *(unsigned __int16 *)(*(_QWORD *)v16 + 298LL) )
                goto LABEL_29;
            }
            v24 = v21 + 16LL * (*(_DWORD *)v23 + 1) + 312;
          }
          else
          {
LABEL_29:
            v24 = sub_B08590(v16, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v25 = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
          v26 = v25;
          if ( v25 )
          {
            v27 = *(_QWORD *)v25;
            v28 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 300LL) >= (unsigned int)v28
              && *(DataEntityBase_c **)(*(_QWORD *)(v27 + 200) + 8 * v28 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v27 + 376))(v25, *(_QWORD *)(v27 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v30 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 376LL))(
                                                       v26,
                                                       *(_QWORD *)(*(_QWORD *)v26 + 384LL));
              if ( !lookup )
                sub_B7076C(v30, v30);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                lookup,
                v30,
                (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v65[0] = 139;
        v66 = 1;
        v31 = sub_B70754(v16, System_IDisposable_TypeInfo);
        if ( v31 )
        {
          v32 = *(_QWORD *)v31;
          v33 = v31;
          if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
          {
            v34 = 0LL;
            v35 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
                goto LABEL_42;
            }
            v36 = v32 + 16LL * *v35 + 312;
          }
          else
          {
LABEL_42:
            v36 = sub_B08590(v31, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v36)(v33, *(_QWORD *)(v36 + 8));
        }
        v66 = 0;
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v38 = newItems->klass;
        if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
        {
          v39 = 0LL;
          v40 = &v38->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v40 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v39;
            v40 += 4;
            if ( v39 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
              goto LABEL_51;
          }
          v41 = (__int64)&v38->vtable[*v40].method;
        }
        else
        {
LABEL_51:
          v41 = sub_B08590(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v43 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v41)(
                newItems,
                *(_QWORD *)(v41 + 8));
        if ( !v43 )
          sub_B7076C(0LL, v42);
        while ( 1 )
        {
          v44 = *(_QWORD *)v43;
          if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
          {
            v45 = 0LL;
            v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v45;
              v46 += 4;
              if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
                goto LABEL_58;
            }
            v47 = v44 + 16LL * *v46 + 312;
          }
          else
          {
LABEL_58:
            v47 = sub_B08590(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
            break;
          v48 = *(_QWORD *)v43;
          if ( *(_WORD *)(*(_QWORD *)v43 + 298LL) )
          {
            v49 = 0LL;
            v50 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v48 + 176) + 8LL);
            while ( *(v50 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v49;
              v50 += 2;
              if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v43 + 298LL) )
                goto LABEL_65;
            }
            v51 = v48 + 16LL * (*(_DWORD *)v50 + 1) + 312;
          }
          else
          {
LABEL_65:
            v51 = sub_B08590(v43, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
          v53 = (System_Xml_Schema_XmlSchemaObject_o *)v52;
          if ( v52 )
          {
            v54 = *(_QWORD *)v52;
            v55 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v52 + 300LL) >= (unsigned int)v55
              && *(DataEntityBase_c **)(*(_QWORD *)(v54 + 200) + 8 * v55 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v54 + 376))(v52, *(_QWORD *)(v54 + 384)) )
            {
              v56 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v57 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v53->klass->vtable._4_OnAdd.method)(
                                                       v53,
                                                       v53->klass->vtable._5_OnRemove.methodPtr);
              if ( !v56 )
                sub_B7076C(v57, v57);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                v56,
                v57,
                v53,
                (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v65[0] = 248;
        v58 = ++v66;
        v59 = sub_B70754(v43, System_IDisposable_TypeInfo);
        if ( v59 )
        {
          v60 = *(_QWORD *)v59;
          v61 = v59;
          if ( *(_WORD *)(*(_QWORD *)v59 + 298LL) )
          {
            v62 = 0LL;
            v63 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
            {
              ++v62;
              v63 += 4;
              if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v59 + 298LL) )
                goto LABEL_78;
            }
            v64 = v60 + 16LL * *v63 + 312;
          }
          else
          {
LABEL_78:
            v64 = sub_B08590(v59, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v64)(v61, *(_QWORD *)(v64 + 8));
        }
        if ( v58 && v65[v58 - 1] == 248 )
        {
          v66 = v58 - 1;
          goto LABEL_85;
        }
LABEL_84:
        DataMasterBase__CreateLookupTable(v5, (const MethodInfo *)sender);
      }
    }
  }
LABEL_85:
  ((void (__fastcall *)(DataMasterBase_o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, void *, const MethodInfo *))v5->klass->vtable._8_OnListChangedImplementation.method)(
    v5,
    e,
    v5->klass[1]._1.image,
    method);
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
        const MethodInfo_1CA3A08 *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x21
  Il2CppClass *v12; // x20
  char *static_fields; // x0

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields = kind;
  v12 = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(v12);
  static_fields = (char *)v12->static_fields;
  *((_QWORD *)static_fields + 1) = name;
  sub_B70630(
    (BattleServantConfConponent_o *)(static_fields + 8),
    (System_Int32_array **)name,
    (System_String_array **)method,
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
  __int64 v5; // x21
  System_Int32_array **v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v15; // x22
  unsigned int Index_object; // w0

  if ( (byte_43548DF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
    sub_B70694(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
    sub_B70694(&Method_System_Predicate_DataEntityBase___ctor__);
    sub_B70694(&System_Predicate_DataEntityBase__TypeInfo);
    sub_B70694(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__);
    sub_B70694(&DataMasterBase___c__DisplayClass40_0_TypeInfo);
    byte_43548DF = 1;
  }
  v5 = sub_B70764(DataMasterBase___c__DisplayClass40_0_TypeInfo);
  DataMasterBase___c__DisplayClass40_0___ctor((DataMasterBase___c__DisplayClass40_0_o *)v5, 0LL);
  if ( !entity )
    goto LABEL_9;
  v6 = (System_Int32_array **)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                entity,
                                entity->klass[1]._1.name);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v6;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), v6, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    (const MethodInfo_2BF23B8 *)Method_System_Predicate_DataEntityBase___ctor__);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v15,
                   (const MethodInfo_1D59274 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v7 = Index_object;
    v6 = (System_Int32_array **)this->fields.list;
    if ( v6 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        (System_Collections_ObjectModel_Collection_T__o *)v6,
        v7,
        (const MethodInfo_2C86A58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return 1;
    }
LABEL_9:
    sub_B7076C(v6, v7);
  }
  return 0;
}


bool __fastcall DataMasterBase__Replaced(
        DataMasterBase_o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int64_t value; // x21
  __int64 v7; // x22
  int64_t v8; // x23
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v14; // x6
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  bool result; // w0
  System_Nullable_long__o v17; // 0:x2.16
  System_Nullable_long__o v18; // 0:x4.16

  v5 = *(_QWORD *)&lenght.fields.has_value;
  value = lenght.fields.value;
  v7 = *(_QWORD *)&start.fields.has_value;
  v8 = start.fields.value;
  if ( (byte_43548D9 & 1) == 0 )
  {
    sub_B70694(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43548D9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_6;
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v17.fields.value = v8;
  *(_QWORD *)&v17.fields.has_value = v7;
  v18.fields.value = value;
  *(_QWORD *)&v18.fields.has_value = v5;
  v15 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetList(this, objOrBytes, v17, v18, v14);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v15,
    (const MethodInfo_1D58AFC *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_B7076C(Instance, v12);
  result = 1;
  ++this->fields.revision;
  return result;
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
  __int64 v8; // x21
  int64_t value; // x22
  __int64 v10; // x23
  int64_t v11; // x24
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x27
  System_Collections_Generic_IEnumerable_T__o *ListForThread; // x0
  bool result; // w0
  const MethodInfo *v18; // [xsp+0h] [xbp-60h]
  System_Nullable_long__o v19; // 0:x3.16
  System_Nullable_long__o v20; // 0:x5.16

  v8 = *(_QWORD *)&lenght.fields.has_value;
  value = lenght.fields.value;
  v10 = *(_QWORD *)&start.fields.has_value;
  v11 = start.fields.value;
  if ( (byte_43548DA & 1) == 0 )
  {
    sub_B70694(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
    byte_43548DA = 1;
  }
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v19.fields.value = v11;
  *(_QWORD *)&v19.fields.has_value = v10;
  v20.fields.value = value;
  *(_QWORD *)&v20.fields.has_value = v8;
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
    (const MethodInfo_1D58AFC *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  result = 1;
  ++this->fields.revision;
  return result;
}


int32_t __fastcall DataMasterBase__Revision(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields.revision;
}


bool __fastcall DataMasterBase__TryGetEntityFromId_ServantVoiceEntity_(
        DataMasterBase_o *this,
        ServantVoiceEntity_o **result,
        System_String_o *key,
        const MethodInfo_1CA3A78 *method)
{
  DataMasterBase_o *v7; // x22
  DataMasterBase_c *klass; // x8
  DataMasterBase_o *v9; // x22
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x21
  Il2CppClass *_0_T; // x22
  ServantVoiceEntity_o *v21; // x0
  bool v22; // w0
  Il2CppClass *v23; // x20
  System_Int32_array **v24; // x1
  __int64 v25; // [xsp+8h] [xbp-28h] BYREF

  v7 = this;
  if ( (byte_43546D4 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_43546D4 = 1;
  }
  v25 = 0LL;
  if ( !v7 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v7, 0LL)) == 0LL )
    sub_B7076C(this, result);
  klass = this->klass;
  v9 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v12 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v12 = sub_B08590(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_o *, System_String_o *, __int64 *, _QWORD))v12)(
          v9,
          key,
          &v25,
          *(_QWORD *)(v12 + 8)) & 1) == 0 )
    goto LABEL_17;
  v19 = v25;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_T);
  if ( v19 )
  {
    v21 = (ServantVoiceEntity_o *)sub_B70754(v19, _0_T);
    if ( !v21 )
    {
      sub_B70A60(v19);
LABEL_17:
      v22 = 0;
      *result = 0LL;
      return v22;
    }
  }
  else
  {
    v21 = 0LL;
  }
  *result = v21;
  v23 = method->rgctx_data->_0_T;
  if ( (BYTE2(v23->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(v23);
  if ( !v19 )
    goto LABEL_24;
  v24 = (System_Int32_array **)sub_B70754(v19, v23);
  if ( !v24 )
  {
    sub_B70A60(v19);
LABEL_24:
    v24 = 0LL;
  }
  sub_B70630((BattleServantConfConponent_o *)result, v24, v13, v14, v15, v16, v17, v18);
  return 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_1CA3C04 *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x21
  Il2CppClass *_0_T; // x22
  Il2CppObject *v15; // x0
  bool v16; // w0
  Il2CppClass *v17; // x20
  System_Int32_array **v18; // x1

  if ( (byte_43546D5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_43546D5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
LABEL_12:
    v16 = 0;
    *result = 0LL;
    return v16;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B7076C(list, result);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_T);
  if ( Item )
  {
    v15 = (Il2CppObject *)sub_B70754(Item, _0_T);
    if ( !v15 )
    {
      sub_B70A60(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v15 = 0LL;
  }
  *result = v15;
  v17 = method->rgctx_data->_0_T;
  if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(v17);
  if ( !Item )
    goto LABEL_19;
  v18 = (System_Int32_array **)sub_B70754(Item, v17);
  if ( !v18 )
  {
    sub_B70A60(Item);
LABEL_19:
    v18 = 0LL;
  }
  sub_B70630((BattleServantConfConponent_o *)result, v18, v7, v8, v9, v10, v11, v12);
  return 1;
}


bool __fastcall DataMasterBase__Updated(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UIPanel_o *basePanel; // x8
  WebViewManager_o *v9; // x20
  unsigned __int64 v10; // x21
  __int64 v12; // x0

  if ( (byte_43548DC & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43548DC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_B7076C(Instance, v6);
  }
  basePanel = Instance->fields.basePanel;
  v9 = Instance;
  if ( (int)basePanel < 1 )
    return 1;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)basePanel )
    {
      v12 = sub_B70798(Instance);
      sub_B70738(v12, 0LL);
    }
    Instance = (WebViewManager_o *)DataMasterBase__UpdatedEntity(
                                     this,
                                     *((DataEntityBase_o **)&v9->fields.baseWindow + v10),
                                     v7);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    LODWORD(basePanel) = v9->fields.basePanel;
    if ( (__int64)++v10 >= (int)basePanel )
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
  __int64 v5; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x2

  if ( !entity )
    sub_B7076C(this, 0LL);
  v5 = ((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))entity->klass[1]._1.gc_desc)(
         entity,
         entity->klass[1]._1.name,
         method);
  if ( v5 )
  {
    DataMasterBase__RemoveEntity(this, entity, v6);
    DataMasterBase__AddEntity(this, entity, v7);
    LOBYTE(v5) = 1;
  }
  return v5;
}


DataEntityBase_array *__fastcall DataMasterBase__abstractGetList(
        DataMasterBase_o *this,
        Il2CppObject *objOrBytes,
        System_Nullable_long__o start,
        System_Nullable_long__o lenght,
        const MethodInfo *method)
{
  bool has_value; // w22
  bool v6; // w23
  long double v9; // q0
  MiniMessagePack_MiniMessagePacker_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  int64_t Value; // x0
  __int64 v18; // x1
  const MethodInfo_2438A08 *v19; // x2
  const MethodInfo *v20; // x4
  int64_t v21; // x21
  int32_t v23; // w23
  __int64 v24; // x3
  DataEntityBase_array *List; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Nullable_long__o v32; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v33; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v34; // 0:x0.16
  System_Nullable_long__o v35; // 0:x0.16

  v33 = start;
  has_value = lenght.fields.has_value;
  v6 = start.fields.has_value;
  v32 = lenght;
  if ( (byte_43548D6 & 1) == 0 )
  {
    sub_B70694(&byte___TypeInfo);
    sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B70694(&Method_System_Nullable_long__get_HasValue__);
    sub_B70694(&Method_System_Nullable_long__get_Value__);
    byte_43548D6 = 1;
  }
  if ( !sub_B70754(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr,
                                     v9);
  v10 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v10, 0LL);
  this->fields.seriazlier = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( objOrBytes )
  {
    Value = sub_B70754(objOrBytes, byte___TypeInfo);
    v21 = Value;
    if ( !Value )
    {
      v9 = sub_B70A60(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer, long double))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr,
                                       v9);
    }
  }
  else
  {
    v21 = 0LL;
  }
  if ( v6 )
  {
    *(_QWORD *)&v34.fields.has_value = Method_System_Nullable_long__get_Value__;
    v34.fields.value = (int64_t)&v33;
    Value = System_Nullable_long___get_Value(v34, v19);
    has_value = v32.fields.has_value;
    v23 = Value;
  }
  else
  {
    v23 = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v35.fields.has_value = Method_System_Nullable_long__get_Value__;
    v35.fields.value = (int64_t)&v32;
    LODWORD(v24) = System_Nullable_long___get_Value(v35, v19);
  }
  else
  {
    if ( !v21 )
      sub_B7076C(Value, v18);
    v24 = *(_QWORD *)(v21 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v21, v23, v24, v20);
  this->fields.seriazlier = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.seriazlier, 0LL, v26, v27, v28, v29, v30, v31);
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
  bool has_value; // w23
  bool v9; // w24
  __int64 v12; // x0
  __int64 v13; // x22
  MiniMessagePack_MiniMessagePacker_o *v14; // x26
  BattleServantConfConponent_o *p_seriazlier; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_2438A08 *v30; // x2
  const MethodInfo *v31; // x4
  int32_t Value; // w24
  __int64 v34; // x3
  int64_t List; // x0
  __int64 v36; // x1
  MethodInfo_2438A08 *v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  DataEntityBase_array *v43; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v45; // w24
  __int64 v46; // x3
  Il2CppObject *v47; // x1
  System_Nullable_long__o v48; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v49; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v50; // 0:x0.16
  System_Nullable_long__o v51; // 0:x0.16
  System_Nullable_long__o v52; // 0:x0.16
  System_Nullable_long__o v53; // 0:x0.16

  has_value = lenght.fields.has_value;
  v9 = start.fields.has_value;
  v49 = start;
  v48 = lenght;
  if ( (byte_43548D7 & 1) == 0 )
  {
    sub_B70694(&byte___TypeInfo);
    sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B70694(&Method_System_Nullable_long__get_HasValue__);
    sub_B70694(&Method_System_Nullable_long__get_Value__);
    byte_43548D7 = 1;
  }
  v12 = sub_B70754(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v13 = v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  this->fields.seriazlier = v14;
  p_seriazlier = (BattleServantConfConponent_o *)&this->fields.seriazlier;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_B7076C(0LL, v22);
  seriazlier->fields.threadSafeStringHash = work;
  sub_B70630(
    (BattleServantConfConponent_o *)&seriazlier->fields.threadSafeStringHash,
    (System_Int32_array **)work,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( v9 )
  {
    *(_QWORD *)&v50.fields.has_value = Method_System_Nullable_long__get_Value__;
    v50.fields.value = (int64_t)&v49;
    has_value = v48.fields.has_value;
    Value = System_Nullable_long___get_Value(v50, v30);
  }
  else
  {
    Value = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v51.fields.has_value = Method_System_Nullable_long__get_Value__;
    v51.fields.value = (int64_t)&v48;
    LODWORD(v34) = System_Nullable_long___get_Value(v51, v30);
  }
  else
  {
    v34 = *(_QWORD *)(v13 + 24);
  }
  List = (int64_t)DataMasterBase__directGetList(this, (System_Byte_array *)v13, Value, v34, v31);
  v43 = (DataEntityBase_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v49.fields.has_value )
    {
      *(_QWORD *)&v52.fields.has_value = Method_System_Nullable_long__get_Value__;
      v52.fields.value = (int64_t)&v49;
      List = System_Nullable_long___get_Value(v52, v37);
      v45 = List;
    }
    else
    {
      v45 = 0;
    }
    if ( v48.fields.has_value )
    {
      *(_QWORD *)&v53.fields.has_value = Method_System_Nullable_long__get_Value__;
      v53.fields.value = (int64_t)&v48;
      List = System_Nullable_long___get_Value(v53, v37);
      LODWORD(v46) = List;
      if ( klass )
      {
LABEL_18:
        v47 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v13, v45, v46, 0LL);
        v43 = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                        this,
                                        v47,
                                        this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v46 = *(_QWORD *)(v13 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_B7076C(List, v36);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_B70630(p_seriazlier, 0LL, (System_String_array **)v37, v38, v39, v40, v41, v42);
  return v43;
}


System_String_o *__fastcall DataMasterBase__createKey(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  DataMasterBase_o *v4; // x19
  signed int max_length; // w8
  il2cpp_array_size_t v6; // w23
  BattleServantConfConponent_o *p_sb; // x19
  DataMasterBase_o *sb; // t1
  System_Text_StringBuilder_o *v10; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  il2cpp_array_size_t v17; // w8
  unsigned __int64 v18; // x22
  __int64 v19; // x0

  v4 = this;
  if ( (byte_43548E1 & 1) == 0 )
  {
    sub_B70694(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43548E1 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v6 = max_length - 1;
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_o *)v4->fields.sb;
  p_sb = (BattleServantConfConponent_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v10 = (System_Text_StringBuilder_o *)sub_B70764(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42596008(v10, 128, 0LL);
    p_sb->klass = (BattleServantConfConponent_c *)v10;
    sub_B70630(p_sb, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_o *)p_sb->klass;
  v17 = args->max_length;
  v18 = 0LL;
  do
  {
    if ( v18 >= v17 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42605460((System_Text_StringBuilder_o *)this, args->m_Items[v18], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42605224((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v17 = args->max_length;
    ++v18;
  }
  while ( (__int64)v18 < (int)v6 );
  if ( v6 >= v17 )
  {
LABEL_20:
    v19 = sub_B70798(this);
    sub_B70738(v19, 0LL);
  }
  if ( !this
    || (System_Text_StringBuilder__Append_42605460((System_Text_StringBuilder_o *)this, args->m_Items[v6], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_B7076C(this, args);
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
  DataEntityBase_array *v14; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 v18; // x0
  __int64 v20; // x0
  System_FormatException_o *v21; // x20
  System_String_o *v22; // x0
  __int64 v23; // x0

  if ( (byte_43548D5 & 1) == 0 )
  {
    sub_B70694(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_IO_MemoryStream_TypeInfo);
    byte_43548D5 = 1;
  }
  v9 = (System_IO_MemoryStream_o *)sub_B70764(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45611036(v9, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v11 = (DataIO_Runtime_Deserializer_o *)sub_B70764(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v11, seriazlier, 0LL);
  if ( !v11 )
    sub_B7076C(v12, v13);
  v14 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v11,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v9,
          0LL);
  if ( !v14 )
  {
    v20 = sub_B70698(&System_FormatException_TypeInfo);
    v21 = (System_FormatException_o *)sub_B70764(v20);
    v22 = (System_String_o *)sub_B70698(&StringLiteral_19300/*"getList family cannot return null."*/);
    System_FormatException___ctor_44120252(v21, v22, 0LL);
    v23 = sub_B70698(&Method_DataMasterBase_directGetList__);
    sub_B70738(v21, v23);
  }
  if ( v9 )
  {
    klass = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v18 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v18 = sub_B08590(v9, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v18)(v9, *(_QWORD *)(v18 + 8));
  }
  return v14;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_1CA3D48 *method)
{
  DataMasterBase_o *v5; // x21
  DataMasterBase_c *klass; // x8
  DataMasterBase_o *v7; // x21
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0
  __int64 v11; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_43546D6 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_43546D6 = 1;
  }
  v14 = 0LL;
  if ( !v5 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v5, 0LL)) == 0LL )
    sub_B7076C(this, key);
  klass = this->klass;
  v7 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v10 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v10 = sub_B08590(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_o *, System_String_o *, __int64 *, _QWORD))v10)(
          v7,
          key,
          &v14,
          *(_QWORD *)(v10 + 8)) & 1) != 0 )
  {
    v11 = v14;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B08394(_0_T);
    if ( v11 )
    {
      result = (Il2CppObject *)sub_B70754(v11, _0_T);
      if ( result )
        return result;
      sub_B70A60(v11);
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
  if ( (byte_43548E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_43548E0 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


WarQuestSelectionEntity_array *__fastcall DataMasterBase__getEntitys_WarQuestSelectionEntity_(
        DataMasterBase_o *this,
        const MethodInfo_1CA3E74 *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  unsigned int Count; // w22
  Il2CppClass *_0_T; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x8
  WarQuestSelectionEntity_array *v8; // x21
  unsigned __int64 v9; // x22
  BattleServantConfConponent_o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v17; // x24
  Il2CppClass *_1_T; // x25
  System_Int32_array **v19; // x1
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  System_Collections_Generic_IDictionary_TKey__TValue__o *v22; // x1
  const MethodInfo_1CA3FF0 *v23; // x2

  if ( (byte_43546D7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_43546D7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B08394(method->rgctx_data->_0_T__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B706AC(_0_T, Count);
  v7 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v7 )
LABEL_19:
    sub_B7076C(list, method);
  v8 = (WarQuestSelectionEntity_array *)list;
  v9 = 0LL;
  v10 = (BattleServantConfConponent_o *)&list[1];
  while ( (__int64)v9 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                          v7,
                          (const MethodInfo_2C85F70 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v9,
                                                                                         (const MethodInfo_2C86014 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v8 )
      goto LABEL_19;
    v17 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B08394(method->rgctx_data->_1_T);
    if ( v17 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B70754(v17, _1_T);
      v19 = (System_Int32_array **)list;
      if ( !list )
      {
        sub_B70A60(v17);
        return (WarQuestSelectionEntity_array *)Unity_Services_Core_Internal_DictionaryExtensions__MergeAllowOverride_object__int__object_(
                                                  v21,
                                                  v22,
                                                  v23);
      }
    }
    else
    {
      v19 = 0LL;
    }
    if ( v9 >= v8->max_length )
    {
      v20 = sub_B70798(list);
      sub_B70738(v20, 0LL);
    }
    v10->klass = (BattleServantConfConponent_c *)v19;
    sub_B70630(v10, v19, v11, v12, v13, v14, v15, v16);
    v7 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v9;
    v10 = (BattleServantConfConponent_o *)((char *)v10 + 8);
    if ( !v7 )
      goto LABEL_19;
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
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 v14; // x0

  if ( (byte_43548E2 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_43548E2 = 1;
  }
  Key = DataMasterBase__createKey(this, args, method);
  lookup = this->fields._lookup;
  v8 = Key;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, v6);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B7076C(v9, v10);
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v14 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v14)(
           lookup,
           v8,
           *(_QWORD *)(v14 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_30421208(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0

  if ( (byte_43548E3 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_43548E3 = 1;
  }
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, (const MethodInfo *)key);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B7076C(v6, v7);
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v11 = sub_B08590(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v11)(
           lookup,
           key,
           *(_QWORD *)(v11 + 8));
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MasterName_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._MasterName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DataMasterBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434FB18 & 1) == 0 )
  {
    sub_B70694(&DataMasterBase___c_TypeInfo);
    byte_434FB18 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(DataMasterBase___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataMasterBase___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
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

  if ( (byte_42AF660 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_OnListChanged__);
    sub_B52984(&DataNameKind_TypeInfo);
    sub_B52984(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
    sub_B52984(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
    sub_B52984(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
    byte_42AF660 = 1;
  }
  v5 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_B52A54(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v5,
    (const MethodInfo_28C85F0 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v5;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.list, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, v12);
  this->fields._MasterName_k__BackingField = Name;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._MasterName_k__BackingField,
    (System_Int32_array **)Name,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  list = this->fields.list;
  v21 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_B52A54(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v21,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_B52A5C(v22, v23);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v21,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42AF66A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
    byte_42AF66A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, entity);
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___Add(
    list,
    (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)entity,
    (const MethodInfo_2B98830 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_42AF664 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
    byte_42AF664 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_2B989A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
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
  __int64 v14; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v20; // x3
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  System_Xml_Schema_XmlSchemaObject_o *v27; // x21
  __int64 v28; // x1
  System_Xml_XmlQualifiedName_o *v29; // x22
  __int64 v30; // x1
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_42AF667 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42AF667 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v3;
  p_lookup = &this->fields._lookup;
  sub_B52920((BattleServantConfConponent_o *)p_lookup, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
  v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_lookup - 1);
  if ( !v12 )
    sub_B52A5C(0LL, v11);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v12,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v14);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v20);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v27 = (System_Xml_Schema_XmlSchemaObject_o *)v25;
    if ( !v25 )
      sub_B52A5C(0LL, v26);
    v29 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v25 + 376LL))(
                                             v25,
                                             *(_QWORD *)(*(_QWORD *)v25 + 384LL));
    if ( v29 )
    {
      if ( !*p_lookup )
        sub_B52A5C(0LL, v28);
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
              v29,
              (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_B52A5C(0LL, v30);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
          v29,
          v27,
          (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_28:
    v34 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v20);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
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

  if ( (byte_42AF669 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF669 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_B52A5C(Instance, v6);
  }
  basePanel = (int)Instance->fields.basePanel;
  v8 = Instance;
  if ( basePanel >= 1 )
  {
    for ( i = 0; i < basePanel; ++i )
    {
      if ( i >= (unsigned int)basePanel )
      {
        v13 = sub_B52A88(Instance);
        sub_B52A28(v13, 0LL);
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


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_1A4F498 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields;
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_1A4F4D0 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return (System_String_o *)*((_QWORD *)_0_DataMasterBase_Registration_TMaster->static_fields + 1);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_1A4F508 *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( (byte_42B1627 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_42B1627 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B52A5C(list, method);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_B52A44(Item, _0_T);
    if ( result )
      return result;
    sub_B52D50(Item);
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
  __int64 v16; // x3
  __int64 v17; // x21
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x22
  __int64 v29; // x8
  __int64 v30; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *lookup; // x23
  System_Xml_XmlQualifiedName_o *v32; // x0
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x21
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v40; // x8
  unsigned __int64 v41; // x10
  int32_t *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x3
  __int64 v46; // x21
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x3
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  System_Collections_IEnumerator_c **v54; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  System_Xml_Schema_XmlSchemaObject_o *v57; // x22
  __int64 v58; // x8
  __int64 v59; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v60; // x23
  System_Xml_XmlQualifiedName_o *v61; // x0
  int v62; // w24
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x21
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  int v69[2]; // [xsp+0h] [xbp-60h]
  int v70; // [xsp+8h] [xbp-58h]

  v5 = this;
  if ( (byte_42AF670 & 1) == 0 )
  {
    sub_B52984(&DataEntityBase_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerable_TypeInfo);
    this = (DataMasterBase_o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42AF670 = 1;
  }
  v70 = 0;
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_B52A5C(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v12 = sub_B52988(&System_NotImplementedException_TypeInfo);
          v13 = (System_NotImplementedException_o *)sub_B52A54(v12);
          System_NotImplementedException___ctor(v13, 0LL);
          v14 = sub_B52988(&Method_DataMasterBase_OnListChanged__);
          sub_B52A28(v13, v14);
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
          p_method = sub_AEB880(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, method);
        }
        v17 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v17 )
          sub_B52A5C(0LL, v15);
        while ( 1 )
        {
          v18 = *(_QWORD *)v17;
          if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
          {
            v19 = 0LL;
            v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v19;
              v20 += 4;
              if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
                goto LABEL_22;
            }
            v21 = v18 + 16LL * *v20 + 312;
          }
          else
          {
LABEL_22:
            v21 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
            break;
          v23 = *(_QWORD *)v17;
          if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
          {
            v24 = 0LL;
            v25 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v24;
              v25 += 2;
              if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
                goto LABEL_29;
            }
            v26 = v23 + 16LL * (*(_DWORD *)v25 + 1) + 312;
          }
          else
          {
LABEL_29:
            v26 = sub_AEB880(v17, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
          }
          v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
          v28 = v27;
          if ( v27 )
          {
            v29 = *(_QWORD *)v27;
            v30 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 300LL) >= (unsigned int)v30
              && *(DataEntityBase_c **)(*(_QWORD *)(v29 + 200) + 8 * v30 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v29 + 376))(v27, *(_QWORD *)(v29 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v32 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 376LL))(
                                                       v28,
                                                       *(_QWORD *)(*(_QWORD *)v28 + 384LL));
              if ( !lookup )
                sub_B52A5C(v32, v32);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                lookup,
                v32,
                (const MethodInfo_2F1D26C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v69[0] = 139;
        v70 = 1;
        v33 = sub_B52A44(v17, System_IDisposable_TypeInfo);
        if ( v33 )
        {
          v34 = *(_QWORD *)v33;
          v35 = v33;
          if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
          {
            v36 = 0LL;
            v37 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
            {
              ++v36;
              v37 += 4;
              if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
                goto LABEL_42;
            }
            v38 = v34 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_42:
            v38 = sub_AEB880(v33, System_IDisposable_TypeInfo, 0LL, method);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
        }
        v70 = 0;
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v40 = newItems->klass;
        if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
        {
          v41 = 0LL;
          v42 = &v40->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v42 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v41;
            v42 += 4;
            if ( v41 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
              goto LABEL_51;
          }
          v43 = (__int64)&v40->vtable[*v42].method;
        }
        else
        {
LABEL_51:
          v43 = sub_AEB880(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL, method);
        }
        v46 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v43)(
                newItems,
                *(_QWORD *)(v43 + 8));
        if ( !v46 )
          sub_B52A5C(0LL, v44);
        while ( 1 )
        {
          v47 = *(_QWORD *)v46;
          if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
          {
            v48 = 0LL;
            v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v48;
              v49 += 4;
              if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
                goto LABEL_58;
            }
            v50 = v47 + 16LL * *v49 + 312;
          }
          else
          {
LABEL_58:
            v50 = sub_AEB880(v46, System_Collections_IEnumerator_TypeInfo, 0LL, v45);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
            break;
          v52 = *(_QWORD *)v46;
          if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
          {
            v53 = 0LL;
            v54 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v52 + 176) + 8LL);
            while ( *(v54 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v53;
              v54 += 2;
              if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
                goto LABEL_65;
            }
            v55 = v52 + 16LL * (*(_DWORD *)v54 + 1) + 312;
          }
          else
          {
LABEL_65:
            v55 = sub_AEB880(v46, System_Collections_IEnumerator_TypeInfo, 1LL, v51);
          }
          v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v46, *(_QWORD *)(v55 + 8));
          v57 = (System_Xml_Schema_XmlSchemaObject_o *)v56;
          if ( v56 )
          {
            v58 = *(_QWORD *)v56;
            v59 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v56 + 300LL) >= (unsigned int)v59
              && *(DataEntityBase_c **)(*(_QWORD *)(v58 + 200) + 8 * v59 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v58 + 376))(v56, *(_QWORD *)(v58 + 384)) )
            {
              v60 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v61 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v57->klass->vtable._4_OnAdd.method)(
                                                       v57,
                                                       v57->klass->vtable._5_OnRemove.methodPtr);
              if ( !v60 )
                sub_B52A5C(v61, v61);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                v60,
                v61,
                v57,
                (const MethodInfo_2F1B7D8 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v69[0] = 248;
        v62 = ++v70;
        v63 = sub_B52A44(v46, System_IDisposable_TypeInfo);
        if ( v63 )
        {
          v64 = *(_QWORD *)v63;
          v65 = v63;
          if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
          {
            v66 = 0LL;
            v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
            {
              ++v66;
              v67 += 4;
              if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
                goto LABEL_78;
            }
            v68 = v64 + 16LL * *v67 + 312;
          }
          else
          {
LABEL_78:
            v68 = sub_AEB880(v63, System_IDisposable_TypeInfo, 0LL, method);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
        }
        if ( v62 && v69[v62 - 1] == 248 )
        {
          v70 = v62 - 1;
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
        const MethodInfo_1A4F5EC *method)
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
    sub_AEB684(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields = kind;
  v12 = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(v12);
  static_fields = (char *)v12->static_fields;
  *((_QWORD *)static_fields + 1) = name;
  sub_B52920(
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

  if ( (byte_42AF66B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
    sub_B52984(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
    sub_B52984(&Method_System_Predicate_DataEntityBase___ctor__);
    sub_B52984(&System_Predicate_DataEntityBase__TypeInfo);
    sub_B52984(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__);
    sub_B52984(&DataMasterBase___c__DisplayClass40_0_TypeInfo);
    byte_42AF66B = 1;
  }
  v5 = sub_B52A54(DataMasterBase___c__DisplayClass40_0_TypeInfo);
  DataMasterBase___c__DisplayClass40_0___ctor((DataMasterBase___c__DisplayClass40_0_o *)v5, 0LL);
  if ( !entity )
    goto LABEL_9;
  v6 = (System_Int32_array **)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                entity,
                                entity->klass[1]._1.name);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v6;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), v6, v8, v9, v10, v11, v12, v13);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v15 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    (const MethodInfo_28D2DBC *)Method_System_Predicate_DataEntityBase___ctor__);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v15,
                   (const MethodInfo_1F71CC8 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v7 = Index_object;
    v6 = (System_Int32_array **)this->fields.list;
    if ( v6 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        (System_Collections_ObjectModel_Collection_T__o *)v6,
        v7,
        (const MethodInfo_2B99040 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return 1;
    }
LABEL_9:
    sub_B52A5C(v6, v7);
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
  if ( (byte_42AF665 & 1) == 0 )
  {
    sub_B52984(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF665 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
    (const MethodInfo_1F71550 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_B52A5C(Instance, v12);
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
  if ( (byte_42AF666 & 1) == 0 )
  {
    sub_B52984(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
    byte_42AF666 = 1;
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
    (const MethodInfo_1F71550 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_1A4F65C *method)
{
  DataMasterBase_o *v7; // x22
  __int64 v8; // x3
  DataMasterBase_c *klass; // x8
  DataMasterBase_o *v10; // x22
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x21
  Il2CppClass *_0_T; // x22
  ServantVoiceEntity_o *v22; // x0
  bool v23; // w0
  Il2CppClass *v24; // x20
  System_Int32_array **v25; // x1
  __int64 v26; // [xsp+8h] [xbp-28h] BYREF

  v7 = this;
  if ( (byte_42B1628 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_42B1628 = 1;
  }
  v26 = 0LL;
  if ( !v7 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v7, 0LL)) == 0LL )
    sub_B52A5C(this, result);
  klass = this->klass;
  v10 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_AEB880(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v8);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_o *, System_String_o *, __int64 *, _QWORD))v13)(
          v10,
          key,
          &v26,
          *(_QWORD *)(v13 + 8)) & 1) == 0 )
    goto LABEL_17;
  v20 = v26;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_T);
  if ( v20 )
  {
    v22 = (ServantVoiceEntity_o *)sub_B52A44(v20, _0_T);
    if ( !v22 )
    {
      sub_B52D50(v20);
LABEL_17:
      v23 = 0;
      *result = 0LL;
      return v23;
    }
  }
  else
  {
    v22 = 0LL;
  }
  *result = v22;
  v24 = method->rgctx_data->_0_T;
  if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(v24);
  if ( !v20 )
    goto LABEL_24;
  v25 = (System_Int32_array **)sub_B52A44(v20, v24);
  if ( !v25 )
  {
    sub_B52D50(v20);
LABEL_24:
    v25 = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)result, v25, v14, v15, v16, v17, v18, v19);
  return 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_1A4F7E8 *method)
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

  if ( (byte_42B1629 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_42B1629 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
LABEL_12:
    v16 = 0;
    *result = 0LL;
    return v16;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B52A5C(list, result);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_T);
  if ( Item )
  {
    v15 = (Il2CppObject *)sub_B52A44(Item, _0_T);
    if ( !v15 )
    {
      sub_B52D50(Item);
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
    sub_AEB684(v17);
  if ( !Item )
    goto LABEL_19;
  v18 = (System_Int32_array **)sub_B52A44(Item, v17);
  if ( !v18 )
  {
    sub_B52D50(Item);
LABEL_19:
    v18 = 0LL;
  }
  sub_B52920((BattleServantConfConponent_o *)result, v18, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_42AF668 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AF668 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
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
      v12 = sub_B52A88(Instance);
      sub_B52A28(v12, 0LL);
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
    sub_B52A5C(this, 0LL);
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
  MiniMessagePack_MiniMessagePacker_o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  int64_t Value; // x0
  __int64 v17; // x1
  const MethodInfo_2172198 *v18; // x2
  const MethodInfo *v19; // x4
  int64_t v20; // x21
  int32_t v22; // w23
  __int64 v23; // x3
  DataEntityBase_array *List; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Nullable_long__o v31; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v32; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v33; // 0:x0.16
  System_Nullable_long__o v34; // 0:x0.16

  v32 = start;
  has_value = lenght.fields.has_value;
  v6 = start.fields.has_value;
  v31 = lenght;
  if ( (byte_42AF662 & 1) == 0 )
  {
    sub_B52984(&byte___TypeInfo);
    sub_B52984(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B52984(&Method_System_Nullable_long__get_HasValue__);
    sub_B52984(&Method_System_Nullable_long__get_Value__);
    byte_42AF662 = 1;
  }
  if ( !sub_B52A44(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v9 = (MiniMessagePack_MiniMessagePacker_o *)sub_B52A54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v9, 0LL);
  this->fields.seriazlier = v9;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( objOrBytes )
  {
    Value = sub_B52A44(objOrBytes, byte___TypeInfo);
    v20 = Value;
    if ( !Value )
    {
      sub_B52D50(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr);
    }
  }
  else
  {
    v20 = 0LL;
  }
  if ( v6 )
  {
    *(_QWORD *)&v33.fields.has_value = Method_System_Nullable_long__get_Value__;
    v33.fields.value = (int64_t)&v32;
    Value = System_Nullable_long___get_Value(v33, v18);
    has_value = v31.fields.has_value;
    v22 = Value;
  }
  else
  {
    v22 = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v34.fields.has_value = Method_System_Nullable_long__get_Value__;
    v34.fields.value = (int64_t)&v31;
    LODWORD(v23) = System_Nullable_long___get_Value(v34, v18);
  }
  else
  {
    if ( !v20 )
      sub_B52A5C(Value, v17);
    v23 = *(_QWORD *)(v20 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v20, v22, v23, v19);
  this->fields.seriazlier = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.seriazlier, 0LL, v25, v26, v27, v28, v29, v30);
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
  const MethodInfo_2172198 *v30; // x2
  const MethodInfo *v31; // x4
  int32_t Value; // w24
  __int64 v34; // x3
  int64_t List; // x0
  __int64 v36; // x1
  MethodInfo_2172198 *v37; // x2
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
  if ( (byte_42AF663 & 1) == 0 )
  {
    sub_B52984(&byte___TypeInfo);
    sub_B52984(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B52984(&Method_System_Nullable_long__get_HasValue__);
    sub_B52984(&Method_System_Nullable_long__get_Value__);
    byte_42AF663 = 1;
  }
  v12 = sub_B52A44(objOrBytes, byte___TypeInfo);
  if ( !v12 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v13 = v12;
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_B52A54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  this->fields.seriazlier = v14;
  p_seriazlier = (BattleServantConfConponent_o *)&this->fields.seriazlier;
  sub_B52920(
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
    sub_B52A5C(0LL, v22);
  seriazlier->fields.threadSafeStringHash = work;
  sub_B52920(
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
    sub_B52A5C(List, v36);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_B52920(p_seriazlier, 0LL, (System_String_array **)v37, v38, v39, v40, v41, v42);
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
  if ( (byte_42AF66D & 1) == 0 )
  {
    sub_B52984(&System_Text_StringBuilder_TypeInfo);
    this = (DataMasterBase_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AF66D = 1;
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
    v10 = (System_Text_StringBuilder_o *)sub_B52A54(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42988076(v10, 128, 0LL);
    p_sb->klass = (BattleServantConfConponent_c *)v10;
    sub_B52920(p_sb, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
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
    System_Text_StringBuilder__Append_42997528((System_Text_StringBuilder_o *)this, args->m_Items[v18], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42997292((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v17 = args->max_length;
    ++v18;
  }
  while ( (__int64)v18 < (int)v6 );
  if ( v6 >= v17 )
  {
LABEL_20:
    v19 = sub_B52A88(this);
    sub_B52A28(v19, 0LL);
  }
  if ( !this
    || (System_Text_StringBuilder__Append_42997528((System_Text_StringBuilder_o *)this, args->m_Items[v6], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_B52A5C(this, args);
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
  __int64 v14; // x3
  DataEntityBase_array *v15; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 v19; // x0
  __int64 v21; // x0
  System_FormatException_o *v22; // x20
  System_String_o *v23; // x0
  __int64 v24; // x0

  if ( (byte_42AF661 & 1) == 0 )
  {
    sub_B52984(&DataIO_Runtime_Deserializer_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_IO_MemoryStream_TypeInfo);
    byte_42AF661 = 1;
  }
  v9 = (System_IO_MemoryStream_o *)sub_B52A54(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45046568(v9, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v11 = (DataIO_Runtime_Deserializer_o *)sub_B52A54(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v11, seriazlier, 0LL);
  if ( !v11 )
    sub_B52A5C(v12, v13);
  v15 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v11,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v9,
          0LL);
  if ( !v15 )
  {
    v21 = sub_B52988(&System_FormatException_TypeInfo);
    v22 = (System_FormatException_o *)sub_B52A54(v21);
    v23 = (System_String_o *)sub_B52988(&StringLiteral_19147/*"getList family cannot return null."*/);
    System_FormatException___ctor_44014976(v22, v23, 0LL);
    v24 = sub_B52988(&Method_DataMasterBase_directGetList__);
    sub_B52A28(v22, v24);
  }
  if ( v9 )
  {
    klass = v9->klass;
    if ( *(_WORD *)&v9->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&v9->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v19 = sub_AEB880(v9, System_IDisposable_TypeInfo, 0LL, v14);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v19)(v9, *(_QWORD *)(v19 + 8));
  }
  return v15;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_1A4F92C *method)
{
  DataMasterBase_o *v5; // x21
  __int64 v6; // x3
  DataMasterBase_c *klass; // x8
  DataMasterBase_o *v8; // x21
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 v11; // x0
  __int64 v12; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_42B162A & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_42B162A = 1;
  }
  v15 = 0LL;
  if ( !v5 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v5, 0LL)) == 0LL )
    sub_B52A5C(this, key);
  klass = this->klass;
  v8 = this;
  if ( *(_WORD *)&this->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v9;
      p_offset += 4;
      if ( v9 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v11 = (__int64)(&klass->vtable._1_Finalize.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v11 = sub_AEB880(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v6);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_o *, System_String_o *, __int64 *, _QWORD))v11)(
          v8,
          key,
          &v15,
          *(_QWORD *)(v11 + 8)) & 1) != 0 )
  {
    v12 = v15;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AEB684(_0_T);
    if ( v12 )
    {
      result = (Il2CppObject *)sub_B52A44(v12, _0_T);
      if ( result )
        return result;
      sub_B52D50(v12);
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
  if ( (byte_42AF66C & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
    byte_42AF66C = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


WarQuestSelectionEntity_array *__fastcall DataMasterBase__getEntitys_WarQuestSelectionEntity_(
        DataMasterBase_o *this,
        const MethodInfo_1A4FA58 *method)
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
  const MethodInfo_1A4FBD4 *v23; // x2

  if ( (byte_42B162B & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    byte_42B162B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AEB684(method->rgctx_data->_0_T__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5299C(_0_T, Count);
  v7 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v7 )
LABEL_19:
    sub_B52A5C(list, method);
  v8 = (WarQuestSelectionEntity_array *)list;
  v9 = 0LL;
  v10 = (BattleServantConfConponent_o *)&list[1];
  while ( (__int64)v9 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                          v7,
                          (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v9,
                                                                                         (const MethodInfo_2B985FC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v8 )
      goto LABEL_19;
    v17 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_AEB684(method->rgctx_data->_1_T);
    if ( v17 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B52A44(v17, _1_T);
      v19 = (System_Int32_array **)list;
      if ( !list )
      {
        v21 = (Il2CppObject *)sub_B52D50(v17);
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
      v20 = sub_B52A88(list);
      sub_B52A28(v20, 0LL);
    }
    v10->klass = (BattleServantConfConponent_c *)v19;
    sub_B52920(v10, v19, v11, v12, v13, v14, v15, v16);
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
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0

  if ( (byte_42AF66E & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_42AF66E = 1;
  }
  Key = DataMasterBase__createKey(this, args, method);
  lookup = this->fields._lookup;
  v9 = Key;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, v6);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B52A5C(v10, v11);
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v13 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v13;
      p_offset += 4;
      if ( v13 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v15 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v15 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v7);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v15)(
           lookup,
           v9,
           *(_QWORD *)(v15 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_24085372(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0

  if ( (byte_42AF66F & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo);
    byte_42AF66F = 1;
  }
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, (const MethodInfo *)key);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B52A5C(v7, v8);
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v10;
      p_offset += 4;
      if ( v10 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v12 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v12 = sub_AEB880(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v3);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v12)(
           lookup,
           key,
           *(_QWORD *)(v12 + 8));
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
  sub_B52920(
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

  if ( (byte_42AE2EE & 1) == 0 )
  {
    sub_B52984(&DataMasterBase___c_TypeInfo);
    byte_42AE2EE = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(DataMasterBase___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataMasterBase___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B52A5C(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
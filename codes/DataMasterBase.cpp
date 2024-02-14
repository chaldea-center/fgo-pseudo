void __fastcall DataMasterBase___cctor(const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *v9; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  struct System_String_o *Name; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v27; // x21
  __int64 v28; // x0

  if ( (byte_4215719 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_OnListChanged__, *(_QWORD *)&kind);
    sub_B0D8A4(&DataNameKind_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, v7);
    sub_B0D8A4(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v8);
    byte_4215719 = 1;
  }
  v9 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_B0D974(
                                                                     System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo,
                                                                     *(_QWORD *)&kind,
                                                                     method);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v9,
    (const MethodInfo_2AEDCB8 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v9;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.list,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, v16);
  this->fields._MasterName_k__BackingField = Name;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._MasterName_k__BackingField,
    (System_Int32_array **)Name,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  list = this->fields.list;
  v27 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_B0D974(
                                                                                  System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo,
                                                                                  v25,
                                                                                  v26);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v27,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_B0D97C(v28);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v27,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_4215723 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__, entity);
    byte_4215723 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___Add(
    list,
    (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)entity,
    (const MethodInfo_2AB59F0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_421571D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__, method);
    byte_421571D = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_2AB5B60 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v11; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  unsigned __int64 v26; // x10
  int32_t *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x0
  System_Xml_Schema_XmlSchemaObject_o *v30; // x21
  System_Xml_XmlQualifiedName_o *v31; // x22
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_4215720 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4215720 = 1;
  }
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo,
                                                                                        method,
                                                                                        v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v11,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v11;
  p_lookup = &this->fields._lookup;
  sub_B0D840((BattleServantConfConponent_o *)p_lookup, (System_Int32_array **)v11, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_lookup - 1);
  if ( !v19 )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v19,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v22;
        p_offset += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v25 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v26 = 0LL;
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v27 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v28 = (__int64)&v25->vtable[*v27].method;
    }
    else
    {
LABEL_16:
      v28 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(
            Enumerator,
            *(_QWORD *)(v28 + 8));
    v30 = (System_Xml_Schema_XmlSchemaObject_o *)v29;
    if ( !v29 )
      sub_B0D97C(0LL);
    v31 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v29 + 376LL))(
                                             v29,
                                             *(_QWORD *)(*(_QWORD *)v29 + 384LL));
    if ( v31 )
    {
      if ( !*p_lookup )
        sub_B0D97C(0LL);
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
              v31,
              (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_B0D97C(0LL);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
          v31,
          v30,
          (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_28:
    v35 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
}


bool __fastcall DataMasterBase__Deleted(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  int basePanel; // w8
  WebViewManager_o *v7; // x20
  int i; // w22
  DataEntityBase_o *v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // x2
  __int64 v12; // x0

  if ( (byte_4215722 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4215722 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_B0D97C(Instance);
  }
  basePanel = (int)Instance->fields.basePanel;
  v7 = Instance;
  if ( basePanel >= 1 )
  {
    for ( i = 0; i < basePanel; ++i )
    {
      if ( i >= (unsigned int)basePanel )
      {
        v12 = sub_B0D9A8(Instance);
        sub_B0D948(v12, 0LL);
      }
      v9 = (DataEntityBase_o *)*((_QWORD *)&v7->fields.baseWindow + i);
      if ( !v9 )
        goto LABEL_15;
      v10 = ((__int64 (__fastcall *)(DataEntityBase_o *, const char *))v9->klass[1]._1.gc_desc)(
              v9,
              v9->klass[1]._1.name);
      if ( !v10 )
        return v10;
      Instance = (WebViewManager_o *)DataMasterBase__RemoveEntity(this, v9, v11);
      basePanel = (int)v7->fields.basePanel;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v10) = 1;
  return v10;
}


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_17148BC *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields;
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_17148F4 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return (System_String_o *)*((_QWORD *)_0_DataMasterBase_Registration_TMaster->static_fields + 1);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_171492C *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( (byte_4214370 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_4214370 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B0D97C(list);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_B0D964(Item, _0_T);
    if ( result )
      return result;
    sub_B0DC70(Item);
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
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  System_NotImplementedException_o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x21
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  System_Collections_IEnumerator_c **v29; // x11
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 v34; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *lookup; // x23
  System_Xml_XmlQualifiedName_o *v36; // x0
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x21
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x21
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  System_Collections_IEnumerator_c **v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  System_Xml_Schema_XmlSchemaObject_o *v58; // x22
  __int64 v59; // x8
  __int64 v60; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v61; // x23
  System_Xml_XmlQualifiedName_o *v62; // x0
  int v63; // w24
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x21
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  int v70[2]; // [xsp+0h] [xbp-60h]
  int v71; // [xsp+8h] [xbp-58h]

  v5 = this;
  if ( (byte_4215729 & 1) == 0 )
  {
    sub_B0D8A4(&DataEntityBase_TypeInfo, sender);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__, v7);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerable_TypeInfo, v9);
    this = (DataMasterBase_o *)sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4215729 = 1;
  }
  v71 = 0;
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_B0D97C(this);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v17 = sub_B0D8A8(&System_NotImplementedException_TypeInfo);
          v20 = (System_NotImplementedException_o *)sub_B0D974(v17, v18, v19);
          System_NotImplementedException___ctor(v20, 0LL);
          v21 = sub_B0D8A8(&Method_DataMasterBase_OnListChanged__);
          sub_B0D948(v20, v21);
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
          v14 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v14;
            p_offset += 4;
            if ( v14 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
              goto LABEL_11;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_11:
          p_method = sub_AA67A0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v22 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v22 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v23 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v24 = 0LL;
            v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v24;
              v25 += 4;
              if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_22;
            }
            v26 = v23 + 16LL * *v25 + 312;
          }
          else
          {
LABEL_22:
            v26 = sub_AA67A0(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
            break;
          v27 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v28 = 0LL;
            v29 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *(v29 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v28;
              v29 += 2;
              if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_29;
            }
            v30 = v27 + 16LL * (*(_DWORD *)v29 + 1) + 312;
          }
          else
          {
LABEL_29:
            v30 = sub_AA67A0(v22, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
          v32 = v31;
          if ( v31 )
          {
            v33 = *(_QWORD *)v31;
            v34 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 300LL) >= (unsigned int)v34
              && *(DataEntityBase_c **)(*(_QWORD *)(v33 + 200) + 8 * v34 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v33 + 376))(v31, *(_QWORD *)(v33 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v36 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 376LL))(
                                                       v32,
                                                       *(_QWORD *)(*(_QWORD *)v32 + 384LL));
              if ( !lookup )
                sub_B0D97C(v36);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                lookup,
                v36,
                (const MethodInfo_2E4C6D4 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v70[0] = 139;
        v71 = 1;
        v37 = sub_B0D964(v22, System_IDisposable_TypeInfo);
        if ( v37 )
        {
          v38 = *(_QWORD *)v37;
          v39 = v37;
          if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
          {
            v40 = 0LL;
            v41 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
            {
              ++v40;
              v41 += 4;
              if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
                goto LABEL_42;
            }
            v42 = v38 + 16LL * *v41 + 312;
          }
          else
          {
LABEL_42:
            v42 = sub_AA67A0(v37, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v42)(v39, *(_QWORD *)(v42 + 8));
        }
        v71 = 0;
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v44 = newItems->klass;
        if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
        {
          v45 = 0LL;
          v46 = &v44->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v46 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v45;
            v46 += 4;
            if ( v45 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
              goto LABEL_51;
          }
          v47 = (__int64)&v44->vtable[*v46].method;
        }
        else
        {
LABEL_51:
          v47 = sub_AA67A0(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v48 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v47)(
                newItems,
                *(_QWORD *)(v47 + 8));
        if ( !v48 )
          sub_B0D97C(0LL);
        while ( 1 )
        {
          v49 = *(_QWORD *)v48;
          if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
          {
            v50 = 0LL;
            v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v51 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v50;
              v51 += 4;
              if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
                goto LABEL_58;
            }
            v52 = v49 + 16LL * *v51 + 312;
          }
          else
          {
LABEL_58:
            v52 = sub_AA67A0(v48, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v52)(v48, *(_QWORD *)(v52 + 8)) & 1) == 0 )
            break;
          v53 = *(_QWORD *)v48;
          if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
          {
            v54 = 0LL;
            v55 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v53 + 176) + 8LL);
            while ( *(v55 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v54;
              v55 += 2;
              if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
                goto LABEL_65;
            }
            v56 = v53 + 16LL * (*(_DWORD *)v55 + 1) + 312;
          }
          else
          {
LABEL_65:
            v56 = sub_AA67A0(v48, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v48, *(_QWORD *)(v56 + 8));
          v58 = (System_Xml_Schema_XmlSchemaObject_o *)v57;
          if ( v57 )
          {
            v59 = *(_QWORD *)v57;
            v60 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v57 + 300LL) >= (unsigned int)v60
              && *(DataEntityBase_c **)(*(_QWORD *)(v59 + 200) + 8 * v60 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v59 + 376))(v57, *(_QWORD *)(v59 + 384)) )
            {
              v61 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v62 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v58->klass->vtable._4_OnAdd.method)(
                                                       v58,
                                                       v58->klass->vtable._5_OnRemove.methodPtr);
              if ( !v61 )
                sub_B0D97C(v62);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                v61,
                v62,
                v58,
                (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v70[0] = 248;
        v63 = ++v71;
        v64 = sub_B0D964(v48, System_IDisposable_TypeInfo);
        if ( v64 )
        {
          v65 = *(_QWORD *)v64;
          v66 = v64;
          if ( *(_WORD *)(*(_QWORD *)v64 + 298LL) )
          {
            v67 = 0LL;
            v68 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
            {
              ++v67;
              v68 += 4;
              if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v64 + 298LL) )
                goto LABEL_78;
            }
            v69 = v65 + 16LL * *v68 + 312;
          }
          else
          {
LABEL_78:
            v69 = sub_AA67A0(v64, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v69)(v66, *(_QWORD *)(v69 + 8));
        }
        if ( v63 && v70[v63 - 1] == 248 )
        {
          v71 = v63 - 1;
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
        const MethodInfo_1714A10 *method)
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
    sub_AA65A4(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields = kind;
  v12 = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(v12);
  static_fields = (char *)v12->static_fields;
  *((_QWORD *)static_fields + 1) = name;
  sub_B0D840(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x22
  int32_t Index_object; // w0
  int32_t v23; // w1

  if ( (byte_4215724 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__, entity);
    sub_B0D8A4(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___, v5);
    sub_B0D8A4(&Method_System_Predicate_DataEntityBase___ctor__, v6);
    sub_B0D8A4(&System_Predicate_DataEntityBase__TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__, v8);
    sub_B0D8A4(&DataMasterBase___c__DisplayClass40_0_TypeInfo, v9);
    byte_4215724 = 1;
  }
  v10 = sub_B0D974(DataMasterBase___c__DisplayClass40_0_TypeInfo, entity, method);
  DataMasterBase___c__DisplayClass40_0___ctor((DataMasterBase___c__DisplayClass40_0_o *)v10, 0LL);
  if ( !entity )
    goto LABEL_9;
  v11 = (System_Int32_array **)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                 entity,
                                 entity->klass[1]._1.name);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = v11;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), v11, v12, v13, v14, v15, v16, v17);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_DataEntityBase__TypeInfo,
                                                                   v19,
                                                                   v20);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v10,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_DataEntityBase___ctor__);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v21,
                   (const MethodInfo_204B494 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v23 = Index_object;
    v11 = (System_Int32_array **)this->fields.list;
    if ( v11 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        (System_Collections_ObjectModel_Collection_T__o *)v11,
        v23,
        (const MethodInfo_2AB6200 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return 1;
    }
LABEL_9:
    sub_B0D97C(v11);
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
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
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
  if ( (byte_421571E & 1) == 0 )
  {
    sub_B0D8A4(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_421571E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
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
    (const MethodInfo_204AD1C *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_B0D97C(Instance);
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
  if ( (byte_421571F & 1) == 0 )
  {
    sub_B0D8A4(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    byte_421571F = 1;
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
    (const MethodInfo_204AD1C *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_1714A80 *method)
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
  if ( (byte_4214371 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B0D8A4(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 result);
    byte_4214371 = 1;
  }
  v25 = 0LL;
  if ( !v7 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v7, 0LL)) == 0LL )
    sub_B0D97C(this);
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
    v12 = sub_AA67A0(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
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
    sub_AA65A4(method->rgctx_data->_0_T);
  if ( v19 )
  {
    v21 = (ServantVoiceEntity_o *)sub_B0D964(v19, _0_T);
    if ( !v21 )
    {
      sub_B0DC70(v19);
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
    sub_AA65A4(v23);
  if ( !v19 )
    goto LABEL_24;
  v24 = (System_Int32_array **)sub_B0D964(v19, v23);
  if ( !v24 )
  {
    sub_B0DC70(v19);
LABEL_24:
    v24 = 0LL;
  }
  sub_B0D840((BattleServantConfConponent_o *)result, v24, v13, v14, v15, v16, v17, v18);
  return 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_1714C0C *method)
{
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x21
  Il2CppClass *_0_T; // x22
  Il2CppObject *v16; // x0
  bool v17; // w0
  Il2CppClass *v18; // x20
  System_Int32_array **v19; // x1

  if ( (byte_4214372 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, result);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    byte_4214372 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
LABEL_12:
    v17 = 0;
    *result = 0LL;
    return v17;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B0D97C(list);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_T);
  if ( Item )
  {
    v16 = (Il2CppObject *)sub_B0D964(Item, _0_T);
    if ( !v16 )
    {
      sub_B0DC70(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v16 = 0LL;
  }
  *result = v16;
  v18 = method->rgctx_data->_0_T;
  if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(v18);
  if ( !Item )
    goto LABEL_19;
  v19 = (System_Int32_array **)sub_B0D964(Item, v18);
  if ( !v19 )
  {
    sub_B0DC70(Item);
LABEL_19:
    v19 = 0LL;
  }
  sub_B0D840((BattleServantConfConponent_o *)result, v19, v8, v9, v10, v11, v12, v13);
  return 1;
}


bool __fastcall DataMasterBase__Updated(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x2
  struct UIPanel_o *basePanel; // x8
  WebViewManager_o *v8; // x20
  unsigned __int64 v9; // x21
  __int64 v11; // x0

  if ( (byte_4215721 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4215721 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  basePanel = Instance->fields.basePanel;
  v8 = Instance;
  if ( (int)basePanel < 1 )
    return 1;
  v9 = 0LL;
  while ( 1 )
  {
    if ( v9 >= (unsigned int)basePanel )
    {
      v11 = sub_B0D9A8(Instance);
      sub_B0D948(v11, 0LL);
    }
    Instance = (WebViewManager_o *)DataMasterBase__UpdatedEntity(
                                     this,
                                     *((DataEntityBase_o **)&v8->fields.baseWindow + v9),
                                     v6);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    LODWORD(basePanel) = v8->fields.basePanel;
    if ( (__int64)++v9 >= (int)basePanel )
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
    sub_B0D97C(this);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  MiniMessagePack_MiniMessagePacker_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int64_t Value; // x0
  const MethodInfo_298021C *v22; // x2
  const MethodInfo *v23; // x4
  int64_t v24; // x21
  int32_t v26; // w23
  __int64 v27; // x3
  DataEntityBase_array *List; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Nullable_long__o v35; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v36; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v37; // 0:x0.16
  System_Nullable_long__o v38; // 0:x0.16

  v36 = start;
  has_value = lenght.fields.has_value;
  v6 = start.fields.has_value;
  v35 = lenght;
  if ( (byte_421571B & 1) == 0 )
  {
    sub_B0D8A4(&byte___TypeInfo, objOrBytes);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Nullable_long__get_HasValue__, v10);
    sub_B0D8A4(&Method_System_Nullable_long__get_Value__, v11);
    byte_421571B = 1;
  }
  if ( !sub_B0D964(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v14 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v12, v13);
  MiniMessagePack_MiniMessagePacker___ctor(v14, 0LL);
  this->fields.seriazlier = v14;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( objOrBytes )
  {
    Value = sub_B0D964(objOrBytes, byte___TypeInfo);
    v24 = Value;
    if ( !Value )
    {
      sub_B0DC70(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr);
    }
  }
  else
  {
    v24 = 0LL;
  }
  if ( v6 )
  {
    *(_QWORD *)&v37.fields.has_value = Method_System_Nullable_long__get_Value__;
    v37.fields.value = (int64_t)&v36;
    Value = System_Nullable_long___get_Value(v37, v22);
    has_value = v35.fields.has_value;
    v26 = Value;
  }
  else
  {
    v26 = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v38.fields.has_value = Method_System_Nullable_long__get_Value__;
    v38.fields.value = (int64_t)&v35;
    LODWORD(v27) = System_Nullable_long___get_Value(v38, v22);
  }
  else
  {
    if ( !v24 )
      sub_B0D97C(Value);
    v27 = *(_QWORD *)(v24 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v24, v26, v27, v23);
  this->fields.seriazlier = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.seriazlier, 0LL, v29, v30, v31, v32, v33, v34);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x22
  MiniMessagePack_MiniMessagePacker_o *v19; // x26
  BattleServantConfConponent_o *p_seriazlier; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_298021C *v34; // x2
  const MethodInfo *v35; // x4
  int32_t Value; // w24
  __int64 v38; // x3
  int64_t List; // x0
  MethodInfo_298021C *v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  DataEntityBase_array *v46; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v48; // w24
  __int64 v49; // x3
  Il2CppObject *v50; // x1
  System_Nullable_long__o v51; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v52; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v53; // 0:x0.16
  System_Nullable_long__o v54; // 0:x0.16
  System_Nullable_long__o v55; // 0:x0.16
  System_Nullable_long__o v56; // 0:x0.16

  has_value = lenght.fields.has_value;
  v9 = start.fields.has_value;
  v52 = start;
  v51 = lenght;
  if ( (byte_421571C & 1) == 0 )
  {
    sub_B0D8A4(&byte___TypeInfo, objOrBytes);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_B0D8A4(&Method_System_Nullable_long__get_Value__, v14);
    byte_421571C = 1;
  }
  v15 = sub_B0D964(objOrBytes, byte___TypeInfo);
  if ( !v15 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v18 = v15;
  v19 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v16, v17);
  MiniMessagePack_MiniMessagePacker___ctor(v19, 0LL);
  this->fields.seriazlier = v19;
  p_seriazlier = (BattleServantConfConponent_o *)&this->fields.seriazlier;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_B0D97C(0LL);
  seriazlier->fields.threadSafeStringHash = work;
  sub_B0D840(
    (BattleServantConfConponent_o *)&seriazlier->fields.threadSafeStringHash,
    (System_Int32_array **)work,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( v9 )
  {
    *(_QWORD *)&v53.fields.has_value = Method_System_Nullable_long__get_Value__;
    v53.fields.value = (int64_t)&v52;
    has_value = v51.fields.has_value;
    Value = System_Nullable_long___get_Value(v53, v34);
  }
  else
  {
    Value = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v54.fields.has_value = Method_System_Nullable_long__get_Value__;
    v54.fields.value = (int64_t)&v51;
    LODWORD(v38) = System_Nullable_long___get_Value(v54, v34);
  }
  else
  {
    v38 = *(_QWORD *)(v18 + 24);
  }
  List = (int64_t)DataMasterBase__directGetList(this, (System_Byte_array *)v18, Value, v38, v35);
  v46 = (DataEntityBase_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v52.fields.has_value )
    {
      *(_QWORD *)&v55.fields.has_value = Method_System_Nullable_long__get_Value__;
      v55.fields.value = (int64_t)&v52;
      List = System_Nullable_long___get_Value(v55, v40);
      v48 = List;
    }
    else
    {
      v48 = 0;
    }
    if ( v51.fields.has_value )
    {
      *(_QWORD *)&v56.fields.has_value = Method_System_Nullable_long__get_Value__;
      v56.fields.value = (int64_t)&v51;
      List = System_Nullable_long___get_Value(v56, v40);
      LODWORD(v49) = List;
      if ( klass )
      {
LABEL_18:
        v50 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v18, v48, v49, 0LL);
        v46 = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                        this,
                                        v50,
                                        this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_19;
      }
    }
    else
    {
      v49 = *(_QWORD *)(v18 + 24);
      if ( klass )
        goto LABEL_18;
    }
    sub_B0D97C(List);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_B0D840(p_seriazlier, 0LL, (System_String_array **)v40, v41, v42, v43, v44, v45);
  return v46;
}


System_String_o *__fastcall DataMasterBase__createKey(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  DataMasterBase_o *v4; // x19
  __int64 v5; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v7; // w23
  BattleServantConfConponent_o *p_sb; // x19
  DataMasterBase_o *sb; // t1
  System_Text_StringBuilder_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  il2cpp_array_size_t v18; // w8
  unsigned __int64 v19; // x22
  __int64 v20; // x0

  v4 = this;
  if ( (byte_4215726 & 1) == 0 )
  {
    sub_B0D8A4(&System_Text_StringBuilder_TypeInfo, args);
    this = (DataMasterBase_o *)sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4215726 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v7 = max_length - 1;
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_o *)v4->fields.sb;
  p_sb = (BattleServantConfConponent_o *)&v4->fields.sb;
  this = sb;
  if ( !sb )
  {
    v11 = (System_Text_StringBuilder_o *)sub_B0D974(System_Text_StringBuilder_TypeInfo, args, method);
    System_Text_StringBuilder___ctor_42149428(v11, 128, 0LL);
    p_sb->klass = (BattleServantConfConponent_c *)v11;
    sub_B0D840(p_sb, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_o *)p_sb->klass;
  v18 = args->max_length;
  v19 = 0LL;
  do
  {
    if ( v19 >= v18 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42158880((System_Text_StringBuilder_o *)this, args->m_Items[v19], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42158644((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v18 = args->max_length;
    ++v19;
  }
  while ( (__int64)v19 < (int)v7 );
  if ( v7 >= v18 )
  {
LABEL_20:
    v20 = sub_B0D9A8(this);
    sub_B0D948(v20, 0LL);
  }
  if ( !this
    || (System_Text_StringBuilder__Append_42158880((System_Text_StringBuilder_o *)this, args->m_Items[v7], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(this);
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
  DataEntityBase_array *v17; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  System_FormatException_o *v26; // x20
  System_String_o *v27; // x0
  __int64 v28; // x0

  if ( (byte_421571A & 1) == 0 )
  {
    sub_B0D8A4(&DataIO_Runtime_Deserializer_TypeInfo, bytes);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v9);
    sub_B0D8A4(&System_IO_MemoryStream_TypeInfo, v10);
    byte_421571A = 1;
  }
  v11 = (System_IO_MemoryStream_o *)sub_B0D974(System_IO_MemoryStream_TypeInfo, bytes, *(_QWORD *)&start);
  System_IO_MemoryStream___ctor_44569492(v11, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v15 = (DataIO_Runtime_Deserializer_o *)sub_B0D974(DataIO_Runtime_Deserializer_TypeInfo, v13, v14);
  DataIO_Runtime_Deserializer___ctor(v15, seriazlier, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v17 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v15,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v11,
          0LL);
  if ( !v17 )
  {
    v23 = sub_B0D8A8(&System_FormatException_TypeInfo);
    v26 = (System_FormatException_o *)sub_B0D974(v23, v24, v25);
    v27 = (System_String_o *)sub_B0D8A8(&StringLiteral_19063/*"getList family cannot return null."*/);
    System_FormatException___ctor_43084444(v26, v27, 0LL);
    v28 = sub_B0D8A8(&Method_DataMasterBase_directGetList__);
    sub_B0D948(v26, v28);
  }
  if ( v11 )
  {
    klass = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v21 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v21 = sub_AA67A0(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v11, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_1714D50 *method)
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
  if ( (byte_4214373 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B0D8A4(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 key);
    byte_4214373 = 1;
  }
  v14 = 0LL;
  if ( !v5 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v5, 0LL)) == 0LL )
    sub_B0D97C(this);
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
    v10 = sub_AA67A0(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
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
      sub_AA65A4(_0_T);
    if ( v11 )
    {
      result = (Il2CppObject *)sub_B0D964(v11, _0_T);
      if ( result )
        return result;
      sub_B0DC70(v11);
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
  if ( (byte_4215725 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, method);
    byte_4215725 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


WarQuestSelectionEntity_array *__fastcall DataMasterBase__getEntitys_WarQuestSelectionEntity_(
        DataMasterBase_o *this,
        const MethodInfo_1714E7C *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  unsigned int Count; // w22
  Il2CppClass *_0_T; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x8
  WarQuestSelectionEntity_array *v9; // x21
  unsigned __int64 v10; // x22
  BattleServantConfConponent_o *v11; // x23
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v18; // x24
  Il2CppClass *_1_T; // x25
  System_Int32_array **v20; // x1
  __int64 v21; // x0
  Il2CppObject *v22; // x0
  System_Collections_Generic_IDictionary_TKey__TValue__o *v23; // x1
  const MethodInfo_1714FF8 *v24; // x2

  if ( (byte_4214374 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_4214374 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AA65A4(method->rgctx_data->_0_T__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B0D8BC(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v8 )
LABEL_19:
    sub_B0D97C(list);
  v9 = (WarQuestSelectionEntity_array *)list;
  v10 = 0LL;
  v11 = (BattleServantConfConponent_o *)&list[1];
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                           v8,
                           (const MethodInfo_2AB5718 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2AB57BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v9 )
      goto LABEL_19;
    v18 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_AA65A4(method->rgctx_data->_1_T);
    if ( v18 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B0D964(v18, _1_T);
      v20 = (System_Int32_array **)list;
      if ( !list )
      {
        v22 = (Il2CppObject *)sub_B0DC70(v18);
        return (WarQuestSelectionEntity_array *)Unity_Services_Core_Internal_DictionaryExtensions__MergeAllowOverride_object__int__object_(
                                                  v22,
                                                  v23,
                                                  v24);
      }
    }
    else
    {
      v20 = 0LL;
    }
    if ( v10 >= v9->max_length )
    {
      v21 = sub_B0D9A8(list);
      sub_B0D948(v21, 0LL);
    }
    v11->klass = (BattleServantConfConponent_c *)v20;
    sub_B0D840(v11, v20, v12, v13, v14, v15, v16, v17);
    v8 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v10;
    v11 = (BattleServantConfConponent_o *)((char *)v11 + 8);
    if ( !v8 )
      goto LABEL_19;
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
  __int64 v9; // x0
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0

  if ( (byte_4215727 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, args);
    byte_4215727 = 1;
  }
  Key = DataMasterBase__createKey(this, args, method);
  lookup = this->fields._lookup;
  v8 = Key;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, v6);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B0D97C(v9);
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v13)(
           lookup,
           v8,
           *(_QWORD *)(v13 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_26352736(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  __int64 v6; // x0
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 v10; // x0

  if ( (byte_4215728 & 1) == 0 )
  {
    sub_B0D8A4(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, key);
    byte_4215728 = 1;
  }
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, (const MethodInfo *)key);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B0D97C(v6);
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v8 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v8;
      p_offset += 4;
      if ( v8 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v10 = sub_AA67A0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v10)(
           lookup,
           key,
           *(_QWORD *)(v10 + 8));
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
  sub_B0D840(
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_42131AB & 1) == 0 )
  {
    sub_B0D8A4(&DataMasterBase___c_TypeInfo, v1);
    byte_42131AB = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(DataMasterBase___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataMasterBase___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(this);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
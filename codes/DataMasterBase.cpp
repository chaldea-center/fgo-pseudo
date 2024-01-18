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
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1

  if ( (byte_4188DFC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_OnListChanged__, *(_QWORD *)&kind);
    sub_B2C35C(&DataNameKind_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, v7);
    sub_B2C35C(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v8);
    byte_4188DFC = 1;
  }
  v9 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_B2C42C(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v9,
    (const MethodInfo_2CC82E0 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v9;
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._MasterName_k__BackingField,
    (System_Int32_array **)Name,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  list = this->fields.list;
  v25 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_B2C42C(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v25,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_B2C434(v26, v27);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v25,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_4188E06 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__, entity);
    byte_4188E06 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, entity);
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___Add(
    list,
    (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)entity,
    (const MethodInfo_2A0E5C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4188E00 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__, method);
    byte_4188E00 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_2A0E730 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  System_Xml_Schema_XmlSchemaObject_o *v34; // x21
  __int64 v35; // x1
  System_Xml_XmlQualifiedName_o *v36; // x22
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  unsigned __int64 v39; // x10
  int32_t *v40; // x11
  __int64 v41; // x0

  if ( (byte_4188E03 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    byte_4188E03 = 1;
  }
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v10,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v10;
  p_lookup = &this->fields._lookup;
  sub_B2C2F8((BattleServantConfConponent_o *)p_lookup, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v19 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_lookup - 1);
  if ( !v19 )
    sub_B2C434(0LL, v18);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v19,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v20);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        p_offset += 4;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v28 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v30 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_16:
      v31 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v27);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(
            Enumerator,
            *(_QWORD *)(v31 + 8));
    v34 = (System_Xml_Schema_XmlSchemaObject_o *)v32;
    if ( !v32 )
      sub_B2C434(0LL, v33);
    v36 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 376LL))(
                                             v32,
                                             *(_QWORD *)(*(_QWORD *)v32 + 384LL));
    if ( v36 )
    {
      if ( !*p_lookup )
        sub_B2C434(0LL, v35);
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
              v36,
              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_B2C434(0LL, v37);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
          v36,
          v34,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v38 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v39 = 0LL;
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      ++v39;
      v40 += 4;
      if ( v39 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_28:
    v41 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v27);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(Enumerator, *(_QWORD *)(v41 + 8));
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

  if ( (byte_4188E05 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4188E05 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_B2C434(Instance, v6);
  }
  basePanel = (int)Instance->fields.basePanel;
  v8 = Instance;
  if ( basePanel >= 1 )
  {
    for ( i = 0; i < basePanel; ++i )
    {
      if ( i >= (unsigned int)basePanel )
      {
        v13 = sub_B2C460(Instance);
        sub_B2C400(v13, 0LL);
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


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_1733D00 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields;
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_1733D38 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return (System_String_o *)*((_QWORD *)_0_DataMasterBase_Registration_TMaster->static_fields + 1);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_1733D70 *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( (byte_41872B5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_41872B5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B2C434(list, method);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_B2C41C(Item, _0_T);
    if ( result )
      return result;
    sub_B2C728(Item);
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
  System_NotImplementedException_o *v18; // x19
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x3
  __int64 v22; // x21
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  System_Collections_IEnumerator_c **v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *lookup; // x23
  System_Xml_XmlQualifiedName_o *v37; // x0
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x21
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v45; // x8
  unsigned __int64 v46; // x10
  int32_t *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  __int64 v51; // x21
  __int64 v52; // x8
  unsigned __int64 v53; // x10
  int *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x3
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  System_Collections_IEnumerator_c **v59; // x11
  __int64 v60; // x0
  __int64 v61; // x0
  System_Xml_Schema_XmlSchemaObject_o *v62; // x22
  __int64 v63; // x8
  __int64 v64; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v65; // x23
  System_Xml_XmlQualifiedName_o *v66; // x0
  int v67; // w24
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x21
  unsigned __int64 v71; // x10
  int *v72; // x11
  __int64 v73; // x0
  int v74[2]; // [xsp+0h] [xbp-60h]
  int v75; // [xsp+8h] [xbp-58h]

  v5 = this;
  if ( (byte_4188E0C & 1) == 0 )
  {
    sub_B2C35C(&DataEntityBase_TypeInfo, sender);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerable_TypeInfo, v9);
    this = (DataMasterBase_o *)sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4188E0C = 1;
  }
  v75 = 0;
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_B2C434(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v17 = sub_B2C360(&System_NotImplementedException_TypeInfo);
          v18 = (System_NotImplementedException_o *)sub_B2C42C(v17);
          System_NotImplementedException___ctor(v18, 0LL);
          v19 = sub_B2C360(&Method_DataMasterBase_OnListChanged__);
          sub_B2C400(v18, v19);
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
          p_method = sub_AC5258(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, method);
        }
        v22 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v22 )
          sub_B2C434(0LL, v20);
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
            v26 = sub_AC5258(v22, System_Collections_IEnumerator_TypeInfo, 0LL, v21);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v22;
          if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
          {
            v29 = 0LL;
            v30 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *(v30 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v29;
              v30 += 2;
              if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
                goto LABEL_29;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 1) + 312;
          }
          else
          {
LABEL_29:
            v31 = sub_AC5258(v22, System_Collections_IEnumerator_TypeInfo, 1LL, v27);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v22, *(_QWORD *)(v31 + 8));
          v33 = v32;
          if ( v32 )
          {
            v34 = *(_QWORD *)v32;
            v35 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) >= (unsigned int)v35
              && *(DataEntityBase_c **)(*(_QWORD *)(v34 + 200) + 8 * v35 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v34 + 376))(v32, *(_QWORD *)(v34 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v37 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 376LL))(
                                                       v33,
                                                       *(_QWORD *)(*(_QWORD *)v33 + 384LL));
              if ( !lookup )
                sub_B2C434(v37, v37);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                lookup,
                v37,
                (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v74[0] = 139;
        v75 = 1;
        v38 = sub_B2C41C(v22, System_IDisposable_TypeInfo);
        if ( v38 )
        {
          v39 = *(_QWORD *)v38;
          v40 = v38;
          if ( *(_WORD *)(*(_QWORD *)v38 + 298LL) )
          {
            v41 = 0LL;
            v42 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
            {
              ++v41;
              v42 += 4;
              if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v38 + 298LL) )
                goto LABEL_42;
            }
            v43 = v39 + 16LL * *v42 + 312;
          }
          else
          {
LABEL_42:
            v43 = sub_AC5258(v38, System_IDisposable_TypeInfo, 0LL, method);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
        }
        v75 = 0;
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v45 = newItems->klass;
        if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
        {
          v46 = 0LL;
          v47 = &v45->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v47 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v46;
            v47 += 4;
            if ( v46 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
              goto LABEL_51;
          }
          v48 = (__int64)&v45->vtable[*v47].method;
        }
        else
        {
LABEL_51:
          v48 = sub_AC5258(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL, method);
        }
        v51 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v48)(
                newItems,
                *(_QWORD *)(v48 + 8));
        if ( !v51 )
          sub_B2C434(0LL, v49);
        while ( 1 )
        {
          v52 = *(_QWORD *)v51;
          if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
          {
            v53 = 0LL;
            v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v53;
              v54 += 4;
              if ( v53 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
                goto LABEL_58;
            }
            v55 = v52 + 16LL * *v54 + 312;
          }
          else
          {
LABEL_58:
            v55 = sub_AC5258(v51, System_Collections_IEnumerator_TypeInfo, 0LL, v50);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
            break;
          v57 = *(_QWORD *)v51;
          if ( *(_WORD *)(*(_QWORD *)v51 + 298LL) )
          {
            v58 = 0LL;
            v59 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v57 + 176) + 8LL);
            while ( *(v59 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v58;
              v59 += 2;
              if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v51 + 298LL) )
                goto LABEL_65;
            }
            v60 = v57 + 16LL * (*(_DWORD *)v59 + 1) + 312;
          }
          else
          {
LABEL_65:
            v60 = sub_AC5258(v51, System_Collections_IEnumerator_TypeInfo, 1LL, v56);
          }
          v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v51, *(_QWORD *)(v60 + 8));
          v62 = (System_Xml_Schema_XmlSchemaObject_o *)v61;
          if ( v61 )
          {
            v63 = *(_QWORD *)v61;
            v64 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v61 + 300LL) >= (unsigned int)v64
              && *(DataEntityBase_c **)(*(_QWORD *)(v63 + 200) + 8 * v64 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v63 + 376))(v61, *(_QWORD *)(v63 + 384)) )
            {
              v65 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v66 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v62->klass->vtable._4_OnAdd.method)(
                                                       v62,
                                                       v62->klass->vtable._5_OnRemove.methodPtr);
              if ( !v65 )
                sub_B2C434(v66, v66);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                v65,
                v66,
                v62,
                (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v74[0] = 248;
        v67 = ++v75;
        v68 = sub_B2C41C(v51, System_IDisposable_TypeInfo);
        if ( v68 )
        {
          v69 = *(_QWORD *)v68;
          v70 = v68;
          if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
          {
            v71 = 0LL;
            v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
            {
              ++v71;
              v72 += 4;
              if ( v71 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
                goto LABEL_78;
            }
            v73 = v69 + 16LL * *v72 + 312;
          }
          else
          {
LABEL_78:
            v73 = sub_AC5258(v68, System_IDisposable_TypeInfo, 0LL, method);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
        }
        if ( v67 && v74[v67 - 1] == 248 )
        {
          v75 = v67 - 1;
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
        const MethodInfo_1733E54 *method)
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
    sub_AC505C(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields = kind;
  v12 = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(v12);
  static_fields = (char *)v12->static_fields;
  *((_QWORD *)static_fields + 1) = name;
  sub_B2C2F8(
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
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x22
  unsigned int Index_object; // w0

  if ( (byte_4188E07 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__, entity);
    sub_B2C35C(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___, v5);
    sub_B2C35C(&Method_System_Predicate_DataEntityBase___ctor__, v6);
    sub_B2C35C(&System_Predicate_DataEntityBase__TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__, v8);
    sub_B2C35C(&DataMasterBase___c__DisplayClass40_0_TypeInfo, v9);
    byte_4188E07 = 1;
  }
  v10 = sub_B2C42C(DataMasterBase___c__DisplayClass40_0_TypeInfo);
  DataMasterBase___c__DisplayClass40_0___ctor((DataMasterBase___c__DisplayClass40_0_o *)v10, 0LL);
  if ( !entity )
    goto LABEL_9;
  v11 = (System_Int32_array **)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                 entity,
                                 entity->klass[1]._1.name);
  if ( !v10 )
    goto LABEL_9;
  *(_QWORD *)(v10 + 16) = v11;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), v11, v13, v14, v15, v16, v17, v18);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v20,
    (Il2CppObject *)v10,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_DataEntityBase___ctor__);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v20,
                   (const MethodInfo_2096904 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v12 = Index_object;
    v11 = (System_Int32_array **)this->fields.list;
    if ( v11 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        (System_Collections_ObjectModel_Collection_T__o *)v11,
        v12,
        (const MethodInfo_2A0EDD0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return 1;
    }
LABEL_9:
    sub_B2C434(v11, v12);
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
  __int64 v13; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v15; // x6
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  bool result; // w0
  System_Nullable_long__o v18; // 0:x2.16
  System_Nullable_long__o v19; // 0:x4.16

  v5 = *(_QWORD *)&lenght.fields.has_value;
  value = lenght.fields.value;
  v7 = *(_QWORD *)&start.fields.has_value;
  v8 = start.fields.value;
  if ( (byte_4188E01 & 1) == 0 )
  {
    sub_B2C35C(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4188E01 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_6;
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v18.fields.value = v8;
  *(_QWORD *)&v18.fields.has_value = v7;
  v19.fields.value = value;
  *(_QWORD *)&v19.fields.has_value = v5;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetList(this, objOrBytes, v18, v19, v15);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v16,
    (const MethodInfo_20961D0 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_B2C434(Instance, v13);
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
  if ( (byte_4188E02 & 1) == 0 )
  {
    sub_B2C35C(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    byte_4188E02 = 1;
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
    (const MethodInfo_20961D0 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_1733EC4 *method)
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
  if ( (byte_41872B6 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B2C35C(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 result);
    byte_41872B6 = 1;
  }
  v26 = 0LL;
  if ( !v7 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v7, 0LL)) == 0LL )
    sub_B2C434(this, result);
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
    v13 = sub_AC5258(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v8);
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
    sub_AC505C(method->rgctx_data->_0_T);
  if ( v20 )
  {
    v22 = (ServantVoiceEntity_o *)sub_B2C41C(v20, _0_T);
    if ( !v22 )
    {
      sub_B2C728(v20);
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
    sub_AC505C(v24);
  if ( !v20 )
    goto LABEL_24;
  v25 = (System_Int32_array **)sub_B2C41C(v20, v24);
  if ( !v25 )
  {
    sub_B2C728(v20);
LABEL_24:
    v25 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)result, v25, v14, v15, v16, v17, v18, v19);
  return 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_1734050 *method)
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

  if ( (byte_41872B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, result);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    byte_41872B7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
LABEL_12:
    v17 = 0;
    *result = 0LL;
    return v17;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B2C434(list, result);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_T);
  if ( Item )
  {
    v16 = (Il2CppObject *)sub_B2C41C(Item, _0_T);
    if ( !v16 )
    {
      sub_B2C728(Item);
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
    sub_AC505C(v18);
  if ( !Item )
    goto LABEL_19;
  v19 = (System_Int32_array **)sub_B2C41C(Item, v18);
  if ( !v19 )
  {
    sub_B2C728(Item);
LABEL_19:
    v19 = 0LL;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)result, v19, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4188E04 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_4188E04 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_B2C434(Instance, v6);
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
      v12 = sub_B2C460(Instance);
      sub_B2C400(v12, 0LL);
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
    sub_B2C434(this, 0LL);
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
  MiniMessagePack_MiniMessagePacker_o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int64_t Value; // x0
  __int64 v20; // x1
  const MethodInfo_21524C0 *v21; // x2
  const MethodInfo *v22; // x4
  int64_t v23; // x21
  int32_t v25; // w23
  __int64 v26; // x3
  DataEntityBase_array *List; // x22
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Nullable_long__o v34; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v35; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v36; // 0:x0.16
  System_Nullable_long__o v37; // 0:x0.16

  v35 = start;
  has_value = lenght.fields.has_value;
  v6 = start.fields.has_value;
  v34 = lenght;
  if ( (byte_4188DFE & 1) == 0 )
  {
    sub_B2C35C(&byte___TypeInfo, objOrBytes);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    sub_B2C35C(&Method_System_Nullable_long__get_HasValue__, v10);
    sub_B2C35C(&Method_System_Nullable_long__get_Value__, v11);
    byte_4188DFE = 1;
  }
  if ( !sub_B2C41C(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v12 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v12, 0LL);
  this->fields.seriazlier = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( objOrBytes )
  {
    Value = sub_B2C41C(objOrBytes, byte___TypeInfo);
    v23 = Value;
    if ( !Value )
    {
      sub_B2C728(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr);
    }
  }
  else
  {
    v23 = 0LL;
  }
  if ( v6 )
  {
    *(_QWORD *)&v36.fields.has_value = Method_System_Nullable_long__get_Value__;
    v36.fields.value = (int64_t)&v35;
    Value = System_Nullable_long___get_Value(v36, v21);
    has_value = v34.fields.has_value;
    v25 = Value;
  }
  else
  {
    v25 = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v37.fields.has_value = Method_System_Nullable_long__get_Value__;
    v37.fields.value = (int64_t)&v34;
    LODWORD(v26) = System_Nullable_long___get_Value(v37, v21);
  }
  else
  {
    if ( !v23 )
      sub_B2C434(Value, v20);
    v26 = *(_QWORD *)(v23 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v23, v25, v26, v22);
  this->fields.seriazlier = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.seriazlier, 0LL, v28, v29, v30, v31, v32, v33);
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
  MiniMessagePack_MiniMessagePacker_o *v15; // x26
  BattleServantConfConponent_o *p_seriazlier; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  int64_t Value; // x0
  __int64 v32; // x1
  const MethodInfo_21524C0 *v33; // x2
  const MethodInfo *v34; // x4
  int64_t v35; // x22
  int32_t v37; // w24
  __int64 v38; // x3
  int64_t List; // x0
  __int64 v40; // x1
  MethodInfo_21524C0 *v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  DataEntityBase_array *v47; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v49; // w24
  __int64 v50; // x3
  Il2CppObject *v51; // x1
  System_Nullable_long__o v52; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_long__o v53; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_long__o v54; // 0:x0.16
  System_Nullable_long__o v55; // 0:x0.16
  System_Nullable_long__o v56; // 0:x0.16
  System_Nullable_long__o v57; // 0:x0.16

  v53 = start;
  has_value = lenght.fields.has_value;
  v9 = start.fields.has_value;
  v52 = lenght;
  if ( (byte_4188DFF & 1) == 0 )
  {
    sub_B2C35C(&byte___TypeInfo, objOrBytes);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B2C35C(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_B2C35C(&Method_System_Nullable_long__get_Value__, v14);
    byte_4188DFF = 1;
  }
  if ( !sub_B2C41C(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v15 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v15, 0LL);
  this->fields.seriazlier = v15;
  p_seriazlier = (BattleServantConfConponent_o *)&this->fields.seriazlier;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_B2C434(0LL, v23);
  seriazlier->fields.threadSafeStringHash = work;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&seriazlier->fields.threadSafeStringHash,
    (System_Int32_array **)work,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( objOrBytes )
  {
    Value = sub_B2C41C(objOrBytes, byte___TypeInfo);
    v35 = Value;
    if ( !Value )
    {
      sub_B2C728(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr);
    }
  }
  else
  {
    v35 = 0LL;
  }
  if ( v9 )
  {
    *(_QWORD *)&v54.fields.has_value = Method_System_Nullable_long__get_Value__;
    v54.fields.value = (int64_t)&v53;
    Value = System_Nullable_long___get_Value(v54, v33);
    has_value = v52.fields.has_value;
    v37 = Value;
  }
  else
  {
    v37 = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v55.fields.has_value = Method_System_Nullable_long__get_Value__;
    v55.fields.value = (int64_t)&v52;
    LODWORD(v38) = System_Nullable_long___get_Value(v55, v33);
  }
  else
  {
    if ( !v35 )
      sub_B2C434(Value, v32);
    v38 = *(_QWORD *)(v35 + 24);
  }
  List = (int64_t)DataMasterBase__directGetList(this, (System_Byte_array *)v35, v37, v38, v34);
  v47 = (DataEntityBase_array *)List;
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v53.fields.has_value )
    {
      *(_QWORD *)&v56.fields.has_value = Method_System_Nullable_long__get_Value__;
      v56.fields.value = (int64_t)&v53;
      List = System_Nullable_long___get_Value(v56, v41);
      v49 = List;
    }
    else
    {
      v49 = 0;
    }
    if ( v52.fields.has_value )
    {
      *(_QWORD *)&v57.fields.has_value = Method_System_Nullable_long__get_Value__;
      v57.fields.value = (int64_t)&v52;
      List = System_Nullable_long___get_Value(v57, v41);
      LODWORD(v50) = List;
      if ( klass )
      {
LABEL_23:
        v51 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v35, v49, v50, 0LL);
        v47 = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                        this,
                                        v51,
                                        this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_24;
      }
    }
    else
    {
      if ( !v35 )
        sub_B2C434(List, v40);
      v50 = *(_QWORD *)(v35 + 24);
      if ( klass )
        goto LABEL_23;
    }
    sub_B2C434(List, v40);
  }
LABEL_24:
  p_seriazlier->klass = 0LL;
  sub_B2C2F8(p_seriazlier, 0LL, (System_String_array **)v41, v42, v43, v44, v45, v46);
  return v47;
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
  if ( (byte_4188E09 & 1) == 0 )
  {
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, args);
    this = (DataMasterBase_o *)sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4188E09 = 1;
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
    v11 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42402728(v11, 128, 0LL);
    p_sb->klass = (BattleServantConfConponent_c *)v11;
    sub_B2C2F8(p_sb, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
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
    System_Text_StringBuilder__Append_42412180((System_Text_StringBuilder_o *)this, args->m_Items[v19], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42411944((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v18 = args->max_length;
    ++v19;
  }
  while ( (__int64)v19 < (int)v7 );
  if ( v7 >= v18 )
  {
LABEL_20:
    v20 = sub_B2C460(this);
    sub_B2C400(v20, 0LL);
  }
  if ( !this
    || (System_Text_StringBuilder__Append_42412180((System_Text_StringBuilder_o *)this, args->m_Items[v7], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_B2C434(this, args);
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
  __int64 v16; // x3
  DataEntityBase_array *v17; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 v21; // x0
  __int64 v23; // x0
  System_FormatException_o *v24; // x20
  System_String_o *v25; // x0
  __int64 v26; // x0

  if ( (byte_4188DFD & 1) == 0 )
  {
    sub_B2C35C(&DataIO_Runtime_Deserializer_TypeInfo, bytes);
    sub_B2C35C(&System_IDisposable_TypeInfo, v9);
    sub_B2C35C(&System_IO_MemoryStream_TypeInfo, v10);
    byte_4188DFD = 1;
  }
  v11 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45022308(v11, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v13 = (DataIO_Runtime_Deserializer_o *)sub_B2C42C(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v13, seriazlier, 0LL);
  if ( !v13 )
    sub_B2C434(v14, v15);
  v17 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v13,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v11,
          0LL);
  if ( !v17 )
  {
    v23 = sub_B2C360(&System_FormatException_TypeInfo);
    v24 = (System_FormatException_o *)sub_B2C42C(v23);
    v25 = (System_String_o *)sub_B2C360(&StringLiteral_19005/*"getList family cannot return null."*/);
    System_FormatException___ctor_43478568(v24, v25, 0LL);
    v26 = sub_B2C360(&Method_DataMasterBase_directGetList__);
    sub_B2C400(v24, v26);
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
      v21 = sub_AC5258(v11, System_IDisposable_TypeInfo, 0LL, v16);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v21)(v11, *(_QWORD *)(v21 + 8));
  }
  return v17;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_1734194 *method)
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
  if ( (byte_41872B8 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B2C35C(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 key);
    byte_41872B8 = 1;
  }
  v15 = 0LL;
  if ( !v5 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v5, 0LL)) == 0LL )
    sub_B2C434(this, key);
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
    v11 = sub_AC5258(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v6);
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
      sub_AC505C(_0_T);
    if ( v12 )
    {
      result = (Il2CppObject *)sub_B2C41C(v12, _0_T);
      if ( result )
        return result;
      sub_B2C728(v12);
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
  if ( (byte_4188E08 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, method);
    byte_4188E08 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


WarQuestSelectionEntity_array *__fastcall DataMasterBase__getEntitys_WarQuestSelectionEntity_(
        DataMasterBase_o *this,
        const MethodInfo_17342C0 *method)
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
  const MethodInfo_173443C *v24; // x2

  if ( (byte_41872B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_41872B9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_0_T__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B2C374(_0_T, Count);
  v8 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v8 )
LABEL_19:
    sub_B2C434(list, method);
  v9 = (WarQuestSelectionEntity_array *)list;
  v10 = 0LL;
  v11 = (BattleServantConfConponent_o *)&list[1];
  while ( (__int64)v10 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                           v8,
                           (const MethodInfo_2A0E2E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v10,
                                                                                         (const MethodInfo_2A0E38C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v9 )
      goto LABEL_19;
    v18 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_AC505C(method->rgctx_data->_1_T);
    if ( v18 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B2C41C(v18, _1_T);
      v20 = (System_Int32_array **)list;
      if ( !list )
      {
        v22 = (Il2CppObject *)sub_B2C728(v18);
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
      v21 = sub_B2C460(list);
      sub_B2C400(v21, 0LL);
    }
    v11->klass = (BattleServantConfConponent_c *)v20;
    sub_B2C2F8(v11, v20, v12, v13, v14, v15, v16, v17);
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
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v13; // x10
  int32_t *p_offset; // x11
  __int64 v15; // x0

  if ( (byte_4188E0A & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, args);
    byte_4188E0A = 1;
  }
  Key = DataMasterBase__createKey(this, args, method);
  lookup = this->fields._lookup;
  v9 = Key;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, v6);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B2C434(v10, v11);
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
    v15 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v7);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v15)(
           lookup,
           v9,
           *(_QWORD *)(v15 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_27231120(
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

  if ( (byte_4188E0B & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, key);
    byte_4188E0B = 1;
  }
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, (const MethodInfo *)key);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B2C434(v7, v8);
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
    v12 = sub_AC5258(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v3);
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
  sub_B2C2F8(
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41864C2 & 1) == 0 )
  {
    sub_B2C35C(&DataMasterBase___c_TypeInfo, v1);
    byte_41864C2 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(DataMasterBase___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataMasterBase___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
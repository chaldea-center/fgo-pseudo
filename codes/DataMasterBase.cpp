void __fastcall DataMasterBase___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x1
  struct System_String_o *Name; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1

  if ( (byte_42E8276 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_OnListChanged__, kind, (_DWORD)method, v3);
    sub_B5D5C4(&DataNameKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v15, v16, v17);
    byte_42E8276 = 1;
  }
  v18 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_B5D694(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v18,
    (const MethodInfo_2B88A40 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.list,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, v25);
  this->fields._MasterName_k__BackingField = Name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._MasterName_k__BackingField,
    (System_Int32_array **)Name,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  list = this->fields.list;
  v34 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_B5D694(System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v34,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_B5D69C(v35, v36);
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v34,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42E8280 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__,
      (_DWORD)entity,
      (_DWORD)method,
      v3);
    byte_42E8280 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, entity);
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___Add(
    list,
    (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)entity,
    (const MethodInfo_2BB889C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_42E827A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__, (_DWORD)method, v2, v3);
    byte_42E827A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_2BB8A0C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
}


void __fastcall DataMasterBase__CreateLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v26; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v40; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v43; // x3
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  unsigned __int64 v45; // x10
  int32_t *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  System_Xml_Schema_XmlSchemaObject_o *v50; // x21
  __int64 v51; // x1
  System_Xml_XmlQualifiedName_o *v52; // x22
  __int64 v53; // x1
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0

  if ( (byte_42E827D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v23, v24, v25);
    byte_42E827D = 1;
  }
  v26 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v26,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v26;
  p_lookup = &this->fields._lookup;
  sub_B5D560((BattleServantConfConponent_o *)p_lookup, (System_Int32_array **)v26, v28, v29, v30, v31, v32, v33);
  v35 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_lookup - 1);
  if ( !v35 )
    sub_B5D69C(0LL, v34);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v35,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v36);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v40 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v40;
        p_offset += 4;
        if ( v40 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v37);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_16:
      v47 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v43);
    }
    v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
            Enumerator,
            *(_QWORD *)(v47 + 8));
    v50 = (System_Xml_Schema_XmlSchemaObject_o *)v48;
    if ( !v48 )
      sub_B5D69C(0LL, v49);
    v52 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 376LL))(
                                             v48,
                                             *(_QWORD *)(*(_QWORD *)v48 + 384LL));
    if ( v52 )
    {
      if ( !*p_lookup )
        sub_B5D69C(0LL, v51);
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
              v52,
              (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_B5D69C(0LL, v53);
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
          v52,
          v50,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v54 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v55 = 0LL;
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      ++v55;
      v56 += 4;
      if ( v55 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_28:
    v57 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v43);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
}


bool __fastcall DataMasterBase__Deleted(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  int basePanel; // w8
  WebViewManager_o *v9; // x20
  int i; // w22
  DataEntityBase_o *v11; // x21
  __int64 v12; // x0
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  if ( (byte_42E827F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E827F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
LABEL_15:
    sub_B5D69C(Instance, v7);
  }
  basePanel = (int)Instance->fields.basePanel;
  v9 = Instance;
  if ( basePanel >= 1 )
  {
    for ( i = 0; i < basePanel; ++i )
    {
      if ( i >= (unsigned int)basePanel )
      {
        v14 = sub_B5D6C8(Instance);
        sub_B5D668(v14, 0LL);
      }
      v11 = (DataEntityBase_o *)*((_QWORD *)&v9->fields.baseWindow + i);
      if ( !v11 )
        goto LABEL_15;
      v12 = ((__int64 (__fastcall *)(DataEntityBase_o *, const char *))v11->klass[1]._1.gc_desc)(
              v11,
              v11->klass[1]._1.name);
      if ( !v12 )
        return v12;
      Instance = (WebViewManager_o *)DataMasterBase__RemoveEntity(this, v11, v13);
      basePanel = (int)v9->fields.basePanel;
    }
    if ( ((unsigned __int8)Instance & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v12) = 1;
  return v12;
}


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_1AE4560 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields;
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_1AE4598 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return (System_String_o *)*((_QWORD *)_0_DataMasterBase_Registration_TMaster->static_fields + 1);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_1AE45D0 *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( (byte_42EA2E1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    byte_42EA2E1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_B5D69C(list, method);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_B5D684(Item, _0_T);
    if ( result )
      return result;
    sub_B5D990(Item);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  unsigned int action; // w8
  struct System_Collections_IList_o *oldItems; // x21
  System_Collections_IList_c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v27; // x0
  System_NotImplementedException_o *v28; // x19
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x3
  __int64 v32; // x21
  __int64 v33; // x8
  unsigned __int64 v34; // x10
  int *v35; // x11
  __int64 v36; // x0
  __int64 v37; // x3
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  System_Collections_IEnumerator_c **v40; // x11
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x22
  __int64 v44; // x8
  __int64 v45; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *lookup; // x23
  System_Xml_XmlQualifiedName_o *v47; // x0
  __int64 v48; // x0
  __int64 v49; // x8
  __int64 v50; // x21
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  struct System_Collections_IList_o *newItems; // x21
  System_Collections_IList_c *v55; // x8
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  __int64 v61; // x21
  __int64 v62; // x8
  unsigned __int64 v63; // x10
  int *v64; // x11
  __int64 v65; // x0
  __int64 v66; // x3
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  System_Collections_IEnumerator_c **v69; // x11
  __int64 v70; // x0
  __int64 v71; // x0
  System_Xml_Schema_XmlSchemaObject_o *v72; // x22
  __int64 v73; // x8
  __int64 v74; // x10
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v75; // x23
  System_Xml_XmlQualifiedName_o *v76; // x0
  int v77; // w24
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x21
  unsigned __int64 v81; // x10
  int *v82; // x11
  __int64 v83; // x0
  int v84[2]; // [xsp+0h] [xbp-60h]
  int v85; // [xsp+8h] [xbp-58h]

  v5 = this;
  if ( (byte_42E8286 & 1) == 0 )
  {
    sub_B5D5C4(&DataEntityBase_TypeInfo, (_DWORD)sender, (_DWORD)e, method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_IEnumerable_TypeInfo, v15, v16, v17);
    this = (DataMasterBase_o *)sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    byte_42E8286 = 1;
  }
  v85 = 0;
  if ( v5->fields._lookup )
  {
    if ( !e )
      sub_B5D69C(this, sender);
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v27 = sub_B5D5C8(&System_NotImplementedException_TypeInfo);
          v28 = (System_NotImplementedException_o *)sub_B5D694(v27);
          System_NotImplementedException___ctor(v28, 0LL);
          v29 = sub_B5D5C8(&Method_DataMasterBase_OnListChanged__);
          sub_B5D668(v28, v29);
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
          v24 = 0LL;
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)p_offset - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v24;
            p_offset += 4;
            if ( v24 >= *(unsigned __int16 *)&oldItems->klass->_2.bitflags1 )
              goto LABEL_11;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_11:
          p_method = sub_AF54C0(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL, method);
        }
        v32 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v32 )
          sub_B5D69C(0LL, v30);
        while ( 1 )
        {
          v33 = *(_QWORD *)v32;
          if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
          {
            v34 = 0LL;
            v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
                goto LABEL_22;
            }
            v36 = v33 + 16LL * *v35 + 312;
          }
          else
          {
LABEL_22:
            v36 = sub_AF54C0(v32, System_Collections_IEnumerator_TypeInfo, 0LL, v31);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
            break;
          v38 = *(_QWORD *)v32;
          if ( *(_WORD *)(*(_QWORD *)v32 + 298LL) )
          {
            v39 = 0LL;
            v40 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v38 + 176) + 8LL);
            while ( *(v40 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v39;
              v40 += 2;
              if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v32 + 298LL) )
                goto LABEL_29;
            }
            v41 = v38 + 16LL * (*(_DWORD *)v40 + 1) + 312;
          }
          else
          {
LABEL_29:
            v41 = sub_AF54C0(v32, System_Collections_IEnumerator_TypeInfo, 1LL, v37);
          }
          v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v32, *(_QWORD *)(v41 + 8));
          v43 = v42;
          if ( v42 )
          {
            v44 = *(_QWORD *)v42;
            v45 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v42 + 300LL) >= (unsigned int)v45
              && *(DataEntityBase_c **)(*(_QWORD *)(v44 + 200) + 8 * v45 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v44 + 376))(v42, *(_QWORD *)(v44 + 384)) )
            {
              lookup = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v47 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 376LL))(
                                                       v43,
                                                       *(_QWORD *)(*(_QWORD *)v43 + 384LL));
              if ( !lookup )
                sub_B5D69C(v47, v47);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                lookup,
                v47,
                (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v84[0] = 139;
        v85 = 1;
        v48 = sub_B5D684(v32, System_IDisposable_TypeInfo);
        if ( v48 )
        {
          v49 = *(_QWORD *)v48;
          v50 = v48;
          if ( *(_WORD *)(*(_QWORD *)v48 + 298LL) )
          {
            v51 = 0LL;
            v52 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
            {
              ++v51;
              v52 += 4;
              if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v48 + 298LL) )
                goto LABEL_42;
            }
            v53 = v49 + 16LL * *v52 + 312;
          }
          else
          {
LABEL_42:
            v53 = sub_AF54C0(v48, System_IDisposable_TypeInfo, 0LL, method);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v53)(v50, *(_QWORD *)(v53 + 8));
        }
        v85 = 0;
      }
      newItems = e->fields._newItems;
      if ( newItems )
      {
        v55 = newItems->klass;
        if ( *(_WORD *)&newItems->klass->_2.bitflags1 )
        {
          v56 = 0LL;
          v57 = &v55->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerable_c **)v57 - 1) != System_Collections_IEnumerable_TypeInfo )
          {
            ++v56;
            v57 += 4;
            if ( v56 >= *(unsigned __int16 *)&newItems->klass->_2.bitflags1 )
              goto LABEL_51;
          }
          v58 = (__int64)&v55->vtable[*v57].method;
        }
        else
        {
LABEL_51:
          v58 = sub_AF54C0(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL, method);
        }
        v61 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v58)(
                newItems,
                *(_QWORD *)(v58 + 8));
        if ( !v61 )
          sub_B5D69C(0LL, v59);
        while ( 1 )
        {
          v62 = *(_QWORD *)v61;
          if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
          {
            v63 = 0LL;
            v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v64 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v63;
              v64 += 4;
              if ( v63 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
                goto LABEL_58;
            }
            v65 = v62 + 16LL * *v64 + 312;
          }
          else
          {
LABEL_58:
            v65 = sub_AF54C0(v61, System_Collections_IEnumerator_TypeInfo, 0LL, v60);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v61, *(_QWORD *)(v65 + 8)) & 1) == 0 )
            break;
          v67 = *(_QWORD *)v61;
          if ( *(_WORD *)(*(_QWORD *)v61 + 298LL) )
          {
            v68 = 0LL;
            v69 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v67 + 176) + 8LL);
            while ( *(v69 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v68;
              v69 += 2;
              if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v61 + 298LL) )
                goto LABEL_65;
            }
            v70 = v67 + 16LL * (*(_DWORD *)v69 + 1) + 312;
          }
          else
          {
LABEL_65:
            v70 = sub_AF54C0(v61, System_Collections_IEnumerator_TypeInfo, 1LL, v66);
          }
          v71 = (*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v61, *(_QWORD *)(v70 + 8));
          v72 = (System_Xml_Schema_XmlSchemaObject_o *)v71;
          if ( v71 )
          {
            v73 = *(_QWORD *)v71;
            v74 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v71 + 300LL) >= (unsigned int)v74
              && *(DataEntityBase_c **)(*(_QWORD *)(v73 + 200) + 8 * v74 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v73 + 376))(v71, *(_QWORD *)(v73 + 384)) )
            {
              v75 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields._lookup;
              v76 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v72->klass->vtable._4_OnAdd.method)(
                                                       v72,
                                                       v72->klass->vtable._5_OnRemove.methodPtr);
              if ( !v75 )
                sub_B5D69C(v76, v76);
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                v75,
                v76,
                v72,
                (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v84[0] = 248;
        v77 = ++v85;
        v78 = sub_B5D684(v61, System_IDisposable_TypeInfo);
        if ( v78 )
        {
          v79 = *(_QWORD *)v78;
          v80 = v78;
          if ( *(_WORD *)(*(_QWORD *)v78 + 298LL) )
          {
            v81 = 0LL;
            v82 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
            {
              ++v81;
              v82 += 4;
              if ( v81 >= *(unsigned __int16 *)(*(_QWORD *)v78 + 298LL) )
                goto LABEL_78;
            }
            v83 = v79 + 16LL * *v82 + 312;
          }
          else
          {
LABEL_78:
            v83 = sub_AF54C0(v78, System_IDisposable_TypeInfo, 0LL, method);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v83)(v80, *(_QWORD *)(v83 + 8));
        }
        if ( v77 && v84[v77 - 1] == 248 )
        {
          v85 = v77 - 1;
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
        const MethodInfo_1AE46B4 *method)
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
    sub_AF52C4(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields = kind;
  v12 = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(v12);
  static_fields = (char *)v12->static_fields;
  *((_QWORD *)static_fields + 1) = name;
  sub_B5D560(
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  System_Int32_array **v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v31; // x22
  unsigned int Index_object; // w0

  if ( (byte_42E8281 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__,
      (_DWORD)entity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Predicate_DataEntityBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Predicate_DataEntityBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__, v15, v16, v17);
    sub_B5D5C4(&DataMasterBase___c__DisplayClass40_0_TypeInfo, v18, v19, v20);
    byte_42E8281 = 1;
  }
  v21 = sub_B5D694(DataMasterBase___c__DisplayClass40_0_TypeInfo);
  DataMasterBase___c__DisplayClass40_0___ctor((DataMasterBase___c__DisplayClass40_0_o *)v21, 0LL);
  if ( !entity )
    goto LABEL_9;
  v22 = (System_Int32_array **)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                 entity,
                                 entity->klass[1]._1.name);
  if ( !v21 )
    goto LABEL_9;
  *(_QWORD *)(v21 + 16) = v22;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), v22, v24, v25, v26, v27, v28, v29);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v31 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DataEntityBase__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_DataEntityBase___ctor__);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v31,
                   (const MethodInfo_1E66DE8 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v23 = Index_object;
    v22 = (System_Int32_array **)this->fields.list;
    if ( v22 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        (System_Collections_ObjectModel_Collection_T__o *)v22,
        v23,
        (const MethodInfo_2BB90AC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return 1;
    }
LABEL_9:
    sub_B5D69C(v22, v23);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v17; // x6
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  bool result; // w0
  System_Nullable_long__o v20; // 0:x2.16
  System_Nullable_long__o v21; // 0:x4.16

  v5 = *(_QWORD *)&lenght.fields.has_value;
  value = lenght.fields.value;
  v7 = *(_QWORD *)&start.fields.has_value;
  v8 = start.fields.value;
  if ( (byte_42E827B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ObservableCollectionExtensions_AddRange_DataEntityBase___,
      (_DWORD)objOrBytes,
      start.fields.value,
      *(_QWORD *)&start.fields.has_value);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42E827B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_6;
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v20.fields.value = v8;
  *(_QWORD *)&v20.fields.has_value = v7;
  v21.fields.value = value;
  *(_QWORD *)&v21.fields.has_value = v5;
  v18 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetList(this, objOrBytes, v20, v21, v17);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v18,
    (const MethodInfo_1E66670 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
LABEL_6:
    sub_B5D69C(Instance, v15);
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
  if ( (byte_42E827C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_ObservableCollectionExtensions_AddRange_DataEntityBase___,
      (_DWORD)objOrBytes,
      (_DWORD)context,
      start.fields.value);
    byte_42E827C = 1;
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
    (const MethodInfo_1E66670 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_1AE4724 *method)
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
  if ( (byte_42EA2E2 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B5D5C4(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 (_DWORD)result,
                                 (_DWORD)key,
                                 method);
    byte_42EA2E2 = 1;
  }
  v26 = 0LL;
  if ( !v7 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v7, 0LL)) == 0LL )
    sub_B5D69C(this, result);
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
    v13 = sub_AF54C0(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v8);
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
    sub_AF52C4(method->rgctx_data->_0_T);
  if ( v20 )
  {
    v22 = (ServantVoiceEntity_o *)sub_B5D684(v20, _0_T);
    if ( !v22 )
    {
      sub_B5D990(v20);
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
    sub_AF52C4(v24);
  if ( !v20 )
    goto LABEL_24;
  v25 = (System_Int32_array **)sub_B5D684(v20, v24);
  if ( !v25 )
  {
    sub_B5D990(v20);
LABEL_24:
    v25 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)result, v25, v14, v15, v16, v17, v18, v19);
  return 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_1AE48B0 *method)
{
  __int64 v3; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x21
  Il2CppClass *_0_T; // x22
  Il2CppObject *v19; // x0
  bool v20; // w0
  Il2CppClass *v21; // x20
  System_Int32_array **v22; // x1

  if ( (byte_42EA2E3 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      (_DWORD)result,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8, v9);
    byte_42EA2E3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         list,
         (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
LABEL_12:
    v20 = 0;
    *result = 0LL;
    return v20;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
LABEL_21:
    sub_B5D69C(list, result);
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           list,
           0,
           (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_T);
  if ( Item )
  {
    v19 = (Il2CppObject *)sub_B5D684(Item, _0_T);
    if ( !v19 )
    {
      sub_B5D990(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v19 = 0LL;
  }
  *result = v19;
  v21 = method->rgctx_data->_0_T;
  if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(v21);
  if ( !Item )
    goto LABEL_19;
  v22 = (System_Int32_array **)sub_B5D684(Item, v21);
  if ( !v22 )
  {
    sub_B5D990(Item);
LABEL_19:
    v22 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)result, v22, v11, v12, v13, v14, v15, v16);
  return 1;
}


bool __fastcall DataMasterBase__Updated(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v3; // x3
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UIPanel_o *basePanel; // x8
  WebViewManager_o *v10; // x20
  unsigned __int64 v11; // x21
  __int64 v13; // x0

  if ( (byte_42E827E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E827E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (WebViewManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         obj,
                                         this->klass->vtable._5_unknown.methodPtr)) == 0LL )
  {
    sub_B5D69C(Instance, v7);
  }
  basePanel = Instance->fields.basePanel;
  v10 = Instance;
  if ( (int)basePanel < 1 )
    return 1;
  v11 = 0LL;
  while ( 1 )
  {
    if ( v11 >= (unsigned int)basePanel )
    {
      v13 = sub_B5D6C8(Instance);
      sub_B5D668(v13, 0LL);
    }
    Instance = (WebViewManager_o *)DataMasterBase__UpdatedEntity(
                                     this,
                                     *((DataEntityBase_o **)&v10->fields.baseWindow + v11),
                                     v8);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      break;
    LODWORD(basePanel) = v10->fields.basePanel;
    if ( (__int64)++v11 >= (int)basePanel )
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
    sub_B5D69C(this, 0LL);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  MiniMessagePack_MiniMessagePacker_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int64_t Value; // x0
  __int64 v26; // x1
  const MethodInfo_234BB94 *v27; // x2
  const MethodInfo *v28; // x4
  int64_t v29; // x21
  int32_t v31; // w23
  __int64 v32; // x3
  DataEntityBase_array *List; // x22
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Nullable_long__o v40; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v41; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v42; // 0:x0.16
  System_Nullable_long__o v43; // 0:x0.16

  v41 = start;
  has_value = lenght.fields.has_value;
  v6 = start.fields.has_value;
  v40 = lenght;
  if ( (byte_42E8278 & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)objOrBytes, start.fields.value, *(_QWORD *)&start.fields.has_value);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Nullable_long__get_HasValue__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_long__get_Value__, v15, v16, v17);
    byte_42E8278 = 1;
  }
  if ( !sub_B5D684(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v18 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v18, 0LL);
  this->fields.seriazlier = v18;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( objOrBytes )
  {
    Value = sub_B5D684(objOrBytes, byte___TypeInfo);
    v29 = Value;
    if ( !Value )
    {
      sub_B5D990(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr);
    }
  }
  else
  {
    v29 = 0LL;
  }
  if ( v6 )
  {
    *(_QWORD *)&v42.fields.has_value = Method_System_Nullable_long__get_Value__;
    v42.fields.value = (int64_t)&v41;
    Value = System_Nullable_long___get_Value(v42, v27);
    has_value = v40.fields.has_value;
    v31 = Value;
  }
  else
  {
    v31 = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v43.fields.has_value = Method_System_Nullable_long__get_Value__;
    v43.fields.value = (int64_t)&v40;
    LODWORD(v32) = System_Nullable_long___get_Value(v43, v27);
  }
  else
  {
    if ( !v29 )
      sub_B5D69C(Value, v26);
    v32 = *(_QWORD *)(v29 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v29, v31, v32, v28);
  this->fields.seriazlier = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.seriazlier, 0LL, v34, v35, v36, v37, v38, v39);
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x0
  __int64 v22; // x22
  MiniMessagePack_MiniMessagePacker_o *v23; // x26
  BattleServantConfConponent_o *p_seriazlier; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x0
  const MethodInfo_234BB94 *v39; // x2
  const MethodInfo *v40; // x4
  int32_t Value; // w24
  __int64 v43; // x3
  int64_t List; // x0
  __int64 v45; // x1
  MethodInfo_234BB94 *v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  DataEntityBase_array *v52; // x23
  MiniMessagePack_MiniMessagePacker_o *klass; // x23
  int32_t v54; // w24
  __int64 v55; // x3
  Il2CppObject *v56; // x1
  System_Nullable_long__o v57; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v58; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v59; // 0:x0.16
  System_Nullable_long__o v60; // 0:x0.16
  System_Nullable_long__o v61; // 0:x0.16
  System_Nullable_long__o v62; // 0:x0.16

  has_value = lenght.fields.has_value;
  v9 = start.fields.has_value;
  v58 = start;
  v57 = lenght;
  if ( (byte_42E8279 & 1) == 0 )
  {
    sub_B5D5C4(&byte___TypeInfo, (_DWORD)objOrBytes, (_DWORD)context, start.fields.value);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_long__get_HasValue__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Nullable_long__get_Value__, v18, v19, v20);
    byte_42E8279 = 1;
  }
  v21 = sub_B5D684(objOrBytes, byte___TypeInfo);
  if ( !v21 )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v22 = v21;
  v23 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v23, 0LL);
  this->fields.seriazlier = v23;
  p_seriazlier = (BattleServantConfConponent_o *)&this->fields.seriazlier;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v23,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  seriazlier = this->fields.seriazlier;
  if ( !seriazlier )
    sub_B5D69C(0LL, v31);
  seriazlier->fields.threadSafeStringHash = work;
  sub_B5D560(
    (BattleServantConfConponent_o *)&seriazlier->fields.threadSafeStringHash,
    (System_Int32_array **)work,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( v9 )
  {
    *(_QWORD *)&v59.fields.has_value = Method_System_Nullable_long__get_Value__;
    v59.fields.value = (int64_t)&v58;
    has_value = v57.fields.has_value;
    Value = System_Nullable_long___get_Value(v59, v39);
  }
  else
  {
    Value = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v60.fields.has_value = Method_System_Nullable_long__get_Value__;
    v60.fields.value = (int64_t)&v57;
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
    if ( v58.fields.has_value )
    {
      *(_QWORD *)&v61.fields.has_value = Method_System_Nullable_long__get_Value__;
      v61.fields.value = (int64_t)&v58;
      List = System_Nullable_long___get_Value(v61, v46);
      v54 = List;
    }
    else
    {
      v54 = 0;
    }
    if ( v57.fields.has_value )
    {
      *(_QWORD *)&v62.fields.has_value = Method_System_Nullable_long__get_Value__;
      v62.fields.value = (int64_t)&v57;
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
    sub_B5D69C(List, v45);
  }
LABEL_19:
  p_seriazlier->klass = 0LL;
  sub_B5D560(p_seriazlier, 0LL, (System_String_array **)v46, v47, v48, v49, v50, v51);
  return v52;
}


System_String_o *__fastcall DataMasterBase__createKey(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataMasterBase_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  signed int max_length; // w8
  il2cpp_array_size_t v10; // w23
  BattleServantConfConponent_o *p_sb; // x19
  DataMasterBase_o *sb; // t1
  System_Text_StringBuilder_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  il2cpp_array_size_t v21; // w8
  unsigned __int64 v22; // x22
  __int64 v23; // x0

  v5 = this;
  if ( (byte_42E8283 & 1) == 0 )
  {
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, (_DWORD)args, (_DWORD)method, v3);
    this = (DataMasterBase_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E8283 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v10 = max_length - 1;
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1/*""*/;
  sb = (DataMasterBase_o *)v5->fields.sb;
  p_sb = (BattleServantConfConponent_o *)&v5->fields.sb;
  this = sb;
  if ( !sb )
  {
    v14 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42947772(v14, 128, 0LL);
    p_sb->klass = (BattleServantConfConponent_c *)v14;
    sub_B5D560(p_sb, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length((System_Text_StringBuilder_o *)this, 0, 0LL);
  this = (DataMasterBase_o *)p_sb->klass;
  v21 = args->max_length;
  v22 = 0LL;
  do
  {
    if ( v22 >= v21 )
      goto LABEL_20;
    if ( !this )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42957224((System_Text_StringBuilder_o *)this, args->m_Items[v22], 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_42956988((System_Text_StringBuilder_o *)this, 0x3Au, 0LL);
    this = (DataMasterBase_o *)p_sb->klass;
    v21 = args->max_length;
    ++v22;
  }
  while ( (__int64)v22 < (int)v10 );
  if ( v10 >= v21 )
  {
LABEL_20:
    v23 = sub_B5D6C8(this);
    sub_B5D668(v23, 0LL);
  }
  if ( !this
    || (System_Text_StringBuilder__Append_42957224((System_Text_StringBuilder_o *)this, args->m_Items[v10], 0LL),
        (this = (DataMasterBase_o *)p_sb->klass) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(this, args);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_IO_MemoryStream_o *v15; // x19
  MiniMessagePack_MiniMessagePacker_o *seriazlier; // x22
  DataIO_Runtime_Deserializer_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x3
  DataEntityBase_array *v21; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  __int64 v27; // x0
  System_FormatException_o *v28; // x20
  System_String_o *v29; // x0
  __int64 v30; // x0

  if ( (byte_42E8277 & 1) == 0 )
  {
    sub_B5D5C4(&DataIO_Runtime_Deserializer_TypeInfo, (_DWORD)bytes, start, *(_QWORD *)&length);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v12, v13, v14);
    byte_42E8277 = 1;
  }
  v15 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor_45159436(v15, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v17 = (DataIO_Runtime_Deserializer_o *)sub_B5D694(DataIO_Runtime_Deserializer_TypeInfo);
  DataIO_Runtime_Deserializer___ctor(v17, seriazlier, 0LL);
  if ( !v17 )
    sub_B5D69C(v18, v19);
  v21 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v17,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v15,
          0LL);
  if ( !v21 )
  {
    v27 = sub_B5D5C8(&System_FormatException_TypeInfo);
    v28 = (System_FormatException_o *)sub_B5D694(v27);
    v29 = (System_String_o *)sub_B5D5C8(&StringLiteral_19244/*"getList family cannot return null."*/);
    System_FormatException___ctor_43879072(v28, v29, 0LL);
    v30 = sub_B5D5C8(&Method_DataMasterBase_directGetList__);
    sub_B5D668(v28, v30);
  }
  if ( v15 )
  {
    klass = v15->klass;
    if ( *(_WORD *)&v15->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&v15->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v25 = sub_AF54C0(v15, System_IDisposable_TypeInfo, 0LL, v20);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v25)(v15, *(_QWORD *)(v25 + 8));
  }
  return v21;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_1AE49F4 *method)
{
  __int64 v3; // x3
  DataMasterBase_o *v6; // x21
  __int64 v7; // x3
  DataMasterBase_c *klass; // x8
  DataMasterBase_o *v9; // x21
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0
  __int64 v13; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0
  __int64 v16; // [xsp+8h] [xbp-28h] BYREF

  v6 = this;
  if ( (byte_42EA2E4 & 1) == 0 )
  {
    this = (DataMasterBase_o *)sub_B5D5C4(
                                 &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
                                 (_DWORD)key,
                                 (_DWORD)method,
                                 v3);
    byte_42EA2E4 = 1;
  }
  v16 = 0LL;
  if ( !v6 || (this = (DataMasterBase_o *)DataMasterBase__get_lookup(v6, 0LL)) == 0LL )
    sub_B5D69C(this, key);
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
    v12 = sub_AF54C0(this, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL, v7);
  }
  if ( ((*(__int64 (__fastcall **)(DataMasterBase_o *, System_String_o *, __int64 *, _QWORD))v12)(
          v9,
          key,
          &v16,
          *(_QWORD *)(v12 + 8)) & 1) != 0 )
  {
    v13 = v16;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4(_0_T);
    if ( v13 )
    {
      result = (Il2CppObject *)sub_B5D684(v13, _0_T);
      if ( result )
        return result;
      sub_B5D990(v13);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8282 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, (_DWORD)method, v2, v3);
    byte_42E8282 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


WarQuestSelectionEntity_array *__fastcall DataMasterBase__getEntitys_WarQuestSelectionEntity_(
        DataMasterBase_o *this,
        const MethodInfo_1AE4B20 *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  unsigned int Count; // w22
  Il2CppClass *_0_T; // x21
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v12; // x8
  WarQuestSelectionEntity_array *v13; // x21
  unsigned __int64 v14; // x22
  BattleServantConfConponent_o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v22; // x24
  Il2CppClass *_1_T; // x25
  System_Int32_array **v24; // x1
  __int64 v25; // x0
  Il2CppObject *v26; // x0
  System_Collections_Generic_IDictionary_TKey__TValue__o *v27; // x1
  const MethodInfo_1AE4C9C *v28; // x2

  if ( (byte_42EA2E5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7, v8);
    byte_42EA2E5 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(method->rgctx_data->_0_T__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D5DC(_0_T, Count);
  v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v12 )
LABEL_19:
    sub_B5D69C(list, method);
  v13 = (WarQuestSelectionEntity_array *)list;
  v14 = 0LL;
  v15 = (BattleServantConfConponent_o *)&list[1];
  while ( (__int64)v14 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                           v12,
                           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !list )
      goto LABEL_19;
    list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
                                                                                         list,
                                                                                         v14,
                                                                                         (const MethodInfo_2BB8668 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v13 )
      goto LABEL_19;
    v22 = list;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_AF52C4(method->rgctx_data->_1_T);
    if ( v22 )
    {
      list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)sub_B5D684(v22, _1_T);
      v24 = (System_Int32_array **)list;
      if ( !list )
      {
        v26 = (Il2CppObject *)sub_B5D990(v22);
        return (WarQuestSelectionEntity_array *)Unity_Services_Core_Internal_DictionaryExtensions__MergeAllowOverride_object__int__object_(
                                                  v26,
                                                  v27,
                                                  v28);
      }
    }
    else
    {
      v24 = 0LL;
    }
    if ( v14 >= v13->max_length )
    {
      v25 = sub_B5D6C8(list);
      sub_B5D668(v25, 0LL);
    }
    v15->klass = (BattleServantConfConponent_c *)v24;
    sub_B5D560(v15, v24, v16, v17, v18, v19, v20, v21);
    v12 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v14;
    v15 = (BattleServantConfConponent_o *)((char *)v15 + 8);
    if ( !v12 )
      goto LABEL_19;
  }
  return v13;
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
  __int64 v3; // x3
  System_String_o *Key; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  System_String_o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v14; // x10
  int32_t *p_offset; // x11
  __int64 v16; // x0

  if ( (byte_42E8284 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      (_DWORD)args,
      (_DWORD)method,
      v3);
    byte_42E8284 = 1;
  }
  Key = DataMasterBase__createKey(this, args, method);
  lookup = this->fields._lookup;
  v10 = Key;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, v7);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B5D69C(v11, v12);
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v14 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v14;
      p_offset += 4;
      if ( v14 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v16 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v16 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v8);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v16)(
           lookup,
           v10,
           *(_QWORD *)(v16 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_24493920(
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

  if ( (byte_42E8285 & 1) == 0 )
  {
    sub_B5D5C4(
      &System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42E8285 = 1;
  }
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, (const MethodInfo *)key);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B5D69C(v7, v8);
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
    v12 = sub_AF54C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL, v3);
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
  sub_B5D560(
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D66 & 1) == 0 )
  {
    sub_B5D5C4(&DataMasterBase___c_TypeInfo, v1, v2, v3);
    byte_42E6D66 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DataMasterBase___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataMasterBase___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
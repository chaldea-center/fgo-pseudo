void __fastcall DataMasterBase___cctor(const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_String_o *Name; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x20
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *v30; // x21

  if ( (byte_40FB436 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_OnListChanged__, *(_QWORD *)&kind);
    sub_B16FFC(&DataNameKind_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__, v9);
    sub_B16FFC(&System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo, v10);
    byte_40FB436 = 1;
  }
  v11 = (System_Collections_ObjectModel_ObservableCollection_T__o *)sub_B170CC(
                                                                      System_Collections_ObjectModel_ObservableCollection_DataEntityBase__TypeInfo,
                                                                      *(_QWORD *)&kind,
                                                                      method,
                                                                      v3,
                                                                      v4);
  System_Collections_ObjectModel_ObservableCollection_object____ctor(
    v11,
    (const MethodInfo_2B01D38 *)Method_System_Collections_ObjectModel_ObservableCollection_DataEntityBase___ctor__);
  this->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v11;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.list,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._MasterKind_k__BackingField = kind;
  if ( (BYTE3(DataNameKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, 0LL);
  this->fields._MasterName_k__BackingField = Name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._MasterName_k__BackingField,
    (System_Int32_array **)Name,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  list = this->fields.list;
  v30 = (System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *)sub_B170CC(
                                                                                  System_Collections_Specialized_NotifyCollectionChangedEventHandler_TypeInfo,
                                                                                  v26,
                                                                                  v27,
                                                                                  v28,
                                                                                  v29);
  System_Collections_Specialized_NotifyCollectionChangedEventHandler___ctor(
    v30,
    (Il2CppObject *)this,
    Method_DataMasterBase_OnListChanged__,
    0LL);
  if ( !list )
    sub_B170D4();
  ((void (__fastcall *)(struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *, System_Collections_Specialized_NotifyCollectionChangedEventHandler_o *, Il2CppMethodPointer))list->klass->vtable._41_add_CollectionChanged.method)(
    list,
    v30,
    list->klass->vtable._42_remove_CollectionChanged.methodPtr);
}


void __fastcall DataMasterBase__AddEntity(DataMasterBase_o *this, DataEntityBase_o *entity, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_40FB440 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__, entity);
    byte_40FB440 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___Add(
    list,
    (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)entity,
    (const MethodInfo_290E15C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Add__);
}


void __fastcall DataMasterBase__Clear(DataMasterBase_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_40FB43A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__, method);
    byte_40FB43A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  System_Collections_ObjectModel_Collection_object___Clear(
    list,
    (const MethodInfo_290E2CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__Clear__);
}


void __fastcall DataMasterBase__CreateLookupTable(DataMasterBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x19
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o **p_lookup; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v21; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x0
  System_Xml_Schema_XmlSchemaObject_o *v32; // x21
  System_Xml_XmlQualifiedName_o *v33; // x22
  System_Collections_Generic_IEnumerator_T__c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_40FB43D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&System_IDisposable_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v11);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_40FB43D = 1;
  }
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__DataEntityBase__TypeInfo,
                                                                                        method,
                                                                                        v2,
                                                                                        v3,
                                                                                        v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v13,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase___ctor__);
  this->fields._lookup = (struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *)v13;
  p_lookup = &this->fields._lookup;
  sub_B16F98((BattleServantConfConponent_o *)p_lookup, (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  v21 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)*(p_lookup - 1);
  if ( !v21 )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 v21,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
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
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v28 = 0LL;
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v32 = (System_Xml_Schema_XmlSchemaObject_o *)v31;
    if ( !v31 )
      sub_B170D4();
    v33 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 376LL))(
                                             v31,
                                             *(_QWORD *)(*(_QWORD *)v31 + 384LL));
    if ( v33 )
    {
      if ( !*p_lookup )
        sub_B170D4();
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
              v33,
              (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__ContainsKey__) )
      {
        if ( !*p_lookup )
          sub_B170D4();
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)*p_lookup,
          v33,
          v32,
          (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Add__);
      }
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_28;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_28:
    v37 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v37)(Enumerator, *(_QWORD *)(v37 + 8));
}


bool __fastcall DataMasterBase__Deleted(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int v8; // w8
  __int64 v9; // x20
  int i; // w22
  DataEntityBase_o *v11; // x21
  __int64 v12; // x0
  const MethodInfo *v13; // x2

  if ( (byte_40FB43F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_40FB43F = 1;
  }
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)
    || (v5 = ((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
               this,
               obj,
               this->klass->vtable._5_unknown.methodPtr)) == 0 )
  {
LABEL_15:
    sub_B170D4();
  }
  v8 = *(_DWORD *)(v5 + 24);
  v9 = v5;
  if ( v8 >= 1 )
  {
    for ( i = 0; i < v8; ++i )
    {
      if ( i >= (unsigned int)v8 )
      {
        sub_B17100(v5, v6, v7);
        sub_B170A0();
      }
      v11 = *(DataEntityBase_o **)(v9 + 8LL * i + 32);
      if ( !v11 )
        goto LABEL_15;
      v12 = ((__int64 (__fastcall *)(DataEntityBase_o *, const char *))v11->klass[1]._1.gc_desc)(
              v11,
              v11->klass[1]._1.name);
      if ( !v12 )
        return v12;
      v5 = DataMasterBase__RemoveEntity(this, v11, v13);
      v8 = *(_DWORD *)(v9 + 24);
    }
    if ( (v5 & 1) != 0 )
      ++this->fields.revision;
  }
  LOBYTE(v12) = 1;
  return v12;
}


int32_t __fastcall DataMasterBase__GetRegisteredKind_object_(const MethodInfo_18C3598 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields;
}


System_String_o *__fastcall DataMasterBase__GetRegisteredName_object_(const MethodInfo_18C35D0 *method)
{
  Il2CppClass *_0_DataMasterBase_Registration_TMaster; // x19

  _0_DataMasterBase_Registration_TMaster = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(_0_DataMasterBase_Registration_TMaster->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  return (System_String_o *)*((_QWORD *)_0_DataMasterBase_Registration_TMaster->static_fields + 1);
}


Il2CppObject *__fastcall DataMasterBase__GetSingleEntity_object_(
        DataMasterBase_o *this,
        const MethodInfo_18C3608 *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v6; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v7; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  if ( (byte_40FA6A7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_40FA6A7 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_14;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v6 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v6 )
    goto LABEL_14;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         v6,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 0LL;
  v7 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v7 )
LABEL_14:
    sub_B170D4();
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           v7,
           0,
           (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_T);
  if ( Item )
  {
    result = (Il2CppObject *)sub_B170BC(Item, _0_T);
    if ( result )
      return result;
    sub_B173C8(Item);
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
  __int64 v20; // x3
  __int64 v21; // x4
  System_NotImplementedException_o *v22; // x0
  __int64 v23; // x21
  __int64 v24; // x8
  unsigned __int64 v25; // x10
  int *v26; // x11
  __int64 v27; // x0
  __int64 v28; // x8
  unsigned __int64 v29; // x10
  System_Collections_IEnumerator_c **v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x22
  __int64 v34; // x8
  __int64 v35; // x10
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x23
  System_Xml_XmlQualifiedName_o *v37; // x1
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
  __int64 v49; // x21
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  System_Collections_IEnumerator_c **v56; // x11
  __int64 v57; // x0
  __int64 v58; // x0
  System_Xml_Schema_XmlSchemaObject_o *v59; // x22
  __int64 v60; // x8
  __int64 v61; // x10
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *v62; // x23
  System_Xml_XmlQualifiedName_o *v63; // x1
  int v64; // w24
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x21
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  int v71[2]; // [xsp+0h] [xbp-60h]
  int v72; // [xsp+8h] [xbp-58h]

  if ( (byte_40FB446 & 1) == 0 )
  {
    sub_B16FFC(&DataEntityBase_TypeInfo, sender);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__, v7);
    sub_B16FFC(&System_IDisposable_TypeInfo, v8);
    sub_B16FFC(&System_Collections_IEnumerable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_40FB446 = 1;
  }
  v72 = 0;
  if ( this->fields._lookup )
  {
    if ( !e )
      sub_B170D4();
    action = e->fields._action;
    if ( action >= 3 )
    {
      if ( action != 3 )
      {
        if ( action != 4 )
        {
          v17 = sub_B17000(&System_NotImplementedException_TypeInfo);
          v22 = (System_NotImplementedException_o *)sub_B170CC(v17, v18, v19, v20, v21);
          System_NotImplementedException___ctor(v22, 0LL);
          sub_B17000(&Method_DataMasterBase_OnListChanged__);
          sub_B170A0();
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
          p_method = sub_AAFEF8(e->fields._oldItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v23 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))p_method)(
                oldItems,
                *(_QWORD *)(p_method + 8));
        if ( !v23 )
          sub_B170D4();
        while ( 1 )
        {
          v24 = *(_QWORD *)v23;
          if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
          {
            v25 = 0LL;
            v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
                goto LABEL_22;
            }
            v27 = v24 + 16LL * *v26 + 312;
          }
          else
          {
LABEL_22:
            v27 = sub_AAFEF8(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
            break;
          v28 = *(_QWORD *)v23;
          if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
          {
            v29 = 0LL;
            v30 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *(v30 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v29;
              v30 += 2;
              if ( v29 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
                goto LABEL_29;
            }
            v31 = v28 + 16LL * (*(_DWORD *)v30 + 1) + 312;
          }
          else
          {
LABEL_29:
            v31 = sub_AAFEF8(v23, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
          v33 = v32;
          if ( v32 )
          {
            v34 = *(_QWORD *)v32;
            v35 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v32 + 300LL) >= (unsigned int)v35
              && *(DataEntityBase_c **)(*(_QWORD *)(v34 + 200) + 8 * v35 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v34 + 376))(v32, *(_QWORD *)(v34 + 384)) )
            {
              lookup = this->fields._lookup;
              v37 = (System_Xml_XmlQualifiedName_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 376LL))(
                                                       v33,
                                                       *(_QWORD *)(*(_QWORD *)v33 + 384LL));
              if ( !lookup )
                sub_B170D4();
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)lookup,
                v37,
                (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__Remove__);
            }
          }
        }
        v71[0] = 139;
        v72 = 1;
        v38 = sub_B170BC(v23, System_IDisposable_TypeInfo);
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
            v43 = sub_AAFEF8(v38, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
        }
        v72 = 0;
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
          v48 = sub_AAFEF8(e->fields._newItems, System_Collections_IEnumerable_TypeInfo, 0LL);
        }
        v49 = (*(__int64 (__fastcall **)(struct System_Collections_IList_o *, _QWORD))v48)(
                newItems,
                *(_QWORD *)(v48 + 8));
        if ( !v49 )
          sub_B170D4();
        while ( 1 )
        {
          v50 = *(_QWORD *)v49;
          if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
          {
            v51 = 0LL;
            v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v51;
              v52 += 4;
              if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
                goto LABEL_58;
            }
            v53 = v50 + 16LL * *v52 + 312;
          }
          else
          {
LABEL_58:
            v53 = sub_AAFEF8(v49, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
            break;
          v54 = *(_QWORD *)v49;
          if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
          {
            v55 = 0LL;
            v56 = (System_Collections_IEnumerator_c **)(*(_QWORD *)(v54 + 176) + 8LL);
            while ( *(v56 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              ++v55;
              v56 += 2;
              if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
                goto LABEL_65;
            }
            v57 = v54 + 16LL * (*(_DWORD *)v56 + 1) + 312;
          }
          else
          {
LABEL_65:
            v57 = sub_AAFEF8(v49, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
          v59 = (System_Xml_Schema_XmlSchemaObject_o *)v58;
          if ( v58 )
          {
            v60 = *(_QWORD *)v58;
            v61 = *(&DataEntityBase_TypeInfo->_2.bitflags2 + 1);
            if ( *(unsigned __int8 *)(*(_QWORD *)v58 + 300LL) >= (unsigned int)v61
              && *(DataEntityBase_c **)(*(_QWORD *)(v60 + 200) + 8 * v61 - 8) == DataEntityBase_TypeInfo
              && (*(__int64 (__fastcall **)(__int64, _QWORD))(v60 + 376))(v58, *(_QWORD *)(v60 + 384)) )
            {
              v62 = this->fields._lookup;
              v63 = (System_Xml_XmlQualifiedName_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))v59->klass->vtable._4_OnAdd.method)(
                                                       v59,
                                                       v59->klass->vtable._5_OnRemove.methodPtr);
              if ( !v62 )
                sub_B170D4();
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v62,
                v63,
                v59,
                (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__DataEntityBase__set_Item__);
            }
          }
        }
        v71[0] = 248;
        v64 = ++v72;
        v65 = sub_B170BC(v49, System_IDisposable_TypeInfo);
        if ( v65 )
        {
          v66 = *(_QWORD *)v65;
          v67 = v65;
          if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
          {
            v68 = 0LL;
            v69 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
            {
              ++v68;
              v69 += 4;
              if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
                goto LABEL_78;
            }
            v70 = v66 + 16LL * *v69 + 312;
          }
          else
          {
LABEL_78:
            v70 = sub_AAFEF8(v65, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v70)(v67, *(_QWORD *)(v70 + 8));
        }
        if ( v64 && v71[v64 - 1] == 248 )
        {
          v72 = v64 - 1;
          goto LABEL_85;
        }
LABEL_84:
        DataMasterBase__CreateLookupTable(this, (const MethodInfo *)sender);
      }
    }
  }
LABEL_85:
  ((void (__fastcall *)(DataMasterBase_o *, System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *, void *, const MethodInfo *))this->klass->vtable._8_OnListChangedImplementation.method)(
    this,
    e,
    this->klass[1]._1.image,
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
        const MethodInfo_18C36EC *method)
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
    sub_AAFCFC(method->rgctx_data->_0_DataMasterBase_Registration_TMaster_);
  *(_DWORD *)_0_DataMasterBase_Registration_TMaster->static_fields = kind;
  v12 = method->rgctx_data->_0_DataMasterBase_Registration_TMaster_;
  if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(v12);
  static_fields = (char *)v12->static_fields;
  *((_QWORD *)static_fields + 1) = name;
  sub_B16F98(
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
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v25; // x22
  int32_t Index_object; // w0
  int32_t v27; // w1
  System_Collections_ObjectModel_Collection_T__o *v28; // x0

  if ( (byte_40FB441 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__, entity);
    sub_B16FFC(&Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___, v7);
    sub_B16FFC(&Method_System_Predicate_DataEntityBase___ctor__, v8);
    sub_B16FFC(&System_Predicate_DataEntityBase__TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__, v10);
    sub_B16FFC(&DataMasterBase___c__DisplayClass40_0_TypeInfo, v11);
    byte_40FB441 = 1;
  }
  v12 = sub_B170CC(DataMasterBase___c__DisplayClass40_0_TypeInfo, entity, method, v3, v4);
  DataMasterBase___c__DisplayClass40_0___ctor((DataMasterBase___c__DisplayClass40_0_o *)v12, 0LL);
  if ( !entity )
    goto LABEL_9;
  v13 = (System_Int32_array **)((__int64 (__fastcall *)(DataEntityBase_o *, const char *))entity->klass[1]._1.gc_desc)(
                                 entity,
                                 entity->klass[1]._1.name);
  if ( !v12 )
    goto LABEL_9;
  *(_QWORD *)(v12 + 16) = v13;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), v13, v14, v15, v16, v17, v18, v19);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v25 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_DataEntityBase__TypeInfo,
                                                                   v21,
                                                                   v22,
                                                                   v23,
                                                                   v24);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_DataMasterBase___c__DisplayClass40_0__RemoveEntity_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_DataEntityBase___ctor__);
  Index_object = ObservableCollectionExtensions__FindIndex_object_(
                   list,
                   (System_Predicate_T__o *)v25,
                   (const MethodInfo_19DECD8 *)Method_ObservableCollectionExtensions_FindIndex_DataEntityBase___);
  if ( (Index_object & 0x80000000) == 0 )
  {
    v27 = Index_object;
    v28 = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( v28 )
    {
      System_Collections_ObjectModel_Collection_object___RemoveAt(
        v28,
        v27,
        (const MethodInfo_290E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__RemoveAt__);
      return 1;
    }
LABEL_9:
    sub_B170D4();
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x25
  const MethodInfo *v13; // x6
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  bool result; // w0
  System_Nullable_long__o v16; // 0:x2.16
  System_Nullable_long__o v17; // 0:x4.16

  v5 = *(_QWORD *)&lenght.fields.has_value;
  value = lenght.fields.value;
  v7 = *(_QWORD *)&start.fields.has_value;
  v8 = start.fields.value;
  if ( (byte_40FB43B & 1) == 0 )
  {
    sub_B16FFC(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FB43B = 1;
  }
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    goto LABEL_6;
  ((void (__fastcall *)(DataMasterBase_o *, Il2CppMethodPointer))this->klass->vtable._7_Clear.method)(
    this,
    this->klass->vtable._8_OnListChangedImplementation.methodPtr);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v16.fields.value = v8;
  *(_QWORD *)&v16.fields.has_value = v7;
  v17.fields.value = value;
  *(_QWORD *)&v17.fields.has_value = v5;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase__abstractGetList(this, objOrBytes, v16, v17, v13);
  ObservableCollectionExtensions__AddRange_object_(
    list,
    v14,
    (const MethodInfo_19DE5A4 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
LABEL_6:
    sub_B170D4();
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
  if ( (byte_40FB43C & 1) == 0 )
  {
    sub_B16FFC(&Method_ObservableCollectionExtensions_AddRange_DataEntityBase___, objOrBytes);
    byte_40FB43C = 1;
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
    (const MethodInfo_19DE5A4 *)Method_ObservableCollectionExtensions_AddRange_DataEntityBase___);
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
        const MethodInfo_18C375C *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v10; // x22
  unsigned __int64 v11; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
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

  if ( (byte_40FA6A8 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, result);
    byte_40FA6A8 = 1;
  }
  v26 = 0LL;
  if ( !this || (lookup = DataMasterBase__get_lookup(this, 0LL)) == 0LL )
    sub_B170D4();
  klass = lookup->klass;
  v10 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v10,
          key,
          &v26,
          *(_QWORD *)(p_method + 8)) & 1) == 0 )
    goto LABEL_17;
  v20 = v26;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  if ( v20 )
  {
    v22 = (ServantVoiceEntity_o *)sub_B170BC(v20, _0_T);
    if ( !v22 )
    {
      sub_B173C8(v20);
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
    sub_AAFCFC(v24);
  if ( !v20 )
    goto LABEL_24;
  v25 = (System_Int32_array **)sub_B170BC(v20, v24);
  if ( !v25 )
  {
    sub_B173C8(v20);
LABEL_24:
    v25 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)result, v25, v14, v15, v16, v17, v18, v19);
  return 1;
}


bool __fastcall DataMasterBase__TryGetSingleEntity_object_(
        DataMasterBase_o *this,
        Il2CppObject **result,
        const MethodInfo_18C38E8 *method)
{
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v8; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x21
  Il2CppClass *_0_T; // x22
  Il2CppObject *v18; // x0
  bool v19; // w0
  Il2CppClass *v20; // x20
  System_Int32_array **v21; // x1

  if ( (byte_40FA6A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, result);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6);
    byte_40FA6A9 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_21;
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
    list,
    (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v8 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v8 )
    goto LABEL_21;
  if ( System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
         v8,
         (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
  {
LABEL_12:
    v19 = 0;
    *result = 0LL;
    return v19;
  }
  v9 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v9 )
LABEL_21:
    sub_B170D4();
  Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
           v9,
           0,
           (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  if ( Item )
  {
    v18 = (Il2CppObject *)sub_B170BC(Item, _0_T);
    if ( !v18 )
    {
      sub_B173C8(Item);
      goto LABEL_12;
    }
  }
  else
  {
    v18 = 0LL;
  }
  *result = v18;
  v20 = method->rgctx_data->_0_T;
  if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  if ( !Item )
    goto LABEL_19;
  v21 = (System_Int32_array **)sub_B170BC(Item, v20);
  if ( !v21 )
  {
    sub_B173C8(Item);
LABEL_19:
    v21 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)result, v21, v10, v11, v12, v13, v14, v15);
  return 1;
}


bool __fastcall DataMasterBase__Updated(DataMasterBase_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  __int64 v9; // x20
  unsigned __int64 v10; // x21

  if ( (byte_40FB43E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, obj);
    byte_40FB43E = 1;
  }
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)
    || (v5 = ((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
               this,
               obj,
               this->klass->vtable._5_unknown.methodPtr)) == 0 )
  {
    sub_B170D4();
  }
  v8 = *(_QWORD *)(v5 + 24);
  v9 = v5;
  if ( (int)v8 < 1 )
    return 1;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v8 )
    {
      sub_B17100(v5, v6, v7);
      sub_B170A0();
    }
    v5 = DataMasterBase__UpdatedEntity(this, *(DataEntityBase_o **)(v9 + 32 + 8 * v10), v7);
    if ( (v5 & 1) == 0 )
      break;
    LODWORD(v8) = *(_DWORD *)(v9 + 24);
    if ( (__int64)++v10 >= (int)v8 )
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
    sub_B170D4();
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
  __int64 v14; // x3
  __int64 v15; // x4
  MiniMessagePack_MiniMessagePacker_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo_2969020 *v23; // x2
  const MethodInfo *v24; // x4
  __int64 v25; // x21
  int32_t Value; // w23
  __int64 v28; // x3
  DataEntityBase_array *List; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Nullable_long__o v36; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_long__o v37; // [xsp+10h] [xbp-50h] BYREF
  System_Nullable_long__o v38; // 0:x0.16
  System_Nullable_long__o v39; // 0:x0.16

  v37 = start;
  has_value = lenght.fields.has_value;
  v6 = start.fields.has_value;
  v36 = lenght;
  if ( (byte_40FB438 & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, objOrBytes);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v9);
    sub_B16FFC(&Method_System_Nullable_long__get_HasValue__, v10);
    sub_B16FFC(&Method_System_Nullable_long__get_Value__, v11);
    byte_40FB438 = 1;
  }
  if ( !sub_B170BC(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v16 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 v12,
                                                 v13,
                                                 v14,
                                                 v15);
  MiniMessagePack_MiniMessagePacker___ctor(v16, 0LL);
  this->fields.seriazlier = v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.seriazlier,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( objOrBytes )
  {
    v25 = sub_B170BC(objOrBytes, byte___TypeInfo);
    if ( !v25 )
    {
      sub_B173C8(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr);
    }
  }
  else
  {
    v25 = 0LL;
  }
  if ( v6 )
  {
    *(_QWORD *)&v38.fields.has_value = Method_System_Nullable_long__get_Value__;
    v38.fields.value = (int64_t)&v37;
    has_value = v36.fields.has_value;
    Value = System_Nullable_long___get_Value(v38, v23);
  }
  else
  {
    Value = 0;
  }
  if ( has_value )
  {
    *(_QWORD *)&v39.fields.has_value = Method_System_Nullable_long__get_Value__;
    v39.fields.value = (int64_t)&v36;
    LODWORD(v28) = System_Nullable_long___get_Value(v39, v23);
  }
  else
  {
    if ( !v25 )
      sub_B170D4();
    v28 = *(_QWORD *)(v25 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v25, Value, v28, v24);
  this->fields.seriazlier = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.seriazlier, 0LL, v30, v31, v32, v33, v34, v35);
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
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
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
  const MethodInfo_2969020 *v34; // x2
  const MethodInfo *v35; // x4
  __int64 v36; // x22
  int32_t Value; // w24
  __int64 v39; // x3
  MethodInfo_2969020 *v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  DataEntityBase_array *List; // x23
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
  has_value = lenght.fields.has_value;
  v9 = start.fields.has_value;
  v51 = lenght;
  if ( (byte_40FB439 & 1) == 0 )
  {
    sub_B16FFC(&byte___TypeInfo, objOrBytes);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v12);
    sub_B16FFC(&Method_System_Nullable_long__get_HasValue__, v13);
    sub_B16FFC(&Method_System_Nullable_long__get_Value__, v14);
    byte_40FB439 = 1;
  }
  if ( !sub_B170BC(objOrBytes, byte___TypeInfo) )
    return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                     this,
                                     objOrBytes,
                                     this->klass->vtable._5_unknown.methodPtr);
  v19 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                 MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                 v15,
                                                 v16,
                                                 v17,
                                                 v18);
  MiniMessagePack_MiniMessagePacker___ctor(v19, 0LL);
  this->fields.seriazlier = v19;
  p_seriazlier = (BattleServantConfConponent_o *)&this->fields.seriazlier;
  sub_B16F98(
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
    sub_B170D4();
  seriazlier->fields.threadSafeStringHash = work;
  sub_B16F98(
    (BattleServantConfConponent_o *)&seriazlier->fields.threadSafeStringHash,
    (System_Int32_array **)work,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( objOrBytes )
  {
    v36 = sub_B170BC(objOrBytes, byte___TypeInfo);
    if ( !v36 )
    {
      sub_B173C8(objOrBytes);
      return (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                       this,
                                       objOrBytes,
                                       this->klass->vtable._5_unknown.methodPtr);
    }
  }
  else
  {
    v36 = 0LL;
  }
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
    LODWORD(v39) = System_Nullable_long___get_Value(v54, v34);
  }
  else
  {
    if ( !v36 )
      sub_B170D4();
    v39 = *(_QWORD *)(v36 + 24);
  }
  List = DataMasterBase__directGetList(this, (System_Byte_array *)v36, Value, v39, v35);
  if ( !List )
  {
    klass = (MiniMessagePack_MiniMessagePacker_o *)p_seriazlier->klass;
    if ( v52.fields.has_value )
    {
      *(_QWORD *)&v55.fields.has_value = Method_System_Nullable_long__get_Value__;
      v55.fields.value = (int64_t)&v52;
      v48 = System_Nullable_long___get_Value(v55, v40);
    }
    else
    {
      v48 = 0;
    }
    if ( v51.fields.has_value )
    {
      *(_QWORD *)&v56.fields.has_value = Method_System_Nullable_long__get_Value__;
      v56.fields.value = (int64_t)&v51;
      LODWORD(v49) = System_Nullable_long___get_Value(v56, v40);
      if ( klass )
      {
LABEL_23:
        v50 = MiniMessagePack_MiniMessagePacker__Unpack(klass, (System_Byte_array *)v36, v48, v49, 0LL);
        List = (DataEntityBase_array *)((__int64 (__fastcall *)(DataMasterBase_o *, Il2CppObject *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
                                         this,
                                         v50,
                                         this->klass->vtable._5_unknown.methodPtr);
        goto LABEL_24;
      }
    }
    else
    {
      if ( !v36 )
        sub_B170D4();
      v49 = *(_QWORD *)(v36 + 24);
      if ( klass )
        goto LABEL_23;
    }
    sub_B170D4();
  }
LABEL_24:
  p_seriazlier->klass = 0LL;
  sub_B16F98(p_seriazlier, 0LL, (System_String_array **)v40, v41, v42, v43, v44, v45);
  return List;
}


System_String_o *__fastcall DataMasterBase__createKey(
        DataMasterBase_o *this,
        System_Int64_array *args,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v9; // w23
  System_Text_StringBuilder_o *klass; // x0
  BattleServantConfConponent_o *p_sb; // x19
  struct System_Text_StringBuilder_o *sb; // t1
  System_Text_StringBuilder_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  System_Text_StringBuilder_o *v23; // x0
  il2cpp_array_size_t v24; // w8
  unsigned __int64 v25; // x22

  if ( (byte_40FB443 & 1) == 0 )
  {
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, args);
    sub_B16FFC(&StringLiteral_1, v7);
    byte_40FB443 = 1;
  }
  if ( !args )
    goto LABEL_19;
  max_length = args->max_length;
  v9 = max_length - 1;
  if ( max_length == 1 )
    return System_Int64__ToString((int64_t)args->m_Items, 0LL);
  if ( max_length < 2 )
    return (System_String_o *)StringLiteral_1;
  sb = this->fields.sb;
  p_sb = (BattleServantConfConponent_o *)&this->fields.sb;
  klass = sb;
  if ( !sb )
  {
    v14 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, args, method, v3, v4);
    System_Text_StringBuilder___ctor_41908268(v14, 128, 0LL);
    p_sb->klass = (BattleServantConfConponent_c *)v14;
    sub_B16F98(p_sb, (System_Int32_array **)v14, v15, v16, v17, v18, v19, v20);
    klass = (System_Text_StringBuilder_o *)p_sb->klass;
    if ( !p_sb->klass )
      goto LABEL_19;
  }
  System_Text_StringBuilder__set_Length(klass, 0, 0LL);
  v23 = (System_Text_StringBuilder_o *)p_sb->klass;
  v24 = args->max_length;
  v25 = 0LL;
  do
  {
    if ( v25 >= v24 )
      goto LABEL_20;
    if ( !v23 )
      goto LABEL_19;
    System_Text_StringBuilder__Append_41917720(v23, args->m_Items[v25], 0LL);
    if ( !p_sb->klass )
      goto LABEL_19;
    System_Text_StringBuilder__Append_41917484((System_Text_StringBuilder_o *)p_sb->klass, 0x3Au, 0LL);
    v23 = (System_Text_StringBuilder_o *)p_sb->klass;
    v24 = args->max_length;
    ++v25;
  }
  while ( (__int64)v25 < (int)v9 );
  if ( v9 >= v24 )
  {
LABEL_20:
    sub_B17100(v23, v21, v22);
    sub_B170A0();
  }
  if ( !v23 || (System_Text_StringBuilder__Append_41917720(v23, args->m_Items[v9], 0LL), !p_sb->klass) )
LABEL_19:
    sub_B170D4();
  return (System_String_o *)(*((__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))p_sb->klass->_1.image
                             + 45))(
                              p_sb->klass,
                              *((_QWORD *)p_sb->klass->_1.image + 46));
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
  __int64 v15; // x3
  __int64 v16; // x4
  DataIO_Runtime_Deserializer_o *v17; // x21
  DataEntityBase_array *v18; // x20
  System_IO_MemoryStream_c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 v22; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_FormatException_o *v29; // x20
  System_String_o *v30; // x0

  if ( (byte_40FB437 & 1) == 0 )
  {
    sub_B16FFC(&DataIO_Runtime_Deserializer_TypeInfo, bytes);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_IO_MemoryStream_TypeInfo, v10);
    byte_40FB437 = 1;
  }
  v11 = (System_IO_MemoryStream_o *)sub_B170CC(
                                      System_IO_MemoryStream_TypeInfo,
                                      bytes,
                                      *(_QWORD *)&start,
                                      *(_QWORD *)&length,
                                      method);
  System_IO_MemoryStream___ctor_44473732(v11, bytes, start, length, 0LL);
  seriazlier = this->fields.seriazlier;
  v17 = (DataIO_Runtime_Deserializer_o *)sub_B170CC(DataIO_Runtime_Deserializer_TypeInfo, v13, v14, v15, v16);
  DataIO_Runtime_Deserializer___ctor(v17, seriazlier, 0LL);
  if ( !v17 )
    sub_B170D4();
  v18 = DataIO_Runtime_Deserializer__DispatchDeserialize(
          v17,
          this->fields._MasterName_k__BackingField,
          (System_IO_Stream_o *)v11,
          0LL);
  if ( !v18 )
  {
    v24 = sub_B17000(&System_FormatException_TypeInfo);
    v29 = (System_FormatException_o *)sub_B170CC(v24, v25, v26, v27, v28);
    v30 = (System_String_o *)sub_B17000(&StringLiteral_18933);
    System_FormatException___ctor_42829508(v29, v30, 0LL);
    sub_B17000(&Method_DataMasterBase_directGetList__);
    sub_B170A0();
  }
  if ( v11 )
  {
    klass = v11->klass;
    if ( *(_WORD *)&v11->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&v11->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_10:
      v22 = sub_AAFEF8(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v22)(v11, *(_QWORD *)(v22 + 8));
  }
  return v18;
}


Il2CppObject *__fastcall DataMasterBase__getEntityFromKey_object_(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo_18C3A2C *method)
{
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *lookup; // x0
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c *klass; // x8
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *v8; // x21
  unsigned __int64 v9; // x10
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **p_offset; // x11
  __int64 p_method; // x0
  __int64 v12; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA6AA & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, key);
    byte_40FA6AA = 1;
  }
  v15 = 0LL;
  if ( !this || (lookup = DataMasterBase__get_lookup(this, 0LL)) == 0LL )
    sub_B170D4();
  klass = lookup->klass;
  v8 = lookup;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v9 = 0LL;
    p_offset = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v9;
      p_offset += 2;
      if ( v9 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 1].method;
  }
  else
  {
LABEL_9:
    p_method = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
  }
  if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__o *, System_String_o *, __int64 *, _QWORD))p_method)(
          v8,
          key,
          &v15,
          *(_QWORD *)(p_method + 8)) & 1) != 0 )
  {
    v12 = v15;
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC(_0_T);
    if ( v12 )
    {
      result = (Il2CppObject *)sub_B170BC(v12, _0_T);
      if ( result )
        return result;
      sub_B173C8(v12);
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
  if ( (byte_40FB442 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_DataEntityBase___, method);
    byte_40FB442 = 1;
  }
  return (DataEntityBase_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_DataEntityBase___);
}


WarQuestSelectionEntity_array *__fastcall DataMasterBase__getEntitys_WarQuestSelectionEntity_(
        DataMasterBase_o *this,
        const MethodInfo_18C3B58 *method)
{
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v6; // x2
  unsigned int Count; // w22
  Il2CppClass *_0_T; // x21
  __int64 v9; // x0
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v10; // x8
  WarQuestSelectionEntity_array *v11; // x21
  unsigned __int64 v12; // x22
  BattleServantConfConponent_o *v13; // x23
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *v14; // x0
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *Item; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Net_NetworkInformation_UnicastIPAddressInformation_o *v22; // x24
  Il2CppClass *_1_T; // x25
  System_Int32_array **v24; // x1
  Il2CppObject *v25; // x0
  System_Collections_Generic_IDictionary_TKey__TValue__o *v26; // x1
  const MethodInfo_18C3CD4 *v27; // x2

  if ( (byte_40FA6AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v4);
    byte_40FA6AB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    goto LABEL_19;
  Count = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
            list,
            (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T__);
  v9 = sub_B17014(_0_T, Count, v6);
  v10 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !v10 )
LABEL_19:
    sub_B170D4();
  v11 = (WarQuestSelectionEntity_array *)v9;
  v12 = 0LL;
  v13 = (BattleServantConfConponent_o *)(v9 + 32);
  while ( (__int64)v12 < System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
                           v10,
                           (const MethodInfo_290DE84 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
  {
    v14 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    if ( !v14 )
      goto LABEL_19;
    Item = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Item(
             v14,
             v12,
             (const MethodInfo_290DF28 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !v11 )
      goto LABEL_19;
    v22 = Item;
    _1_T = method->rgctx_data->_1_T;
    if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
      Item = (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)sub_AAFCFC(method->rgctx_data->_1_T);
    if ( v22 )
    {
      Item = (System_Net_NetworkInformation_UnicastIPAddressInformation_o *)sub_B170BC(v22, _1_T);
      v24 = (System_Int32_array **)Item;
      if ( !Item )
      {
        v25 = (Il2CppObject *)sub_B173C8(v22);
        return (WarQuestSelectionEntity_array *)Unity_Services_Core_Internal_DictionaryExtensions__MergeAllowOverride_object__int__object_(
                                                  v25,
                                                  v26,
                                                  v27);
      }
    }
    else
    {
      v24 = 0LL;
    }
    if ( v12 >= v11->max_length )
    {
      sub_B17100(Item, v24, v16);
      sub_B170A0();
    }
    v13->klass = (BattleServantConfConponent_c *)v24;
    sub_B16F98(v13, v24, v16, v17, v18, v19, v20, v21);
    v10 = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
    ++v12;
    v13 = (BattleServantConfConponent_o *)((char *)v13 + 8);
    if ( !v10 )
      goto LABEL_19;
  }
  return v11;
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
  unsigned __int64 v10; // x10
  int32_t *p_offset; // x11
  __int64 v12; // x0

  if ( (byte_40FB444 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, args);
    byte_40FB444 = 1;
  }
  Key = DataMasterBase__createKey(this, args, method);
  lookup = this->fields._lookup;
  v8 = Key;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, v6);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B170D4();
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
    v12 = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
  }
  return (*(__int64 (__fastcall **)(struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *, System_String_o *, _QWORD))v12)(
           lookup,
           v8,
           *(_QWORD *)(v12 + 8));
}


bool __fastcall DataMasterBase__isEntityExistsFromId_27549084(
        DataMasterBase_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__DataEntityBase__o *lookup; // x20
  System_Collections_Generic_Dictionary_string__DataEntityBase__c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 v9; // x0

  if ( (byte_40FB445 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, key);
    byte_40FB445 = 1;
  }
  lookup = this->fields._lookup;
  if ( !lookup )
  {
    DataMasterBase__CreateLookupTable(this, (const MethodInfo *)key);
    lookup = this->fields._lookup;
    if ( !lookup )
      sub_B170D4();
  }
  klass = lookup->klass;
  if ( *(_WORD *)&lookup->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)p_offset - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&lookup->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_AAFEF8(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._MasterName_k__BackingField = value;
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B31 & 1) == 0 )
  {
    sub_B16FFC(&DataMasterBase___c_TypeInfo, v1);
    byte_40F8B31 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DataMasterBase___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataMasterBase___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  v4 = (System_String_o *)((__int64 (__fastcall *)(DataEntityBase_o *, const char *, const MethodInfo *))item->klass[1]._1.gc_desc)(
                            item,
                            item->klass[1]._1.name,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0LL);
}
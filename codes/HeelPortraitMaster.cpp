void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B164F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, method, v2);
    byte_4B164F3 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    455,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HeelPortraitMaster__GetCompleteNum(
        HeelPortraitMaster_o *this,
        int32_t eventId,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v28; // x0
  System_Converter_TInput__TOutput__o *_9__1_0; // x21
  Il2CppObject *v30; // x22
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_TOutput__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Func_object__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4B164F2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_HeelPortraitEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___, v12, v13);
    sub_1BCA7E0(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v14, v15);
    sub_1BCA7E0(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v16, v17);
    sub_1BCA7E0(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v18, v19);
    sub_1BCA7E0(&HeelPortraitMaster___c_TypeInfo, v20, v21);
    byte_4B164F2 = 1;
  }
  v22 = sub_1BCAA2C(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&eventId, method, v3);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    sub_1BCAA3C(v23, v24);
  *(_DWORD *)(v22 + 16) = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v28 = HeelPortraitMaster___c_TypeInfo;
  if ( !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo, v24);
    v28 = HeelPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v28->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v24);
      v28 = HeelPortraitMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                       System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo,
                                                       v24,
                                                       v25,
                                                       v26);
    System_Converter_object__object____ctor(_9__1_0, v30, Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, 0LL);
    static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v32, v33, v34, v35, v36, v37);
  }
  v38 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_2F98238 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v42 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_HeelPortraitEntity__bool__TypeInfo, v39, v40, v41);
  System_Func_object__bool____ctor(
    v42,
    (Il2CppObject *)v22,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    0LL);
  v43 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_object_(
           v43,
           (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_HeelPortraitEntity__o *__fastcall HeelPortraitMaster__GetDispEntity(
        HeelPortraitMaster_o *this,
        int32_t eventId,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x22
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int32_t *v56; // x10
  __int64 v57; // x0

  if ( (byte_4B164F1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&CondType_TypeInfo, v6, v7);
    sub_1BCA7E0(&HeelPortraitEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v20, v21);
    byte_4B164F1 = 1;
  }
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_HeelPortraitEntity__TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, v23);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v25);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        p_offset += 4;
        if ( !v28 )
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
    v31 = Enumerator->klass;
    v32 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v33 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = (__int64)&v31->vtable[*v33].method;
    }
    else
    {
LABEL_16:
      v34 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v35 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                            Enumerator,
                            *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35
      || (methodPtr_low = LOBYTE(HeelPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v35->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (HeelPortraitEntity_c *)v35->klass->_2.typeHierarchy[methodPtr_low - 1] != HeelPortraitEntity_TypeInfo )
    {
      sub_1BCAA3C(v35, v36);
    }
    if ( HIDWORD(v35[2].klass) == eventId )
    {
      monitor = (int32_t)v35[2].monitor;
      monitor_high = HIDWORD(v35[2].monitor);
      klass_low = SLODWORD(v35[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v36);
      IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v22 )
          sub_1BCAA3C(IsOpen, v43);
        items = v22->fields._items;
        v51 = Method_System_Collections_Generic_List_HeelPortraitEntity__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1BCAA3C(IsOpen, v43);
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            v37,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v53[4] = (Il2CppClass *)v37;
          sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v37, v44, v45, v46, v47, v48, v49);
        }
      }
    }
  }
  v54 = Enumerator->klass;
  v55 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v56 = &v54->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_34;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_34:
    v57 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v22;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B164F4 & 1) == 0 )
  {
    sub_1BCA7E0(&HeelPortraitMaster___c_TypeInfo, v1, v2);
    byte_4B164F4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(HeelPortraitMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  HeelPortraitMaster___c_TypeInfo->static_fields->__9 = (struct HeelPortraitMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)HeelPortraitMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall HeelPortraitMaster___c___ctor(HeelPortraitMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


HeelPortraitEntity_o *__fastcall HeelPortraitMaster___c___GetCompleteNum_b__1_0(
        HeelPortraitMaster___c_o *this,
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B164F5 & 1) == 0 )
  {
    sub_1BCA7E0(&HeelPortraitEntity_TypeInfo, data, method);
    byte_4B164F5 = 1;
  }
  if ( !data )
    return 0LL;
  methodPtr_low = LOBYTE(HeelPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(data->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (HeelPortraitEntity_c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == HeelPortraitEntity_TypeInfo )
    return (HeelPortraitEntity_o *)data;
  return 0LL;
}


void __fastcall HeelPortraitMaster___c__DisplayClass1_0___ctor(
        HeelPortraitMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall HeelPortraitMaster___c__DisplayClass1_0___GetCompleteNum_b__1(
        HeelPortraitMaster___c__DisplayClass1_0_o *this,
        HeelPortraitEntity_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCAA3C(this, 0LL);
  return data->fields.eventId == this->fields.eventId;
}
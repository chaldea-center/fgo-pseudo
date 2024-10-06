void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A7015F & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, method);
    byte_4A7015F = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    455,
    (const MethodInfo_312C568 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HeelPortraitMaster__GetCompleteNum(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v17; // x0
  System_Converter_TInput__TOutput__o *_9__1_0; // x21
  Il2CppObject *v19; // x22
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_TOutput__o *v23; // x20
  System_Func_object__bool__o *v24; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_4A7015E & 1) == 0 )
  {
    sub_1B90010(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1B90010(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v6);
    sub_1B90010(&System_Func_HeelPortraitEntity__bool__TypeInfo, v7);
    sub_1B90010(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___, v8);
    sub_1B90010(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v9);
    sub_1B90010(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v10);
    sub_1B90010(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v11);
    sub_1B90010(&HeelPortraitMaster___c_TypeInfo, v12);
    byte_4A7015E = 1;
  }
  v13 = sub_1B9025C(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1B9026C(v14, v15);
  *(_DWORD *)(v13 + 16) = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v17 = HeelPortraitMaster___c_TypeInfo;
  if ( !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo);
    v17 = HeelPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v17->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = HeelPortraitMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1B9025C(System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v19, Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, 0LL);
    static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v21, v22);
  }
  v23 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_2F12C78 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v24 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_object_(
           v25,
           (const MethodInfo_2EAB334 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_HeelPortraitEntity__o *__fastcall HeelPortraitMaster__GetDispEntity(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x22
  __int64 methodPtr_low; // x10
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0

  if ( (byte_4A7015D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1B90010(&CondType_TypeInfo, v5);
    sub_1B90010(&HeelPortraitEntity_TypeInfo, v6);
    sub_1B90010(&System_IDisposable_TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v12);
    byte_4A7015D = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v16);
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
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v25 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                            Enumerator,
                            *(_QWORD *)(v25 + 8));
    v28 = v26;
    if ( !v26
      || (methodPtr_low = LOBYTE(HeelPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v26->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
      || (HeelPortraitEntity_c *)v26->klass->_2.typeHierarchy[methodPtr_low - 1] != HeelPortraitEntity_TypeInfo )
    {
      sub_1B9026C(v26, v27);
    }
    if ( HIDWORD(v26[2].klass) == eventId )
    {
      monitor = (int32_t)v26[2].monitor;
      monitor_high = HIDWORD(v26[2].monitor);
      klass_low = SLODWORD(v26[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v13 )
          sub_1B9026C(IsOpen, v34);
        items = v13->fields._items;
        v38 = Method_System_Collections_Generic_List_HeelPortraitEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1B9026C(IsOpen, v34);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v28,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v40[4] = (Il2CppClass *)v28;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v28, v35, v36);
        }
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_34;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_34:
    v44 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v13;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70160 & 1) == 0 )
  {
    sub_1B90010(&HeelPortraitMaster___c_TypeInfo, v1);
    byte_4A70160 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  HeelPortraitMaster___c_TypeInfo->static_fields->__9 = (struct HeelPortraitMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)HeelPortraitMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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

  if ( (byte_4A70161 & 1) == 0 )
  {
    sub_1B90010(&HeelPortraitEntity_TypeInfo, data);
    byte_4A70161 = 1;
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
    sub_1B9026C(this, 0LL);
  return data->fields.eventId == this->fields.eventId;
}
void HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27626 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
    byte_4C27626 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    461,
    (const MethodInfo_3385A74 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
}


int32_t HeelPortraitMaster__GetCompleteNum(HeelPortraitMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v9; // x0
  System_Converter_TInput__TOutput__o *_9__1_0; // x21
  Il2CppObject *v11; // x22
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_TOutput__o *v15; // x20
  System_Func_object__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C27625 & 1) == 0 )
  {
    sub_1C2D490(&System_Converter_HeelPortraitEntity__HeelPortraitEntity__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
    sub_1C2D490(&System_Func_HeelPortraitEntity__bool__TypeInfo);
    sub_1C2D490(&Method_ObservableCollectionExtensions_ConvertAll_HeelPortraitEntity__HeelPortraitEntity___);
    sub_1C2D490(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__);
    sub_1C2D490(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__);
    sub_1C2D490(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C2D490(&HeelPortraitMaster___c_TypeInfo);
    byte_4C27625 = 1;
  }
  v5 = sub_1C2D6DC(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v9 = HeelPortraitMaster___c_TypeInfo;
  if ( !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo);
    v9 = HeelPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Converter_TInput__TOutput__o *)v9->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = HeelPortraitMaster___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v9->static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_HeelPortraitEntity__HeelPortraitEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v11, Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, 0);
    static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_HeelPortraitEntity__HeelPortraitEntity__o *)_9__1_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v13, v14);
  }
  v15 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_315B754 *)Method_ObservableCollectionExtensions_ConvertAll_HeelPortraitEntity__HeelPortraitEntity___);
  v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_object_(
           v17,
           (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
}


System_Collections_Generic_List_HeelPortraitEntity__o *HeelPortraitMaster__GetDispEntity(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4C27624 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_HeelPortraitEntity__GetEnumerator__);
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
    byte_4C27624 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_HeelPortraitEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_HeelPortraitEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo, 0);
    }
    v18 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                            Enumerator,
                            *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      sub_1C2D6EC(0, v19);
    if ( HIDWORD(v18[2].klass) == eventId )
    {
      monitor = (int32_t)v18[2].monitor;
      monitor_high = HIDWORD(v18[2].monitor);
      klass_low = SLODWORD(v18[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0);
      if ( IsOpen )
      {
        if ( !v5 )
          sub_1C2D6EC(IsOpen, v25);
        items = v5->fields._items;
        v29 = Method_System_Collections_Generic_List_HeelPortraitEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          sub_1C2D6EC(IsOpen, v25);
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v20,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v20;
          sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v20, v26, v27);
        }
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34];
  }
  else
  {
LABEL_32:
    v35 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v5;
}


void HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27627 & 1) == 0 )
  {
    sub_1C2D490(&HeelPortraitMaster___c_TypeInfo);
    byte_4C27627 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  HeelPortraitMaster___c_TypeInfo->static_fields->__9 = (struct HeelPortraitMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)HeelPortraitMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void HeelPortraitMaster___c___ctor(HeelPortraitMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


HeelPortraitEntity_o *HeelPortraitMaster___c___GetCompleteNum_b__1_0(
        HeelPortraitMaster___c_o *this,
        HeelPortraitEntity_o *data,
        const MethodInfo *method)
{
  return data;
}


void HeelPortraitMaster___c__DisplayClass1_0___ctor(
        HeelPortraitMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool HeelPortraitMaster___c__DisplayClass1_0___GetCompleteNum_b__1(
        HeelPortraitMaster___c__DisplayClass1_0_o *this,
        HeelPortraitEntity_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C2D6EC(this, 0);
  return data->fields.eventId == this->fields.eventId;
}
void HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970CCC & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
    byte_5970CCC = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    463,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
}


int32_t HeelPortraitMaster__GetCompleteNum(HeelPortraitMaster_o *this, int32_t eventId, const MethodInfo *method)
{
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v9; // x0
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__1_0; // x21
  Il2CppObject *v12; // x22
  struct HeelPortraitMaster___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_TOutput__o *v20; // x20
  System_Func_object__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_5970CCB & 1) == 0 )
  {
    sub_2213A60(&System_Converter_HeelPortraitEntity__HeelPortraitEntity__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
    sub_2213A60(&System_Func_HeelPortraitEntity__bool__TypeInfo);
    sub_2213A60(&Method_ObservableCollectionExtensions_ConvertAll_HeelPortraitEntity__HeelPortraitEntity___);
    sub_2213A60(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__);
    sub_2213A60(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__);
    sub_2213A60(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_2213A60(&HeelPortraitMaster___c_TypeInfo);
    byte_5970CCB = 1;
  }
  v5 = sub_2213CCC(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  *(_DWORD *)(v5 + 16) = eventId;
  v9 = HeelPortraitMaster___c_TypeInfo;
  if ( !*(&HeelPortraitMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo, v7);
    v9 = HeelPortraitMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__1_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7);
      static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_2213CCC(System_Converter_HeelPortraitEntity__HeelPortraitEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v12, Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, 0);
    v13 = HeelPortraitMaster___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Converter_HeelPortraitEntity__HeelPortraitEntity__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v13->__9__1_0, (int32_t)_9__1_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_38F3F3C *)Method_ObservableCollectionExtensions_ConvertAll_HeelPortraitEntity__HeelPortraitEntity___);
  v21 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    0);
  v22 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_object_(
           v22,
           (const MethodInfo_3879804 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
}


System_Collections_Generic_List_HeelPortraitEntity__o *HeelPortraitMaster__GetDispEntity(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x21
  int64_t klass_low; // x24
  int32_t monitor; // w22
  int32_t monitor_high; // w23
  _BOOL8 IsOpen; // x0
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_IEnumerator_T__c *v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_Collections_Generic_IEnumerator_T__o *v44; // [xsp+18h] [xbp-58h]

  if ( (byte_5970CCA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_HeelPortraitEntity__GetEnumerator__);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
    byte_5970CCA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v6);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_HeelPortraitEntity__GetEnumerator__);
  v44 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v44 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v44 )
      sub_2213CDC(v15, v16);
    v17 = v44->klass;
    v18 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_HeelPortraitEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_224BC3C(v44, System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo, 0);
    }
    v21 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                            v44,
                            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_2213CDC(0, v22);
    if ( HIDWORD(v21[2].klass) == eventId )
    {
      klass_low = SLODWORD(v21[3].klass);
      monitor = (int32_t)v21[2].monitor;
      monitor_high = HIDWORD(v21[2].monitor);
      if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v22);
      IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0);
      if ( IsOpen )
      {
        if ( !v5
          || (items = v5->fields._items,
              v36 = Method_System_Collections_Generic_List_HeelPortraitEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(IsOpen, v28);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v23,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v38[4] = (Il2CppClass *)v23;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), (int32_t)v23, v29, v30, v31, v32, v33, v34);
        }
      }
    }
  }
  if ( v44 )
  {
    v39 = v44->klass;
    v40 = *(unsigned __int16 *)&v44->klass->_2.rank;
    if ( *(_WORD *)&v44->klass->_2.rank )
    {
      v41 = &v39->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_37;
      }
      v42 = (__int64)&v39->vtable[*v41];
    }
    else
    {
LABEL_37:
      v42 = sub_224BC3C(v44, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v42)(v44, *(_QWORD *)(v42 + 8));
  }
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v5;
}


void HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970CCD & 1) == 0 )
  {
    sub_2213A60(&HeelPortraitMaster___c_TypeInfo);
    byte_5970CCD = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  HeelPortraitMaster___c_TypeInfo->static_fields->__9 = (struct HeelPortraitMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)HeelPortraitMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return data->fields.eventId == this->fields.eventId;
}
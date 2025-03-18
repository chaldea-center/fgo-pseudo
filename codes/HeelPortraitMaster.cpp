void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22264 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, method);
    byte_4C22264 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    461,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_TOutput__o *v27; // x20
  System_Func_object__bool__o *v28; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_4C22263 & 1) == 0 )
  {
    sub_1C3B764(&System_Converter_HeelPortraitEntity__HeelPortraitEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1C3B764(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v6);
    sub_1C3B764(&System_Func_HeelPortraitEntity__bool__TypeInfo, v7);
    sub_1C3B764(&Method_ObservableCollectionExtensions_ConvertAll_HeelPortraitEntity__HeelPortraitEntity___, v8);
    sub_1C3B764(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v9);
    sub_1C3B764(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v10);
    sub_1C3B764(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v11);
    sub_1C3B764(&HeelPortraitMaster___c_TypeInfo, v12);
    byte_4C22263 = 1;
  }
  v13 = sub_1C3B9B0(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1C3B9C0(v14, v15);
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
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1C3B9B0(System_Converter_HeelPortraitEntity__HeelPortraitEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v19, Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, 0LL);
    static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_HeelPortraitEntity__HeelPortraitEntity__o *)_9__1_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_3077854 *)Method_ObservableCollectionExtensions_ConvertAll_HeelPortraitEntity__HeelPortraitEntity___);
  v28 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_object_(
           v29,
           (const MethodInfo_300B768 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
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
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  Il2CppObject *v25; // x0
  __int64 v26; // x1
  Il2CppObject *v27; // x22
  int32_t monitor_high; // w23
  int32_t monitor; // w25
  int64_t klass_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0

  if ( (byte_4C22262 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_HeelPortraitEntity__GetEnumerator__,
      *(_QWORD *)&eventId);
    sub_1C3B764(&CondType_TypeInfo, v5);
    sub_1C3B764(&System_IDisposable_TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo, v7);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v11);
    byte_4C22262 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_HeelPortraitEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_HeelPortraitEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_HeelPortraitEntity__TypeInfo, 0LL);
    }
    v25 = (Il2CppObject *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
                            Enumerator,
                            *(_QWORD *)(v24 + 8));
    v27 = v25;
    if ( !v25 )
      sub_1C3B9C0(0LL, v26);
    if ( HIDWORD(v25[2].klass) == eventId )
    {
      monitor = (int32_t)v25[2].monitor;
      monitor_high = HIDWORD(v25[2].monitor);
      klass_low = SLODWORD(v25[3].klass);
      if ( !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL);
      if ( IsOpen )
      {
        if ( !v12 )
          sub_1C3B9C0(IsOpen, v32);
        items = v12->fields._items;
        v40 = Method_System_Collections_Generic_List_HeelPortraitEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1C3B9C0(IsOpen, v32);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            v27,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v42 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v42[4] = (Il2CppClass *)v27;
          sub_1C3B708((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v27, v33, v34, v35, v36, v37, v38);
        }
      }
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_32;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_32:
    v46 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(Enumerator, *(_QWORD *)(v46 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v12;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22265 & 1) == 0 )
  {
    sub_1C3B764(&HeelPortraitMaster___c_TypeInfo, v1);
    byte_4C22265 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  HeelPortraitMaster___c_TypeInfo->static_fields->__9 = (struct HeelPortraitMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)HeelPortraitMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall HeelPortraitMaster___c___ctor(HeelPortraitMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


HeelPortraitEntity_o *__fastcall HeelPortraitMaster___c___GetCompleteNum_b__1_0(
        HeelPortraitMaster___c_o *this,
        HeelPortraitEntity_o *data,
        const MethodInfo *method)
{
  return data;
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
    sub_1C3B9C0(this, 0LL);
  return data->fields.eventId == this->fields.eventId;
}
void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66EC9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, method);
    byte_4B66EC9 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    459,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
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

  if ( (byte_4B66EC8 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo, *(_QWORD *)&eventId);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v5);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v6);
    sub_1BE4ACC(&System_Func_HeelPortraitEntity__bool__TypeInfo, v7);
    sub_1BE4ACC(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___, v8);
    sub_1BE4ACC(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v9);
    sub_1BE4ACC(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v10);
    sub_1BE4ACC(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v11);
    sub_1BE4ACC(&HeelPortraitMaster___c_TypeInfo, v12);
    byte_4B66EC8 = 1;
  }
  v13 = sub_1BE4D18(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BE4D28(v14, v15);
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
    _9__1_0 = (System_Converter_TInput__TOutput__o *)sub_1BE4D18(System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__1_0, v19, Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, 0LL);
    static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v21, v22, v23, v24, v25, v26);
  }
  v27 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_2FDF480 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v28 = (System_Func_object__bool__o *)sub_1BE4D18(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v13,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2F98960 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_object_(
           v29,
           (const MethodInfo_2F74408 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
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
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int32_t *v47; // x10
  __int64 v48; // x0

  if ( (byte_4B66EC7 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_1BE4ACC(&CondType_TypeInfo, v5);
    sub_1BE4ACC(&HeelPortraitEntity_TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v11);
    sub_1BE4ACC(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v12);
    byte_4B66EC7 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BE4D28(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v16);
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
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v25 = sub_1C36AAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
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
      sub_1BE4D28(v26, v27);
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
          sub_1BE4D28(IsOpen, v34);
        items = v13->fields._items;
        v42 = Method_System_Collections_Generic_List_HeelPortraitEntity__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1BE4D28(IsOpen, v34);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            v28,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
        }
        else
        {
          v44 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v44[4] = (Il2CppClass *)v28;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v28, v35, v36, v37, v38, v39, v40);
        }
      }
    }
  }
  v45 = Enumerator->klass;
  v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v47 = &v45->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_34;
    }
    v48 = (__int64)&v45->vtable[*v47].method;
  }
  else
  {
LABEL_34:
    v48 = sub_1C36AAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(Enumerator, *(_QWORD *)(v48 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v13;
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

  if ( (byte_4B66ECA & 1) == 0 )
  {
    sub_1BE4ACC(&HeelPortraitMaster___c_TypeInfo, v1);
    byte_4B66ECA = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  HeelPortraitMaster___c_TypeInfo->static_fields->__9 = (struct HeelPortraitMaster___c_o *)v2;
  sub_1BE4A70(
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
        DataEntityBase_o *data,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B66ECB & 1) == 0 )
  {
    sub_1BE4ACC(&HeelPortraitEntity_TypeInfo, data);
    byte_4B66ECB = 1;
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
    sub_1BE4D28(this, 0LL);
  return data->fields.eventId == this->fields.eventId;
}
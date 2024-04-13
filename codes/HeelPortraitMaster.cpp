void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4A8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA4A8 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    454,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
}


int32_t __fastcall HeelPortraitMaster__GetCompleteNum(
        HeelPortraitMaster_o *this,
        int32_t eventId,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  HeelPortraitMaster___c__DisplayClass1_0_o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v40; // x0
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x21
  Il2CppObject *v43; // x22
  struct HeelPortraitMaster___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_TOutput__o *v51; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v52; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0

  if ( (byte_42EA4A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Func_HeelPortraitEntity__bool___ctor__, v15, v16, v17);
    sub_B5D5C4(&System_Func_HeelPortraitEntity__bool__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___, v21, v22, v23);
    sub_B5D5C4(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v24, v25, v26);
    sub_B5D5C4(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v27, v28, v29);
    sub_B5D5C4(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&HeelPortraitMaster___c_TypeInfo, v33, v34, v35);
    byte_42EA4A7 = 1;
  }
  v36 = (HeelPortraitMaster___c__DisplayClass1_0_o *)sub_B5D694(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  HeelPortraitMaster___c__DisplayClass1_0___ctor(v36, 0LL);
  if ( !v36 )
    sub_B5D69C(v37, v38);
  v36->fields.eventId = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v40 = HeelPortraitMaster___c_TypeInfo;
  if ( (BYTE3(HeelPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo);
    v40 = HeelPortraitMaster___c_TypeInfo;
  }
  static_fields = v40->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B5D694(System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v43,
      Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__,
      (const MethodInfo_23F738C *)Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__);
    v44 = HeelPortraitMaster___c_TypeInfo->static_fields;
    v44->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  v51 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_1E6698C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v52 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v52,
    (Il2CppObject *)v36,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_HeelPortraitEntity__bool___ctor__);
  v53 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v51,
          (System_Func_TSource__bool__o *)v52,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v53,
           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
}


System_Collections_Generic_List_HeelPortraitEntity__o *__fastcall HeelPortraitMaster__GetDispEntity(
        HeelPortraitMaster_o *this,
        int32_t eventId,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v33; // x1
  __int64 v34; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x3
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  unsigned __int64 v42; // x10
  int32_t *v43; // x11
  __int64 v44; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x0
  __int64 v46; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v47; // x22
  __int64 v48; // x10
  int32_t klass_high; // w23
  int32_t v50; // w25
  int64_t monitor_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v53; // x1
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int32_t *v56; // x11
  __int64 v57; // x0

  if ( (byte_42EA4A6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&CondType_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&HeelPortraitEntity_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v27, v28, v29);
    byte_42EA4A6 = 1;
  }
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, v31);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B5D69C(0LL, v33);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v37 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v37;
        p_offset += 4;
        if ( v37 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v34);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v41 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v42 = 0LL;
      v43 = &v41->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v43 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v44 = (__int64)&v41->vtable[*v43].method;
    }
    else
    {
LABEL_16:
      v44 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v40);
    }
    v45 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v44 + 8));
    v47 = v45;
    if ( !v45
      || (v48 = *(&HeelPortraitEntity_TypeInfo->_2.bitflags2 + 1), *(&v45->klass->_2.bitflags2 + 1) < (unsigned int)v48)
      || (HeelPortraitEntity_c *)v45->klass->_2.typeHierarchy[v48 - 1] != HeelPortraitEntity_TypeInfo )
    {
      sub_B5D69C(v45, v46);
    }
    if ( *((_DWORD *)&v45->fields + 5) == eventId )
    {
      v50 = (int32_t)v45[1].klass;
      klass_high = HIDWORD(v45[1].klass);
      monitor_low = SLODWORD(v45[1].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v50, klass_high, monitor_low, 0, 0LL);
      if ( IsOpen )
      {
        if ( !v30 )
          sub_B5D69C(IsOpen, v53);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v30,
          v47,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
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
        goto LABEL_32;
    }
    v57 = (__int64)&v54->vtable[*v56].method;
  }
  else
  {
LABEL_32:
    v57 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v40);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(Enumerator, *(_QWORD *)(v57 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v30;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E56FC & 1) == 0 )
  {
    sub_B5D5C4(&HeelPortraitMaster___c_TypeInfo, v1, v2, v3);
    byte_42E56FC = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct HeelPortraitMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  __int64 v5; // x10

  if ( (byte_42E56FD & 1) == 0 )
  {
    sub_B5D5C4(&HeelPortraitEntity_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    byte_42E56FD = 1;
  }
  if ( !data )
    return 0LL;
  v5 = *(&HeelPortraitEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v5 )
    return 0LL;
  if ( (HeelPortraitEntity_c *)data->klass->_2.typeHierarchy[v5 - 1] == HeelPortraitEntity_TypeInfo )
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
    sub_B5D69C(this, 0LL);
  return data->fields.eventId == this->fields.eventId;
}
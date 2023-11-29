void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FC162 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, method);
    byte_40FC162 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    453,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HeelPortraitMaster__GetCompleteNum(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  HeelPortraitMaster___c__DisplayClass1_0_o *v17; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v23; // x0
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x21
  Il2CppObject *v26; // x22
  struct HeelPortraitMaster___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_TOutput__o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0

  if ( (byte_40FC161 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__, *(_QWORD *)&eventId);
    sub_B16FFC(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v9);
    sub_B16FFC(&Method_System_Func_HeelPortraitEntity__bool___ctor__, v10);
    sub_B16FFC(&System_Func_HeelPortraitEntity__bool__TypeInfo, v11);
    sub_B16FFC(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___, v12);
    sub_B16FFC(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v13);
    sub_B16FFC(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v14);
    sub_B16FFC(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v15);
    sub_B16FFC(&HeelPortraitMaster___c_TypeInfo, v16);
    byte_40FC161 = 1;
  }
  v17 = (HeelPortraitMaster___c__DisplayClass1_0_o *)sub_B170CC(
                                                       HeelPortraitMaster___c__DisplayClass1_0_TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method,
                                                       v3,
                                                       v4);
  HeelPortraitMaster___c__DisplayClass1_0___ctor(v17, 0LL);
  if ( !v17 )
    sub_B170D4();
  v17->fields.eventId = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v23 = HeelPortraitMaster___c_TypeInfo;
  if ( (BYTE3(HeelPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo);
    v23 = HeelPortraitMaster___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B170CC(
                                                      System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo,
                                                      v18,
                                                      v19,
                                                      v20,
                                                      v21);
    System_Converter_string__string____ctor(
      _9__1_0,
      v26,
      Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__,
      (const MethodInfo_266B904 *)Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__);
    v27 = HeelPortraitMaster___c_TypeInfo->static_fields;
    v27->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v27->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_19DE87C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_HeelPortraitEntity__bool__TypeInfo,
                                                                             v35,
                                                                             v36,
                                                                             v37,
                                                                             v38);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v39,
    (Il2CppObject *)v17,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_HeelPortraitEntity__bool___ctor__);
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v34,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v40,
           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_HeelPortraitEntity__o *__fastcall HeelPortraitMaster__GetDispEntity(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  unsigned __int64 v23; // x10
  int32_t *v24; // x11
  __int64 v25; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v26; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x22
  __int64 v28; // x10
  int32_t klass_high; // w23
  int32_t v30; // w25
  int64_t monitor_low; // x24
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  unsigned __int64 v33; // x10
  int32_t *v34; // x11
  __int64 v35; // x0

  if ( (byte_40FC160 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B16FFC(&CondType_TypeInfo, v7);
    sub_B16FFC(&HeelPortraitEntity_TypeInfo, v8);
    sub_B16FFC(&System_IDisposable_TypeInfo, v9);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v14);
    byte_40FC160 = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_HeelPortraitEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B170D4();
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
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
    v22 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v25 + 8));
    v27 = v26;
    if ( !v26
      || (v28 = *(&HeelPortraitEntity_TypeInfo->_2.bitflags2 + 1), *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v28)
      || (HeelPortraitEntity_c *)v26->klass->_2.typeHierarchy[v28 - 1] != HeelPortraitEntity_TypeInfo )
    {
      sub_B170D4();
    }
    if ( *((_DWORD *)&v26->fields + 5) == eventId )
    {
      v30 = (int32_t)v26[1].klass;
      klass_high = HIDWORD(v26[1].klass);
      monitor_low = SLODWORD(v26[1].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      if ( CondType__IsOpen(v30, klass_high, monitor_low, 0, 0LL) )
      {
        if ( !v15 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v15,
          v27,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
      }
    }
  }
  v32 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      ++v33;
      v34 += 4;
      if ( v33 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_32:
    v35 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v15;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F68E1 & 1) == 0 )
  {
    sub_B16FFC(&HeelPortraitMaster___c_TypeInfo, v1);
    byte_40F68E1 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(HeelPortraitMaster___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)HeelPortraitMaster___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  __int64 v4; // x10

  if ( (byte_40F68E2 & 1) == 0 )
  {
    sub_B16FFC(&HeelPortraitEntity_TypeInfo, data);
    byte_40F68E2 = 1;
  }
  if ( !data )
    return 0LL;
  v4 = *(&HeelPortraitEntity_TypeInfo->_2.bitflags2 + 1);
  if ( *(&data->klass->_2.bitflags2 + 1) < (unsigned int)v4 )
    return 0LL;
  if ( (HeelPortraitEntity_c *)data->klass->_2.typeHierarchy[v4 - 1] == HeelPortraitEntity_TypeInfo )
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
    sub_B170D4();
  return data->fields.eventId == this->fields.eventId;
}
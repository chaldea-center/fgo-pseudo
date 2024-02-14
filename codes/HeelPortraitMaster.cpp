void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4215CB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, method);
    byte_4215CB3 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    453,
    (const MethodInfo_2669B38 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
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
  __int64 v13; // x1
  __int64 v14; // x1
  HeelPortraitMaster___c__DisplayClass1_0_o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v20; // x0
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x21
  Il2CppObject *v23; // x22
  struct HeelPortraitMaster___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_List_TOutput__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4215CB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__, *(_QWORD *)&eventId);
    sub_B0D8A4(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v7);
    sub_B0D8A4(&Method_System_Func_HeelPortraitEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_HeelPortraitEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___, v10);
    sub_B0D8A4(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v11);
    sub_B0D8A4(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v12);
    sub_B0D8A4(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v13);
    sub_B0D8A4(&HeelPortraitMaster___c_TypeInfo, v14);
    byte_4215CB2 = 1;
  }
  v15 = (HeelPortraitMaster___c__DisplayClass1_0_o *)sub_B0D974(
                                                       HeelPortraitMaster___c__DisplayClass1_0_TypeInfo,
                                                       *(_QWORD *)&eventId,
                                                       method);
  HeelPortraitMaster___c__DisplayClass1_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.eventId = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v20 = HeelPortraitMaster___c_TypeInfo;
  if ( (BYTE3(HeelPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo);
    v20 = HeelPortraitMaster___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B0D974(
                                                      System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo,
                                                      v17,
                                                      v18);
    System_Converter_string__string____ctor(
      _9__1_0,
      v23,
      Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__,
      (const MethodInfo_2666150 *)Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__);
    v24 = HeelPortraitMaster___c_TypeInfo->static_fields;
    v24->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v24->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_204B038 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_HeelPortraitEntity__bool__TypeInfo,
                                                                             v32,
                                                                             v33);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v15,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_HeelPortraitEntity__bool___ctor__);
  v35 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v31,
          (System_Func_TSource__bool__o *)v34,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v35,
           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v17; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x22
  __int64 v26; // x10
  int32_t klass_high; // w23
  int32_t v28; // w25
  int64_t monitor_low; // x24
  _BOOL8 IsOpen; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  unsigned __int64 v32; // x10
  int32_t *v33; // x11
  __int64 v34; // x0

  if ( (byte_4215CB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B0D8A4(&CondType_TypeInfo, v5);
    sub_B0D8A4(&HeelPortraitEntity_TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v12);
    byte_4215CB1 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_HeelPortraitEntity__TypeInfo,
                                                                                                  *(_QWORD *)&eventId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v17;
        p_offset += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_AA67A0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v23 + 8));
    v25 = v24;
    if ( !v24
      || (v26 = *(&HeelPortraitEntity_TypeInfo->_2.bitflags2 + 1), *(&v24->klass->_2.bitflags2 + 1) < (unsigned int)v26)
      || (HeelPortraitEntity_c *)v24->klass->_2.typeHierarchy[v26 - 1] != HeelPortraitEntity_TypeInfo )
    {
      sub_B0D97C(v24);
    }
    if ( *((_DWORD *)&v24->fields + 5) == eventId )
    {
      v28 = (int32_t)v24[1].klass;
      klass_high = HIDWORD(v24[1].klass);
      monitor_low = SLODWORD(v24[1].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v28, klass_high, monitor_low, 0, 0LL);
      if ( IsOpen )
      {
        if ( !v13 )
          sub_B0D97C(IsOpen);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v25,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
      }
    }
  }
  v31 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v32 = 0LL;
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      ++v32;
      v33 += 4;
      if ( v32 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v34 = (__int64)&v31->vtable[*v33].method;
  }
  else
  {
LABEL_32:
    v34 = sub_AA67A0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v13;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_4210F78 & 1) == 0 )
  {
    sub_B0D8A4(&HeelPortraitMaster___c_TypeInfo, v1);
    byte_4210F78 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(HeelPortraitMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct HeelPortraitMaster___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4210F79 & 1) == 0 )
  {
    sub_B0D8A4(&HeelPortraitEntity_TypeInfo, data);
    byte_4210F79 = 1;
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
    sub_B0D97C(this);
  return data->fields.eventId == this->fields.eventId;
}
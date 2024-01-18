void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4188F56 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__, method);
    byte_4188F56 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    453,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
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
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v19; // x0
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x21
  Il2CppObject *v22; // x22
  struct HeelPortraitMaster___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_List_TOutput__o *v30; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4188F55 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__, *(_QWORD *)&eventId);
    sub_B2C35C(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___, v7);
    sub_B2C35C(&Method_System_Func_HeelPortraitEntity__bool___ctor__, v8);
    sub_B2C35C(&System_Func_HeelPortraitEntity__bool__TypeInfo, v9);
    sub_B2C35C(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___, v10);
    sub_B2C35C(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__, v11);
    sub_B2C35C(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__, v12);
    sub_B2C35C(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo, v13);
    sub_B2C35C(&HeelPortraitMaster___c_TypeInfo, v14);
    byte_4188F55 = 1;
  }
  v15 = (HeelPortraitMaster___c__DisplayClass1_0_o *)sub_B2C42C(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  HeelPortraitMaster___c__DisplayClass1_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.eventId = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v19 = HeelPortraitMaster___c_TypeInfo;
  if ( (BYTE3(HeelPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo);
    v19 = HeelPortraitMaster___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B2C42C(System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v22,
      Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__,
      (const MethodInfo_24E064C *)Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__);
    v23 = HeelPortraitMaster___c_TypeInfo->static_fields;
    v23->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v23->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_20964A8 *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v15,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_HeelPortraitEntity__bool___ctor__);
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v30,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v32,
           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
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
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v16; // x1
  __int64 v17; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v28; // x0
  __int64 v29; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v30; // x22
  __int64 v31; // x10
  int32_t klass_high; // w23
  int32_t v33; // w25
  int64_t monitor_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  unsigned __int64 v38; // x10
  int32_t *v39; // x11
  __int64 v40; // x0

  if ( (byte_4188F54 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&eventId);
    sub_B2C35C(&CondType_TypeInfo, v5);
    sub_B2C35C(&HeelPortraitEntity_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo, v12);
    byte_4188F54 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B2C434(0LL, v14);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B2C434(0LL, v16);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v17);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v25 = 0LL;
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v26 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v25;
        v26 += 4;
        if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v23);
    }
    v28 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v27 + 8));
    v30 = v28;
    if ( !v28
      || (v31 = *(&HeelPortraitEntity_TypeInfo->_2.bitflags2 + 1), *(&v28->klass->_2.bitflags2 + 1) < (unsigned int)v31)
      || (HeelPortraitEntity_c *)v28->klass->_2.typeHierarchy[v31 - 1] != HeelPortraitEntity_TypeInfo )
    {
      sub_B2C434(v28, v29);
    }
    if ( *((_DWORD *)&v28->fields + 5) == eventId )
    {
      v33 = (int32_t)v28[1].klass;
      klass_high = HIDWORD(v28[1].klass);
      monitor_low = SLODWORD(v28[1].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v33, klass_high, monitor_low, 0, 0LL);
      if ( IsOpen )
      {
        if ( !v13 )
          sub_B2C434(IsOpen, v36);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v13,
          v30,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
      }
    }
  }
  v37 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v38 = 0LL;
    v39 = &v37->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      ++v38;
      v39 += 4;
      if ( v38 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v40 = (__int64)&v37->vtable[*v39].method;
  }
  else
  {
LABEL_32:
    v40 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(Enumerator, *(_QWORD *)(v40 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v13;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_41841F7 & 1) == 0 )
  {
    sub_B2C35C(&HeelPortraitMaster___c_TypeInfo, v1);
    byte_41841F7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct HeelPortraitMaster___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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

  if ( (byte_41841F8 & 1) == 0 )
  {
    sub_B2C35C(&HeelPortraitEntity_TypeInfo, data);
    byte_41841F8 = 1;
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
    sub_B2C434(this, 0LL);
  return data->fields.eventId == this->fields.eventId;
}
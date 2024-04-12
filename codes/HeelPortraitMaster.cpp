void __fastcall HeelPortraitMaster___ctor(HeelPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1B83 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
    byte_42B1B83 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    454,
    (const MethodInfo_23E223C *)Method_DataMasterBase_HeelPortraitMaster__HeelPortraitEntity__int___ctor__);
}


int32_t __fastcall HeelPortraitMaster__GetCompleteNum(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  HeelPortraitMaster___c__DisplayClass1_0_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x20
  HeelPortraitMaster___c_c *v9; // x0
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x8
  System_Converter_string__string__o *_9__1_0; // x21
  Il2CppObject *v12; // x22
  struct HeelPortraitMaster___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_TOutput__o *v20; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_42B1B82 & 1) == 0 )
  {
    sub_B52984(&Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__);
    sub_B52984(&System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
    sub_B52984(&Method_System_Func_HeelPortraitEntity__bool___ctor__);
    sub_B52984(&System_Func_HeelPortraitEntity__bool__TypeInfo);
    sub_B52984(&Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
    sub_B52984(&Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__);
    sub_B52984(&Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__);
    sub_B52984(&HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_B52984(&HeelPortraitMaster___c_TypeInfo);
    byte_42B1B82 = 1;
  }
  v5 = (HeelPortraitMaster___c__DisplayClass1_0_o *)sub_B52A54(HeelPortraitMaster___c__DisplayClass1_0_TypeInfo);
  HeelPortraitMaster___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.eventId = eventId;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  v9 = HeelPortraitMaster___c_TypeInfo;
  if ( (BYTE3(HeelPortraitMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !HeelPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HeelPortraitMaster___c_TypeInfo);
    v9 = HeelPortraitMaster___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__1_0 = (System_Converter_string__string__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Converter_string__string__o *)sub_B52A54(System_Converter_DataEntityBase__HeelPortraitEntity__TypeInfo);
    System_Converter_string__string____ctor(
      _9__1_0,
      v12,
      Method_HeelPortraitMaster___c__GetCompleteNum_b__1_0__,
      (const MethodInfo_23DE854 *)Method_System_Converter_DataEntityBase__HeelPortraitEntity___ctor__);
    v13 = HeelPortraitMaster___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Converter_DataEntityBase__HeelPortraitEntity__o *)_9__1_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v13->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__1_0,
          (const MethodInfo_1F7186C *)Method_ObservableCollectionExtensions_ConvertAll_DataEntityBase__HeelPortraitEntity___);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_HeelPortraitEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v5,
    Method_HeelPortraitMaster___c__DisplayClass1_0__GetCompleteNum_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_HeelPortraitEntity__bool___ctor__);
  v22 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_HeelPortraitEntity___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v22,
           (const MethodInfo_1B5EDCC *)Method_System_Linq_Enumerable_Count_HeelPortraitEntity___);
}


System_Collections_Generic_List_HeelPortraitEntity__o *__fastcall HeelPortraitMaster__GetDispEntity(
        HeelPortraitMaster_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v15; // x3
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  unsigned __int64 v17; // x10
  int32_t *v18; // x11
  __int64 v19; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x0
  __int64 v21; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x22
  __int64 v23; // x10
  int32_t klass_high; // w23
  int32_t v25; // w25
  int64_t monitor_low; // x24
  _BOOL8 IsOpen; // x0
  __int64 v28; // x1
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0

  if ( (byte_42B1B81 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&HeelPortraitEntity_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
    sub_B52984(&System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
    byte_42B1B81 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_HeelPortraitEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_HeelPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, v6);
  Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                 list,
                 (const MethodInfo_2B98BDC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_B52A5C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        p_offset += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v17 = 0LL;
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v18 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        ++v17;
        v18 += 4;
        if ( v17 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18].method;
    }
    else
    {
LABEL_16:
      v19 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v15);
    }
    v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                                                   Enumerator,
                                                                   *(_QWORD *)(v19 + 8));
    v22 = v20;
    if ( !v20
      || (v23 = *(&HeelPortraitEntity_TypeInfo->_2.bitflags2 + 1), *(&v20->klass->_2.bitflags2 + 1) < (unsigned int)v23)
      || (HeelPortraitEntity_c *)v20->klass->_2.typeHierarchy[v23 - 1] != HeelPortraitEntity_TypeInfo )
    {
      sub_B52A5C(v20, v21);
    }
    if ( *((_DWORD *)&v20->fields + 5) == eventId )
    {
      v25 = (int32_t)v20[1].klass;
      klass_high = HIDWORD(v20[1].klass);
      monitor_low = SLODWORD(v20[1].monitor);
      if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
      IsOpen = CondType__IsOpen(v25, klass_high, monitor_low, 0, 0LL);
      if ( IsOpen )
      {
        if ( !v5 )
          sub_B52A5C(IsOpen, v28);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v5,
          v22,
          (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_HeelPortraitEntity__Add__);
      }
    }
  }
  v29 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_32;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_32:
    v32 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v15);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  return (System_Collections_Generic_List_HeelPortraitEntity__o *)v5;
}


void __fastcall HeelPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct HeelPortraitMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42ACE44 & 1) == 0 )
  {
    sub_B52984(&HeelPortraitMaster___c_TypeInfo);
    byte_42ACE44 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(HeelPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = HeelPortraitMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct HeelPortraitMaster___c_o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42ACE45 & 1) == 0 )
  {
    sub_B52984(&HeelPortraitEntity_TypeInfo);
    byte_42ACE45 = 1;
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
    sub_B52A5C(this, 0LL);
  return data->fields.eventId == this->fields.eventId;
}
System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 v15; // x9
  System_Collections_Generic_List_int__o *v16; // x0
  __int64 v17; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v18; // x0
  _QWORD *exception; // x0
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-88h] BYREF
  int v22; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_418BDAB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v10);
    byte_418BDAB = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v22 = 0;
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
    sub_B2C434(v12, v13);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v21,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValues,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v23 = v21;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v23.fields.current )
    {
      v14 = System_Collections_Generic_List_object__TypeInfo;
      v15 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v23.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (System_Collections_Generic_List_object__c *)v23.fields.current->klass->_2.typeHierarchy[v15 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_B2C728(v23.fields.current);
        exception = __cxa_allocate_exception(8u);
        *exception = 0x10102464C457FLL;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
    }
    v16 = EntityScriptValueConvertLogic__ObjectListToIntList(
            (System_Collections_Generic_List_object__o *)v23.fields.current,
            (const MethodInfo *)v14);
    if ( !v16 )
      sub_B2C434(0LL, v17);
    v18 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_int___ToArray(
                                                                   v16,
                                                                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v11 )
      sub_B2C434(v18, v18);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      v18,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v11;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x19
  const MethodInfo *v15; // x2
  System_String_array_array *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  System_String_array_array *v19; // x20
  unsigned __int64 v20; // x25
  EntityScriptValueConvertLogic___c_c *v21; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v25; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v34; // x0
  __int64 v36; // x0

  if ( (byte_418BDAC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__int___, separator);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B2C35C(&Method_System_Func_string__int___ctor__, v6);
    sub_B2C35C(&System_Func_string__int__TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v11);
    sub_B2C35C(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__, v12);
    sub_B2C35C(&EntityScriptValueConvertLogic___c_TypeInfo, v13);
    byte_418BDAC = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  v16 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v15);
  if ( !v16 )
    goto LABEL_21;
  v18 = *(_QWORD *)&v16->max_length;
  v19 = v16;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)v18 )
      {
        v36 = sub_B2C460(v16);
        sub_B2C400(v36, 0LL);
      }
      v21 = EntityScriptValueConvertLogic___c_TypeInfo;
      v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v19->m_Items[v20];
      if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v21 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      static_fields = v21->static_fields;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        }
        v25 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_string__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_0,
          v25,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          (const MethodInfo_27127B0 *)Method_System_Func_string__int___ctor__);
        v26 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        v26->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v26->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
      }
      v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v22,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_string__int___);
      v34 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToArray_int_(
                                                                     v33,
                                                                     (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v14 )
        sub_B2C434(v34, v34);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v34,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_int____Add__);
      LODWORD(v18) = v19->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  if ( !v14 )
LABEL_21:
    sub_B2C434(v16, v17);
  return (System_Int32_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                       (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_int____ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
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
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x21
  System_Char_array *v18; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x0
  __int64 v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418BDAD & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, separator);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string____Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string____ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string_____ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_string____TypeInfo, v12);
    byte_418BDAD = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v23.fields.current )
      sub_B2C434(0LL, v16);
    v17 = (System_String_o *)((__int64 (*)(void))v23.fields.current->klass->vtable[3].method)();
    v18 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v18 )
      sub_B2C434(0LL, 0LL);
    if ( !v18->max_length )
    {
      v21 = sub_B2C460(v18);
      sub_B2C400(v21, 0LL);
    }
    v18->m_Items[2] = separator;
    if ( !v17 )
      sub_B2C434(v18, v18);
    v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Split(v17, v18, 0LL);
    if ( !v13 )
      sub_B2C434(v19, v19);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      v19,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v13 )
LABEL_19:
    sub_B2C434(v14, v15);
  return (System_String_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  int32_t *v15; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  int v18; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418BDA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v4);
    sub_B2C35C(&long_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_418BDA9 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v18 = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
LABEL_14:
    sub_B2C434(v11, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v19 = v17;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v13 )
      break;
    if ( !v10 )
      sub_B2C434(v13, v14);
    if ( !v19.fields.current )
      sub_B2C434(0LL, v14);
    if ( v19.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B2C728(v19.fields.current);
      goto LABEL_14;
    }
    v15 = (int32_t *)j_il2cpp_object_unbox_0(v19.fields.current);
    System_Collections_Generic_List_int___Add(
      v10,
      *v15,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return v10;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  EntityScriptValueConvertLogic___c_c *v8; // x0
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v11; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_418BDAA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_object__string___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v3);
    sub_B2C35C(&Method_System_Func_object__string___ctor__, v4);
    sub_B2C35C(&System_Func_object__string__TypeInfo, v5);
    sub_B2C35C(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__, v6);
    sub_B2C35C(&EntityScriptValueConvertLogic___c_TypeInfo, v7);
    byte_418BDAA = 1;
  }
  v8 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
    v8 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_object__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v11,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      (const MethodInfo_2713350 *)Method_System_Func_object__string___ctor__);
    v12 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    v12->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v19,
                                  (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0

  if ( (byte_4184AA6 & 1) == 0 )
  {
    sub_B2C35C(&EntityScriptValueConvertLogic___c_TypeInfo, v1);
    byte_4184AA6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EntityScriptValueConvertLogic___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall EntityScriptValueConvertLogic___c___ctor(
        EntityScriptValueConvertLogic___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall EntityScriptValueConvertLogic___c___ObjectListTo2DimensionalIntArray_b__3_0(
        EntityScriptValueConvertLogic___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return System_Int32__Parse(x, 0LL);
}


System_String_o *__fastcall EntityScriptValueConvertLogic___c___ObjectListToStringArray_b__1_0(
        EntityScriptValueConvertLogic___c_o *this,
        Il2CppObject *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}
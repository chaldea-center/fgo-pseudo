System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  __int64 v13; // x0
  System_Collections_Generic_List_object__c *v14; // x1
  __int64 v15; // x9
  System_Collections_Generic_List_int__o *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x0
  _QWORD *exception; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-88h] BYREF
  int v21; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4218BCE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v10);
    sub_B0D8A4(&System_Collections_Generic_List_object__TypeInfo, v11);
    byte_4218BCE = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v21 = 0;
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
    sub_B0D97C(v13);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValues,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v22 = v20;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v22.fields.current )
    {
      v14 = System_Collections_Generic_List_object__TypeInfo;
      v15 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v22.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (System_Collections_Generic_List_object__c *)v22.fields.current->klass->_2.typeHierarchy[v15 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_B0DC70(v22.fields.current);
        exception = __cxa_allocate_exception(8u);
        *exception = 0x10102464C457FLL;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
    }
    v16 = EntityScriptValueConvertLogic__ObjectListToIntList(
            (System_Collections_Generic_List_object__o *)v22.fields.current,
            (const MethodInfo *)v14);
    if ( !v16 )
      sub_B0D97C(0LL);
    v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_int___ToArray(
                                                                   v16,
                                                                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v12 )
      sub_B0D97C(v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v12,
      v17,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v12;
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
  __int64 v18; // x2
  __int64 v19; // x8
  System_String_array_array *v20; // x20
  unsigned __int64 v21; // x25
  EntityScriptValueConvertLogic___c_c *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x22
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v26; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v35; // x0
  __int64 v37; // x0

  if ( (byte_4218BCF & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__int___, separator);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B0D8A4(&Method_System_Func_string__int___ctor__, v6);
    sub_B0D8A4(&System_Func_string__int__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int____ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v11);
    sub_B0D8A4(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__, v12);
    sub_B0D8A4(&EntityScriptValueConvertLogic___c_TypeInfo, v13);
    byte_4218BCF = 1;
  }
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  separator,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  v16 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v15);
  if ( !v16 )
    goto LABEL_21;
  v19 = *(_QWORD *)&v16->max_length;
  v20 = v16;
  if ( (int)v19 >= 1 )
  {
    v21 = 0LL;
    do
    {
      if ( v21 >= (unsigned int)v19 )
      {
        v37 = sub_B0D9A8(v16);
        sub_B0D948(v37, 0LL);
      }
      v22 = EntityScriptValueConvertLogic___c_TypeInfo;
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v20->m_Items[v21];
      if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v22 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      static_fields = v22->static_fields;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        }
        v26 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                    System_Func_string__int__TypeInfo,
                                                                                    v17,
                                                                                    v18);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_0,
          v26,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          (const MethodInfo_2619564 *)Method_System_Func_string__int___ctor__);
        v27 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        v27->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v27->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v23,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_string__int___);
      v35 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToArray_int_(
                                                                     v34,
                                                                     (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v14 )
        sub_B0D97C(v35);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v14,
        v35,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_int____Add__);
      LODWORD(v19) = v20->max_length;
      ++v21;
    }
    while ( (__int64)v21 < (int)v19 );
  }
  if ( !v14 )
LABEL_21:
    sub_B0D97C(v16);
  return (System_Int32_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                       (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_int____ToArray__);
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
  System_String_o *v15; // x21
  System_Char_array *v16; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x0
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4218BD0 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, separator);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string____Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string____ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string_____ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_string____TypeInfo, v12);
    byte_4218BD0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string____TypeInfo,
                                                                                                  separator,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v20,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v21 = v20;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v21,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v21.fields.current )
      sub_B0D97C(0LL);
    v15 = (System_String_o *)((__int64 (*)(void))v21.fields.current->klass->vtable[3].method)();
    v16 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v16 )
      sub_B0D97C(0LL);
    if ( !v16->max_length )
    {
      v19 = sub_B0D9A8(v16);
      sub_B0D948(v19, 0LL);
    }
    v16->m_Items[2] = separator;
    if ( !v15 )
      sub_B0D97C(v16);
    v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Split(v15, v16, 0LL);
    if ( !v13 )
      sub_B0D97C(v17);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      v17,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v21,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v13 )
LABEL_19:
    sub_B0D97C(v14);
  return (System_String_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v13,
                                        (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x0
  _BOOL8 v13; // x0
  int32_t *v14; // x0
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-78h] BYREF
  int v17; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4218BCC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v5);
    sub_B0D8A4(&long_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4218BCC = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v17 = 0;
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
LABEL_14:
    sub_B0D97C(v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v18 = v16;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v13 )
      break;
    if ( !v11 )
      sub_B0D97C(v13);
    if ( !v18.fields.current )
      sub_B0D97C(0LL);
    if ( v18.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B0DC70(v18.fields.current);
      goto LABEL_14;
    }
    v14 = (int32_t *)j_il2cpp_object_unbox_0(v18.fields.current);
    System_Collections_Generic_List_int___Add(
      v11,
      *v14,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return v11;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  EntityScriptValueConvertLogic___c_c *v9; // x0
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v12; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4218BCD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_object__string___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, v4);
    sub_B0D8A4(&Method_System_Func_object__string___ctor__, v5);
    sub_B0D8A4(&System_Func_object__string__TypeInfo, v6);
    sub_B0D8A4(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__, v7);
    sub_B0D8A4(&EntityScriptValueConvertLogic___c_TypeInfo, v8);
    byte_4218BCD = 1;
  }
  v9 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
    v9 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                System_Func_object__string__TypeInfo,
                                                                                                method,
                                                                                                v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v12,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      (const MethodInfo_261A104 *)Method_System_Func_object__string___ctor__);
    v13 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    v13->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v20,
                                  (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0

  if ( (byte_4211B05 & 1) == 0 )
  {
    sub_B0D8A4(&EntityScriptValueConvertLogic___c_TypeInfo, v1);
    byte_4211B05 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(EntityScriptValueConvertLogic___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}
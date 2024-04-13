System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x19
  __int64 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_object__c *v32; // x1
  __int64 v33; // x9
  System_Collections_Generic_List_int__o *v34; // x0
  __int64 v35; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x0
  _QWORD *exception; // x0
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-88h] BYREF
  int v40; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_42ED013 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v26, v27, v28);
    byte_42ED013 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v40 = 0;
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
    sub_B5D69C(v30, v31);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValues,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v41 = v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v41,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v41.fields.current )
    {
      v32 = System_Collections_Generic_List_object__TypeInfo;
      v33 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v41.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v33
        || (System_Collections_Generic_List_object__c *)v41.fields.current->klass->_2.typeHierarchy[v33 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_B5D990(v41.fields.current);
        exception = __cxa_allocate_exception(8u);
        *exception = 0x10102464C457FLL;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
    }
    v34 = EntityScriptValueConvertLogic__ObjectListToIntList(
            (System_Collections_Generic_List_object__o *)v41.fields.current,
            (const MethodInfo *)v32);
    if ( !v34 )
      sub_B5D69C(0LL, v35);
    v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_int___ToArray(
                                                                   v34,
                                                                   (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v29 )
      sub_B5D69C(v36, v36);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v29,
      v36,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v41,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v29;
}


System_Int32_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int16 v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int16 v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int16 v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int16 v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int16 v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int16 v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int16 v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int16 v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int16 v30; // w1
  int v31; // w2
  __int64 v32; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x19
  const MethodInfo *v34; // x2
  System_String_array_array *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  System_String_array_array *v38; // x20
  unsigned __int64 v39; // x25
  EntityScriptValueConvertLogic___c_c *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x22
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v44; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v53; // x0
  __int64 v55; // x0

  if ( (byte_42ED014 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int___, separator, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_string__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_string__int__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____ToArray__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int_____ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_List_int____TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__, v27, v28, v29);
    sub_B5D5C4(&EntityScriptValueConvertLogic___c_TypeInfo, v30, v31, v32);
    byte_42ED014 = 1;
  }
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_int_____ctor__);
  v35 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v34);
  if ( !v35 )
    goto LABEL_21;
  v37 = *(_QWORD *)&v35->max_length;
  v38 = v35;
  if ( (int)v37 >= 1 )
  {
    v39 = 0LL;
    do
    {
      if ( v39 >= (unsigned int)v37 )
      {
        v55 = sub_B5D6C8(v35);
        sub_B5D668(v55, 0LL);
      }
      v40 = EntityScriptValueConvertLogic___c_TypeInfo;
      v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v38->m_Items[v39];
      if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v40 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      static_fields = v40->static_fields;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        }
        v44 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_string__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_0,
          v44,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          (const MethodInfo_2C2F87C *)Method_System_Func_string__int___ctor__);
        v45 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        v45->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v45->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51);
      }
      v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v41,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_string__int___);
      v53 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToArray_int_(
                                                                     v52,
                                                                     (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v33 )
        sub_B5D69C(v53, v53);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        v53,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_int____Add__);
      LODWORD(v37) = v38->max_length;
      ++v39;
    }
    while ( (__int64)v39 < (int)v37 );
  }
  if ( !v33 )
LABEL_21:
    sub_B5D69C(v35, v36);
  return (System_Int32_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33,
                                       (const MethodInfo_305910C *)Method_System_Collections_Generic_List_int____ToArray__);
}


System_String_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int16 v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int16 v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int16 v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int16 v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int16 v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int16 v21; // w1
  int v22; // w2
  __int64 v23; // x3
  __int16 v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int16 v27; // w1
  int v28; // w2
  __int64 v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  System_String_o *v34; // x21
  System_Char_array *v35; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x0
  __int64 v38; // x0
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42ED015 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, separator, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string____Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string____ToArray__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string_____ctor__, v24, v25, v26);
    sub_B5D5C4(&System_Collections_Generic_List_string____TypeInfo, v27, v28, v29);
    byte_42ED015 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v39,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v40 = v39;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v40,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v40.fields.current )
      sub_B5D69C(0LL, v33);
    v34 = (System_String_o *)((__int64 (*)(void))v40.fields.current->klass->vtable[3].method)();
    v35 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v35 )
      sub_B5D69C(0LL, 0LL);
    if ( !v35->max_length )
    {
      v38 = sub_B5D6C8(v35);
      sub_B5D668(v38, 0LL);
    }
    v35->m_Items[2] = separator;
    if ( !v34 )
      sub_B5D69C(v35, v35);
    v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Split(v34, v35, 0LL);
    if ( !v30 )
      sub_B5D69C(v36, v36);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v30,
      v36,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v40,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v30 )
LABEL_19:
    sub_B5D69C(v31, v32);
  return (System_String_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  int32_t *v31; // x0
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-78h] BYREF
  int v34; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42ED011 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8, v9, v10);
    sub_B5D5C4(&long_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42ED011 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
  v26 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !rawValue )
LABEL_14:
    sub_B5D69C(v27, v28);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v35 = v33;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v29 )
      break;
    if ( !v26 )
      sub_B5D69C(v29, v30);
    if ( !v35.fields.current )
      sub_B5D69C(0LL, v30);
    if ( v35.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B5D990(v35.fields.current);
      goto LABEL_14;
    }
    v31 = (int32_t *)j_il2cpp_object_unbox_0(v35.fields.current);
    System_Collections_Generic_List_int___Add(
      v26,
      *v31,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return v26;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  EntityScriptValueConvertLogic___c_c *v20; // x0
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v23; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0

  if ( (byte_42ED012 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_object__string___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_string___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_object__string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_object__string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__, v14, v15, v16);
    sub_B5D5C4(&EntityScriptValueConvertLogic___c_TypeInfo, v17, v18, v19);
    byte_42ED012 = 1;
  }
  v20 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
    v20 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_object__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v23,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_object__string___ctor__);
    v24 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    v24->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v24->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v31,
                                  (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0

  if ( (byte_42E64D9 & 1) == 0 )
  {
    sub_B5D5C4(&EntityScriptValueConvertLogic___c_TypeInfo, v1, v2, v3);
    byte_42E64D9 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EntityScriptValueConvertLogic___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}
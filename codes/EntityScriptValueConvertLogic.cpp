System_Collections_Generic_List_int____o *__fastcall EntityScriptValueConvertLogic__DoubleObjectListToIntArrayList(
        System_Collections_Generic_List_object__o *rawValues,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_object__c *v6; // x1
  __int64 v7; // x9
  System_Collections_Generic_List_int__o *v8; // x0
  __int64 v9; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v10; // x0
  _QWORD *exception; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-88h] BYREF
  int v14; // [xsp+28h] [xbp-68h]
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+30h] [xbp-60h] BYREF

  if ( (byte_4356432 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_int____Add__);
    sub_B70694(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B70694(&System_Collections_Generic_List_int____TypeInfo);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    byte_4356432 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v14 = 0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_int_____ctor__);
  if ( !rawValues )
    sub_B7076C(v4, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValues,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v15 = v13;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( v15.fields.current )
    {
      v6 = System_Collections_Generic_List_object__TypeInfo;
      v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v7
        || (System_Collections_Generic_List_object__c *)v15.fields.current->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        sub_B70A60(v15.fields.current);
        exception = __cxa_allocate_exception(8u);
        *exception = 0x10102464C457FLL;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
    }
    v8 = EntityScriptValueConvertLogic__ObjectListToIntList(
           (System_Collections_Generic_List_object__o *)v15.fields.current,
           (const MethodInfo *)v6);
    if ( !v8 )
      sub_B7076C(0LL, v9);
    v10 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_int___ToArray(
                                                                   v8,
                                                                   (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( !v3 )
      sub_B7076C(v10, v10);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      v10,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_int____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return (System_Collections_Generic_List_int____o *)v3;
}


System_Int32_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalIntArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  const MethodInfo *v6; // x2
  System_String_array_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  System_String_array_array *v10; // x20
  unsigned __int64 v11; // x25
  EntityScriptValueConvertLogic___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__3_0; // x23
  Il2CppObject *v16; // x24
  struct EntityScriptValueConvertLogic___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v25; // x0
  __int64 v27; // x0

  if ( (byte_4356433 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Func_string__int___ctor__);
    sub_B70694(&System_Func_string__int__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int____Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int____ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B70694(&System_Collections_Generic_List_int____TypeInfo);
    sub_B70694(&Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__);
    sub_B70694(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4356433 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_int_____ctor__);
  v7 = EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(rawValue, separator, v6);
  if ( !v7 )
    goto LABEL_21;
  v9 = *(_QWORD *)&v7->max_length;
  v10 = v7;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v27 = sub_B70798(v7);
        sub_B70738(v27, 0LL);
      }
      v12 = EntityScriptValueConvertLogic___c_TypeInfo;
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v10->m_Items[v11];
      if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
        v12 = EntityScriptValueConvertLogic___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        }
        v16 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_string__int__TypeInfo);
        System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
          _9__3_0,
          v16,
          Method_EntityScriptValueConvertLogic___c__ObjectListTo2DimensionalIntArray_b__3_0__,
          (const MethodInfo_29AD124 *)Method_System_Func_string__int___ctor__);
        v17 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
        v17->__9__3_0 = (struct System_Func_string__int__o *)_9__3_0;
        sub_B70630(
          (BattleServantConfConponent_o *)&v17->__9__3_0,
          (System_Int32_array **)_9__3_0,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
      }
      v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                                   v13,
                                                                   (System_Func_TSource__TResult__o *)_9__3_0,
                                                                   (const MethodInfo_1CC3CC0 *)Method_System_Linq_Enumerable_Select_string__int___);
      v25 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Linq_Enumerable__ToArray_int_(
                                                                     v24,
                                                                     (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v5 )
        sub_B7076C(v25, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v5,
        v25,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_int____Add__);
      LODWORD(v9) = v10->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v9 );
  }
  if ( !v5 )
LABEL_21:
    sub_B7076C(v7, v8);
  return (System_Int32_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                       (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_int____ToArray__);
}


System_String_array_array *__fastcall EntityScriptValueConvertLogic__ObjectListTo2DimensionalStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        uint16_t separator,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x21
  System_Char_array *v10; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x0
  __int64 v13; // x0
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4356434 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string____Add__);
    sub_B70694(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_string____ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_string_____ctor__);
    sub_B70694(&System_Collections_Generic_List_string____TypeInfo);
    byte_4356434 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string_____ctor__);
  if ( !rawValue )
    goto LABEL_19;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v15 = v14;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    if ( !v15.fields.current )
      sub_B7076C(0LL, v8);
    v9 = (System_String_o *)((__int64 (*)(void))v15.fields.current->klass->vtable[3].method)();
    v10 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v10 )
      sub_B7076C(0LL, 0LL);
    if ( !v10->max_length )
    {
      v13 = sub_B70798(v10);
      sub_B70738(v13, 0LL);
    }
    v10->m_Items[2] = separator;
    if ( !v9 )
      sub_B7076C(v10, v10);
    v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Split(v9, v10, 0LL);
    if ( !v5 )
      sub_B7076C(v11, v11);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v5,
      v11,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string____Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v15,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  if ( !v5 )
LABEL_19:
    sub_B7076C(v6, v7);
  return (System_String_array_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                        (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string____ToArray__);
}


System_Collections_Generic_List_int__o *__fastcall EntityScriptValueConvertLogic__ObjectListToIntList(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int32_t *v8; // x0
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-78h] BYREF
  int v11; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4356430 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    byte_4356430 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v11 = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !rawValue )
LABEL_14:
    sub_B7076C(v4, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rawValue,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
  v12 = v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v12,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    if ( !v6 )
      break;
    if ( !v3 )
      sub_B7076C(v6, v7);
    if ( !v12.fields.current )
      sub_B7076C(0LL, v7);
    if ( v12.fields.current->klass->_1.element_class != long_TypeInfo->_1.element_class )
    {
      sub_B70A60(v12.fields.current);
      goto LABEL_14;
    }
    v8 = (int32_t *)j_il2cpp_object_unbox_0(v12.fields.current);
    System_Collections_Generic_List_int___Add(
      v3,
      *v8,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
  return v3;
}


System_String_array *__fastcall EntityScriptValueConvertLogic__ObjectListToStringArray(
        System_Collections_Generic_List_object__o *rawValue,
        const MethodInfo *method)
{
  EntityScriptValueConvertLogic___c_c *v3; // x0
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__1_0; // x20
  Il2CppObject *v6; // x21
  struct EntityScriptValueConvertLogic___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4356431 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Select_object__string___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_B70694(&Method_System_Func_object__string___ctor__);
    sub_B70694(&System_Func_object__string__TypeInfo);
    sub_B70694(&Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__);
    sub_B70694(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_4356431 = 1;
  }
  v3 = EntityScriptValueConvertLogic___c_TypeInfo;
  if ( (BYTE3(EntityScriptValueConvertLogic___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EntityScriptValueConvertLogic___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EntityScriptValueConvertLogic___c_TypeInfo);
    v3 = EntityScriptValueConvertLogic___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_object__string__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__1_0,
      v6,
      Method_EntityScriptValueConvertLogic___c__ObjectListToStringArray_b__1_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_object__string___ctor__);
    v7 = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
    v7->__9__1_0 = (struct System_Func_object__string__o *)_9__1_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v7->__9__1_0,
      (System_Int32_array **)_9__1_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)rawValue,
                                                               (System_Func_TSource__TResult__o *)_9__1_0,
                                                               (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_object__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                  v14,
                                  (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_string___);
}


void __fastcall EntityScriptValueConvertLogic___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EntityScriptValueConvertLogic___c_StaticFields *static_fields; // x0

  if ( (byte_434F025 & 1) == 0 )
  {
    sub_B70694(&EntityScriptValueConvertLogic___c_TypeInfo);
    byte_434F025 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(EntityScriptValueConvertLogic___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EntityScriptValueConvertLogic___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EntityScriptValueConvertLogic___c_o *)v1;
  sub_B70630(static_fields);
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
    sub_B7076C(this, 0LL);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))x->klass->vtable[3].method)(
                              x,
                              x->klass->vtable[4].methodPtr);
}
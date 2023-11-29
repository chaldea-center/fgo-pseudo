void __fastcall WarBoardEventTiming___ctor(WarBoardEventTiming_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardEventTiming__ExtractBattleJoinPieceVals(
        System_Int32_array *vals,
        int32_t attackerForceId,
        bool isIncludeInvolved,
        bool isGetAlly,
        const MethodInfo *method)
{
  if ( isIncludeInvolved )
    return WarBoardEventTiming__FilterPieceValsByForce(vals, attackerForceId, isGetAlly, (const MethodInfo *)isGetAlly);
  else
    return WarBoardEventTiming__ExtractPieceValsFromValsSequence(
             vals,
             !isGetAlly,
             (const MethodInfo *)isIncludeInvolved);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardEventTiming__ExtractPieceValsFromValsSequence(
        System_Int32_array *vals,
        int32_t index,
        const MethodInfo *method)
{
  il2cpp_array_size_t v5; // w21
  il2cpp_array_size_t v6; // w20
  System_Int32_array *result; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40F6407 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&index);
    byte_40F6407 = 1;
  }
  if ( !vals )
    goto LABEL_15;
  v5 = 3 * index;
  v6 = 3 * index + 2;
  if ( (signed int)v6 < (signed int)vals->max_length )
  {
    result = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, method);
    if ( v5 >= vals->max_length )
      goto LABEL_14;
    if ( result )
    {
      max_length = result->max_length;
      if ( max_length )
      {
        result->m_Items[1] = vals->m_Items[v5 + 1];
        if ( v5 + 1 < vals->max_length && max_length > 1 )
        {
          result->m_Items[2] = vals->m_Items[v5 + 1 + 1];
          if ( v6 < vals->max_length && max_length > 2 )
          {
            result->m_Items[3] = vals->m_Items[v6 + 1];
            return result;
          }
        }
      }
LABEL_14:
      sub_B17100(result, v8, v9);
      sub_B170A0();
    }
LABEL_15:
    sub_B170D4();
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardEventTiming__FilterPieceValsByForce(
        System_Int32_array *vals,
        int32_t forceId,
        bool isGetAlly,
        const MethodInfo *method)
{
  __int64 v4; // x4
  _BOOL4 v5; // w19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  signed int max_length; // w8
  il2cpp_array_size_t v16; // w23

  v5 = isGetAlly;
  if ( (byte_40F6406 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_40F6406 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&forceId,
                                                    isGetAlly,
                                                    method,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vals )
    goto LABEL_16;
  max_length = vals->max_length;
  if ( max_length >= 3 )
  {
    v16 = 2;
    while ( v16 - 2 < max_length )
    {
      v13 = (unsigned int)vals->m_Items[v16 - 2 + 1];
      if ( ((((_DWORD)v13 == forceId) ^ v5) & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v11,
          v13,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v16 - 1 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v11,
          vals->m_Items[v16 - 1 + 1],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v16 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v11,
          vals->m_Items[v16 + 1],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = vals->max_length;
      v16 += 3;
      if ( (int)v16 >= max_length )
        goto LABEL_13;
    }
    sub_B17100(v12, v13, v14);
    sub_B170A0();
  }
LABEL_13:
  if ( !v11 )
LABEL_16:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v9; // w22
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  WarBoardPieceData_array *v14; // x23
  unsigned int v15; // w27
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x24

  if ( (byte_40F6402 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F6402 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( isMy )
  {
    if ( !monitor )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v6 = !isMy;
  }
  else
  {
    if ( !monitor )
      goto LABEL_27;
    maxForceId_k__BackingField = monitor->fields._maxForceId_k__BackingField;
    v6 = 1;
  }
  if ( v6 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = monitor->fields._maxGroupId_k__BackingField;
    v7 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v6 > maxForceId_k__BackingField )
        return v7;
    }
    v9 = 0;
    while ( 1 )
    {
      Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, v6, v9, 0LL);
      if ( !Pieces_22598072 )
        goto LABEL_27;
      max_length = Pieces_22598072->max_length;
      v14 = Pieces_22598072;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        sub_B17100(Pieces_22598072, v11, v12);
        sub_B170A0();
      }
      v16 = &v14->obj.klass + (int)v15;
      v17 = v16[4];
      if ( !v17 )
        break;
      Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v16[4], 0LL);
      if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 && !LOBYTE(v17->_1.klass) )
        v7 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4) ^ 1;
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_B170D4();
  }
  return 0;
}


int32_t __fastcall WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v9; // w22
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  WarBoardPieceData_array *v14; // x23
  unsigned int v15; // w27
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x24

  if ( (byte_40F6403 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F6403 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( isMy )
  {
    if ( !monitor )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v6 = !isMy;
  }
  else
  {
    if ( !monitor )
      goto LABEL_27;
    maxForceId_k__BackingField = monitor->fields._maxForceId_k__BackingField;
    v6 = 1;
  }
  if ( v6 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = monitor->fields._maxGroupId_k__BackingField;
    v7 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v6 > maxForceId_k__BackingField )
        return v7;
    }
    v9 = 0;
    while ( 1 )
    {
      Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, v6, v9, 0LL);
      if ( !Pieces_22598072 )
        goto LABEL_27;
      max_length = Pieces_22598072->max_length;
      v14 = Pieces_22598072;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        sub_B17100(Pieces_22598072, v11, v12);
        sub_B170A0();
      }
      v16 = &v14->obj.klass + (int)v15;
      v17 = v16[4];
      if ( !v17 )
        break;
      Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v16[4], 0LL);
      if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 && !LOBYTE(v17->_1.klass) )
        v7 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_ICollection_o *SquareIndicesToAdd; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_List_int__o *v15; // x19
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  _QWORD *monitor; // x8
  __int64 v22; // x22
  unsigned __int64 v23; // x23
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  __int64 v34; // x8
  System_Func_int__bool__o *v35; // x21

  if ( (byte_40F63FF & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, method);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v3);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v5);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B16FFC(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__, v8);
    sub_B16FFC(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo, v9);
    byte_40F63FF = 1;
  }
  if ( !entity )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(entity, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0LL) )
    return 0;
  v15 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v11,
                                                    v12,
                                                    v13,
                                                    v14);
  System_Collections_Generic_List_int____ctor_49346956(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = Instance[4].monitor) == 0LL || (v22 = monitor[6]) == 0 )
LABEL_18:
    sub_B170D4();
  if ( *(int *)(v22 + 24) < 1 )
    return 0;
  v23 = 0LL;
  while ( 1 )
  {
    v24 = sub_B170CC(WarBoardEventTiming___c__DisplayClass22_0_TypeInfo, v17, v18, v19, v20);
    WarBoardEventTiming___c__DisplayClass22_0___ctor((WarBoardEventTiming___c__DisplayClass22_0_o *)v24, 0LL);
    if ( v23 >= *(unsigned int *)(v22 + 24) )
    {
      sub_B17100(v25, v26, v27);
      sub_B170A0();
    }
    if ( !v24 )
      goto LABEL_18;
    v33 = *(System_Int32_array ***)(v22 + 32 + 8 * v23);
    *(_QWORD *)(v24 + 16) = v33;
    sub_B16F98((BattleServantConfConponent_o *)(v24 + 16), v33, v27, v28, v29, v30, v31, v32);
    v34 = *(_QWORD *)(v24 + 16);
    if ( !v34 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v34 + 60) )
    {
      v35 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v17, v18, v19, v20);
      System_Func_int__bool____ctor(
        v35,
        (Il2CppObject *)v24,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v15,
             (System_Func_T__bool__o *)v35,
             (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v23 >= *(int *)(v22 + 24) )
      return 0;
  }
}


bool __fastcall WarBoardEventTiming__IsAnyPieceValsMatched(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  bool result; // w0
  signed int max_length; // w8
  signed int v7; // w8
  il2cpp_array_size_t v8; // w22
  System_Int32_array *v9; // x0
  System_Int32_array *v10; // x1
  System_Int32_array *v11; // x21
  unsigned int v12; // w8
  il2cpp_array_size_t v13; // w24
  unsigned int v14; // w8
  il2cpp_array_size_t v15; // w25

  if ( (byte_40F6405 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, vals);
    byte_40F6405 = 1;
  }
  result = 0;
  if ( condVals )
  {
    if ( vals )
    {
      max_length = condVals->max_length;
      if ( !(max_length % 3) && max_length >= 3 )
      {
        v7 = vals->max_length;
        result = 0;
        if ( v7 >= 3 && !(v7 % 3) )
        {
          v8 = 0;
          while ( 1 )
          {
            v9 = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, method);
            if ( v8 >= condVals->max_length )
              goto LABEL_32;
            v11 = v9;
            if ( !v9 )
LABEL_33:
              sub_B170D4();
            v12 = v9->max_length;
            if ( !v12
              || (v9->m_Items[1] = condVals->m_Items[v8 + 1], v8 + 1 >= condVals->max_length)
              || v12 <= 1
              || (v9->m_Items[2] = condVals->m_Items[v8 + 1 + 1], v8 + 2 >= condVals->max_length)
              || v12 <= 2 )
            {
LABEL_32:
              sub_B17100(v9, v10, method);
              sub_B170A0();
            }
            v9->m_Items[3] = condVals->m_Items[v8 + 2 + 1];
            if ( (int)vals->max_length >= 1 )
              break;
LABEL_28:
            v8 += 3;
            result = 0;
            if ( (signed int)v8 >= (signed int)condVals->max_length )
              return result;
          }
          v13 = 0;
          while ( 1 )
          {
            v9 = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, method);
            if ( v13 >= vals->max_length )
              goto LABEL_32;
            v10 = v9;
            if ( !v9 )
              goto LABEL_33;
            v14 = v9->max_length;
            if ( !v14 )
              goto LABEL_32;
            v9->m_Items[1] = vals->m_Items[v13 + 1];
            if ( v13 + 1 >= vals->max_length )
              goto LABEL_32;
            if ( v14 <= 1 )
              goto LABEL_32;
            v15 = v13 + 2;
            v9->m_Items[2] = vals->m_Items[v13 + 1 + 1];
            if ( v13 + 2 >= vals->max_length || v14 <= 2 )
              goto LABEL_32;
            v9->m_Items[3] = vals->m_Items[v13 + 2 + 1];
            if ( WarBoardEventTiming__IsCondPiece(v11, v9, method) )
              return 1;
            v13 += 3;
            if ( (signed int)(v15 + 1) >= (signed int)vals->max_length )
              goto LABEL_28;
          }
        }
      }
    }
  }
  return result;
}


bool __fastcall WarBoardEventTiming__IsAttackTargetPiece(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Int32_array *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Int32_array *v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_40F6400 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B16FFC(&Method_System_Linq_Enumerable_Take_int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_40F6400 = 1;
  }
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_19C4288 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_19C4288 *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsCondPiece(v8, v10, v11) )
    return 0;
  if ( !condVals )
    sub_B170D4();
  if ( (int)condVals->max_length < 4 )
    return 1;
  v13 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_19C3F34 *)Method_System_Linq_Enumerable_Skip_int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_19C3F34 *)Method_System_Linq_Enumerable_Skip_int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsCondPiece(v14, v16, v17);
}


bool __fastcall WarBoardEventTiming__IsAttackTargetPieceByAnyAttackers(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Int32_array *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Int32_array *v10; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_40F6401 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B16FFC(&Method_System_Linq_Enumerable_Take_int___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_40F6401 = 1;
  }
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_19C4288 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_19C4288 *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsCondPiece(v8, v10, v11) )
    return 0;
  if ( !condVals )
    sub_B170D4();
  if ( (int)condVals->max_length < 4 )
    return 1;
  v13 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_19C3F34 *)Method_System_Linq_Enumerable_Skip_int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_19C3F34 *)Method_System_Linq_Enumerable_Skip_int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v14, v16, v17);
}


bool __fastcall WarBoardEventTiming__IsAttackWallAfter(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsAttackWallBefore(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsCondPiece(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  __int64 v3; // x8
  int32_t v4; // w10
  int32_t v5; // w9
  int32_t v6; // w8

  if ( !condVals )
LABEL_23:
    sub_B170D4();
  v3 = *(_QWORD *)&condVals->max_length;
  if ( !v3 )
    return 1;
  if ( !(_DWORD)v3 )
    goto LABEL_24;
  v4 = condVals->m_Items[1];
  if ( (int)v3 >= 2 )
  {
    v5 = condVals->m_Items[2];
    if ( (_DWORD)v3 != 2 )
    {
      v6 = condVals->m_Items[3];
      if ( (v4 & 0x80000000) != 0 )
        goto LABEL_13;
      goto LABEL_8;
    }
  }
  else
  {
    v5 = -1;
  }
  v6 = -1;
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_13;
LABEL_8:
  if ( !vals )
    goto LABEL_23;
  if ( !vals->max_length )
    goto LABEL_24;
  if ( v4 != vals->m_Items[1] )
    return 0;
LABEL_13:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( !vals )
      goto LABEL_23;
    if ( vals->max_length <= 1 )
      goto LABEL_24;
    if ( v5 != vals->m_Items[2] )
      return 0;
  }
  if ( (v6 & 0x80000000) != 0 )
    return 1;
  if ( !vals )
    goto LABEL_23;
  if ( vals->max_length <= 2 )
  {
LABEL_24:
    sub_B17100(condVals, vals, method);
    sub_B170A0();
  }
  return v6 == vals->m_Items[3];
}


bool __fastcall WarBoardEventTiming__IsContinueWarBoard(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsDefeatEnemyAfter(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 DefeatPieceCount; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  if ( !condVals || !*(_QWORD *)&condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !condVals->max_length )
  {
    sub_B17100(DefeatPieceCount, v4, v5);
    sub_B170A0();
  }
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatEnemyBefore(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 DefeatPieceCount; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  if ( !condVals || !*(_QWORD *)&condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !condVals->max_length )
  {
    sub_B17100(DefeatPieceCount, v4, v5);
    sub_B170A0();
  }
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  __int64 v1; // x1
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x19
  int maxForceId_k__BackingField; // w26
  int32_t maxGroupId_k__BackingField; // w27
  int v6; // w25
  int v7; // w24
  int32_t v8; // w20
  int32_t v9; // w21
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w28
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x23
  int v18; // w8

  if ( (byte_40F63FC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    byte_40F63FC = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_27;
  maxForceId_k__BackingField = monitor->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField >= 1 )
  {
    maxGroupId_k__BackingField = monitor->fields._maxGroupId_k__BackingField;
    v6 = 0;
    v7 = 0;
    v8 = 1;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_19:
      if ( ++v8 > maxForceId_k__BackingField )
        goto LABEL_22;
    }
    v9 = 0;
    while ( 1 )
    {
      Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, v8, v9, 0LL);
      if ( !Pieces_22598072 )
        goto LABEL_27;
      max_length = Pieces_22598072->max_length;
      v14 = Pieces_22598072;
      if ( max_length >= 1 )
        break;
LABEL_18:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_19;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        sub_B17100(Pieces_22598072, v11, v12);
        sub_B170A0();
      }
      v16 = &v14->obj.klass + (int)v15;
      v17 = v16[4];
      if ( !v17 )
        break;
      Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v16[4], 0LL);
      if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 && !LOBYTE(v17->_1.klass) )
      {
        ++v6;
        v7 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_18;
    }
LABEL_27:
    sub_B170D4();
  }
  v7 = 0;
  v6 = 0;
LABEL_22:
  if ( v6 >= 0 )
    v18 = v6;
  else
    v18 = v6 + 1;
  return v18 >> 1 < v7;
}


bool __fastcall WarBoardEventTiming__IsEnemySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_B170D4();
  if ( !condVals->max_length )
  {
    sub_B17100(AlivePieceCount, v4, v5);
    sub_B170A0();
  }
  return (int)AlivePieceCount <= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsGetTreasureBoxAfter(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsGetTreasureBoxBefore(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsInitialWarBoard(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsMySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0
  __int64 v4; // x1
  __int64 v5; // x2

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(1, method);
  if ( !condVals )
    sub_B170D4();
  if ( !condVals->max_length )
  {
    sub_B17100(AlivePieceCount, v4, v5);
    sub_B170A0();
  }
  return (int)AlivePieceCount <= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  if ( (byte_40F63FD & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F63FD = 1;
  }
  if ( turns && *(_QWORD *)&turns->max_length )
    JUMPOUT(0x114DEA4LL);
  return 1;
}


bool __fastcall WarBoardEventTiming__IsOpen(
        int32_t eventTiming,
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  int v5; // w8
  const MethodInfo *v6; // x0

  v5 = eventTiming - 1;
  v6 = (const MethodInfo *)((unsigned int)&dword_0 + 1);
  switch ( v5 )
  {
    case 0:
    case 1:
    case 41:
      LOBYTE(v6) = WarBoardEventTiming__IsSpecifiedPieceAttack(condVals, vals, entity, (const MethodInfo *)entity);
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 11:
    case 12:
    case 25:
    case 26:
    case 27:
    case 28:
    case 43:
    case 44:
      return (char)v6;
    case 9:
    case 10:
      LOBYTE(v6) = WarBoardEventTiming__IsDefeatHalfEnemy(v6);
      break;
    case 13:
    case 14:
    case 15:
    case 16:
      LOBYTE(v6) = WarBoardEventTiming__IsNowTurn(condVals, (const MethodInfo *)condVals);
      break;
    case 18:
    case 19:
    case 42:
      LOBYTE(v6) = WarBoardEventTiming__IsSpecifiedPieceDefense(condVals, vals, entity, (const MethodInfo *)entity);
      break;
    case 21:
      LOBYTE(v6) = WarBoardEventTiming__IsMySvtNumBelow(condVals, (const MethodInfo *)condVals);
      break;
    case 22:
      LOBYTE(v6) = WarBoardEventTiming__IsEnemySvtNumBelow(condVals, (const MethodInfo *)condVals);
      break;
    case 23:
      LOBYTE(v6) = WarBoardEventTiming__IsDefeatEnemyBefore(condVals, (const MethodInfo *)condVals);
      break;
    case 24:
      LOBYTE(v6) = WarBoardEventTiming__IsDefeatEnemyAfter(condVals, (const MethodInfo *)condVals);
      break;
    case 29:
    case 37:
      LOBYTE(v6) = WarBoardEventTiming__IsPieceMoveBefore(condVals, vals, (const MethodInfo *)vals);
      break;
    case 31:
    case 32:
    case 33:
    case 34:
      LOBYTE(v6) = WarBoardEventTiming__IsAttackTargetPieceByAnyAttackers(condVals, vals, (const MethodInfo *)vals);
      break;
    case 35:
    case 36:
      LOBYTE(v6) = WarBoardEventTiming__IsPieceMoveToTargetSquares(condVals, entity, (const MethodInfo *)vals);
      break;
    case 38:
    case 39:
    case 40:
      LOBYTE(v6) = WarBoardEventTiming__IsAnyPieceValsMatched(condVals, vals, (const MethodInfo *)vals);
      break;
    default:
      LOBYTE(v6) = 0;
      break;
  }
  return (char)v6;
}


bool __fastcall WarBoardEventTiming__IsPieceMoveBefore(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  il2cpp_array_size_t i; // w22
  System_Int32_array *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  unsigned int max_length; // w8
  il2cpp_array_size_t v10; // w23

  if ( (byte_40F6404 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, vals);
    byte_40F6404 = 1;
  }
  if ( !condVals )
LABEL_18:
    sub_B170D4();
  if ( (int)condVals->max_length < 3 )
    return 0;
  for ( i = 0; ; i += 3 )
  {
    v6 = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, method);
    if ( i >= condVals->max_length )
      goto LABEL_17;
    if ( !v6 )
      goto LABEL_18;
    max_length = v6->max_length;
    if ( !max_length
      || (v6->m_Items[1] = condVals->m_Items[i + 1], i + 1 >= condVals->max_length)
      || max_length <= 1
      || (v10 = i + 2, v6->m_Items[2] = condVals->m_Items[i + 1 + 1], i + 2 >= condVals->max_length)
      || max_length <= 2 )
    {
LABEL_17:
      sub_B17100(v6, v7, v8);
      sub_B170A0();
    }
    v6->m_Items[3] = condVals->m_Items[i + 2 + 1];
    if ( WarBoardEventTiming__IsCondPiece(v6, vals, v8) )
      break;
    if ( (signed int)(v10 + 1) >= (signed int)condVals->max_length )
      return 0;
  }
  return 1;
}


bool __fastcall WarBoardEventTiming__IsPieceMoveToTargetSquares(
        System_Int32_array *condVals,
        WarBoardEventEntity_o *entity,
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
  const MethodInfo *v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_int__o *v19; // x19
  __int64 v20; // x0
  const MethodInfo *v21; // x1
  System_String_array **v22; // x2
  int32_t v23; // w22
  int32_t v24; // w23
  int32_t v25; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  WarBoardPieceData_array *v34; // x20
  unsigned __int64 v35; // x23
  __int64 v36; // x21
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  __int64 v43; // x8
  System_Func_int__bool__o *v44; // x22

  if ( (byte_40F63FE & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, entity);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v5);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__, v12);
    sub_B16FFC(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo, v13);
    byte_40F63FE = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0LL) )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v14);
  if ( !condVals )
    goto LABEL_28;
  if ( (int)condVals->max_length < 4 )
    return 0;
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v14,
                                                    v15,
                                                    v16,
                                                    v17);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !condVals->max_length )
    goto LABEL_29;
  if ( !v19 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Add(
    v19,
    condVals->m_Items[1],
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  if ( condVals->max_length < 4 )
  {
LABEL_29:
    sub_B17100(v20, v21, v22);
    sub_B170A0();
  }
  if ( !entity )
    goto LABEL_28;
  v23 = condVals->m_Items[2];
  v24 = condVals->m_Items[3];
  v25 = condVals->m_Items[4];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        v21);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v19,
      SquareIndicesToAdd,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, v23, v24, 0LL)) == 0LL )
  {
LABEL_28:
    sub_B170D4();
  }
  v34 = Pieces_22598072;
  if ( (int)Pieces_22598072->max_length < 1 )
    return 0;
  v35 = 0LL;
  while ( 1 )
  {
    v36 = sub_B170CC(WarBoardEventTiming___c__DisplayClass21_0_TypeInfo, v30, v31, v32, v33);
    WarBoardEventTiming___c__DisplayClass21_0___ctor((WarBoardEventTiming___c__DisplayClass21_0_o *)v36, 0LL);
    if ( v35 >= v34->max_length )
      goto LABEL_29;
    if ( !v36 )
      goto LABEL_28;
    v42 = (System_Int32_array **)v34->m_Items[v35];
    *(_QWORD *)(v36 + 16) = v42;
    sub_B16F98((BattleServantConfConponent_o *)(v36 + 16), v42, v22, v37, v38, v39, v40, v41);
    v43 = *(_QWORD *)(v36 + 16);
    if ( !v43 )
      goto LABEL_28;
    if ( !*(_BYTE *)(v43 + 60) && ((v25 & 0x80000000) != 0 || v25 == *(_DWORD *)(v43 + 28)) )
    {
      v44 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v30, v31, v32, v33);
      System_Func_int__bool____ctor(
        v44,
        (Il2CppObject *)v36,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v19,
             (System_Func_T__bool__o *)v44,
             (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v35 >= (int)v34->max_length )
      return 0;
  }
}


bool __fastcall WarBoardEventTiming__IsSpecifiedPieceAttack(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v18; // x2
  System_Int32_array *v19; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Int32_array *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x0
  System_Int32_array *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  const MethodInfo *v30; // x2

  if ( (byte_40F63FA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B16FFC(&Method_System_Linq_Enumerable_Take_int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    byte_40F63FA = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)vals, 0LL) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0LL);
  if ( IsNullOrEmpty )
    return 1;
  if ( !condVals )
    goto LABEL_22;
  if ( (int)condVals->max_length <= 2 )
  {
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v12);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v18);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
  {
    sub_B17100(IsNullOrEmpty, v11, v12);
    sub_B170A0();
  }
  if ( !entity )
LABEL_22:
    sub_B170D4();
  v13 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, v11) )
    v16 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 1, v15);
  else
    v16 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v14);
  v19 = v16;
  v20 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_19C4288 *)Method_System_Linq_Enumerable_Take_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v21, v19, v22) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, v23) )
    v26 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 0, v25);
  else
    v26 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v24);
  v27 = v26;
  v28 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_19C3F34 *)Method_System_Linq_Enumerable_Skip_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v29, v27, v30);
}


bool __fastcall WarBoardEventTiming__IsSpecifiedPieceDefense(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w22
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x3
  System_Int32_array *v16; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v18; // x2
  System_Int32_array *v19; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Int32_array *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  System_Int32_array *v26; // x0
  System_Int32_array *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Int32_array *v29; // x0
  const MethodInfo *v30; // x2

  if ( (byte_40F63FB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B16FFC(&Method_System_Linq_Enumerable_Take_int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    byte_40F63FB = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)vals, 0LL) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0LL);
  if ( IsNullOrEmpty )
    return 1;
  if ( !condVals )
    goto LABEL_22;
  if ( (int)condVals->max_length <= 2 )
  {
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v12);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v18);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
  {
    sub_B17100(IsNullOrEmpty, v11, v12);
    sub_B170A0();
  }
  if ( !entity )
LABEL_22:
    sub_B170D4();
  v13 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, v11) )
    v16 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 0, v15);
  else
    v16 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v14);
  v19 = v16;
  v20 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_19C4288 *)Method_System_Linq_Enumerable_Take_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v21, v19, v22) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, v23) )
    v26 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 1, v25);
  else
    v26 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v24);
  v27 = v26;
  v28 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_19C3F34 *)Method_System_Linq_Enumerable_Skip_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v29, v27, v30);
}


bool __fastcall WarBoardEventTiming__IsWarBoardLoseAfter(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsWarBoardLoseBefore(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsWarBoardStartAfter(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsWarBoardStartBefore(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsWarBoardWinAfter(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsWarBoardWinBefore(const MethodInfo *method)
{
  return 1;
}


bool __fastcall WarBoardEventTiming__IsWinCondAchieve(const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardEventTiming___c__DisplayClass21_0___ctor(
        WarBoardEventTiming___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardEventTiming___c__DisplayClass21_0___IsPieceMoveToTargetSquares_b__0(
        WarBoardEventTiming___c__DisplayClass21_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_B170D4();
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}


void __fastcall WarBoardEventTiming___c__DisplayClass22_0___ctor(
        WarBoardEventTiming___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardEventTiming___c__DisplayClass22_0___IsAnyPieceMoveToTargetSquares_b__0(
        WarBoardEventTiming___c__DisplayClass22_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_B170D4();
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
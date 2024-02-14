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
  System_Int32_array *v4; // x19
  int v5; // w21
  int v6; // w20
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x0

  v4 = vals;
  if ( (byte_4210DB8 & 1) == 0 )
  {
    vals = (System_Int32_array *)sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&index);
    byte_4210DB8 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  v5 = 3 * index;
  v6 = 3 * index + 2;
  if ( v6 < (signed int)v4->max_length )
  {
    vals = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
    if ( v5 >= v4->max_length )
      goto LABEL_14;
    if ( vals )
    {
      max_length = vals->max_length;
      if ( max_length )
      {
        vals->m_Items[1] = v4->m_Items[v5 + 1];
        if ( v5 + 1 < v4->max_length && max_length > 1 )
        {
          vals->m_Items[2] = v4->m_Items[v5 + 2];
          if ( v6 < v4->max_length && max_length > 2 )
          {
            vals->m_Items[3] = v4->m_Items[v6 + 1];
            return vals;
          }
        }
      }
LABEL_14:
      v8 = sub_B0D9A8(vals);
      sub_B0D948(v8, 0LL);
    }
LABEL_15:
    sub_B0D97C(vals);
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
  _BOOL4 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x22
  __int64 v11; // x0
  signed int max_length; // w8
  il2cpp_array_size_t v13; // w23
  int32_t v14; // w1
  __int64 v16; // x0

  v4 = isGetAlly;
  if ( (byte_4210DB7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4210DB7 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&forceId,
                                                    isGetAlly);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vals )
    goto LABEL_16;
  max_length = vals->max_length;
  if ( max_length >= 3 )
  {
    v13 = 2;
    while ( v13 - 2 < max_length )
    {
      v14 = vals->m_Items[v13 - 2 + 1];
      if ( (((v14 == forceId) ^ v4) & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v10,
          v14,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v13 - 1 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v10,
          vals->m_Items[v13 - 1 + 1],
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v13 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v10,
          vals->m_Items[v13 + 1],
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = vals->max_length;
      v13 += 3;
      if ( (int)v13 >= max_length )
        goto LABEL_13;
    }
    v16 = sub_B0D9A8(v11);
    sub_B0D948(v16, 0LL);
  }
LABEL_13:
  if ( !v10 )
LABEL_16:
    sub_B0D97C(v11);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
{
  void *Instance; // x0
  WarBoardData_o *v4; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v9; // w22
  int v10; // w8
  _DWORD *v11; // x23
  unsigned int v12; // w27
  char *v13; // x8
  __int64 v14; // x24
  __int64 v16; // x0

  if ( (byte_4210DB3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4210DB3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v4 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( isMy )
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v6 = !isMy;
  }
  else
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = v4->fields._maxForceId_k__BackingField;
    v6 = 1;
  }
  if ( v6 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = v4->fields._maxGroupId_k__BackingField;
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
      Instance = WarBoardData__GetPieces_22066704(v4, v6, v9, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v10 = *((_DWORD *)Instance + 6);
      v11 = Instance;
      if ( v10 >= 1 )
        break;
LABEL_23:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v16 = sub_B0D9A8(Instance);
        sub_B0D948(v16, 0LL);
      }
      v13 = (char *)&v11[2 * v12];
      v14 = *((_QWORD *)v13 + 4);
      if ( !v14 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v13 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v14 + 120) )
        v7 += *(unsigned __int8 *)(v14 + 60) ^ 1;
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        goto LABEL_23;
    }
LABEL_27:
    sub_B0D97C(Instance);
  }
  return 0;
}


int32_t __fastcall WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
{
  void *Instance; // x0
  WarBoardData_o *v4; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v9; // w22
  int v10; // w8
  _DWORD *v11; // x23
  unsigned int v12; // w27
  char *v13; // x8
  __int64 v14; // x24
  __int64 v16; // x0

  if ( (byte_4210DB4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4210DB4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v4 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( isMy )
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v6 = !isMy;
  }
  else
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = v4->fields._maxForceId_k__BackingField;
    v6 = 1;
  }
  if ( v6 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = v4->fields._maxGroupId_k__BackingField;
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
      Instance = WarBoardData__GetPieces_22066704(v4, v6, v9, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v10 = *((_DWORD *)Instance + 6);
      v11 = Instance;
      if ( v10 >= 1 )
        break;
LABEL_23:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v16 = sub_B0D9A8(Instance);
        sub_B0D948(v16, 0LL);
      }
      v13 = (char *)&v11[2 * v12];
      v14 = *((_QWORD *)v13 + 4);
      if ( !v14 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v13 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v14 + 120) )
        v7 += *(unsigned __int8 *)(v14 + 60);
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        goto LABEL_23;
    }
LABEL_27:
    sub_B0D97C(Instance);
  }
  return 0;
}


bool __fastcall WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardEventEntity_o *v2; // x19
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
  System_Collections_Generic_List_int__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Int32_array *eventTimingVals; // x8
  __int64 v17; // x22
  unsigned __int64 v18; // x23
  WarBoardEventTiming___c__DisplayClass22_0_o *v19; // x20
  struct WarBoardPieceData_o *v20; // x1
  struct WarBoardPieceData_o *targetPiece; // x8
  System_Func_int__bool__o *v22; // x21
  __int64 v24; // x0

  v2 = entity;
  if ( (byte_4210DB0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, method);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v3);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B0D8A4(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__, v8);
    entity = (WarBoardEventEntity_o *)sub_B0D8A4(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo, v9);
    byte_4210DB0 = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(v2, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0LL) )
    return 0;
  v13 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v11, v12);
  System_Collections_Generic_List_int____ctor_50000796(
    v13,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  entity = (WarBoardEventEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !entity
    || (eventTimingVals = entity[5].fields.eventTimingVals) == 0LL
    || (v17 = *(_QWORD *)&eventTimingVals->m_Items[5]) == 0 )
  {
LABEL_18:
    sub_B0D97C(entity);
  }
  if ( *(int *)(v17 + 24) < 1 )
    return 0;
  v18 = 0LL;
  while ( 1 )
  {
    v19 = (WarBoardEventTiming___c__DisplayClass22_0_o *)sub_B0D974(
                                                           WarBoardEventTiming___c__DisplayClass22_0_TypeInfo,
                                                           v14,
                                                           v15);
    WarBoardEventTiming___c__DisplayClass22_0___ctor(v19, 0LL);
    if ( v18 >= *(unsigned int *)(v17 + 24) )
    {
      v24 = sub_B0D9A8(entity);
      sub_B0D948(v24, 0LL);
    }
    if ( !v19 )
      goto LABEL_18;
    v20 = *(struct WarBoardPieceData_o **)(v17 + 32 + 8 * v18);
    v19->fields.targetPiece = v20;
    sub_B0D840(&v19->fields, v20);
    targetPiece = v19->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_18;
    if ( !targetPiece->fields._isDead_k__BackingField )
    {
      v22 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v14, v15);
      System_Func_int__bool____ctor(
        v22,
        (Il2CppObject *)v19,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v13,
             (System_Func_T__bool__o *)v22,
             (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v18 >= *(int *)(v17 + 24) )
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
  System_Int32_array *v10; // x21
  unsigned int v11; // w8
  il2cpp_array_size_t v12; // w24
  const MethodInfo *v13; // x2
  unsigned int v14; // w8
  il2cpp_array_size_t v15; // w25
  __int64 v16; // x0

  if ( (byte_4210DB6 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, vals);
    byte_4210DB6 = 1;
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
            v9 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
            if ( v8 >= condVals->max_length )
              goto LABEL_32;
            v10 = v9;
            if ( !v9 )
LABEL_33:
              sub_B0D97C(v9);
            v11 = v9->max_length;
            if ( !v11
              || (v9->m_Items[1] = condVals->m_Items[v8 + 1], v8 + 1 >= condVals->max_length)
              || v11 <= 1
              || (v9->m_Items[2] = condVals->m_Items[v8 + 1 + 1], v8 + 2 >= condVals->max_length)
              || v11 <= 2 )
            {
LABEL_32:
              v16 = sub_B0D9A8(v9);
              sub_B0D948(v16, 0LL);
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
          v12 = 0;
          while ( 1 )
          {
            v9 = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
            if ( v12 >= vals->max_length )
              goto LABEL_32;
            if ( !v9 )
              goto LABEL_33;
            v14 = v9->max_length;
            if ( !v14 )
              goto LABEL_32;
            v9->m_Items[1] = vals->m_Items[v12 + 1];
            if ( v12 + 1 >= vals->max_length )
              goto LABEL_32;
            if ( v14 <= 1 )
              goto LABEL_32;
            v15 = v12 + 2;
            v9->m_Items[2] = vals->m_Items[v12 + 1 + 1];
            if ( v12 + 2 >= vals->max_length || v14 <= 2 )
              goto LABEL_32;
            v9->m_Items[3] = vals->m_Items[v12 + 2 + 1];
            if ( WarBoardEventTiming__IsCondPiece(v10, v9, v13) )
              return 1;
            v12 += 3;
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
  _BOOL8 IsCondPiece; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4210DB1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Take_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4210DB1 = 1;
  }
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_1B55870 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_1B55870 *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v8, v10, v11);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_B0D97C(IsCondPiece);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v14 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B5551C *)Method_System_Linq_Enumerable_Skip_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v16 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1B5551C *)Method_System_Linq_Enumerable_Skip_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsCondPiece(v15, v17, v18);
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
  _BOOL8 IsCondPiece; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4210DB2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Take_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4210DB2 = 1;
  }
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_1B55870 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_1B55870 *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v8, v10, v11);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_B0D97C(IsCondPiece);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v14 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B5551C *)Method_System_Linq_Enumerable_Skip_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  v16 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1B5551C *)Method_System_Linq_Enumerable_Skip_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v15, v17, v18);
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
  __int64 v8; // x0

  if ( !condVals )
LABEL_23:
    sub_B0D97C(condVals);
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
    v8 = sub_B0D9A8(condVals);
    sub_B0D948(v8, 0LL);
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
  __int64 v5; // x0

  if ( !condVals || !*(_QWORD *)&condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !condVals->max_length )
  {
    v5 = sub_B0D9A8(DefeatPieceCount);
    sub_B0D948(v5, 0LL);
  }
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatEnemyBefore(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 DefeatPieceCount; // x0
  __int64 v5; // x0

  if ( !condVals || !*(_QWORD *)&condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !condVals->max_length )
  {
    v5 = sub_B0D9A8(DefeatPieceCount);
    sub_B0D948(v5, 0LL);
  }
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  __int64 v1; // x1
  void *Instance; // x0
  WarBoardData_o *v3; // x19
  int maxForceId_k__BackingField; // w26
  int32_t maxGroupId_k__BackingField; // w27
  int v6; // w25
  int v7; // w24
  int32_t v8; // w20
  int32_t v9; // w21
  int v10; // w8
  _DWORD *v11; // x22
  unsigned int v12; // w28
  char *v13; // x8
  __int64 v14; // x23
  int v15; // w8
  __int64 v17; // x0

  if ( (byte_4210DAD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    byte_4210DAD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v3 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( !v3 )
    goto LABEL_27;
  maxForceId_k__BackingField = v3->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField >= 1 )
  {
    maxGroupId_k__BackingField = v3->fields._maxGroupId_k__BackingField;
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
      Instance = WarBoardData__GetPieces_22066704(v3, v8, v9, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v10 = *((_DWORD *)Instance + 6);
      v11 = Instance;
      if ( v10 >= 1 )
        break;
LABEL_18:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_19;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v17 = sub_B0D9A8(Instance);
        sub_B0D948(v17, 0LL);
      }
      v13 = (char *)&v11[2 * v12];
      v14 = *((_QWORD *)v13 + 4);
      if ( !v14 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v13 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v14 + 120) )
      {
        ++v6;
        v7 += *(unsigned __int8 *)(v14 + 60);
      }
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        goto LABEL_18;
    }
LABEL_27:
    sub_B0D97C(Instance);
  }
  v7 = 0;
  v6 = 0;
LABEL_22:
  if ( v6 >= 0 )
    v15 = v6;
  else
    v15 = v6 + 1;
  return v15 >> 1 < v7;
}


bool __fastcall WarBoardEventTiming__IsEnemySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0
  __int64 v5; // x0

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_B0D97C(AlivePieceCount);
  if ( !condVals->max_length )
  {
    v5 = sub_B0D9A8(AlivePieceCount);
    sub_B0D948(v5, 0LL);
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
  __int64 v5; // x0

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(1, method);
  if ( !condVals )
    sub_B0D97C(AlivePieceCount);
  if ( !condVals->max_length )
  {
    v5 = sub_B0D9A8(AlivePieceCount);
    sub_B0D948(v5, 0LL);
  }
  return (int)AlivePieceCount <= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 TurnCount; // x0
  signed int max_length; // w8
  __int64 v6; // x9
  __int64 v8; // x0

  if ( (byte_4210DAE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4210DAE = 1;
  }
  if ( turns && *(_QWORD *)&turns->max_length )
  {
    Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
      sub_B0D97C(Instance);
    TurnCount = WarBoardData__get_TurnCount(Instance, 0LL);
    max_length = turns->max_length;
    if ( max_length < 1 )
      return 0;
    v6 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v6 >= max_length )
      {
        v8 = sub_B0D9A8(TurnCount);
        sub_B0D948(v8, 0LL);
      }
      if ( turns->m_Items[v6 + 1] == (_DWORD)TurnCount )
        break;
      if ( (int)++v6 >= max_length )
        return 0;
    }
  }
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
  System_Int32_array *v4; // x20
  il2cpp_array_size_t i; // w22
  const MethodInfo *v6; // x2
  il2cpp_array_size_t max_length; // w8
  il2cpp_array_size_t v8; // w23
  __int64 v10; // x0

  v4 = condVals;
  if ( (byte_4210DB5 & 1) == 0 )
  {
    condVals = (System_Int32_array *)sub_B0D8A4(&int___TypeInfo, vals);
    byte_4210DB5 = 1;
  }
  if ( !v4 )
LABEL_18:
    sub_B0D97C(condVals);
  if ( (int)v4->max_length < 3 )
    return 0;
  for ( i = 0; ; i += 3 )
  {
    condVals = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
    if ( i >= v4->max_length )
      goto LABEL_17;
    if ( !condVals )
      goto LABEL_18;
    max_length = condVals->max_length;
    if ( !max_length
      || (condVals->m_Items[1] = v4->m_Items[i + 1], i + 1 >= v4->max_length)
      || max_length <= 1
      || (v8 = i + 2, condVals->m_Items[2] = v4->m_Items[i + 1 + 1], i + 2 >= v4->max_length)
      || max_length <= 2 )
    {
LABEL_17:
      v10 = sub_B0D9A8(condVals);
      sub_B0D948(v10, 0LL);
    }
    condVals->m_Items[3] = v4->m_Items[i + 2 + 1];
    if ( WarBoardEventTiming__IsCondPiece(condVals, vals, v6) )
      break;
    if ( (signed int)(v8 + 1) >= (signed int)v4->max_length )
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
  WarBoardData_o *IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_int__o *v18; // x19
  const MethodInfo *v19; // x1
  int32_t v20; // w22
  int32_t v21; // w23
  int32_t v22; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  WarBoardData_o *v26; // x20
  unsigned __int64 v27; // x23
  WarBoardEventTiming___c__DisplayClass21_0_o *v28; // x21
  struct WarBoardPieceData_o *v29; // x1
  struct WarBoardPieceData_o *targetPiece; // x8
  System_Func_int__bool__o *v31; // x22
  __int64 v32; // x0

  if ( (byte_4210DAF & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, entity);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__, v12);
    sub_B0D8A4(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo, v13);
    byte_4210DAF = 1;
  }
  IsNullOrEmpty = (WarBoardData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v15);
  if ( !condVals )
    goto LABEL_28;
  if ( (int)condVals->max_length < 4 )
    return 0;
  v18 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !condVals->max_length )
    goto LABEL_29;
  if ( !v18 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Add(
    v18,
    condVals->m_Items[1],
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  if ( condVals->max_length < 4 )
  {
LABEL_29:
    v32 = sub_B0D9A8(IsNullOrEmpty);
    sub_B0D948(v32, 0LL);
  }
  if ( !entity )
    goto LABEL_28;
  v20 = condVals->m_Items[2];
  v21 = condVals->m_Items[3];
  v22 = condVals->m_Items[4];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        v19);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v18,
      SquareIndicesToAdd,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  IsNullOrEmpty = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (WarBoardData_o *)IsNullOrEmpty[1].fields.reinforcementsSaveList) == 0LL
    || (IsNullOrEmpty = (WarBoardData_o *)WarBoardData__GetPieces_22066704(IsNullOrEmpty, v20, v21, 0LL)) == 0LL )
  {
LABEL_28:
    sub_B0D97C(IsNullOrEmpty);
  }
  v26 = IsNullOrEmpty;
  if ( SLODWORD(IsNullOrEmpty->fields.stageNpcMaster) < 1 )
    return 0;
  v27 = 0LL;
  while ( 1 )
  {
    v28 = (WarBoardEventTiming___c__DisplayClass21_0_o *)sub_B0D974(
                                                           WarBoardEventTiming___c__DisplayClass21_0_TypeInfo,
                                                           v24,
                                                           v25);
    WarBoardEventTiming___c__DisplayClass21_0___ctor(v28, 0LL);
    if ( v27 >= LODWORD(v26->fields.stageNpcMaster) )
      goto LABEL_29;
    if ( !v28 )
      goto LABEL_28;
    v29 = (struct WarBoardPieceData_o *)*((_QWORD *)&v26->fields.npcEntityDict + v27);
    v28->fields.targetPiece = v29;
    sub_B0D840(&v28->fields, v29);
    targetPiece = v28->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_28;
    if ( !targetPiece->fields._isDead_k__BackingField
      && ((v22 & 0x80000000) != 0 || v22 == targetPiece->fields._index_k__BackingField) )
    {
      v31 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v24, v25);
      System_Func_int__bool____ctor(
        v31,
        (Il2CppObject *)v28,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v18,
             (System_Func_T__bool__o *)v31,
             (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v27 >= SLODWORD(v26->fields.stageNpcMaster) )
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
  __int64 v31; // x0

  if ( (byte_4210DAB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Take_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    byte_4210DAB = 1;
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
    v31 = sub_B0D9A8(IsNullOrEmpty);
    sub_B0D948(v31, 0LL);
  }
  if ( !entity )
LABEL_22:
    sub_B0D97C(IsNullOrEmpty);
  v13 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, v11) )
    v16 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 1, v15);
  else
    v16 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v14);
  v19 = v16;
  v20 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B55870 *)Method_System_Linq_Enumerable_Take_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
          (const MethodInfo_1B5551C *)Method_System_Linq_Enumerable_Skip_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v31; // x0

  if ( (byte_4210DAC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Take_int___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    byte_4210DAC = 1;
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
    v31 = sub_B0D9A8(IsNullOrEmpty);
    sub_B0D948(v31, 0LL);
  }
  if ( !entity )
LABEL_22:
    sub_B0D97C(IsNullOrEmpty);
  v13 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, v11) )
    v16 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 0, v15);
  else
    v16 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v14);
  v19 = v16;
  v20 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B55870 *)Method_System_Linq_Enumerable_Take_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
          (const MethodInfo_1B5551C *)Method_System_Linq_Enumerable_Skip_int___);
  v29 = System_Linq_Enumerable__ToArray_int_(
          v28,
          (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
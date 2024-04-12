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
  if ( (byte_42AC823 & 1) == 0 )
  {
    vals = (System_Int32_array *)sub_B52984(&int___TypeInfo);
    byte_42AC823 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  v5 = 3 * index;
  v6 = 3 * index + 2;
  if ( v6 < (signed int)v4->max_length )
  {
    vals = (System_Int32_array *)sub_B5299C(int___TypeInfo, 3LL);
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
      v8 = sub_B52A88(vals);
      sub_B52A28(v8, 0LL);
    }
LABEL_15:
    sub_B52A5C(vals, *(_QWORD *)&index);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardEventTiming__FilterPieceValsByForce(
        System_Int32_array *vals,
        int32_t forceId,
        bool isGetAlly,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v11; // w23
  __int64 v13; // x0

  v4 = isGetAlly;
  if ( (byte_42AC822 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    byte_42AC822 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vals )
    goto LABEL_16;
  max_length = vals->max_length;
  if ( max_length >= 3 )
  {
    v11 = 2;
    while ( v11 - 2 < max_length )
    {
      v9 = (unsigned int)vals->m_Items[v11 - 2 + 1];
      if ( ((((_DWORD)v9 == forceId) ^ v4) & 1) == 0 )
      {
        if ( !v7 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v7,
          v9,
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v11 - 1 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v7,
          vals->m_Items[v11 - 1 + 1],
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
        if ( v11 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v7,
          vals->m_Items[v11 + 1],
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = vals->max_length;
      v11 += 3;
      if ( (int)v11 >= max_length )
        goto LABEL_13;
    }
    v13 = sub_B52A88(v8);
    sub_B52A28(v13, 0LL);
  }
LABEL_13:
  if ( !v7 )
LABEL_16:
    sub_B52A5C(v8, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *v5; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v10; // w22
  int v11; // w8
  _DWORD *v12; // x23
  unsigned int v13; // w27
  char *v14; // x8
  __int64 v15; // x24
  __int64 v17; // x0

  if ( (byte_42AC81E & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AC81E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( isMy )
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v7 = !isMy;
  }
  else
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = v5->fields._maxForceId_k__BackingField;
    v7 = 1;
  }
  if ( v7 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = v5->fields._maxGroupId_k__BackingField;
    v8 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v7 > maxForceId_k__BackingField )
        return v8;
    }
    v10 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_22796832(v5, v7, v10, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v11 = *((_DWORD *)Instance + 6);
      v12 = Instance;
      if ( v11 >= 1 )
        break;
LABEL_23:
      if ( ++v10 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v17 = sub_B52A88(Instance);
        sub_B52A28(v17, 0LL);
      }
      v14 = (char *)&v12[2 * v13];
      v15 = *((_QWORD *)v14 + 4);
      if ( !v15 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v14 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v15 + 120) )
        v8 += *(unsigned __int8 *)(v15 + 60) ^ 1;
      v11 = v12[6];
      if ( (int)++v13 >= v11 )
        goto LABEL_23;
    }
LABEL_27:
    sub_B52A5C(Instance, v4);
  }
  return 0;
}


int32_t __fastcall WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *v5; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v10; // w22
  int v11; // w8
  _DWORD *v12; // x23
  unsigned int v13; // w27
  char *v14; // x8
  __int64 v15; // x24
  __int64 v17; // x0

  if ( (byte_42AC81F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AC81F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v5 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( isMy )
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v7 = !isMy;
  }
  else
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = v5->fields._maxForceId_k__BackingField;
    v7 = 1;
  }
  if ( v7 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = v5->fields._maxGroupId_k__BackingField;
    v8 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v7 > maxForceId_k__BackingField )
        return v8;
    }
    v10 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_22796832(v5, v7, v10, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v11 = *((_DWORD *)Instance + 6);
      v12 = Instance;
      if ( v11 >= 1 )
        break;
LABEL_23:
      if ( ++v10 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
      {
        v17 = sub_B52A88(Instance);
        sub_B52A28(v17, 0LL);
      }
      v14 = (char *)&v12[2 * v13];
      v15 = *((_QWORD *)v14 + 4);
      if ( !v15 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v14 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v15 + 120) )
        v8 += *(unsigned __int8 *)(v15 + 60);
      v11 = v12[6];
      if ( (int)++v13 >= v11 )
        goto LABEL_23;
    }
LABEL_27:
    sub_B52A5C(Instance, v4);
  }
  return 0;
}


bool __fastcall WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardEventEntity_o *v2; // x19
  System_Collections_ICollection_o *SquareIndicesToAdd; // x20
  System_Collections_Generic_List_int__o *v4; // x19
  struct System_Int32_array *eventTimingVals; // x8
  __int64 v6; // x22
  unsigned __int64 v7; // x23
  WarBoardEventTiming___c__DisplayClass22_0_o *v8; // x20
  struct WarBoardPieceData_o *targetPiece; // x8
  System_Func_int__bool__o *v10; // x21
  __int64 v12; // x0

  v2 = entity;
  if ( (byte_42AC81B & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor___68512808);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__);
    entity = (WarBoardEventEntity_o *)sub_B52984(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    byte_42AC81B = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(v2, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0LL) )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50685004(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_305644C *)Method_System_Collections_Generic_List_int___ctor___68512808);
  entity = (WarBoardEventEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !entity
    || (eventTimingVals = entity[5].fields.eventTimingVals) == 0LL
    || (v6 = *(_QWORD *)&eventTimingVals->m_Items[5]) == 0 )
  {
LABEL_18:
    sub_B52A5C(entity, method);
  }
  if ( *(int *)(v6 + 24) < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (WarBoardEventTiming___c__DisplayClass22_0_o *)sub_B52A54(WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    WarBoardEventTiming___c__DisplayClass22_0___ctor(v8, 0LL);
    if ( v7 >= *(unsigned int *)(v6 + 24) )
    {
      v12 = sub_B52A88(entity);
      sub_B52A28(v12, 0LL);
    }
    if ( !v8 )
      goto LABEL_18;
    v8->fields.targetPiece = *(struct WarBoardPieceData_o **)(v6 + 32 + 8 * v7);
    sub_B52920(&v8->fields);
    targetPiece = v8->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_18;
    if ( !targetPiece->fields._isDead_k__BackingField )
    {
      v10 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v10,
        (Il2CppObject *)v8,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v4,
             (System_Func_T__bool__o *)v10,
             (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v7 >= *(int *)(v6 + 24) )
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
  const MethodInfo *v14; // x2
  unsigned int v15; // w8
  il2cpp_array_size_t v16; // w25
  __int64 v17; // x0

  if ( (byte_42AC821 & 1) == 0 )
  {
    sub_B52984(&int___TypeInfo);
    byte_42AC821 = 1;
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
            v9 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 3LL);
            if ( v8 >= condVals->max_length )
              goto LABEL_32;
            v11 = v9;
            if ( !v9 )
LABEL_33:
              sub_B52A5C(v9, v10);
            v12 = v9->max_length;
            if ( !v12
              || (v9->m_Items[1] = condVals->m_Items[v8 + 1], v8 + 1 >= condVals->max_length)
              || v12 <= 1
              || (v9->m_Items[2] = condVals->m_Items[v8 + 1 + 1], v8 + 2 >= condVals->max_length)
              || v12 <= 2 )
            {
LABEL_32:
              v17 = sub_B52A88(v9);
              sub_B52A28(v17, 0LL);
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
            v9 = (System_Int32_array *)sub_B5299C(int___TypeInfo, 3LL);
            if ( v13 >= vals->max_length )
              goto LABEL_32;
            v10 = v9;
            if ( !v9 )
              goto LABEL_33;
            v15 = v9->max_length;
            if ( !v15 )
              goto LABEL_32;
            v9->m_Items[1] = vals->m_Items[v13 + 1];
            if ( v13 + 1 >= vals->max_length )
              goto LABEL_32;
            if ( v15 <= 1 )
              goto LABEL_32;
            v16 = v13 + 2;
            v9->m_Items[2] = vals->m_Items[v13 + 1 + 1];
            if ( v13 + 2 >= vals->max_length || v15 <= 2 )
              goto LABEL_32;
            v9->m_Items[3] = vals->m_Items[v13 + 2 + 1];
            if ( WarBoardEventTiming__IsCondPiece(v11, v9, v14) )
              return 1;
            v13 += 3;
            if ( (signed int)(v16 + 1) >= (signed int)vals->max_length )
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
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Int32_array *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Int32_array *v8; // x0
  const MethodInfo *v9; // x2
  _BOOL8 IsCondPiece; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42AC81C & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Skip_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Take_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42AC81C = 1;
  }
  v5 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_1B6DB60 *)Method_System_Linq_Enumerable_Take_int___);
  v6 = System_Linq_Enumerable__ToArray_int_(
         v5,
         (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_1B6DB60 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v6, v8, v9);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_B52A5C(IsCondPiece, v11);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v13 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B6D80C *)Method_System_Linq_Enumerable_Skip_int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1B6D80C *)Method_System_Linq_Enumerable_Skip_int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsCondPiece(v14, v16, v17);
}


bool __fastcall WarBoardEventTiming__IsAttackTargetPieceByAnyAttackers(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0
  System_Int32_array *v6; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Int32_array *v8; // x0
  const MethodInfo *v9; // x2
  _BOOL8 IsCondPiece; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Int32_array *v16; // x1
  const MethodInfo *v17; // x2

  if ( (byte_42AC81D & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Skip_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Take_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42AC81D = 1;
  }
  v5 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_1B6DB60 *)Method_System_Linq_Enumerable_Take_int___);
  v6 = System_Linq_Enumerable__ToArray_int_(
         v5,
         (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_1B6DB60 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v6, v8, v9);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_B52A5C(IsCondPiece, v11);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v13 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B6D80C *)Method_System_Linq_Enumerable_Skip_int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  v15 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1B6D80C *)Method_System_Linq_Enumerable_Skip_int___);
  v16 = System_Linq_Enumerable__ToArray_int_(
          v15,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v8; // x0

  if ( !condVals )
LABEL_23:
    sub_B52A5C(condVals, vals);
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
    v8 = sub_B52A88(condVals);
    sub_B52A28(v8, 0LL);
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
    v5 = sub_B52A88(DefeatPieceCount);
    sub_B52A28(v5, 0LL);
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
    v5 = sub_B52A88(DefeatPieceCount);
    sub_B52A28(v5, 0LL);
  }
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v2; // x1
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

  if ( (byte_42AC818 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AC818 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      Instance = WarBoardData__GetPieces_22796832(v3, v8, v9, 0LL);
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
        v17 = sub_B52A88(Instance);
        sub_B52A28(v17, 0LL);
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
    sub_B52A5C(Instance, v2);
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
  __int64 v4; // x1
  __int64 v6; // x0

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_B52A5C(AlivePieceCount, v4);
  if ( !condVals->max_length )
  {
    v6 = sub_B52A88(AlivePieceCount);
    sub_B52A28(v6, 0LL);
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
  __int64 v6; // x0

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(1, method);
  if ( !condVals )
    sub_B52A5C(AlivePieceCount, v4);
  if ( !condVals->max_length )
  {
    v6 = sub_B52A88(AlivePieceCount);
    sub_B52A28(v6, 0LL);
  }
  return (int)AlivePieceCount <= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  __int64 TurnCount; // x0
  signed int max_length; // w8
  __int64 v7; // x9
  __int64 v9; // x0

  if ( (byte_42AC819 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_42AC819 = 1;
  }
  if ( turns && *(_QWORD *)&turns->max_length )
  {
    Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
      sub_B52A5C(Instance, v4);
    TurnCount = WarBoardData__get_TurnCount(Instance, 0LL);
    max_length = turns->max_length;
    if ( max_length < 1 )
      return 0;
    v7 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
      {
        v9 = sub_B52A88(TurnCount);
        sub_B52A28(v9, 0LL);
      }
      if ( turns->m_Items[v7 + 1] == (_DWORD)TurnCount )
        break;
      if ( (int)++v7 >= max_length )
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
  if ( (byte_42AC820 & 1) == 0 )
  {
    condVals = (System_Int32_array *)sub_B52984(&int___TypeInfo);
    byte_42AC820 = 1;
  }
  if ( !v4 )
LABEL_18:
    sub_B52A5C(condVals, vals);
  if ( (int)v4->max_length < 3 )
    return 0;
  for ( i = 0; ; i += 3 )
  {
    condVals = (System_Int32_array *)sub_B5299C(int___TypeInfo, 3LL);
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
      v10 = sub_B52A88(condVals);
      sub_B52A28(v10, 0LL);
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
  WarBoardData_o *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_int__o *v8; // x19
  int32_t v9; // w22
  int32_t v10; // w23
  int32_t v11; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  WarBoardData_o *v13; // x20
  unsigned __int64 v14; // x23
  WarBoardEventTiming___c__DisplayClass21_0_o *v15; // x21
  struct WarBoardPieceData_o *targetPiece; // x8
  System_Func_int__bool__o *v17; // x22
  __int64 v18; // x0

  if ( (byte_42AC81A & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_Any_int___);
    sub_B52984(&Method_System_Func_int__bool___ctor__);
    sub_B52984(&System_Func_int__bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B52984(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__);
    sub_B52984(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    byte_42AC81A = 1;
  }
  IsNullOrEmpty = (WarBoardData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v6);
  if ( !condVals )
    goto LABEL_28;
  if ( (int)condVals->max_length < 4 )
    return 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !condVals->max_length )
    goto LABEL_29;
  if ( !v8 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Add(
    v8,
    condVals->m_Items[1],
    (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
  if ( condVals->max_length < 4 )
  {
LABEL_29:
    v18 = sub_B52A88(IsNullOrEmpty);
    sub_B52A28(v18, 0LL);
  }
  if ( !entity )
    goto LABEL_28;
  v9 = condVals->m_Items[2];
  v10 = condVals->m_Items[3];
  v11 = condVals->m_Items[4];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        v6);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v8,
      SquareIndicesToAdd,
      (const MethodInfo_3057204 *)Method_System_Collections_Generic_List_int__AddRange__);
  IsNullOrEmpty = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (WarBoardData_o *)IsNullOrEmpty[1].fields.reinforcementsSaveList) == 0LL
    || (IsNullOrEmpty = (WarBoardData_o *)WarBoardData__GetPieces_22796832(IsNullOrEmpty, v9, v10, 0LL)) == 0LL )
  {
LABEL_28:
    sub_B52A5C(IsNullOrEmpty, v6);
  }
  v13 = IsNullOrEmpty;
  if ( SLODWORD(IsNullOrEmpty->fields.stageNpcMaster) < 1 )
    return 0;
  v14 = 0LL;
  while ( 1 )
  {
    v15 = (WarBoardEventTiming___c__DisplayClass21_0_o *)sub_B52A54(WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    WarBoardEventTiming___c__DisplayClass21_0___ctor(v15, 0LL);
    if ( v14 >= LODWORD(v13->fields.stageNpcMaster) )
      goto LABEL_29;
    if ( !v15 )
      goto LABEL_28;
    v15->fields.targetPiece = (struct WarBoardPieceData_o *)*((_QWORD *)&v13->fields.npcEntityDict + v14);
    sub_B52920(&v15->fields);
    targetPiece = v15->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_28;
    if ( !targetPiece->fields._isDead_k__BackingField
      && ((v11 & 0x80000000) != 0 || v11 == targetPiece->fields._index_k__BackingField) )
    {
      v17 = (System_Func_int__bool__o *)sub_B52A54(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)v15,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_2BC3AC4 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v8,
             (System_Func_T__bool__o *)v17,
             (const MethodInfo_1A41928 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v14 >= SLODWORD(v13->fields.stageNpcMaster) )
      return 0;
  }
}


bool __fastcall WarBoardEventTiming__IsSpecifiedPieceAttack(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v16; // x2
  System_Int32_array *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  System_Int32_array *v24; // x0
  System_Int32_array *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Int32_array *v27; // x0
  const MethodInfo *v28; // x2
  __int64 v29; // x0

  if ( (byte_42AC816 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Skip_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Take_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42AC816 = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v10);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v16);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
  {
    v29 = sub_B52A88(IsNullOrEmpty);
    sub_B52A28(v29, 0LL);
  }
  if ( !entity )
LABEL_22:
    sub_B52A5C(IsNullOrEmpty, v9);
  v11 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, v9) )
    v14 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 1, v13);
  else
    v14 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v12);
  v17 = v14;
  v18 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B6DB60 *)Method_System_Linq_Enumerable_Take_int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v19, v17, v20) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, v21) )
    v24 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 0, v23);
  else
    v24 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v22);
  v25 = v24;
  v26 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B6D80C *)Method_System_Linq_Enumerable_Skip_int___);
  v27 = System_Linq_Enumerable__ToArray_int_(
          v26,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v27, v25, v28);
}


bool __fastcall WarBoardEventTiming__IsSpecifiedPieceDefense(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w22
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  System_Int32_array *v14; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v16; // x2
  System_Int32_array *v17; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  System_Int32_array *v24; // x0
  System_Int32_array *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Int32_array *v27; // x0
  const MethodInfo *v28; // x2
  __int64 v29; // x0

  if ( (byte_42AC817 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Skip_int___);
    sub_B52984(&Method_System_Linq_Enumerable_Take_int___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_42AC817 = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v10);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v16);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
  {
    v29 = sub_B52A88(IsNullOrEmpty);
    sub_B52A28(v29, 0LL);
  }
  if ( !entity )
LABEL_22:
    sub_B52A5C(IsNullOrEmpty, v9);
  v11 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, v9) )
    v14 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 0, v13);
  else
    v14 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v12);
  v17 = v14;
  v18 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B6DB60 *)Method_System_Linq_Enumerable_Take_int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v19, v17, v20) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, v21) )
    v24 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 1, v23);
  else
    v24 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v22);
  v25 = v24;
  v26 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1B6D80C *)Method_System_Linq_Enumerable_Skip_int___);
  v27 = System_Linq_Enumerable__ToArray_int_(
          v26,
          (const MethodInfo_1B6E46C *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v27, v25, v28);
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
    sub_B52A5C(this, x);
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
    sub_B52A5C(this, x);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
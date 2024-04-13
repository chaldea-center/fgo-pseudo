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
  __int64 v3; // x3
  System_Int32_array *v5; // x19
  int v6; // w21
  int v7; // w20
  il2cpp_array_size_t max_length; // w8
  __int64 v9; // x0

  v5 = vals;
  if ( (byte_42E523D & 1) == 0 )
  {
    vals = (System_Int32_array *)sub_B5D5C4(&int___TypeInfo, index, (_DWORD)method, v3);
    byte_42E523D = 1;
  }
  if ( !v5 )
    goto LABEL_15;
  v6 = 3 * index;
  v7 = 3 * index + 2;
  if ( v7 < (signed int)v5->max_length )
  {
    vals = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
    if ( v6 >= v5->max_length )
      goto LABEL_14;
    if ( vals )
    {
      max_length = vals->max_length;
      if ( max_length )
      {
        vals->m_Items[1] = v5->m_Items[v6 + 1];
        if ( v6 + 1 < v5->max_length && max_length > 1 )
        {
          vals->m_Items[2] = v5->m_Items[v6 + 2];
          if ( v7 < v5->max_length && max_length > 2 )
          {
            vals->m_Items[3] = v5->m_Items[v7 + 1];
            return vals;
          }
        }
      }
LABEL_14:
      v9 = sub_B5D6C8(vals);
      sub_B5D668(v9, 0LL);
    }
LABEL_15:
    sub_B5D69C(vals, *(_QWORD *)&index);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_int__o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  signed int max_length; // w8
  il2cpp_array_size_t v20; // w23
  __int64 v22; // x0

  v4 = isGetAlly;
  if ( (byte_42E523C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, forceId, isGetAlly, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v13, v14, v15);
    byte_42E523C = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !vals )
    goto LABEL_16;
  max_length = vals->max_length;
  if ( max_length >= 3 )
  {
    v20 = 2;
    while ( v20 - 2 < max_length )
    {
      v18 = (unsigned int)vals->m_Items[v20 - 2 + 1];
      if ( ((((_DWORD)v18 == forceId) ^ v4) & 1) == 0 )
      {
        if ( !v16 )
          goto LABEL_16;
        System_Collections_Generic_List_int___Add(
          v16,
          v18,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( v20 - 1 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v16,
          vals->m_Items[v20 - 1 + 1],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        if ( v20 >= vals->max_length )
          break;
        System_Collections_Generic_List_int___Add(
          v16,
          vals->m_Items[v20 + 1],
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = vals->max_length;
      v20 += 3;
      if ( (int)v20 >= max_length )
        goto LABEL_13;
    }
    v22 = sub_B5D6C8(v17);
    sub_B5D668(v22, 0LL);
  }
LABEL_13:
  if ( !v16 )
LABEL_16:
    sub_B5D69C(v17, v18);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  void *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *v7; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v12; // w22
  int v13; // w8
  _DWORD *v14; // x23
  unsigned int v15; // w27
  char *v16; // x8
  __int64 v17; // x24
  __int64 v19; // x0

  if ( (byte_42E5238 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5238 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( isMy )
  {
    if ( !v7 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v9 = !isMy;
  }
  else
  {
    if ( !v7 )
      goto LABEL_27;
    maxForceId_k__BackingField = v7->fields._maxForceId_k__BackingField;
    v9 = 1;
  }
  if ( v9 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = v7->fields._maxGroupId_k__BackingField;
    v10 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v9 > maxForceId_k__BackingField )
        return v10;
    }
    v12 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_23174640(v7, v9, v12, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v13 = *((_DWORD *)Instance + 6);
      v14 = Instance;
      if ( v13 >= 1 )
        break;
LABEL_23:
      if ( ++v12 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v19 = sub_B5D6C8(Instance);
        sub_B5D668(v19, 0LL);
      }
      v16 = (char *)&v14[2 * v15];
      v17 = *((_QWORD *)v16 + 4);
      if ( !v17 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v16 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v17 + 120) )
        v10 += *(unsigned __int8 *)(v17 + 60) ^ 1;
      v13 = v14[6];
      if ( (int)++v15 >= v13 )
        goto LABEL_23;
    }
LABEL_27:
    sub_B5D69C(Instance, v6);
  }
  return 0;
}


int32_t __fastcall WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  void *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *v7; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v9; // w20
  int32_t v10; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v12; // w22
  int v13; // w8
  _DWORD *v14; // x23
  unsigned int v15; // w27
  char *v16; // x8
  __int64 v17; // x24
  __int64 v19; // x0

  if ( (byte_42E5239 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5239 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v7 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( isMy )
  {
    if ( !v7 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
    v9 = !isMy;
  }
  else
  {
    if ( !v7 )
      goto LABEL_27;
    maxForceId_k__BackingField = v7->fields._maxForceId_k__BackingField;
    v9 = 1;
  }
  if ( v9 <= maxForceId_k__BackingField )
  {
    maxGroupId_k__BackingField = v7->fields._maxGroupId_k__BackingField;
    v10 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v9 > maxForceId_k__BackingField )
        return v10;
    }
    v12 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_23174640(v7, v9, v12, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v13 = *((_DWORD *)Instance + 6);
      v14 = Instance;
      if ( v13 >= 1 )
        break;
LABEL_23:
      if ( ++v12 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v19 = sub_B5D6C8(Instance);
        sub_B5D668(v19, 0LL);
      }
      v16 = (char *)&v14[2 * v15];
      v17 = *((_QWORD *)v16 + 4);
      if ( !v17 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v16 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v17 + 120) )
        v10 += *(unsigned __int8 *)(v17 + 60);
      v13 = v14[6];
      if ( (int)++v15 >= v13 )
        goto LABEL_23;
    }
LABEL_27:
    sub_B5D69C(Instance, v6);
  }
  return 0;
}


bool __fastcall WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardEventEntity_o *v4; // x19
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
  System_Collections_ICollection_o *SquareIndicesToAdd; // x20
  System_Collections_Generic_List_int__o *v27; // x19
  struct System_Int32_array *eventTimingVals; // x8
  __int64 v29; // x22
  unsigned __int64 v30; // x23
  WarBoardEventTiming___c__DisplayClass22_0_o *v31; // x20
  struct WarBoardPieceData_o *targetPiece; // x8
  System_Func_int__bool__o *v33; // x21
  __int64 v35; // x0

  v4 = entity;
  if ( (byte_42E5235 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__, v20, v21, v22);
    entity = (WarBoardEventEntity_o *)sub_B5D5C4(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo, v23, v24, v25);
    byte_42E5235 = 1;
  }
  if ( !v4 )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(v4, method);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0LL) )
    return 0;
  v27 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  entity = (WarBoardEventEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !entity
    || (eventTimingVals = entity[5].fields.eventTimingVals) == 0LL
    || (v29 = *(_QWORD *)&eventTimingVals->m_Items[5]) == 0 )
  {
LABEL_18:
    sub_B5D69C(entity, method);
  }
  if ( *(int *)(v29 + 24) < 1 )
    return 0;
  v30 = 0LL;
  while ( 1 )
  {
    v31 = (WarBoardEventTiming___c__DisplayClass22_0_o *)sub_B5D694(WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    WarBoardEventTiming___c__DisplayClass22_0___ctor(v31, 0LL);
    if ( v30 >= *(unsigned int *)(v29 + 24) )
    {
      v35 = sub_B5D6C8(entity);
      sub_B5D668(v35, 0LL);
    }
    if ( !v31 )
      goto LABEL_18;
    v31->fields.targetPiece = *(struct WarBoardPieceData_o **)(v29 + 32 + 8 * v30);
    sub_B5D560(&v31->fields);
    targetPiece = v31->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_18;
    if ( !targetPiece->fields._isDead_k__BackingField )
    {
      v33 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v33,
        (Il2CppObject *)v31,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v27,
             (System_Func_T__bool__o *)v33,
             (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v30 >= *(int *)(v29 + 24) )
      return 0;
  }
}


bool __fastcall WarBoardEventTiming__IsAnyPieceValsMatched(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  bool result; // w0
  signed int max_length; // w8
  signed int v8; // w8
  il2cpp_array_size_t v9; // w22
  System_Int32_array *v10; // x0
  System_Int32_array *v11; // x1
  System_Int32_array *v12; // x21
  unsigned int v13; // w8
  il2cpp_array_size_t v14; // w24
  const MethodInfo *v15; // x2
  unsigned int v16; // w8
  il2cpp_array_size_t v17; // w25
  __int64 v18; // x0

  if ( (byte_42E523B & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)vals, (_DWORD)method, v3);
    byte_42E523B = 1;
  }
  result = 0;
  if ( condVals )
  {
    if ( vals )
    {
      max_length = condVals->max_length;
      if ( !(max_length % 3) && max_length >= 3 )
      {
        v8 = vals->max_length;
        result = 0;
        if ( v8 >= 3 && !(v8 % 3) )
        {
          v9 = 0;
          while ( 1 )
          {
            v10 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
            if ( v9 >= condVals->max_length )
              goto LABEL_32;
            v12 = v10;
            if ( !v10 )
LABEL_33:
              sub_B5D69C(v10, v11);
            v13 = v10->max_length;
            if ( !v13
              || (v10->m_Items[1] = condVals->m_Items[v9 + 1], v9 + 1 >= condVals->max_length)
              || v13 <= 1
              || (v10->m_Items[2] = condVals->m_Items[v9 + 1 + 1], v9 + 2 >= condVals->max_length)
              || v13 <= 2 )
            {
LABEL_32:
              v18 = sub_B5D6C8(v10);
              sub_B5D668(v18, 0LL);
            }
            v10->m_Items[3] = condVals->m_Items[v9 + 2 + 1];
            if ( (int)vals->max_length >= 1 )
              break;
LABEL_28:
            v9 += 3;
            result = 0;
            if ( (signed int)v9 >= (signed int)condVals->max_length )
              return result;
          }
          v14 = 0;
          while ( 1 )
          {
            v10 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
            if ( v14 >= vals->max_length )
              goto LABEL_32;
            v11 = v10;
            if ( !v10 )
              goto LABEL_33;
            v16 = v10->max_length;
            if ( !v16 )
              goto LABEL_32;
            v10->m_Items[1] = vals->m_Items[v14 + 1];
            if ( v14 + 1 >= vals->max_length )
              goto LABEL_32;
            if ( v16 <= 1 )
              goto LABEL_32;
            v17 = v14 + 2;
            v10->m_Items[2] = vals->m_Items[v14 + 1 + 1];
            if ( v14 + 2 >= vals->max_length || v16 <= 2 )
              goto LABEL_32;
            v10->m_Items[3] = vals->m_Items[v14 + 2 + 1];
            if ( WarBoardEventTiming__IsCondPiece(v12, v10, v15) )
              return 1;
            v14 += 3;
            if ( (signed int)(v17 + 1) >= (signed int)vals->max_length )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Int32_array *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x0
  const MethodInfo *v16; // x2
  _BOOL8 IsCondPiece; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Int32_array *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x1
  const MethodInfo *v24; // x2

  if ( (byte_42E5236 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_int___, (_DWORD)vals, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10, v11);
    byte_42E5236 = 1;
  }
  v12 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6DB0 *)Method_System_Linq_Enumerable_Take_int___);
  v13 = System_Linq_Enumerable__ToArray_int_(
          v12,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v14 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1CB6DB0 *)Method_System_Linq_Enumerable_Take_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v13, v15, v16);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_B5D69C(IsCondPiece, v18);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v20 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6A5C *)Method_System_Linq_Enumerable_Skip_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v22 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1CB6A5C *)Method_System_Linq_Enumerable_Skip_int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsCondPiece(v21, v23, v24);
}


bool __fastcall WarBoardEventTiming__IsAttackTargetPieceByAnyAttackers(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Int32_array *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x0
  const MethodInfo *v16; // x2
  _BOOL8 IsCondPiece; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Int32_array *v21; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x1
  const MethodInfo *v24; // x2

  if ( (byte_42E5237 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_int___, (_DWORD)vals, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10, v11);
    byte_42E5237 = 1;
  }
  v12 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6DB0 *)Method_System_Linq_Enumerable_Take_int___);
  v13 = System_Linq_Enumerable__ToArray_int_(
          v12,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v14 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1CB6DB0 *)Method_System_Linq_Enumerable_Take_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v13, v15, v16);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_B5D69C(IsCondPiece, v18);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v20 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6A5C *)Method_System_Linq_Enumerable_Skip_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v22 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_1CB6A5C *)Method_System_Linq_Enumerable_Skip_int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v21, v23, v24);
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
    sub_B5D69C(condVals, vals);
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
    v8 = sub_B5D6C8(condVals);
    sub_B5D668(v8, 0LL);
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
    v5 = sub_B5D6C8(DefeatPieceCount);
    sub_B5D668(v5, 0LL);
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
    v5 = sub_B5D6C8(DefeatPieceCount);
    sub_B5D668(v5, 0LL);
  }
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  void *Instance; // x0
  __int64 v5; // x1
  WarBoardData_o *v6; // x19
  int maxForceId_k__BackingField; // w26
  int32_t maxGroupId_k__BackingField; // w27
  int v9; // w25
  int v10; // w24
  int32_t v11; // w20
  int32_t v12; // w21
  int v13; // w8
  _DWORD *v14; // x22
  unsigned int v15; // w28
  char *v16; // x8
  __int64 v17; // x23
  int v18; // w8
  __int64 v20; // x0

  if ( (byte_42E5232 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1, v2, v3);
    byte_42E5232 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v6 = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( !v6 )
    goto LABEL_27;
  maxForceId_k__BackingField = v6->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField >= 1 )
  {
    maxGroupId_k__BackingField = v6->fields._maxGroupId_k__BackingField;
    v9 = 0;
    v10 = 0;
    v11 = 1;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_19:
      if ( ++v11 > maxForceId_k__BackingField )
        goto LABEL_22;
    }
    v12 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_23174640(v6, v11, v12, 0LL);
      if ( !Instance )
        goto LABEL_27;
      v13 = *((_DWORD *)Instance + 6);
      v14 = Instance;
      if ( v13 >= 1 )
        break;
LABEL_18:
      if ( ++v12 > maxGroupId_k__BackingField )
        goto LABEL_19;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v20 = sub_B5D6C8(Instance);
        sub_B5D668(v20, 0LL);
      }
      v16 = (char *)&v14[2 * v15];
      v17 = *((_QWORD *)v16 + 4);
      if ( !v17 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v16 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !*(_BYTE *)(v17 + 120) )
      {
        ++v9;
        v10 += *(unsigned __int8 *)(v17 + 60);
      }
      v13 = v14[6];
      if ( (int)++v15 >= v13 )
        goto LABEL_18;
    }
LABEL_27:
    sub_B5D69C(Instance, v5);
  }
  v10 = 0;
  v9 = 0;
LABEL_22:
  if ( v9 >= 0 )
    v18 = v9;
  else
    v18 = v9 + 1;
  return v18 >> 1 < v10;
}


bool __fastcall WarBoardEventTiming__IsEnemySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0
  __int64 v4; // x1
  __int64 v6; // x0

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_B5D69C(AlivePieceCount, v4);
  if ( !condVals->max_length )
  {
    v6 = sub_B5D6C8(AlivePieceCount);
    sub_B5D668(v6, 0LL);
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
    sub_B5D69C(AlivePieceCount, v4);
  if ( !condVals->max_length )
  {
    v6 = sub_B5D6C8(AlivePieceCount);
    sub_B5D668(v6, 0LL);
  }
  return (int)AlivePieceCount <= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  __int64 TurnCount; // x0
  signed int max_length; // w8
  __int64 v9; // x9
  __int64 v11; // x0

  if ( (byte_42E5233 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E5233 = 1;
  }
  if ( turns && *(_QWORD *)&turns->max_length )
  {
    Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
      sub_B5D69C(Instance, v6);
    TurnCount = WarBoardData__get_TurnCount(Instance, 0LL);
    max_length = turns->max_length;
    if ( max_length < 1 )
      return 0;
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= max_length )
      {
        v11 = sub_B5D6C8(TurnCount);
        sub_B5D668(v11, 0LL);
      }
      if ( turns->m_Items[v9 + 1] == (_DWORD)TurnCount )
        break;
      if ( (int)++v9 >= max_length )
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
  __int64 v3; // x3
  System_Int32_array *v5; // x20
  il2cpp_array_size_t i; // w22
  const MethodInfo *v7; // x2
  il2cpp_array_size_t max_length; // w8
  il2cpp_array_size_t v9; // w23
  __int64 v11; // x0

  v5 = condVals;
  if ( (byte_42E523A & 1) == 0 )
  {
    condVals = (System_Int32_array *)sub_B5D5C4(&int___TypeInfo, (_DWORD)vals, (_DWORD)method, v3);
    byte_42E523A = 1;
  }
  if ( !v5 )
LABEL_18:
    sub_B5D69C(condVals, vals);
  if ( (int)v5->max_length < 3 )
    return 0;
  for ( i = 0; ; i += 3 )
  {
    condVals = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
    if ( i >= v5->max_length )
      goto LABEL_17;
    if ( !condVals )
      goto LABEL_18;
    max_length = condVals->max_length;
    if ( !max_length
      || (condVals->m_Items[1] = v5->m_Items[i + 1], i + 1 >= v5->max_length)
      || max_length <= 1
      || (v9 = i + 2, condVals->m_Items[2] = v5->m_Items[i + 1 + 1], i + 2 >= v5->max_length)
      || max_length <= 2 )
    {
LABEL_17:
      v11 = sub_B5D6C8(condVals);
      sub_B5D668(v11, 0LL);
    }
    condVals->m_Items[3] = v5->m_Items[i + 2 + 1];
    if ( WarBoardEventTiming__IsCondPiece(condVals, vals, v7) )
      break;
    if ( (signed int)(v9 + 1) >= (signed int)v5->max_length )
      return 0;
  }
  return 1;
}


bool __fastcall WarBoardEventTiming__IsPieceMoveToTargetSquares(
        System_Int32_array *condVals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  WarBoardData_o *IsNullOrEmpty; // x0
  const MethodInfo *v34; // x1
  System_Collections_Generic_List_int__o *v36; // x19
  int32_t v37; // w22
  int32_t v38; // w23
  int32_t v39; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  WarBoardData_o *v41; // x20
  unsigned __int64 v42; // x23
  WarBoardEventTiming___c__DisplayClass21_0_o *v43; // x21
  struct WarBoardPieceData_o *targetPiece; // x8
  System_Func_int__bool__o *v45; // x22
  __int64 v46; // x0

  if ( (byte_42E5234 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_int___, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v24, v25, v26);
    sub_B5D5C4(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__, v27, v28, v29);
    sub_B5D5C4(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo, v30, v31, v32);
    byte_42E5234 = 1;
  }
  IsNullOrEmpty = (WarBoardData_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v34);
  if ( !condVals )
    goto LABEL_28;
  if ( (int)condVals->max_length < 4 )
    return 0;
  v36 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v36,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !condVals->max_length )
    goto LABEL_29;
  if ( !v36 )
    goto LABEL_28;
  System_Collections_Generic_List_int___Add(
    v36,
    condVals->m_Items[1],
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
  if ( condVals->max_length < 4 )
  {
LABEL_29:
    v46 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v46, 0LL);
  }
  if ( !entity )
    goto LABEL_28;
  v37 = condVals->m_Items[2];
  v38 = condVals->m_Items[3];
  v39 = condVals->m_Items[4];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        v34);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v36,
      SquareIndicesToAdd,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  IsNullOrEmpty = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (WarBoardData_o *)IsNullOrEmpty[1].fields.reinforcementsSaveList) == 0LL
    || (IsNullOrEmpty = (WarBoardData_o *)WarBoardData__GetPieces_23174640(IsNullOrEmpty, v37, v38, 0LL)) == 0LL )
  {
LABEL_28:
    sub_B5D69C(IsNullOrEmpty, v34);
  }
  v41 = IsNullOrEmpty;
  if ( SLODWORD(IsNullOrEmpty->fields.stageNpcMaster) < 1 )
    return 0;
  v42 = 0LL;
  while ( 1 )
  {
    v43 = (WarBoardEventTiming___c__DisplayClass21_0_o *)sub_B5D694(WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    WarBoardEventTiming___c__DisplayClass21_0___ctor(v43, 0LL);
    if ( v42 >= LODWORD(v41->fields.stageNpcMaster) )
      goto LABEL_29;
    if ( !v43 )
      goto LABEL_28;
    v43->fields.targetPiece = (struct WarBoardPieceData_o *)*((_QWORD *)&v41->fields.npcEntityDict + v42);
    sub_B5D560(&v43->fields);
    targetPiece = v43->fields.targetPiece;
    if ( !targetPiece )
      goto LABEL_28;
    if ( !targetPiece->fields._isDead_k__BackingField
      && ((v39 & 0x80000000) != 0 || v39 == targetPiece->fields._index_k__BackingField) )
    {
      v45 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v45,
        (Il2CppObject *)v43,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v36,
             (System_Func_T__bool__o *)v45,
             (const MethodInfo_1AD69F0 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v42 >= SLODWORD(v41->fields.stageNpcMaster) )
      return 0;
  }
}


bool __fastcall WarBoardEventTiming__IsSpecifiedPieceAttack(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  int32_t v17; // w22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v22; // x2
  System_Int32_array *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x0
  System_Int32_array *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x0

  if ( (byte_42E5230 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_int___, (_DWORD)vals, (_DWORD)entity, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11, v12);
    byte_42E5230 = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v16);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v22);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
  {
    v35 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v35, 0LL);
  }
  if ( !entity )
LABEL_22:
    sub_B5D69C(IsNullOrEmpty, v15);
  v17 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, v15) )
    v20 = WarBoardEventTiming__FilterPieceValsByForce(vals, v17, 1, v19);
  else
    v20 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v18);
  v23 = v20;
  v24 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6DB0 *)Method_System_Linq_Enumerable_Take_int___);
  v25 = System_Linq_Enumerable__ToArray_int_(
          v24,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v25, v23, v26) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, v27) )
    v30 = WarBoardEventTiming__FilterPieceValsByForce(vals, v17, 0, v29);
  else
    v30 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v28);
  v31 = v30;
  v32 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6A5C *)Method_System_Linq_Enumerable_Skip_int___);
  v33 = System_Linq_Enumerable__ToArray_int_(
          v32,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v33, v31, v34);
}


bool __fastcall WarBoardEventTiming__IsSpecifiedPieceDefense(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x2
  int32_t v17; // w22
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x3
  System_Int32_array *v20; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v22; // x2
  System_Int32_array *v23; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x0
  System_Int32_array *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int32_array *v33; // x0
  const MethodInfo *v34; // x2
  __int64 v35; // x0

  if ( (byte_42E5231 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_int___, (_DWORD)vals, (_DWORD)entity, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_int___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11, v12);
    byte_42E5231 = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v16);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v22);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
  {
    v35 = sub_B5D6C8(IsNullOrEmpty);
    sub_B5D668(v35, 0LL);
  }
  if ( !entity )
LABEL_22:
    sub_B5D69C(IsNullOrEmpty, v15);
  v17 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, v15) )
    v20 = WarBoardEventTiming__FilterPieceValsByForce(vals, v17, 0, v19);
  else
    v20 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v18);
  v23 = v20;
  v24 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6DB0 *)Method_System_Linq_Enumerable_Take_int___);
  v25 = System_Linq_Enumerable__ToArray_int_(
          v24,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v25, v23, v26) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, v27) )
    v30 = WarBoardEventTiming__FilterPieceValsByForce(vals, v17, 1, v29);
  else
    v30 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v28);
  v31 = v30;
  v32 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_1CB6A5C *)Method_System_Linq_Enumerable_Skip_int___);
  v33 = System_Linq_Enumerable__ToArray_int_(
          v32,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v33, v31, v34);
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
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, x);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
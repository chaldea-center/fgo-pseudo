void WarBoardEventTiming___ctor(WarBoardEventTiming_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *WarBoardEventTiming__ExtractBattleJoinPieceVals(
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


System_Int32_array *WarBoardEventTiming__ExtractPieceValsFromValsSequence(
        System_Int32_array *vals,
        int32_t index,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x19
  int v5; // w21
  int v6; // w20
  unsigned int max_length; // w8
  unsigned int v8; // w9

  v4 = vals;
  if ( (byte_4C35740 & 1) == 0 )
  {
    vals = (System_Int32_array *)sub_1C32C20(&int___TypeInfo);
    byte_4C35740 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  v5 = 3 * index;
  v6 = 3 * index + 2;
  if ( v6 < SLODWORD(v4->max_length) )
  {
    vals = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 3);
    max_length = v4->max_length;
    if ( v5 >= max_length )
      goto LABEL_14;
    if ( vals )
    {
      v8 = vals->max_length;
      if ( v8 )
      {
        vals->m_Items[0] = v4->m_Items[v5];
        if ( v5 + 1 < max_length && v8 > 1 )
        {
          vals->m_Items[1] = v4->m_Items[v5 + 1];
          if ( v6 < max_length && v8 > 2 )
          {
            vals->m_Items[2] = v4->m_Items[v6];
            return vals;
          }
        }
      }
LABEL_14:
      sub_1C32E84(vals);
    }
LABEL_15:
    sub_1C32E7C(vals);
  }
  return 0;
}


System_Int32_array *WarBoardEventTiming__FilterPieceValsByForce(
        System_Int32_array *vals,
        int32_t forceId,
        bool isGetAlly,
        const MethodInfo *method)
{
  _BOOL4 v4; // w19
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 v8; // x0
  int max_length; // w8
  unsigned int v10; // w23
  int32_t v11; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11
  int32_t v15; // w1
  struct System_Int32_array *v16; // x9
  _QWORD *v17; // x10
  __int64 v18; // x11
  int32_t v19; // w1
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  int v23; // w9

  v4 = isGetAlly;
  if ( (byte_4C3573F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3573F = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vals )
    goto LABEL_27;
  max_length = vals->max_length;
  if ( max_length >= 3 )
  {
    v10 = 1;
    while ( v10 - 1 < max_length )
    {
      v11 = vals->m_Items[v10 - 1];
      if ( (((v11 == forceId) ^ v4) & 1) == 0 )
      {
        if ( !v7 )
          goto LABEL_27;
        items = v7->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v11,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v11;
        }
        if ( v10 >= max_length )
          break;
        v15 = vals->m_Items[v10];
        v16 = v7->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v16 )
          goto LABEL_27;
        v18 = v7->fields._size;
        if ( (unsigned int)v18 >= LODWORD(v16->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v15,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v7->fields._size = v18 + 1;
          v16->m_Items[v18] = v15;
        }
        if ( v10 + 1 >= max_length )
          break;
        v19 = vals->m_Items[v10 + 1];
        v20 = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v20 )
          goto LABEL_27;
        v22 = v7->fields._size;
        if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v19,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v22 + 1;
          v20->m_Items[v22] = v19;
        }
      }
      max_length = vals->max_length;
      v23 = v10 + 4;
      v10 += 3;
      if ( v23 >= max_length )
        goto LABEL_24;
    }
    sub_1C32E84(v8);
  }
LABEL_24:
  if ( !v7 )
LABEL_27:
    sub_1C32E7C(v8);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  WarBoardData_o *v4; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v9; // w22
  int max_length; // w8
  WarBoardPieceData_array *v11; // x23
  unsigned int v12; // w27
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x24

  if ( (byte_4C3573B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C3573B = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v4 = (WarBoardData_o *)Instance->m_Items[51];
  if ( isMy )
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
  }
  else
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = v4->fields._maxForceId_k__BackingField;
  }
  v6 = !isMy;
  if ( maxForceId_k__BackingField >= v6 )
  {
    maxGroupId_k__BackingField = v4->fields._maxGroupId_k__BackingField;
    v7 = 0;
    while ( maxGroupId_k__BackingField < 0 )
    {
LABEL_24:
      if ( ++v6 > maxForceId_k__BackingField )
        return v7;
    }
    v9 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_37846208(v4, v6, v9, 0);
      if ( !Instance )
        goto LABEL_27;
      max_length = Instance->max_length;
      v11 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C32E84(Instance);
      v13 = &v11->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v13[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v14->_1.klass) )
        v7 += *((unsigned __int8 *)&v14->_1.this_arg.bits + 4) ^ 1;
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C32E7C(Instance);
  }
  return 0;
}


int32_t WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  WarBoardData_o *v4; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v6; // w20
  int32_t v7; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v9; // w22
  int max_length; // w8
  WarBoardPieceData_array *v11; // x23
  unsigned int v12; // w27
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x24

  if ( (byte_4C3573C & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C3573C = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v4 = (WarBoardData_o *)Instance->m_Items[51];
  if ( isMy )
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
  }
  else
  {
    if ( !v4 )
      goto LABEL_27;
    maxForceId_k__BackingField = v4->fields._maxForceId_k__BackingField;
  }
  v6 = !isMy;
  if ( maxForceId_k__BackingField >= v6 )
  {
    maxGroupId_k__BackingField = v4->fields._maxGroupId_k__BackingField;
    v7 = 0;
    while ( maxGroupId_k__BackingField < 0 )
    {
LABEL_24:
      if ( ++v6 > maxForceId_k__BackingField )
        return v7;
    }
    v9 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_37846208(v4, v6, v9, 0);
      if ( !Instance )
        goto LABEL_27;
      max_length = Instance->max_length;
      v11 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C32E84(Instance);
      v13 = &v11->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v13[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v14->_1.klass) )
        v7 += *((unsigned __int8 *)&v14->_1.this_arg.bits + 4);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C32E7C(Instance);
  }
  return 0;
}


bool WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(WarBoardEventEntity_o *entity, const MethodInfo *method)
{
  WarBoardEventEntity_o *v2; // x19
  System_Collections_ICollection_o *SquareIndicesToAdd; // x20
  System_Collections_Generic_List_int__o *v4; // x19
  __int64 v5; // x8
  __int64 v6; // x22
  unsigned __int64 v7; // x23
  __int64 v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  __int64 v12; // x8
  System_Func_int__bool__o *v13; // x21

  v2 = entity;
  if ( (byte_4C35738 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor___78010240);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__);
    entity = (WarBoardEventEntity_o *)sub_1C32C20(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    byte_4C35738 = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(v2, 0);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0) )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58175596(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_377B06C *)Method_System_Collections_Generic_List_int___ctor___78010240);
  entity = (WarBoardEventEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !entity || (v5 = *(_QWORD *)&entity[5].fields.frequencyType) == 0 || (v6 = *(_QWORD *)(v5 + 48)) == 0 )
LABEL_18:
    sub_1C32E7C(entity);
  if ( *(int *)(v6 + 24) < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = sub_1C32E6C(WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( v7 >= *(unsigned int *)(v6 + 24) )
      sub_1C32E84(entity);
    if ( !v8 )
      goto LABEL_18;
    v11 = *(_QWORD *)(v6 + 32 + 8 * v7);
    *(_QWORD *)(v8 + 16) = v11;
    sub_1C32BC4((CGThumbnailListItem_o *)(v8 + 16), v11, v9, v10);
    v12 = *(_QWORD *)(v8 + 16);
    if ( !v12 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v12 + 60) )
    {
      v13 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v13,
        (Il2CppObject *)v8,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        0);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v4,
             (System_Func_T__bool__o *)v13,
             (const MethodInfo_30C6464 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v7 >= *(int *)(v6 + 24) )
      return 0;
  }
}


bool WarBoardEventTiming__IsAnyPieceValsMatched(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  bool result; // w0
  int max_length; // w8
  int v7; // w8
  unsigned int v8; // w22
  __int64 v9; // x0
  unsigned int v10; // w8
  System_Int32_array *v11; // x21
  unsigned int v12; // w9
  unsigned int v13; // w24
  const MethodInfo *v14; // x2
  unsigned int v15; // w8
  unsigned int v16; // w9
  unsigned int v17; // w25

  if ( (byte_4C3573E & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C3573E = 1;
  }
  result = 0;
  if ( condVals )
  {
    if ( vals )
    {
      max_length = condVals->max_length;
      if ( max_length >= 3 && !(max_length % 3) )
      {
        v7 = vals->max_length;
        result = 0;
        if ( v7 >= 3 && !(v7 % 3) )
        {
          v8 = 0;
          while ( 1 )
          {
            v9 = sub_1C32CC8(int___TypeInfo, 3);
            v10 = condVals->max_length;
            if ( v8 >= v10 )
              goto LABEL_33;
            v11 = (System_Int32_array *)v9;
            if ( !v9 )
LABEL_34:
              sub_1C32E7C(v9);
            v12 = *(_DWORD *)(v9 + 24);
            if ( !v12
              || (*(_DWORD *)(v9 + 32) = condVals->m_Items[v8], v8 + 1 >= v10)
              || v12 <= 1
              || (*(_DWORD *)(v9 + 36) = condVals->m_Items[v8 + 1], v8 + 2 >= v10)
              || v12 <= 2 )
            {
LABEL_33:
              sub_1C32E84(v9);
            }
            *(_DWORD *)(v9 + 40) = condVals->m_Items[v8 + 2];
            if ( SLODWORD(vals->max_length) >= 1 )
              break;
LABEL_29:
            v8 += 3;
            result = 0;
            if ( (int)v8 >= (int)v10 )
              return result;
          }
          v13 = 0;
          while ( 1 )
          {
            v9 = sub_1C32CC8(int___TypeInfo, 3);
            v15 = vals->max_length;
            if ( v13 >= v15 )
              goto LABEL_33;
            if ( !v9 )
              goto LABEL_34;
            v16 = *(_DWORD *)(v9 + 24);
            if ( !v16 )
              goto LABEL_33;
            *(_DWORD *)(v9 + 32) = vals->m_Items[v13];
            if ( v13 + 1 >= v15 )
              goto LABEL_33;
            if ( v16 <= 1 )
              goto LABEL_33;
            v17 = v13 + 2;
            *(_DWORD *)(v9 + 36) = vals->m_Items[v13 + 1];
            if ( v13 + 2 >= v15 || v16 <= 2 )
              goto LABEL_33;
            *(_DWORD *)(v9 + 40) = vals->m_Items[v13 + 2];
            if ( WarBoardEventTiming__IsCondPiece(v11, (System_Int32_array *)v9, v14) )
              return 1;
            v13 += 3;
            if ( (signed int)(v17 + 1) >= SLODWORD(vals->max_length) )
            {
              v10 = condVals->max_length;
              goto LABEL_29;
            }
          }
        }
      }
    }
  }
  return result;
}


bool WarBoardEventTiming__IsAttackTargetPiece(
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
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4C35739 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C35739 = 1;
  }
  v5 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_311B2B8 *)Method_System_Linq_Enumerable_Take_int___);
  v6 = System_Linq_Enumerable__ToArray_int_(
         v5,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_311B2B8 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v6, v8, v9);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1C32E7C(IsCondPiece);
  if ( SLODWORD(condVals->max_length) < 4 )
    return 1;
  v11 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_311AC80 *)Method_System_Linq_Enumerable_Skip_int___);
  v12 = System_Linq_Enumerable__ToArray_int_(
          v11,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v13 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_311AC80 *)Method_System_Linq_Enumerable_Skip_int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsCondPiece(v12, v14, v15);
}


bool WarBoardEventTiming__IsAttackTargetPieceByAnyAttackers(
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
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  System_Int32_array *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4C3573A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C3573A = 1;
  }
  v5 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_311B2B8 *)Method_System_Linq_Enumerable_Take_int___);
  v6 = System_Linq_Enumerable__ToArray_int_(
         v5,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_311B2B8 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v6, v8, v9);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1C32E7C(IsCondPiece);
  if ( SLODWORD(condVals->max_length) < 4 )
    return 1;
  v11 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_311AC80 *)Method_System_Linq_Enumerable_Skip_int___);
  v12 = System_Linq_Enumerable__ToArray_int_(
          v11,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v13 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_311AC80 *)Method_System_Linq_Enumerable_Skip_int___);
  v14 = System_Linq_Enumerable__ToArray_int_(
          v13,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v12, v14, v15);
}


bool WarBoardEventTiming__IsAttackWallAfter(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsAttackWallBefore(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsCondPiece(System_Int32_array *condVals, System_Int32_array *vals, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8
  int32_t v4; // w10
  int32_t v5; // w9
  int32_t v6; // w8

  if ( !condVals )
LABEL_23:
    sub_1C32E7C(condVals);
  max_length = condVals->max_length;
  if ( !max_length )
    return 1;
  if ( !(_DWORD)max_length )
    goto LABEL_24;
  v4 = condVals->m_Items[0];
  if ( (int)max_length < 2 )
  {
    v5 = -1;
    goto LABEL_7;
  }
  v5 = condVals->m_Items[1];
  if ( (_DWORD)max_length == 2 )
  {
LABEL_7:
    v6 = -1;
    if ( v4 < 0 )
      goto LABEL_13;
    goto LABEL_10;
  }
  v6 = condVals->m_Items[2];
  if ( v4 < 0 )
    goto LABEL_13;
LABEL_10:
  if ( !vals )
    goto LABEL_23;
  if ( !LODWORD(vals->max_length) )
    goto LABEL_24;
  if ( v4 != vals->m_Items[0] )
    return 0;
LABEL_13:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( !vals )
      goto LABEL_23;
    if ( LODWORD(vals->max_length) <= 1 )
      goto LABEL_24;
    if ( v5 != vals->m_Items[1] )
      return 0;
  }
  if ( v6 < 0 )
    return 1;
  if ( !vals )
    goto LABEL_23;
  if ( LODWORD(vals->max_length) <= 2 )
LABEL_24:
    sub_1C32E84(condVals);
  return v6 == vals->m_Items[2];
}


bool WarBoardEventTiming__IsContinueWarBoard(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsDefeatEnemyAfter(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 DefeatPieceCount; // x0

  if ( !condVals || !condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !LODWORD(condVals->max_length) )
    sub_1C32E84(DefeatPieceCount);
  return (int)DefeatPieceCount >= condVals->m_Items[0];
}


bool WarBoardEventTiming__IsDefeatEnemyBefore(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 DefeatPieceCount; // x0

  if ( !condVals || !condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !LODWORD(condVals->max_length) )
    sub_1C32E84(DefeatPieceCount);
  return (int)DefeatPieceCount >= condVals->m_Items[0];
}


bool WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  WarBoardData_o *v2; // x19
  int maxForceId_k__BackingField; // w26
  int32_t maxGroupId_k__BackingField; // w27
  int v5; // w25
  int v6; // w24
  int32_t v7; // w20
  int32_t v8; // w21
  int max_length; // w8
  WarBoardPieceData_array *v10; // x22
  unsigned int v11; // w28
  Il2CppClass **v12; // x8
  Il2CppClass *v13; // x23
  int v14; // w8

  if ( (byte_4C35735 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35735 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  v2 = (WarBoardData_o *)Instance->m_Items[51];
  if ( !v2 )
    goto LABEL_26;
  maxForceId_k__BackingField = v2->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField >= 1 )
  {
    maxGroupId_k__BackingField = v2->fields._maxGroupId_k__BackingField;
    v5 = 0;
    v6 = 0;
    v7 = 1;
    while ( maxGroupId_k__BackingField < 0 )
    {
LABEL_19:
      if ( ++v7 > maxForceId_k__BackingField )
        goto LABEL_22;
    }
    v8 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_37846208(v2, v7, v8, 0);
      if ( !Instance )
        goto LABEL_26;
      max_length = Instance->max_length;
      v10 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_18:
      if ( ++v8 > maxGroupId_k__BackingField )
        goto LABEL_19;
    }
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C32E84(Instance);
      v12 = &v10->obj.klass + (int)v11;
      v13 = v12[4];
      if ( !v13 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v12[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v13->_1.klass) )
      {
        ++v5;
        v6 += *((unsigned __int8 *)&v13->_1.this_arg.bits + 4);
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C32E7C(Instance);
  }
  v6 = 0;
  v5 = 0;
LABEL_22:
  if ( v5 >= 0 )
    v14 = v5;
  else
    v14 = v5 + 1;
  return v6 > v14 >> 1;
}


bool WarBoardEventTiming__IsEnemySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_1C32E7C(AlivePieceCount);
  if ( !LODWORD(condVals->max_length) )
    sub_1C32E84(AlivePieceCount);
  return (int)AlivePieceCount <= condVals->m_Items[0];
}


bool WarBoardEventTiming__IsGetTreasureBoxAfter(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsGetTreasureBoxBefore(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsInitialWarBoard(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsMySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(1, method);
  if ( !condVals )
    sub_1C32E7C(AlivePieceCount);
  if ( !LODWORD(condVals->max_length) )
    sub_1C32E84(AlivePieceCount);
  return (int)AlivePieceCount <= condVals->m_Items[0];
}


bool WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 TurnCount; // x0
  int max_length; // w9
  __int64 v6; // x10
  int32_t v7; // w12
  bool v8; // w8

  if ( (byte_4C35736 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35736 = 1;
  }
  if ( !turns || !turns->max_length )
    return 1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C32E7C(Instance);
  TurnCount = WarBoardData__get_TurnCount(Instance, 0);
  max_length = turns->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  do
  {
    if ( (unsigned int)v6 >= max_length )
      sub_1C32E84(TurnCount);
    v7 = turns->m_Items[v6++];
    v8 = v7 == (_DWORD)TurnCount;
  }
  while ( (int)v6 < max_length && v7 != (_DWORD)TurnCount );
  return v8;
}


bool WarBoardEventTiming__IsOpen(
        int32_t eventTiming,
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  int v5; // w8
  char *v6; // x0

  v5 = eventTiming - 1;
  v6 = (char *)&dword_0 + 1;
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
      LOBYTE(v6) = WarBoardEventTiming__IsDefeatHalfEnemy((const MethodInfo *)((char *)&dword_0 + 1));
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


bool WarBoardEventTiming__IsPieceMoveBefore(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x20
  unsigned int v5; // w22
  const MethodInfo *v6; // x2
  unsigned int max_length; // w8
  unsigned int v8; // w9
  unsigned int v9; // w23
  bool IsCondPiece; // w0

  v4 = condVals;
  if ( (byte_4C3573D & 1) == 0 )
  {
    condVals = (System_Int32_array *)sub_1C32C20(&int___TypeInfo);
    byte_4C3573D = 1;
  }
  if ( !v4 )
LABEL_19:
    sub_1C32E7C(condVals);
  if ( SLODWORD(v4->max_length) < 3 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    do
    {
      condVals = (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 3);
      max_length = v4->max_length;
      if ( v5 >= max_length )
        goto LABEL_18;
      if ( !condVals )
        goto LABEL_19;
      v8 = condVals->max_length;
      if ( !v8
        || (condVals->m_Items[0] = v4->m_Items[v5], v5 + 1 >= max_length)
        || v8 <= 1
        || (v9 = v5 + 2, condVals->m_Items[1] = v4->m_Items[v5 + 1], v5 + 2 >= max_length)
        || v8 <= 2 )
      {
LABEL_18:
        sub_1C32E84(condVals);
      }
      condVals->m_Items[2] = v4->m_Items[v5 + 2];
      IsCondPiece = WarBoardEventTiming__IsCondPiece(condVals, vals, v6);
      if ( IsCondPiece )
        break;
      v5 += 3;
    }
    while ( (signed int)(v9 + 1) < SLODWORD(v4->max_length) );
  }
  return IsCondPiece;
}


bool WarBoardEventTiming__IsPieceMoveToTargetSquares(
        System_Int32_array *condVals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardPieceData_array *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_int__o *v8; // x19
  il2cpp_array_size_t max_length; // x8
  int32_t v10; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  int32_t v14; // w22
  int32_t v15; // w23
  int32_t v16; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  WarBoardPieceData_array *v18; // x20
  unsigned __int64 v19; // x23
  __int64 v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  WarBoardPieceData_o *v23; // x1
  __int64 v24; // x8
  System_Func_int__bool__o *v25; // x22

  if ( (byte_4C35737 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C32C20(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__);
    sub_1C32C20(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    byte_4C35737 = 1;
  }
  IsNullOrEmpty = (WarBoardPieceData_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v6);
  if ( !condVals )
    goto LABEL_32;
  if ( SLODWORD(condVals->max_length) < 4 )
    return 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = condVals->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_33;
  if ( !v8 )
    goto LABEL_32;
  v10 = condVals->m_Items[0];
  items = v8->fields._items;
  v12 = Method_System_Collections_Generic_List_int__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v8,
      v10,
      *(const MethodInfo_377B798 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    max_length = condVals->max_length;
  }
  else
  {
    v8->fields._size = size + 1;
    items->m_Items[size] = v10;
  }
  if ( (unsigned int)max_length < 4 )
LABEL_33:
    sub_1C32E84(IsNullOrEmpty);
  if ( !entity )
    goto LABEL_32;
  v14 = condVals->m_Items[1];
  v15 = condVals->m_Items[2];
  v16 = condVals->m_Items[3];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        0);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v8,
      SquareIndicesToAdd,
      (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  IsNullOrEmpty = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (WarBoardPieceData_array *)IsNullOrEmpty->m_Items[51]) == 0
    || (IsNullOrEmpty = WarBoardData__GetPieces_37846208((WarBoardData_o *)IsNullOrEmpty, v14, v15, 0)) == 0 )
  {
LABEL_32:
    sub_1C32E7C(IsNullOrEmpty);
  }
  v18 = IsNullOrEmpty;
  if ( SLODWORD(IsNullOrEmpty->max_length) < 1 )
    return 0;
  v19 = 0;
  while ( 1 )
  {
    v20 = sub_1C32E6C(WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v20, 0);
    if ( v19 >= LODWORD(v18->max_length) )
      goto LABEL_33;
    if ( !v20 )
      goto LABEL_32;
    v23 = v18->m_Items[v19];
    *(_QWORD *)(v20 + 16) = v23;
    sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 16), (int32_t)v23, v21, v22);
    v24 = *(_QWORD *)(v20 + 16);
    if ( !v24 )
      goto LABEL_32;
    if ( !*(_BYTE *)(v24 + 60) && (v16 < 0 || v16 == *(_DWORD *)(v24 + 28)) )
    {
      v25 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v25,
        (Il2CppObject *)v20,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        0);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v8,
             (System_Func_T__bool__o *)v25,
             (const MethodInfo_30C6464 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v19 >= SLODWORD(v18->max_length) )
      return 0;
  }
}


bool WarBoardEventTiming__IsSpecifiedPieceAttack(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  System_Int32_array *v13; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v15; // x2
  System_Int32_array *v16; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Int32_array *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x0
  System_Int32_array *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_4C35733 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C35733 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)vals, 0) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0);
  if ( IsNullOrEmpty )
    return 1;
  if ( !condVals )
    goto LABEL_22;
  if ( SLODWORD(condVals->max_length) <= 2 )
  {
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v9);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v15);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !LODWORD(vals->max_length) )
    sub_1C32E84(IsNullOrEmpty);
  if ( !entity )
LABEL_22:
    sub_1C32E7C(IsNullOrEmpty);
  v10 = vals->m_Items[0];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0) )
    v13 = WarBoardEventTiming__FilterPieceValsByForce(vals, v10, 1, v12);
  else
    v13 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v11);
  v16 = v13;
  v17 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_311B2B8 *)Method_System_Linq_Enumerable_Take_int___);
  v18 = System_Linq_Enumerable__ToArray_int_(
          v17,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v18, v16, v19) )
    return 0;
  if ( LODWORD(condVals->max_length) == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0) )
    v22 = WarBoardEventTiming__FilterPieceValsByForce(vals, v10, 0, v21);
  else
    v22 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v20);
  v23 = v22;
  v24 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_311AC80 *)Method_System_Linq_Enumerable_Skip_int___);
  v25 = System_Linq_Enumerable__ToArray_int_(
          v24,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v25, v23, v26);
}


bool WarBoardEventTiming__IsSpecifiedPieceDefense(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w22
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  System_Int32_array *v13; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v15; // x2
  System_Int32_array *v16; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Int32_array *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  System_Int32_array *v22; // x0
  System_Int32_array *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int32_array *v25; // x0
  const MethodInfo *v26; // x2

  if ( (byte_4C35734 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C35734 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)vals, 0) )
    return 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0);
  if ( IsNullOrEmpty )
    return 1;
  if ( !condVals )
    goto LABEL_22;
  if ( SLODWORD(condVals->max_length) <= 2 )
  {
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v9);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v15);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !LODWORD(vals->max_length) )
    sub_1C32E84(IsNullOrEmpty);
  if ( !entity )
LABEL_22:
    sub_1C32E7C(IsNullOrEmpty);
  v10 = vals->m_Items[0];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0) )
    v13 = WarBoardEventTiming__FilterPieceValsByForce(vals, v10, 0, v12);
  else
    v13 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v11);
  v16 = v13;
  v17 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_311B2B8 *)Method_System_Linq_Enumerable_Take_int___);
  v18 = System_Linq_Enumerable__ToArray_int_(
          v17,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v18, v16, v19) )
    return 0;
  if ( LODWORD(condVals->max_length) == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0) )
    v22 = WarBoardEventTiming__FilterPieceValsByForce(vals, v10, 1, v21);
  else
    v22 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v20);
  v23 = v22;
  v24 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_311AC80 *)Method_System_Linq_Enumerable_Skip_int___);
  v25 = System_Linq_Enumerable__ToArray_int_(
          v24,
          (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v25, v23, v26);
}


bool WarBoardEventTiming__IsWarBoardLoseAfter(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsWarBoardLoseBefore(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsWarBoardStartAfter(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsWarBoardStartBefore(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsWarBoardWinAfter(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsWarBoardWinBefore(const MethodInfo *method)
{
  return 1;
}


bool WarBoardEventTiming__IsWinCondAchieve(const MethodInfo *method)
{
  return 1;
}


void WarBoardEventTiming___c__DisplayClass21_0___ctor(
        WarBoardEventTiming___c__DisplayClass21_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardEventTiming___c__DisplayClass21_0___IsPieceMoveToTargetSquares_b__0(
        WarBoardEventTiming___c__DisplayClass21_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1C32E7C(this);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}


void WarBoardEventTiming___c__DisplayClass22_0___ctor(
        WarBoardEventTiming___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardEventTiming___c__DisplayClass22_0___IsAnyPieceMoveToTargetSquares_b__0(
        WarBoardEventTiming___c__DisplayClass22_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1C32E7C(this);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
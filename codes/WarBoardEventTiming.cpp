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


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4CC5138 & 1) == 0 )
  {
    vals = (System_Int32_array *)sub_1C713B0(&int___TypeInfo);
    byte_4CC5138 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  v5 = 3 * index;
  v6 = 3 * index + 2;
  if ( v6 < SLODWORD(v4->max_length) )
  {
    vals = (System_Int32_array *)sub_1C71458(int___TypeInfo, 3);
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
      sub_1C71610(vals);
    }
LABEL_15:
    sub_1C71608(vals, *(_QWORD *)&index);
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
  __int64 v9; // x1
  int max_length; // w8
  unsigned int v11; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v13; // x10
  __int64 size; // x11
  struct System_Int32_array *v15; // x9
  _QWORD *v16; // x10
  __int64 v17; // x11
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  int v21; // w9

  v4 = isGetAlly;
  if ( (byte_4CC5137 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CC5137 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vals )
    goto LABEL_27;
  max_length = vals->max_length;
  if ( max_length >= 3 )
  {
    v11 = 1;
    while ( v11 - 1 < max_length )
    {
      v9 = (unsigned int)vals->m_Items[v11 - 1];
      if ( ((((_DWORD)v9 == forceId) ^ v4) & 1) == 0 )
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
            v9,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v7->fields._size = size + 1;
          items->m_Items[size] = v9;
        }
        if ( v11 >= max_length )
          break;
        v9 = (unsigned int)vals->m_Items[v11];
        v15 = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v15 )
          goto LABEL_27;
        v17 = v7->fields._size;
        if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v9,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v7->fields._size = v17 + 1;
          v15->m_Items[v17] = v9;
        }
        if ( v11 + 1 >= max_length )
          break;
        v9 = (unsigned int)vals->m_Items[v11 + 1];
        v18 = v7->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v7->fields._version;
        if ( !v18 )
          goto LABEL_27;
        v20 = v7->fields._size;
        if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v7,
            v9,
            *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v7->fields._size = v20 + 1;
          v18->m_Items[v20] = v9;
        }
      }
      max_length = vals->max_length;
      v21 = v11 + 4;
      v11 += 3;
      if ( v21 >= max_length )
        goto LABEL_24;
    }
    sub_1C71610(v8);
  }
LABEL_24:
  if ( !v7 )
LABEL_27:
    sub_1C71608(v8, v9);
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_37F51AC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *v5; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v10; // w22
  int max_length; // w8
  WarBoardPieceData_array *v12; // x23
  unsigned int v13; // w27
  Il2CppClass **v14; // x8
  Il2CppClass *v15; // x24

  if ( (byte_4CC5133 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC5133 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v5 = (WarBoardData_o *)Instance->m_Items[51];
  if ( isMy )
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
  }
  else
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = v5->fields._maxForceId_k__BackingField;
  }
  v7 = !isMy;
  if ( maxForceId_k__BackingField >= v7 )
  {
    maxGroupId_k__BackingField = v5->fields._maxGroupId_k__BackingField;
    v8 = 0;
    while ( maxGroupId_k__BackingField < 0 )
    {
LABEL_24:
      if ( ++v7 > maxForceId_k__BackingField )
        return v8;
    }
    v10 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_38205888(v5, v7, v10, 0);
      if ( !Instance )
        goto LABEL_27;
      max_length = Instance->max_length;
      v12 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v10 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C71610(Instance);
      v14 = &v12->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v14[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v15->_1.klass) )
        v8 += *((unsigned __int8 *)&v15->_1.this_arg.bits + 4) ^ 1;
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C71608(Instance, v4);
  }
  return 0;
}


int32_t WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *v5; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v7; // w20
  int32_t v8; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v10; // w22
  int max_length; // w8
  WarBoardPieceData_array *v12; // x23
  unsigned int v13; // w27
  Il2CppClass **v14; // x8
  Il2CppClass *v15; // x24

  if ( (byte_4CC5134 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC5134 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v5 = (WarBoardData_o *)Instance->m_Items[51];
  if ( isMy )
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
  }
  else
  {
    if ( !v5 )
      goto LABEL_27;
    maxForceId_k__BackingField = v5->fields._maxForceId_k__BackingField;
  }
  v7 = !isMy;
  if ( maxForceId_k__BackingField >= v7 )
  {
    maxGroupId_k__BackingField = v5->fields._maxGroupId_k__BackingField;
    v8 = 0;
    while ( maxGroupId_k__BackingField < 0 )
    {
LABEL_24:
      if ( ++v7 > maxForceId_k__BackingField )
        return v8;
    }
    v10 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_38205888(v5, v7, v10, 0);
      if ( !Instance )
        goto LABEL_27;
      max_length = Instance->max_length;
      v12 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v10 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C71610(Instance);
      v14 = &v12->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v14[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v15->_1.klass) )
        v8 += *((unsigned __int8 *)&v15->_1.this_arg.bits + 4);
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C71608(Instance, v4);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x8
  System_Func_int__bool__o *v17; // x21

  v2 = entity;
  if ( (byte_4CC5130 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_int___);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor___78587544);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__);
    entity = (WarBoardEventEntity_o *)sub_1C713B0(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    byte_4CC5130 = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(v2, 0);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0) )
    return 0;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58666952(
    v4,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_37F2FC8 *)Method_System_Collections_Generic_List_int___ctor___78587544);
  entity = (WarBoardEventEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !entity || (v5 = *(_QWORD *)&entity[5].fields.frequencyType) == 0 || (v6 = *(_QWORD *)(v5 + 48)) == 0 )
LABEL_18:
    sub_1C71608(entity, method);
  if ( *(int *)(v6 + 24) < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = sub_1C715FC(WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    if ( v7 >= *(unsigned int *)(v6 + 24) )
      sub_1C71610(entity);
    if ( !v8 )
      goto LABEL_18;
    v15 = *(_QWORD *)(v6 + 32 + 8 * v7);
    *(_QWORD *)(v8 + 16) = v15;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v8 + 16), v15, v9, v10, v11, v12, v13, v14);
    v16 = *(_QWORD *)(v8 + 16);
    if ( !v16 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v16 + 60) )
    {
      v17 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v17,
        (Il2CppObject *)v8,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        0);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v4,
             (System_Func_T__bool__o *)v17,
             (const MethodInfo_3133EA8 *)Method_BasicHelper_Any_int___) )
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
  __int64 v10; // x1
  unsigned int v11; // w8
  System_Int32_array *v12; // x21
  unsigned int v13; // w9
  unsigned int v14; // w24
  const MethodInfo *v15; // x2
  unsigned int v16; // w8
  unsigned int v17; // w9
  unsigned int v18; // w25

  if ( (byte_4CC5136 & 1) == 0 )
  {
    sub_1C713B0(&int___TypeInfo);
    byte_4CC5136 = 1;
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
            v9 = sub_1C71458(int___TypeInfo, 3);
            v11 = condVals->max_length;
            if ( v8 >= v11 )
              goto LABEL_33;
            v12 = (System_Int32_array *)v9;
            if ( !v9 )
LABEL_34:
              sub_1C71608(v9, v10);
            v13 = *(_DWORD *)(v9 + 24);
            if ( !v13
              || (*(_DWORD *)(v9 + 32) = condVals->m_Items[v8], v8 + 1 >= v11)
              || v13 <= 1
              || (*(_DWORD *)(v9 + 36) = condVals->m_Items[v8 + 1], v8 + 2 >= v11)
              || v13 <= 2 )
            {
LABEL_33:
              sub_1C71610(v9);
            }
            *(_DWORD *)(v9 + 40) = condVals->m_Items[v8 + 2];
            if ( SLODWORD(vals->max_length) >= 1 )
              break;
LABEL_29:
            v8 += 3;
            result = 0;
            if ( (int)v8 >= (int)v11 )
              return result;
          }
          v14 = 0;
          while ( 1 )
          {
            v9 = sub_1C71458(int___TypeInfo, 3);
            v16 = vals->max_length;
            if ( v14 >= v16 )
              goto LABEL_33;
            v10 = v9;
            if ( !v9 )
              goto LABEL_34;
            v17 = *(_DWORD *)(v9 + 24);
            if ( !v17 )
              goto LABEL_33;
            *(_DWORD *)(v9 + 32) = vals->m_Items[v14];
            if ( v14 + 1 >= v16 )
              goto LABEL_33;
            if ( v17 <= 1 )
              goto LABEL_33;
            v18 = v14 + 2;
            *(_DWORD *)(v9 + 36) = vals->m_Items[v14 + 1];
            if ( v14 + 2 >= v16 || v17 <= 2 )
              goto LABEL_33;
            *(_DWORD *)(v9 + 40) = vals->m_Items[v14 + 2];
            if ( WarBoardEventTiming__IsCondPiece(v12, (System_Int32_array *)v9, v15) )
              return 1;
            v14 += 3;
            if ( (signed int)(v18 + 1) >= SLODWORD(vals->max_length) )
            {
              v11 = condVals->max_length;
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
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Int32_array *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4CC5131 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CC5131 = 1;
  }
  v5 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_3189818 *)Method_System_Linq_Enumerable_Take_int___);
  v6 = System_Linq_Enumerable__ToArray_int_(
         v5,
         (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_3189818 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v6, v8, v9);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1C71608(IsCondPiece, v11);
  if ( SLODWORD(condVals->max_length) < 4 )
    return 1;
  v12 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_3189198 *)Method_System_Linq_Enumerable_Skip_int___);
  v13 = System_Linq_Enumerable__ToArray_int_(
          v12,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  v14 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_3189198 *)Method_System_Linq_Enumerable_Skip_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsCondPiece(v13, v15, v16);
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
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Int32_array *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x1
  const MethodInfo *v16; // x2

  if ( (byte_4CC5132 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CC5132 = 1;
  }
  v5 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_3189818 *)Method_System_Linq_Enumerable_Take_int___);
  v6 = System_Linq_Enumerable__ToArray_int_(
         v5,
         (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_3189818 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v6, v8, v9);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1C71608(IsCondPiece, v11);
  if ( SLODWORD(condVals->max_length) < 4 )
    return 1;
  v12 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_3189198 *)Method_System_Linq_Enumerable_Skip_int___);
  v13 = System_Linq_Enumerable__ToArray_int_(
          v12,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  v14 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_3189198 *)Method_System_Linq_Enumerable_Skip_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v13, v15, v16);
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
    sub_1C71608(condVals, vals);
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
    sub_1C71610(condVals);
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
    sub_1C71610(DefeatPieceCount);
  return (int)DefeatPieceCount >= condVals->m_Items[0];
}


bool WarBoardEventTiming__IsDefeatEnemyBefore(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 DefeatPieceCount; // x0

  if ( !condVals || !condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !LODWORD(condVals->max_length) )
    sub_1C71610(DefeatPieceCount);
  return (int)DefeatPieceCount >= condVals->m_Items[0];
}


bool WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v2; // x1
  WarBoardData_o *v3; // x19
  int maxForceId_k__BackingField; // w26
  int32_t maxGroupId_k__BackingField; // w27
  int v6; // w25
  int v7; // w24
  int32_t v8; // w20
  int32_t v9; // w21
  int max_length; // w8
  WarBoardPieceData_array *v11; // x22
  unsigned int v12; // w28
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x23
  int v15; // w8

  if ( (byte_4CC512D & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC512D = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  v3 = (WarBoardData_o *)Instance->m_Items[51];
  if ( !v3 )
    goto LABEL_26;
  maxForceId_k__BackingField = v3->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField >= 1 )
  {
    maxGroupId_k__BackingField = v3->fields._maxGroupId_k__BackingField;
    v6 = 0;
    v7 = 0;
    v8 = 1;
    while ( maxGroupId_k__BackingField < 0 )
    {
LABEL_19:
      if ( ++v8 > maxForceId_k__BackingField )
        goto LABEL_22;
    }
    v9 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_38205888(v3, v8, v9, 0);
      if ( !Instance )
        goto LABEL_26;
      max_length = Instance->max_length;
      v11 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_18:
      if ( ++v9 > maxGroupId_k__BackingField )
        goto LABEL_19;
    }
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C71610(Instance);
      v13 = &v11->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v13[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v14->_1.klass) )
      {
        ++v6;
        v7 += *((unsigned __int8 *)&v14->_1.this_arg.bits + 4);
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C71608(Instance, v2);
  }
  v7 = 0;
  v6 = 0;
LABEL_22:
  if ( v6 >= 0 )
    v15 = v6;
  else
    v15 = v6 + 1;
  return v7 > v15 >> 1;
}


bool WarBoardEventTiming__IsEnemySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0
  __int64 v4; // x1

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_1C71608(AlivePieceCount, v4);
  if ( !LODWORD(condVals->max_length) )
    sub_1C71610(AlivePieceCount);
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
  __int64 v4; // x1

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(1, method);
  if ( !condVals )
    sub_1C71608(AlivePieceCount, v4);
  if ( !LODWORD(condVals->max_length) )
    sub_1C71610(AlivePieceCount);
  return (int)AlivePieceCount <= condVals->m_Items[0];
}


bool WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  __int64 TurnCount; // x0
  int max_length; // w9
  __int64 v7; // x10
  int32_t v8; // w12
  bool v9; // w8

  if ( (byte_4CC512E & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC512E = 1;
  }
  if ( !turns || !turns->max_length )
    return 1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C71608(Instance, v4);
  TurnCount = WarBoardData__get_TurnCount(Instance, 0);
  max_length = turns->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  do
  {
    if ( (unsigned int)v7 >= max_length )
      sub_1C71610(TurnCount);
    v8 = turns->m_Items[v7++];
    v9 = v8 == (_DWORD)TurnCount;
  }
  while ( (int)v7 < max_length && v8 != (_DWORD)TurnCount );
  return v9;
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
  if ( (byte_4CC5135 & 1) == 0 )
  {
    condVals = (System_Int32_array *)sub_1C713B0(&int___TypeInfo);
    byte_4CC5135 = 1;
  }
  if ( !v4 )
LABEL_19:
    sub_1C71608(condVals, vals);
  if ( SLODWORD(v4->max_length) < 3 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    do
    {
      condVals = (System_Int32_array *)sub_1C71458(int___TypeInfo, 3);
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
        sub_1C71610(condVals);
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
  struct System_Int32_array *items; // x9
  _QWORD *v11; // x10
  __int64 size; // x11
  int32_t v13; // w22
  int32_t v14; // w23
  int32_t v15; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  WarBoardPieceData_array *v17; // x20
  unsigned __int64 v18; // x23
  __int64 v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  WarBoardPieceData_o *v26; // x1
  __int64 v27; // x8
  System_Func_int__bool__o *v28; // x22

  if ( (byte_4CC512F & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_int___);
    sub_1C713B0(&System_Func_int__bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C713B0(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__);
    sub_1C713B0(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    byte_4CC512F = 1;
  }
  IsNullOrEmpty = (WarBoardPieceData_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)condVals, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v6);
  if ( !condVals )
    goto LABEL_32;
  if ( SLODWORD(condVals->max_length) < 4 )
    return 0;
  v8 = (System_Collections_Generic_List_int__o *)sub_1C715FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_37F2EA0 *)Method_System_Collections_Generic_List_int___ctor__);
  max_length = condVals->max_length;
  if ( !(_DWORD)max_length )
    goto LABEL_33;
  if ( !v8 )
    goto LABEL_32;
  v6 = (const MethodInfo *)(unsigned int)condVals->m_Items[0];
  items = v8->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v8,
      (int32_t)v6,
      *(const MethodInfo_37F36F4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    max_length = condVals->max_length;
  }
  else
  {
    v8->fields._size = size + 1;
    items->m_Items[size] = (int)v6;
  }
  if ( (unsigned int)max_length < 4 )
LABEL_33:
    sub_1C71610(IsNullOrEmpty);
  if ( !entity )
    goto LABEL_32;
  v13 = condVals->m_Items[1];
  v14 = condVals->m_Items[2];
  v15 = condVals->m_Items[3];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        0);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v8,
      SquareIndicesToAdd,
      (const MethodInfo_37F3900 *)Method_System_Collections_Generic_List_int__AddRange__);
  IsNullOrEmpty = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (WarBoardPieceData_array *)IsNullOrEmpty->m_Items[51]) == 0
    || (IsNullOrEmpty = WarBoardData__GetPieces_38205888((WarBoardData_o *)IsNullOrEmpty, v13, v14, 0)) == 0 )
  {
LABEL_32:
    sub_1C71608(IsNullOrEmpty, v6);
  }
  v17 = IsNullOrEmpty;
  if ( SLODWORD(IsNullOrEmpty->max_length) < 1 )
    return 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = sub_1C715FC(WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v19, 0);
    if ( v18 >= LODWORD(v17->max_length) )
      goto LABEL_33;
    if ( !v19 )
      goto LABEL_32;
    v26 = v17->m_Items[v18];
    *(_QWORD *)(v19 + 16) = v26;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v19 + 16), (int32_t)v26, v20, v21, v22, v23, v24, v25);
    v27 = *(_QWORD *)(v19 + 16);
    if ( !v27 )
      goto LABEL_32;
    if ( !*(_BYTE *)(v27 + 60) && (v15 < 0 || v15 == *(_DWORD *)(v27 + 28)) )
    {
      v28 = (System_Func_int__bool__o *)sub_1C715FC(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v28,
        (Il2CppObject *)v19,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        0);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v8,
             (System_Func_T__bool__o *)v28,
             (const MethodInfo_3133EA8 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v18 >= SLODWORD(v17->max_length) )
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
  __int64 v9; // x1
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
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  System_Int32_array *v23; // x0
  System_Int32_array *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array *v26; // x0
  const MethodInfo *v27; // x2

  if ( (byte_4CC512B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CC512B = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v10);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v16);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !LODWORD(vals->max_length) )
    sub_1C71610(IsNullOrEmpty);
  if ( !entity )
LABEL_22:
    sub_1C71608(IsNullOrEmpty, v9);
  v11 = vals->m_Items[0];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0) )
    v14 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 1, v13);
  else
    v14 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v12);
  v17 = v14;
  v18 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_3189818 *)Method_System_Linq_Enumerable_Take_int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v19, v17, v20) )
    return 0;
  if ( LODWORD(condVals->max_length) == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0) )
    v23 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 0, v22);
  else
    v23 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v21);
  v24 = v23;
  v25 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_3189198 *)Method_System_Linq_Enumerable_Skip_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v26, v24, v27);
}


bool WarBoardEventTiming__IsSpecifiedPieceDefense(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v9; // x1
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
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x3
  System_Int32_array *v23; // x0
  System_Int32_array *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Int32_array *v26; // x0
  const MethodInfo *v27; // x2

  if ( (byte_4CC512C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Take_int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4CC512C = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v10);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v16);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !LODWORD(vals->max_length) )
    sub_1C71610(IsNullOrEmpty);
  if ( !entity )
LABEL_22:
    sub_1C71608(IsNullOrEmpty, v9);
  v11 = vals->m_Items[0];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0) )
    v14 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 0, v13);
  else
    v14 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v12);
  v17 = v14;
  v18 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_3189818 *)Method_System_Linq_Enumerable_Take_int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v19, v17, v20) )
    return 0;
  if ( LODWORD(condVals->max_length) == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0) )
    v23 = WarBoardEventTiming__FilterPieceValsByForce(vals, v11, 1, v22);
  else
    v23 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v21);
  v24 = v23;
  v25 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_3189198 *)Method_System_Linq_Enumerable_Skip_int___);
  v26 = System_Linq_Enumerable__ToArray_int_(
          v25,
          (const MethodInfo_318AE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v26, v24, v27);
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
    sub_1C71608(this, x);
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
    sub_1C71608(this, x);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
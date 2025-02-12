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
  unsigned int max_length; // w8
  il2cpp_array_size_t v8; // w9

  v4 = vals;
  if ( (byte_4BB260B & 1) == 0 )
  {
    vals = (System_Int32_array *)sub_1C13D24(&int___TypeInfo, *(_QWORD *)&index);
    byte_4BB260B = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  v5 = 3 * index;
  v6 = 3 * index + 2;
  if ( v6 < (signed int)v4->max_length )
  {
    vals = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 3LL);
    max_length = v4->max_length;
    if ( v5 >= max_length )
      goto LABEL_14;
    if ( vals )
    {
      v8 = vals->max_length;
      if ( v8 )
      {
        vals->m_Items[1] = v4->m_Items[v5 + 1];
        if ( v5 + 1 < max_length && v8 > 1 )
        {
          vals->m_Items[2] = v4->m_Items[v5 + 2];
          if ( v6 < max_length && v8 > 2 )
          {
            vals->m_Items[3] = v4->m_Items[v6 + 1];
            return vals;
          }
        }
      }
LABEL_14:
      sub_1C13F88(vals, *(_QWORD *)&index);
    }
LABEL_15:
    sub_1C13F80(vals, *(_QWORD *)&index);
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
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // w8
  unsigned int v14; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  struct System_Int32_array *v18; // x9
  _QWORD *v19; // x10
  __int64 v20; // x11
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  signed int v24; // w9

  v4 = isGetAlly;
  if ( (byte_4BB260A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&forceId);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_4BB260A = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vals )
    goto LABEL_27;
  max_length = vals->max_length;
  if ( (int)max_length >= 3 )
  {
    v14 = 1;
    while ( v14 - 1 < max_length )
    {
      v12 = (unsigned int)vals->m_Items[v14 - 1 + 1];
      if ( ((((_DWORD)v12 == forceId) ^ v4) & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_27;
        items = v10->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v10->fields._size = size + 1;
          items->m_Items[size + 1] = v12;
        }
        if ( v14 >= max_length )
          break;
        v12 = (unsigned int)vals->m_Items[v14 + 1];
        v18 = v10->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !v18 )
          goto LABEL_27;
        v20 = v10->fields._size;
        if ( (unsigned int)v20 >= v18->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v10->fields._size = v20 + 1;
          v18->m_Items[v20 + 1] = v12;
        }
        if ( v14 + 1 >= max_length )
          break;
        v12 = (unsigned int)vals->m_Items[v14 + 1 + 1];
        v21 = v10->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v10->fields._version;
        if ( !v21 )
          goto LABEL_27;
        v23 = v10->fields._size;
        if ( (unsigned int)v23 >= v21->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v10,
            v12,
            *(const MethodInfo_36101A8 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v10->fields._size = v23 + 1;
          v21->m_Items[v23 + 1] = v12;
        }
      }
      max_length = vals->max_length;
      v24 = v14 + 4;
      v14 += 3;
      if ( v24 >= (int)max_length )
        goto LABEL_24;
    }
    sub_1C13F88(v11, v12);
  }
LABEL_24:
  if ( !v10 )
LABEL_27:
    sub_1C13F80(v11, v12);
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_3611C60 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
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

  if ( (byte_4BB2606 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BB2606 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v7 > maxForceId_k__BackingField )
        return v8;
    }
    v10 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_36453640(v5, v7, v10, 0LL);
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
        sub_1C13F88(Instance, v4);
      v14 = &v12->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v14[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v15->_1.klass) )
        v8 += *((unsigned __int8 *)&v15->_1.this_arg.bits + 4) ^ 1;
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C13F80(Instance, v4);
  }
  return 0;
}


int32_t __fastcall WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
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

  if ( (byte_4BB2607 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BB2607 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v7 > maxForceId_k__BackingField )
        return v8;
    }
    v10 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_36453640(v5, v7, v10, 0LL);
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
        sub_1C13F88(Instance, v4);
      v14 = &v12->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v14[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v15->_1.klass) )
        v8 += *((unsigned __int8 *)&v15->_1.this_arg.bits + 4);
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C13F80(Instance, v4);
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
  System_Collections_ICollection_o *SquareIndicesToAdd; // x20
  System_Collections_Generic_List_int__o *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x22
  unsigned __int64 v13; // x23
  __int64 v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  __int64 v22; // x8
  System_Func_int__bool__o *v23; // x21

  v2 = entity;
  if ( (byte_4BB2603 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int___, method);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor___77417304, v4);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1C13D24(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__, v7);
    entity = (WarBoardEventEntity_o *)sub_1C13D24(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo, v8);
    byte_4BB2603 = 1;
  }
  if ( !v2 )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(v2, 0LL);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0LL) )
    return 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_56687228(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_360FA7C *)Method_System_Collections_Generic_List_int___ctor___77417304);
  entity = (WarBoardEventEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !entity || (v11 = *(_QWORD *)&entity[5].fields.frequencyType) == 0 || (v12 = *(_QWORD *)(v11 + 48)) == 0 )
LABEL_18:
    sub_1C13F80(entity, method);
  if ( *(int *)(v12 + 24) < 1 )
    return 0;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = sub_1C13F70(WarBoardEventTiming___c__DisplayClass22_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0LL);
    if ( v13 >= *(unsigned int *)(v12 + 24) )
      sub_1C13F88(entity, method);
    if ( !v14 )
      goto LABEL_18;
    v21 = *(_QWORD *)(v12 + 32 + 8 * v13);
    *(_QWORD *)(v14 + 16) = v21;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 16), v21, v15, v16, v17, v18, v19, v20);
    v22 = *(_QWORD *)(v14 + 16);
    if ( !v22 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v22 + 60) )
    {
      v23 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v23,
        (Il2CppObject *)v14,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v10,
             (System_Func_T__bool__o *)v23,
             (const MethodInfo_2F7A0AC *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v13 >= *(int *)(v12 + 24) )
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
  il2cpp_array_size_t v11; // w8
  System_Int32_array *v12; // x21
  unsigned int v13; // w9
  il2cpp_array_size_t v14; // w24
  const MethodInfo *v15; // x2
  il2cpp_array_size_t v16; // w8
  unsigned int v17; // w9
  il2cpp_array_size_t v18; // w25

  if ( (byte_4BB2609 & 1) == 0 )
  {
    sub_1C13D24(&int___TypeInfo, vals);
    byte_4BB2609 = 1;
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
            v9 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 3LL);
            v11 = condVals->max_length;
            if ( v8 >= v11 )
              goto LABEL_33;
            v12 = v9;
            if ( !v9 )
LABEL_34:
              sub_1C13F80(v9, v10);
            v13 = v9->max_length;
            if ( !v13
              || (v9->m_Items[1] = condVals->m_Items[v8 + 1], v8 + 1 >= v11)
              || v13 <= 1
              || (v9->m_Items[2] = condVals->m_Items[v8 + 1 + 1], v8 + 2 >= v11)
              || v13 <= 2 )
            {
LABEL_33:
              sub_1C13F88(v9, v10);
            }
            v9->m_Items[3] = condVals->m_Items[v8 + 2 + 1];
            if ( (int)vals->max_length >= 1 )
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
            v9 = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 3LL);
            v16 = vals->max_length;
            if ( v14 >= v16 )
              goto LABEL_33;
            v10 = v9;
            if ( !v9 )
              goto LABEL_34;
            v17 = v9->max_length;
            if ( !v17 )
              goto LABEL_33;
            v9->m_Items[1] = vals->m_Items[v14 + 1];
            if ( v14 + 1 >= v16 )
              goto LABEL_33;
            if ( v17 <= 1 )
              goto LABEL_33;
            v18 = v14 + 2;
            v9->m_Items[2] = vals->m_Items[v14 + 1 + 1];
            if ( v14 + 2 >= v16 || v17 <= 2 )
              goto LABEL_33;
            v9->m_Items[3] = vals->m_Items[v14 + 2 + 1];
            if ( WarBoardEventTiming__IsCondPiece(v12, v9, v15) )
              return 1;
            v14 += 3;
            if ( (signed int)(v18 + 1) >= (signed int)vals->max_length )
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4BB2604 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_1C13D24(&Method_System_Linq_Enumerable_Take_int___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4BB2604 = 1;
  }
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_2FC7A28 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_2FC7A28 *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v8, v10, v11);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1C13F80(IsCondPiece, v13);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v14 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2FC73F0 *)Method_System_Linq_Enumerable_Skip_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  v16 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_2FC73F0 *)Method_System_Linq_Enumerable_Skip_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0
  System_Int32_array *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x1
  const MethodInfo *v18; // x2

  if ( (byte_4BB2605 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_1C13D24(&Method_System_Linq_Enumerable_Take_int___, v5);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_4BB2605 = 1;
  }
  v7 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_2FC7A28 *)Method_System_Linq_Enumerable_Take_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)vals,
         3,
         (const MethodInfo_2FC7A28 *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v8, v10, v11);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1C13F80(IsCondPiece, v13);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v14 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2FC73F0 *)Method_System_Linq_Enumerable_Skip_int___);
  v15 = System_Linq_Enumerable__ToArray_int_(
          v14,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  v16 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_2FC73F0 *)Method_System_Linq_Enumerable_Skip_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( !condVals )
LABEL_23:
    sub_1C13F80(condVals, vals);
  v3 = *(_QWORD *)&condVals->max_length;
  if ( !v3 )
    return 1;
  if ( !(_DWORD)v3 )
    goto LABEL_24;
  v4 = condVals->m_Items[1];
  if ( (int)v3 < 2 )
  {
    v5 = -1;
    goto LABEL_7;
  }
  v5 = condVals->m_Items[2];
  if ( (_DWORD)v3 == 2 )
  {
LABEL_7:
    v6 = -1;
    if ( (v4 & 0x80000000) != 0 )
      goto LABEL_13;
    goto LABEL_10;
  }
  v6 = condVals->m_Items[3];
  if ( (v4 & 0x80000000) != 0 )
    goto LABEL_13;
LABEL_10:
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
LABEL_24:
    sub_1C13F88(condVals, vals);
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

  if ( !condVals || !*(_QWORD *)&condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !condVals->max_length )
    sub_1C13F88(DefeatPieceCount, v4);
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatEnemyBefore(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 DefeatPieceCount; // x0
  __int64 v4; // x1

  if ( !condVals || !*(_QWORD *)&condVals->max_length )
    return 1;
  DefeatPieceCount = WarBoardEventTiming__GetDefeatPieceCount(0, method);
  if ( !condVals->max_length )
    sub_1C13F88(DefeatPieceCount, v4);
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  __int64 v1; // x1
  WarBoardPieceData_array *Instance; // x0
  __int64 v3; // x1
  WarBoardData_o *v4; // x19
  int maxForceId_k__BackingField; // w26
  int32_t maxGroupId_k__BackingField; // w27
  int v7; // w25
  int v8; // w24
  int32_t v9; // w20
  int32_t v10; // w21
  int max_length; // w8
  WarBoardPieceData_array *v12; // x22
  unsigned int v13; // w28
  Il2CppClass **v14; // x8
  Il2CppClass *v15; // x23
  int v16; // w8

  if ( (byte_4BB2600 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1);
    byte_4BB2600 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  v4 = (WarBoardData_o *)Instance->m_Items[51];
  if ( !v4 )
    goto LABEL_26;
  maxForceId_k__BackingField = v4->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField >= 1 )
  {
    maxGroupId_k__BackingField = v4->fields._maxGroupId_k__BackingField;
    v7 = 0;
    v8 = 0;
    v9 = 1;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_19:
      if ( ++v9 > maxForceId_k__BackingField )
        goto LABEL_22;
    }
    v10 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_36453640(v4, v9, v10, 0LL);
      if ( !Instance )
        goto LABEL_26;
      max_length = Instance->max_length;
      v12 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_18:
      if ( ++v10 > maxGroupId_k__BackingField )
        goto LABEL_19;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C13F88(Instance, v3);
      v14 = &v12->obj.klass + (int)v13;
      v15 = v14[4];
      if ( !v15 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v14[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v15->_1.klass) )
      {
        ++v7;
        v8 += *((unsigned __int8 *)&v15->_1.this_arg.bits + 4);
      }
      max_length = v12->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_18;
    }
LABEL_26:
    sub_1C13F80(Instance, v3);
  }
  v8 = 0;
  v7 = 0;
LABEL_22:
  if ( v7 >= 0 )
    v16 = v7;
  else
    v16 = v7 + 1;
  return v8 > v16 >> 1;
}


bool __fastcall WarBoardEventTiming__IsEnemySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0
  __int64 v4; // x1

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_1C13F80(AlivePieceCount, v4);
  if ( !condVals->max_length )
    sub_1C13F88(AlivePieceCount, v4);
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

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(1, method);
  if ( !condVals )
    sub_1C13F80(AlivePieceCount, v4);
  if ( !condVals->max_length )
    sub_1C13F88(AlivePieceCount, v4);
  return (int)AlivePieceCount <= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  __int64 TurnCount; // x0
  __int64 v6; // x1
  signed int max_length; // w9
  __int64 v8; // x10
  int32_t v9; // w12
  bool v10; // w8

  if ( (byte_4BB2601 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4BB2601 = 1;
  }
  if ( !turns || !*(_QWORD *)&turns->max_length )
    return 1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1C13F80(Instance, v4);
  TurnCount = WarBoardData__get_TurnCount(Instance, 0LL);
  max_length = turns->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0LL;
  do
  {
    if ( (unsigned int)v8 >= max_length )
      sub_1C13F88(TurnCount, v6);
    v9 = turns->m_Items[++v8];
    v10 = v9 == (_DWORD)TurnCount;
  }
  while ( (int)v8 < max_length && v9 != (_DWORD)TurnCount );
  return v10;
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
  unsigned int v5; // w22
  const MethodInfo *v6; // x2
  unsigned int max_length; // w8
  il2cpp_array_size_t v8; // w9
  unsigned int v9; // w23
  bool IsCondPiece; // w0

  v4 = condVals;
  if ( (byte_4BB2608 & 1) == 0 )
  {
    condVals = (System_Int32_array *)sub_1C13D24(&int___TypeInfo, vals);
    byte_4BB2608 = 1;
  }
  if ( !v4 )
LABEL_19:
    sub_1C13F80(condVals, vals);
  if ( (int)v4->max_length < 3 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    do
    {
      condVals = (System_Int32_array *)sub_1C13DCC(int___TypeInfo, 3LL);
      max_length = v4->max_length;
      if ( v5 >= max_length )
        goto LABEL_18;
      if ( !condVals )
        goto LABEL_19;
      v8 = condVals->max_length;
      if ( !v8
        || (condVals->m_Items[1] = v4->m_Items[v5 + 1], v5 + 1 >= max_length)
        || v8 <= 1
        || (v9 = v5 + 2, condVals->m_Items[2] = v4->m_Items[v5 + 1 + 1], v5 + 2 >= max_length)
        || v8 <= 2 )
      {
LABEL_18:
        sub_1C13F88(condVals, vals);
      }
      condVals->m_Items[3] = v4->m_Items[v5 + 2 + 1];
      IsCondPiece = WarBoardEventTiming__IsCondPiece(condVals, vals, v6);
      if ( IsCondPiece )
        break;
      v5 += 3;
    }
    while ( (signed int)(v9 + 1) < (signed int)v4->max_length );
  }
  return IsCondPiece;
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
  WarBoardPieceData_array *IsNullOrEmpty; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_int__o *v16; // x19
  __int64 v17; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  int32_t v21; // w22
  int32_t v22; // w23
  int32_t v23; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  WarBoardPieceData_array *v25; // x20
  unsigned __int64 v26; // x23
  __int64 v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  __int64 v35; // x8
  System_Func_int__bool__o *v36; // x22

  if ( (byte_4BB2602 & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Any_int___, entity);
    sub_1C13D24(&System_Func_int__bool__TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1C13D24(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    sub_1C13D24(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__, v11);
    sub_1C13D24(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo, v12);
    byte_4BB2602 = 1;
  }
  IsNullOrEmpty = (WarBoardPieceData_array *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)condVals,
                                               0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v14);
  if ( !condVals )
    goto LABEL_32;
  if ( (int)condVals->max_length < 4 )
    return 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C13F70(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_360F954 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = *(_QWORD *)&condVals->max_length;
  if ( !(_DWORD)v17 )
    goto LABEL_33;
  if ( !v16 )
    goto LABEL_32;
  v14 = (const MethodInfo *)(unsigned int)condVals->m_Items[1];
  items = v16->fields._items;
  v19 = Method_System_Collections_Generic_List_int__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v16,
      (int32_t)v14,
      *(const MethodInfo_36101A8 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v17 = *(_QWORD *)&condVals->max_length;
  }
  else
  {
    v16->fields._size = size + 1;
    items->m_Items[size + 1] = (int)v14;
  }
  if ( (unsigned int)v17 < 4 )
LABEL_33:
    sub_1C13F88(IsNullOrEmpty, v14);
  if ( !entity )
    goto LABEL_32;
  v21 = condVals->m_Items[2];
  v22 = condVals->m_Items[3];
  v23 = condVals->m_Items[4];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        0LL);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v16,
      SquareIndicesToAdd,
      (const MethodInfo_36103B4 *)Method_System_Collections_Generic_List_int__AddRange__);
  IsNullOrEmpty = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (WarBoardPieceData_array *)IsNullOrEmpty->m_Items[51]) == 0LL
    || (IsNullOrEmpty = WarBoardData__GetPieces_36453640((WarBoardData_o *)IsNullOrEmpty, v21, v22, 0LL)) == 0LL )
  {
LABEL_32:
    sub_1C13F80(IsNullOrEmpty, v14);
  }
  v25 = IsNullOrEmpty;
  if ( (int)IsNullOrEmpty->max_length < 1 )
    return 0;
  v26 = 0LL;
  while ( 1 )
  {
    v27 = sub_1C13F70(WarBoardEventTiming___c__DisplayClass21_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    if ( v26 >= v25->max_length )
      goto LABEL_33;
    if ( !v27 )
      goto LABEL_32;
    v34 = (int64_t)v25->m_Items[v26];
    *(_QWORD *)(v27 + 16) = v34;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v27 + 16), v34, v28, v29, v30, v31, v32, v33);
    v35 = *(_QWORD *)(v27 + 16);
    if ( !v35 )
      goto LABEL_32;
    if ( !*(_BYTE *)(v35 + 60) && ((v23 & 0x80000000) != 0 || v23 == *(_DWORD *)(v35 + 28)) )
    {
      v36 = (System_Func_int__bool__o *)sub_1C13F70(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v36,
        (Il2CppObject *)v27,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v16,
             (System_Func_T__bool__o *)v36,
             (const MethodInfo_2F7A0AC *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v26 >= (int)v25->max_length )
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
  __int64 v11; // x1
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
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x0
  System_Int32_array *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  const MethodInfo *v29; // x2

  if ( (byte_4BB25FE & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_1C13D24(&Method_System_Linq_Enumerable_Take_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    byte_4BB25FE = 1;
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
    sub_1C13F88(IsNullOrEmpty, v11);
  if ( !entity )
LABEL_22:
    sub_1C13F80(IsNullOrEmpty, v11);
  v13 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0LL) )
    v16 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 1, v15);
  else
    v16 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v14);
  v19 = v16;
  v20 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2FC7A28 *)Method_System_Linq_Enumerable_Take_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v21, v19, v22) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0LL) )
    v25 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 0, v24);
  else
    v25 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v23);
  v26 = v25;
  v27 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2FC73F0 *)Method_System_Linq_Enumerable_Skip_int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v28, v26, v29);
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
  __int64 v11; // x1
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
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x0
  System_Int32_array *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Int32_array *v28; // x0
  const MethodInfo *v29; // x2

  if ( (byte_4BB25FF & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Skip_int___, vals);
    sub_1C13D24(&Method_System_Linq_Enumerable_Take_int___, v7);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    byte_4BB25FF = 1;
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
    sub_1C13F88(IsNullOrEmpty, v11);
  if ( !entity )
LABEL_22:
    sub_1C13F80(IsNullOrEmpty, v11);
  v13 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0LL) )
    v16 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 0, v15);
  else
    v16 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v14);
  v19 = v16;
  v20 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2FC7A28 *)Method_System_Linq_Enumerable_Take_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v21, v19, v22) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0LL) )
    v25 = WarBoardEventTiming__FilterPieceValsByForce(vals, v13, 1, v24);
  else
    v25 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v23);
  v26 = v25;
  v27 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2FC73F0 *)Method_System_Linq_Enumerable_Skip_int___);
  v28 = System_Linq_Enumerable__ToArray_int_(
          v27,
          (const MethodInfo_2FC8B9C *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v28, v26, v29);
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
    sub_1C13F80(this, x);
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
    sub_1C13F80(this, x);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
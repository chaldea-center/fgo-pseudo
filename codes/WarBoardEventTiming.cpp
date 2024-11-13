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
  if ( (byte_4B14166 & 1) == 0 )
  {
    vals = (System_Int32_array *)sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&index, method);
    byte_4B14166 = 1;
  }
  if ( !v4 )
    goto LABEL_15;
  v5 = 3 * index;
  v6 = 3 * index + 2;
  if ( v6 < (signed int)v4->max_length )
  {
    vals = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
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
      sub_1BCAA44(vals, *(_QWORD *)&index);
    }
LABEL_15:
    sub_1BCAA3C(vals, *(_QWORD *)&index);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_int__o *v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  il2cpp_array_size_t max_length; // w8
  unsigned int v17; // w23
  struct System_Int32_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  struct System_Int32_array *v21; // x9
  _QWORD *v22; // x10
  __int64 v23; // x11
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  signed int v27; // w9

  v4 = isGetAlly;
  if ( (byte_4B14165 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&forceId, isGetAlly);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v11, v12);
    byte_4B14165 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&forceId,
                                                    isGetAlly,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !vals )
    goto LABEL_27;
  max_length = vals->max_length;
  if ( (int)max_length >= 3 )
  {
    v17 = 1;
    while ( v17 - 1 < max_length )
    {
      v15 = (unsigned int)vals->m_Items[v17 - 1 + 1];
      if ( ((((_DWORD)v15 == forceId) ^ v4) & 1) == 0 )
      {
        if ( !v13 )
          goto LABEL_27;
        items = v13->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_27;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            v15,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = v15;
        }
        if ( v17 >= max_length )
          break;
        v15 = (unsigned int)vals->m_Items[v17 + 1];
        v21 = v13->fields._items;
        v22 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !v21 )
          goto LABEL_27;
        v23 = v13->fields._size;
        if ( (unsigned int)v23 >= v21->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            v15,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          max_length = vals->max_length;
        }
        else
        {
          v13->fields._size = v23 + 1;
          v21->m_Items[v23 + 1] = v15;
        }
        if ( v17 + 1 >= max_length )
          break;
        v15 = (unsigned int)vals->m_Items[v17 + 1 + 1];
        v24 = v13->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !v24 )
          goto LABEL_27;
        v26 = v13->fields._size;
        if ( (unsigned int)v26 >= v24->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            v15,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = v26 + 1;
          v24->m_Items[v26 + 1] = v15;
        }
      }
      max_length = vals->max_length;
      v27 = v17 + 4;
      v17 += 3;
      if ( v27 >= (int)max_length )
        goto LABEL_24;
    }
    sub_1BCAA44(v14, v15);
  }
LABEL_24:
  if ( !v13 )
LABEL_27:
    sub_1BCAA3C(v14, v15);
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardEventTiming__GetAlivePieceCount(bool isMy, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_array *Instance; // x0
  __int64 v5; // x1
  WarBoardData_o *v6; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v8; // w20
  int32_t v9; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v11; // w22
  int max_length; // w8
  WarBoardPieceData_array *v13; // x23
  unsigned int v14; // w27
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x24

  if ( (byte_4B14161 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B14161 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v6 = (WarBoardData_o *)Instance->m_Items[51];
  if ( isMy )
  {
    if ( !v6 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
  }
  else
  {
    if ( !v6 )
      goto LABEL_27;
    maxForceId_k__BackingField = v6->fields._maxForceId_k__BackingField;
  }
  v8 = !isMy;
  if ( maxForceId_k__BackingField >= v8 )
  {
    maxGroupId_k__BackingField = v6->fields._maxGroupId_k__BackingField;
    v9 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v8 > maxForceId_k__BackingField )
        return v9;
    }
    v11 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_36051476(v6, v8, v11, 0LL);
      if ( !Instance )
        goto LABEL_27;
      max_length = Instance->max_length;
      v13 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v11 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1BCAA44(Instance, v5);
      v15 = &v13->obj.klass + (int)v14;
      v16 = v15[4];
      if ( !v16 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v15[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v16->_1.klass) )
        v9 += *((unsigned __int8 *)&v16->_1.this_arg.bits + 4) ^ 1;
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v5);
  }
  return 0;
}


int32_t __fastcall WarBoardEventTiming__GetDefeatPieceCount(bool isMy, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_array *Instance; // x0
  __int64 v5; // x1
  WarBoardData_o *v6; // x19
  int32_t maxForceId_k__BackingField; // w25
  int32_t v8; // w20
  int32_t v9; // w21
  int32_t maxGroupId_k__BackingField; // w26
  int32_t v11; // w22
  int max_length; // w8
  WarBoardPieceData_array *v13; // x23
  unsigned int v14; // w27
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x24

  if ( (byte_4B14162 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B14162 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  v6 = (WarBoardData_o *)Instance->m_Items[51];
  if ( isMy )
  {
    if ( !v6 )
      goto LABEL_27;
    maxForceId_k__BackingField = 0;
  }
  else
  {
    if ( !v6 )
      goto LABEL_27;
    maxForceId_k__BackingField = v6->fields._maxForceId_k__BackingField;
  }
  v8 = !isMy;
  if ( maxForceId_k__BackingField >= v8 )
  {
    maxGroupId_k__BackingField = v6->fields._maxGroupId_k__BackingField;
    v9 = 0;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_24:
      if ( ++v8 > maxForceId_k__BackingField )
        return v9;
    }
    v11 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_36051476(v6, v8, v11, 0LL);
      if ( !Instance )
        goto LABEL_27;
      max_length = Instance->max_length;
      v13 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_23:
      if ( ++v11 > maxGroupId_k__BackingField )
        goto LABEL_24;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1BCAA44(Instance, v5);
      v15 = &v13->obj.klass + (int)v14;
      v16 = v15[4];
      if ( !v16 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v15[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v16->_1.klass) )
        v9 += *((unsigned __int8 *)&v16->_1.this_arg.bits + 4);
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_23;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v5);
  }
  return 0;
}


bool __fastcall WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardEventEntity_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_ICollection_o *SquareIndicesToAdd; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_int__o *v20; // x19
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x8
  __int64 v24; // x22
  unsigned __int64 v25; // x23
  __int64 v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  __int64 v34; // x8
  System_Func_int__bool__o *v35; // x21

  v3 = entity;
  if ( (byte_4B1415E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, method, v2);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor___76787440, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__, v12, v13);
    entity = (WarBoardEventEntity_o *)sub_1BCA7E0(&WarBoardEventTiming___c__DisplayClass22_0_TypeInfo, v14, v15);
    byte_4B1415E = 1;
  }
  if ( !v3 )
    goto LABEL_18;
  SquareIndicesToAdd = (System_Collections_ICollection_o *)WarBoardEventEntity__GetSquareIndicesToAdd(v3, 0LL);
  if ( BasicHelper__IsNullOrEmpty(SquareIndicesToAdd, 0LL) )
    return 0;
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor_56116492(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)SquareIndicesToAdd,
    (const MethodInfo_358450C *)Method_System_Collections_Generic_List_int___ctor___76787440);
  entity = (WarBoardEventEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !entity || (v23 = *(_QWORD *)&entity[5].fields.frequencyType) == 0 || (v24 = *(_QWORD *)(v23 + 48)) == 0 )
LABEL_18:
    sub_1BCAA3C(entity, method);
  if ( *(int *)(v24 + 24) < 1 )
    return 0;
  v25 = 0LL;
  while ( 1 )
  {
    v26 = sub_1BCAA2C(WarBoardEventTiming___c__DisplayClass22_0_TypeInfo, method, v21, v22);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( v25 >= *(unsigned int *)(v24 + 24) )
      sub_1BCAA44(entity, method);
    if ( !v26 )
      goto LABEL_18;
    v33 = *(_QWORD *)(v24 + 32 + 8 * v25);
    *(_QWORD *)(v26 + 16) = v33;
    sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), v33, v27, v28, v29, v30, v31, v32);
    v34 = *(_QWORD *)(v26 + 16);
    if ( !v34 )
      goto LABEL_18;
    if ( !*(_BYTE *)(v34 + 60) )
    {
      v35 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, method, v21, v22);
      System_Func_int__bool____ctor(
        v35,
        (Il2CppObject *)v26,
        Method_WarBoardEventTiming___c__DisplayClass22_0__IsAnyPieceMoveToTargetSquares_b__0__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v20,
             (System_Func_T__bool__o *)v35,
             (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v25 >= *(int *)(v24 + 24) )
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

  if ( (byte_4B14164 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, vals, method);
    byte_4B14164 = 1;
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
            v9 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
            v11 = condVals->max_length;
            if ( v8 >= v11 )
              goto LABEL_33;
            v12 = v9;
            if ( !v9 )
LABEL_34:
              sub_1BCAA3C(v9, v10);
            v13 = v9->max_length;
            if ( !v13
              || (v9->m_Items[1] = condVals->m_Items[v8 + 1], v8 + 1 >= v11)
              || v13 <= 1
              || (v9->m_Items[2] = condVals->m_Items[v8 + 1 + 1], v8 + 2 >= v11)
              || v13 <= 2 )
            {
LABEL_33:
              sub_1BCAA44(v9, v10);
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
            v9 = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Int32_array *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array *v12; // x0
  const MethodInfo *v13; // x2
  _BOOL8 IsCondPiece; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4B1415F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_int___, vals, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Take_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8);
    byte_4B1415F = 1;
  }
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_2F4A6FC *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_2F4A6FC *)Method_System_Linq_Enumerable_Take_int___);
  v12 = System_Linq_Enumerable__ToArray_int_(
          v11,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v10, v12, v13);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1BCAA3C(IsCondPiece, v15);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v16 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2F4A0C4 *)Method_System_Linq_Enumerable_Skip_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v18 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_2F4A0C4 *)Method_System_Linq_Enumerable_Skip_int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsCondPiece(v17, v19, v20);
}


bool __fastcall WarBoardEventTiming__IsAttackTargetPieceByAnyAttackers(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Int32_array *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Int32_array *v12; // x0
  const MethodInfo *v13; // x2
  _BOOL8 IsCondPiece; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32_array *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Int32_array *v19; // x1
  const MethodInfo *v20; // x2

  if ( (byte_4B14160 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_int___, vals, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Take_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v7, v8);
    byte_4B14160 = 1;
  }
  v9 = System_Linq_Enumerable__Take_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
         3,
         (const MethodInfo_2F4A6FC *)Method_System_Linq_Enumerable_Take_int___);
  v10 = System_Linq_Enumerable__ToArray_int_(
          v9,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v11 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_2F4A6FC *)Method_System_Linq_Enumerable_Take_int___);
  v12 = System_Linq_Enumerable__ToArray_int_(
          v11,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  IsCondPiece = WarBoardEventTiming__IsCondPiece(v10, v12, v13);
  if ( !IsCondPiece )
    return 0;
  if ( !condVals )
    sub_1BCAA3C(IsCondPiece, v15);
  if ( (int)condVals->max_length < 4 )
    return 1;
  v16 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2F4A0C4 *)Method_System_Linq_Enumerable_Skip_int___);
  v17 = System_Linq_Enumerable__ToArray_int_(
          v16,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  v18 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)vals,
          3,
          (const MethodInfo_2F4A0C4 *)Method_System_Linq_Enumerable_Skip_int___);
  v19 = System_Linq_Enumerable__ToArray_int_(
          v18,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v17, v19, v20);
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
    sub_1BCAA3C(condVals, vals);
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
    sub_1BCAA44(condVals, vals);
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
    sub_1BCAA44(DefeatPieceCount, v4);
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
    sub_1BCAA44(DefeatPieceCount, v4);
  return (int)DefeatPieceCount >= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsDefeatHalfEnemy(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  WarBoardPieceData_array *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *v5; // x19
  int maxForceId_k__BackingField; // w26
  int32_t maxGroupId_k__BackingField; // w27
  int v8; // w25
  int v9; // w24
  int32_t v10; // w20
  int32_t v11; // w21
  int max_length; // w8
  WarBoardPieceData_array *v13; // x22
  unsigned int v14; // w28
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x23
  int v17; // w8

  if ( (byte_4B1415B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v1, v2);
    byte_4B1415B = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  v5 = (WarBoardData_o *)Instance->m_Items[51];
  if ( !v5 )
    goto LABEL_26;
  maxForceId_k__BackingField = v5->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField >= 1 )
  {
    maxGroupId_k__BackingField = v5->fields._maxGroupId_k__BackingField;
    v8 = 0;
    v9 = 0;
    v10 = 1;
    while ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
    {
LABEL_19:
      if ( ++v10 > maxForceId_k__BackingField )
        goto LABEL_22;
    }
    v11 = 0;
    while ( 1 )
    {
      Instance = WarBoardData__GetPieces_36051476(v5, v10, v11, 0LL);
      if ( !Instance )
        goto LABEL_26;
      max_length = Instance->max_length;
      v13 = Instance;
      if ( max_length >= 1 )
        break;
LABEL_18:
      if ( ++v11 > maxGroupId_k__BackingField )
        goto LABEL_19;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1BCAA44(Instance, v4);
      v15 = &v13->obj.klass + (int)v14;
      v16 = v15[4];
      if ( !v16 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v15[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !LOBYTE(v16->_1.klass) )
      {
        ++v8;
        v9 += *((unsigned __int8 *)&v16->_1.this_arg.bits + 4);
      }
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_18;
    }
LABEL_26:
    sub_1BCAA3C(Instance, v4);
  }
  v9 = 0;
  v8 = 0;
LABEL_22:
  if ( v8 >= 0 )
    v17 = v8;
  else
    v17 = v8 + 1;
  return v9 > v17 >> 1;
}


bool __fastcall WarBoardEventTiming__IsEnemySvtNumBelow(System_Int32_array *condVals, const MethodInfo *method)
{
  __int64 AlivePieceCount; // x0
  __int64 v4; // x1

  AlivePieceCount = WarBoardEventTiming__GetAlivePieceCount(0, method);
  if ( !condVals )
    sub_1BCAA3C(AlivePieceCount, v4);
  if ( !condVals->max_length )
    sub_1BCAA44(AlivePieceCount, v4);
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
    sub_1BCAA3C(AlivePieceCount, v4);
  if ( !condVals->max_length )
    sub_1BCAA44(AlivePieceCount, v4);
  return (int)AlivePieceCount <= condVals->m_Items[1];
}


bool __fastcall WarBoardEventTiming__IsNowTurn(System_Int32_array *turns, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  __int64 TurnCount; // x0
  __int64 v7; // x1
  signed int max_length; // w9
  __int64 v9; // x10
  int32_t v10; // w12
  bool v11; // w8

  if ( (byte_4B1415C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B1415C = 1;
  }
  if ( !turns || !*(_QWORD *)&turns->max_length )
    return 1;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCAA3C(Instance, v5);
  TurnCount = WarBoardData__get_TurnCount(Instance, 0LL);
  max_length = turns->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0LL;
  do
  {
    if ( (unsigned int)v9 >= max_length )
      sub_1BCAA44(TurnCount, v7);
    v10 = turns->m_Items[++v9];
    v11 = v10 == (_DWORD)TurnCount;
  }
  while ( (int)v9 < max_length && v10 != (_DWORD)TurnCount );
  return v11;
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
  if ( (byte_4B14163 & 1) == 0 )
  {
    condVals = (System_Int32_array *)sub_1BCA7E0(&int___TypeInfo, vals, method);
    byte_4B14163 = 1;
  }
  if ( !v4 )
LABEL_19:
    sub_1BCAA3C(condVals, vals);
  if ( (int)v4->max_length < 3 )
  {
    return 0;
  }
  else
  {
    v5 = 0;
    do
    {
      condVals = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
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
        sub_1BCAA44(condVals, vals);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  WarBoardPieceData_array *IsNullOrEmpty; // x0
  const MethodInfo *v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_int__o *v26; // x19
  __int64 v27; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  int32_t v31; // w22
  int32_t v32; // w23
  int32_t v33; // w24
  System_Collections_Generic_IEnumerable_T__o *SquareIndicesToAdd; // x0
  __int64 v35; // x2
  __int64 v36; // x3
  WarBoardPieceData_array *v37; // x20
  unsigned __int64 v38; // x23
  __int64 v39; // x21
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  __int64 v47; // x8
  System_Func_int__bool__o *v48; // x22

  if ( (byte_4B1415D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int___, entity, method);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__, v17, v18);
    sub_1BCA7E0(&WarBoardEventTiming___c__DisplayClass21_0_TypeInfo, v19, v20);
    byte_4B1415D = 1;
  }
  IsNullOrEmpty = (WarBoardPieceData_array *)BasicHelper__IsNullOrEmpty(
                                               (System_Collections_ICollection_o *)condVals,
                                               0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return WarBoardEventTiming__IsAnyPieceMoveToTargetSquares(entity, v22);
  if ( !condVals )
    goto LABEL_32;
  if ( (int)condVals->max_length < 4 )
    return 0;
  v26 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v22,
                                                    v23,
                                                    v24);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v27 = *(_QWORD *)&condVals->max_length;
  if ( !(_DWORD)v27 )
    goto LABEL_33;
  if ( !v26 )
    goto LABEL_32;
  v22 = (const MethodInfo *)(unsigned int)condVals->m_Items[1];
  items = v26->fields._items;
  v29 = Method_System_Collections_Generic_List_int__Add__;
  ++v26->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v26->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v26,
      (int32_t)v22,
      *(const MethodInfo_3584C38 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    v27 = *(_QWORD *)&condVals->max_length;
  }
  else
  {
    v26->fields._size = size + 1;
    items->m_Items[size + 1] = (int)v22;
  }
  if ( (unsigned int)v27 < 4 )
LABEL_33:
    sub_1BCAA44(IsNullOrEmpty, v22);
  if ( !entity )
    goto LABEL_32;
  v31 = condVals->m_Items[2];
  v32 = condVals->m_Items[3];
  v33 = condVals->m_Items[4];
  SquareIndicesToAdd = (System_Collections_Generic_IEnumerable_T__o *)WarBoardEventEntity__GetSquareIndicesToAdd(
                                                                        entity,
                                                                        0LL);
  if ( SquareIndicesToAdd )
    System_Collections_Generic_List_int___AddRange(
      v26,
      SquareIndicesToAdd,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  IsNullOrEmpty = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !IsNullOrEmpty
    || (IsNullOrEmpty = (WarBoardPieceData_array *)IsNullOrEmpty->m_Items[51]) == 0LL
    || (IsNullOrEmpty = WarBoardData__GetPieces_36051476((WarBoardData_o *)IsNullOrEmpty, v31, v32, 0LL)) == 0LL )
  {
LABEL_32:
    sub_1BCAA3C(IsNullOrEmpty, v22);
  }
  v37 = IsNullOrEmpty;
  if ( (int)IsNullOrEmpty->max_length < 1 )
    return 0;
  v38 = 0LL;
  while ( 1 )
  {
    v39 = sub_1BCAA2C(WarBoardEventTiming___c__DisplayClass21_0_TypeInfo, v22, v35, v36);
    System_Object___ctor((Il2CppObject *)v39, 0LL);
    if ( v38 >= v37->max_length )
      goto LABEL_33;
    if ( !v39 )
      goto LABEL_32;
    v46 = (int64_t)v37->m_Items[v38];
    *(_QWORD *)(v39 + 16) = v46;
    sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 16), v46, v40, v41, v42, v43, v44, v45);
    v47 = *(_QWORD *)(v39 + 16);
    if ( !v47 )
      goto LABEL_32;
    if ( !*(_BYTE *)(v47 + 60) && ((v33 & 0x80000000) != 0 || v33 == *(_DWORD *)(v47 + 28)) )
    {
      v48 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v22, v35, v36);
      System_Func_int__bool____ctor(
        v48,
        (Il2CppObject *)v39,
        Method_WarBoardEventTiming___c__DisplayClass21_0__IsPieceMoveToTargetSquares_b__0__,
        0LL);
      if ( BasicHelper__Any_int_(
             (System_Collections_Generic_List_T__o *)v26,
             (System_Func_T__bool__o *)v48,
             (const MethodInfo_2EFD968 *)Method_BasicHelper_Any_int___) )
      {
        return 1;
      }
    }
    if ( (__int64)++v38 >= (int)v37->max_length )
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t v15; // w22
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v20; // x2
  System_Int32_array *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x0
  System_Int32_array *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_4B14159 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_int___, vals, entity);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Take_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    byte_4B14159 = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v14);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v20);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
    sub_1BCAA44(IsNullOrEmpty, v13);
  if ( !entity )
LABEL_22:
    sub_1BCAA3C(IsNullOrEmpty, v13);
  v15 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0LL) )
    v18 = WarBoardEventTiming__FilterPieceValsByForce(vals, v15, 1, v17);
  else
    v18 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v16);
  v21 = v18;
  v22 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2F4A6FC *)Method_System_Linq_Enumerable_Take_int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v23, v21, v24) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0LL) )
    v27 = WarBoardEventTiming__FilterPieceValsByForce(vals, v15, 0, v26);
  else
    v27 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v25);
  v28 = v27;
  v29 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2F4A0C4 *)Method_System_Linq_Enumerable_Skip_int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v30, v28, v31);
}


bool __fastcall WarBoardEventTiming__IsSpecifiedPieceDefense(
        System_Int32_array *condVals,
        System_Int32_array *vals,
        WarBoardEventEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  int32_t v15; // w22
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x3
  System_Int32_array *v18; // x0
  System_Int32_array *PieceValsFromValsSequence; // x1
  const MethodInfo *v20; // x2
  System_Int32_array *v21; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x0
  System_Int32_array *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Int32_array *v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_4B1415A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_int___, vals, entity);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Take_int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    byte_4B1415A = 1;
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
    PieceValsFromValsSequence = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v14);
    return WarBoardEventTiming__IsCondPiece(condVals, PieceValsFromValsSequence, v20);
  }
  if ( !vals )
    goto LABEL_22;
  if ( !vals->max_length )
    sub_1BCAA44(IsNullOrEmpty, v13);
  if ( !entity )
LABEL_22:
    sub_1BCAA3C(IsNullOrEmpty, v13);
  v15 = vals->m_Items[1];
  if ( WarBoardEventEntity__IsIncludeInvolvedDefender(entity, 0LL) )
    v18 = WarBoardEventTiming__FilterPieceValsByForce(vals, v15, 0, v17);
  else
    v18 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 1, v16);
  v21 = v18;
  v22 = System_Linq_Enumerable__Take_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2F4A6FC *)Method_System_Linq_Enumerable_Take_int___);
  v23 = System_Linq_Enumerable__ToArray_int_(
          v22,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !WarBoardEventTiming__IsAnyPieceValsMatched(v23, v21, v24) )
    return 0;
  if ( condVals->max_length == 3 )
    return 1;
  if ( WarBoardEventEntity__IsIncludeInvolvedAttacker(entity, 0LL) )
    v27 = WarBoardEventTiming__FilterPieceValsByForce(vals, v15, 1, v26);
  else
    v27 = WarBoardEventTiming__ExtractPieceValsFromValsSequence(vals, 0, v25);
  v28 = v27;
  v29 = System_Linq_Enumerable__Skip_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)condVals,
          3,
          (const MethodInfo_2F4A0C4 *)Method_System_Linq_Enumerable_Skip_int___);
  v30 = System_Linq_Enumerable__ToArray_int_(
          v29,
          (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  return WarBoardEventTiming__IsAnyPieceValsMatched(v30, v28, v31);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardEventTiming___c__DisplayClass21_0___IsPieceMoveToTargetSquares_b__0(
        WarBoardEventTiming___c__DisplayClass21_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}


void __fastcall WarBoardEventTiming___c__DisplayClass22_0___ctor(
        WarBoardEventTiming___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardEventTiming___c__DisplayClass22_0___IsAnyPieceMoveToTargetSquares_b__0(
        WarBoardEventTiming___c__DisplayClass22_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *targetPiece; // x8

  targetPiece = this->fields.targetPiece;
  if ( !targetPiece )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return targetPiece->fields._nowSquareIndex_k__BackingField == x;
}
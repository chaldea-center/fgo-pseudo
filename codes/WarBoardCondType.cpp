void __fastcall WarBoardCondType___ctor(WarBoardCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardData_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1A2D5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&status);
    sub_1BCAFF8(&StringLiteral_23473/*"status"*/, v5);
    byte_4B1A2D5 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCB254(Instance, v7);
  return WarBoardData__IsBossInfo(Instance, bossId, (System_String_o *)StringLiteral_23473/*"status"*/, status, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsIndividualityTargetNumBelow(
        int32_t forceId,
        int32_t groupId,
        int32_t IndividualityId,
        int32_t targetAliveCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  WarBoardPieceData_array *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  WarBoardPieceData_array *v14; // x21
  unsigned int v15; // w24
  int32_t v16; // w23
  Il2CppClass **v17; // x8
  WarBoardPieceData_o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0

  if ( (byte_4B1A2D9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&groupId);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_4B1A2D9 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_17;
  Instance = WarBoardData__GetPieces_37070332((WarBoardData_o *)Instance, forceId, groupId, 0LL);
  if ( !Instance )
    goto LABEL_17;
  max_length = Instance->max_length;
  v14 = Instance;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1BCB25C(Instance, v11, v12);
      v17 = &v14->obj.klass + (int)v15;
      v18 = (WarBoardPieceData_o *)v17[4];
      if ( !v18 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v17[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !v18->fields._isDead_k__BackingField )
      {
        Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__GetIndividuality(
                                                                               v18,
                                                                               0LL,
                                                                               0LL);
        Instance = (WarBoardPieceData_array *)System_Linq_Enumerable__Contains_int_(
                                                Individuality,
                                                IndividualityId,
                                                (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
        v16 += (unsigned __int8)Instance & 1;
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return v16 <= targetAliveCount;
    }
LABEL_17:
    sub_1BCB254(Instance, v11);
  }
  v16 = 0;
  return v16 <= targetAliveCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsOpen(
        int32_t condType,
        int32_t forceId,
        int32_t groupId,
        int32_t condId,
        int32_t condNum,
        const MethodInfo *method)
{
  bool result; // w0
  bool v12; // w8
  bool v13; // w2
  int32_t v14; // w0
  int32_t v15; // w1
  bool v16; // w3
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  int32_t destServantCount[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1A2C9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&forceId);
    byte_4B1A2C9 = 1;
  }
  switch ( condType )
  {
    case 1:
      return WarBoardCondType__IsPieceDefeat(forceId, groupId, condId, *(const MethodInfo **)&condId);
    case 2:
      return WarBoardCondType__IsPieceTargetNumBelow(forceId, groupId, condId, *(const MethodInfo **)&condId);
    case 3:
      return WarBoardCondType__IsTargetTurn(condId, *(const MethodInfo **)&forceId);
    case 4:
      return WarBoardCondType__IsTargetTurnMultiple(condId, *(const MethodInfo **)&forceId);
    case 5:
      return WarBoardCondType__IsTargetSquareMove(forceId, groupId, condId, condNum, *(const MethodInfo **)&condNum);
    case 6:
      return WarBoardCondType__IsPieceAlive(forceId, groupId, condId, *(const MethodInfo **)&condId);
    case 7:
      return WarBoardCondType__IsTargetTurnCondAchieve(condId, condNum, *(const MethodInfo **)&groupId);
    case 8:
      return WarBoardCondType__IsTargetTurnMultipleCondAchieve(condId, condNum, *(const MethodInfo **)&groupId);
    case 9:
      *(_QWORD *)destServantCount = 0LL;
      WarBoardCondType__SetSquareServantCount(
        forceId == 0,
        condId,
        condNum,
        &destServantCount[1],
        destServantCount,
        method);
      v12 = destServantCount[1] >= destServantCount[0];
      goto LABEL_22;
    case 10:
      *(_QWORD *)destServantCount = 0LL;
      WarBoardCondType__SetSquareServantCount(
        forceId == 0,
        condId,
        condNum,
        &destServantCount[1],
        destServantCount,
        method);
      v12 = destServantCount[1] <= destServantCount[0];
      goto LABEL_22;
    case 11:
      return WarBoardCondType__IsBossStatus(condId, condNum, *(const MethodInfo **)&groupId);
    case 12:
      v12 = !WarBoardCondType__IsBossStatus(condId, condNum, *(const MethodInfo **)&groupId);
      goto LABEL_22;
    case 13:
      return WarBoardCondType__IsWallDestroy(condId, *(const MethodInfo **)&forceId);
    case 14:
      return WarBoardCondType__IsPieceBreakPointDefeat(
               forceId,
               groupId,
               condId,
               condNum,
               *(const MethodInfo **)&condNum);
    case 15:
      return WarBoardCondType__IsReinforcementsAppear(forceId, groupId, condId, *(const MethodInfo **)&condId);
    case 16:
      return WarBoardCondType__IsIndividualityTargetNumBelow(
               forceId,
               groupId,
               condId,
               condNum,
               *(const MethodInfo **)&condNum);
    case 17:
      v13 = 1;
      v14 = condId;
      v15 = condNum;
      goto LABEL_17;
    case 18:
      v14 = condId;
      v15 = condNum;
      v13 = 0;
LABEL_17:
      v16 = 0;
      goto LABEL_27;
    case 19:
      v13 = 1;
      v16 = 1;
      v14 = condId;
      v15 = condNum;
      goto LABEL_27;
    case 20:
      v16 = 1;
      v14 = condId;
      v15 = condNum;
      v13 = 0;
LABEL_27:
      result = WarBoardCondType__IsTargetTurnProcessedFromEventDone(v14, v15, v13, v16, *(const MethodInfo **)&condNum);
      break;
    case 21:
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1BCB254(0LL, v18);
      result = WarBoardManager__IsNowTurn_37272660((WarBoardManager_o *)Instance, forceId, groupId, 0LL);
      break;
    case 22:
      result = WarBoardCondType__IsTargetEventNotDone(condId, *(const MethodInfo **)&forceId);
      break;
    default:
      v12 = 0;
LABEL_22:
      result = v12;
      break;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsPieceAlive(
        int32_t forceId,
        int32_t groupId,
        int32_t targetPieceIndex,
        const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  int v11; // w9
  WarBoardPieceData_o *v12; // x10

  if ( (byte_4B1A2CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4B1A2CF = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0LL
    || (Instance = WarBoardData__GetPieces_37070332((WarBoardData_o *)Instance, forceId, groupId, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCB254(Instance, v8);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( max_length == v11 )
      sub_1BCB25C(Instance, v8, v9);
    v12 = Instance->m_Items[v11];
    if ( !v12 )
      goto LABEL_14;
    if ( v12->fields._index_k__BackingField == targetPieceIndex )
      return !v12->fields._isDead_k__BackingField;
    if ( max_length == ++v11 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsPieceBreakPointDefeat(
        int32_t forceId,
        int32_t groupId,
        int32_t targetPieceId,
        int32_t defeatBreakPoint,
        const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  int v13; // w9
  WarBoardPieceData_o *v14; // x10

  if ( (byte_4B1A2D3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4B1A2D3 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0LL
    || (Instance = WarBoardData__GetPieces_37070332((WarBoardData_o *)Instance, forceId, groupId, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCB254(Instance, v10);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( max_length == v13 )
      sub_1BCB25C(Instance, v10, v11);
    v14 = Instance->m_Items[v13];
    if ( !v14 )
      goto LABEL_14;
    if ( v14->fields._index_k__BackingField == targetPieceId )
      return v14->fields._breakPointMax_k__BackingField - v14->fields._breakPoint_k__BackingField >= defeatBreakPoint;
    if ( max_length == ++v13 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsPieceDefeat(
        int32_t forceId,
        int32_t groupId,
        int32_t targetPieceId,
        const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  int v11; // w9
  WarBoardPieceData_o *v12; // x10

  if ( (byte_4B1A2CA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4B1A2CA = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0LL
    || (Instance = WarBoardData__GetPieces_37070332((WarBoardData_o *)Instance, forceId, groupId, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1BCB254(Instance, v8);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( max_length == v11 )
      sub_1BCB25C(Instance, v8, v9);
    v12 = Instance->m_Items[v11];
    if ( !v12 )
      goto LABEL_14;
    if ( v12->fields._index_k__BackingField == targetPieceId )
      return v12->fields._isDead_k__BackingField;
    if ( max_length == ++v11 )
      return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsPieceTargetNumBelow(
        int32_t forceId,
        int32_t groupId,
        int32_t targetAliveCount,
        const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  WarBoardPieceData_array *v11; // x20
  unsigned int v12; // w23
  int32_t v13; // w22
  Il2CppClass **v14; // x8
  WarBoardPieceData_o *v15; // x21

  if ( (byte_4B1A2CB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4B1A2CB = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_18;
  Instance = WarBoardData__GetPieces_37070332((WarBoardData_o *)Instance, forceId, groupId, 0LL);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v11 = Instance;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCB25C(Instance, v8, v9);
      v14 = &v11->obj.klass + (int)v12;
      v15 = (WarBoardPieceData_o *)v14[4];
      if ( !v15 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v14[4], 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_IsStageBoss(v15, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 && !v15->fields._isDead_k__BackingField )
          v13 += !v15->fields._isNotIncludeWin_k__BackingField;
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return v13 <= targetAliveCount;
    }
LABEL_18:
    sub_1BCB254(Instance, v8);
  }
  v13 = 0;
  return v13 <= targetAliveCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsReinforcementsAppear(
        int32_t forceId,
        int32_t groupId,
        int32_t condId,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4B1A2D6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4B1A2D6 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCB254(Instance, v8);
  return WarBoardData__IsReinforcementsApper(Instance, forceId, groupId, condId, 0LL);
}


bool __fastcall WarBoardCondType__IsTargetEventNotDone(int32_t eventId, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1A2D8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B1A2D8 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCB254(Instance, v4);
  return WarBoardData__GetPlayedEventData(Instance, eventId, 0LL) == 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetSquareMove(
        int32_t forceId,
        int32_t groupId,
        int32_t targetPieceIndex,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  int v13; // w9
  WarBoardPieceData_o *v14; // x10

  if ( (byte_4B1A2CE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4B1A2CE = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0LL
    || (Instance = WarBoardData__GetPieces_37070332((WarBoardData_o *)Instance, forceId, groupId, 0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCB254(Instance, v10);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( max_length == v13 )
      sub_1BCB25C(Instance, v10, v11);
    v14 = Instance->m_Items[v13];
    if ( !v14 )
      goto LABEL_17;
    if ( !v14->fields._isDead_k__BackingField
      && v14->fields._nowSquareIndex_k__BackingField == squareIndex
      && ((targetPieceIndex & 0x80000000) != 0 || v14->fields._index_k__BackingField == targetPieceIndex) )
    {
      return 1;
    }
    if ( max_length == ++v13 )
      return 0;
  }
}


bool __fastcall WarBoardCondType__IsTargetTurn(int32_t targetTurn, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1A2CC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B1A2CC = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCB254(Instance, v4);
  return WarBoardData__get_TurnCount(Instance, 0LL) == targetTurn;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetTurnCondAchieve(
        int32_t startCondId,
        int32_t targetTurn,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  int32_t ClearedTurn; // w0
  int32_t v8; // w20
  int v9; // w8

  if ( (byte_4B1A2D0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&targetTurn);
    byte_4B1A2D0 = 1;
  }
  if ( (targetTurn & 0x80000000) == 0 )
  {
    Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
    if ( !Instance )
      goto LABEL_11;
    ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, 0LL);
    if ( (ClearedTurn & 0x80000000) == 0 )
    {
      v8 = ClearedTurn;
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
        if ( Instance )
        {
          v9 = WarBoardData__get_TurnCount(Instance, 0LL) - v8;
          return v9 >= 0 && v9 == targetTurn;
        }
      }
LABEL_11:
      sub_1BCB254(Instance, v6);
    }
  }
  return 0;
}


bool __fastcall WarBoardCondType__IsTargetTurnMultiple(int32_t multipleTurn, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1A2CD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4B1A2CD = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCB254(Instance, v4);
  return WarBoardData__get_TurnCount(Instance, 0LL) % multipleTurn == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetTurnMultipleCondAchieve(
        int32_t startCondId,
        int32_t multipleTurn,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  int32_t ClearedTurn; // w0
  int32_t v8; // w20
  int v9; // w8

  if ( (byte_4B1A2D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&multipleTurn);
    byte_4B1A2D1 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_12;
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, 0LL);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v8 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
LABEL_12:
    sub_1BCB254(Instance, v6);
  v9 = WarBoardData__get_TurnCount(Instance, 0LL) - v8;
  if ( v9 >= 1 )
    return v9 % (unsigned int)multipleTurn == 0;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetTurnProcessedFromEventDone(
        int32_t eventId,
        int32_t turn,
        bool lookFirstPlayedTurn,
        bool useModulo,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  WarBoardData_o *monitor; // x23
  WarBoardEventData_o *PlayedEventData; // x0
  __int64 v13; // x8
  int v14; // w21
  int v15; // w8
  bool v16; // zf

  if ( (byte_4B1A2D7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&turn);
    byte_4B1A2D7 = 1;
  }
  if ( (turn & 0x80000000) != 0 )
  {
    LOBYTE(PlayedEventData) = 0;
    return (char)PlayedEventData;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0LL )
    sub_1BCB254(Instance, v10);
  PlayedEventData = WarBoardData__GetPlayedEventData((WarBoardData_o *)Instance[27].monitor, eventId, 0LL);
  if ( PlayedEventData )
  {
    v13 = 20LL;
    if ( lookFirstPlayedTurn )
      v13 = 24LL;
    v14 = *(_DWORD *)((char *)&PlayedEventData->klass + v13);
    v15 = WarBoardData__get_TurnCount(monitor, 0LL) - v14;
    if ( !useModulo )
    {
      v16 = v15 == turn;
LABEL_15:
      LOBYTE(PlayedEventData) = v16;
      return (char)PlayedEventData;
    }
    LOBYTE(PlayedEventData) = 0;
    if ( turn >= 1 && v15 >= 1 )
    {
      v16 = v15 % (unsigned int)turn == 0;
      goto LABEL_15;
    }
  }
  return (char)PlayedEventData;
}


bool __fastcall WarBoardCondType__IsWallDestroy(int32_t wallId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  void *monitor; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *v15; // x21
  Il2CppObject *v16; // x0
  Il2CppClass *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *data; // x20
  System_Func_object__bool__o *v19; // x21

  if ( (byte_4B1A2D2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, v3);
    sub_1BCAFF8(&System_Func_WarBoardUserWallData__bool__TypeInfo, v4);
    sub_1BCAFF8(&System_Func_WarBoardWallData__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_1BCAFF8(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__, v7);
    sub_1BCAFF8(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__, v8);
    sub_1BCAFF8(&WarBoardCondType___c__DisplayClass10_0_TypeInfo, v9);
    byte_4B1A2D2 = 1;
  }
  v10 = sub_1BCB244(WarBoardCondType___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10
    || (*(_DWORD *)(v10 + 16) = wallId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = Instance[27].monitor,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_1BCB254(Instance, v12);
  }
  if ( monitor )
  {
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 11);
    v15 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarBoardWallData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)v10,
      Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__,
      0LL);
    v16 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
            v14,
            (System_Func_TSource__bool__o *)v15,
            (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    if ( v16 )
      LOBYTE(v16) = LOBYTE(v16[2].klass) != 0;
  }
  else
  {
    klass = Instance[28].klass;
    if ( klass && (data = (System_Collections_Generic_IEnumerable_TSource__o *)klass->_1.this_arg.data) != 0LL )
    {
      v19 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v19,
        (Il2CppObject *)v10,
        Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__,
        0LL);
      v16 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
              data,
              (System_Func_TSource__bool__o *)v19,
              (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v16 )
        LOBYTE(v16) = SHIDWORD(v16[1].klass) < 1;
    }
    else
    {
      LOBYTE(v16) = 0;
    }
  }
  return (char)v16;
}


bool __fastcall WarBoardCondType__NotBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  return !WarBoardCondType__IsBossStatus(bossId, status, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardCondType__SetSquareServantCount(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        int32_t *srcServantCount,
        int32_t *destServantCount,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Int32_array *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w24
  System_Collections_Generic_List_int__o *StageList; // x23
  System_Collections_Generic_List_int__o *v18; // x22
  WarBoardManager_o *v19; // x24
  WarBoardManager_o *v20; // x21

  if ( (byte_4B1A2D4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, *(_QWORD *)&srcId);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    byte_4B1A2D4 = 1;
  }
  *destServantCount = 0;
  *srcServantCount = 0;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v16 = Instance->m_Items[98];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  StageList = WarBoardSquareIndexGroupMaster__GetStageList(
                (WarBoardSquareIndexGroupMaster_o *)Instance,
                srcId,
                v16,
                0LL);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  v18 = WarBoardSquareIndexGroupMaster__GetStageList((WarBoardSquareIndexGroupMaster_o *)Instance, destId, v16, 0LL);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !StageList
    || (v19 = (WarBoardManager_o *)Instance,
        Instance = System_Collections_Generic_List_int___ToArray(
                     StageList,
                     (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v19)
    || (*srcServantCount = WarBoardManager__GetSquareServantCount(v19, isPlayer, Instance, 0LL),
        Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        !v18)
    || (v20 = (WarBoardManager_o *)Instance,
        Instance = System_Collections_Generic_List_int___ToArray(
                     v18,
                     (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v20) )
  {
LABEL_13:
    sub_1BCB254(Instance, v15);
  }
  *destServantCount = WarBoardManager__GetSquareServantCount(v20, isPlayer, Instance, 0LL);
}


bool __fastcall WarBoardCondType__SquareIndexGroupSvtNumAbove(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t destServantCount[2]; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)destServantCount = 0LL;
  WarBoardCondType__SetSquareServantCount(isPlayer, srcId, destId, &destServantCount[1], destServantCount, v4);
  return destServantCount[1] >= destServantCount[0];
}


bool __fastcall WarBoardCondType__SquareIndexGroupSvtNumBelow(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t destServantCount[2]; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)destServantCount = 0LL;
  WarBoardCondType__SetSquareServantCount(isPlayer, srcId, destId, &destServantCount[1], destServantCount, v4);
  return destServantCount[1] <= destServantCount[0];
}


void __fastcall WarBoardCondType___c__DisplayClass10_0___ctor(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__0(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields._wallId_k__BackingField == this->fields.wallId;
}


bool __fastcall WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__1(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.id == this->fields.wallId;
}
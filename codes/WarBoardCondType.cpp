void WarBoardCondType___ctor(WarBoardCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardCondType__IsBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C25059 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&StringLiteral_23663/*"status"*/);
    byte_4C25059 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v6);
  return WarBoardData__IsBossInfo(Instance, bossId, (System_String_o *)StringLiteral_23663/*"status"*/, status, 0);
}


bool WarBoardCondType__IsIndividualityTargetNumBelow(
        int32_t forceId,
        int32_t groupId,
        int32_t IndividualityId,
        int32_t targetAliveCount,
        const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  WarBoardPieceData_array *v13; // x21
  unsigned int v14; // w24
  int32_t v15; // w23
  Il2CppClass **v16; // x8
  WarBoardPieceData_o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0

  if ( (byte_4C2505D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2505D = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_17;
  Instance = WarBoardData__GetPieces_37727528((WarBoardData_o *)Instance, forceId, groupId, 0);
  if ( !Instance )
    goto LABEL_17;
  max_length = Instance->max_length;
  v13 = Instance;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C2D6F4(Instance, v10, v11);
      v16 = &v13->obj.klass + (int)v14;
      v17 = (WarBoardPieceData_o *)v16[4];
      if ( !v17 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v16[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 && !v17->fields._isDead_k__BackingField )
      {
        Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__GetIndividuality(
                                                                               v17,
                                                                               0,
                                                                               0);
        Instance = (WarBoardPieceData_array *)System_Linq_Enumerable__Contains_int_(
                                                Individuality,
                                                IndividualityId,
                                                (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        v15 += (unsigned __int8)Instance & 1;
      }
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        return v15 <= targetAliveCount;
    }
LABEL_17:
    sub_1C2D6EC(Instance, v10);
  }
  v15 = 0;
  return v15 <= targetAliveCount;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardCondType__IsOpen(
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

  if ( (byte_4C2504D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2504D = 1;
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
      *(_QWORD *)destServantCount = 0;
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
      *(_QWORD *)destServantCount = 0;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1C2D6EC(0, v18);
      result = WarBoardManager__IsNowTurn_37853172((WarBoardManager_o *)Instance, forceId, groupId, 0);
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


bool WarBoardCondType__IsPieceAlive(
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

  if ( (byte_4C25053 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25053 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0
    || (Instance = WarBoardData__GetPieces_37727528((WarBoardData_o *)Instance, forceId, groupId, 0)) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(Instance, v8);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( max_length == v11 )
      sub_1C2D6F4(Instance, v8, v9);
    v12 = Instance->m_Items[v11];
    if ( !v12 )
      goto LABEL_14;
    if ( v12->fields._index_k__BackingField == targetPieceIndex )
      return !v12->fields._isDead_k__BackingField;
    if ( max_length == ++v11 )
      return 0;
  }
}


bool WarBoardCondType__IsPieceBreakPointDefeat(
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

  if ( (byte_4C25057 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25057 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0
    || (Instance = WarBoardData__GetPieces_37727528((WarBoardData_o *)Instance, forceId, groupId, 0)) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(Instance, v10);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( max_length == v13 )
      sub_1C2D6F4(Instance, v10, v11);
    v14 = Instance->m_Items[v13];
    if ( !v14 )
      goto LABEL_14;
    if ( v14->fields._index_k__BackingField == targetPieceId )
      return v14->fields._breakPointMax_k__BackingField - v14->fields._breakPoint_k__BackingField >= defeatBreakPoint;
    if ( max_length == ++v13 )
      return 0;
  }
}


bool WarBoardCondType__IsPieceDefeat(int32_t forceId, int32_t groupId, int32_t targetPieceId, const MethodInfo *method)
{
  WarBoardPieceData_array *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  int v11; // w9
  WarBoardPieceData_o *v12; // x10

  if ( (byte_4C2504E & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2504E = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0
    || (Instance = WarBoardData__GetPieces_37727528((WarBoardData_o *)Instance, forceId, groupId, 0)) == 0 )
  {
LABEL_14:
    sub_1C2D6EC(Instance, v8);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( max_length == v11 )
      sub_1C2D6F4(Instance, v8, v9);
    v12 = Instance->m_Items[v11];
    if ( !v12 )
      goto LABEL_14;
    if ( v12->fields._index_k__BackingField == targetPieceId )
      return v12->fields._isDead_k__BackingField;
    if ( max_length == ++v11 )
      return 0;
  }
}


bool WarBoardCondType__IsPieceTargetNumBelow(
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

  if ( (byte_4C2504F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2504F = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (WarBoardPieceData_array *)Instance->m_Items[51];
  if ( !Instance )
    goto LABEL_18;
  Instance = WarBoardData__GetPieces_37727528((WarBoardData_o *)Instance, forceId, groupId, 0);
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
        sub_1C2D6F4(Instance, v8, v9);
      v14 = &v11->obj.klass + (int)v12;
      v15 = (WarBoardPieceData_o *)v14[4];
      if ( !v15 )
        break;
      Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v14[4], 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (WarBoardPieceData_array *)WarBoardPieceData__get_IsStageBoss(v15, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 && !v15->fields._isDead_k__BackingField )
          v13 += !v15->fields._isNotIncludeWin_k__BackingField;
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return v13 <= targetAliveCount;
    }
LABEL_18:
    sub_1C2D6EC(Instance, v8);
  }
  v13 = 0;
  return v13 <= targetAliveCount;
}


bool WarBoardCondType__IsReinforcementsAppear(
        int32_t forceId,
        int32_t groupId,
        int32_t condId,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4C2505A & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2505A = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v8);
  return WarBoardData__IsReinforcementsApper(Instance, forceId, groupId, condId, 0);
}


bool WarBoardCondType__IsTargetEventNotDone(int32_t eventId, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2505C & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2505C = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v4);
  return WarBoardData__GetPlayedEventData(Instance, eventId, 0) == 0;
}


bool WarBoardCondType__IsTargetSquareMove(
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

  if ( (byte_4C25052 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25052 = 1;
  }
  Instance = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (WarBoardPieceData_array *)Instance->m_Items[51]) == 0
    || (Instance = WarBoardData__GetPieces_37727528((WarBoardData_o *)Instance, forceId, groupId, 0)) == 0 )
  {
LABEL_17:
    sub_1C2D6EC(Instance, v10);
  }
  max_length = Instance->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( max_length == v13 )
      sub_1C2D6F4(Instance, v10, v11);
    v14 = Instance->m_Items[v13];
    if ( !v14 )
      goto LABEL_17;
    if ( !v14->fields._isDead_k__BackingField
      && v14->fields._nowSquareIndex_k__BackingField == squareIndex
      && (targetPieceIndex < 0 || v14->fields._index_k__BackingField == targetPieceIndex) )
    {
      return 1;
    }
    if ( max_length == ++v13 )
      return 0;
  }
}


bool WarBoardCondType__IsTargetTurn(int32_t targetTurn, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25050 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25050 = 1;
  }
  if ( targetTurn < 0 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v4);
  return WarBoardData__get_TurnCount(Instance, 0) == targetTurn;
}


bool WarBoardCondType__IsTargetTurnCondAchieve(int32_t startCondId, int32_t targetTurn, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  int32_t ClearedTurn; // w0
  int32_t v8; // w20
  int v9; // w8

  if ( (byte_4C25054 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25054 = 1;
  }
  if ( (targetTurn & 0x80000000) == 0 )
  {
    Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_11;
    Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
    if ( !Instance )
      goto LABEL_11;
    ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, 0);
    if ( (ClearedTurn & 0x80000000) == 0 )
    {
      v8 = ClearedTurn;
      Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
        if ( Instance )
        {
          v9 = WarBoardData__get_TurnCount(Instance, 0) - v8;
          return v9 >= 0 && v9 == targetTurn;
        }
      }
LABEL_11:
      sub_1C2D6EC(Instance, v6);
    }
  }
  return 0;
}


bool WarBoardCondType__IsTargetTurnMultiple(int32_t multipleTurn, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C25051 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25051 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C2D6EC(Instance, v4);
  return WarBoardData__get_TurnCount(Instance, 0) % multipleTurn == 0;
}


bool WarBoardCondType__IsTargetTurnMultipleCondAchieve(
        int32_t startCondId,
        int32_t multipleTurn,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  int32_t ClearedTurn; // w0
  int32_t v8; // w20
  int v9; // w8

  if ( (byte_4C25055 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25055 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList;
  if ( !Instance )
    goto LABEL_12;
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, 0);
  if ( ClearedTurn < 0 )
    return 0;
  v8 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
LABEL_12:
    sub_1C2D6EC(Instance, v6);
  v9 = WarBoardData__get_TurnCount(Instance, 0) - v8;
  if ( v9 >= 1 )
    return v9 % (unsigned int)multipleTurn == 0;
  return 0;
}


bool WarBoardCondType__IsTargetTurnProcessedFromEventDone(
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

  if ( (byte_4C2505B & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C2505B = 1;
  }
  if ( turn < 0 )
  {
    LOBYTE(PlayedEventData) = 0;
    return (char)PlayedEventData;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[27].monitor) == 0 )
    sub_1C2D6EC(Instance, v10);
  PlayedEventData = WarBoardData__GetPlayedEventData((WarBoardData_o *)Instance[27].monitor, eventId, 0);
  if ( PlayedEventData )
  {
    v13 = 20;
    if ( lookFirstPlayedTurn )
      v13 = 24;
    v14 = *(_DWORD *)((char *)&PlayedEventData->klass + v13);
    v15 = WarBoardData__get_TurnCount(monitor, 0) - v14;
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


bool WarBoardCondType__IsWallDestroy(int32_t wallId, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  void *monitor; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_object__bool__o *v8; // x21
  Il2CppObject *v9; // x0
  Il2CppClass *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *data; // x20
  System_Func_object__bool__o *v12; // x21

  if ( (byte_4C25056 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    sub_1C2D490(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_1C2D490(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C2D490(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__);
    sub_1C2D490(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__);
    sub_1C2D490(&WarBoardCondType___c__DisplayClass10_0_TypeInfo);
    byte_4C25056 = 1;
  }
  v3 = sub_1C2D6DC(WarBoardCondType___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3
    || (*(_DWORD *)(v3 + 16) = wallId,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0)
    || (monitor = Instance[27].monitor,
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0) )
  {
    sub_1C2D6EC(Instance, v5);
  }
  if ( monitor )
  {
    v7 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 11);
    v8 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardWallData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v8,
      (Il2CppObject *)v3,
      Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__,
      0);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
           v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    if ( v9 )
      LOBYTE(v9) = LOBYTE(v9[2].klass) != 0;
  }
  else
  {
    klass = Instance[28].klass;
    if ( klass && (data = (System_Collections_Generic_IEnumerable_TSource__o *)klass->_1.this_arg.data) != 0 )
    {
      v12 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v12,
        (Il2CppObject *)v3,
        Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__,
        0);
      v9 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
             data,
             (System_Func_TSource__bool__o *)v12,
             (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v9 )
        LOBYTE(v9) = SHIDWORD(v9[1].klass) < 1;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
  }
  return (char)v9;
}


bool WarBoardCondType__NotBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  return !WarBoardCondType__IsBossStatus(bossId, status, method);
}


void WarBoardCondType__SetSquareServantCount(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        int32_t *srcServantCount,
        int32_t *destServantCount,
        const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v12; // x1
  int32_t v13; // w24
  System_Collections_Generic_List_int__o *StageList; // x23
  System_Collections_Generic_List_int__o *v15; // x22
  WarBoardManager_o *v16; // x24
  WarBoardManager_o *v17; // x21

  if ( (byte_4C25058 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C25058 = 1;
  }
  *destServantCount = 0;
  *srcServantCount = 0;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v13 = Instance->m_Items[97];
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  StageList = WarBoardSquareIndexGroupMaster__GetStageList((WarBoardSquareIndexGroupMaster_o *)Instance, srcId, v13, 0);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_13;
  v15 = WarBoardSquareIndexGroupMaster__GetStageList((WarBoardSquareIndexGroupMaster_o *)Instance, destId, v13, 0);
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !StageList
    || (v16 = (WarBoardManager_o *)Instance,
        Instance = System_Collections_Generic_List_int___ToArray(
                     StageList,
                     (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v16)
    || (*srcServantCount = WarBoardManager__GetSquareServantCount(v16, isPlayer, Instance, 0),
        Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        !v15)
    || (v17 = (WarBoardManager_o *)Instance,
        Instance = System_Collections_Generic_List_int___ToArray(
                     v15,
                     (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v17) )
  {
LABEL_13:
    sub_1C2D6EC(Instance, v12);
  }
  *destServantCount = WarBoardManager__GetSquareServantCount(v17, isPlayer, Instance, 0);
}


bool WarBoardCondType__SquareIndexGroupSvtNumAbove(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t destServantCount[2]; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)destServantCount = 0;
  WarBoardCondType__SetSquareServantCount(isPlayer, srcId, destId, &destServantCount[1], destServantCount, v4);
  return destServantCount[1] >= destServantCount[0];
}


bool WarBoardCondType__SquareIndexGroupSvtNumBelow(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t destServantCount[2]; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)destServantCount = 0;
  WarBoardCondType__SetSquareServantCount(isPlayer, srcId, destId, &destServantCount[1], destServantCount, v4);
  return destServantCount[1] <= destServantCount[0];
}


void WarBoardCondType___c__DisplayClass10_0___ctor(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__0(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields._wallId_k__BackingField == this->fields.wallId;
}


bool WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__1(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.id == this->fields.wallId;
}
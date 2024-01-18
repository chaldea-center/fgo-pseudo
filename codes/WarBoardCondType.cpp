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
  const MethodInfo *v8; // x4

  if ( (byte_418660B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&status);
    sub_B2C35C(&StringLiteral_22302/*"status"*/, v5);
    byte_418660B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B2C434(Instance, v7);
  return WarBoardData__IsBossInfo(Instance, bossId, (System_String_o *)StringLiteral_22302/*"status"*/, status, v8);
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
  void *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  int v13; // w8
  _DWORD *v14; // x21
  unsigned int v15; // w24
  int32_t v16; // w23
  char *v17; // x8
  WarBoardPieceData_o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  __int64 v21; // x0

  if ( (byte_418660F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&groupId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_418660F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_17;
  Instance = WarBoardData__GetPieces_22505868((WarBoardData_o *)Instance, forceId, groupId, v12);
  if ( !Instance )
    goto LABEL_17;
  v13 = *((_DWORD *)Instance + 6);
  v14 = Instance;
  if ( v13 >= 1 )
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v21 = sub_B2C460(Instance);
        sub_B2C400(v21, 0LL);
      }
      v17 = (char *)&v14[2 * v15];
      v18 = (WarBoardPieceData_o *)*((_QWORD *)v17 + 4);
      if ( !v18 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v17 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !v18->fields._isDead_k__BackingField )
      {
        Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__GetIndividuality(
                                                                               v18,
                                                                               0LL,
                                                                               0LL);
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             Individuality,
                             IndividualityId,
                             (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
        v16 += (unsigned __int8)Instance & 1;
      }
      v13 = v14[6];
      if ( (int)++v15 >= v13 )
        return v16 <= targetAliveCount;
    }
LABEL_17:
    sub_B2C434(Instance, v11);
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
  bool v12; // w2
  int32_t v13; // w0
  int32_t v14; // w1
  bool v15; // w8
  bool v16; // w3
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  int32_t destServantCount[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41865FF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&forceId);
    byte_41865FF = 1;
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
      v15 = destServantCount[1] >= destServantCount[0];
      goto LABEL_28;
    case 10:
      *(_QWORD *)destServantCount = 0LL;
      WarBoardCondType__SetSquareServantCount(
        forceId == 0,
        condId,
        condNum,
        &destServantCount[1],
        destServantCount,
        method);
      v15 = destServantCount[1] <= destServantCount[0];
      goto LABEL_28;
    case 11:
      return WarBoardCondType__IsBossStatus(condId, condNum, *(const MethodInfo **)&groupId);
    case 12:
      v15 = !WarBoardCondType__IsBossStatus(condId, condNum, *(const MethodInfo **)&groupId);
      goto LABEL_28;
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
      v12 = 1;
      v13 = condId;
      v14 = condNum;
      goto LABEL_17;
    case 18:
      v13 = condId;
      v14 = condNum;
      v12 = 0;
LABEL_17:
      v16 = 0;
      goto LABEL_30;
    case 19:
      v12 = 1;
      v16 = 1;
      v13 = condId;
      v14 = condNum;
      goto LABEL_30;
    case 20:
      v16 = 1;
      v13 = condId;
      v14 = condNum;
      v12 = 0;
LABEL_30:
      result = WarBoardCondType__IsTargetTurnProcessedFromEventDone(v13, v14, v12, v16, *(const MethodInfo **)&condNum);
      break;
    case 21:
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v18);
      result = WarBoardManager__IsNowTurn_18198832((WarBoardManager_o *)Instance, forceId, groupId, 0LL);
      break;
    case 22:
      result = WarBoardCondType__IsTargetEventNotDone(condId, *(const MethodInfo **)&forceId);
      break;
    default:
      v15 = 0;
LABEL_28:
      result = v15;
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
  void *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int v10; // w8
  unsigned int v11; // w9
  __int64 v12; // x10
  __int64 v14; // x0

  if ( (byte_4186605 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4186605 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22505868((WarBoardData_o *)Instance, forceId, groupId, v9)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v8);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v10 )
    {
      v14 = sub_B2C460(Instance);
      sub_B2C400(v14, 0LL);
    }
    v12 = *((_QWORD *)Instance + (int)v11 + 4);
    if ( !v12 )
      goto LABEL_14;
    if ( *(_DWORD *)(v12 + 28) == targetPieceIndex )
      return *(_BYTE *)(v12 + 60) == 0;
    if ( (int)++v11 >= v10 )
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
  void *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int v12; // w8
  unsigned int v13; // w9
  _DWORD *v14; // x10
  __int64 v16; // x0

  if ( (byte_4186609 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4186609 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22505868((WarBoardData_o *)Instance, forceId, groupId, v11)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v10);
  }
  v12 = *((_DWORD *)Instance + 6);
  if ( v12 < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v12 )
    {
      v16 = sub_B2C460(Instance);
      sub_B2C400(v16, 0LL);
    }
    v14 = (_DWORD *)*((_QWORD *)Instance + (int)v13 + 4);
    if ( !v14 )
      goto LABEL_14;
    if ( v14[7] == targetPieceId )
      return v14[14] - v14[13] >= defeatBreakPoint;
    if ( (int)++v13 >= v12 )
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
  void *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int v10; // w8
  unsigned int v11; // w9
  __int64 v12; // x10
  __int64 v14; // x0

  if ( (byte_4186600 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4186600 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22505868((WarBoardData_o *)Instance, forceId, groupId, v9)) == 0LL )
  {
LABEL_14:
    sub_B2C434(Instance, v8);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v10 )
    {
      v14 = sub_B2C460(Instance);
      sub_B2C400(v14, 0LL);
    }
    v12 = *((_QWORD *)Instance + (int)v11 + 4);
    if ( !v12 )
      goto LABEL_14;
    if ( *(_DWORD *)(v12 + 28) == targetPieceId )
      return *(_BYTE *)(v12 + 60) != 0;
    if ( (int)++v11 >= v10 )
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
  void *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  int v10; // w8
  _DWORD *v11; // x20
  unsigned int v12; // w23
  int32_t v13; // w22
  char *v14; // x8
  WarBoardPieceData_o *v15; // x21
  __int64 v17; // x0

  if ( (byte_4186601 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4186601 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_18;
  Instance = WarBoardData__GetPieces_22505868((WarBoardData_o *)Instance, forceId, groupId, v9);
  if ( !Instance )
    goto LABEL_18;
  v10 = *((_DWORD *)Instance + 6);
  v11 = Instance;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v17 = sub_B2C460(Instance);
        sub_B2C400(v17, 0LL);
      }
      v14 = (char *)&v11[2 * v12];
      v15 = (WarBoardPieceData_o *)*((_QWORD *)v14 + 4);
      if ( !v15 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v14 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (void *)WarBoardPieceData__get_IsStageBoss(v15, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 && !v15->fields._isDead_k__BackingField )
          v13 += !v15->fields._isNotIncludeWin_k__BackingField;
      }
      v10 = v11[6];
      if ( (int)++v12 >= v10 )
        return v13 <= targetAliveCount;
    }
LABEL_18:
    sub_B2C434(Instance, v8);
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
  const MethodInfo *v9; // x4

  if ( (byte_418660C & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_418660C = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B2C434(Instance, v8);
  return WarBoardData__IsReinforcementsApper(Instance, forceId, groupId, condId, v9);
}


bool __fastcall WarBoardCondType__IsTargetEventNotDone(int32_t eventId, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_418660E & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_418660E = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B2C434(Instance, v4);
  return WarBoardData__GetPlayedEventData(Instance, eventId, v5) == 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetSquareMove(
        int32_t forceId,
        int32_t groupId,
        int32_t targetPieceIndex,
        int32_t squareIndex,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int v12; // w8
  unsigned int v13; // w9
  __int64 v14; // x10
  __int64 v16; // x0

  if ( (byte_4186604 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_4186604 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22505868((WarBoardData_o *)Instance, forceId, groupId, v11)) == 0LL )
  {
LABEL_17:
    sub_B2C434(Instance, v10);
  }
  v12 = *((_DWORD *)Instance + 6);
  if ( v12 < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v12 )
    {
      v16 = sub_B2C460(Instance);
      sub_B2C400(v16, 0LL);
    }
    v14 = *((_QWORD *)Instance + (int)v13 + 4);
    if ( !v14 )
      goto LABEL_17;
    if ( !*(_BYTE *)(v14 + 60)
      && *(_DWORD *)(v14 + 64) == squareIndex
      && ((targetPieceIndex & 0x80000000) != 0 || *(_DWORD *)(v14 + 28) == targetPieceIndex) )
    {
      return 1;
    }
    if ( (int)++v13 >= v12 )
      return 0;
  }
}


bool __fastcall WarBoardCondType__IsTargetTurn(int32_t targetTurn, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x8

  if ( (byte_4186602 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186602 = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v5 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B2C434(Instance, v4);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
    LODWORD(v6) = *(_DWORD *)(v6 + 108);
  return (_DWORD)v6 == targetTurn;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetTurnCondAchieve(
        int32_t startCondId,
        int32_t targetTurn,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t ClearedTurn; // w0
  int32_t v9; // w20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v11; // x8

  if ( (byte_4186606 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&targetTurn);
    byte_4186606 = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
LABEL_13:
    sub_B2C434(Instance, v6);
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, v7);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v9 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  reinforcementsSaveList = Instance[1].fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_13;
  v11 = *(_QWORD *)&reinforcementsSaveList[2].fields._size;
  if ( v11 )
    LODWORD(v11) = *(_DWORD *)(v11 + 108);
  return (int)v11 - v9 >= 0 && (_DWORD)v11 - v9 == targetTurn;
}


bool __fastcall WarBoardCondType__IsTargetTurnMultiple(int32_t multipleTurn, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x8
  __int64 v6; // x8

  if ( (byte_4186603 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4186603 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v5 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B2C434(Instance, v4);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
    LODWORD(v6) = *(_DWORD *)(v6 + 108);
  return (int)v6 % multipleTurn == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetTurnMultipleCondAchieve(
        int32_t startCondId,
        int32_t multipleTurn,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int32_t ClearedTurn; // w0
  int32_t v9; // w20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v11; // x8
  int v12; // w8

  if ( (byte_4186607 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&multipleTurn);
    byte_4186607 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_14;
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, v7);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v9 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (reinforcementsSaveList = Instance[1].fields.reinforcementsSaveList) == 0LL )
LABEL_14:
    sub_B2C434(Instance, v6);
  v11 = *(_QWORD *)&reinforcementsSaveList[2].fields._size;
  if ( v11 )
    LODWORD(v11) = *(_DWORD *)(v11 + 108);
  v12 = v11 - v9;
  if ( v12 >= 1 )
    return v12 % (unsigned int)multipleTurn == 0;
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
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x23
  WarBoardEventData_o *PlayedEventData; // x0
  __int64 v14; // x8
  __int64 v15; // x9
  int v16; // w8
  int v17; // w8
  bool v18; // zf

  if ( (byte_418660D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&turn);
    byte_418660D = 1;
  }
  if ( (turn & 0x80000000) != 0 )
  {
    LOBYTE(PlayedEventData) = 0;
    return (char)PlayedEventData;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v12 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B2C434(Instance, v10);
  PlayedEventData = WarBoardData__GetPlayedEventData(*(WarBoardData_o **)&Instance[4].fields.m_CachedPtr, eventId, v11);
  if ( PlayedEventData )
  {
    v14 = 20LL;
    if ( lookFirstPlayedTurn )
      v14 = 24LL;
    v15 = *(_QWORD *)(v12 + 104);
    v16 = *(_DWORD *)((char *)&PlayedEventData->klass + v14);
    if ( v15 )
      LODWORD(v15) = *(_DWORD *)(v15 + 108);
    v17 = v15 - v16;
    if ( !useModulo )
    {
      v18 = v17 == turn;
LABEL_17:
      LOBYTE(PlayedEventData) = v18;
      return (char)PlayedEventData;
    }
    LOBYTE(PlayedEventData) = 0;
    if ( turn >= 1 && v17 >= 1 )
    {
      v18 = v17 % (unsigned int)turn == 0;
      goto LABEL_17;
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
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardCondType___c__DisplayClass10_0_o *v12; // x19
  WebViewManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x21
  WarBoardData_SquareRangeSearch_o *v18; // x0
  struct UIPanel_o *basePanel; // x8
  System_Collections_Generic_IEnumerable_TSource__o *topAnchor; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21

  if ( (byte_4186608 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardWallData__bool___ctor__, v4);
    sub_B2C35C(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardUserWallData__bool__TypeInfo, v6);
    sub_B2C35C(&System_Func_WarBoardWallData__bool__TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B2C35C(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__, v9);
    sub_B2C35C(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__, v10);
    sub_B2C35C(&WarBoardCondType___c__DisplayClass10_0_TypeInfo, v11);
    byte_4186608 = 1;
  }
  v12 = (WarBoardCondType___c__DisplayClass10_0_o *)sub_B2C42C(WarBoardCondType___c__DisplayClass10_0_TypeInfo);
  WarBoardCondType___c__DisplayClass10_0___ctor(v12, 0LL);
  if ( !v12
    || (v12->fields.wallId = wallId,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v15 = *(_QWORD *)&Instance[4].fields.m_CachedPtr,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B2C434(Instance, v14);
  }
  if ( v15 )
  {
    v16 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v15 + 88);
    v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardWallData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v17,
      (Il2CppObject *)v12,
      Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardWallData__bool___ctor__);
    v18 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            v16,
            (System_Func_TSource__bool__o *)v17,
            (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    if ( v18 )
      LOBYTE(v18) = LOBYTE(v18[1].monitor) != 0;
  }
  else
  {
    basePanel = Instance[4].fields.basePanel;
    if ( basePanel
      && (topAnchor = (System_Collections_Generic_IEnumerable_TSource__o *)basePanel->fields.topAnchor) != 0LL )
    {
      v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v21,
        (Il2CppObject *)v12,
        Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v18 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              topAnchor,
              (System_Func_TSource__bool__o *)v21,
              (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v18 )
        LOBYTE(v18) = v18->fields.range < 1;
    }
    else
    {
      LOBYTE(v18) = 0;
    }
  }
  return (char)v18;
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
  WarBoardManager_o *Instance; // x0
  __int64 v15; // x1
  int32_t StageId_k__BackingField; // w24
  System_Collections_Generic_List_int__o *StageList; // x23
  System_Collections_Generic_List_int__o *v18; // x22
  WarBoardManager_o *v19; // x24
  WarBoardManager_o *v20; // x21

  if ( (byte_418660A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, *(_QWORD *)&srcId);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    byte_418660A = 1;
  }
  *destServantCount = 0;
  *srcServantCount = 0;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  StageId_k__BackingField = Instance->fields._StageId_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (WarBoardManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  StageList = WarBoardSquareIndexGroupMaster__GetStageList(
                (WarBoardSquareIndexGroupMaster_o *)Instance,
                srcId,
                StageId_k__BackingField,
                0LL);
  Instance = (WarBoardManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  v18 = WarBoardSquareIndexGroupMaster__GetStageList(
          (WarBoardSquareIndexGroupMaster_o *)Instance,
          destId,
          StageId_k__BackingField,
          0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !StageList
    || (v19 = Instance,
        Instance = (WarBoardManager_o *)System_Collections_Generic_List_int___ToArray(
                                          StageList,
                                          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v19)
    || (*srcServantCount = WarBoardManager__GetSquareServantCount(v19, isPlayer, (System_Int32_array *)Instance, 0LL),
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        !v18)
    || (v20 = Instance,
        Instance = (WarBoardManager_o *)System_Collections_Generic_List_int___ToArray(
                                          v18,
                                          (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v20) )
  {
LABEL_14:
    sub_B2C434(Instance, v15);
  }
  *destServantCount = WarBoardManager__GetSquareServantCount(v20, isPlayer, (System_Int32_array *)Instance, 0LL);
}


bool __fastcall WarBoardCondType__SquareIndexGroupSvtNumAbove(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t destServantCount; // [xsp+8h] [xbp-8h] BYREF
  int32_t srcServantCount; // [xsp+Ch] [xbp-4h] BYREF

  srcServantCount = 0;
  destServantCount = 0;
  WarBoardCondType__SetSquareServantCount(isPlayer, srcId, destId, &srcServantCount, &destServantCount, v4);
  return srcServantCount >= destServantCount;
}


bool __fastcall WarBoardCondType__SquareIndexGroupSvtNumBelow(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5
  int32_t destServantCount; // [xsp+8h] [xbp-8h] BYREF
  int32_t srcServantCount; // [xsp+Ch] [xbp-4h] BYREF

  srcServantCount = 0;
  destServantCount = 0;
  WarBoardCondType__SetSquareServantCount(isPlayer, srcId, destId, &srcServantCount, &destServantCount, v4);
  return srcServantCount <= destServantCount;
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
    sub_B2C434(this, 0LL);
  return x->fields._wallId_k__BackingField == this->fields.wallId;
}


bool __fastcall WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__1(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.id == this->fields.wallId;
}
void __fastcall WarBoardCondType___ctor(WarBoardCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  __int64 v5; // x1
  WarBoardData_o *Instance; // x0
  const MethodInfo *v7; // x4

  if ( (byte_42133BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&status);
    sub_B0D8A4(&StringLiteral_22378/*"status"*/, v5);
    byte_42133BD = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B0D97C(Instance);
  return WarBoardData__IsBossInfo(Instance, bossId, (System_String_o *)StringLiteral_22378/*"status"*/, status, v7);
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
  const MethodInfo *v11; // x3
  int v12; // w8
  _DWORD *v13; // x21
  unsigned int v14; // w24
  int32_t v15; // w23
  char *v16; // x8
  WarBoardPieceData_o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  __int64 v20; // x0

  if ( (byte_42133C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&groupId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_42133C1 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_17;
  Instance = WarBoardData__GetPieces_22066704((WarBoardData_o *)Instance, forceId, groupId, v11);
  if ( !Instance )
    goto LABEL_17;
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 >= 1 )
  {
    v14 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v20 = sub_B0D9A8(Instance);
        sub_B0D948(v20, 0LL);
      }
      v16 = (char *)&v13[2 * v14];
      v17 = (WarBoardPieceData_o *)*((_QWORD *)v16 + 4);
      if ( !v17 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v16 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 && !v17->fields._isDead_k__BackingField )
      {
        Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__GetIndividuality(
                                                                               v17,
                                                                               0LL,
                                                                               0LL);
        Instance = (void *)System_Linq_Enumerable__Contains_int_(
                             Individuality,
                             IndividualityId,
                             (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
        v15 += (unsigned __int8)Instance & 1;
      }
      v12 = v13[6];
      if ( (int)++v14 >= v12 )
        return v15 <= targetAliveCount;
    }
LABEL_17:
    sub_B0D97C(Instance);
  }
  v15 = 0;
  return v15 <= targetAliveCount;
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
  int32_t destServantCount[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42133B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&forceId);
    byte_42133B1 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      result = WarBoardManager__IsNowTurn_17747588((WarBoardManager_o *)Instance, forceId, groupId, 0LL);
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
  const MethodInfo *v8; // x3
  int v9; // w8
  unsigned int v10; // w9
  __int64 v11; // x10
  __int64 v13; // x0

  if ( (byte_42133B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_42133B7 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22066704((WarBoardData_o *)Instance, forceId, groupId, v8)) == 0LL )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  v9 = *((_DWORD *)Instance + 6);
  if ( v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v13 = sub_B0D9A8(Instance);
      sub_B0D948(v13, 0LL);
    }
    v11 = *((_QWORD *)Instance + (int)v10 + 4);
    if ( !v11 )
      goto LABEL_14;
    if ( *(_DWORD *)(v11 + 28) == targetPieceIndex )
      return *(_BYTE *)(v11 + 60) == 0;
    if ( (int)++v10 >= v9 )
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
  const MethodInfo *v10; // x3
  int v11; // w8
  unsigned int v12; // w9
  _DWORD *v13; // x10
  __int64 v15; // x0

  if ( (byte_42133BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_42133BB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22066704((WarBoardData_o *)Instance, forceId, groupId, v10)) == 0LL )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  v11 = *((_DWORD *)Instance + 6);
  if ( v11 < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v15 = sub_B0D9A8(Instance);
      sub_B0D948(v15, 0LL);
    }
    v13 = (_DWORD *)*((_QWORD *)Instance + (int)v12 + 4);
    if ( !v13 )
      goto LABEL_14;
    if ( v13[7] == targetPieceId )
      return v13[14] - v13[13] >= defeatBreakPoint;
    if ( (int)++v12 >= v11 )
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
  const MethodInfo *v8; // x3
  int v9; // w8
  unsigned int v10; // w9
  __int64 v11; // x10
  __int64 v13; // x0

  if ( (byte_42133B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_42133B2 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22066704((WarBoardData_o *)Instance, forceId, groupId, v8)) == 0LL )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  v9 = *((_DWORD *)Instance + 6);
  if ( v9 < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= v9 )
    {
      v13 = sub_B0D9A8(Instance);
      sub_B0D948(v13, 0LL);
    }
    v11 = *((_QWORD *)Instance + (int)v10 + 4);
    if ( !v11 )
      goto LABEL_14;
    if ( *(_DWORD *)(v11 + 28) == targetPieceId )
      return *(_BYTE *)(v11 + 60) != 0;
    if ( (int)++v10 >= v9 )
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
  const MethodInfo *v8; // x3
  int v9; // w8
  _DWORD *v10; // x20
  unsigned int v11; // w23
  int32_t v12; // w22
  char *v13; // x8
  WarBoardPieceData_o *v14; // x21
  __int64 v16; // x0

  if ( (byte_42133B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_42133B3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_18;
  Instance = WarBoardData__GetPieces_22066704((WarBoardData_o *)Instance, forceId, groupId, v8);
  if ( !Instance )
    goto LABEL_18;
  v9 = *((_DWORD *)Instance + 6);
  v10 = Instance;
  if ( v9 >= 1 )
  {
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
      {
        v16 = sub_B0D9A8(Instance);
        sub_B0D948(v16, 0LL);
      }
      v13 = (char *)&v10[2 * v11];
      v14 = (WarBoardPieceData_o *)*((_QWORD *)v13 + 4);
      if ( !v14 )
        break;
      Instance = (void *)WarBoardPieceData__get_isMaster(*((WarBoardPieceData_o **)v13 + 4), 0LL);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        Instance = (void *)WarBoardPieceData__get_IsStageBoss(v14, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 && !v14->fields._isDead_k__BackingField )
          v12 += !v14->fields._isNotIncludeWin_k__BackingField;
      }
      v9 = v10[6];
      if ( (int)++v11 >= v9 )
        return v12 <= targetAliveCount;
    }
LABEL_18:
    sub_B0D97C(Instance);
  }
  v12 = 0;
  return v12 <= targetAliveCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsReinforcementsAppear(
        int32_t forceId,
        int32_t groupId,
        int32_t condId,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v8; // x4

  if ( (byte_42133BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_42133BE = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B0D97C(Instance);
  return WarBoardData__IsReinforcementsApper(Instance, forceId, groupId, condId, v8);
}


bool __fastcall WarBoardCondType__IsTargetEventNotDone(int32_t eventId, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v4; // x2

  if ( (byte_42133C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42133C0 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B0D97C(Instance);
  return WarBoardData__GetPlayedEventData(Instance, eventId, v4) == 0LL;
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
  const MethodInfo *v10; // x3
  int v11; // w8
  unsigned int v12; // w9
  __int64 v13; // x10
  __int64 v15; // x0

  if ( (byte_42133B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_42133B6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22066704((WarBoardData_o *)Instance, forceId, groupId, v10)) == 0LL )
  {
LABEL_17:
    sub_B0D97C(Instance);
  }
  v11 = *((_DWORD *)Instance + 6);
  if ( v11 < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= v11 )
    {
      v15 = sub_B0D9A8(Instance);
      sub_B0D948(v15, 0LL);
    }
    v13 = *((_QWORD *)Instance + (int)v12 + 4);
    if ( !v13 )
      goto LABEL_17;
    if ( !*(_BYTE *)(v13 + 60)
      && *(_DWORD *)(v13 + 64) == squareIndex
      && ((targetPieceIndex & 0x80000000) != 0 || *(_DWORD *)(v13 + 28) == targetPieceIndex) )
    {
      return 1;
    }
    if ( (int)++v12 >= v11 )
      return 0;
  }
}


bool __fastcall WarBoardCondType__IsTargetTurn(int32_t targetTurn, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x8
  __int64 v5; // x8

  if ( (byte_42133B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42133B4 = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v4 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B0D97C(Instance);
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
    LODWORD(v5) = *(_DWORD *)(v5 + 108);
  return (_DWORD)v5 == targetTurn;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetTurnCondAchieve(
        int32_t startCondId,
        int32_t targetTurn,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v6; // x2
  int32_t ClearedTurn; // w0
  int32_t v8; // w20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v10; // x8

  if ( (byte_42133B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&targetTurn);
    byte_42133B8 = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
LABEL_13:
    sub_B0D97C(Instance);
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, v6);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v8 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  reinforcementsSaveList = Instance[1].fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_13;
  v10 = *(_QWORD *)&reinforcementsSaveList[2].fields._size;
  if ( v10 )
    LODWORD(v10) = *(_DWORD *)(v10 + 108);
  return (int)v10 - v8 >= 0 && (_DWORD)v10 - v8 == targetTurn;
}


bool __fastcall WarBoardCondType__IsTargetTurnMultiple(int32_t multipleTurn, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x8
  __int64 v5; // x8

  if ( (byte_42133B5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42133B5 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v4 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B0D97C(Instance);
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
    LODWORD(v5) = *(_DWORD *)(v5 + 108);
  return (int)v5 % multipleTurn == 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetTurnMultipleCondAchieve(
        int32_t startCondId,
        int32_t multipleTurn,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  const MethodInfo *v6; // x2
  int32_t ClearedTurn; // w0
  int32_t v8; // w20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v10; // x8
  int v11; // w8

  if ( (byte_42133B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&multipleTurn);
    byte_42133B9 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_14;
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, v6);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v8 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (reinforcementsSaveList = Instance[1].fields.reinforcementsSaveList) == 0LL )
LABEL_14:
    sub_B0D97C(Instance);
  v10 = *(_QWORD *)&reinforcementsSaveList[2].fields._size;
  if ( v10 )
    LODWORD(v10) = *(_DWORD *)(v10 + 108);
  v11 = v10 - v8;
  if ( v11 >= 1 )
    return v11 % (unsigned int)multipleTurn == 0;
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
  const MethodInfo *v10; // x2
  __int64 v11; // x23
  WarBoardEventData_o *PlayedEventData; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  int v15; // w8
  int v16; // w8
  bool v17; // zf

  if ( (byte_42133BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&turn);
    byte_42133BF = 1;
  }
  if ( (turn & 0x80000000) != 0 )
  {
    LOBYTE(PlayedEventData) = 0;
    return (char)PlayedEventData;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v11 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B0D97C(Instance);
  PlayedEventData = WarBoardData__GetPlayedEventData(*(WarBoardData_o **)&Instance[4].fields.m_CachedPtr, eventId, v10);
  if ( PlayedEventData )
  {
    v13 = 20LL;
    if ( lookFirstPlayedTurn )
      v13 = 24LL;
    v14 = *(_QWORD *)(v11 + 104);
    v15 = *(_DWORD *)((char *)&PlayedEventData->klass + v13);
    if ( v14 )
      LODWORD(v14) = *(_DWORD *)(v14 + 108);
    v16 = v14 - v15;
    if ( !useModulo )
    {
      v17 = v16 == turn;
LABEL_17:
      LOBYTE(PlayedEventData) = v17;
      return (char)PlayedEventData;
    }
    LOBYTE(PlayedEventData) = 0;
    if ( turn >= 1 && v16 >= 1 )
    {
      v17 = v16 % (unsigned int)turn == 0;
      goto LABEL_17;
    }
  }
  return (char)PlayedEventData;
}


bool __fastcall WarBoardCondType__IsWallDestroy(int32_t wallId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardCondType___c__DisplayClass10_0_o *v13; // x19
  WebViewManager_o *Instance; // x0
  __int64 v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  WarBoardData_SquareRangeSearch_o *v20; // x0
  struct UIPanel_o *basePanel; // x8
  System_Collections_Generic_IEnumerable_TSource__o *topAnchor; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x21

  if ( (byte_42133BA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardWallData__bool___ctor__, v5);
    sub_B0D8A4(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_WarBoardUserWallData__bool__TypeInfo, v7);
    sub_B0D8A4(&System_Func_WarBoardWallData__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B0D8A4(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__, v10);
    sub_B0D8A4(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__, v11);
    sub_B0D8A4(&WarBoardCondType___c__DisplayClass10_0_TypeInfo, v12);
    byte_42133BA = 1;
  }
  v13 = (WarBoardCondType___c__DisplayClass10_0_o *)sub_B0D974(
                                                      WarBoardCondType___c__DisplayClass10_0_TypeInfo,
                                                      method,
                                                      v2);
  WarBoardCondType___c__DisplayClass10_0___ctor(v13, 0LL);
  if ( !v13
    || (v13->fields.wallId = wallId,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v15 = *(_QWORD *)&Instance[4].fields.m_CachedPtr,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  if ( v15 )
  {
    v18 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v15 + 88);
    v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_WarBoardWallData__bool__TypeInfo,
                                                                               v16,
                                                                               v17);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v19,
      (Il2CppObject *)v13,
      Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardWallData__bool___ctor__);
    v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            v18,
            (System_Func_TSource__bool__o *)v19,
            (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    if ( v20 )
      LOBYTE(v20) = LOBYTE(v20[1].monitor) != 0;
  }
  else
  {
    basePanel = Instance[4].fields.basePanel;
    if ( basePanel
      && (topAnchor = (System_Collections_Generic_IEnumerable_TSource__o *)basePanel->fields.topAnchor) != 0LL )
    {
      v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                 v16,
                                                                                 v17);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v23,
        (Il2CppObject *)v13,
        Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              topAnchor,
              (System_Func_TSource__bool__o *)v23,
              (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v20 )
        LOBYTE(v20) = v20->fields.range < 1;
    }
    else
    {
      LOBYTE(v20) = 0;
    }
  }
  return (char)v20;
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
  int32_t StageId_k__BackingField; // w24
  System_Collections_Generic_List_int__o *StageList; // x23
  System_Collections_Generic_List_int__o *v17; // x22
  WarBoardManager_o *v18; // x24
  WarBoardManager_o *v19; // x21

  if ( (byte_42133BC & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, *(_QWORD *)&srcId);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    byte_42133BC = 1;
  }
  *destServantCount = 0;
  *srcServantCount = 0;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  StageId_k__BackingField = Instance->fields._StageId_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (WarBoardManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  StageList = WarBoardSquareIndexGroupMaster__GetStageList(
                (WarBoardSquareIndexGroupMaster_o *)Instance,
                srcId,
                StageId_k__BackingField,
                0LL);
  Instance = (WarBoardManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  v17 = WarBoardSquareIndexGroupMaster__GetStageList(
          (WarBoardSquareIndexGroupMaster_o *)Instance,
          destId,
          StageId_k__BackingField,
          0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !StageList
    || (v18 = Instance,
        Instance = (WarBoardManager_o *)System_Collections_Generic_List_int___ToArray(
                                          StageList,
                                          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        !v18)
    || (*srcServantCount = WarBoardManager__GetSquareServantCount(v18, isPlayer, (System_Int32_array *)Instance, 0LL),
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        !v17)
    || (v19 = Instance,
        Instance = (WarBoardManager_o *)System_Collections_Generic_List_int___ToArray(
                                          v17,
                                          (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__),
        !v19) )
  {
LABEL_14:
    sub_B0D97C(Instance);
  }
  *destServantCount = WarBoardManager__GetSquareServantCount(v19, isPlayer, (System_Int32_array *)Instance, 0LL);
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
    sub_B0D97C(this);
  return x->fields._wallId_k__BackingField == this->fields.wallId;
}


bool __fastcall WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__1(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.id == this->fields.wallId;
}
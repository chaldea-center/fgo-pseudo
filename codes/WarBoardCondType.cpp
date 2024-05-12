void __fastcall WarBoardCondType___ctor(WarBoardCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardCondType__IsBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4

  if ( (byte_4389A05 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&StringLiteral_22776/*"status"*/);
    byte_4389A05 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B7769C(Instance, v6);
  return WarBoardData__IsBossInfo(Instance, bossId, (System_String_o *)StringLiteral_22776/*"status"*/, status, v7);
}


bool __fastcall WarBoardCondType__IsIndividualityTargetNumBelow(
        int32_t forceId,
        int32_t groupId,
        int32_t IndividualityId,
        int32_t targetAliveCount,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int v12; // w8
  _DWORD *v13; // x21
  unsigned int v14; // w24
  int32_t v15; // w23
  char *v16; // x8
  WarBoardPieceData_o *v17; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0
  __int64 v20; // x0

  if ( (byte_4389A09 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A09 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_17;
  Instance = WarBoardData__GetPieces_22688356((WarBoardData_o *)Instance, forceId, groupId, v11);
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
        v20 = sub_B776C8(Instance);
        sub_B77668(v20, 0LL);
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
                             (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
        v15 += (unsigned __int8)Instance & 1;
      }
      v12 = v13[6];
      if ( (int)++v14 >= v12 )
        return v15 <= targetAliveCount;
    }
LABEL_17:
    sub_B7769C(Instance, v10);
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
  __int64 v18; // x1
  int32_t destServantCount[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43899F9 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43899F9 = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B7769C(0LL, v18);
      result = WarBoardManager__IsNowTurn_18996340((WarBoardManager_o *)Instance, forceId, groupId, 0LL);
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

  if ( (byte_43899FF & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43899FF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22688356((WarBoardData_o *)Instance, forceId, groupId, v9)) == 0LL )
  {
LABEL_14:
    sub_B7769C(Instance, v8);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v10 )
    {
      v14 = sub_B776C8(Instance);
      sub_B77668(v14, 0LL);
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

  if ( (byte_4389A03 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A03 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22688356((WarBoardData_o *)Instance, forceId, groupId, v11)) == 0LL )
  {
LABEL_14:
    sub_B7769C(Instance, v10);
  }
  v12 = *((_DWORD *)Instance + 6);
  if ( v12 < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v12 )
    {
      v16 = sub_B776C8(Instance);
      sub_B77668(v16, 0LL);
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

  if ( (byte_43899FA & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43899FA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22688356((WarBoardData_o *)Instance, forceId, groupId, v9)) == 0LL )
  {
LABEL_14:
    sub_B7769C(Instance, v8);
  }
  v10 = *((_DWORD *)Instance + 6);
  if ( v10 < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( v11 >= v10 )
    {
      v14 = sub_B776C8(Instance);
      sub_B77668(v14, 0LL);
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

  if ( (byte_43899FB & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43899FB = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (void *)*((_QWORD *)Instance + 54);
  if ( !Instance )
    goto LABEL_18;
  Instance = WarBoardData__GetPieces_22688356((WarBoardData_o *)Instance, forceId, groupId, v9);
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
        v17 = sub_B776C8(Instance);
        sub_B77668(v17, 0LL);
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
    sub_B7769C(Instance, v8);
  }
  v13 = 0;
  return v13 <= targetAliveCount;
}


bool __fastcall WarBoardCondType__IsReinforcementsAppear(
        int32_t forceId,
        int32_t groupId,
        int32_t condId,
        const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_4389A06 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A06 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B7769C(Instance, v8);
  return WarBoardData__IsReinforcementsApper(Instance, forceId, groupId, condId, v9);
}


bool __fastcall WarBoardCondType__IsTargetEventNotDone(int32_t eventId, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_4389A08 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A08 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B7769C(Instance, v4);
  return WarBoardData__GetPlayedEventData(Instance, eventId, v5) == 0LL;
}


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

  if ( (byte_43899FE & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43899FE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (Instance = (void *)*((_QWORD *)Instance + 54)) == 0LL
    || (Instance = WarBoardData__GetPieces_22688356((WarBoardData_o *)Instance, forceId, groupId, v11)) == 0LL )
  {
LABEL_17:
    sub_B7769C(Instance, v10);
  }
  v12 = *((_DWORD *)Instance + 6);
  if ( v12 < 1 )
    return 0;
  v13 = 0;
  while ( 1 )
  {
    if ( v13 >= v12 )
    {
      v16 = sub_B776C8(Instance);
      sub_B77668(v16, 0LL);
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

  if ( (byte_43899FC & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43899FC = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v5 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B7769C(Instance, v4);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
    LODWORD(v6) = *(_DWORD *)(v6 + 108);
  return (_DWORD)v6 == targetTurn;
}


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

  if ( (byte_4389A00 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A00 = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
LABEL_13:
    sub_B7769C(Instance, v6);
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, v7);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v9 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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

  if ( (byte_43899FD & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_43899FD = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v5 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B7769C(Instance, v4);
  v6 = *(_QWORD *)(v5 + 104);
  if ( v6 )
    LODWORD(v6) = *(_DWORD *)(v6 + 108);
  return (int)v6 % multipleTurn == 0;
}


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

  if ( (byte_4389A01 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A01 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList;
  if ( !Instance )
    goto LABEL_14;
  ClearedTurn = WarBoardData__GetClearedTurn(Instance, startCondId, v7);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v9 = ClearedTurn;
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (reinforcementsSaveList = Instance[1].fields.reinforcementsSaveList) == 0LL )
LABEL_14:
    sub_B7769C(Instance, v6);
  v11 = *(_QWORD *)&reinforcementsSaveList[2].fields._size;
  if ( v11 )
    LODWORD(v11) = *(_DWORD *)(v11 + 108);
  v12 = v11 - v9;
  if ( v12 >= 1 )
    return v12 % (unsigned int)multipleTurn == 0;
  return 0;
}


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

  if ( (byte_4389A07 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A07 = 1;
  }
  if ( (turn & 0x80000000) != 0 )
  {
    LOBYTE(PlayedEventData) = 0;
    return (char)PlayedEventData;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (v12 = *(_QWORD *)&Instance[4].fields.m_CachedPtr) == 0 )
    sub_B7769C(Instance, v10);
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
  WarBoardCondType___c__DisplayClass10_0_o *v3; // x19
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  __int64 v6; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v8; // x21
  WarBoardData_SquareRangeSearch_o *v9; // x0
  struct UIPanel_o *basePanel; // x8
  System_Collections_Generic_IEnumerable_TSource__o *topAnchor; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x21

  if ( (byte_4389A02 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    sub_B775C4(&Method_System_Func_WarBoardWallData__bool___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardUserWallData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_B775C4(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__);
    sub_B775C4(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__);
    sub_B775C4(&WarBoardCondType___c__DisplayClass10_0_TypeInfo);
    byte_4389A02 = 1;
  }
  v3 = (WarBoardCondType___c__DisplayClass10_0_o *)sub_B77694(WarBoardCondType___c__DisplayClass10_0_TypeInfo);
  WarBoardCondType___c__DisplayClass10_0___ctor(v3, 0LL);
  if ( !v3
    || (v3->fields.wallId = wallId,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (v6 = *(_QWORD *)&Instance[4].fields.m_CachedPtr,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B7769C(Instance, v5);
  }
  if ( v6 )
  {
    v7 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v6 + 88);
    v8 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardWallData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v8,
      (Il2CppObject *)v3,
      Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardWallData__bool___ctor__);
    v9 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
           v7,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    if ( v9 )
      LOBYTE(v9) = LOBYTE(v9[1].monitor) != 0;
  }
  else
  {
    basePanel = Instance[4].fields.basePanel;
    if ( basePanel
      && (topAnchor = (System_Collections_Generic_IEnumerable_TSource__o *)basePanel->fields.topAnchor) != 0LL )
    {
      v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v12,
        (Il2CppObject *)v3,
        Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__,
        (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v9 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
             topAnchor,
             (System_Func_TSource__bool__o *)v12,
             (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v9 )
        LOBYTE(v9) = v9->fields.range < 1;
    }
    else
    {
      LOBYTE(v9) = 0;
    }
  }
  return (char)v9;
}


bool __fastcall WarBoardCondType__NotBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  return !WarBoardCondType__IsBossStatus(bossId, status, method);
}


void __fastcall WarBoardCondType__SetSquareServantCount(
        bool isPlayer,
        int32_t srcId,
        int32_t destId,
        int32_t *srcServantCount,
        int32_t *destServantCount,
        const MethodInfo *method)
{
  WarBoardManager_o *Instance; // x0
  __int64 v12; // x1
  int32_t StageId_k__BackingField; // w24
  System_Collections_Generic_List_int__o *StageList; // x23
  System_Collections_Generic_List_int__o *v15; // x22
  WarBoardManager_o *v16; // x24
  WarBoardManager_o *v17; // x21

  if ( (byte_4389A04 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389A04 = 1;
  }
  *destServantCount = 0;
  *srcServantCount = 0;
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  StageId_k__BackingField = Instance->fields._StageId_k__BackingField;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (WarBoardManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  StageList = WarBoardSquareIndexGroupMaster__GetStageList(
                (WarBoardSquareIndexGroupMaster_o *)Instance,
                srcId,
                StageId_k__BackingField,
                0LL);
  Instance = (WarBoardManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Instance )
    goto LABEL_14;
  v15 = WarBoardSquareIndexGroupMaster__GetStageList(
          (WarBoardSquareIndexGroupMaster_o *)Instance,
          destId,
          StageId_k__BackingField,
          0LL);
  Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !StageList
    || (v16 = Instance,
        Instance = (WarBoardManager_o *)System_Collections_Generic_List_int___ToArray(
                                          StageList,
                                          (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v16)
    || (*srcServantCount = WarBoardManager__GetSquareServantCount(v16, isPlayer, (System_Int32_array *)Instance, 0LL),
        Instance = (WarBoardManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        !v15)
    || (v17 = Instance,
        Instance = (WarBoardManager_o *)System_Collections_Generic_List_int___ToArray(
                                          v15,
                                          (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__),
        !v17) )
  {
LABEL_14:
    sub_B7769C(Instance, v12);
  }
  *destServantCount = WarBoardManager__GetSquareServantCount(v17, isPlayer, (System_Int32_array *)Instance, 0LL);
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
    sub_B7769C(this, 0LL);
  return x->fields._wallId_k__BackingField == this->fields.wallId;
}


bool __fastcall WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__1(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.id == this->fields.wallId;
}
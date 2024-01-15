void __fastcall WarBoardCondType___ctor(WarBoardCondType_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsBossStatus(int32_t bossId, int32_t status, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  const MethodInfo *v7; // x4
  WarBoardData_o *monitor; // x0

  if ( (byte_40F895A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&status);
    sub_B16FFC(&StringLiteral_22210/*"status"*/, v5);
    byte_40F895A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  return WarBoardData__IsBossInfo(monitor, bossId, (System_String_o *)StringLiteral_22210/*"status"*/, status, v7);
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v11; // x3
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  WarBoardPieceData_array *v17; // x21
  unsigned int v18; // w24
  int32_t v19; // w23
  Il2CppClass **v20; // x8
  WarBoardPieceData_o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Individuality; // x0

  if ( (byte_40F895E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, *(_QWORD *)&groupId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_40F895E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_17;
  Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, forceId, groupId, v11);
  if ( !Pieces_22598072 )
    goto LABEL_17;
  max_length = Pieces_22598072->max_length;
  v17 = Pieces_22598072;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(Pieces_22598072, v14, v15);
        sub_B170A0();
      }
      v20 = &v17->obj.klass + (int)v18;
      v21 = (WarBoardPieceData_o *)v20[4];
      if ( !v21 )
        break;
      Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v20[4], 0LL);
      if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 && !v21->fields._isDead_k__BackingField )
      {
        Individuality = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardPieceData__GetIndividuality(
                                                                               v21,
                                                                               0LL,
                                                                               0LL);
        Pieces_22598072 = (WarBoardPieceData_array *)System_Linq_Enumerable__Contains_int_(
                                                       Individuality,
                                                       IndividualityId,
                                                       (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
        v19 += (unsigned __int8)Pieces_22598072 & 1;
      }
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        return v19 <= targetAliveCount;
    }
LABEL_17:
    sub_B170D4();
  }
  v19 = 0;
  return v19 <= targetAliveCount;
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

  if ( (byte_40F894E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&forceId);
    byte_40F894E = 1;
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
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      result = WarBoardManager__IsNowTurn_18095940((WarBoardManager_o *)Instance, forceId, groupId, 0LL);
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v8; // x3
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  unsigned int v14; // w9
  WarBoardPieceData_o *v15; // x10

  if ( (byte_40F8954 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_40F8954 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, forceId, groupId, v8)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  max_length = Pieces_22598072->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= max_length )
    {
      sub_B17100(Pieces_22598072, v11, v12);
      sub_B170A0();
    }
    v15 = Pieces_22598072->m_Items[v14];
    if ( !v15 )
      goto LABEL_14;
    if ( v15->fields._index_k__BackingField == targetPieceIndex )
      return !v15->fields._isDead_k__BackingField;
    if ( (int)++v14 >= max_length )
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v10; // x3
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  unsigned int v16; // w9
  WarBoardPieceData_o *v17; // x10

  if ( (byte_40F8958 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_40F8958 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, forceId, groupId, v10)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  max_length = Pieces_22598072->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      sub_B17100(Pieces_22598072, v13, v14);
      sub_B170A0();
    }
    v17 = Pieces_22598072->m_Items[v16];
    if ( !v17 )
      goto LABEL_14;
    if ( v17->fields._index_k__BackingField == targetPieceId )
      return v17->fields._breakPointMax_k__BackingField - v17->fields._breakPoint_k__BackingField >= defeatBreakPoint;
    if ( (int)++v16 >= max_length )
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v8; // x3
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  unsigned int v14; // w9
  WarBoardPieceData_o *v15; // x10

  if ( (byte_40F894F & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_40F894F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, forceId, groupId, v8)) == 0LL )
  {
LABEL_14:
    sub_B170D4();
  }
  max_length = Pieces_22598072->max_length;
  if ( max_length < 1 )
    return 0;
  v14 = 0;
  while ( 1 )
  {
    if ( v14 >= max_length )
    {
      sub_B17100(Pieces_22598072, v11, v12);
      sub_B170A0();
    }
    v15 = Pieces_22598072->m_Items[v14];
    if ( !v15 )
      goto LABEL_14;
    if ( v15->fields._index_k__BackingField == targetPieceId )
      return v15->fields._isDead_k__BackingField;
    if ( (int)++v14 >= max_length )
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v8; // x3
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  int max_length; // w8
  WarBoardPieceData_array *v14; // x20
  unsigned int v15; // w23
  int32_t v16; // w22
  Il2CppClass **v17; // x8
  WarBoardPieceData_o *v18; // x21

  if ( (byte_40F8950 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_40F8950 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_18;
  Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, forceId, groupId, v8);
  if ( !Pieces_22598072 )
    goto LABEL_18;
  max_length = Pieces_22598072->max_length;
  v14 = Pieces_22598072;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        sub_B17100(Pieces_22598072, v11, v12);
        sub_B170A0();
      }
      v17 = &v14->obj.klass + (int)v15;
      v18 = (WarBoardPieceData_o *)v17[4];
      if ( !v18 )
        break;
      Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v17[4], 0LL);
      if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 )
      {
        Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_IsStageBoss(v18, 0LL);
        if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 && !v18->fields._isDead_k__BackingField )
          v16 += !v18->fields._isNotIncludeWin_k__BackingField;
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return v16 <= targetAliveCount;
    }
LABEL_18:
    sub_B170D4();
  }
  v16 = 0;
  return v16 <= targetAliveCount;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsReinforcementsAppear(
        int32_t forceId,
        int32_t groupId,
        int32_t condId,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v8; // x4
  WarBoardData_o *monitor; // x0

  if ( (byte_40F895B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_40F895B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  return WarBoardData__IsReinforcementsApper(monitor, forceId, groupId, condId, v8);
}


bool __fastcall WarBoardCondType__IsTargetEventNotDone(int32_t eventId, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v4; // x2
  WarBoardData_o *monitor; // x0

  if ( (byte_40F895D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F895D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  return WarBoardData__GetPlayedEventData(monitor, eventId, v4) == 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardCondType__IsTargetSquareMove(
        int32_t forceId,
        int32_t groupId,
        int32_t targetPieceIndex,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  const MethodInfo *v10; // x3
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int max_length; // w8
  unsigned int v16; // w9
  WarBoardPieceData_o *v17; // x10

  if ( (byte_40F8953 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&groupId);
    byte_40F8953 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (Pieces_22598072 = WarBoardData__GetPieces_22598072(monitor, forceId, groupId, v10)) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  max_length = Pieces_22598072->max_length;
  if ( max_length < 1 )
    return 0;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= max_length )
    {
      sub_B17100(Pieces_22598072, v13, v14);
      sub_B170A0();
    }
    v17 = Pieces_22598072->m_Items[v16];
    if ( !v17 )
      goto LABEL_17;
    if ( !v17->fields._isDead_k__BackingField
      && v17->fields._nowSquareIndex_k__BackingField == squareIndex
      && ((targetPieceIndex & 0x80000000) != 0 || v17->fields._index_k__BackingField == targetPieceIndex) )
    {
      return 1;
    }
    if ( (int)++v16 >= max_length )
      return 0;
  }
}


bool __fastcall WarBoardCondType__IsTargetTurn(int32_t targetTurn, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  _QWORD *monitor; // x8
  __int64 v5; // x8

  if ( (byte_40F8951 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8951 = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = Instance[4].monitor) == 0LL )
    sub_B170D4();
  v5 = monitor[13];
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x2
  WarBoardData_o *monitor; // x0
  int32_t ClearedTurn; // w0
  int32_t v9; // w20
  WebViewManager_o *v10; // x0
  _QWORD *v11; // x8
  __int64 v12; // x8

  if ( (byte_40F8955 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&targetTurn);
    byte_40F8955 = 1;
  }
  if ( (targetTurn & 0x80000000) != 0 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
LABEL_13:
    sub_B170D4();
  ClearedTurn = WarBoardData__GetClearedTurn(monitor, startCondId, v6);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v9 = ClearedTurn;
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v10 )
    goto LABEL_13;
  v11 = v10[4].monitor;
  if ( !v11 )
    goto LABEL_13;
  v12 = v11[13];
  if ( v12 )
    LODWORD(v12) = *(_DWORD *)(v12 + 108);
  return (int)v12 - v9 >= 0 && (_DWORD)v12 - v9 == targetTurn;
}


bool __fastcall WarBoardCondType__IsTargetTurnMultiple(int32_t multipleTurn, const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  _QWORD *monitor; // x8
  __int64 v5; // x8

  if ( (byte_40F8952 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8952 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = Instance[4].monitor) == 0LL )
    sub_B170D4();
  v5 = monitor[13];
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
  WebViewManager_o *Instance; // x0
  const MethodInfo *v6; // x2
  WarBoardData_o *monitor; // x0
  int32_t ClearedTurn; // w0
  int32_t v9; // w20
  WebViewManager_o *v10; // x0
  _QWORD *v11; // x8
  __int64 v12; // x8
  int v13; // w8

  if ( (byte_40F8956 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&multipleTurn);
    byte_40F8956 = 1;
  }
  if ( multipleTurn < 1 )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( !monitor )
    goto LABEL_14;
  ClearedTurn = WarBoardData__GetClearedTurn(monitor, startCondId, v6);
  if ( (ClearedTurn & 0x80000000) != 0 )
    return 0;
  v9 = ClearedTurn;
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v10 || (v11 = v10[4].monitor) == 0LL )
LABEL_14:
    sub_B170D4();
  v12 = v11[13];
  if ( v12 )
    LODWORD(v12) = *(_DWORD *)(v12 + 108);
  v13 = v12 - v9;
  if ( v13 >= 1 )
    return v13 % (unsigned int)multipleTurn == 0;
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
  _QWORD *monitor; // x23
  WarBoardEventData_o *PlayedEventData; // x0
  __int64 v13; // x8
  __int64 v14; // x9
  int v15; // w8
  int v16; // w8
  bool v17; // zf

  if ( (byte_40F895C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, *(_QWORD *)&turn);
    byte_40F895C = 1;
  }
  if ( (turn & 0x80000000) != 0 )
  {
    LOBYTE(PlayedEventData) = 0;
    return (char)PlayedEventData;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = Instance[4].monitor) == 0LL )
    sub_B170D4();
  PlayedEventData = WarBoardData__GetPlayedEventData((WarBoardData_o *)Instance[4].monitor, eventId, v10);
  if ( PlayedEventData )
  {
    v13 = 20LL;
    if ( lookFirstPlayedTurn )
      v13 = 24LL;
    v14 = monitor[13];
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardCondType___c__DisplayClass10_0_o *v15; // x19
  WebViewManager_o *Instance; // x0
  void *monitor; // x20
  WebViewManager_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21
  WarBoardData_SquareRangeSearch_o *v25; // x0
  __int64 v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21

  if ( (byte_40F8957 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardWallData__bool___ctor__, v7);
    sub_B16FFC(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardUserWallData__bool__TypeInfo, v9);
    sub_B16FFC(&System_Func_WarBoardWallData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B16FFC(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__, v12);
    sub_B16FFC(&Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__, v13);
    sub_B16FFC(&WarBoardCondType___c__DisplayClass10_0_TypeInfo, v14);
    byte_40F8957 = 1;
  }
  v15 = (WarBoardCondType___c__DisplayClass10_0_o *)sub_B170CC(
                                                      WarBoardCondType___c__DisplayClass10_0_TypeInfo,
                                                      method,
                                                      v2,
                                                      v3,
                                                      v4);
  WarBoardCondType___c__DisplayClass10_0___ctor(v15, 0LL);
  if ( !v15
    || (v15->fields.wallId = wallId,
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = Instance[4].monitor,
        (v18 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  if ( monitor )
  {
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 11);
    v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_WarBoardWallData__bool__TypeInfo,
                                                                               v19,
                                                                               v20,
                                                                               v21,
                                                                               v22);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v24,
      (Il2CppObject *)v15,
      Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardWallData__bool___ctor__);
    v25 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            v23,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    if ( v25 )
      LOBYTE(v25) = LOBYTE(v25[1].monitor) != 0;
  }
  else
  {
    v26 = *(_QWORD *)&v18[4].fields.m_CachedPtr;
    if ( v26 && (v27 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v26 + 48)) != 0LL )
    {
      v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                 v19,
                                                                                 v20,
                                                                                 v21,
                                                                                 v22);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v28,
        (Il2CppObject *)v15,
        Method_WarBoardCondType___c__DisplayClass10_0__IsWallDestroy_b__1__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v25 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              v27,
              (System_Func_TSource__bool__o *)v28,
              (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v25 )
        LOBYTE(v25) = v25->fields.range < 1;
    }
    else
    {
      LOBYTE(v25) = 0;
    }
  }
  return (char)v25;
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
  WebViewManager_o *Instance; // x0
  int32_t webView_high; // w24
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_int__o *StageList; // x23
  WarBoardSquareIndexGroupMaster_o *v18; // x0
  System_Collections_Generic_List_int__o *v19; // x22
  WebViewManager_o *v20; // x0
  WarBoardManager_o *v21; // x24
  System_Int32_array *v22; // x0
  WebViewManager_o *v23; // x0
  WarBoardManager_o *v24; // x21
  System_Int32_array *v25; // x0

  if ( (byte_40F8959 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, *(_QWORD *)&srcId);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    byte_40F8959 = 1;
  }
  *destServantCount = 0;
  *srcServantCount = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  webView_high = HIDWORD(Instance[3].fields.webView);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  StageList = WarBoardSquareIndexGroupMaster__GetStageList(Master_WarQuestSelectionMaster, srcId, webView_high, 0LL);
  v18 = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !v18 )
    goto LABEL_14;
  v19 = WarBoardSquareIndexGroupMaster__GetStageList(v18, destId, webView_high, 0LL);
  v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !StageList
    || (v21 = (WarBoardManager_o *)v20,
        v22 = System_Collections_Generic_List_int___ToArray(
                StageList,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v21)
    || (*srcServantCount = WarBoardManager__GetSquareServantCount(v21, isPlayer, v22, 0LL),
        v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__),
        !v19)
    || (v24 = (WarBoardManager_o *)v23,
        v25 = System_Collections_Generic_List_int___ToArray(
                v19,
                (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__),
        !v24) )
  {
LABEL_14:
    sub_B170D4();
  }
  *destServantCount = WarBoardManager__GetSquareServantCount(v24, isPlayer, v25, 0LL);
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
    sub_B170D4();
  return x->fields._wallId_k__BackingField == this->fields.wallId;
}


bool __fastcall WarBoardCondType___c__DisplayClass10_0___IsWallDestroy_b__1(
        WarBoardCondType___c__DisplayClass10_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.id == this->fields.wallId;
}
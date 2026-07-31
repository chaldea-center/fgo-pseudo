void BattleVoicePlayCondArgs___ctor(
        BattleVoicePlayCondArgs_o *this,
        BattleData_o *btlData,
        BattleServantData_o *svtData,
        BattleActionData_o *actData,
        BattleCommandData_o *cmdData,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BattleData_k__BackingField = btlData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)btlData, v11, v12, v13, v14, v15, v16);
  this->fields._ServantData_k__BackingField = svtData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ServantData_k__BackingField,
    (int32_t)svtData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._ActionData_k__BackingField = actData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ActionData_k__BackingField,
    (int32_t)actData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._CommandData_k__BackingField = cmdData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CommandData_k__BackingField,
    (int32_t)cmdData,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


bool BattleVoicePlayCondArgs__CheckMainTargetIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  struct BattleActionData_o *ActionData_k__BackingField; // x8
  int32_t targetId; // w21
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  System_Int32_array *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  int max_length; // w8
  int v12; // w10

  if ( (byte_593B5C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_593B5C6 = 1;
  }
  ActionData_k__BackingField = this->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField )
    return 0;
  targetId = ActionData_k__BackingField->fields.targetId;
  v7 = System_Linq_Enumerable__Distinct_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
         (const MethodInfo_3849124 *)Method_System_Linq_Enumerable_Distinct_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
    sub_21FFECC(0, v9);
  max_length = v8->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( max_length == v12 )
      sub_21FFED4(v8);
    if ( targetId == v8->m_Items[v12] )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v12 )
      return 0;
  }
  return BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(this, targetId, targetIndividuality, 1, v10);
}


bool BattleVoicePlayCondArgs__CheckServantIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct BattleServantData_o *ServantData_k__BackingField; // x8

  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  return ServantData_k__BackingField
      && BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
           this,
           ServantData_k__BackingField->fields.uniqueId,
           targetIndividuality,
           0,
           v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  BattleVoicePlayCondArgs_o *v4; // x20
  struct BattleActionData_o *ActionData_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  const MethodInfo *v7; // x4
  struct BattleServantData_o *ServantData_k__BackingField; // x8
  BattleVoicePlayCondArgs_o *v9; // x21
  bool v10; // w22
  unsigned __int64 v11; // x23

  v4 = this;
  if ( (byte_593B5C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_int___);
    this = (BattleVoicePlayCondArgs_o *)sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_593B5C5 = 1;
  }
  ActionData_k__BackingField = v4->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField
    || (v6 = System_Linq_Enumerable__Distinct_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
               (const MethodInfo_3849124 *)Method_System_Linq_Enumerable_Distinct_int___),
        (this = (BattleVoicePlayCondArgs_o *)System_Linq_Enumerable__ToArray_int_(
                                               v6,
                                               (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___)) == 0) )
  {
    sub_21FFECC(this, *(_QWORD *)&targetIndividuality);
  }
  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  v9 = this;
  v10 = (int)ServantData_k__BackingField > 0;
  if ( (int)ServantData_k__BackingField >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= (unsigned int)ServantData_k__BackingField )
        sub_21FFED4(this);
      this = (BattleVoicePlayCondArgs_o *)BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
                                            v4,
                                            *((_DWORD *)&v9->fields._ActionData_k__BackingField + v11),
                                            targetIndividuality,
                                            1,
                                            v7);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(ServantData_k__BackingField) = v9->fields._ServantData_k__BackingField;
      v10 = (__int64)++v11 < (int)ServantData_k__BackingField;
    }
    while ( (__int64)v11 < (int)ServantData_k__BackingField );
  }
  return v10;
}


int32_t BattleVoicePlayCondArgs__GetBattleEntryEnemyTotalCount(
        BattleVoicePlayCondArgs_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *BattleData_k__BackingField; // x8

  BattleData_k__BackingField = this->fields._BattleData_k__BackingField;
  if ( BattleData_k__BackingField )
    return BattleData_k__BackingField->fields._EnemyEntryTotalCount_k__BackingField;
  else
    return 0;
}


int32_t BattleVoicePlayCondArgs__GetBattleEntryPlayerTotalCount(
        BattleVoicePlayCondArgs_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *BattleData_k__BackingField; // x8

  BattleData_k__BackingField = this->fields._BattleData_k__BackingField;
  if ( BattleData_k__BackingField )
    return BattleData_k__BackingField->fields._PlayerEntryTotalCount_k__BackingField;
  else
    return 0;
}


bool BattleVoicePlayCondArgs__IsOpenBattlePoint(
        BattleVoicePlayCondArgs_o *this,
        int32_t valueCondType,
        int32_t targetId,
        int32_t condNum,
        const MethodInfo *method)
{
  BattleServantData_o *ServantData_k__BackingField; // x0
  BattlePointData_o *BattlePointData; // x0
  BattlePointData_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_593B5C9 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_593B5C9 = 1;
  }
  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  if ( !ServantData_k__BackingField )
    return 0;
  BattlePointData = BattleServantData__GetBattlePointData(ServantData_k__BackingField, targetId, 0);
  if ( !BattlePointData )
    return 0;
  v11 = BattlePointData;
  v12 = sub_21FFD10(int___TypeInfo, 1);
  if ( !v12 )
    sub_21FFECC(0, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_21FFED4(v12);
  *(_DWORD *)(v12 + 32) = condNum;
  return BattleUtility__IsSatisfyValueCond(valueCondType, (System_Int32_array *)v12, v11->fields.value, v14);
}


// local variable allocation has failed, the output may be wrong!
bool BattleVoicePlayCondArgs__IsOpenBattleSvtFriendShip(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetFriendShip,
        bool isAbove,
        const MethodInfo *method)
{
  struct BattleServantData_o *ServantData_k__BackingField; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  int v10; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_593B5C8 & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_593B5C8 = 1;
  }
  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  if ( !ServantData_k__BackingField )
    return 0;
  v9 = *(_QWORD *)&ServantData_k__BackingField->fields.friendship.fields.currentCryptoKey;
  v8 = *(_QWORD *)&ServantData_k__BackingField->fields.friendship.fields.fakeValue;
  v10 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1);
  if ( isAbove )
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&targetFriendShip);
    *(_QWORD *)&v12.fields.currentCryptoKey = v9;
    *(_QWORD *)&v12.fields.fakeValue = v8;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v12, 0) >= targetFriendShip;
  }
  else
  {
    if ( !v10 )
      j_il2cpp_runtime_class_init_0(
        CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
        *(_QWORD *)&targetFriendShip);
    *(_QWORD *)&v13.fields.currentCryptoKey = v9;
    *(_QWORD *)&v13.fields.fakeValue = v8;
    return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v13, 0) <= targetFriendShip;
  }
}


// local variable allocation has failed, the output may be wrong!
bool BattleVoicePlayCondArgs__IsOpenBattleValue(
        BattleVoicePlayCondArgs_o *this,
        int32_t valueCondType,
        int32_t targetId,
        int32_t condNum,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BattleData_k__BackingField; // x23
  __int64 v10; // x1
  struct BattleData_o *v11; // x0
  const MethodInfo *v12; // x3
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593B5CA & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B5CA = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  value = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&valueCondType);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
    return 0;
  v11 = this->fields._BattleData_k__BackingField;
  if ( !v11 )
    goto LABEL_13;
  if ( !BattleData__TryGetBattleValue(v11, targetId, &value, 0) )
    return 0;
  v11 = (struct BattleData_o *)sub_21FFD10(int___TypeInfo, 1);
  if ( !v11 )
LABEL_13:
    sub_21FFECC(v11, v10);
  if ( !LODWORD(v11->fields.m_CancellationTokenSource) )
    sub_21FFED4(v11);
  LODWORD(v11->fields.rootfsm) = condNum;
  return BattleUtility__IsSatisfyValueCond(valueCondType, (System_Int32_array *)v11, value, v12);
}


bool BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct BattleActionData_o *ActionData_k__BackingField; // x8

  ActionData_k__BackingField = this->fields._ActionData_k__BackingField;
  return ActionData_k__BackingField
      && BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
           this,
           ActionData_k__BackingField->fields.actorId,
           targetIndividuality,
           1,
           v3);
}


// local variable allocation has failed, the output may be wrong!
bool BattleVoicePlayCondArgs__IsPlayQuestPhase(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetQuestId,
        int32_t targetQuestPhase,
        bool isNot,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BattleData_k__BackingField; // x23
  __int64 v10; // x1
  char v11; // w8
  BattleData_o *QuestId; // x0
  BattleData_o *v13; // x8
  int v14; // w22
  int32_t Phase; // w0
  bool v17; // w8

  if ( (byte_593B5C4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B5C4 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetQuestId);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
  {
    v11 = 0;
  }
  else
  {
    QuestId = this->fields._BattleData_k__BackingField;
    if ( !QuestId
      || (QuestId = (BattleData_o *)BattleData__getQuestId(QuestId, 0),
          (v13 = this->fields._BattleData_k__BackingField) == 0) )
    {
      sub_21FFECC(QuestId, v10);
    }
    v14 = (int)QuestId;
    Phase = BattleData__getPhase(v13, 0);
    v17 = v14 == targetQuestId && Phase == targetQuestPhase;
    v11 = v17 ^ isNot;
  }
  return v11 & 1;
}


bool BattleVoicePlayCondArgs__IsSelectTreasureDvcCard(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetTreasureDvcId,
        const MethodInfo *method)
{
  struct BattleCommandData_o *CommandData_k__BackingField; // x8

  CommandData_k__BackingField = this->fields._CommandData_k__BackingField;
  return CommandData_k__BackingField && CommandData_k__BackingField->fields.treasureDvc == targetTreasureDvcId;
}


// local variable allocation has failed, the output may be wrong!
bool BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetUniqueId,
        int32_t targetIndividuality,
        bool isCheckAlive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BattleData_k__BackingField; // x23
  __int64 v10; // x1
  struct BattleData_o *v11; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v13; // x1
  BattleServantData_o *v14; // x21
  bool isAlive; // w0
  char v16; // w8
  int32_t v17; // w22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x20
  System_Int32_array *v19; // x21

  if ( (byte_593B5C7 & 1) == 0 )
  {
    sub_21FFC50(&Individuality_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B5C7 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&targetUniqueId);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
    goto LABEL_20;
  v11 = this->fields._BattleData_k__BackingField;
  if ( !v11 )
    goto LABEL_22;
  ServantData = BattleData__getServantData(v11, targetUniqueId, 0);
  if ( !ServantData )
  {
LABEL_20:
    v16 = 0;
    return v16 & 1;
  }
  v14 = ServantData;
  if ( isCheckAlive )
  {
    isAlive = BattleServantData__isAlive(ServantData, 0, 0);
    v16 = 0;
    if ( !isAlive )
      return v16 & 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13);
  if ( targetIndividuality >= 0 )
    v17 = targetIndividuality;
  else
    v17 = -targetIndividuality;
  ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                           v14,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0);
  v11 = (struct BattleData_o *)sub_21FFD10(int___TypeInfo, 1);
  if ( !v11 )
LABEL_22:
    sub_21FFECC(v11, v10);
  v19 = (System_Int32_array *)v11;
  if ( !LODWORD(v11->fields.m_CancellationTokenSource) )
    sub_21FFED4(v11);
  LODWORD(v11->fields.rootfsm) = v17;
  if ( !*(&Individuality_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo, v10);
  v16 = (targetIndividuality < 0) ^ Individuality__CheckIndividualities(ConcatServantAndBuffIndividualityies, v19, 0);
  return v16 & 1;
}


BattleActionData_o *BattleVoicePlayCondArgs__get_ActionData(BattleVoicePlayCondArgs_o *this, const MethodInfo *method)
{
  return this->fields._ActionData_k__BackingField;
}


BattleData_o *BattleVoicePlayCondArgs__get_BattleData(BattleVoicePlayCondArgs_o *this, const MethodInfo *method)
{
  return this->fields._BattleData_k__BackingField;
}


BattleCommandData_o *BattleVoicePlayCondArgs__get_CommandData(
        BattleVoicePlayCondArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandData_k__BackingField;
}


BattleServantData_o *BattleVoicePlayCondArgs__get_ServantData(
        BattleVoicePlayCondArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantData_k__BackingField;
}
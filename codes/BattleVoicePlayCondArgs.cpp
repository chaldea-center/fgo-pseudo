void BattleVoicePlayCondArgs___ctor(
        BattleVoicePlayCondArgs_o *this,
        BattleData_o *btlData,
        BattleServantData_o *svtData,
        BattleActionData_o *actData,
        BattleCommandData_o *cmdData,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BattleData_k__BackingField = btlData;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)btlData, v11, v12, v13, v14, v15, v16);
  this->fields._ServantData_k__BackingField = svtData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._ServantData_k__BackingField,
    (int32_t)svtData,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields._ActionData_k__BackingField = actData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._ActionData_k__BackingField,
    (int32_t)actData,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields._CommandData_k__BackingField = cmdData;
  sub_1D0F058(
    (GrandQuestFolderBoardItem_o *)&this->fields._CommandData_k__BackingField,
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
  int v12; // w9

  if ( (byte_4E7A565 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4E7A565 = 1;
  }
  ActionData_k__BackingField = this->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField )
    return 0;
  targetId = ActionData_k__BackingField->fields.targetId;
  v7 = System_Linq_Enumerable__Distinct_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
         (const MethodInfo_3272944 *)Method_System_Linq_Enumerable_Distinct_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
    sub_1D0F30C(0, v9);
  max_length = v8->max_length;
  if ( max_length < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    if ( max_length == v12 )
      sub_1D0F314(v8);
    if ( targetId == v8->m_Items[v12] )
      break;
    if ( max_length == ++v12 )
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
  if ( (byte_4E7A564 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_Distinct_int___);
    this = (BattleVoicePlayCondArgs_o *)sub_1D0F0B4(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4E7A564 = 1;
  }
  ActionData_k__BackingField = v4->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField
    || (v6 = System_Linq_Enumerable__Distinct_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
               (const MethodInfo_3272944 *)Method_System_Linq_Enumerable_Distinct_int___),
        (this = (BattleVoicePlayCondArgs_o *)System_Linq_Enumerable__ToArray_int_(
                                               v6,
                                               (const MethodInfo_328FC50 *)Method_System_Linq_Enumerable_ToArray_int___)) == 0) )
  {
    sub_1D0F30C(this, *(_QWORD *)&targetIndividuality);
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
        sub_1D0F314(this);
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

  if ( (byte_4E7A568 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    byte_4E7A568 = 1;
  }
  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  if ( !ServantData_k__BackingField )
    return 0;
  BattlePointData = BattleServantData__GetBattlePointData(ServantData_k__BackingField, targetId, 0);
  if ( !BattlePointData )
    return 0;
  v11 = BattlePointData;
  v12 = sub_1D0F15C(int___TypeInfo, 1);
  if ( !v12 )
    sub_1D0F30C(0, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1D0F314(v12);
  *(_DWORD *)(v12 + 32) = condNum;
  return BattleUtility__IsSatisfyValueCond(valueCondType, (System_Int32_array *)v12, v11->fields.value, v14);
}


bool BattleVoicePlayCondArgs__IsOpenBattleSvtFriendShip(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetFriendShip,
        bool isAbove,
        const MethodInfo *method)
{
  struct BattleServantData_o *ServantData_k__BackingField; // x8
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_4E7A567 & 1) == 0 )
  {
    sub_1D0F0B4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4E7A567 = 1;
  }
  ServantData_k__BackingField = this->fields._ServantData_k__BackingField;
  if ( !ServantData_k__BackingField )
    return 0;
  v9 = *(_QWORD *)&ServantData_k__BackingField->fields.friendship.fields.currentCryptoKey;
  v8 = *(_QWORD *)&ServantData_k__BackingField->fields.friendship.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v12.fields.currentCryptoKey = v9;
  *(_QWORD *)&v12.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_50331200(v12, 0);
  if ( isAbove )
    return v10 >= targetFriendShip;
  else
    return v10 <= targetFriendShip;
}


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

  if ( (byte_4E7A569 & 1) == 0 )
  {
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7A569 = 1;
  }
  value = 0;
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
    return 0;
  v11 = this->fields._BattleData_k__BackingField;
  if ( !v11 )
    goto LABEL_13;
  if ( !BattleData__TryGetBattleValue(v11, targetId, &value, 0) )
    return 0;
  v11 = (struct BattleData_o *)sub_1D0F15C(int___TypeInfo, 1);
  if ( !v11 )
LABEL_13:
    sub_1D0F30C(v11, v10);
  if ( !LODWORD(v11->fields.m_CancellationTokenSource) )
    sub_1D0F314(v11);
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


bool BattleVoicePlayCondArgs__IsPlayQuestPhase(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetQuestId,
        int32_t targetQuestPhase,
        bool isNot,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BattleData_k__BackingField; // x23
  __int64 v10; // x1
  BattleData_o *QuestId; // x0
  BattleData_o *v13; // x8
  bool v14; // w8

  if ( (byte_4E7A563 & 1) == 0 )
  {
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7A563 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
    return 0;
  QuestId = this->fields._BattleData_k__BackingField;
  if ( !QuestId
    || (QuestId = (BattleData_o *)BattleData__getQuestId(QuestId, 0),
        (v13 = this->fields._BattleData_k__BackingField) == 0) )
  {
    sub_1D0F30C(QuestId, v10);
  }
  v14 = ((_DWORD)QuestId == targetQuestId) & (BattleData__getPhase(v13, 0) == targetQuestPhase);
  if ( isNot )
    return !v14;
  else
    return v14;
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
  BattleServantData_o *v13; // x21
  int32_t v14; // w22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x20
  System_Int32_array *v16; // x21

  if ( (byte_4E7A566 & 1) == 0 )
  {
    sub_1D0F0B4(&Individuality_TypeInfo);
    sub_1D0F0B4(&int___TypeInfo);
    sub_1D0F0B4(&System_Math_TypeInfo);
    sub_1D0F0B4(&UnityEngine_Object_TypeInfo);
    byte_4E7A566 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
    return 0;
  v11 = this->fields._BattleData_k__BackingField;
  if ( !v11 )
    goto LABEL_21;
  ServantData = BattleData__getServantData(v11, targetUniqueId, 0);
  if ( !ServantData )
    return 0;
  v13 = ServantData;
  if ( isCheckAlive && !BattleServantData__isAlive(ServantData, 0, 0) )
    return 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( targetIndividuality >= 0 )
    v14 = targetIndividuality;
  else
    v14 = -targetIndividuality;
  ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                           v13,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0);
  v11 = (struct BattleData_o *)sub_1D0F15C(int___TypeInfo, 1);
  if ( !v11 )
LABEL_21:
    sub_1D0F30C(v11, v10);
  v16 = (System_Int32_array *)v11;
  if ( !LODWORD(v11->fields.m_CancellationTokenSource) )
    sub_1D0F314(v11);
  LODWORD(v11->fields.rootfsm) = v14;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return ((targetIndividuality < 0)
        ^ Individuality__CheckIndividualities(ConcatServantAndBuffIndividualityies, v16, 0))
       & 1;
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
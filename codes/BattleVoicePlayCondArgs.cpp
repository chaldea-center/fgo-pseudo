void BattleVoicePlayCondArgs___ctor(
        BattleVoicePlayCondArgs_o *this,
        BattleData_o *btlData,
        BattleServantData_o *svtData,
        BattleActionData_o *actData,
        BattleCommandData_o *cmdData,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BattleData_k__BackingField = btlData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)btlData, v11, v12);
  this->fields._ServantData_k__BackingField = svtData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._ServantData_k__BackingField, (int32_t)svtData, v13, v14);
  this->fields._ActionData_k__BackingField = actData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._ActionData_k__BackingField, (int32_t)actData, v15, v16);
  this->fields._CommandData_k__BackingField = cmdData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._CommandData_k__BackingField, (int32_t)cmdData, v17, v18);
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
  const MethodInfo *v9; // x3
  int max_length; // w8
  int v11; // w9

  if ( (byte_4C45D31 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C45D31 = 1;
  }
  ActionData_k__BackingField = this->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField )
    return 0;
  targetId = ActionData_k__BackingField->fields.targetId;
  v7 = System_Linq_Enumerable__Distinct_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
         (const MethodInfo_310AE44 *)Method_System_Linq_Enumerable_Distinct_int___);
  v8 = System_Linq_Enumerable__ToArray_int_(
         v7,
         (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v8 )
    sub_1C372B4(0);
  max_length = v8->max_length;
  if ( max_length < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    if ( max_length == v11 )
      sub_1C372BC(v8);
    if ( targetId == v8->m_Items[v11] )
      break;
    if ( max_length == ++v11 )
      return 0;
  }
  return BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(this, targetId, targetIndividuality, v9);
}


bool BattleVoicePlayCondArgs__CheckTargetIndividualityInFuncTargetListAll(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  BattleVoicePlayCondArgs_o *v4; // x20
  struct BattleActionData_o *ActionData_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0
  const MethodInfo *v7; // x3
  struct BattleServantData_o *ServantData_k__BackingField; // x8
  BattleVoicePlayCondArgs_o *v9; // x21
  bool v10; // w22
  unsigned __int64 v11; // x23

  v4 = this;
  if ( (byte_4C45D30 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Distinct_int___);
    this = (BattleVoicePlayCondArgs_o *)sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4C45D30 = 1;
  }
  ActionData_k__BackingField = v4->fields._ActionData_k__BackingField;
  if ( !ActionData_k__BackingField
    || (v6 = System_Linq_Enumerable__Distinct_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)ActionData_k__BackingField->fields.funcTargetList,
               (const MethodInfo_310AE44 *)Method_System_Linq_Enumerable_Distinct_int___),
        (this = (BattleVoicePlayCondArgs_o *)System_Linq_Enumerable__ToArray_int_(
                                               v6,
                                               (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___)) == 0) )
  {
    sub_1C372B4(this);
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
        sub_1C372BC(this);
      this = (BattleVoicePlayCondArgs_o *)BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
                                            v4,
                                            *((_DWORD *)&v9->fields._ActionData_k__BackingField + v11),
                                            targetIndividuality,
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

  if ( (byte_4C45D33 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C45D33 = 1;
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
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v12, 0);
  if ( isAbove )
    return v10 >= targetFriendShip;
  else
    return v10 <= targetFriendShip;
}


bool BattleVoicePlayCondArgs__IsOpponentHaveTargetIndividuality(
        BattleVoicePlayCondArgs_o *this,
        int32_t targetIndividuality,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleActionData_o *ActionData_k__BackingField; // x8

  ActionData_k__BackingField = this->fields._ActionData_k__BackingField;
  return ActionData_k__BackingField
      && BattleVoicePlayCondArgs__IsServantHaveTargetIndividuality(
           this,
           ActionData_k__BackingField->fields.actorId,
           targetIndividuality,
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
  BattleData_o *QuestId; // x0
  BattleData_o *v12; // x8
  bool v13; // w8

  if ( (byte_4C45D2F & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45D2F = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
    return 0;
  QuestId = this->fields._BattleData_k__BackingField;
  if ( !QuestId
    || (QuestId = (BattleData_o *)BattleData__getQuestId(QuestId, 0),
        (v12 = this->fields._BattleData_k__BackingField) == 0) )
  {
    sub_1C372B4(QuestId);
  }
  v13 = ((_DWORD)QuestId == targetQuestId) & (BattleData__getPhase(v12, 0) == targetQuestPhase);
  if ( isNot )
    return !v13;
  else
    return v13;
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
        const MethodInfo *method)
{
  UnityEngine_Object_o *BattleData_k__BackingField; // x22
  struct BattleData_o *v8; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v10; // x20
  int32_t v11; // w22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x20
  System_Int32_array *v13; // x21

  if ( (byte_4C45D32 & 1) == 0 )
  {
    sub_1C37058(&Individuality_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45D32 = 1;
  }
  BattleData_k__BackingField = (UnityEngine_Object_o *)this->fields._BattleData_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleData_k__BackingField, 0, 0) )
    return 0;
  v8 = this->fields._BattleData_k__BackingField;
  if ( !v8 )
    goto LABEL_20;
  ServantData = BattleData__getServantData(v8, targetUniqueId, 0);
  if ( !ServantData )
    return 0;
  v10 = ServantData;
  if ( !BattleServantData__isAlive(ServantData, 0, 0) )
    return 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( targetIndividuality >= 0 )
    v11 = targetIndividuality;
  else
    v11 = -targetIndividuality;
  ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                           v10,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0,
                                           0);
  v8 = (struct BattleData_o *)sub_1C37100(int___TypeInfo, 1);
  if ( !v8 )
LABEL_20:
    sub_1C372B4(v8);
  v13 = (System_Int32_array *)v8;
  if ( !LODWORD(v8->fields.m_CancellationTokenSource) )
    sub_1C372BC(v8);
  LODWORD(v8->fields.rootfsm) = v11;
  if ( !Individuality_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Individuality_TypeInfo);
  return ((targetIndividuality < 0)
        ^ Individuality__CheckIndividualities(ConcatServantAndBuffIndividualityies, v13, 0))
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
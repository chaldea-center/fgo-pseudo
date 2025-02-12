AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  AssumedBattleAssetSearcherBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4BC9D1C & 1) == 0 )
  {
    sub_1C1ABD4(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1);
    byte_4BC9D1C = 1;
  }
  v2 = (AssumedBattleAssetSearcherBase_o *)sub_1C1AE20(AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v2, v3);
  return (AssumedBattleAssetSearcherBeforeBattle_o *)v2;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Search(
        AssumedBattleAssetSearcherBeforeBattle_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBeforeBattle_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleEntity_o *BattleEntity; // x20
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v10; // x19
  const MethodInfo *v11; // x1
  System_Collections_Generic_HashSet_SimpleSkillData__o *v12; // x21
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  const MethodInfo *v16; // x2
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v17; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v22; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v24; // x2
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v26; // x2

  v2 = this;
  if ( (byte_4BC9D1B & 1) == 0 )
  {
    sub_1C1ABD4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__, v3);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v4);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__, v6);
    sub_1C1ABD4(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v7);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_1C1ABD4(
                                                         &System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo,
                                                         v8);
    byte_4BC9D1B = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_10;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v10 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1C1AE20(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v10, v11);
  v12 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1C1AE20(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v12,
    (const MethodInfo_34F80E4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v13);
  if ( !v12 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34F92D4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                         BattleEntity,
                                                         v14);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v12,
    v15,
    (const MethodInfo_34F92D4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v12, v10, v16);
  v17 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_1C1AE20(System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v17,
    (const MethodInfo_34FA238 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       v18);
  if ( !v17 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34FB428 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
  AssumedEffectExtractLogic__FromTreasureDevice(
    (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v17,
    v10,
    v19);
  if ( !BattleEntity
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL
    || (AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v10, v20),
        AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v10, v22),
        QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL),
        AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v10, v24),
        (this = (AssumedBattleAssetSearcherBeforeBattle_o *)BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1C1AE30(this, method);
  }
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)this, 0LL);
  AssumedEffectExtractLogic__FromItem(BattleItemObjectId, v10, v26);
  return v10;
}
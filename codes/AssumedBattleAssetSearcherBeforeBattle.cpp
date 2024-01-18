AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  AssumedBattleAssetSearcherBase_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_41897EE & 1) == 0 )
  {
    sub_B2C35C(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1);
    byte_41897EE = 1;
  }
  v2 = (AssumedBattleAssetSearcherBase_o *)sub_B2C42C(AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
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
  System_Collections_Generic_HashSet_SimpleSkillData__o *v11; // x21
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v16; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v20; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v22; // x2

  v2 = this;
  if ( (byte_41897ED & 1) == 0 )
  {
    sub_B2C35C(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___67288448, v5);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67288384, v6);
    sub_B2C35C(&System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo, v7);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_B2C35C(
                                                         &System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                         v8);
    byte_41897ED = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_9;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v10 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B2C42C(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v10, 0LL);
  v11 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B2C42C(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v11,
    (const MethodInfo_2D8DDEC *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67288384);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v12);
  if ( !v11 )
    goto LABEL_9;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_2D8EFB0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                         BattleEntity,
                                                         v13);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v11,
    v14,
    (const MethodInfo_2D8EFB0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v11, v10, v15);
  v16 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_B2C42C(System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v16,
    (const MethodInfo_2D900D8 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___67288448);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       0LL);
  if ( !v16
    || (System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
          v16,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_2D9129C *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__),
        AssumedEffectExtractLogic__FromTreasureDevice(
          (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v16,
          v10,
          v17),
        !BattleEntity)
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL )
  {
LABEL_9:
    sub_B2C434(this, method);
  }
  AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v10, v18);
  AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v10, v20);
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL);
  AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v10, v22);
  return v10;
}
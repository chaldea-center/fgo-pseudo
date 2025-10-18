AssumedBattleAssetSearcherBeforeBattle_o *AssumedBattleAssetSearcherBeforeBattle__Create(const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_4C4547E & 1) == 0 )
  {
    sub_1C37058(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
    byte_4C4547E = 1;
  }
  v1 = (AssumedBattleAssetSearcherBase_o *)sub_1C372A4(AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v1, v2);
  return (AssumedBattleAssetSearcherBeforeBattle_o *)v1;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *AssumedBattleAssetSearcherBeforeBattle__Search(
        AssumedBattleAssetSearcherBeforeBattle_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBeforeBattle_o *v2; // x19
  BattleEntity_o *BattleEntity; // x20
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v4; // x19
  const MethodInfo *v5; // x1
  System_Collections_Generic_HashSet_SimpleSkillData__o *v6; // x21
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  System_Collections_Generic_IEnumerable_T__o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v11; // x21
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v16; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v18; // x2
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v20; // x2

  v2 = this;
  if ( (byte_4C4547D & 1) == 0 )
  {
    sub_1C37058(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_1C37058(&System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
    byte_4C4547D = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_10;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v4 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1C372A4(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v4, v5);
  v6 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1C372A4(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v6,
    (const MethodInfo_365C25C *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v7);
  if ( !v6 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_365D44C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v9 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                        BattleEntity,
                                                        v8);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v6,
    v9,
    (const MethodInfo_365D44C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v6, v4, v10);
  v11 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_1C372A4(System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v11,
    (const MethodInfo_365E3B0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       v12);
  if ( !v11 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_365F5A0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
  AssumedEffectExtractLogic__FromTreasureDevice(
    (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v11,
    v4,
    v13);
  if ( !BattleEntity
    || (battleInfo = BattleEntity->fields.battleInfo) == 0
    || (AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v4, v14),
        AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v4, v16),
        QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0),
        AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v4, v18),
        (this = (AssumedBattleAssetSearcherBeforeBattle_o *)BattleEntity__GetQuestPhaseEntity(BattleEntity, 0)) == 0) )
  {
LABEL_10:
    sub_1C372B4(this);
  }
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)this, 0);
  AssumedEffectExtractLogic__FromItem(BattleItemObjectId, v4, v20);
  return v4;
}
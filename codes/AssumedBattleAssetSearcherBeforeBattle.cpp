AssumedBattleAssetSearcherBeforeBattle_o *AssumedBattleAssetSearcherBeforeBattle__Create(const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_4D32EDA & 1) == 0 )
  {
    sub_1C93AD4(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
    byte_4D32EDA = 1;
  }
  v1 = (AssumedBattleAssetSearcherBase_o *)sub_1C93D20(AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
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
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v8; // x21
  struct BattleInfoData_o *battleInfo; // x8
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  int32_t BattleItemObjectId; // w0

  v2 = this;
  if ( (byte_4D32ED9 & 1) == 0 )
  {
    sub_1C93AD4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_1C93AD4(&System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
    byte_4D32ED9 = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_10;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v4 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1C93D20(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v4, v5);
  v6 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1C93D20(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v6,
    (const MethodInfo_372DC4C *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       0);
  if ( !v6 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_372EE3C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v7 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                        BattleEntity,
                                                        0);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v6,
    v7,
    (const MethodInfo_372EE3C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v6, v4, 0);
  v8 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_1C93D20(System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v8,
    (const MethodInfo_372FDA0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       0);
  if ( !v8 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
    v8,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3730F90 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
  AssumedEffectExtractLogic__FromTreasureDevice(
    (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v8,
    v4,
    0);
  if ( !BattleEntity
    || (battleInfo = BattleEntity->fields.battleInfo) == 0
    || (AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v4, 0),
        AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v4, 0),
        QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0),
        AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v4, 0),
        (this = (AssumedBattleAssetSearcherBeforeBattle_o *)BattleEntity__GetQuestPhaseEntity(BattleEntity, 0)) == 0) )
  {
LABEL_10:
    sub_1C93D2C(this, method);
  }
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)this, 0);
  AssumedEffectExtractLogic__FromItem(BattleItemObjectId, v4, 0);
  return v4;
}
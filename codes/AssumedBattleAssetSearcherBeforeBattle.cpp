AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v1; // x19
  const MethodInfo *v2; // x1

  if ( (byte_438AA63 & 1) == 0 )
  {
    sub_B775C4(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
    byte_438AA63 = 1;
  }
  v1 = (AssumedBattleAssetSearcherBase_o *)sub_B77694(AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v1, v2);
  return (AssumedBattleAssetSearcherBeforeBattle_o *)v1;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Search(
        AssumedBattleAssetSearcherBeforeBattle_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBeforeBattle_o *v2; // x19
  BattleEntity_o *BattleEntity; // x20
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v4; // x19
  System_Collections_Generic_HashSet_SimpleSkillData__o *v5; // x21
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v10; // x21
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v14; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v16; // x2
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v18; // x2

  v2 = this;
  if ( (byte_438AA62 & 1) == 0 )
  {
    sub_B775C4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___69373912);
    sub_B775C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___69373848);
    sub_B775C4(&System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_B775C4(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
    byte_438AA62 = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_10;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v4 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B77694(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v4, 0LL);
  v5 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B77694(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v5,
    (const MethodInfo_2EE47F0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___69373848);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v6);
  if ( !v5 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_2EE59B4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                        BattleEntity,
                                                        v7);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v5,
    v8,
    (const MethodInfo_2EE59B4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v5, v4, v9);
  v10 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_B77694(System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v10,
    (const MethodInfo_2EE6ADC *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___69373912);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       0LL);
  if ( !v10 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_2EE7CA0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
  AssumedEffectExtractLogic__FromTreasureDevice(
    (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v10,
    v4,
    v11);
  if ( !BattleEntity
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL
    || (AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v4, v12),
        AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v4, v14),
        QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL),
        AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v4, v16),
        (this = (AssumedBattleAssetSearcherBeforeBattle_o *)BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B7769C(this, method);
  }
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)this, 0LL);
  AssumedEffectExtractLogic__FromItem(BattleItemObjectId, v4, v18);
  return v4;
}
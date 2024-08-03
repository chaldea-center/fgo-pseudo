AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssumedBattleAssetSearcherBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_49FE466 & 1) == 0 )
  {
    sub_1B640C8(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1);
    byte_49FE466 = 1;
  }
  v3 = (AssumedBattleAssetSearcherBase_o *)sub_1B64314(AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1, v2);
  AssumedBattleAssetSearcherBase___ctor(v3, v4);
  return (AssumedBattleAssetSearcherBeforeBattle_o *)v3;
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
  __int64 v10; // x1
  __int64 v11; // x2
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v12; // x19
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_HashSet_SimpleSkillData__o *v16; // x21
  const MethodInfo *v17; // x2
  const MethodInfo *v18; // x1
  System_Collections_Generic_IEnumerable_T__o *v19; // x0
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v23; // x21
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v28; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v30; // x2
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v32; // x2

  v2 = this;
  if ( (byte_49FE465 & 1) == 0 )
  {
    sub_1B640C8(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v7);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_1B640C8(
                                                         &System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo,
                                                         v8);
    byte_49FE465 = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_10;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v12 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1B64314(
                                                                 AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                 v10,
                                                                 v11);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v12, v13);
  v16 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1B64314(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v14,
                                                                   v15);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v16,
    (const MethodInfo_336BF9C *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v17);
  if ( !v16 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_336D18C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                         BattleEntity,
                                                         v18);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v16,
    v19,
    (const MethodInfo_336D18C *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v16, v12, v20);
  v23 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_1B64314(
                                                                            System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo,
                                                                            v21,
                                                                            v22);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v23,
    (const MethodInfo_336E0F0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       v24);
  if ( !v23 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_336F2E0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
  AssumedEffectExtractLogic__FromTreasureDevice(
    (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v23,
    v12,
    v25);
  if ( !BattleEntity
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL
    || (AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v12, v26),
        AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v12, v28),
        QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL),
        AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v12, v30),
        (this = (AssumedBattleAssetSearcherBeforeBattle_o *)BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)this, 0LL);
  AssumedEffectExtractLogic__FromItem(BattleItemObjectId, v12, v32);
  return v12;
}
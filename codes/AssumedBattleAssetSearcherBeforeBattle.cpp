AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  AssumedBattleAssetSearcherBase_o *v3; // x19
  const MethodInfo *v4; // x1

  if ( (byte_4216658 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1);
    byte_4216658 = 1;
  }
  v3 = (AssumedBattleAssetSearcherBase_o *)sub_B0D974(AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1, v2);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_HashSet_SimpleSkillData__o *v15; // x21
  const MethodInfo *v16; // x2
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_T__o *v18; // x0
  const MethodInfo *v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v22; // x21
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v26; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v28; // x2

  v2 = this;
  if ( (byte_4216657 & 1) == 0 )
  {
    sub_B0D8A4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___67861920, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67861856, v6);
    sub_B0D8A4(&System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo, v7);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_B0D8A4(
                                                         &System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                         v8);
    byte_4216657 = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_9;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v12 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B0D974(
                                                                 AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                 v10,
                                                                 v11);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v12, 0LL);
  v15 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B0D974(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v13,
                                                                   v14);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v15,
    (const MethodInfo_1D700F4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___67861856);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v16);
  if ( !v15 )
    goto LABEL_9;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_1D712B8 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                         BattleEntity,
                                                         v17);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v15,
    v18,
    (const MethodInfo_1D712B8 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v15, v12, v19);
  v22 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_B0D974(
                                                                            System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo,
                                                                            v20,
                                                                            v21);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v22,
    (const MethodInfo_1D723E0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___67861920);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       0LL);
  if ( !v22
    || (System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
          v22,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_1D735A4 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__),
        AssumedEffectExtractLogic__FromTreasureDevice(
          (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v22,
          v12,
          v23),
        !BattleEntity)
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL )
  {
LABEL_9:
    sub_B0D97C(this);
  }
  AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v12, v24);
  AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v12, v26);
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL);
  AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v12, v28);
  return v12;
}
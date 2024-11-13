AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBase_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_4B183C0 & 1) == 0 )
  {
    sub_1BCA7E0(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1, v2);
    byte_4B183C0 = 1;
  }
  v4 = (AssumedBattleAssetSearcherBase_o *)sub_1BCAA2C(AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1, v2, v3);
  AssumedBattleAssetSearcherBase___ctor(v4, v5);
  return (AssumedBattleAssetSearcherBeforeBattle_o *)v4;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Search(
        AssumedBattleAssetSearcherBeforeBattle_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssumedBattleAssetSearcherBeforeBattle_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  BattleEntity_o *BattleEntity; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v20; // x19
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_HashSet_SimpleSkillData__o *v25; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v33; // x21
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v38; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v40; // x2
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v42; // x2

  v3 = this;
  if ( (byte_4B183BF & 1) == 0 )
  {
    sub_1BCA7E0(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo, v12, v13);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_1BCA7E0(
                                                         &System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo,
                                                         v14,
                                                         v15);
    byte_4B183BF = 1;
  }
  if ( !v3->fields.manager )
    goto LABEL_10;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v20 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_1BCAA2C(
                                                                 AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                 v17,
                                                                 v18,
                                                                 v19);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v20, v21);
  v25 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v22,
                                                                   v23,
                                                                   v24);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v25,
    (const MethodInfo_345D194 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v26);
  if ( !v25 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_345E384 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                         BattleEntity,
                                                         v27);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v25,
    v28,
    (const MethodInfo_345E384 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v25, v20, v29);
  v33 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_1BCAA2C(
                                                                            System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo,
                                                                            v30,
                                                                            v31,
                                                                            v32);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v33,
    (const MethodInfo_345F2E8 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor__);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       v34);
  if ( !v33 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
    v33,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34604D8 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
  AssumedEffectExtractLogic__FromTreasureDevice(
    (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v33,
    v20,
    v35);
  if ( !BattleEntity
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL
    || (AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v20, v36),
        AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v20, v38),
        QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL),
        AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v20, v40),
        (this = (AssumedBattleAssetSearcherBeforeBattle_o *)BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)this, 0LL);
  AssumedEffectExtractLogic__FromItem(BattleItemObjectId, v20, v42);
  return v20;
}
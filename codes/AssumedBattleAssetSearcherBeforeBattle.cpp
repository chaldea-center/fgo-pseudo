AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AssumedBattleAssetSearcherBase_o *v5; // x19
  const MethodInfo *v6; // x1

  if ( (byte_40FBE32 & 1) == 0 )
  {
    sub_B16FFC(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1);
    byte_40FBE32 = 1;
  }
  v5 = (AssumedBattleAssetSearcherBase_o *)sub_B170CC(AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1, v2, v3, v4);
  AssumedBattleAssetSearcherBase___ctor(v5, v6);
  return (AssumedBattleAssetSearcherBeforeBattle_o *)v5;
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
  __int64 v12; // x3
  __int64 v13; // x4
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_HashSet_SimpleSkillData__o *v19; // x21
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  const MethodInfo *v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v29; // x21
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v34; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v36; // x2

  v2 = this;
  if ( (byte_40FBE31 & 1) == 0 )
  {
    sub_B16FFC(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___66714568, v5);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___66714504, v6);
    sub_B16FFC(&System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo, v7);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_B16FFC(
                                                         &System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                         v8);
    byte_40FBE31 = 1;
  }
  if ( !v2->fields.manager )
    goto LABEL_9;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v14 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B170CC(
                                                                 AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo,
                                                                 v10,
                                                                 v11,
                                                                 v12,
                                                                 v13);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v14, 0LL);
  v19 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B170CC(
                                                                   System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                                   v15,
                                                                   v16,
                                                                   v17,
                                                                   v18);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v19,
    (const MethodInfo_21E0CEC *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___66714504);
  v21 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                         BattleEntity,
                                                         -1,
                                                         v20);
  if ( !v19 )
    goto LABEL_9;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v19,
    v21,
    (const MethodInfo_21E1EB0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                         BattleEntity,
                                                         v22);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v19,
    v23,
    (const MethodInfo_21E1EB0 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v19, v14, v24);
  v29 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_B170CC(
                                                                            System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo,
                                                                            v25,
                                                                            v26,
                                                                            v27,
                                                                            v28);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v29,
    (const MethodInfo_21E2FD8 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___66714568);
  v30 = (System_Collections_Generic_IEnumerable_T__o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                         BattleEntity,
                                                         0LL);
  if ( !v29
    || (System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
          v29,
          v30,
          (const MethodInfo_21E419C *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__),
        AssumedEffectExtractLogic__FromTreasureDevice(
          (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v29,
          v14,
          v31),
        !BattleEntity)
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL )
  {
LABEL_9:
    sub_B170D4();
  }
  AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v14, v32);
  AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v14, v34);
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL);
  AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v14, v36);
  return v14;
}
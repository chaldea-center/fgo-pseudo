AssumedBattleAssetSearcherBeforeBattle_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Create(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBase_o *v4; // x19
  const MethodInfo *v5; // x1

  if ( (byte_42EBC7D & 1) == 0 )
  {
    sub_B5D5C4(&AssumedBattleAssetSearcherBeforeBattle_TypeInfo, v1, v2, v3);
    byte_42EBC7D = 1;
  }
  v4 = (AssumedBattleAssetSearcherBase_o *)sub_B5D694(AssumedBattleAssetSearcherBeforeBattle_TypeInfo);
  AssumedBattleAssetSearcherBase___ctor(v4, v5);
  return (AssumedBattleAssetSearcherBeforeBattle_o *)v4;
}


AssumedBattleAssetLoadManager_AnalyzedResultParam_o *__fastcall AssumedBattleAssetSearcherBeforeBattle__Search(
        AssumedBattleAssetSearcherBeforeBattle_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssumedBattleAssetSearcherBeforeBattle_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleEntity_o *BattleEntity; // x20
  AssumedBattleAssetLoadManager_AnalyzedResultParam_o *v24; // x19
  System_Collections_Generic_HashSet_SimpleSkillData__o *v25; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  const MethodInfo *v29; // x2
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *v30; // x21
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x2
  struct BattleInfoData_o *battleInfo; // x8
  const MethodInfo *v34; // x2
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  const MethodInfo *v36; // x2
  int32_t BattleItemObjectId; // w0
  const MethodInfo *v38; // x2

  v4 = this;
  if ( (byte_42EBC7C & 1) == 0 )
  {
    sub_B5D5C4(&AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___68716848, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___68716784, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo, v17, v18, v19);
    this = (AssumedBattleAssetSearcherBeforeBattle_o *)sub_B5D5C4(
                                                         &System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22);
    byte_42EBC7C = 1;
  }
  if ( !v4->fields.manager )
    goto LABEL_10;
  BattleEntity = AssumedBattleAssetLoadManager__GetBattleEntity((AssumedBattleAssetLoadManager_o *)this, method);
  v24 = (AssumedBattleAssetLoadManager_AnalyzedResultParam_o *)sub_B5D694(AssumedBattleAssetLoadManager_AnalyzedResultParam_TypeInfo);
  AssumedBattleAssetLoadManager_AnalyzedResultParam___ctor(v24, 0LL);
  v25 = (System_Collections_Generic_HashSet_SimpleSkillData__o *)sub_B5D694(System_Collections_Generic_HashSet_SimpleSkillData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleSkillData____ctor(
    v25,
    (const MethodInfo_25081E4 *)Method_System_Collections_Generic_HashSet_SimpleSkillData___ctor___68716784);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)AssumedSkillExtractor__EnumerateSvtSimpleSkillData(
                                                       BattleEntity,
                                                       -1,
                                                       v26);
  if ( !v25 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v25,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_25093A8 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  v28 = (System_Collections_Generic_IEnumerable_T__o *)AssumedSkillExtractor__EnumerateCommandCodeSimpleSkillData(
                                                         BattleEntity,
                                                         v27);
  System_Collections_Generic_HashSet_SimpleSkillData___UnionWith(
    v25,
    v28,
    (const MethodInfo_25093A8 *)Method_System_Collections_Generic_HashSet_SimpleSkillData__UnionWith__);
  AssumedEffectExtractLogic__FromSkill((System_Collections_Generic_IEnumerable_SimpleSkillData__o *)v25, v24, v29);
  v30 = (System_Collections_Generic_HashSet_SimpleTreasureDeviceData__o *)sub_B5D694(System_Collections_Generic_HashSet_SimpleTreasureDeviceData__TypeInfo);
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData____ctor(
    v30,
    (const MethodInfo_250A4D0 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData___ctor___68716848);
  this = (AssumedBattleAssetSearcherBeforeBattle_o *)TreasureDeviceExtractor__EnumerateTreasureDeviceData(
                                                       BattleEntity,
                                                       0LL);
  if ( !v30 )
    goto LABEL_10;
  System_Collections_Generic_HashSet_SimpleTreasureDeviceData___UnionWith(
    v30,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_250B694 *)Method_System_Collections_Generic_HashSet_SimpleTreasureDeviceData__UnionWith__);
  AssumedEffectExtractLogic__FromTreasureDevice(
    (System_Collections_Generic_IEnumerable_SimpleTreasureDeviceData__o *)v30,
    v24,
    v31);
  if ( !BattleEntity
    || (battleInfo = BattleEntity->fields.battleInfo) == 0LL
    || (AssumedEffectExtractLogic__FromServant(battleInfo->fields.userSvt, v24, v32),
        AssumedEffectExtractLogic__FromEnemyScript(BattleEntity->fields.battleInfo, v24, v34),
        QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL),
        AssumedEffectExtractLogic__FromQuestPhase(QuestPhaseEntity, v24, v36),
        (this = (AssumedBattleAssetSearcherBeforeBattle_o *)BattleEntity__GetQuestPhaseEntity(BattleEntity, 0LL)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  BattleItemObjectId = QuestPhaseEntity__GetBattleItemObjectId((QuestPhaseEntity_o *)this, 0LL);
  AssumedEffectExtractLogic__FromItem(BattleItemObjectId, v24, v38);
  return v24;
}
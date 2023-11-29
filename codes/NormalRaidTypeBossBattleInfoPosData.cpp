void __fastcall NormalRaidTypeBossBattleInfoPosData___ctor(
        NormalRaidTypeBossBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.existsOtherSkipPos.fields.y = 1112801280LL;
  *(_OWORD *)&this->fields.onlyBossSkipPos.fields.x = xmmword_31351C0;
  BaseBattleInfoPosData___ctor((BaseBattleInfoPosData_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall NormalRaidTypeBossBattleInfoPosData__get_SkillSkipTrLocalPos(
        NormalRaidTypeBossBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  BattlePerformanceEnemy_o *EnemyPerf; // x0
  bool exists; // w0
  __int64 v6; // x8
  __int64 v7; // x10
  __int64 v8; // x9
  float v9; // s1
  float v10; // s0
  float v11; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField || (EnemyPerf = BattlePerformance__get_EnemyPerf(Perf_k__BackingField, 0LL)) == 0LL )
    sub_B170D4();
  exists = BattlePerformanceEnemy__ExistsFieldNormalEnemy(EnemyPerf, 0LL);
  v6 = 24LL;
  v7 = 28LL;
  if ( exists )
    v6 = 36LL;
  v8 = 32LL;
  if ( exists )
    v7 = 40LL;
  if ( exists )
    v8 = 44LL;
  v9 = *(float *)((char *)&this->klass + v7);
  v10 = *(float *)((char *)&this->klass + v6);
  v11 = *(float *)((char *)&this->klass + v8);
  result.fields.z = v11;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}
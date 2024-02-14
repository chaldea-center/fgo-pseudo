void __fastcall NormalRaidTypeBossBattleInfoPosData___ctor(
        NormalRaidTypeBossBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.existsOtherSkipPos.fields.y = 1112801280LL;
  *(_OWORD *)&this->fields.onlyBossSkipPos.fields.x = xmmword_3204650;
  BaseBattleInfoPosData___ctor((BaseBattleInfoPosData_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall NormalRaidTypeBossBattleInfoPosData__get_SkillSkipTrLocalPos(
        NormalRaidTypeBossBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  bool exists; // w0
  __int64 v5; // x8
  __int64 v6; // x10
  __int64 v7; // x9
  float v8; // s1
  float v9; // s0
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (Perf_k__BackingField = (BattlePerformance_o *)BattlePerformance__get_EnemyPerf(Perf_k__BackingField, 0LL)) == 0LL )
  {
    sub_B0D97C(Perf_k__BackingField);
  }
  exists = BattlePerformanceEnemy__ExistsFieldNormalEnemy((BattlePerformanceEnemy_o *)Perf_k__BackingField, 0LL);
  v5 = 24LL;
  v6 = 28LL;
  if ( exists )
    v5 = 36LL;
  v7 = 32LL;
  if ( exists )
    v6 = 40LL;
  if ( exists )
    v7 = 44LL;
  v8 = *(float *)((char *)&this->klass + v6);
  v9 = *(float *)((char *)&this->klass + v5);
  v10 = *(float *)((char *)&this->klass + v7);
  result.fields.z = v10;
  result.fields.y = v8;
  result.fields.x = v9;
  return result;
}
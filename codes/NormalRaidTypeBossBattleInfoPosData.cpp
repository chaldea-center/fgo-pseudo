void __fastcall NormalRaidTypeBossBattleInfoPosData___ctor(
        NormalRaidTypeBossBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  *(_OWORD *)&this->fields.onlyBossSkipPos.fields.x = xmmword_BA38C0;
  *(_QWORD *)&this->fields.existsOtherSkipPos.fields.y = 1112801280LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
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
  float v8; // s2
  float v9; // s1
  float v10; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (Perf_k__BackingField = (BattlePerformance_o *)BattlePerformance__get_EnemyPerf(Perf_k__BackingField, 0LL)) == 0LL )
  {
    sub_1B64ACC(Perf_k__BackingField, method);
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
  v8 = *(float *)((char *)&this->klass + v7);
  v9 = *(float *)((char *)&this->klass + v6);
  v10 = *(float *)((char *)&this->klass + v5);
  result.fields.z = v8;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}
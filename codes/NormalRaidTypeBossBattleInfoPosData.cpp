void NormalRaidTypeBossBattleInfoPosData___ctor(NormalRaidTypeBossBattleInfoPosData_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.onlyBossSkipPos.fields.x = xmmword_E94B30;
  *(_QWORD *)&this->fields.existsOtherSkipPos.fields.y = 1112801280;
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o NormalRaidTypeBossBattleInfoPosData__get_SkillSkipTrLocalPos(
        NormalRaidTypeBossBattleInfoPosData_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  bool exists; // w0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  float v8; // s1
  float v9; // s0
  float v10; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (Perf_k__BackingField = (BattlePerformance_o *)BattlePerformance__get_EnemyPerf(Perf_k__BackingField, 0)) == 0 )
  {
    sub_21FFECC(Perf_k__BackingField, method);
  }
  exists = BattlePerformanceEnemy__ExistsFieldNormalEnemy((BattlePerformanceEnemy_o *)Perf_k__BackingField, 0);
  v5 = 24;
  if ( exists )
  {
    v5 = 36;
    v6 = 40;
  }
  else
  {
    v6 = 28;
  }
  if ( exists )
    v7 = 44;
  else
    v7 = 32;
  v8 = *(float *)((char *)&this->klass + v6);
  v9 = *(float *)((char *)&this->klass + v5);
  v10 = *(float *)((char *)&this->klass + v7);
  result.fields.z = v10;
  result.fields.y = v8;
  result.fields.x = v9;
  return result;
}
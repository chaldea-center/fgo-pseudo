void __fastcall PosCountSpBattleInfoPosData___ctor(PosCountSpBattleInfoPosData_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.onlyBackRowSkipPos.fields.y = 1127153664LL;
  *(_OWORD *)&this->fields.existsFrontRowSkipPos.fields.x = xmmword_3134DA0;
  BaseBattleInfoPosData___ctor((BaseBattleInfoPosData_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall PosCountSpBattleInfoPosData__get_SkillSkipTrLocalPos(
        PosCountSpBattleInfoPosData_o *this,
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
  exists = BattlePerformanceEnemy__ExistsFrontRow(EnemyPerf, 0LL);
  v6 = 36LL;
  v7 = 40LL;
  if ( exists )
    v6 = 24LL;
  v8 = 44LL;
  if ( exists )
    v7 = 28LL;
  if ( exists )
    v8 = 32LL;
  v9 = *(float *)((char *)&this->klass + v7);
  v10 = *(float *)((char *)&this->klass + v6);
  v11 = *(float *)((char *)&this->klass + v8);
  result.fields.z = v11;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}
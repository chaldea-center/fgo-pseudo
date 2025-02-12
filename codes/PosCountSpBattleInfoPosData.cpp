void __fastcall PosCountSpBattleInfoPosData___ctor(PosCountSpBattleInfoPosData_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.existsFrontRowSkipPos.fields.x = xmmword_BF6840;
  *(_QWORD *)&this->fields.onlyBackRowSkipPos.fields.y = 1127153664LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall PosCountSpBattleInfoPosData__get_SkillSkipTrLocalPos(
        PosCountSpBattleInfoPosData_o *this,
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
    sub_1C13F80(Perf_k__BackingField, method);
  }
  exists = BattlePerformanceEnemy__ExistsFrontRow((BattlePerformanceEnemy_o *)Perf_k__BackingField, 0LL);
  v5 = 36LL;
  v6 = 40LL;
  if ( exists )
    v5 = 24LL;
  v7 = 44LL;
  if ( exists )
    v6 = 28LL;
  if ( exists )
    v7 = 32LL;
  v8 = *(float *)((char *)&this->klass + v7);
  v9 = *(float *)((char *)&this->klass + v6);
  v10 = *(float *)((char *)&this->klass + v5);
  result.fields.z = v8;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}
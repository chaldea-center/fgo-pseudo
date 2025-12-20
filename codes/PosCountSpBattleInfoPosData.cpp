void PosCountSpBattleInfoPosData___ctor(PosCountSpBattleInfoPosData_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.existsFrontRowSkipPos.fields.x = xmmword_CFEE70;
  *(_QWORD *)&this->fields.onlyBackRowSkipPos.fields.y = 1127153664;
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_o PosCountSpBattleInfoPosData__get_SkillSkipTrLocalPos(
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
    || (Perf_k__BackingField = (BattlePerformance_o *)BattlePerformance__get_EnemyPerf(Perf_k__BackingField, 0)) == 0 )
  {
    sub_1C942F0(Perf_k__BackingField, method);
  }
  exists = BattlePerformanceEnemy__ExistsFrontRow((BattlePerformanceEnemy_o *)Perf_k__BackingField, method);
  v5 = 36;
  v6 = 40;
  if ( exists )
    v5 = 24;
  v7 = 44;
  if ( exists )
  {
    v6 = 28;
    v7 = 32;
  }
  v8 = *(float *)((char *)&this->klass + v7);
  v9 = *(float *)((char *)&this->klass + v6);
  v10 = *(float *)((char *)&this->klass + v5);
  result.fields.z = v8;
  result.fields.y = v9;
  result.fields.x = v10;
  return result;
}
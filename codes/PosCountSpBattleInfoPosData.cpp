void PosCountSpBattleInfoPosData___ctor(PosCountSpBattleInfoPosData_o *this, const MethodInfo *method)
{
  *(_OWORD *)&this->fields.existsFrontRowSkipPos.fields.x = xmmword_E9D540;
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
  __int64 v6; // x9
  __int64 v7; // x10
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (Perf_k__BackingField = (BattlePerformance_o *)BattlePerformance__get_EnemyPerf(Perf_k__BackingField, 0)) == 0 )
  {
    sub_2213CDC(Perf_k__BackingField, method);
  }
  exists = BattlePerformanceEnemy__ExistsFrontRow((BattlePerformanceEnemy_o *)Perf_k__BackingField, 0);
  v5 = 36;
  if ( exists )
  {
    v5 = 24;
    v6 = 28;
  }
  else
  {
    v6 = 40;
  }
  if ( exists )
    v7 = 32;
  else
    v7 = 44;
  result.fields.y = *(float *)((char *)&this->klass + v6);
  result.fields.x = *(float *)((char *)&this->klass + v5);
  result.fields.z = *(float *)((char *)&this->klass + v7);
  return result;
}
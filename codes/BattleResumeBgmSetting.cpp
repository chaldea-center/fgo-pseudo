void BattleResumeBgmSetting___ctor(BattleResumeBgmSetting_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleResumeBgmSetting__GetFixedBgmId(
        BattleResumeBgmSetting_o *this,
        bool useResumeBgm,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 16;
  if ( useResumeBgm )
    v3 = 20;
  return *(_DWORD *)((char *)&this->klass + v3);
}
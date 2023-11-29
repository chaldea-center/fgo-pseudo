void __fastcall BattleMasterSkillWindowComponent___ctor(
        BattleMasterSkillWindowComponent_o *this,
        const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleMasterSkillWindowComponent__setInitData(
        BattleMasterSkillWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  BattleWindowComponent__setInitialPosIfDefaultIsZero((BattleWindowComponent_o *)this, 0LL);
  BattleWindowComponent__setInitDataWithoutInitPos((BattleWindowComponent_o *)this, type, time, ocflg, 0LL);
}
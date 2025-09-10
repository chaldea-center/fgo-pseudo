void BattleMasterSkillWindowComponent___ctor(BattleMasterSkillWindowComponent_o *this, const MethodInfo *method)
{
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleMasterSkillWindowComponent__setInitData(
        BattleMasterSkillWindowComponent_o *this,
        int32_t type,
        float time,
        bool ocflg,
        const MethodInfo *method)
{
  BattleWindowComponent__setInitialPosIfDefaultIsZero((BattleWindowComponent_o *)this, 0);
  BattleWindowComponent__setInitDataWithoutInitPos((BattleWindowComponent_o *)this, type, time, ocflg, 0);
}
void __fastcall PlayFieldMotionBattleLogicTask___ctor(
        PlayFieldMotionBattleLogicTask_o *this,
        System_String_o *motionName,
        bool isForcedSpeedOne,
        const MethodInfo *method)
{
  PlayFieldMotionBattleLogicTask_o *v5; // x20
  bool v6; // w21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v5 = this;
  v6 = isForcedSpeedOne;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)motionName);
  v5->fields.motionName = motionName;
  v5 = (PlayFieldMotionBattleLogicTask_o *)((char *)v5 + 120);
  *(_DWORD *)&v5[-1].fields.isCanCounterTask = 44;
  sub_1BE4A70((PartyOrganizationUtility_o *)v5, (int64_t)motionName, v7, v8, v9, v10, v11, v12);
  LOBYTE(v5->fields.command) = v6;
}
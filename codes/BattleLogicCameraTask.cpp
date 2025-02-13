void __fastcall BattleLogicCameraTask___ctor(
        BattleLogicCameraTask_o *this,
        System_String_o *cameraName,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  v4 = (PartyOrganizationUtility_o *)this;
  BattleLogicTask___ctor((BattleLogicTask_o *)this, (const MethodInfo *)cameraName);
  v4->fields.temporaryPartyInfo = (struct PartyOrganizationUtility_TemporaryPartyInfo_o *)cameraName;
  v4 = (PartyOrganizationUtility_o *)((char *)v4 + 144);
  LODWORD(v4[-1].fields._PartyItem_k__BackingField) = 27;
  sub_1C21DDC(v4, (int64_t)cameraName, v5, v6, v7, v8, v9, v10);
}
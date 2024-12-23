void __fastcall SkillValueUpApplierBase___ctor(
        SkillValueUpApplierBase_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.data = data;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)data, v5, v6, v7, v8, v9, v10);
}


void __fastcall SkillValueUpApplierBase__Init(SkillValueUpApplierBase_o *this, const MethodInfo *method)
{
  ;
}
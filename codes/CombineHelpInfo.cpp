void __fastcall CombineHelpInfo___ctor(
        CombineHelpInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        int32_t line,
        const MethodInfo *method)
{
  CombineHelpInfo_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.kind = kind;
  v10->fields.textCode = textCode;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v10->fields.textCode, (int64_t)textCode, v11, v12, v13, v14, v15, v16);
  v10->fields.imageName = imageName;
  v10 = (CombineHelpInfo_o *)((char *)v10 + 32);
  sub_1C2E0D0((PartyOrganizationUtility_o *)v10, (int64_t)imageName, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = line;
}
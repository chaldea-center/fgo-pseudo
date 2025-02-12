void __fastcall AssetDataListInfo___ctor(AssetDataListInfo_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  void *v11; // x1
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  void *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BC6B00 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_AssetData___ctor__, method);
    sub_1C1ABD4(&System_Collections_Generic_List_AssetData__TypeInfo, v9);
    sub_1C1ABD4(&StringLiteral_1/*""*/, v10);
    byte_4BC6B00 = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields.masterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields, (int64_t)v11, v2, v3, v4, v5, v6, v7);
  v12 = StringLiteral_1/*""*/;
  this->fields.dateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dateVersion, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_1/*""*/;
  this->fields.buildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.buildVersion, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.dataList = (struct System_Collections_Generic_List_AssetData__o *)v26;
  sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.dataList, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
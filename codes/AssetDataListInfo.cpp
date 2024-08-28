void __fastcall AssetDataListInfo___ctor(AssetDataListInfo_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A07D0B & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_List_AssetData___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_List_AssetData__TypeInfo, v5);
    sub_1B686D4(&StringLiteral_1/*""*/, v6);
    byte_4A07D0B = 1;
  }
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.masterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, v7, v2, v3);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.dateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.dateVersion, v8, v9, v10);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.buildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.buildVersion, v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.dataList = (struct System_Collections_Generic_List_AssetData__o *)v14;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields.dataList, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
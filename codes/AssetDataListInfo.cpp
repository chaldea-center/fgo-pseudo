void __fastcall AssetDataListInfo___ctor(AssetDataListInfo_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_438A9C0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_B775C4(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438A9C0 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.masterVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.dateVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.dateVersion, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.buildVersion = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.buildVersion, v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.dataList = (struct System_Collections_Generic_List_AssetData__o *)v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.dataList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}
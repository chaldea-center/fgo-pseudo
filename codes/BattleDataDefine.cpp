void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  BattleDataDefine_c *v5; // x8
  System_Int32_array **v6; // x0
  struct BattleDataDefine_StaticFields *static_fields; // x8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattleDataDefine_StaticFields *v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleDataDefine_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4186838 & 1) == 0 )
  {
    sub_B2C35C(&BattleDataDefine_TypeInfo, v1);
    sub_B2C35C(&int___TypeInfo, v2);
    sub_B2C35C(&StringLiteral_2755/*"Battle/Common"*/, v3);
    sub_B2C35C(&StringLiteral_2753/*"Battle/20220731"*/, v4);
    byte_4186838 = 1;
  }
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_ATK_RATE_PRIORITY = 1;
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY = 1000;
  v5 = BattleDataDefine_TypeInfo;
  BattleDataDefine_TypeInfo->static_fields->PERCENTAGE_DENOMINATOR = 100.0;
  v5->static_fields->PERMILLAGE_DENOMINATOR = 1000.0;
  v5->static_fields->PERMILLAGE_DENOMINATOR_INT = 1000;
  v5->static_fields->CRITICAL_HIT_RANDOM_MAX = 1000;
  v5->static_fields->COMMAND_CARD_NUM_TO_SELECT = 3;
  v5->static_fields->ASSET_PARALLEL_LOAD_MAX = 3;
  v6 = (System_Int32_array **)sub_B2C374(int___TypeInfo, 1LL);
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  static_fields->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v6;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->NO_INDIVIDUALITY_ARRAY, v6, v8, v9, v10, v11, v12, v13);
  v14 = BattleDataDefine_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_2755/*"Battle/Common"*/;
  v14->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_2755/*"Battle/Common"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v14->ASSET_BATTLE_COMMON, v15, v16, v17, v18, v19, v20, v21);
  v22 = BattleDataDefine_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_2753/*"Battle/20220731"*/;
  v22->ASSET_PATH_20220731 = (struct System_String_o *)StringLiteral_2753/*"Battle/20220731"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v22->ASSET_PATH_20220731, v23, v24, v25, v26, v27, v28, v29);
}


bool __fastcall BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0LL);
}
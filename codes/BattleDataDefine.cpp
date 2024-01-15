void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleDataDefine_c *v10; // x8
  struct BattleDataDefine_StaticFields *static_fields; // x0
  System_Int32_array **v12; // x1
  struct BattleDataDefine_StaticFields *v13; // x0
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F8C67 & 1) == 0 )
  {
    sub_B16FFC(&BattleDataDefine_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2743/*"Battle/Common"*/, v8);
    sub_B16FFC(&StringLiteral_2741/*"Battle/20220731"*/, v9);
    byte_40F8C67 = 1;
  }
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_ATK_RATE_PRIORITY = 1;
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY = 1000;
  v10 = BattleDataDefine_TypeInfo;
  BattleDataDefine_TypeInfo->static_fields->PERCENTAGE_DENOMINATOR = 100.0;
  v10->static_fields->PERMILLAGE_DENOMINATOR = 1000.0;
  v10->static_fields->PERMILLAGE_DENOMINATOR_INT = 1000;
  v10->static_fields->CRITICAL_HIT_RANDOM_MAX = 1000;
  v10->static_fields->COMMAND_CARD_NUM_TO_SELECT = 3;
  v10->static_fields->ASSET_PARALLEL_LOAD_MAX = 3;
  static_fields = v10->static_fields;
  v12 = (System_Int32_array **)StringLiteral_2743/*"Battle/Common"*/;
  static_fields->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_2743/*"Battle/Common"*/;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->ASSET_BATTLE_COMMON, v12, v2, v3, v4, v5, v6, v7);
  v13 = BattleDataDefine_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_2741/*"Battle/20220731"*/;
  v13->ASSET_PATH_20220731 = (struct System_String_o *)StringLiteral_2741/*"Battle/20220731"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v13->ASSET_PATH_20220731, v14, v15, v16, v17, v18, v19, v20);
}


bool __fastcall BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0LL);
}
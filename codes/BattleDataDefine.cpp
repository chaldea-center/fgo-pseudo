void __fastcall BattleDataDefine___cctor(const MethodInfo *method)
{
  BattleDataDefine_c *v1; // x8
  System_Int32_array **v2; // x0
  struct BattleDataDefine_StaticFields *static_fields; // x8
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct BattleDataDefine_StaticFields *v10; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_42AEC76 & 1) == 0 )
  {
    sub_B52984(&BattleDataDefine_TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&StringLiteral_2786/*"Battle/Common"*/);
    byte_42AEC76 = 1;
  }
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_ATK_RATE_PRIORITY = 1;
  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY = 1000;
  v1 = BattleDataDefine_TypeInfo;
  BattleDataDefine_TypeInfo->static_fields->PERCENTAGE_DENOMINATOR = 100.0;
  v1->static_fields->PERMILLAGE_DENOMINATOR = 1000.0;
  v1->static_fields->PERMILLAGE_DENOMINATOR_INT = 1000;
  v1->static_fields->CRITICAL_HIT_RANDOM_MAX = 1000;
  v1->static_fields->COMMAND_CARD_NUM_TO_SELECT = 3;
  v1->static_fields->ASSET_PARALLEL_LOAD_MAX = 3;
  v2 = (System_Int32_array **)sub_B5299C(int___TypeInfo, 1LL);
  static_fields = BattleDataDefine_TypeInfo->static_fields;
  static_fields->NO_INDIVIDUALITY_ARRAY = (struct System_Int32_array *)v2;
  sub_B52920((BattleServantConfConponent_o *)&static_fields->NO_INDIVIDUALITY_ARRAY, v2, v4, v5, v6, v7, v8, v9);
  v10 = BattleDataDefine_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_2786/*"Battle/Common"*/;
  v10->ASSET_BATTLE_COMMON = (struct System_String_o *)StringLiteral_2786/*"Battle/Common"*/;
  sub_B52920((BattleServantConfConponent_o *)&v10->ASSET_BATTLE_COMMON, v11, v12, v13, v14, v15, v16, v17);
}


bool __fastcall BattleDataDefine__IsHighTimeScale(float value, const MethodInfo *method)
{
  return BasicHelper__NearbyOrGreaterThan(value, 2.0, 0LL);
}
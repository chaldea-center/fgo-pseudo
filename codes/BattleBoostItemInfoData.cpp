void __fastcall BattleBoostItemInfoData___cctor(const MethodInfo *method)
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
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct BattleBoostItemInfoData_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4217DE1 & 1) == 0 )
  {
    sub_B0D8A4(&BattleBoostItemInfoData_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_2593/*"BOOST_EFFECT_ICON"*/, v8);
    sub_B0D8A4(&StringLiteral_2594/*"BOOST_EFFECT_TIMING"*/, v9);
    byte_4217DE1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleBoostItemInfoData_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_2593/*"BOOST_EFFECT_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2593/*"BOOST_EFFECT_ICON"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = BattleBoostItemInfoData_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_2594/*"BOOST_EFFECT_TIMING"*/;
  v12->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_2594/*"BOOST_EFFECT_TIMING"*/;
  sub_B0D840((BattleServantConfConponent_o *)&v12->KEY_SCRIPT_BOOST_EFFECT_TIMING, v13, v14, v15, v16, v17, v18, v19);
}


void __fastcall BattleBoostItemInfoData___ctor(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBoostItemInfoData__checkEffectTiming(
        BattleBoostItemInfoData_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  ItemEntity_o *boostItemEntity; // x20
  BattleBoostItemInfoData_c *v6; // x0

  if ( (byte_4217DDD & 1) == 0 )
  {
    sub_B0D8A4(&BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing);
    byte_4217DDD = 1;
  }
  boostItemEntity = this->fields.boostItemEntity;
  v6 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B0D97C(v6);
  return ItemEntity__getScript(
           boostItemEntity,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
           0,
           0LL) == timing;
}


int32_t __fastcall BattleBoostItemInfoData__effectIconAtlasImageId(
        BattleBoostItemInfoData_o *this,
        const MethodInfo *method)
{
  ItemEntity_o *boostItemEntity; // x19
  BattleBoostItemInfoData_c *v4; // x0

  if ( (byte_4217DDF & 1) == 0 )
  {
    sub_B0D8A4(&BattleBoostItemInfoData_TypeInfo, method);
    byte_4217DDF = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  boostItemEntity = this->fields.boostItemEntity;
  v4 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B0D97C(v4);
  return ItemEntity__getScript(
           boostItemEntity,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON,
           0,
           0LL);
}


System_String_o *__fastcall BattleBoostItemInfoData__infoMessage(
        BattleBoostItemInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_4217DE0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4217DE0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
}


bool __fastcall BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  ItemEntity_o *boostItemEntity; // x19
  BattleBoostItemInfoData_c *v4; // x0

  if ( (byte_4217DDE & 1) == 0 )
  {
    sub_B0D8A4(&BattleBoostItemInfoData_TypeInfo, method);
    byte_4217DDE = 1;
  }
  boostItemEntity = this->fields.boostItemEntity;
  v4 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B0D97C(v4);
  return ItemEntity__getScript(
           boostItemEntity,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON,
           0,
           0LL) != 0;
}
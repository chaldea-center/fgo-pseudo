void __fastcall BattleBoostItemInfoData___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct BattleBoostItemInfoData_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438EB43 & 1) == 0 )
  {
    sub_B775C4(&BattleBoostItemInfoData_TypeInfo);
    sub_B775C4(&StringLiteral_2690/*"BOOST_EFFECT_ICON"*/);
    sub_B775C4(&StringLiteral_2691/*"BOOST_EFFECT_TIMING"*/);
    byte_438EB43 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleBoostItemInfoData_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_2690/*"BOOST_EFFECT_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2690/*"BOOST_EFFECT_ICON"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = BattleBoostItemInfoData_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_2691/*"BOOST_EFFECT_TIMING"*/;
  v9->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_2691/*"BOOST_EFFECT_TIMING"*/;
  sub_B77560((BattleServantConfConponent_o *)&v9->KEY_SCRIPT_BOOST_EFFECT_TIMING, v10, v11, v12, v13, v14, v15, v16);
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

  if ( (byte_438EB3F & 1) == 0 )
  {
    sub_B775C4(&BattleBoostItemInfoData_TypeInfo);
    byte_438EB3F = 1;
  }
  boostItemEntity = this->fields.boostItemEntity;
  v6 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B7769C(v6, *(_QWORD *)&timing);
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
  __int64 v3; // x1
  ItemEntity_o *boostItemEntity; // x19
  BattleBoostItemInfoData_c *v5; // x0

  if ( (byte_438EB41 & 1) == 0 )
  {
    sub_B775C4(&BattleBoostItemInfoData_TypeInfo);
    byte_438EB41 = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  boostItemEntity = this->fields.boostItemEntity;
  v5 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B7769C(v5, v3);
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_438EB42 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438EB42 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
}


bool __fastcall BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  ItemEntity_o *boostItemEntity; // x19
  BattleBoostItemInfoData_c *v4; // x0

  if ( (byte_438EB40 & 1) == 0 )
  {
    sub_B775C4(&BattleBoostItemInfoData_TypeInfo);
    byte_438EB40 = 1;
  }
  boostItemEntity = this->fields.boostItemEntity;
  v4 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B7769C(v4, method);
  return ItemEntity__getScript(
           boostItemEntity,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON,
           0,
           0LL) != 0;
}
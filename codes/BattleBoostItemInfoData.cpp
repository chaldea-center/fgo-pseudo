void __fastcall BattleBoostItemInfoData___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v15; // x1
  struct BattleBoostItemInfoData_StaticFields *v16; // x0
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42EC108 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBoostItemInfoData_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_2636/*"BOOST_EFFECT_ICON"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_2637/*"BOOST_EFFECT_TIMING"*/, v11, v12, v13);
    byte_42EC108 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattleBoostItemInfoData_TypeInfo->static_fields;
  v15 = (System_Int32_array **)StringLiteral_2636/*"BOOST_EFFECT_ICON"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_2636/*"BOOST_EFFECT_ICON"*/;
  sub_B5D560(static_fields, v15, v2, v3, v4, v5, v6, v7);
  v16 = BattleBoostItemInfoData_TypeInfo->static_fields;
  v17 = (System_Int32_array **)StringLiteral_2637/*"BOOST_EFFECT_TIMING"*/;
  v16->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_2637/*"BOOST_EFFECT_TIMING"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v16->KEY_SCRIPT_BOOST_EFFECT_TIMING, v17, v18, v19, v20, v21, v22, v23);
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
  __int64 v3; // x3
  ItemEntity_o *boostItemEntity; // x20
  BattleBoostItemInfoData_c *v7; // x0

  if ( (byte_42EC104 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBoostItemInfoData_TypeInfo, timing, (_DWORD)method, v3);
    byte_42EC104 = 1;
  }
  boostItemEntity = this->fields.boostItemEntity;
  v7 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B5D69C(v7, *(_QWORD *)&timing);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  ItemEntity_o *boostItemEntity; // x19
  BattleBoostItemInfoData_c *v7; // x0

  if ( (byte_42EC106 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBoostItemInfoData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC106 = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  boostItemEntity = this->fields.boostItemEntity;
  v7 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B5D69C(v7, v5);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42EC107 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SkillMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42EC107 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              Instance,
                                                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (DataManager_o *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                      this,
                                      this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_WarQuestSelectionMaster)
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      MasterData_WarQuestSelectionMaster,
                                      (int32_t)Instance,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
}


bool __fastcall BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ItemEntity_o *boostItemEntity; // x19
  BattleBoostItemInfoData_c *v6; // x0

  if ( (byte_42EC105 & 1) == 0 )
  {
    sub_B5D5C4(&BattleBoostItemInfoData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EC105 = 1;
  }
  boostItemEntity = this->fields.boostItemEntity;
  v6 = BattleBoostItemInfoData_TypeInfo;
  if ( (BYTE3(BattleBoostItemInfoData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  }
  if ( !boostItemEntity )
    sub_B5D69C(v6, method);
  return ItemEntity__getScript(
           boostItemEntity,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON,
           0,
           0LL) != 0;
}
void BattleBoostItemInfoData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct BattleBoostItemInfoData_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C39FB2 & 1) == 0 )
  {
    sub_1C32C20(&BattleBoostItemInfoData_TypeInfo);
    sub_1C32C20(&StringLiteral_2957/*"BOOST_EFFECT_ICON"*/);
    sub_1C32C20(&StringLiteral_2958/*"BOOST_EFFECT_TIMING"*/);
    byte_4C39FB2 = 1;
  }
  BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON = (struct System_String_o *)StringLiteral_2957/*"BOOST_EFFECT_ICON"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleBoostItemInfoData_TypeInfo->static_fields, StringLiteral_2957/*"BOOST_EFFECT_ICON"*/, v1, v2);
  v3 = StringLiteral_2958/*"BOOST_EFFECT_TIMING"*/;
  static_fields = BattleBoostItemInfoData_TypeInfo->static_fields;
  static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_2958/*"BOOST_EFFECT_TIMING"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING, v3, v5, v6);
}


void BattleBoostItemInfoData___ctor(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0);
}


bool BattleBoostItemInfoData__checkEffectTiming(
        BattleBoostItemInfoData_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v5; // x0
  ItemEntity_o *v6; // x20

  if ( (byte_4C39FAE & 1) == 0 )
  {
    sub_1C32C20(&BattleBoostItemInfoData_TypeInfo);
    byte_4C39FAE = 1;
  }
  v5 = BattleBoostItemInfoData_TypeInfo;
  v6 = *(ItemEntity_o **)&this->fields.effectTiming;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !v6 )
    sub_1C32E7C(v5);
  return ItemEntity__getScript(
           v6,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
           0,
           0) == timing;
}


int32_t BattleBoostItemInfoData__effectIconAtlasImageId(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  ItemEntity_o *v3; // x19
  BattleBoostItemInfoData_c *v4; // x0

  if ( (byte_4C39FB0 & 1) == 0 )
  {
    sub_1C32C20(&BattleBoostItemInfoData_TypeInfo);
    byte_4C39FB0 = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  v3 = *(ItemEntity_o **)&this->fields.effectTiming;
  v4 = BattleBoostItemInfoData_TypeInfo;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !v3 )
    sub_1C32E7C(v4);
  return ItemEntity__getScript(v3, BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON, 0, 0);
}


System_String_o *BattleBoostItemInfoData__infoMessage(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C39FB1 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C32C20(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C39FB1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3396838 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
    sub_1C32E7C(Instance);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0);
}


bool BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v3; // x0
  ItemEntity_o *v4; // x19

  if ( (byte_4C39FAF & 1) == 0 )
  {
    sub_1C32C20(&BattleBoostItemInfoData_TypeInfo);
    byte_4C39FAF = 1;
  }
  v3 = BattleBoostItemInfoData_TypeInfo;
  v4 = *(ItemEntity_o **)&this->fields.effectTiming;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !v4 )
    sub_1C32E7C(v3);
  return ItemEntity__getScript(v4, BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON, 0, 0) != 0;
}
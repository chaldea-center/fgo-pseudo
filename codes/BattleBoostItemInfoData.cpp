void __fastcall BattleBoostItemInfoData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct BattleBoostItemInfoData_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5D402 & 1) == 0 )
  {
    sub_1B885B0(&BattleBoostItemInfoData_TypeInfo);
    sub_1B885B0(&StringLiteral_3060/*"BOOST_EFFECT_ICON"*/);
    sub_1B885B0(&StringLiteral_3061/*"BOOST_EFFECT_TIMING"*/);
    byte_4A5D402 = 1;
  }
  BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON = (struct System_String_o *)StringLiteral_3060/*"BOOST_EFFECT_ICON"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleBoostItemInfoData_TypeInfo->static_fields,
    StringLiteral_3060/*"BOOST_EFFECT_ICON"*/,
    v1,
    v2);
  v3 = StringLiteral_3061/*"BOOST_EFFECT_TIMING"*/;
  static_fields = BattleBoostItemInfoData_TypeInfo->static_fields;
  static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_3061/*"BOOST_EFFECT_TIMING"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING, v3, v5, v6);
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
  BattleBoostItemInfoData_c *v5; // x0
  ItemEntity_o *boostItemEntity; // x20

  if ( (byte_4A5D3FE & 1) == 0 )
  {
    sub_1B885B0(&BattleBoostItemInfoData_TypeInfo);
    byte_4A5D3FE = 1;
  }
  v5 = BattleBoostItemInfoData_TypeInfo;
  boostItemEntity = this->fields.boostItemEntity;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !boostItemEntity )
    sub_1B8880C(v5, *(_QWORD *)&timing);
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

  if ( (byte_4A5D400 & 1) == 0 )
  {
    sub_1B885B0(&BattleBoostItemInfoData_TypeInfo);
    byte_4A5D400 = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  boostItemEntity = this->fields.boostItemEntity;
  v5 = BattleBoostItemInfoData_TypeInfo;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !boostItemEntity )
    sub_1B8880C(v5, v3);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A5D401 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D401 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
}


bool __fastcall BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v3; // x0
  ItemEntity_o *boostItemEntity; // x19

  if ( (byte_4A5D3FF & 1) == 0 )
  {
    sub_1B885B0(&BattleBoostItemInfoData_TypeInfo);
    byte_4A5D3FF = 1;
  }
  v3 = BattleBoostItemInfoData_TypeInfo;
  boostItemEntity = this->fields.boostItemEntity;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !boostItemEntity )
    sub_1B8880C(v3, method);
  return ItemEntity__getScript(
           boostItemEntity,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON,
           0,
           0LL) != 0;
}
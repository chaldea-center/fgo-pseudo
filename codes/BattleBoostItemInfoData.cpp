void BattleBoostItemInfoData___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct BattleBoostItemInfoData_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593AF49 & 1) == 0 )
  {
    sub_21FFC50(&BattleBoostItemInfoData_TypeInfo);
    sub_21FFC50(&StringLiteral_3076/*"BOOST_EFFECT_ICON"*/);
    sub_21FFC50(&StringLiteral_3077/*"BOOST_EFFECT_TIMING"*/);
    byte_593AF49 = 1;
  }
  v7 = StringLiteral_3076/*"BOOST_EFFECT_ICON"*/;
  BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON = (struct System_String_o *)StringLiteral_3076/*"BOOST_EFFECT_ICON"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleBoostItemInfoData_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_3077/*"BOOST_EFFECT_TIMING"*/;
  static_fields = BattleBoostItemInfoData_TypeInfo->static_fields;
  static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_3077/*"BOOST_EFFECT_TIMING"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void BattleBoostItemInfoData___ctor(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  BattleSkillInfoData___ctor((BattleSkillInfoData_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleBoostItemInfoData__checkEffectTiming(
        BattleBoostItemInfoData_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v5; // x0
  ItemEntity_o *v6; // x20

  if ( (byte_593AF45 & 1) == 0 )
  {
    sub_21FFC50(&BattleBoostItemInfoData_TypeInfo);
    byte_593AF45 = 1;
  }
  v5 = BattleBoostItemInfoData_TypeInfo;
  v6 = *(ItemEntity_o **)&this->fields.effectTiming;
  if ( !*(&BattleBoostItemInfoData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing);
  if ( !v6 )
    sub_21FFECC(v5, *(_QWORD *)&timing);
  return ItemEntity__getScript(
           v6,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
           0,
           0) == timing;
}


int32_t BattleBoostItemInfoData__effectIconAtlasImageId(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ItemEntity_o *v4; // x19
  BattleBoostItemInfoData_c *v5; // x0

  if ( (byte_593AF47 & 1) == 0 )
  {
    sub_21FFC50(&BattleBoostItemInfoData_TypeInfo);
    byte_593AF47 = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  v4 = *(ItemEntity_o **)&this->fields.effectTiming;
  v5 = BattleBoostItemInfoData_TypeInfo;
  if ( !*(&BattleBoostItemInfoData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo, v3);
  if ( !v4 )
    sub_21FFECC(v5, v3);
  return ItemEntity__getScript(v4, BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON, 0, 0);
}


System_String_o *BattleBoostItemInfoData__infoMessage(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_593AF48 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593AF48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, const MethodInfo *))this->klass->vtable._5_get_skillId.methodPtr)(
                                     this,
                                     this->klass->vtable._5_get_skillId.method),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0);
}


bool BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v3; // x0
  ItemEntity_o *v4; // x19

  if ( (byte_593AF46 & 1) == 0 )
  {
    sub_21FFC50(&BattleBoostItemInfoData_TypeInfo);
    byte_593AF46 = 1;
  }
  v3 = BattleBoostItemInfoData_TypeInfo;
  v4 = *(ItemEntity_o **)&this->fields.effectTiming;
  if ( !*(&BattleBoostItemInfoData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo, method);
  if ( !v4 )
    sub_21FFECC(v3, method);
  return ItemEntity__getScript(v4, BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON, 0, 0) != 0;
}
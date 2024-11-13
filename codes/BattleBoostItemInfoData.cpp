void __fastcall BattleBoostItemInfoData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t v12; // x1
  struct BattleBoostItemInfoData_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B184D8 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBoostItemInfoData_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3082/*"BOOST_EFFECT_ICON"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3083/*"BOOST_EFFECT_TIMING"*/, v10, v11);
    byte_4B184D8 = 1;
  }
  BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON = (struct System_String_o *)StringLiteral_3082/*"BOOST_EFFECT_ICON"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleBoostItemInfoData_TypeInfo->static_fields,
    StringLiteral_3082/*"BOOST_EFFECT_ICON"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_3083/*"BOOST_EFFECT_TIMING"*/;
  static_fields = BattleBoostItemInfoData_TypeInfo->static_fields;
  static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_3083/*"BOOST_EFFECT_TIMING"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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

  if ( (byte_4B184D4 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing, method);
    byte_4B184D4 = 1;
  }
  v5 = BattleBoostItemInfoData_TypeInfo;
  boostItemEntity = this->fields.boostItemEntity;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing);
  if ( !boostItemEntity )
    sub_1BCAA3C(v5, *(_QWORD *)&timing);
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
  __int64 v2; // x2
  __int64 v4; // x1
  ItemEntity_o *boostItemEntity; // x19
  BattleBoostItemInfoData_c *v6; // x0

  if ( (byte_4B184D6 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBoostItemInfoData_TypeInfo, method, v2);
    byte_4B184D6 = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  boostItemEntity = this->fields.boostItemEntity;
  v6 = BattleBoostItemInfoData_TypeInfo;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo, v4);
  if ( !boostItemEntity )
    sub_1BCAA3C(v6, v4);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B184D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B184D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
}


bool __fastcall BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleBoostItemInfoData_c *v4; // x0
  ItemEntity_o *boostItemEntity; // x19

  if ( (byte_4B184D5 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBoostItemInfoData_TypeInfo, method, v2);
    byte_4B184D5 = 1;
  }
  v4 = BattleBoostItemInfoData_TypeInfo;
  boostItemEntity = this->fields.boostItemEntity;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo, method);
  if ( !boostItemEntity )
    sub_1BCAA3C(v4, method);
  return ItemEntity__getScript(
           boostItemEntity,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON,
           0,
           0LL) != 0;
}
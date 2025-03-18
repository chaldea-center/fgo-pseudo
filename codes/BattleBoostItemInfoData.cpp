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
  __int64 v9; // x1
  int64_t v10; // x1
  struct BattleBoostItemInfoData_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C24369 & 1) == 0 )
  {
    sub_1C3B764(&BattleBoostItemInfoData_TypeInfo, v1);
    sub_1C3B764(&StringLiteral_3092/*"Basic"*/, v8);
    sub_1C3B764(&StringLiteral_3093/*"Basic "*/, v9);
    byte_4C24369 = 1;
  }
  BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON = (struct System_String_o *)StringLiteral_3092/*"Basic"*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattleBoostItemInfoData_TypeInfo->static_fields,
    StringLiteral_3092/*"Basic"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = StringLiteral_3093/*"Basic "*/;
  static_fields = BattleBoostItemInfoData_TypeInfo->static_fields;
  static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING = (struct System_String_o *)StringLiteral_3093/*"Basic "*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
    v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  ItemEntity_o *v6; // x20

  if ( (byte_4C24365 & 1) == 0 )
  {
    sub_1C3B764(&BattleBoostItemInfoData_TypeInfo, *(_QWORD *)&timing);
    byte_4C24365 = 1;
  }
  v5 = BattleBoostItemInfoData_TypeInfo;
  v6 = *(ItemEntity_o **)&this->fields.effectTiming;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !v6 )
    sub_1C3B9C0(v5, *(_QWORD *)&timing);
  return ItemEntity__getScript(
           v6,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_TIMING,
           0,
           0LL) == timing;
}


int32_t __fastcall BattleBoostItemInfoData__effectIconAtlasImageId(
        BattleBoostItemInfoData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ItemEntity_o *v4; // x19
  BattleBoostItemInfoData_c *v5; // x0

  if ( (byte_4C24367 & 1) == 0 )
  {
    sub_1C3B764(&BattleBoostItemInfoData_TypeInfo, method);
    byte_4C24367 = 1;
  }
  if ( !BattleBoostItemInfoData__useCustomEffectIcon(this, method) )
    return this->fields.itemImageId;
  v4 = *(ItemEntity_o **)&this->fields.effectTiming;
  v5 = BattleBoostItemInfoData_TypeInfo;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !v4 )
    sub_1C3B9C0(v5, v3);
  return ItemEntity__getScript(
           v4,
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4C24368 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_SkillMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4C24368 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_SkillMaster___),
        Instance = (Il2CppObject *)((__int64 (__fastcall *)(BattleBoostItemInfoData_o *, Il2CppMethodPointer))this->klass->vtable._5_get_skillId.method)(
                                     this,
                                     this->klass->vtable._6_get_IndividualityArray.methodPtr),
        !MasterData_object)
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Instance,
                     (const MethodInfo_329AE48 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C3B9C0(Instance, v6);
  }
  return SkillEntity__getName((SkillEntity_o *)Instance, 0LL);
}


bool __fastcall BattleBoostItemInfoData__useCustomEffectIcon(BattleBoostItemInfoData_o *this, const MethodInfo *method)
{
  BattleBoostItemInfoData_c *v3; // x0
  ItemEntity_o *v4; // x19

  if ( (byte_4C24366 & 1) == 0 )
  {
    sub_1C3B764(&BattleBoostItemInfoData_TypeInfo, method);
    byte_4C24366 = 1;
  }
  v3 = BattleBoostItemInfoData_TypeInfo;
  v4 = *(ItemEntity_o **)&this->fields.effectTiming;
  if ( !BattleBoostItemInfoData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleBoostItemInfoData_TypeInfo);
  if ( !v4 )
    sub_1C3B9C0(v3, method);
  return ItemEntity__getScript(
           v4,
           BattleBoostItemInfoData_TypeInfo->static_fields->KEY_SCRIPT_BOOST_EFFECT_ICON,
           0,
           0LL) != 0;
}
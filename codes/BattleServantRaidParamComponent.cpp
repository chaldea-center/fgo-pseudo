void __fastcall BattleServantRaidParamComponent___ctor(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_43547AA & 1) == 0 )
  {
    sub_B70694(&BattleServantParamComponent_TypeInfo);
    byte_43547AA = 1;
  }
  if ( (BYTE3(BattleServantParamComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  }
  BattleServantParamComponent___ctor((BattleServantParamComponent_o *)this, method);
}


void __fastcall BattleServantRaidParamComponent__changeHp(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  BattleServantRaidParamComponent__updateRaidHpBase(this, svtData, method);
  BattleServantParamComponent__changeHp((BattleServantParamComponent_o *)this, svtData, v5);
}


bool __fastcall BattleServantRaidParamComponent__checkRaidUpdateHp(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.flgUpdate;
}


int64_t __fastcall BattleServantRaidParamComponent__getTurnSituationParam(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleRaidInfo_o *newinfo; // x8

  newinfo = this->fields.newinfo;
  if ( !newinfo )
    sub_B7076C(this, method);
  return newinfo->fields.totalDamage;
}


System_String_o *__fastcall BattleServantRaidParamComponent__get_RaidHPFormat(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_hpformat; // x19
  int32_t v4; // w20
  System_String_o *v5; // x0
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  System_Int32_array **v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_43547A4 & 1) == 0 )
  {
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_2532/*"BATTLE_RAID_TOTALHP"*/);
    byte_43547A4 = 1;
  }
  p_hpformat = (BattleServantConfConponent_o *)&this->fields.hpformat;
  if ( !this->fields.hpformat )
  {
    v4 = (_DWORD)this + 460;
    v5 = System_Int32__ToString(v4, 0LL);
    v6 = System_String__Concat_44758168((System_String_o *)StringLiteral_2532/*"BATTLE_RAID_TOTALHP"*/, v5, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey(v6, 0LL) )
    {
      v7 = System_Int32__ToString(v4, 0LL);
      v8 = System_String__Concat_44758168((System_String_o *)StringLiteral_2532/*"BATTLE_RAID_TOTALHP"*/, v7, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = v8;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v9 = (System_String_o *)StringLiteral_2532/*"BATTLE_RAID_TOTALHP"*/;
    }
    v10 = (System_Int32_array **)LocalizationManager__Get(v9, 0LL);
    p_hpformat->klass = (BattleServantConfConponent_c *)v10;
    sub_B70630(p_hpformat, v10, v11, v12, v13, v14, v15, v16);
  }
  return (System_String_o *)p_hpformat->klass;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantRaidParamComponent__setData(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  Il2CppObject *SingleEntity; // x21
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int v9; // s3
  float v10; // s4
  float v11; // s5
  float v12; // s6
  EventBossStatusUiEntity_o *v13; // x23
  int32_t GaugeId; // w0
  UILabel_o *raidhplabel; // x22
  int32_t hpBarType; // w21
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  int v21; // s0
  int v22; // s1
  int v23; // s2
  const MethodInfo *v24; // x1
  UIAtlas_o *v25; // x21
  UISprite_o *raidDownNormalSprite; // x22
  __int64 v27; // x2
  Il2CppObject *v28; // x0
  UISprite_o *raidDownLastSprite; // x22
  __int64 v30; // x2
  Il2CppObject *v31; // x0
  UISprite_o *raidDownEndSprite; // x21
  __int64 v33; // x2
  Il2CppObject *v34; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43547A5 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_22045/*"raid_down_last_"*/);
    sub_B70694(&StringLiteral_2816/*"Battle/Common"*/);
    sub_B70694(&StringLiteral_2834/*"BattleAssetUIAtlas"*/);
    sub_B70694(&StringLiteral_22044/*"raid_down_end_"*/);
    sub_B70694(&StringLiteral_22046/*"raid_down_normal_"*/);
    byte_43547A5 = 1;
  }
  if ( data )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     Master_WarQuestSelectionMaster,
                     (const MethodInfo_21C072C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                     (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                                     (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !SingleEntity || !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  (EventBossStatusUiMaster_o *)Master_WarQuestSelectionMaster,
                                  HIDWORD(SingleEntity[6].klass),
                                  data->fields.raidId,
                                  0LL);
    if ( EntityFromEventIdAndIndex )
    {
      v13 = EntityFromEventIdAndIndex;
      GaugeId = EventBossStatusUiEntity__GetGaugeId(EntityFromEventIdAndIndex, 0LL);
      raidhplabel = this->fields.raidhplabel;
      hpBarType = GaugeId;
      v36.fields.r = 0.0;
      v36.fields.g = 0.0;
      v36.fields.b = 0.0;
      v36.fields.a = 0.0;
      *(UnityEngine_Color_o *)&methodPointer = EventBossStatusUiEntity__GetTextEffectColor(v13, v36, 0LL);
      if ( !raidhplabel )
        goto LABEL_31;
    }
    else
    {
      raidhplabel = this->fields.raidhplabel;
      v21 = 0;
      v22 = 0;
      v23 = 0;
      var40.methodPointer = 0LL;
      var40.invoker_method = 0LL;
      UnityEngine_Color___ctor_41064944(*(UnityEngine_Color_o *)(&v9 - 3), v10, v11, v12, &var40);
      methodPointer_high = HIDWORD(var40.methodPointer);
      methodPointer = (int)var40.methodPointer;
      invoker_method_high = HIDWORD(var40.invoker_method);
      invoker_method = (int)var40.invoker_method;
      hpBarType = -1;
      if ( !raidhplabel )
        goto LABEL_31;
    }
    UILabel__set_effectColor(raidhplabel, *(UnityEngine_Color_o *)&methodPointer, 0LL);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
    this->fields.hpBarType = data->fields.hpBarType;
    if ( hpBarType == -1 )
      hpBarType = data->fields.hpBarType;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    BattleServantChangeBarComponent__setBarType(
      (BattleServantChangeBarComponent_o *)Master_WarQuestSelectionMaster,
      hpBarType,
      0,
      0LL);
    BattleServantRaidParamComponent__updateStateString(this, v24);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetManager__getAssetStorage(
                                                                                     (System_String_o *)StringLiteral_2816/*"Battle/Common"*/,
                                                                                     0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                     (AssetData_o *)Master_WarQuestSelectionMaster,
                                                                                     (System_String_o *)StringLiteral_2834/*"BattleAssetUIAtlas"*/,
                                                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                     (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                                                                                     (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !this->fields.raidDownNormalSprite )
      goto LABEL_31;
    v25 = (UIAtlas_o *)Master_WarQuestSelectionMaster;
    UISprite__set_atlas(this->fields.raidDownNormalSprite, (UIAtlas_o *)Master_WarQuestSelectionMaster, 0LL);
    raidDownNormalSprite = this->fields.raidDownNormalSprite;
    LODWORD(var40.methodPointer) = this->fields.hpBarType;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &var40, v27);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                                     (Il2CppObject *)StringLiteral_22046/*"raid_down_normal_"*/,
                                                                                     v28,
                                                                                     0LL);
    if ( !raidDownNormalSprite )
      goto LABEL_31;
    UISprite__set_spriteName(raidDownNormalSprite, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownLastSprite;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, v25, 0LL);
    raidDownLastSprite = this->fields.raidDownLastSprite;
    HIDWORD(var40.klass) = this->fields.hpBarType;
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, (char *)&var40.klass + 4, v30);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                                     (Il2CppObject *)StringLiteral_22045/*"raid_down_last_"*/,
                                                                                     v31,
                                                                                     0LL);
    if ( !raidDownLastSprite
      || (UISprite__set_spriteName(raidDownLastSprite, (System_String_o *)Master_WarQuestSelectionMaster, 0LL),
          (Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownEndSprite) == 0LL)
      || (UISprite__set_atlas((UISprite_o *)Master_WarQuestSelectionMaster, v25, 0LL),
          raidDownEndSprite = this->fields.raidDownEndSprite,
          LODWORD(var40.klass) = this->fields.hpBarType,
          v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &var40.klass, v33),
          Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                                           (Il2CppObject *)StringLiteral_22044/*"raid_down_end_"*/,
                                                                                           v34,
                                                                                           0LL),
          !raidDownEndSprite) )
    {
LABEL_31:
      sub_B7076C(Master_WarQuestSelectionMaster, v6);
    }
    UISprite__set_spriteName(raidDownEndSprite, (System_String_o *)Master_WarQuestSelectionMaster, 0LL);
  }
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantRaidParamComponent__setRaidDownMessage(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *v2; // x19
  UnityEngine_Object_o *raidDownEndSprite; // x20
  bool v4; // w1
  struct BattlePerformance_o *perf; // x8
  bool isRaidLastDay; // w0
  UnityEngine_Object_o *raidDownNormalSprite; // x21
  bool v8; // w20
  UnityEngine_Object_o *raidDownLastSprite; // x21

  v2 = this;
  if ( (byte_43547A8 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BattleServantRaidParamComponent_o *)sub_B70694(&StringLiteral_1/*""*/);
    byte_43547A8 = 1;
  }
  if ( v2->fields.isDefeatCount )
  {
    raidDownEndSprite = (UnityEngine_Object_o *)v2->fields.raidDownEndSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidDownEndSprite, 0LL, 0LL) )
    {
      this = (BattleServantRaidParamComponent_o *)v2->fields.raidDownEndSprite;
      if ( this )
      {
        this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
        if ( this )
        {
          v4 = 1;
LABEL_27:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4, 0LL);
          goto LABEL_28;
        }
      }
      goto LABEL_32;
    }
  }
  else
  {
    perf = v2->fields.perf;
    if ( !perf )
      goto LABEL_32;
    this = (BattleServantRaidParamComponent_o *)perf->fields.data;
    if ( !this )
      goto LABEL_32;
    isRaidLastDay = BattleData__isRaidLastDay((BattleData_o *)this, 0LL);
    raidDownNormalSprite = (UnityEngine_Object_o *)v2->fields.raidDownNormalSprite;
    v8 = isRaidLastDay;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidDownNormalSprite, 0LL, 0LL) )
    {
      this = (BattleServantRaidParamComponent_o *)v2->fields.raidDownNormalSprite;
      if ( !this )
        goto LABEL_32;
      this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v8, 0LL);
    }
    raidDownLastSprite = (UnityEngine_Object_o *)v2->fields.raidDownLastSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidDownLastSprite, 0LL, 0LL) )
    {
      this = (BattleServantRaidParamComponent_o *)v2->fields.raidDownLastSprite;
      if ( this )
      {
        this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
        if ( this )
        {
          v4 = v8;
          goto LABEL_27;
        }
      }
LABEL_32:
      sub_B7076C(this, method);
    }
  }
LABEL_28:
  this = (BattleServantRaidParamComponent_o *)v2->fields.raidhplabel;
  if ( !this )
    goto LABEL_32;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (BattleServantRaidParamComponent_o *)v2->fields.raidhplabel;
  if ( !this )
    goto LABEL_32;
  this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  if ( !this )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall BattleServantRaidParamComponent__setSplitHp(
        BattleServantRaidParamComponent_o *this,
        System_Int64_array *split,
        int64_t maxhp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *changeGauge; // x0

  changeGauge = this->fields.changeGauge;
  if ( !changeGauge )
    sub_B7076C(0LL, split);
  BattleServantChangeBarComponent__setSplitHp(changeGauge, split, maxhp, 0LL);
}


void __fastcall BattleServantRaidParamComponent__setTypeDefeatCount(
        BattleServantRaidParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isDefeatCount = flg;
}


void __fastcall BattleServantRaidParamComponent__setTypeJumbleRaid(
        BattleServantRaidParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isJumbleRaid = flg;
}


void __fastcall BattleServantRaidParamComponent__updateRaidHp(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleRaidInfo_o *newinfo; // x1
  const MethodInfo *v10; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.previnfo,
    (System_Int32_array **)newinfo,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.flgUpdate = 0;
  BattleServantRaidParamComponent__updateRaidHpBase(this, this->fields.data, v10);
}


void __fastcall BattleServantRaidParamComponent__updateRaidHpBase(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *v4; // x19
  struct BattleRaidInfo_o *previnfo; // x8
  int64_t maxHp; // x22
  int64_t totalDamage; // x23
  int64_t v8; // x20
  int32_t v9; // w21
  struct BattlePerformance_o *perf; // x8
  bool v11; // w0
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3
  Il2CppObject *SingleEntity; // x21
  _BOOL4 v15; // w22
  struct UnityEngine_GameObject_o *root; // x8
  UILabel_o *raidhplabel; // x21
  __int64 v18; // x2
  System_String_o *RaidHPFormat; // x22
  System_Int64_c *v20; // x0
  Il2CppObject *v21; // x0
  struct BattleRaidInfo_o *v22; // x8
  struct BattleRaidInfo_o *v23; // x8
  __int64 v24; // x0
  int64_t v25; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_43547A6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BattleMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_B70694(&long_TypeInfo);
    this = (BattleServantRaidParamComponent_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43547A6 = 1;
  }
  previnfo = v4->fields.previnfo;
  if ( !previnfo )
    goto LABEL_42;
  maxHp = previnfo->fields.maxHp;
  totalDamage = previnfo->fields.totalDamage;
  if ( v4->fields.isDefeatCount )
  {
    v8 = maxHp - totalDamage;
  }
  else
  {
    if ( !svtData )
      goto LABEL_42;
    v9 = BattleServantData__getMaxHp(svtData, 0LL);
    this = (BattleServantRaidParamComponent_o *)BattleServantData__getNowHp(svtData, 0LL);
    v8 = maxHp - totalDamage - (v9 - (int)this);
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_42;
  this = (BattleServantRaidParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_42;
  v11 = BattleData__isDisableChangeRaidDownMessage((BattleData_o *)this, 0LL);
  if ( v8 <= 0 && !v11 )
  {
    BattleServantRaidParamComponent__setRaidDownMessage(v4, v12);
    goto LABEL_36;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_42;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   (const MethodInfo_21C072C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_42;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( this )
  {
    if ( !SingleEntity )
      goto LABEL_42;
    this = (BattleServantRaidParamComponent_o *)EventPointBuffMaster__getEntityList(
                                                  (EventPointBuffMaster_o *)this,
                                                  HIDWORD(SingleEntity[6].klass),
                                                  0LL);
    if ( !this )
      goto LABEL_42;
    v15 = LODWORD(this->fields.root) != 0;
  }
  else
  {
    v15 = 0;
  }
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_42;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this )
    goto LABEL_31;
  if ( !SingleEntity )
    goto LABEL_42;
  this = (BattleServantRaidParamComponent_o *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                (EventRaidMaster_o *)this,
                                                HIDWORD(SingleEntity[6].klass),
                                                0LL);
  if ( this )
  {
    root = this->fields.root;
    if ( root )
    {
      if ( !(_DWORD)root )
      {
        v24 = sub_B70798(this);
        sub_B70738(v24, 0LL);
      }
      root = this->fields.target;
      if ( !root )
        goto LABEL_42;
      LODWORD(root) = (__int64)root[4].klass > 0;
    }
  }
  else
  {
LABEL_31:
    LODWORD(root) = 0;
  }
  if ( !((unsigned int)root | v15) && v4->fields.isDefeatCount && !v4->fields.isJumbleRaid )
  {
    raidhplabel = v4->fields.raidhplabel;
    this = (BattleServantRaidParamComponent_o *)BattleServantRaidParamComponent__get_RaidHPFormat(
                                                  v4,
                                                  (const MethodInfo *)svtData);
    v23 = v4->fields.previnfo;
    if ( v23 )
    {
      RaidHPFormat = (System_String_o *)this;
      v25 = v23->fields.totalDamage;
      v20 = long_TypeInfo;
      goto LABEL_34;
    }
LABEL_42:
    sub_B7076C(this, svtData);
  }
  raidhplabel = v4->fields.raidhplabel;
  RaidHPFormat = BattleServantRaidParamComponent__get_RaidHPFormat(v4, (const MethodInfo *)svtData);
  v25 = v8;
  v20 = long_TypeInfo;
LABEL_34:
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(v20, &v25, v18);
  this = (BattleServantRaidParamComponent_o *)System_String__Format(RaidHPFormat, v21, 0LL);
  if ( !raidhplabel )
    goto LABEL_42;
  UILabel__set_text(raidhplabel, (System_String_o *)this, 0LL);
LABEL_36:
  v22 = v4->fields.previnfo;
  if ( !v22 )
    goto LABEL_42;
  BattleServantRaidParamComponent__updateRaidHpbar(v4, v8, v22->fields.maxHp, v13);
}


void __fastcall BattleServantRaidParamComponent__updateRaidHpbar(
        BattleServantRaidParamComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raidhpGauge; // x22
  __int64 v7; // x1
  struct BattleHpGaugeBarComponent_o *v8; // x0

  if ( (byte_43547A7 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43547A7 = 1;
  }
  raidhpGauge = (UnityEngine_Object_o *)this->fields.raidhpGauge;
  if ( (now & 0x8000000000000000LL) != 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidhpGauge, 0LL, 0LL) )
    {
      v8 = this->fields.raidhpGauge;
      if ( v8 )
BattleHpGaugeBarComponent$$setValue_19373176:
        JUMPOUT(0x1279C78LL);
LABEL_17:
      sub_B7076C(v8, v7);
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidhpGauge, 0LL, 0LL) )
    {
      v8 = this->fields.raidhpGauge;
      if ( v8 )
        goto BattleHpGaugeBarComponent$$setValue_19373176;
      goto LABEL_17;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantRaidParamComponent__updateRaidInfo(
        BattleServantRaidParamComponent_o *this,
        BattleRaidInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleRaidInfo_o **p_newinfo; // x0
  struct BattleRaidInfo_o *newinfo; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x2

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_B70630(
      (BattleServantConfConponent_o *)p_newinfo,
      (System_Int32_array **)info,
      (System_String_array **)fixUpdate,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
    newinfo = this->fields.newinfo;
    this->fields.previnfo = newinfo;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.previnfo,
      (System_Int32_array **)newinfo,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    this->fields.flgUpdate = 0;
    BattleServantRaidParamComponent__updateRaidHpBase(this, this->fields.data, v17);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_B7076C(p_newinfo, 0LL);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      this->fields.newinfo = info;
      sub_B70630(
        (BattleServantConfConponent_o *)p_newinfo,
        (System_Int32_array **)info,
        (System_String_array **)fixUpdate,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      this->fields.flgUpdate = 1;
    }
  }
}


void __fastcall BattleServantRaidParamComponent__updateStateString(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  void *stateLabel; // x0
  System_String_o *statestring; // x20
  struct UILabel_o *shortNameLabel; // x8
  struct System_String_o *mText; // x9
  System_String_o *v8; // x1
  __int64 v9; // x0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43547A9 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43547A9 = 1;
  }
  data = this->fields.data;
  if ( data )
  {
    stateLabel = this->fields.stateLabel;
    if ( stateLabel )
    {
      statestring = data->fields.statestring;
      stateLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)stateLabel, 0LL);
      shortNameLabel = this->fields.shortNameLabel;
      if ( shortNameLabel )
      {
        mText = shortNameLabel->fields.mText;
        if ( mText )
        {
          if ( stateLabel )
          {
            v10.fields.z = 0.0;
            v10.fields.x = (float)(mText->fields.m_stringLength * shortNameLabel->fields.mFontSize) + 10.0;
            v10.fields.y = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v10, 0LL);
            if ( !statestring )
              goto LABEL_14;
            if ( (System_String__IndexOf(statestring, 0x3Au, 0LL) & 0x80000000) != 0 )
            {
              stateLabel = this->fields.stateLabel;
              if ( stateLabel )
              {
                v8 = statestring;
                goto LABEL_16;
              }
            }
            else
            {
              stateLabel = (void *)sub_B706AC(char___TypeInfo, 1LL);
              if ( stateLabel )
              {
                if ( !*((_DWORD *)stateLabel + 6) )
                {
                  v9 = sub_B70798(stateLabel);
                  sub_B70738(v9, 0LL);
                }
                *((_WORD *)stateLabel + 16) = 58;
                stateLabel = System_String__Split(statestring, (System_Char_array *)stateLabel, 0LL);
                if ( stateLabel )
                {
                  if ( *((int *)stateLabel + 6) < 2 )
                    goto LABEL_14;
                  if ( this->fields.stateLabel )
                  {
                    v8 = (System_String_o *)*((_QWORD *)stateLabel + 5);
                    stateLabel = this->fields.stateLabel;
                    goto LABEL_16;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_B7076C(stateLabel, method);
  }
LABEL_14:
  stateLabel = this->fields.stateLabel;
  if ( !stateLabel )
    goto LABEL_21;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_16:
  UILabel__set_text((UILabel_o *)stateLabel, v8, 0LL);
}
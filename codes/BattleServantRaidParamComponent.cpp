void BattleServantRaidParamComponent___ctor(BattleServantRaidParamComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4CF1E23 & 1) == 0 )
  {
    sub_1C7BAE8(&BattleServantParamComponent_TypeInfo);
    byte_4CF1E23 = 1;
  }
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  BattleServantParamComponent___ctor((BattleServantParamComponent_o *)this, method);
}


bool BattleServantRaidParamComponent__IsRaidStatusUi(BattleServantRaidParamComponent_o *this, const MethodInfo *method)
{
  return 1;
}


void BattleServantRaidParamComponent__UpdateHpAndDamageBar(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  BattleServantRaidParamComponent__updateRaidHpBase(this, svtData, method);
  BattleServantParamComponent__UpdateHp((BattleServantParamComponent_o *)this, svtData, 1, v5);
}


void BattleServantRaidParamComponent__changeHp(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  BattleServantRaidParamComponent__updateRaidHpBase(this, svtData, method);
  BattleServantParamComponent__UpdateHp((BattleServantParamComponent_o *)this, svtData, 0, v5);
}


bool BattleServantRaidParamComponent__checkRaidUpdateHp(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.flgUpdate;
}


int64_t BattleServantRaidParamComponent__getTurnSituationParam(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleRaidInfo_o *newinfo; // x8

  newinfo = this->fields.newinfo;
  if ( !newinfo )
    sub_1C7BD40(this, method);
  return newinfo->fields.totalDamage;
}


System_String_o *BattleServantRaidParamComponent__get_RaidHPFormat(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_hpformat; // x19
  int32_t v4; // w20
  System_String_o *v5; // x0
  System_String_o *v6; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  System_String_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4CF1E1D & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2817/*"BATTLE_RAID_TOTALHP"*/);
    byte_4CF1E1D = 1;
  }
  p_hpformat = (GrandQuestFolderBoardItem_o *)&this->fields.hpformat;
  if ( !this->fields.hpformat )
  {
    v4 = (_DWORD)this + 540;
    v5 = System_Int32__ToString(v4, 0);
    v6 = System_String__Concat_64176912((System_String_o *)StringLiteral_2817/*"BATTLE_RAID_TOTALHP"*/, v5, 0);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey(v6, 0) )
    {
      v7 = System_Int32__ToString(v4, 0);
      v8 = System_String__Concat_64176912((System_String_o *)StringLiteral_2817/*"BATTLE_RAID_TOTALHP"*/, v7, 0);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = (System_String_o *)StringLiteral_2817/*"BATTLE_RAID_TOTALHP"*/;
    }
    v9 = LocalizationManager__Get(v8, 0);
    p_hpformat->klass = (GrandQuestFolderBoardItem_c *)v9;
    sub_1C7BA8C(p_hpformat, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  }
  return (System_String_o *)p_hpformat->klass;
}


void BattleServantRaidParamComponent__setData(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *battleServantData,
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *SingleEntity; // x22
  EventBossStatusUiEntity_o *v10; // x24
  int32_t GaugeId; // w0
  UILabel_o *raidhplabel; // x23
  int v13; // w22
  int32_t hpBarType; // w8
  int32_t v15; // w1
  UIAtlas_o *v16; // x22
  UISprite_o *raidDownNormalSprite; // x23
  Il2CppObject *v18; // x0
  UISprite_o *raidDownLastSprite; // x23
  Il2CppObject *v20; // x0
  UISprite_o *raidDownEndSprite; // x22
  Il2CppObject *v22; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  int32_t v25; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CF1E1E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GameObject____78791560);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_23164/*"raid_down_last_"*/);
    sub_1C7BAE8(&StringLiteral_3088/*"Battle/Common"*/);
    sub_1C7BAE8(&StringLiteral_3109/*"BattleAssetUIAtlas"*/);
    sub_1C7BAE8(&StringLiteral_23163/*"raid_down_end_"*/);
    sub_1C7BAE8(&StringLiteral_23165/*"raid_down_normal_"*/);
    byte_4CF1E1E = 1;
  }
  if ( battleServantData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !Master_object )
      goto LABEL_30;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     Master_object,
                     (const MethodInfo_3430904 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                    (DataManager_o *)Master_object,
                                                                    (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !SingleEntity || !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                    (EventBossStatusUiMaster_o *)Master_object,
                                                                    (int32_t)SingleEntity[6].monitor,
                                                                    battleServantData->fields.raidId,
                                                                    0);
    if ( Master_object )
    {
      v10 = (EventBossStatusUiEntity_o *)Master_object;
      GaugeId = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Master_object, 0);
      raidhplabel = this->fields.raidhplabel;
      v13 = GaugeId;
      v28.fields.r = 0.0;
      v28.fields.g = 0.0;
      v28.fields.b = 0.0;
      v28.fields.a = 0.0;
      TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(v10, v28, 0);
      if ( !raidhplabel )
        goto LABEL_30;
    }
    else
    {
      raidhplabel = this->fields.raidhplabel;
      TextEffectColor.fields.b = 0.0;
      TextEffectColor.fields.a = 1.0;
      v13 = -1;
      TextEffectColor.fields.g = 0.0;
      TextEffectColor.fields.r = 0.0;
      if ( !raidhplabel )
        goto LABEL_30;
    }
    UILabel__set_effectColor(raidhplabel, TextEffectColor, 0);
    hpBarType = battleServantData->fields.hpBarType;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
    this->fields.hpBarType = hpBarType;
    if ( !Master_object )
      goto LABEL_30;
    v15 = v13 == -1 ? hpBarType : v13;
    BattleServantChangeBarComponent__setBarType((BattleServantChangeBarComponent_o *)Master_object, v15, 0, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetManager__getAssetStorage(
                                                                    (System_String_o *)StringLiteral_3088/*"Battle/Common"*/,
                                                                    0);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetData__GetObject_object__51713432(
                                                                    (AssetData_o *)Master_object,
                                                                    (System_String_o *)StringLiteral_3109/*"BattleAssetUIAtlas"*/,
                                                                    (const MethodInfo_3151598 *)Method_AssetData_GetObject_GameObject____78791560);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Master_object,
                                                                    (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !this->fields.raidDownNormalSprite )
      goto LABEL_30;
    v16 = (UIAtlas_o *)Master_object;
    UISprite__set_atlas(this->fields.raidDownNormalSprite, (UIAtlas_o *)Master_object, 0);
    raidDownNormalSprite = this->fields.raidDownNormalSprite;
    v27 = this->fields.hpBarType;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                    (Il2CppObject *)StringLiteral_23165/*"raid_down_normal_"*/,
                                                                    v18,
                                                                    0);
    if ( !raidDownNormalSprite )
      goto LABEL_30;
    UISprite__set_spriteName(raidDownNormalSprite, (System_String_o *)Master_object, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownLastSprite;
    if ( !Master_object )
      goto LABEL_30;
    UISprite__set_atlas((UISprite_o *)Master_object, v16, 0);
    raidDownLastSprite = this->fields.raidDownLastSprite;
    v26 = this->fields.hpBarType;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                    (Il2CppObject *)StringLiteral_23164/*"raid_down_last_"*/,
                                                                    v20,
                                                                    0);
    if ( !raidDownLastSprite
      || (UISprite__set_spriteName(raidDownLastSprite, (System_String_o *)Master_object, 0),
          (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownEndSprite) == 0)
      || (UISprite__set_atlas((UISprite_o *)Master_object, v16, 0),
          raidDownEndSprite = this->fields.raidDownEndSprite,
          v25 = this->fields.hpBarType,
          v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25),
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                          (Il2CppObject *)StringLiteral_23163/*"raid_down_end_"*/,
                                                                          v22,
                                                                          0),
          !raidDownEndSprite) )
    {
LABEL_30:
      sub_1C7BD40(Master_object, v8);
    }
    UISprite__set_spriteName(raidDownEndSprite, (System_String_o *)Master_object, 0);
    BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, battleServantData, stageEntity, v23);
    BattleServantRaidParamComponent__updateStateString(this, v24);
  }
  else
  {
    BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, 0, stageEntity, method);
  }
}


void BattleServantRaidParamComponent__setRaidDownMessage(
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
  if ( (byte_4CF1E21 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    this = (BattleServantRaidParamComponent_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1E21 = 1;
  }
  if ( v2->fields.isDefeatCount )
  {
    raidDownEndSprite = (UnityEngine_Object_o *)v2->fields.raidDownEndSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidDownEndSprite, 0, 0) )
    {
      this = (BattleServantRaidParamComponent_o *)v2->fields.raidDownEndSprite;
      if ( this )
      {
        this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
        if ( this )
        {
          v4 = 1;
LABEL_24:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v4, 0);
          goto LABEL_25;
        }
      }
      goto LABEL_29;
    }
  }
  else
  {
    perf = v2->fields.perf;
    if ( !perf )
      goto LABEL_29;
    this = (BattleServantRaidParamComponent_o *)perf->fields.data;
    if ( !this )
      goto LABEL_29;
    isRaidLastDay = BattleData__isRaidLastDay((BattleData_o *)this, 0);
    raidDownNormalSprite = (UnityEngine_Object_o *)v2->fields.raidDownNormalSprite;
    v8 = isRaidLastDay;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidDownNormalSprite, 0, 0) )
    {
      this = (BattleServantRaidParamComponent_o *)v2->fields.raidDownNormalSprite;
      if ( !this )
        goto LABEL_29;
      this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      if ( !this )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v8, 0);
    }
    raidDownLastSprite = (UnityEngine_Object_o *)v2->fields.raidDownLastSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidDownLastSprite, 0, 0) )
    {
      this = (BattleServantRaidParamComponent_o *)v2->fields.raidDownLastSprite;
      if ( this )
      {
        this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0);
        if ( this )
        {
          v4 = v8;
          goto LABEL_24;
        }
      }
LABEL_29:
      sub_1C7BD40(this, method);
    }
  }
LABEL_25:
  this = (BattleServantRaidParamComponent_o *)v2->fields.raidhplabel;
  if ( !this )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
  this = (BattleServantRaidParamComponent_o *)v2->fields.raidhplabel;
  if ( !this )
    goto LABEL_29;
  this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_29;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void BattleServantRaidParamComponent__setSplitHp(
        BattleServantRaidParamComponent_o *this,
        System_Int64_array *split,
        int64_t maxhp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *changeGauge; // x0

  changeGauge = this->fields.changeGauge;
  if ( !changeGauge )
    sub_1C7BD40(0, split);
  BattleServantChangeBarComponent__setSplitHp(changeGauge, split, maxhp, 0);
}


void BattleServantRaidParamComponent__setTypeDefeatCount(
        BattleServantRaidParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isDefeatCount = flg;
}


void BattleServantRaidParamComponent__setTypeJumbleRaid(
        BattleServantRaidParamComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields.isJumbleRaid = flg;
}


void BattleServantRaidParamComponent__updateRaidHp(BattleServantRaidParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleRaidInfo_o *newinfo; // x1
  BattleServantData_o *data; // x1
  const MethodInfo *v11; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.previnfo, (int32_t)newinfo, v2, v3, v4, v5, v6, v7);
  data = this->fields.data;
  this->fields.flgUpdate = 0;
  BattleServantRaidParamComponent__updateRaidHpBase(this, data, v11);
}


void BattleServantRaidParamComponent__updateRaidHpBase(
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
  _QWORD *p_klass; // x8
  UILabel_o *raidhplabel; // x21
  System_String_o *RaidHPFormat; // x22
  System_Int64_c *v19; // x0
  Il2CppObject *v20; // x0
  struct BattleRaidInfo_o *v21; // x8
  struct BattleRaidInfo_o *v22; // x8
  int64_t v23; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4CF1E1F & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C7BAE8(&long_TypeInfo);
    this = (BattleServantRaidParamComponent_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CF1E1F = 1;
  }
  previnfo = v4->fields.previnfo;
  if ( !previnfo )
    goto LABEL_41;
  maxHp = previnfo->fields.maxHp;
  totalDamage = previnfo->fields.totalDamage;
  if ( v4->fields.isDefeatCount )
  {
    v8 = maxHp - totalDamage;
  }
  else
  {
    if ( !svtData )
      goto LABEL_41;
    v9 = BattleServantData__getMaxHp(svtData, 0);
    this = (BattleServantRaidParamComponent_o *)BattleServantData__getNowHp(svtData, 0);
    v8 = maxHp - totalDamage - (v9 - (int)this);
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_41;
  v11 = BattleData__isDisableChangeRaidDownMessage((BattleData_o *)this, 0);
  if ( v8 <= 0 && !v11 )
  {
    BattleServantRaidParamComponent__setRaidDownMessage(v4, v12);
    goto LABEL_35;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_41;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   (const MethodInfo_3430904 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( this )
  {
    if ( !SingleEntity )
      goto LABEL_41;
    this = (BattleServantRaidParamComponent_o *)EventPointBuffMaster__getEntityList(
                                                  (EventPointBuffMaster_o *)this,
                                                  (int32_t)SingleEntity[6].monitor,
                                                  0);
    if ( !this )
      goto LABEL_41;
    v15 = LODWORD(this->fields.m_CancellationTokenSource) != 0;
  }
  else
  {
    v15 = 0;
  }
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this )
    goto LABEL_30;
  if ( !SingleEntity )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                (EventRaidMaster_o *)this,
                                                (int32_t)SingleEntity[6].monitor,
                                                0);
  if ( this )
  {
    p_klass = &this->fields.m_CancellationTokenSource->klass;
    if ( p_klass )
    {
      if ( !(_DWORD)p_klass )
        sub_1C7BD48(this);
      p_klass = &this->fields.root->klass;
      if ( !p_klass )
        goto LABEL_41;
      LODWORD(p_klass) = p_klass[13] > 0LL;
    }
  }
  else
  {
LABEL_30:
    LODWORD(p_klass) = 0;
  }
  if ( !((unsigned int)p_klass | v15) && v4->fields.isDefeatCount && !v4->fields.isJumbleRaid )
  {
    raidhplabel = v4->fields.raidhplabel;
    this = (BattleServantRaidParamComponent_o *)BattleServantRaidParamComponent__get_RaidHPFormat(
                                                  v4,
                                                  (const MethodInfo *)svtData);
    v22 = v4->fields.previnfo;
    if ( v22 )
    {
      RaidHPFormat = (System_String_o *)this;
      v23 = v22->fields.totalDamage;
      v19 = long_TypeInfo;
      goto LABEL_33;
    }
LABEL_41:
    sub_1C7BD40(this, svtData);
  }
  raidhplabel = v4->fields.raidhplabel;
  RaidHPFormat = BattleServantRaidParamComponent__get_RaidHPFormat(v4, (const MethodInfo *)svtData);
  v23 = v8;
  v19 = long_TypeInfo;
LABEL_33:
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(v19, &v23);
  this = (BattleServantRaidParamComponent_o *)System_String__Format(RaidHPFormat, v20, 0);
  if ( !raidhplabel )
    goto LABEL_41;
  UILabel__set_text(raidhplabel, (System_String_o *)this, 0);
LABEL_35:
  v21 = v4->fields.previnfo;
  if ( !v21 )
    goto LABEL_41;
  BattleServantRaidParamComponent__updateRaidHpbar(v4, v8, v21->fields.maxHp, v13);
}


void BattleServantRaidParamComponent__updateRaidHpbar(
        BattleServantRaidParamComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raidhpGauge; // x22
  bool v7; // w0
  __int64 v8; // x1
  struct BattleHpGaugeBarComponent_o *v9; // x0

  if ( (byte_4CF1E20 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF1E20 = 1;
  }
  raidhpGauge = (UnityEngine_Object_o *)this->fields.raidhpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(raidhpGauge, 0, 0);
  if ( now < 0 )
  {
    if ( v7 )
    {
      v9 = this->fields.raidhpGauge;
      if ( v9 )
BattleHpGaugeBarComponent$$setValue_47882216:
        JUMPOUT(0x2DA9FE8);
LABEL_13:
      sub_1C7BD40(v9, v8);
    }
  }
  else if ( v7 )
  {
    v9 = this->fields.raidhpGauge;
    if ( v9 )
      goto BattleHpGaugeBarComponent$$setValue_47882216;
    goto LABEL_13;
  }
}


void BattleServantRaidParamComponent__updateRaidInfo(
        BattleServantRaidParamComponent_o *this,
        BattleRaidInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleRaidInfo_o **p_newinfo; // x0
  struct BattleRaidInfo_o *newinfo; // x1
  char v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BattleServantData_o *data; // x1
  const MethodInfo *v18; // x2

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_newinfo, (int32_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
    newinfo = this->fields.newinfo;
    this->fields.previnfo = newinfo;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.previnfo, (int32_t)newinfo, v11, v12, v13, v14, v15, v16);
    data = this->fields.data;
    this->fields.flgUpdate = 0;
    BattleServantRaidParamComponent__updateRaidHpBase(this, data, v18);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_1C7BD40(p_newinfo, 0);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      this->fields.newinfo = info;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_newinfo, (int32_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
      this->fields.flgUpdate = 1;
    }
  }
}


void BattleServantRaidParamComponent__updateStateString(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  void *stateLabel; // x0
  System_String_o *statestring; // x20
  struct UILabel_o *shortNameLabel; // x8
  struct System_String_o *mText; // x9
  System_String_o *v8; // x1
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CF1E22 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF1E22 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  stateLabel = this->fields.stateLabel;
  if ( !stateLabel
    || (statestring = data->fields.statestring,
        stateLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)stateLabel, 0),
        (shortNameLabel = this->fields.shortNameLabel) == 0)
    || (mText = shortNameLabel->fields.mText) == 0
    || !stateLabel )
  {
LABEL_19:
    sub_1C7BD40(stateLabel, method);
  }
  v9.fields.z = 0.0;
  v9.fields.x = (float)(mText->fields._stringLength * shortNameLabel->fields.mFontSize) + 10.0;
  v9.fields.y = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v9, 0);
  if ( !statestring )
    goto LABEL_12;
  if ( System_String__IndexOf(statestring, 0x3Au, 0) < 0 )
  {
    stateLabel = this->fields.stateLabel;
    if ( stateLabel )
    {
      v8 = statestring;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  stateLabel = System_String__Split(statestring, 0x3Au, 0, 0);
  if ( !stateLabel )
    goto LABEL_19;
  if ( *((int *)stateLabel + 6) >= 2 )
  {
    if ( this->fields.stateLabel )
    {
      v8 = (System_String_o *)*((_QWORD *)stateLabel + 5);
      stateLabel = this->fields.stateLabel;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
LABEL_12:
  stateLabel = this->fields.stateLabel;
  if ( !stateLabel )
    goto LABEL_19;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  UILabel__set_text((UILabel_o *)stateLabel, v8, 0);
}
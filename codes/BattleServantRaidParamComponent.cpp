void BattleServantRaidParamComponent___ctor(BattleServantRaidParamComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5974260 & 1) == 0 )
  {
    sub_2213A60(&BattleServantParamComponent_TypeInfo);
    byte_5974260 = 1;
  }
  if ( !*(&BattleServantParamComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, method);
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
    sub_2213CDC(this, method);
  return newinfo->fields.totalDamage;
}


System_String_o *BattleServantRaidParamComponent__get_RaidHPFormat(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_hpformat; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x21
  __int64 v7; // x1
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_597425A & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_2935/*"BATTLE_RAID_TOTALHP"*/);
    byte_597425A = 1;
  }
  p_hpformat = (MissionNaviTransitionBoardItem_o *)&this->fields.hpformat;
  if ( !this->fields.hpformat )
  {
    v4 = System_Int32__ToString((int)this + 548, 0);
    v6 = System_String__Concat_75651716((System_String_o *)StringLiteral_2935/*"BATTLE_RAID_TOTALHP"*/, v4, 0);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    if ( LocalizationManager__ContainsKey(v6, 0) )
    {
      v8 = System_Int32__ToString((int)this + 548, 0);
      v10 = System_String__Concat_75651716((System_String_o *)StringLiteral_2935/*"BATTLE_RAID_TOTALHP"*/, v8, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    }
    else
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7);
      v10 = (System_String_o *)StringLiteral_2935/*"BATTLE_RAID_TOTALHP"*/;
    }
    v11 = LocalizationManager__Get(v10, 0);
    p_hpformat->klass = (MissionNaviTransitionBoardItem_c *)v11;
    sub_2213A04(p_hpformat, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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
  UIWidget_o *raidhplabel; // x23
  EventBossStatusUiEntity_o *v14; // x22
  UILabel_o *v16; // x23
  UILabel_o *v18; // x23
  unsigned int GaugeId; // w0
  unsigned int hpBarType; // w8
  __int64 v21; // x1
  UIAtlas_o *v22; // x22
  UISprite_o *raidDownNormalSprite; // x23
  Il2CppObject *v24; // x0
  UISprite_o *raidDownLastSprite; // x23
  Il2CppObject *v26; // x0
  UISprite_o *raidDownEndSprite; // x22
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1
  int32_t v31; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v32; // [xsp+8h] [xbp-48h] BYREF
  int32_t v33; // [xsp+Ch] [xbp-44h] BYREF
  UnityEngine_Vector2_o TextEffectDistance; // 0:s0.4,4:s1.4
  UnityEngine_Color_o TextColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_597425B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_24136/*"raid_down_last_"*/);
    sub_2213A60(&StringLiteral_3208/*"Battle/Common"*/);
    sub_2213A60(&StringLiteral_3230/*"BattleAssetUIAtlas"*/);
    sub_2213A60(&StringLiteral_24135/*"raid_down_end_"*/);
    sub_2213A60(&StringLiteral_24137/*"raid_down_normal_"*/);
    byte_597425B = 1;
  }
  if ( !battleServantData )
  {
    BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, 0, stageEntity, method);
    return;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, battleServantData);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_44;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   Master_object,
                   (const MethodInfo_3F1323C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                  (DataManager_o *)Master_object,
                                                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
  if ( !SingleEntity || !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                  (EventBossStatusUiMaster_o *)Master_object,
                                                                  (int32_t)SingleEntity[6].monitor,
                                                                  battleServantData->fields.raidId,
                                                                  0);
  TextColor.fields.r = 1.0;
  TextColor.fields.g = 1.0;
  raidhplabel = (UIWidget_o *)this->fields.raidhplabel;
  TextColor.fields.b = 1.0;
  TextColor.fields.a = 1.0;
  v14 = (EventBossStatusUiEntity_o *)Master_object;
  if ( Master_object )
    TextColor = EventBossStatusUiEntity__GetTextColor((EventBossStatusUiEntity_o *)Master_object, TextColor, 0);
  if ( !raidhplabel )
    goto LABEL_44;
  UIWidget__set_color(raidhplabel, TextColor, 0);
  TextEffectColor.fields.r = 0.0;
  TextEffectColor.fields.g = 0.0;
  v16 = this->fields.raidhplabel;
  TextEffectColor.fields.b = 0.0;
  if ( v14 )
  {
    TextEffectColor.fields.a = 0.0;
    TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(v14, TextEffectColor, 0);
    if ( !v16 )
      goto LABEL_44;
  }
  else
  {
    v37.fields.a = 1.0;
    if ( !v16 )
      goto LABEL_44;
  }
  UILabel__set_effectColor(v16, TextEffectColor, 0);
  v18 = this->fields.raidhplabel;
  if ( v14 )
  {
    if ( !byte_596F578 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_596F578 = 1;
    }
    TextEffectDistance = EventBossStatusUiEntity__GetTextEffectDistance(
                           v14,
                           UnityEngine_Vector2_TypeInfo->static_fields->oneVector,
                           0);
    if ( !v18 )
      goto LABEL_44;
    goto LABEL_26;
  }
  if ( !byte_596F578 )
  {
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_596F578 = 1;
  }
  TextEffectDistance = UnityEngine_Vector2_TypeInfo->static_fields->oneVector;
  if ( !v18 )
LABEL_44:
    sub_2213CDC(Master_object, v8);
LABEL_26:
  UILabel__set_effectDistance(v18, TextEffectDistance, 0);
  if ( v14 )
  {
    GaugeId = EventBossStatusUiEntity__GetGaugeId(v14, 0);
    hpBarType = battleServantData->fields.hpBarType;
    if ( GaugeId == -1 )
      v8 = hpBarType;
    else
      v8 = GaugeId;
    this->fields.hpBarType = hpBarType;
  }
  else
  {
    v8 = (unsigned int)battleServantData->fields.hpBarType;
    this->fields.hpBarType = v8;
  }
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
  if ( !Master_object )
    goto LABEL_44;
  BattleServantChangeBarComponent__setBarType((BattleServantChangeBarComponent_o *)Master_object, v8, 0, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetManager__getAssetStorage(
                                                                  (System_String_o *)StringLiteral_3208/*"Battle/Common"*/,
                                                                  0);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetData__GetObject_object__58532980(
                                                                  (AssetData_o *)Master_object,
                                                                  (System_String_o *)StringLiteral_3230/*"BattleAssetUIAtlas"*/,
                                                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !Master_object )
    goto LABEL_44;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)Master_object,
                                                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
  if ( !this->fields.raidDownNormalSprite )
    goto LABEL_44;
  v22 = (UIAtlas_o *)Master_object;
  UISprite__set_atlas(this->fields.raidDownNormalSprite, (UIAtlas_o *)Master_object, 0);
  raidDownNormalSprite = this->fields.raidDownNormalSprite;
  v33 = this->fields.hpBarType;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v33);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                  (Il2CppObject *)StringLiteral_24137/*"raid_down_normal_"*/,
                                                                  v24,
                                                                  0);
  if ( !raidDownNormalSprite )
    goto LABEL_44;
  UISprite__set_spriteName(raidDownNormalSprite, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownLastSprite;
  if ( !Master_object )
    goto LABEL_44;
  UISprite__set_atlas((UISprite_o *)Master_object, v22, 0);
  raidDownLastSprite = this->fields.raidDownLastSprite;
  v32 = this->fields.hpBarType;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v32);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                  (Il2CppObject *)StringLiteral_24136/*"raid_down_last_"*/,
                                                                  v26,
                                                                  0);
  if ( !raidDownLastSprite )
    goto LABEL_44;
  UISprite__set_spriteName(raidDownLastSprite, (System_String_o *)Master_object, 0);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownEndSprite;
  if ( !Master_object )
    goto LABEL_44;
  UISprite__set_atlas((UISprite_o *)Master_object, v22, 0);
  raidDownEndSprite = this->fields.raidDownEndSprite;
  v31 = this->fields.hpBarType;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v31);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                  (Il2CppObject *)StringLiteral_24135/*"raid_down_end_"*/,
                                                                  v28,
                                                                  0);
  if ( !raidDownEndSprite )
    goto LABEL_44;
  UISprite__set_spriteName(raidDownEndSprite, (System_String_o *)Master_object, 0);
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, battleServantData, stageEntity, v29);
  BattleServantRaidParamComponent__updateStateString(this, v30);
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
  __int64 v7; // x1
  UnityEngine_Object_o *raidDownNormalSprite; // x21
  bool v9; // w20
  UnityEngine_Object_o *raidDownLastSprite; // x21

  v2 = this;
  if ( (byte_597425E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleServantRaidParamComponent_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_597425E = 1;
  }
  if ( v2->fields.isDefeatCount )
  {
    raidDownEndSprite = (UnityEngine_Object_o *)v2->fields.raidDownEndSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    v9 = isRaidLastDay;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v9, 0);
    }
    raidDownLastSprite = (UnityEngine_Object_o *)v2->fields.raidDownLastSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
          v4 = v9;
          goto LABEL_24;
        }
      }
LABEL_29:
      sub_2213CDC(this, method);
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
    sub_2213CDC(0, split);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleRaidInfo_o *newinfo; // x1
  BattleServantData_o *data; // x1
  const MethodInfo *v11; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.previnfo, (int32_t)newinfo, v2, v3, v4, v5, v6, v7);
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
  int64_t v6; // x20
  int64_t totalDamage; // x22
  int64_t maxHp; // x23
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
  __int64 v19; // x0
  Il2CppObject *v20; // x0
  struct BattleRaidInfo_o *v21; // x8
  struct BattleRaidInfo_o *v22; // x8
  int64_t v23; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_597425C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventRaidMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_BattleMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    this = (BattleServantRaidParamComponent_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_597425C = 1;
  }
  previnfo = v4->fields.previnfo;
  if ( v4->fields.isDefeatCount )
  {
    if ( !previnfo )
      goto LABEL_42;
    v6 = previnfo->fields.maxHp - previnfo->fields.totalDamage;
  }
  else
  {
    if ( !previnfo || !svtData )
      goto LABEL_42;
    maxHp = previnfo->fields.maxHp;
    totalDamage = previnfo->fields.totalDamage;
    v9 = BattleServantData__getMaxHp(svtData, 0);
    this = (BattleServantRaidParamComponent_o *)BattleServantData__getNowHp(svtData, 0);
    v6 = maxHp - (totalDamage + v9 - (int)this);
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_42;
  this = (BattleServantRaidParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_42;
  v11 = BattleData__isDisableChangeRaidDownMessage((BattleData_o *)this, 0);
  if ( v6 <= 0 && !v11 )
  {
    BattleServantRaidParamComponent__setRaidDownMessage(v4, v12);
    goto LABEL_36;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this
    || (SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                         (const MethodInfo_3F1323C *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__),
        (this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0) )
  {
LABEL_42:
    sub_2213CDC(this, svtData);
  }
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( this )
  {
    if ( !SingleEntity )
      goto LABEL_42;
    this = (BattleServantRaidParamComponent_o *)EventPointBuffMaster__getEntityList(
                                                  (EventPointBuffMaster_o *)this,
                                                  (int32_t)SingleEntity[6].monitor,
                                                  0);
    if ( !this )
      goto LABEL_42;
    v15 = LODWORD(this->fields.m_CancellationTokenSource) != 0;
  }
  else
  {
    v15 = 0;
  }
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_42;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this )
    goto LABEL_31;
  if ( !SingleEntity )
    goto LABEL_42;
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
        sub_2213CE4(this);
      p_klass = &this->fields.root->klass;
      if ( !p_klass )
        goto LABEL_42;
      LODWORD(p_klass) = p_klass[13] > 0LL;
    }
  }
  else
  {
LABEL_31:
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
      v19 = qword_5984368;
      v23 = v22->fields.totalDamage;
      goto LABEL_34;
    }
    goto LABEL_42;
  }
  raidhplabel = v4->fields.raidhplabel;
  RaidHPFormat = BattleServantRaidParamComponent__get_RaidHPFormat(v4, (const MethodInfo *)svtData);
  v23 = v6;
  v19 = qword_5984368;
LABEL_34:
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(v19, &v23);
  this = (BattleServantRaidParamComponent_o *)System_String__Format(RaidHPFormat, v20, 0);
  if ( !raidhplabel )
    goto LABEL_42;
  UILabel__set_text(raidhplabel, (System_String_o *)this, 0);
LABEL_36:
  v21 = v4->fields.previnfo;
  if ( !v21 )
    goto LABEL_42;
  BattleServantRaidParamComponent__updateRaidHpbar(v4, v6, v21->fields.maxHp, v13);
}


void BattleServantRaidParamComponent__updateRaidHpbar(
        BattleServantRaidParamComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raidhpGauge; // x22
  int v8; // w8
  __int64 v9; // x1
  BattleHpGaugeBarComponent_o *v10; // x0
  int64_t v11; // x1

  if ( (byte_597425D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597425D = 1;
  }
  raidhpGauge = (UnityEngine_Object_o *)this->fields.raidhpGauge;
  v8 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( now < 0 )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, now);
    if ( UnityEngine_Object__op_Inequality(raidhpGauge, 0, 0) )
    {
      v10 = this->fields.raidhpGauge;
      if ( v10 )
      {
        v11 = 0;
        goto LABEL_14;
      }
LABEL_16:
      sub_2213CDC(v10, v9);
    }
  }
  else
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, now);
    if ( UnityEngine_Object__op_Inequality(raidhpGauge, 0, 0) )
    {
      v10 = this->fields.raidhpGauge;
      if ( v10 )
      {
        v11 = now;
LABEL_14:
        BattleHpGaugeBarComponent__setValue_54523052(v10, v11, max, 0, 0);
        return;
      }
      goto LABEL_16;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleServantRaidParamComponent__updateRaidInfo(
        BattleServantRaidParamComponent_o *this,
        BattleRaidInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct BattleRaidInfo_o **p_newinfo; // x0
  struct BattleRaidInfo_o *newinfo; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  BattleServantData_o *data; // x1
  const MethodInfo *v18; // x2

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)p_newinfo,
      (int32_t)info,
      (System_String_o *)fixUpdate,
      (System_String_o *)method,
      v4,
      v5,
      v6,
      v7);
    newinfo = this->fields.newinfo;
    this->fields.previnfo = newinfo;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.previnfo,
      (int32_t)newinfo,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    data = this->fields.data;
    this->fields.flgUpdate = 0;
    BattleServantRaidParamComponent__updateRaidHpBase(this, data, v18);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_2213CDC(p_newinfo, 0);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      this->fields.newinfo = info;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_newinfo,
        (int32_t)info,
        (System_String_o *)fixUpdate,
        (System_String_o *)method,
        v4,
        v5,
        v6,
        v7);
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

  if ( (byte_597425F & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597425F = 1;
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
    sub_2213CDC(stateLabel, method);
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
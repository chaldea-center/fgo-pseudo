void __fastcall BattleServantRaidParamComponent___ctor(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A01512 & 1) == 0 )
  {
    sub_1B64870(&BattleServantParamComponent_TypeInfo, method);
    byte_4A01512 = 1;
  }
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
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
    sub_1B64ACC(this, method);
  return newinfo->fields.totalDamage;
}


System_String_o *__fastcall BattleServantRaidParamComponent__get_RaidHPFormat(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ServantStatusBattleListViewItem_o *p_hpformat; // x19
  int32_t v5; // w20
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A0150C & 1) == 0 )
  {
    sub_1B64870(&LocalizationManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_2916/*"BATTLE_RAID_TOTALHP"*/, v3);
    byte_4A0150C = 1;
  }
  p_hpformat = (ServantStatusBattleListViewItem_o *)&this->fields.hpformat;
  if ( !this->fields.hpformat )
  {
    v5 = (_DWORD)this + 484;
    v6 = System_Int32__ToString(v5, 0LL);
    v7 = System_String__Concat_61383576((System_String_o *)StringLiteral_2916/*"BATTLE_RAID_TOTALHP"*/, v6, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( LocalizationManager__ContainsKey(v7, 0LL) )
    {
      v8 = System_Int32__ToString(v5, 0LL);
      v9 = System_String__Concat_61383576((System_String_o *)StringLiteral_2916/*"BATTLE_RAID_TOTALHP"*/, v8, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = (System_String_o *)StringLiteral_2916/*"BATTLE_RAID_TOTALHP"*/;
    }
    v10 = LocalizationManager__Get(v9, 0LL);
    p_hpformat->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B64814(p_hpformat, (int32_t)v10, v11, v12);
  }
  return (System_String_o *)p_hpformat->klass;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantRaidParamComponent__setData(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v19; // x1
  Il2CppObject *SingleEntity; // x21
  EventBossStatusUiEntity_o *v21; // x23
  int32_t GaugeId; // w0
  UILabel_o *raidhplabel; // x22
  int v24; // w21
  int v25; // s0
  int v26; // s1
  int v27; // s2
  float v28; // s3
  int32_t hpBarType; // w8
  int32_t v30; // w1
  const MethodInfo *v31; // x1
  UIAtlas_o *v32; // x21
  UISprite_o *raidDownNormalSprite; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  UISprite_o *raidDownLastSprite; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  UISprite_o *raidDownEndSprite; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x0
  int32_t v48; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v49; // [xsp+18h] [xbp-38h] BYREF
  int32_t v50; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A0150D & 1) == 0 )
  {
    sub_1B64870(&Method_AssetData_GetObject_GameObject____75714440, data);
    sub_1B64870(&AssetManager_TypeInfo, v5);
    sub_1B64870(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v6);
    sub_1B64870(&Method_DataManager_GetMaster_BattleMaster___, v7);
    sub_1B64870(&DataManager_TypeInfo, v8);
    sub_1B64870(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v9);
    sub_1B64870(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v10);
    sub_1B64870(&int_TypeInfo, v11);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B64870(&StringLiteral_22677/*"raid_down_last_"*/, v13);
    sub_1B64870(&StringLiteral_3188/*"Battle/Common"*/, v14);
    sub_1B64870(&StringLiteral_3206/*"BattleAssetUIAtlas"*/, v15);
    sub_1B64870(&StringLiteral_22676/*"raid_down_end_"*/, v16);
    sub_1B64870(&StringLiteral_22678/*"raid_down_normal_"*/, v17);
    byte_4A0150D = 1;
  }
  if ( data )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !Master_object )
      goto LABEL_30;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     Master_object,
                     (const MethodInfo_30D63E8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                    (DataManager_o *)Master_object,
                                                                    (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !SingleEntity || !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                    (EventBossStatusUiMaster_o *)Master_object,
                                                                    HIDWORD(SingleEntity[6].klass),
                                                                    data->fields.raidId,
                                                                    0LL);
    if ( Master_object )
    {
      v21 = (EventBossStatusUiEntity_o *)Master_object;
      GaugeId = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Master_object, 0LL);
      raidhplabel = this->fields.raidhplabel;
      v24 = GaugeId;
      v51.fields.r = 0.0;
      v51.fields.g = 0.0;
      v51.fields.b = 0.0;
      v51.fields.a = 0.0;
      *(UnityEngine_Color_o *)&v25 = EventBossStatusUiEntity__GetTextEffectColor(v21, v51, 0LL);
      if ( !raidhplabel )
        goto LABEL_30;
    }
    else
    {
      raidhplabel = this->fields.raidhplabel;
      v27 = 0;
      v28 = 1.0;
      v24 = -1;
      v26 = 0;
      v25 = 0;
      if ( !raidhplabel )
        goto LABEL_30;
    }
    UILabel__set_effectColor(raidhplabel, *(UnityEngine_Color_o *)&v25, 0LL);
    hpBarType = data->fields.hpBarType;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
    this->fields.hpBarType = hpBarType;
    if ( !Master_object )
      goto LABEL_30;
    v30 = v24 == -1 ? hpBarType : v24;
    BattleServantChangeBarComponent__setBarType((BattleServantChangeBarComponent_o *)Master_object, v30, 0, 0LL);
    BattleServantRaidParamComponent__updateStateString(this, v31);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetManager__getAssetStorage(
                                                                    (System_String_o *)StringLiteral_3188/*"Battle/Common"*/,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetData__GetObject_object__48356600(
                                                                    (AssetData_o *)Master_object,
                                                                    (System_String_o *)StringLiteral_3206/*"BattleAssetUIAtlas"*/,
                                                                    (const MethodInfo_2E1DCF8 *)Method_AssetData_GetObject_GameObject____75714440);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Master_object,
                                                                    (const MethodInfo_2E8A1B4 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !this->fields.raidDownNormalSprite )
      goto LABEL_30;
    v32 = (UIAtlas_o *)Master_object;
    UISprite__set_atlas(this->fields.raidDownNormalSprite, (UIAtlas_o *)Master_object, 0LL);
    raidDownNormalSprite = this->fields.raidDownNormalSprite;
    v50 = this->fields.hpBarType;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50, v34, v35, v36);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                    (Il2CppObject *)StringLiteral_22678/*"raid_down_normal_"*/,
                                                                    v37,
                                                                    0LL);
    if ( !raidDownNormalSprite )
      goto LABEL_30;
    UISprite__set_spriteName(raidDownNormalSprite, (System_String_o *)Master_object, 0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownLastSprite;
    if ( !Master_object )
      goto LABEL_30;
    UISprite__set_atlas((UISprite_o *)Master_object, v32, 0LL);
    raidDownLastSprite = this->fields.raidDownLastSprite;
    v49 = this->fields.hpBarType;
    v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49, v39, v40, v41);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                    (Il2CppObject *)StringLiteral_22677/*"raid_down_last_"*/,
                                                                    v42,
                                                                    0LL);
    if ( !raidDownLastSprite
      || (UISprite__set_spriteName(raidDownLastSprite, (System_String_o *)Master_object, 0LL),
          (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownEndSprite) == 0LL)
      || (UISprite__set_atlas((UISprite_o *)Master_object, v32, 0LL),
          raidDownEndSprite = this->fields.raidDownEndSprite,
          v48 = this->fields.hpBarType,
          v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v44, v45, v46),
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                          (Il2CppObject *)StringLiteral_22676/*"raid_down_end_"*/,
                                                                          v47,
                                                                          0LL),
          !raidDownEndSprite) )
    {
LABEL_30:
      sub_1B64ACC(Master_object, v19);
    }
    UISprite__set_spriteName(raidDownEndSprite, (System_String_o *)Master_object, 0LL);
  }
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantRaidParamComponent__setRaidDownMessage(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *v2; // x19
  __int64 v3; // x1
  UnityEngine_Object_o *raidDownEndSprite; // x20
  bool v5; // w1
  struct BattlePerformance_o *perf; // x8
  bool isRaidLastDay; // w0
  UnityEngine_Object_o *raidDownNormalSprite; // x21
  bool v9; // w20
  UnityEngine_Object_o *raidDownLastSprite; // x21

  v2 = this;
  if ( (byte_4A01510 & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, method);
    this = (BattleServantRaidParamComponent_o *)sub_1B64870(&StringLiteral_1/*""*/, v3);
    byte_4A01510 = 1;
  }
  if ( v2->fields.isDefeatCount )
  {
    raidDownEndSprite = (UnityEngine_Object_o *)v2->fields.raidDownEndSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v5 = 1;
LABEL_24:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v5, 0LL);
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
    isRaidLastDay = BattleData__isRaidLastDay((BattleData_o *)this, 0LL);
    raidDownNormalSprite = (UnityEngine_Object_o *)v2->fields.raidDownNormalSprite;
    v9 = isRaidLastDay;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raidDownNormalSprite, 0LL, 0LL) )
    {
      this = (BattleServantRaidParamComponent_o *)v2->fields.raidDownNormalSprite;
      if ( !this )
        goto LABEL_29;
      this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v9, 0LL);
    }
    raidDownLastSprite = (UnityEngine_Object_o *)v2->fields.raidDownLastSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          v5 = v9;
          goto LABEL_24;
        }
      }
LABEL_29:
      sub_1B64ACC(this, method);
    }
  }
LABEL_25:
  this = (BattleServantRaidParamComponent_o *)v2->fields.raidhplabel;
  if ( !this )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (BattleServantRaidParamComponent_o *)v2->fields.raidhplabel;
  if ( !this )
    goto LABEL_29;
  this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
  if ( !this )
    goto LABEL_29;
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
    sub_1B64ACC(0LL, split);
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct BattleRaidInfo_o *newinfo; // x1
  BattleServantData_o *data; // x1
  const MethodInfo *v7; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.previnfo, (int32_t)newinfo, v2, v3);
  data = this->fields.data;
  this->fields.flgUpdate = 0;
  BattleServantRaidParamComponent__updateRaidHpBase(this, data, v7);
}


void __fastcall BattleServantRaidParamComponent__updateRaidHpBase(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleRaidInfo_o *previnfo; // x8
  int64_t maxHp; // x22
  int64_t totalDamage; // x23
  int64_t v14; // x20
  int32_t v15; // w21
  struct BattlePerformance_o *perf; // x8
  bool v17; // w0
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x3
  Il2CppObject *SingleEntity; // x21
  _BOOL4 v21; // w22
  _QWORD *p_klass; // x8
  UILabel_o *raidhplabel; // x21
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_String_o *RaidHPFormat; // x22
  System_Int64_c *v28; // x0
  Il2CppObject *v29; // x0
  struct BattleRaidInfo_o *v30; // x8
  struct BattleRaidInfo_o *v31; // x8
  int64_t v32; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4A0150E & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_EventPointBuffMaster___, svtData);
    sub_1B64870(&Method_DataManager_GetMasterData_EventRaidMaster___, v5);
    sub_1B64870(&Method_DataManager_GetMaster_BattleMaster___, v6);
    sub_1B64870(&DataManager_TypeInfo, v7);
    sub_1B64870(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v8);
    sub_1B64870(&long_TypeInfo, v9);
    this = (BattleServantRaidParamComponent_o *)sub_1B64870(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v10);
    byte_4A0150E = 1;
  }
  previnfo = v4->fields.previnfo;
  if ( !previnfo )
    goto LABEL_41;
  maxHp = previnfo->fields.maxHp;
  totalDamage = previnfo->fields.totalDamage;
  if ( v4->fields.isDefeatCount )
  {
    v14 = maxHp - totalDamage;
  }
  else
  {
    if ( !svtData )
      goto LABEL_41;
    v15 = BattleServantData__getMaxHp(svtData, 0LL);
    this = (BattleServantRaidParamComponent_o *)BattleServantData__getNowHp(svtData, 0LL);
    v14 = maxHp - totalDamage - (v15 - (int)this);
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_41;
  v17 = BattleData__isDisableChangeRaidDownMessage((BattleData_o *)this, 0LL);
  if ( v14 <= 0 && !v17 )
  {
    BattleServantRaidParamComponent__setRaidDownMessage(v4, v18);
    goto LABEL_35;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E3B674 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_41;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   (const MethodInfo_30D63E8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( this )
  {
    if ( !SingleEntity )
      goto LABEL_41;
    this = (BattleServantRaidParamComponent_o *)EventPointBuffMaster__getEntityList(
                                                  (EventPointBuffMaster_o *)this,
                                                  HIDWORD(SingleEntity[6].klass),
                                                  0LL);
    if ( !this )
      goto LABEL_41;
    v21 = LODWORD(this->fields.m_CancellationTokenSource) != 0;
  }
  else
  {
    v21 = 0;
  }
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE318 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !this )
    goto LABEL_30;
  if ( !SingleEntity )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                                (EventRaidMaster_o *)this,
                                                HIDWORD(SingleEntity[6].klass),
                                                0LL);
  if ( this )
  {
    p_klass = &this->fields.m_CancellationTokenSource->klass;
    if ( p_klass )
    {
      if ( !(_DWORD)p_klass )
        sub_1B64AD4(this, svtData);
      p_klass = &this->fields.root->klass;
      if ( !p_klass )
        goto LABEL_41;
      LODWORD(p_klass) = p_klass[12] > 0LL;
    }
  }
  else
  {
LABEL_30:
    LODWORD(p_klass) = 0;
  }
  if ( !((unsigned int)p_klass | v21) && v4->fields.isDefeatCount && !v4->fields.isJumbleRaid )
  {
    raidhplabel = v4->fields.raidhplabel;
    this = (BattleServantRaidParamComponent_o *)BattleServantRaidParamComponent__get_RaidHPFormat(
                                                  v4,
                                                  (const MethodInfo *)svtData);
    v31 = v4->fields.previnfo;
    if ( v31 )
    {
      RaidHPFormat = (System_String_o *)this;
      v32 = v31->fields.totalDamage;
      v28 = long_TypeInfo;
      goto LABEL_33;
    }
LABEL_41:
    sub_1B64ACC(this, svtData);
  }
  raidhplabel = v4->fields.raidhplabel;
  RaidHPFormat = BattleServantRaidParamComponent__get_RaidHPFormat(v4, (const MethodInfo *)svtData);
  v32 = v14;
  v28 = long_TypeInfo;
LABEL_33:
  v29 = (Il2CppObject *)j_il2cpp_value_box_0(v28, &v32, v24, v25, v26);
  this = (BattleServantRaidParamComponent_o *)System_String__Format(RaidHPFormat, v29, 0LL);
  if ( !raidhplabel )
    goto LABEL_41;
  UILabel__set_text(raidhplabel, (System_String_o *)this, 0LL);
LABEL_35:
  v30 = v4->fields.previnfo;
  if ( !v30 )
    goto LABEL_41;
  BattleServantRaidParamComponent__updateRaidHpbar(v4, v14, v30->fields.maxHp, v19);
}


void __fastcall BattleServantRaidParamComponent__updateRaidHpbar(
        BattleServantRaidParamComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raidhpGauge; // x22
  bool v8; // w0
  __int64 v9; // x1
  BattleHpGaugeBarComponent_o *v10; // x0
  int64_t v11; // x1

  if ( (byte_4A0150F & 1) == 0 )
  {
    sub_1B64870(&UnityEngine_Object_TypeInfo, now);
    byte_4A0150F = 1;
  }
  raidhpGauge = (UnityEngine_Object_o *)this->fields.raidhpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(raidhpGauge, 0LL, 0LL);
  if ( (now & 0x8000000000000000LL) != 0 )
  {
    if ( v8 )
    {
      v10 = this->fields.raidhpGauge;
      if ( v10 )
      {
        v11 = 0LL;
        goto LABEL_12;
      }
LABEL_14:
      sub_1B64ACC(v10, v9);
    }
  }
  else if ( v8 )
  {
    v10 = this->fields.raidhpGauge;
    if ( v10 )
    {
      v11 = now;
LABEL_12:
      BattleHpGaugeBarComponent__setValue_43435072(v10, v11, max, 0LL);
      return;
    }
    goto LABEL_14;
  }
}


void __fastcall BattleServantRaidParamComponent__updateRaidInfo(
        BattleServantRaidParamComponent_o *this,
        BattleRaidInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleRaidInfo_o **p_newinfo; // x0
  struct BattleRaidInfo_o *newinfo; // x1
  char v7; // w2
  int32_t v8; // w3
  BattleServantData_o *data; // x1
  const MethodInfo *v10; // x2

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_1B64814((ServantStatusBattleListViewItem_o *)p_newinfo, (int32_t)info, fixUpdate, (int32_t)method);
    newinfo = this->fields.newinfo;
    this->fields.previnfo = newinfo;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.previnfo, (int32_t)newinfo, v7, v8);
    data = this->fields.data;
    this->fields.flgUpdate = 0;
    BattleServantRaidParamComponent__updateRaidHpBase(this, data, v10);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_1B64ACC(p_newinfo, 0LL);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      this->fields.newinfo = info;
      sub_1B64814((ServantStatusBattleListViewItem_o *)p_newinfo, (int32_t)info, fixUpdate, (int32_t)method);
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
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A01511 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_4A01511 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  stateLabel = this->fields.stateLabel;
  if ( !stateLabel
    || (statestring = data->fields.statestring,
        stateLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)stateLabel, 0LL),
        (shortNameLabel = this->fields.shortNameLabel) == 0LL)
    || (mText = shortNameLabel->fields.mText) == 0LL
    || !stateLabel )
  {
LABEL_19:
    sub_1B64ACC(stateLabel, method);
  }
  v9.fields.z = 0.0;
  v9.fields.x = (float)(mText->fields._stringLength * shortNameLabel->fields.mFontSize) + 10.0;
  v9.fields.y = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v9, 0LL);
  if ( !statestring )
    goto LABEL_12;
  if ( (System_String__IndexOf(statestring, 0x3Au, 0LL) & 0x80000000) != 0 )
  {
    stateLabel = this->fields.stateLabel;
    if ( stateLabel )
    {
      v8 = statestring;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
  stateLabel = System_String__Split(statestring, 0x3Au, 0, 0LL);
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
  UILabel__set_text((UILabel_o *)stateLabel, v8, 0LL);
}
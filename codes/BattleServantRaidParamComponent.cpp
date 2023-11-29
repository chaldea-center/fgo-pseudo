void __fastcall BattleServantRaidParamComponent___ctor(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCD22 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantParamComponent_TypeInfo, method);
    byte_40FCD22 = 1;
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
    sub_B170D4();
  return newinfo->fields.totalDamage;
}


System_String_o *__fastcall BattleServantRaidParamComponent__get_RaidHPFormat(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantConfConponent_o *p_hpformat; // x19
  int32_t v5; // w20
  System_String_o *v6; // x0
  System_String_o *v7; // x21
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40FCD1C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2462, v3);
    byte_40FCD1C = 1;
  }
  p_hpformat = (BattleServantConfConponent_o *)&this->fields.hpformat;
  if ( !this->fields.hpformat )
  {
    v5 = (_DWORD)this + 460;
    v6 = System_Int32__ToString(v5, 0LL);
    v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_2462, v6, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( LocalizationManager__ContainsKey(v7, 0LL) )
    {
      v8 = System_Int32__ToString(v5, 0LL);
      v9 = System_String__Concat_43743732((System_String_o *)StringLiteral_2462, v8, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = v9;
    }
    else
    {
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = (System_String_o *)StringLiteral_2462;
    }
    v11 = (System_Int32_array **)LocalizationManager__Get(v10, 0LL);
    p_hpformat->klass = (BattleServantConfConponent_c *)v11;
    sub_B16F98(p_hpformat, v11, v12, v13, v14, v15, v16, v17);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *SingleEntity; // x21
  WebViewManager_o *Instance; // x0
  EventBossStatusUiMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int v23; // s3
  float v24; // s4
  float v25; // s5
  float v26; // s6
  EventBossStatusUiEntity_o *v27; // x23
  int32_t GaugeId; // w0
  UILabel_o *raidhplabel; // x22
  int32_t hpBarType; // w21
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  int v35; // s0
  int v36; // s1
  int v37; // s2
  BattleServantChangeBarComponent_o *changeGauge; // x0
  const MethodInfo *v39; // x1
  AssetData_o *AssetStorage; // x0
  UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  UIAtlas_o *v43; // x21
  UISprite_o *raidDownNormalSprite; // x22
  Il2CppObject *v45; // x0
  System_String_o *v46; // x0
  UISprite_o *raidDownLastSprite; // x0
  UISprite_o *v48; // x22
  Il2CppObject *v49; // x0
  System_String_o *v50; // x0
  UISprite_o *raidDownEndSprite; // x0
  UISprite_o *v52; // x21
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCD1D & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v10);
    sub_B16FFC(&int_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_21593, v13);
    sub_B16FFC(&StringLiteral_2743, v14);
    sub_B16FFC(&StringLiteral_2758, v15);
    sub_B16FFC(&StringLiteral_21592, v16);
    sub_B16FFC(&StringLiteral_21594, v17);
    byte_40FCD1D = 1;
  }
  if ( data )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_31;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     Master_WarQuestSelectionMaster,
                     (const MethodInfo_266F674 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_31;
    MasterData_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !SingleEntity || !MasterData_WarQuestSelectionMaster )
      goto LABEL_31;
    EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                  MasterData_WarQuestSelectionMaster,
                                  HIDWORD(SingleEntity[6].klass),
                                  data->fields.raidId,
                                  0LL);
    if ( EntityFromEventIdAndIndex )
    {
      v27 = EntityFromEventIdAndIndex;
      GaugeId = EventBossStatusUiEntity__GetGaugeId(EntityFromEventIdAndIndex, 0LL);
      raidhplabel = this->fields.raidhplabel;
      hpBarType = GaugeId;
      v56.fields.r = 0.0;
      v56.fields.g = 0.0;
      v56.fields.b = 0.0;
      v56.fields.a = 0.0;
      *(UnityEngine_Color_o *)&methodPointer = EventBossStatusUiEntity__GetTextEffectColor(v27, v56, 0LL);
      if ( !raidhplabel )
        goto LABEL_31;
    }
    else
    {
      raidhplabel = this->fields.raidhplabel;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      var40.methodPointer = 0LL;
      var40.invoker_method = 0LL;
      UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v23 - 3), v24, v25, v26, &var40);
      methodPointer_high = HIDWORD(var40.methodPointer);
      methodPointer = (int)var40.methodPointer;
      invoker_method_high = HIDWORD(var40.invoker_method);
      invoker_method = (int)var40.invoker_method;
      hpBarType = -1;
      if ( !raidhplabel )
        goto LABEL_31;
    }
    UILabel__set_effectColor(raidhplabel, *(UnityEngine_Color_o *)&methodPointer, 0LL);
    changeGauge = this->fields.changeGauge;
    this->fields.hpBarType = data->fields.hpBarType;
    if ( hpBarType == -1 )
      hpBarType = data->fields.hpBarType;
    if ( !changeGauge )
      goto LABEL_31;
    BattleServantChangeBarComponent__setBarType(changeGauge, hpBarType, 0, 0LL);
    BattleServantRaidParamComponent__updateStateString(this, v39);
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_2743, 0LL);
    if ( !AssetStorage )
      goto LABEL_31;
    Object_WarBoardWaitTimeSetting = (UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                   AssetStorage,
                                                                   (System_String_o *)StringLiteral_2758,
                                                                   (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
    if ( !Object_WarBoardWaitTimeSetting )
      goto LABEL_31;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                Object_WarBoardWaitTimeSetting,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !this->fields.raidDownNormalSprite )
      goto LABEL_31;
    v43 = (UIAtlas_o *)Component_srcLineSprite;
    UISprite__set_atlas(this->fields.raidDownNormalSprite, (UIAtlas_o *)Component_srcLineSprite, 0LL);
    raidDownNormalSprite = this->fields.raidDownNormalSprite;
    LODWORD(var40.methodPointer) = this->fields.hpBarType;
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &var40);
    v46 = System_String__Concat((Il2CppObject *)StringLiteral_21594, v45, 0LL);
    if ( !raidDownNormalSprite )
      goto LABEL_31;
    UISprite__set_spriteName(raidDownNormalSprite, v46, 0LL);
    raidDownLastSprite = this->fields.raidDownLastSprite;
    if ( !raidDownLastSprite )
      goto LABEL_31;
    UISprite__set_atlas(raidDownLastSprite, v43, 0LL);
    v48 = this->fields.raidDownLastSprite;
    HIDWORD(var40.klass) = this->fields.hpBarType;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, (char *)&var40.klass + 4);
    v50 = System_String__Concat((Il2CppObject *)StringLiteral_21593, v49, 0LL);
    if ( !v48
      || (UISprite__set_spriteName(v48, v50, 0LL), (raidDownEndSprite = this->fields.raidDownEndSprite) == 0LL)
      || (UISprite__set_atlas(raidDownEndSprite, v43, 0LL),
          v52 = this->fields.raidDownEndSprite,
          LODWORD(var40.klass) = this->fields.hpBarType,
          v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &var40.klass),
          v54 = System_String__Concat((Il2CppObject *)StringLiteral_21592, v53, 0LL),
          !v52) )
    {
LABEL_31:
      sub_B170D4();
    }
    UISprite__set_spriteName(v52, v54, 0LL);
  }
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantRaidParamComponent__setRaidDownMessage(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *raidDownEndSprite; // x20
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v7; // w1
  struct BattlePerformance_o *perf; // x8
  BattleData_o *data; // x0
  bool isRaidLastDay; // w0
  UnityEngine_Object_o *raidDownNormalSprite; // x21
  bool v12; // w20
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_Object_o *raidDownLastSprite; // x21
  UnityEngine_Component_o *v16; // x0
  UILabel_o *raidhplabel; // x0
  UnityEngine_Component_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0

  if ( (byte_40FCD20 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FCD20 = 1;
  }
  if ( this->fields.isDefeatCount )
  {
    raidDownEndSprite = (UnityEngine_Object_o *)this->fields.raidDownEndSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidDownEndSprite, 0LL, 0LL) )
    {
      v5 = (UnityEngine_Component_o *)this->fields.raidDownEndSprite;
      if ( v5 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
        if ( gameObject )
        {
          v7 = 1;
LABEL_27:
          UnityEngine_GameObject__SetActive(gameObject, v7, 0LL);
          goto LABEL_28;
        }
      }
      goto LABEL_32;
    }
  }
  else
  {
    perf = this->fields.perf;
    if ( !perf )
      goto LABEL_32;
    data = perf->fields.data;
    if ( !data )
      goto LABEL_32;
    isRaidLastDay = BattleData__isRaidLastDay(data, 0LL);
    raidDownNormalSprite = (UnityEngine_Object_o *)this->fields.raidDownNormalSprite;
    v12 = isRaidLastDay;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidDownNormalSprite, 0LL, 0LL) )
    {
      v13 = (UnityEngine_Component_o *)this->fields.raidDownNormalSprite;
      if ( !v13 )
        goto LABEL_32;
      v14 = UnityEngine_Component__get_gameObject(v13, 0LL);
      if ( !v14 )
        goto LABEL_32;
      UnityEngine_GameObject__SetActive(v14, !v12, 0LL);
    }
    raidDownLastSprite = (UnityEngine_Object_o *)this->fields.raidDownLastSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(raidDownLastSprite, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Component_o *)this->fields.raidDownLastSprite;
      if ( v16 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v16, 0LL);
        if ( gameObject )
        {
          v7 = v12;
          goto LABEL_27;
        }
      }
LABEL_32:
      sub_B170D4();
    }
  }
LABEL_28:
  raidhplabel = this->fields.raidhplabel;
  if ( !raidhplabel )
    goto LABEL_32;
  UILabel__set_text(raidhplabel, (System_String_o *)StringLiteral_1, 0LL);
  v18 = (UnityEngine_Component_o *)this->fields.raidhplabel;
  if ( !v18 )
    goto LABEL_32;
  v19 = UnityEngine_Component__get_gameObject(v18, 0LL);
  if ( !v19 )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(v19, 0, 0LL);
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
    sub_B170D4();
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
  sub_B16F98(
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
  BattleData_o *data; // x0
  bool v18; // w0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *SingleEntity; // x21
  WebViewManager_o *Instance; // x0
  EventPointBuffMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventPointBuffEntity_array *EntityList; // x0
  _BOOL4 v26; // w22
  WebViewManager_o *v27; // x0
  EventRaidMaster_o *v28; // x0
  const MethodInfo *v29; // x1
  EventRaidEntity_array *EventRaidEntityArrayFromEventId; // x0
  __int64 v31; // x2
  EventRaidEntity_o *v32; // x8
  UILabel_o *raidhplabel; // x21
  System_String_o *v34; // x22
  System_Int64_c *v35; // x0
  Il2CppObject *v36; // x0
  System_String_o *v37; // x0
  struct BattleRaidInfo_o *v38; // x8
  System_String_o *RaidHPFormat; // x0
  struct BattleRaidInfo_o *v40; // x8
  int64_t v41; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCD1E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointBuffMaster___, svtData);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventRaidMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v8);
    sub_B16FFC(&long_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40FCD1E = 1;
  }
  previnfo = this->fields.previnfo;
  if ( !previnfo )
    goto LABEL_42;
  maxHp = previnfo->fields.maxHp;
  totalDamage = previnfo->fields.totalDamage;
  if ( this->fields.isDefeatCount )
  {
    v14 = maxHp - totalDamage;
  }
  else
  {
    if ( !svtData )
      goto LABEL_42;
    v15 = BattleServantData__getMaxHp(svtData, 0LL);
    v14 = maxHp - totalDamage - (v15 - BattleServantData__getNowHp(svtData, 0LL));
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_42;
  data = perf->fields.data;
  if ( !data )
    goto LABEL_42;
  v18 = BattleData__isDisableChangeRaidDownMessage(data, 0LL);
  if ( v14 <= 0 && !v18 )
  {
    BattleServantRaidParamComponent__setRaidDownMessage(this, v19);
    goto LABEL_36;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_42;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   Master_WarQuestSelectionMaster,
                   (const MethodInfo_266F674 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  MasterData_WarQuestSelectionMaster = (EventPointBuffMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    if ( !SingleEntity )
      goto LABEL_42;
    EntityList = EventPointBuffMaster__getEntityList(
                   MasterData_WarQuestSelectionMaster,
                   HIDWORD(SingleEntity[6].klass),
                   0LL);
    if ( !EntityList )
      goto LABEL_42;
    v26 = EntityList->max_length != 0;
  }
  else
  {
    v26 = 0;
  }
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v27 )
    goto LABEL_42;
  v28 = (EventRaidMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)v27,
                               (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventRaidMaster___);
  if ( !v28 )
    goto LABEL_31;
  if ( !SingleEntity )
    goto LABEL_42;
  EventRaidEntityArrayFromEventId = EventRaidMaster__GetEventRaidEntityArrayFromEventId(
                                      v28,
                                      HIDWORD(SingleEntity[6].klass),
                                      0LL);
  if ( EventRaidEntityArrayFromEventId )
  {
    v32 = *(EventRaidEntity_o **)&EventRaidEntityArrayFromEventId->max_length;
    if ( v32 )
    {
      if ( !(_DWORD)v32 )
      {
        sub_B17100(EventRaidEntityArrayFromEventId, v29, v31);
        sub_B170A0();
      }
      v32 = EventRaidEntityArrayFromEventId->m_Items[0];
      if ( !v32 )
        goto LABEL_42;
      LODWORD(v32) = v32->fields.timeLimitAt > 0;
    }
  }
  else
  {
LABEL_31:
    LODWORD(v32) = 0;
  }
  if ( !((unsigned int)v32 | v26) && this->fields.isDefeatCount && !this->fields.isJumbleRaid )
  {
    raidhplabel = this->fields.raidhplabel;
    RaidHPFormat = BattleServantRaidParamComponent__get_RaidHPFormat(this, v29);
    v40 = this->fields.previnfo;
    if ( v40 )
    {
      v34 = RaidHPFormat;
      v41 = v40->fields.totalDamage;
      v35 = long_TypeInfo;
      goto LABEL_34;
    }
LABEL_42:
    sub_B170D4();
  }
  raidhplabel = this->fields.raidhplabel;
  v34 = BattleServantRaidParamComponent__get_RaidHPFormat(this, v29);
  v41 = v14;
  v35 = long_TypeInfo;
LABEL_34:
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(v35, &v41);
  v37 = System_String__Format(v34, v36, 0LL);
  if ( !raidhplabel )
    goto LABEL_42;
  UILabel__set_text(raidhplabel, v37, 0LL);
LABEL_36:
  v38 = this->fields.previnfo;
  if ( !v38 )
    goto LABEL_42;
  BattleServantRaidParamComponent__updateRaidHpbar(this, v14, v38->fields.maxHp, v20);
}


void __fastcall BattleServantRaidParamComponent__updateRaidHpbar(
        BattleServantRaidParamComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  UnityEngine_Object_o *raidhpGauge; // x22

  if ( (byte_40FCD1F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, now);
    byte_40FCD1F = 1;
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
      if ( this->fields.raidhpGauge )
BattleHpGaugeBarComponent$$setValue_19731276:
        JUMPOUT(0x12D134CLL);
LABEL_17:
      sub_B170D4();
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
      if ( this->fields.raidhpGauge )
        goto BattleHpGaugeBarComponent$$setValue_19731276;
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
    sub_B16F98(
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
    sub_B16F98(
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
      sub_B170D4();
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      this->fields.newinfo = info;
      sub_B16F98(
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
  __int64 v3; // x1
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *stateLabel; // x0
  System_String_o *statestring; // x20
  UnityEngine_Transform_o *transform; // x0
  struct UILabel_o *shortNameLabel; // x8
  struct System_String_o *mText; // x9
  __int64 v10; // x2
  System_Char_array *v11; // x0
  __int64 v12; // x2
  System_String_array *v13; // x0
  UILabel_o *v14; // x0
  System_String_o *v15; // x1
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCD21 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40FCD21 = 1;
  }
  data = this->fields.data;
  if ( data )
  {
    stateLabel = (UnityEngine_Component_o *)this->fields.stateLabel;
    if ( stateLabel )
    {
      statestring = data->fields.statestring;
      transform = UnityEngine_Component__get_transform(stateLabel, 0LL);
      shortNameLabel = this->fields.shortNameLabel;
      if ( shortNameLabel )
      {
        mText = shortNameLabel->fields.mText;
        if ( mText )
        {
          if ( transform )
          {
            v16.fields.z = 0.0;
            v16.fields.x = (float)(mText->fields.m_stringLength * shortNameLabel->fields.mFontSize) + 10.0;
            v16.fields.y = 0.0;
            UnityEngine_Transform__set_localPosition(transform, v16, 0LL);
            if ( !statestring )
              goto LABEL_14;
            if ( (System_String__IndexOf(statestring, 0x3Au, 0LL) & 0x80000000) != 0 )
            {
              v14 = this->fields.stateLabel;
              if ( v14 )
              {
                v15 = statestring;
                goto LABEL_16;
              }
            }
            else
            {
              v11 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v10);
              if ( v11 )
              {
                if ( !v11->max_length )
                {
                  sub_B17100(v11, v11, v12);
                  sub_B170A0();
                }
                v11->m_Items[2] = 58;
                v13 = System_String__Split(statestring, v11, 0LL);
                if ( v13 )
                {
                  if ( (int)v13->max_length < 2 )
                    goto LABEL_14;
                  if ( this->fields.stateLabel )
                  {
                    v15 = v13->m_Items[1];
                    v14 = this->fields.stateLabel;
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
    sub_B170D4();
  }
LABEL_14:
  v14 = this->fields.stateLabel;
  if ( !v14 )
    goto LABEL_21;
  v15 = (System_String_o *)StringLiteral_1;
LABEL_16:
  UILabel__set_text(v14, v15, 0LL);
}
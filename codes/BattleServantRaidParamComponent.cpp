void __fastcall BattleServantRaidParamComponent___ctor(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1930D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent_TypeInfo, method, v2);
    byte_4B1930D = 1;
  }
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, method);
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
    sub_1BCAA3C(this, method);
  return newinfo->fields.totalDamage;
}


System_String_o *__fastcall BattleServantRaidParamComponent__get_RaidHPFormat(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_hpformat; // x19
  int32_t v7; // w20
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  __int64 v11; // x1
  System_String_o *v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B19307 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_2958/*"BATTLE_RAID_TOTALHP"*/, v4, v5);
    byte_4B19307 = 1;
  }
  p_hpformat = (PartyOrganizationUtility_o *)&this->fields.hpformat;
  if ( !this->fields.hpformat )
  {
    v7 = (_DWORD)this + 492;
    v8 = System_Int32__ToString(v7, 0LL);
    v10 = System_String__Concat_62401220((System_String_o *)StringLiteral_2958/*"BATTLE_RAID_TOTALHP"*/, v8, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    if ( LocalizationManager__ContainsKey(v10, 0LL) )
    {
      v12 = System_Int32__ToString(v7, 0LL);
      v14 = System_String__Concat_62401220((System_String_o *)StringLiteral_2958/*"BATTLE_RAID_TOTALHP"*/, v12, 0LL);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
    }
    else
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v11);
      v14 = (System_String_o *)StringLiteral_2958/*"BATTLE_RAID_TOTALHP"*/;
    }
    v15 = LocalizationManager__Get(v14, 0LL);
    p_hpformat->klass = (PartyOrganizationUtility_c *)v15;
    sub_1BCA784(p_hpformat, (int64_t)v15, v16, v17, v18, v19, v20, v21);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v32; // x1
  Il2CppObject *SingleEntity; // x21
  EventBossStatusUiEntity_o *v34; // x23
  int32_t GaugeId; // w0
  UILabel_o *raidhplabel; // x22
  int v37; // w21
  int v38; // s0
  int v39; // s1
  int v40; // s2
  float v41; // s3
  int32_t hpBarType; // w8
  int32_t v43; // w1
  const MethodInfo *v44; // x1
  __int64 v45; // x1
  UIAtlas_o *v46; // x21
  UISprite_o *raidDownNormalSprite; // x22
  Il2CppObject *v48; // x0
  UISprite_o *raidDownLastSprite; // x22
  Il2CppObject *v50; // x0
  UISprite_o *raidDownEndSprite; // x21
  Il2CppObject *v52; // x0
  int32_t v53; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v54; // [xsp+18h] [xbp-38h] BYREF
  int32_t v55; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19308 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&AssetManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v15, v16);
    sub_1BCA7E0(&int_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&StringLiteral_23011/*"raid_down_last_"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_3233/*"Battle/Common"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3251/*"BattleAssetUIAtlas"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_23010/*"raid_down_end_"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_23012/*"raid_down_normal_"*/, v29, v30);
    byte_4B19308 = 1;
  }
  if ( data )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, data);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !Master_object )
      goto LABEL_30;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     Master_object,
                     (const MethodInfo_31B30A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                    (DataManager_o *)Master_object,
                                                                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !SingleEntity || !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                    (EventBossStatusUiMaster_o *)Master_object,
                                                                    HIDWORD(SingleEntity[6].klass),
                                                                    data->fields.raidId,
                                                                    0LL);
    if ( Master_object )
    {
      v34 = (EventBossStatusUiEntity_o *)Master_object;
      GaugeId = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Master_object, 0LL);
      raidhplabel = this->fields.raidhplabel;
      v37 = GaugeId;
      v56.fields.r = 0.0;
      v56.fields.g = 0.0;
      v56.fields.b = 0.0;
      v56.fields.a = 0.0;
      *(UnityEngine_Color_o *)&v38 = EventBossStatusUiEntity__GetTextEffectColor(v34, v56, 0LL);
      if ( !raidhplabel )
        goto LABEL_30;
    }
    else
    {
      raidhplabel = this->fields.raidhplabel;
      v40 = 0;
      v41 = 1.0;
      v37 = -1;
      v39 = 0;
      v38 = 0;
      if ( !raidhplabel )
        goto LABEL_30;
    }
    UILabel__set_effectColor(raidhplabel, *(UnityEngine_Color_o *)&v38, 0LL);
    hpBarType = data->fields.hpBarType;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
    this->fields.hpBarType = hpBarType;
    if ( !Master_object )
      goto LABEL_30;
    v43 = v37 == -1 ? hpBarType : v37;
    BattleServantChangeBarComponent__setBarType((BattleServantChangeBarComponent_o *)Master_object, v43, 0, 0LL);
    BattleServantRaidParamComponent__updateStateString(this, v44);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v45);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetManager__getAssetStorage(
                                                                    (System_String_o *)StringLiteral_3233/*"Battle/Common"*/,
                                                                    0LL);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)AssetData__GetObject_object__49237568(
                                                                    (AssetData_o *)Master_object,
                                                                    (System_String_o *)StringLiteral_3251/*"BattleAssetUIAtlas"*/,
                                                                    (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
    if ( !Master_object )
      goto LABEL_30;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)Master_object,
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !this->fields.raidDownNormalSprite )
      goto LABEL_30;
    v46 = (UIAtlas_o *)Master_object;
    UISprite__set_atlas(this->fields.raidDownNormalSprite, (UIAtlas_o *)Master_object, 0LL);
    raidDownNormalSprite = this->fields.raidDownNormalSprite;
    v55 = this->fields.hpBarType;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                    (Il2CppObject *)StringLiteral_23012/*"raid_down_normal_"*/,
                                                                    v48,
                                                                    0LL);
    if ( !raidDownNormalSprite )
      goto LABEL_30;
    UISprite__set_spriteName(raidDownNormalSprite, (System_String_o *)Master_object, 0LL);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownLastSprite;
    if ( !Master_object )
      goto LABEL_30;
    UISprite__set_atlas((UISprite_o *)Master_object, v46, 0LL);
    raidDownLastSprite = this->fields.raidDownLastSprite;
    v54 = this->fields.hpBarType;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                    (Il2CppObject *)StringLiteral_23011/*"raid_down_last_"*/,
                                                                    v50,
                                                                    0LL);
    if ( !raidDownLastSprite
      || (UISprite__set_spriteName(raidDownLastSprite, (System_String_o *)Master_object, 0LL),
          (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.raidDownEndSprite) == 0LL)
      || (UISprite__set_atlas((UISprite_o *)Master_object, v46, 0LL),
          raidDownEndSprite = this->fields.raidDownEndSprite,
          v53 = this->fields.hpBarType,
          v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53),
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Concat(
                                                                          (Il2CppObject *)StringLiteral_23010/*"raid_down_end_"*/,
                                                                          v52,
                                                                          0LL),
          !raidDownEndSprite) )
    {
LABEL_30:
      sub_1BCAA3C(Master_object, v32);
    }
    UISprite__set_spriteName(raidDownEndSprite, (System_String_o *)Master_object, 0LL);
  }
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantRaidParamComponent__setRaidDownMessage(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantRaidParamComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *raidDownEndSprite; // x20
  bool v7; // w1
  struct BattlePerformance_o *perf; // x8
  bool isRaidLastDay; // w0
  __int64 v10; // x1
  UnityEngine_Object_o *raidDownNormalSprite; // x21
  bool v12; // w20
  UnityEngine_Object_o *raidDownLastSprite; // x21

  v3 = this;
  if ( (byte_4B1930B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (BattleServantRaidParamComponent_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B1930B = 1;
  }
  if ( v3->fields.isDefeatCount )
  {
    raidDownEndSprite = (UnityEngine_Object_o *)v3->fields.raidDownEndSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(raidDownEndSprite, 0LL, 0LL) )
    {
      this = (BattleServantRaidParamComponent_o *)v3->fields.raidDownEndSprite;
      if ( this )
      {
        this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
        if ( this )
        {
          v7 = 1;
LABEL_24:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0LL);
          goto LABEL_25;
        }
      }
      goto LABEL_29;
    }
  }
  else
  {
    perf = v3->fields.perf;
    if ( !perf )
      goto LABEL_29;
    this = (BattleServantRaidParamComponent_o *)perf->fields.data;
    if ( !this )
      goto LABEL_29;
    isRaidLastDay = BattleData__isRaidLastDay((BattleData_o *)this, 0LL);
    raidDownNormalSprite = (UnityEngine_Object_o *)v3->fields.raidDownNormalSprite;
    v12 = isRaidLastDay;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    if ( UnityEngine_Object__op_Inequality(raidDownNormalSprite, 0LL, 0LL) )
    {
      this = (BattleServantRaidParamComponent_o *)v3->fields.raidDownNormalSprite;
      if ( !this )
        goto LABEL_29;
      this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
      if ( !this )
        goto LABEL_29;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v12, 0LL);
    }
    raidDownLastSprite = (UnityEngine_Object_o *)v3->fields.raidDownLastSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(raidDownLastSprite, 0LL, 0LL) )
    {
      this = (BattleServantRaidParamComponent_o *)v3->fields.raidDownLastSprite;
      if ( this )
      {
        this = (BattleServantRaidParamComponent_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)this,
                                                      0LL);
        if ( this )
        {
          v7 = v12;
          goto LABEL_24;
        }
      }
LABEL_29:
      sub_1BCAA3C(this, method);
    }
  }
LABEL_25:
  this = (BattleServantRaidParamComponent_o *)v3->fields.raidhplabel;
  if ( !this )
    goto LABEL_29;
  UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this = (BattleServantRaidParamComponent_o *)v3->fields.raidhplabel;
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
    sub_1BCAA3C(0LL, split);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleRaidInfo_o *newinfo; // x1
  BattleServantData_o *data; // x1
  const MethodInfo *v11; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.previnfo, (int64_t)newinfo, v2, v3, v4, v5, v6, v7);
  data = this->fields.data;
  this->fields.flgUpdate = 0;
  BattleServantRaidParamComponent__updateRaidHpBase(this, data, v11);
}


void __fastcall BattleServantRaidParamComponent__updateRaidHpBase(
        BattleServantRaidParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantRaidParamComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct BattleRaidInfo_o *previnfo; // x8
  int64_t maxHp; // x22
  int64_t totalDamage; // x23
  int64_t v20; // x20
  int32_t v21; // w21
  struct BattlePerformance_o *perf; // x8
  bool v23; // w0
  const MethodInfo *v24; // x1
  const MethodInfo *v25; // x3
  Il2CppObject *SingleEntity; // x21
  _BOOL4 v27; // w22
  _QWORD *p_klass; // x8
  UILabel_o *raidhplabel; // x21
  System_String_o *RaidHPFormat; // x22
  System_Int64_c *v31; // x0
  Il2CppObject *v32; // x0
  struct BattleRaidInfo_o *v33; // x8
  struct BattleRaidInfo_o *v34; // x8
  int64_t v35; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_4B19309 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointBuffMaster___, svtData, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventRaidMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v11, v12);
    sub_1BCA7E0(&long_TypeInfo, v13, v14);
    this = (BattleServantRaidParamComponent_o *)sub_1BCA7E0(
                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                  v15,
                                                  v16);
    byte_4B19309 = 1;
  }
  previnfo = v4->fields.previnfo;
  if ( !previnfo )
    goto LABEL_41;
  maxHp = previnfo->fields.maxHp;
  totalDamage = previnfo->fields.totalDamage;
  if ( v4->fields.isDefeatCount )
  {
    v20 = maxHp - totalDamage;
  }
  else
  {
    if ( !svtData )
      goto LABEL_41;
    v21 = BattleServantData__getMaxHp(svtData, 0LL);
    this = (BattleServantRaidParamComponent_o *)BattleServantData__getNowHp(svtData, 0LL);
    v20 = maxHp - totalDamage - (v21 - (int)this);
  }
  perf = v4->fields.perf;
  if ( !perf )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)perf->fields.data;
  if ( !this )
    goto LABEL_41;
  v23 = BattleData__isDisableChangeRaidDownMessage((BattleData_o *)this, 0LL);
  if ( v20 <= 0 && !v23 )
  {
    BattleServantRaidParamComponent__setRaidDownMessage(v4, v24);
    goto LABEL_35;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !this )
    goto LABEL_41;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   (const MethodInfo_31B30A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
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
    v27 = LODWORD(this->fields.m_CancellationTokenSource) != 0;
  }
  else
  {
    v27 = 0;
  }
  this = (BattleServantRaidParamComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_41;
  this = (BattleServantRaidParamComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventRaidMaster___);
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
        sub_1BCAA44(this, svtData);
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
  if ( !((unsigned int)p_klass | v27) && v4->fields.isDefeatCount && !v4->fields.isJumbleRaid )
  {
    raidhplabel = v4->fields.raidhplabel;
    this = (BattleServantRaidParamComponent_o *)BattleServantRaidParamComponent__get_RaidHPFormat(
                                                  v4,
                                                  (const MethodInfo *)svtData);
    v34 = v4->fields.previnfo;
    if ( v34 )
    {
      RaidHPFormat = (System_String_o *)this;
      v35 = v34->fields.totalDamage;
      v31 = long_TypeInfo;
      goto LABEL_33;
    }
LABEL_41:
    sub_1BCAA3C(this, svtData);
  }
  raidhplabel = v4->fields.raidhplabel;
  RaidHPFormat = BattleServantRaidParamComponent__get_RaidHPFormat(v4, (const MethodInfo *)svtData);
  v35 = v20;
  v31 = long_TypeInfo;
LABEL_33:
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(v31, &v35);
  this = (BattleServantRaidParamComponent_o *)System_String__Format(RaidHPFormat, v32, 0LL);
  if ( !raidhplabel )
    goto LABEL_41;
  UILabel__set_text(raidhplabel, (System_String_o *)this, 0LL);
LABEL_35:
  v33 = v4->fields.previnfo;
  if ( !v33 )
    goto LABEL_41;
  BattleServantRaidParamComponent__updateRaidHpbar(v4, v20, v33->fields.maxHp, v25);
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

  if ( (byte_4B1930A & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, now, max);
    byte_4B1930A = 1;
  }
  raidhpGauge = (UnityEngine_Object_o *)this->fields.raidhpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, now);
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
      sub_1BCAA3C(v10, v9);
    }
  }
  else if ( v8 )
  {
    v10 = this->fields.raidhpGauge;
    if ( v10 )
    {
      v11 = now;
LABEL_12:
      BattleHpGaugeBarComponent__setValue_44576404(v10, v11, max, 0LL);
      return;
    }
    goto LABEL_14;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantRaidParamComponent__updateRaidInfo(
        BattleServantRaidParamComponent_o *this,
        BattleRaidInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleRaidInfo_o **p_newinfo; // x0
  struct BattleRaidInfo_o *newinfo; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleServantData_o *data; // x1
  const MethodInfo *v18; // x2

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_1BCA784((PartyOrganizationUtility_o *)p_newinfo, (int64_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
    newinfo = this->fields.newinfo;
    this->fields.previnfo = newinfo;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.previnfo, (int64_t)newinfo, v11, v12, v13, v14, v15, v16);
    data = this->fields.data;
    this->fields.flgUpdate = 0;
    BattleServantRaidParamComponent__updateRaidHpBase(this, data, v18);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_1BCAA3C(p_newinfo, 0LL);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      this->fields.newinfo = info;
      sub_1BCA784((PartyOrganizationUtility_o *)p_newinfo, (int64_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
      this->fields.flgUpdate = 1;
    }
  }
}


void __fastcall BattleServantRaidParamComponent__updateStateString(
        BattleServantRaidParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantData_o *data; // x8
  void *stateLabel; // x0
  System_String_o *statestring; // x20
  struct UILabel_o *shortNameLabel; // x8
  struct System_String_o *mText; // x9
  System_String_o *v9; // x1
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1930C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1930C = 1;
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
    sub_1BCAA3C(stateLabel, method);
  }
  v10.fields.z = 0.0;
  v10.fields.x = (float)(mText->fields._stringLength * shortNameLabel->fields.mFontSize) + 10.0;
  v10.fields.y = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v10, 0LL);
  if ( !statestring )
    goto LABEL_12;
  if ( (System_String__IndexOf(statestring, 0x3Au, 0LL) & 0x80000000) != 0 )
  {
    stateLabel = this->fields.stateLabel;
    if ( stateLabel )
    {
      v9 = statestring;
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
      v9 = (System_String_o *)*((_QWORD *)stateLabel + 5);
      stateLabel = this->fields.stateLabel;
      goto LABEL_14;
    }
    goto LABEL_19;
  }
LABEL_12:
  stateLabel = this->fields.stateLabel;
  if ( !stateLabel )
    goto LABEL_19;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_14:
  UILabel__set_text((UILabel_o *)stateLabel, v9, 0LL);
}
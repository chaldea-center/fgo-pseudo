void BattleServantSuperBossParamComponent___ctor(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D300C2 & 1) == 0 )
  {
    sub_1C94098(&BattleServantParamComponent_TypeInfo);
    byte_4D300C2 = 1;
  }
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  BattleServantParamComponent___ctor((BattleServantParamComponent_o *)this, method);
}


bool BattleServantSuperBossParamComponent__IsSuperBossStatusUi(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  return 1;
}


void BattleServantSuperBossParamComponent__UpdateHpAndDamageBar(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  BattleServantSuperBossParamComponent__UpdateTotalHp(this, svtData, method);
  BattleServantParamComponent__UpdateHp((BattleServantParamComponent_o *)this, svtData, 1, v5);
}


void BattleServantSuperBossParamComponent__UpdateTotalHp(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantSuperBossParamComponent_o *v4; // x19
  struct BattleSuperBossInfo_o *previnfo; // x8
  int64_t v6; // x22
  int32_t MaxHp; // w21
  const MethodInfo *v8; // x1
  int64_t NowHp; // x20
  UILabel_o *superBosshplabel; // x21
  System_String_o *SuperBossHPFormat; // x22
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x3
  struct BattleSuperBossInfo_o *v14; // x8
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D300BE & 1) == 0 )
  {
    this = (BattleServantSuperBossParamComponent_o *)sub_1C94098(&long_TypeInfo);
    byte_4D300BE = 1;
  }
  if ( !v4->fields.isShift )
  {
    if ( svtData )
    {
      this = (BattleServantSuperBossParamComponent_o *)BattleServantData__getMaxHp(svtData, 0);
      previnfo = v4->fields.previnfo;
      if ( previnfo )
      {
        v6 = previnfo->fields.maxHp - previnfo->fields.totalDamage;
        if ( v6 <= (int)this )
        {
          NowHp = BattleServantData__getNowHp(svtData, 0);
        }
        else
        {
          MaxHp = BattleServantData__getMaxHp(svtData, 0);
          NowHp = v6 - (MaxHp - BattleServantData__getNowHp(svtData, 0));
        }
        if ( NowHp < 1 )
        {
          BattleServantSuperBossParamComponent__setDownMessage(v4, v8);
        }
        else
        {
          superBosshplabel = v4->fields.superBosshplabel;
          SuperBossHPFormat = BattleServantSuperBossParamComponent__get_SuperBossHPFormat(v4, v8);
          v15 = NowHp;
          v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
          this = (BattleServantSuperBossParamComponent_o *)System_String__Format(SuperBossHPFormat, v12, 0);
          if ( !superBosshplabel )
            goto LABEL_16;
          UILabel__set_text(superBosshplabel, (System_String_o *)this, 0);
        }
        v14 = v4->fields.previnfo;
        if ( v14 )
        {
          BattleServantSuperBossParamComponent__updateSuperBossHpbar(v4, NowHp, v14->fields.maxHp, v13);
          return;
        }
      }
    }
LABEL_16:
    sub_1C942F0(this, svtData);
  }
}


void BattleServantSuperBossParamComponent__changeHp(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  BattleServantSuperBossParamComponent__UpdateTotalHp(this, svtData, method);
  BattleServantParamComponent__UpdateHp((BattleServantParamComponent_o *)this, svtData, 0, v5);
}


System_String_o *BattleServantSuperBossParamComponent__get_SuperBossHPFormat(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  GrandQuestFolderBoardItem_o *p_hpformat; // x19
  System_String_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D300BC & 1) == 0 )
  {
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&StringLiteral_2884/*"BATTLE_SUPERBOSS_TOTALHP"*/);
    byte_4D300BC = 1;
  }
  result = this->fields.hpformat;
  if ( !result )
  {
    p_hpformat = (GrandQuestFolderBoardItem_o *)&this->fields.hpformat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2884/*"BATTLE_SUPERBOSS_TOTALHP"*/, 0);
    p_hpformat->klass = (GrandQuestFolderBoardItem_c *)v5;
    sub_1C9403C(p_hpformat, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    return (System_String_o *)p_hpformat->klass;
  }
  return result;
}


void BattleServantSuperBossParamComponent__setData(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *battleServantData,
        StageEntity_o *stageEntity,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  Il2CppObject *SingleEntity; // x22
  EventBossStatusUiEntity_o *v10; // x24
  int32_t GaugeId; // w0
  UILabel_o *superBosshplabel; // x23
  int32_t hpBarType; // w22
  struct UILabel_o **p_superBosshplabel; // x25
  struct BattleServantChangeBarComponent_o *hpChange; // x8
  const MethodInfo *v16; // x1
  bool *p_isShift; // x23
  UnityEngine_Object_o *v18; // x22
  struct BattleServantChangeBarComponent_o *v19; // x8
  _BOOL4 isSuperBoss; // w8
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D300BD & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D300BD = 1;
  }
  if ( battleServantData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !Master_object )
      goto LABEL_37;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     Master_object,
                     (const MethodInfo_345DAC8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_37;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                    (DataManager_o *)Master_object,
                                                                    (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    if ( !SingleEntity || !Master_object )
      goto LABEL_37;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                    (EventBossStatusUiMaster_o *)Master_object,
                                                                    (int32_t)SingleEntity[6].monitor,
                                                                    battleServantData->fields.raidId,
                                                                    0);
    if ( Master_object )
    {
      v10 = (EventBossStatusUiEntity_o *)Master_object;
      GaugeId = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Master_object, 0);
      superBosshplabel = this->fields.superBosshplabel;
      hpBarType = GaugeId;
      v21.fields.r = 0.0;
      v21.fields.g = 0.0;
      v21.fields.b = 0.0;
      v21.fields.a = 0.0;
      p_superBosshplabel = &this->fields.superBosshplabel;
      TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(v10, v21, 0);
      if ( !superBosshplabel )
        goto LABEL_37;
    }
    else
    {
      superBosshplabel = this->fields.superBosshplabel;
      p_superBosshplabel = &this->fields.superBosshplabel;
      TextEffectColor.fields.b = 0.0;
      TextEffectColor.fields.a = 1.0;
      hpBarType = -1;
      TextEffectColor.fields.g = 0.0;
      TextEffectColor.fields.r = 0.0;
      if ( !superBosshplabel )
        goto LABEL_37;
    }
    UILabel__set_effectColor(superBosshplabel, TextEffectColor, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
    if ( hpBarType == -1 )
      hpBarType = battleServantData->fields.hpBarType;
    if ( !Master_object )
      goto LABEL_37;
    BattleServantChangeBarComponent__setBarType((BattleServantChangeBarComponent_o *)Master_object, hpBarType, 0, 0);
    hpChange = this->fields.hpChange;
    if ( !hpChange )
      goto LABEL_37;
    hpChange->fields.isSuperBossNormal = 1;
    if ( BattleServantData__GetMaxShiftIconCount(battleServantData, 0) < 1 )
    {
      isSuperBoss = battleServantData->fields.isSuperBoss;
      p_isShift = &this->fields.isShift;
      this->fields.isShift = !isSuperBoss;
      if ( isSuperBoss )
      {
LABEL_31:
        BattleServantSuperBossParamComponent__updateStateString(this, v16);
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.superbosshpGauge;
        if ( Master_object )
        {
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)Master_object,
                                                                          0);
          if ( Master_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !*p_isShift, 0);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_superBosshplabel;
            if ( *p_superBosshplabel )
            {
              Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)Master_object,
                                                                              0);
              if ( Master_object )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, !*p_isShift, 0);
                goto LABEL_36;
              }
            }
          }
        }
LABEL_37:
        sub_1C942F0(Master_object, v8);
      }
    }
    else
    {
      p_isShift = &this->fields.isShift;
      this->fields.isShift = 1;
    }
    v18 = (UnityEngine_Object_o *)this->fields.hpChange;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      v19 = this->fields.hpChange;
      if ( !v19 )
        goto LABEL_37;
      v19->fields.isSuperBossShift = 1;
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nextTdGauge;
    if ( !Master_object )
      goto LABEL_37;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Master_object,
                                                                    0);
    if ( !Master_object )
      goto LABEL_37;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, this->fields.shiftTdPos, 0);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.showBuffComponent;
    if ( !Master_object )
      goto LABEL_37;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)Master_object,
                                                                    0);
    if ( !Master_object )
      goto LABEL_37;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)Master_object, this->fields.shiftBuffPos, 0);
    goto LABEL_31;
  }
LABEL_36:
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, battleServantData, stageEntity, method);
}


void BattleServantSuperBossParamComponent__setDownMessage(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *superBosshplabel; // x0

  if ( (byte_4D300C0 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1115/*"0"*/);
    byte_4D300C0 = 1;
  }
  superBosshplabel = this->fields.superBosshplabel;
  if ( !superBosshplabel )
    sub_1C942F0(0, method);
  UILabel__set_text(superBosshplabel, (System_String_o *)StringLiteral_1115/*"0"*/, 0);
}


void BattleServantSuperBossParamComponent__setSplitHp(
        BattleServantSuperBossParamComponent_o *this,
        System_Int64_array *split,
        int64_t maxhp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *changeGauge; // x0

  changeGauge = this->fields.changeGauge;
  if ( !changeGauge )
    sub_1C942F0(0, split);
  BattleServantChangeBarComponent__setSplitHp(changeGauge, split, maxhp, 0);
}


void BattleServantSuperBossParamComponent__updateStateString(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *stateLabel; // x0
  System_String_o *statestring; // x20
  struct UILabel_o *shortNameLabel; // x8
  struct System_String_o *mText; // x9
  UnityEngine_Component_o *v8; // x8
  System_String_o **p_fields; // x8
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D300C1 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D300C1 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  stateLabel = (UnityEngine_Component_o *)this->fields.stateLabel;
  if ( !stateLabel
    || (statestring = data->fields.statestring,
        stateLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(stateLabel, 0),
        (shortNameLabel = this->fields.shortNameLabel) == 0)
    || (mText = shortNameLabel->fields.mText) == 0
    || !stateLabel )
  {
LABEL_16:
    sub_1C942F0(stateLabel, method);
  }
  v10.fields.z = 0.0;
  v10.fields.x = (float)(mText->fields._stringLength * shortNameLabel->fields.mFontSize) + 10.0;
  v10.fields.y = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v10, 0);
  if ( statestring )
  {
    stateLabel = (UnityEngine_Component_o *)System_String__Split(statestring, 0x3Au, 0, 0);
    if ( !stateLabel )
      goto LABEL_16;
    v8 = stateLabel;
    if ( SLODWORD(stateLabel[1].klass) >= 2 )
    {
      stateLabel = (UnityEngine_Component_o *)this->fields.stateLabel;
      if ( stateLabel )
      {
        p_fields = (System_String_o **)&v8[1].fields;
        goto LABEL_13;
      }
      goto LABEL_16;
    }
  }
LABEL_11:
  stateLabel = (UnityEngine_Component_o *)this->fields.stateLabel;
  if ( !stateLabel )
    goto LABEL_16;
  p_fields = (System_String_o **)&StringLiteral_1/*""*/;
LABEL_13:
  UILabel__set_text((UILabel_o *)stateLabel, *p_fields, 0);
}


void BattleServantSuperBossParamComponent__updateSuperBossHp(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleSuperBossInfo_o *newinfo; // x1
  BattleServantData_o *data; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.previnfo, (int32_t)newinfo, v2, v3, v4, v5, v6, v7);
  data = this->fields.data;
  BattleServantSuperBossParamComponent__UpdateTotalHp(this, data, v11);
  BattleServantParamComponent__UpdateHp((BattleServantParamComponent_o *)this, data, 0, v12);
}


void BattleServantSuperBossParamComponent__updateSuperBossHpbar(
        BattleServantSuperBossParamComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  UnityEngine_Object_o *superbosshpGauge; // x22
  bool v7; // w0
  __int64 v8; // x1
  struct BattleHpGaugeBarComponent_o *v9; // x0

  if ( (byte_4D300BF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D300BF = 1;
  }
  superbosshpGauge = (UnityEngine_Object_o *)this->fields.superbosshpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Inequality(superbosshpGauge, 0, 0);
  if ( now < 0 )
  {
    if ( v7 )
    {
      v9 = this->fields.superbosshpGauge;
      if ( v9 )
BattleHpGaugeBarComponent$$setValue_48139500:
        JUMPOUT(0x2DE8CEC);
LABEL_13:
      sub_1C942F0(v9, v8);
    }
  }
  else if ( v7 )
  {
    v9 = this->fields.superbosshpGauge;
    if ( v9 )
      goto BattleHpGaugeBarComponent$$setValue_48139500;
    goto LABEL_13;
  }
}


void BattleServantSuperBossParamComponent__updateSuperBossInfo(
        BattleServantSuperBossParamComponent_o *this,
        BattleSuperBossInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct BattleSuperBossInfo_o **p_newinfo; // x0
  const MethodInfo *v10; // x1

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)p_newinfo, (int32_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
    BattleServantSuperBossParamComponent__updateSuperBossHp(this, v10);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_1C942F0(p_newinfo, 0);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      *p_newinfo = info;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)p_newinfo, (int32_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
    }
  }
}
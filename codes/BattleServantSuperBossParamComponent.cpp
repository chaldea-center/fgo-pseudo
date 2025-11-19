void BattleServantSuperBossParamComponent___ctor(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB9AA0 & 1) == 0 )
  {
    sub_1C6BA08(&BattleServantParamComponent_TypeInfo);
    byte_4CB9AA0 = 1;
  }
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  BattleServantParamComponent___ctor((BattleServantParamComponent_o *)this, 0);
}


void BattleServantSuperBossParamComponent__UpdateHpAndDamageBar(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantSuperBossParamComponent__UpdateTotalHp(this, svtData, method);
  BattleServantParamComponent__UpdateHpAndDamageBar((BattleServantParamComponent_o *)this, svtData, 0);
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
  if ( (byte_4CB9A9C & 1) == 0 )
  {
    this = (BattleServantSuperBossParamComponent_o *)sub_1C6BA08(&long_TypeInfo);
    byte_4CB9A9C = 1;
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
    sub_1C6BC60(this, svtData);
  }
}


void BattleServantSuperBossParamComponent__changeHp(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  BattleServantSuperBossParamComponent__UpdateTotalHp(this, svtData, method);
  BattleServantParamComponent__changeHp((BattleServantParamComponent_o *)this, svtData, 0);
}


System_String_o *BattleServantSuperBossParamComponent__get_SuperBossHPFormat(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  CGThumbnailListItem_o *p_hpformat; // x19
  System_String_o *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB9A9A & 1) == 0 )
  {
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_2879/*"BATTLE_SUPERBOSS_TOTALHP"*/);
    byte_4CB9A9A = 1;
  }
  result = this->fields.hpformat;
  if ( !result )
  {
    p_hpformat = (CGThumbnailListItem_o *)&this->fields.hpformat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2879/*"BATTLE_SUPERBOSS_TOTALHP"*/, 0);
    p_hpformat->klass = (CGThumbnailListItem_c *)v5;
    sub_1C6B9AC(p_hpformat, (int32_t)v5, v6, v7);
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
  struct BattleServantChangeBarComponent_o *hpChange; // x8
  bool v15; // w22
  const MethodInfo *v16; // x1
  UnityEngine_Object_o *v17; // x22
  struct BattleServantChangeBarComponent_o *v18; // x8
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o TextEffectColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB9A9B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB9A9B = 1;
  }
  if ( battleServantData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( Master_object )
    {
      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                       Master_object,
                       (const MethodInfo_33FB6E4 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Master_object,
                                                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
        if ( SingleEntity )
        {
          if ( Master_object )
          {
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
              v19.fields.r = 0.0;
              v19.fields.g = 0.0;
              v19.fields.b = 0.0;
              v19.fields.a = 0.0;
              TextEffectColor = EventBossStatusUiEntity__GetTextEffectColor(v10, v19, 0);
              if ( !superBosshplabel )
                goto LABEL_39;
            }
            else
            {
              superBosshplabel = this->fields.superBosshplabel;
              TextEffectColor.fields.b = 0.0;
              TextEffectColor.fields.a = 1.0;
              hpBarType = -1;
              TextEffectColor.fields.g = 0.0;
              TextEffectColor.fields.r = 0.0;
              if ( !superBosshplabel )
                goto LABEL_39;
            }
            UILabel__set_effectColor(superBosshplabel, TextEffectColor, 0);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
            if ( hpBarType == -1 )
              hpBarType = battleServantData->fields.hpBarType;
            if ( Master_object )
            {
              BattleServantChangeBarComponent__setBarType(
                (BattleServantChangeBarComponent_o *)Master_object,
                hpBarType,
                0,
                0);
              hpChange = this->fields.hpChange;
              if ( hpChange )
              {
                v15 = 1;
                hpChange->fields.isSuperBossNormal = 1;
                if ( BattleServantData__GetMaxShiftIconCount(battleServantData, 0) <= 0 )
                  v15 = !battleServantData->fields.isSuperBoss
                     && BattleServantData__get_IsSuperBossUi(battleServantData, 0);
                this->fields.isShift = v15;
                if ( v15 )
                {
                  v17 = (UnityEngine_Object_o *)this->fields.hpChange;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                                  v17,
                                                                                  0,
                                                                                  0);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    v18 = this->fields.hpChange;
                    if ( !v18 )
                      goto LABEL_39;
                    v18->fields.isSuperBossShift = 1;
                  }
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nextTdGauge;
                  if ( !Master_object )
                    goto LABEL_39;
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                                  (UnityEngine_Component_o *)Master_object,
                                                                                  0);
                  if ( !Master_object )
                    goto LABEL_39;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_object,
                    this->fields.shiftTdPos,
                    0);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.showBuffComponent;
                  if ( !Master_object )
                    goto LABEL_39;
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                                  (UnityEngine_Component_o *)Master_object,
                                                                                  0);
                  if ( !Master_object )
                    goto LABEL_39;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_object,
                    this->fields.shiftBuffPos,
                    0);
                }
                BattleServantSuperBossParamComponent__updateStateString(this, v16);
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.superbosshpGauge;
                if ( Master_object )
                {
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)Master_object,
                                                                                  0);
                  if ( Master_object )
                  {
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)Master_object,
                      !this->fields.isShift,
                      0);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.superBosshplabel;
                    if ( Master_object )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)Master_object,
                                                                                      0);
                      if ( Master_object )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)Master_object,
                          !this->fields.isShift,
                          0);
                        goto LABEL_38;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_39:
    sub_1C6BC60(Master_object, v8);
  }
LABEL_38:
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, battleServantData, stageEntity, 0);
}


void BattleServantSuperBossParamComponent__setDownMessage(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *superBosshplabel; // x0

  if ( (byte_4CB9A9E & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1115/*"0"*/);
    byte_4CB9A9E = 1;
  }
  superBosshplabel = this->fields.superBosshplabel;
  if ( !superBosshplabel )
    sub_1C6BC60(0, method);
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
    sub_1C6BC60(0, split);
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

  if ( (byte_4CB9A9F & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB9A9F = 1;
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
    sub_1C6BC60(stateLabel, method);
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
  const MethodInfo *v3; // x3
  struct BattleSuperBossInfo_o *newinfo; // x1
  BattleServantData_o *data; // x20
  const MethodInfo *v7; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.previnfo, (int32_t)newinfo, v2, v3);
  data = this->fields.data;
  BattleServantSuperBossParamComponent__UpdateTotalHp(this, data, v7);
  BattleServantParamComponent__changeHp((BattleServantParamComponent_o *)this, data, 0);
}


void BattleServantSuperBossParamComponent__updateSuperBossHpbar(
        BattleServantSuperBossParamComponent_o *this,
        int64_t now,
        int64_t max,
        const MethodInfo *method)
{
  UnityEngine_Object_o *superbosshpGauge; // x22
  bool v8; // w0
  __int64 v9; // x1
  BattleHpGaugeBarComponent_o *v10; // x0
  int64_t v11; // x1

  if ( (byte_4CB9A9D & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB9A9D = 1;
  }
  superbosshpGauge = (UnityEngine_Object_o *)this->fields.superbosshpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(superbosshpGauge, 0, 0);
  if ( now < 0 )
  {
    if ( v8 )
    {
      v10 = this->fields.superbosshpGauge;
      if ( v10 )
      {
        v11 = 0;
        goto LABEL_12;
      }
LABEL_14:
      sub_1C6BC60(v10, v9);
    }
  }
  else if ( v8 )
  {
    v10 = this->fields.superbosshpGauge;
    if ( v10 )
    {
      v11 = now;
LABEL_12:
      BattleHpGaugeBarComponent__setValue_47570312(v10, v11, max, 0, 0);
      return;
    }
    goto LABEL_14;
  }
}


void BattleServantSuperBossParamComponent__updateSuperBossInfo(
        BattleServantSuperBossParamComponent_o *this,
        BattleSuperBossInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  struct BattleSuperBossInfo_o **p_newinfo; // x0
  const MethodInfo *v6; // x1

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_newinfo, (int32_t)info, fixUpdate, method);
    BattleServantSuperBossParamComponent__updateSuperBossHp(this, v6);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_1C6BC60(p_newinfo, 0);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      *p_newinfo = info;
      sub_1C6B9AC((CGThumbnailListItem_o *)p_newinfo, (int32_t)info, fixUpdate, method);
    }
  }
}
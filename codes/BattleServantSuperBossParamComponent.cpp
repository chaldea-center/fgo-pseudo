void __fastcall BattleServantSuperBossParamComponent___ctor(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B05599 & 1) == 0 )
  {
    sub_1BC3008(&BattleServantParamComponent_TypeInfo, method);
    byte_4B05599 = 1;
  }
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  BattleServantParamComponent___ctor((BattleServantParamComponent_o *)this, method);
}


void __fastcall BattleServantSuperBossParamComponent__UpdateTotalHp(
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  const MethodInfo *v16; // x3
  struct BattleSuperBossInfo_o *v17; // x8
  int64_t v18; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B05595 & 1) == 0 )
  {
    this = (BattleServantSuperBossParamComponent_o *)sub_1BC3008(&long_TypeInfo, svtData);
    byte_4B05595 = 1;
  }
  if ( !svtData )
    goto LABEL_16;
  if ( BattleServantData__GetMaxShiftIconCount(svtData, 0LL) > 0 )
    return;
  this = (BattleServantSuperBossParamComponent_o *)BattleServantData__getMaxHp(svtData, 0LL);
  previnfo = v4->fields.previnfo;
  if ( !previnfo )
    goto LABEL_16;
  v6 = previnfo->fields.maxHp - previnfo->fields.totalDamage;
  if ( v6 <= (int)this )
  {
    NowHp = BattleServantData__getNowHp(svtData, 0LL);
  }
  else
  {
    MaxHp = BattleServantData__getMaxHp(svtData, 0LL);
    NowHp = v6 - (MaxHp - BattleServantData__getNowHp(svtData, 0LL));
  }
  if ( NowHp < 1 )
  {
    BattleServantSuperBossParamComponent__setDownMessage(v4, v8);
  }
  else
  {
    superBosshplabel = v4->fields.superBosshplabel;
    SuperBossHPFormat = BattleServantSuperBossParamComponent__get_SuperBossHPFormat(v4, v8);
    v18 = NowHp;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v18, v12, v13, v14);
    this = (BattleServantSuperBossParamComponent_o *)System_String__Format(SuperBossHPFormat, v15, 0LL);
    if ( !superBosshplabel )
      goto LABEL_16;
    UILabel__set_text(superBosshplabel, (System_String_o *)this, 0LL);
  }
  v17 = v4->fields.previnfo;
  if ( !v17 )
LABEL_16:
    sub_1BC3264(this, svtData);
  BattleServantSuperBossParamComponent__updateSuperBossHpbar(v4, NowHp, v17->fields.maxHp, v16);
}


void __fastcall BattleServantSuperBossParamComponent__changeHp(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  BattleServantSuperBossParamComponent__UpdateTotalHp(this, svtData, method);
  BattleServantParamComponent__changeHp((BattleServantParamComponent_o *)this, svtData, v5);
}


System_String_o *__fastcall BattleServantSuperBossParamComponent__get_SuperBossHPFormat(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *result; // x0
  CGThumbnailListItem_o *p_hpformat; // x19
  System_String_o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B05593 & 1) == 0 )
  {
    sub_1BC3008(&LocalizationManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_2868/*"BATTLE_SUPERBOSS_TOTALHP"*/, v3);
    byte_4B05593 = 1;
  }
  result = this->fields.hpformat;
  if ( !result )
  {
    p_hpformat = (CGThumbnailListItem_o *)&this->fields.hpformat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2868/*"BATTLE_SUPERBOSS_TOTALHP"*/, 0LL);
    p_hpformat->klass = (CGThumbnailListItem_c *)v6;
    sub_1BC2FAC(p_hpformat, (int32_t)v6, v7, v8);
    return (System_String_o *)p_hpformat->klass;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSuperBossParamComponent__setData(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v11; // x1
  Il2CppObject *SingleEntity; // x21
  EventBossStatusUiEntity_o *v13; // x23
  int32_t GaugeId; // w0
  UILabel_o *superBosshplabel; // x22
  int32_t hpBarType; // w21
  struct UILabel_o **p_superBosshplabel; // x24
  int v18; // s0
  int v19; // s1
  int v20; // s2
  float v21; // s3
  struct BattleServantChangeBarComponent_o *hpChange; // x8
  const MethodInfo *v23; // x1
  int32_t MaxShiftIconCount; // w21
  UnityEngine_Object_o *v25; // x22
  struct BattleServantChangeBarComponent_o *v26; // x8
  bool v27; // w21
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B05594 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, data);
    sub_1BC3008(&Method_DataManager_GetMaster_BattleMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4B05594 = 1;
  }
  if ( data )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( Master_object )
    {
      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                       Master_object,
                       (const MethodInfo_32B1678 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Master_object,
                                                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
        if ( SingleEntity )
        {
          if ( Master_object )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                            (EventBossStatusUiMaster_o *)Master_object,
                                                                            (int32_t)SingleEntity[6].monitor,
                                                                            data->fields.raidId,
                                                                            0LL);
            if ( Master_object )
            {
              v13 = (EventBossStatusUiEntity_o *)Master_object;
              GaugeId = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Master_object, 0LL);
              superBosshplabel = this->fields.superBosshplabel;
              hpBarType = GaugeId;
              v28.fields.r = 0.0;
              v28.fields.g = 0.0;
              v28.fields.b = 0.0;
              v28.fields.a = 0.0;
              p_superBosshplabel = &this->fields.superBosshplabel;
              *(UnityEngine_Color_o *)&v18 = EventBossStatusUiEntity__GetTextEffectColor(v13, v28, 0LL);
              if ( !superBosshplabel )
                goto LABEL_35;
            }
            else
            {
              superBosshplabel = this->fields.superBosshplabel;
              p_superBosshplabel = &this->fields.superBosshplabel;
              v20 = 0;
              v21 = 1.0;
              hpBarType = -1;
              v19 = 0;
              v18 = 0;
              if ( !superBosshplabel )
                goto LABEL_35;
            }
            UILabel__set_effectColor(superBosshplabel, *(UnityEngine_Color_o *)&v18, 0LL);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
            if ( hpBarType == -1 )
              hpBarType = data->fields.hpBarType;
            if ( Master_object )
            {
              BattleServantChangeBarComponent__setBarType(
                (BattleServantChangeBarComponent_o *)Master_object,
                hpBarType,
                0,
                0LL);
              hpChange = this->fields.hpChange;
              if ( hpChange )
              {
                hpChange->fields.isSuperBossNormal = 1;
                MaxShiftIconCount = BattleServantData__GetMaxShiftIconCount(data, 0LL);
                if ( MaxShiftIconCount >= 1 )
                {
                  v25 = (UnityEngine_Object_o *)this->fields.hpChange;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                                  v25,
                                                                                  0LL,
                                                                                  0LL);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    v26 = this->fields.hpChange;
                    if ( !v26 )
                      goto LABEL_35;
                    v26->fields.isSuperBossShift = 1;
                  }
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nextTdGauge;
                  if ( !Master_object )
                    goto LABEL_35;
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                                  (UnityEngine_Component_o *)Master_object,
                                                                                  0LL);
                  if ( !Master_object )
                    goto LABEL_35;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_object,
                    this->fields.shiftTdPos,
                    0LL);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.showBuffComponent;
                  if ( !Master_object )
                    goto LABEL_35;
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                                  (UnityEngine_Component_o *)Master_object,
                                                                                  0LL);
                  if ( !Master_object )
                    goto LABEL_35;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_object,
                    this->fields.shiftBuffPos,
                    0LL);
                }
                BattleServantSuperBossParamComponent__updateStateString(this, v23);
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.superbosshpGauge;
                if ( Master_object )
                {
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)Master_object,
                                                                                  0LL);
                  if ( Master_object )
                  {
                    v27 = MaxShiftIconCount < 1;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v27, 0LL);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_superBosshplabel;
                    if ( *p_superBosshplabel )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)Master_object,
                                                                                      0LL);
                      if ( Master_object )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v27, 0LL);
                        goto LABEL_34;
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
LABEL_35:
    sub_1BC3264(Master_object, v11);
  }
LABEL_34:
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantSuperBossParamComponent__setDownMessage(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *superBosshplabel; // x0

  if ( (byte_4B05597 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1113/*"0"*/, method);
    byte_4B05597 = 1;
  }
  superBosshplabel = this->fields.superBosshplabel;
  if ( !superBosshplabel )
    sub_1BC3264(0LL, method);
  UILabel__set_text(superBosshplabel, (System_String_o *)StringLiteral_1113/*"0"*/, 0LL);
}


void __fastcall BattleServantSuperBossParamComponent__setSplitHp(
        BattleServantSuperBossParamComponent_o *this,
        System_Int64_array *split,
        int64_t maxhp,
        const MethodInfo *method)
{
  BattleServantChangeBarComponent_o *changeGauge; // x0

  changeGauge = this->fields.changeGauge;
  if ( !changeGauge )
    sub_1BC3264(0LL, split);
  BattleServantChangeBarComponent__setSplitHp(changeGauge, split, maxhp, 0LL);
}


void __fastcall BattleServantSuperBossParamComponent__updateStateString(
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

  if ( (byte_4B05598 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4B05598 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_11;
  stateLabel = (UnityEngine_Component_o *)this->fields.stateLabel;
  if ( !stateLabel
    || (statestring = data->fields.statestring,
        stateLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(stateLabel, 0LL),
        (shortNameLabel = this->fields.shortNameLabel) == 0LL)
    || (mText = shortNameLabel->fields.mText) == 0LL
    || !stateLabel )
  {
LABEL_16:
    sub_1BC3264(stateLabel, method);
  }
  v10.fields.z = 0.0;
  v10.fields.x = (float)(mText->fields._stringLength * shortNameLabel->fields.mFontSize) + 10.0;
  v10.fields.y = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v10, 0LL);
  if ( statestring )
  {
    stateLabel = (UnityEngine_Component_o *)System_String__Split(statestring, 0x3Au, 0, 0LL);
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
  UILabel__set_text((UILabel_o *)stateLabel, *p_fields, 0LL);
}


void __fastcall BattleServantSuperBossParamComponent__updateSuperBossHp(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct BattleSuperBossInfo_o *newinfo; // x1
  BattleServantData_o *data; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.previnfo, (int32_t)newinfo, v2, v3);
  data = this->fields.data;
  BattleServantSuperBossParamComponent__UpdateTotalHp(this, data, v7);
  BattleServantParamComponent__changeHp((BattleServantParamComponent_o *)this, data, v8);
}


void __fastcall BattleServantSuperBossParamComponent__updateSuperBossHpbar(
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

  if ( (byte_4B05596 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, now);
    byte_4B05596 = 1;
  }
  superbosshpGauge = (UnityEngine_Object_o *)this->fields.superbosshpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality(superbosshpGauge, 0LL, 0LL);
  if ( (now & 0x8000000000000000LL) != 0 )
  {
    if ( v8 )
    {
      v10 = this->fields.superbosshpGauge;
      if ( v10 )
      {
        v11 = 0LL;
        goto LABEL_12;
      }
LABEL_14:
      sub_1BC3264(v10, v9);
    }
  }
  else if ( v8 )
  {
    v10 = this->fields.superbosshpGauge;
    if ( v10 )
    {
      v11 = now;
LABEL_12:
      BattleHpGaugeBarComponent__setValue_45992624(v10, v11, max, 0LL);
      return;
    }
    goto LABEL_14;
  }
}


void __fastcall BattleServantSuperBossParamComponent__updateSuperBossInfo(
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
    sub_1BC2FAC((CGThumbnailListItem_o *)p_newinfo, (int32_t)info, fixUpdate, method);
    BattleServantSuperBossParamComponent__updateSuperBossHp(this, v6);
  }
  else
  {
    if ( !*p_newinfo )
      goto LABEL_6;
    if ( !info )
      sub_1BC3264(p_newinfo, 0LL);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      *p_newinfo = info;
      sub_1BC2FAC((CGThumbnailListItem_o *)p_newinfo, (int32_t)info, fixUpdate, method);
    }
  }
}
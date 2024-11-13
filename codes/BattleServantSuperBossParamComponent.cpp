void __fastcall BattleServantSuperBossParamComponent___ctor(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1932F & 1) == 0 )
  {
    sub_1BCA7E0(&BattleServantParamComponent_TypeInfo, method, v2);
    byte_4B1932F = 1;
  }
  if ( !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo, method);
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
  Il2CppObject *v12; // x0
  const MethodInfo *v13; // x3
  struct BattleSuperBossInfo_o *v14; // x8
  int64_t v15; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B1932B & 1) == 0 )
  {
    this = (BattleServantSuperBossParamComponent_o *)sub_1BCA7E0(&long_TypeInfo, svtData, method);
    byte_4B1932B = 1;
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
    v15 = NowHp;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v15);
    this = (BattleServantSuperBossParamComponent_o *)System_String__Format(SuperBossHPFormat, v12, 0LL);
    if ( !superBosshplabel )
      goto LABEL_16;
    UILabel__set_text(superBosshplabel, (System_String_o *)this, 0LL);
  }
  v14 = v4->fields.previnfo;
  if ( !v14 )
LABEL_16:
    sub_1BCAA3C(this, svtData);
  BattleServantSuperBossParamComponent__updateSuperBossHpbar(v4, NowHp, v14->fields.maxHp, v13);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *result; // x0
  PartyOrganizationUtility_o *p_hpformat; // x19
  System_String_o *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B19329 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_3017/*"BATTLE_SUPERBOSS_TOTALHP"*/, v4, v5);
    byte_4B19329 = 1;
  }
  result = this->fields.hpformat;
  if ( !result )
  {
    p_hpformat = (PartyOrganizationUtility_o *)&this->fields.hpformat;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3017/*"BATTLE_SUPERBOSS_TOTALHP"*/, 0LL);
    p_hpformat->klass = (PartyOrganizationUtility_c *)v8;
    sub_1BCA784(p_hpformat, (int64_t)v8, v9, v10, v11, v12, v13, v14);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v16; // x1
  Il2CppObject *SingleEntity; // x21
  EventBossStatusUiEntity_o *v18; // x23
  int32_t GaugeId; // w0
  UILabel_o *superBosshplabel; // x22
  int32_t hpBarType; // w21
  struct UILabel_o **p_superBosshplabel; // x24
  int v23; // s0
  int v24; // s1
  int v25; // s2
  float v26; // s3
  struct BattleServantChangeBarComponent_o *hpChange; // x8
  const MethodInfo *v28; // x1
  int32_t MaxShiftIconCount; // w21
  UnityEngine_Object_o *v30; // x22
  struct BattleServantChangeBarComponent_o *v31; // x8
  bool v32; // w21
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1932A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, data, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_BattleMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B1932A = 1;
  }
  if ( data )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, data);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BattleMaster___);
    if ( Master_object )
    {
      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                       Master_object,
                       (const MethodInfo_31B30A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Master_object )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Master_object,
                                                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
        if ( SingleEntity )
        {
          if ( Master_object )
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                                                            (EventBossStatusUiMaster_o *)Master_object,
                                                                            HIDWORD(SingleEntity[6].klass),
                                                                            data->fields.raidId,
                                                                            0LL);
            if ( Master_object )
            {
              v18 = (EventBossStatusUiEntity_o *)Master_object;
              GaugeId = EventBossStatusUiEntity__GetGaugeId((EventBossStatusUiEntity_o *)Master_object, 0LL);
              superBosshplabel = this->fields.superBosshplabel;
              hpBarType = GaugeId;
              v33.fields.r = 0.0;
              v33.fields.g = 0.0;
              v33.fields.b = 0.0;
              v33.fields.a = 0.0;
              p_superBosshplabel = &this->fields.superBosshplabel;
              *(UnityEngine_Color_o *)&v23 = EventBossStatusUiEntity__GetTextEffectColor(v18, v33, 0LL);
              if ( !superBosshplabel )
                goto LABEL_35;
            }
            else
            {
              superBosshplabel = this->fields.superBosshplabel;
              p_superBosshplabel = &this->fields.superBosshplabel;
              v25 = 0;
              v26 = 1.0;
              hpBarType = -1;
              v24 = 0;
              v23 = 0;
              if ( !superBosshplabel )
                goto LABEL_35;
            }
            UILabel__set_effectColor(superBosshplabel, *(UnityEngine_Color_o *)&v23, 0LL);
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
                  v30 = (UnityEngine_Object_o *)this->fields.hpChange;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                                  v30,
                                                                                  0LL,
                                                                                  0LL);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    v31 = this->fields.hpChange;
                    if ( !v31 )
                      goto LABEL_35;
                    v31->fields.isSuperBossShift = 1;
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
                BattleServantSuperBossParamComponent__updateStateString(this, v28);
                Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.superbosshpGauge;
                if ( Master_object )
                {
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                  (UnityEngine_Component_o *)Master_object,
                                                                                  0LL);
                  if ( Master_object )
                  {
                    v32 = MaxShiftIconCount < 1;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v32, 0LL);
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_superBosshplabel;
                    if ( *p_superBosshplabel )
                    {
                      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)Master_object,
                                                                                      0LL);
                      if ( Master_object )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v32, 0LL);
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
    sub_1BCAA3C(Master_object, v16);
  }
LABEL_34:
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantSuperBossParamComponent__setDownMessage(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *superBosshplabel; // x0

  if ( (byte_4B1932D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, method, v2);
    byte_4B1932D = 1;
  }
  superBosshplabel = this->fields.superBosshplabel;
  if ( !superBosshplabel )
    sub_1BCAA3C(0LL, method);
  UILabel__set_text(superBosshplabel, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
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
    sub_1BCAA3C(0LL, split);
  BattleServantChangeBarComponent__setSplitHp(changeGauge, split, maxhp, 0LL);
}


void __fastcall BattleServantSuperBossParamComponent__updateStateString(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct BattleServantData_o *data; // x8
  UnityEngine_Component_o *stateLabel; // x0
  System_String_o *statestring; // x20
  struct UILabel_o *shortNameLabel; // x8
  struct System_String_o *mText; // x9
  UnityEngine_Component_o *v9; // x8
  System_String_o **p_fields; // x8
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1932E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1932E = 1;
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
    sub_1BCAA3C(stateLabel, method);
  }
  v11.fields.z = 0.0;
  v11.fields.x = (float)(mText->fields._stringLength * shortNameLabel->fields.mFontSize) + 10.0;
  v11.fields.y = 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v11, 0LL);
  if ( statestring )
  {
    stateLabel = (UnityEngine_Component_o *)System_String__Split(statestring, 0x3Au, 0, 0LL);
    if ( !stateLabel )
      goto LABEL_16;
    v9 = stateLabel;
    if ( SLODWORD(stateLabel[1].klass) >= 2 )
    {
      stateLabel = (UnityEngine_Component_o *)this->fields.stateLabel;
      if ( stateLabel )
      {
        p_fields = (System_String_o **)&v9[1].fields;
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleSuperBossInfo_o *newinfo; // x1
  BattleServantData_o *data; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

  newinfo = this->fields.newinfo;
  this->fields.previnfo = newinfo;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.previnfo, (int64_t)newinfo, v2, v3, v4, v5, v6, v7);
  data = this->fields.data;
  BattleServantSuperBossParamComponent__UpdateTotalHp(this, data, v11);
  BattleServantParamComponent__changeHp((BattleServantParamComponent_o *)this, data, v12);
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

  if ( (byte_4B1932C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, now, max);
    byte_4B1932C = 1;
  }
  superbosshpGauge = (UnityEngine_Object_o *)this->fields.superbosshpGauge;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, now);
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
      sub_1BCAA3C(v10, v9);
    }
  }
  else if ( v8 )
  {
    v10 = this->fields.superbosshpGauge;
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
void __fastcall BattleServantSuperBossParamComponent__updateSuperBossInfo(
        BattleServantSuperBossParamComponent_o *this,
        BattleSuperBossInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct BattleSuperBossInfo_o **p_newinfo; // x0
  const MethodInfo *v10; // x1

  p_newinfo = &this->fields.newinfo;
  if ( fixUpdate )
  {
    this->fields.newinfo = info;
    sub_1BCA784((PartyOrganizationUtility_o *)p_newinfo, (int64_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
    BattleServantSuperBossParamComponent__updateSuperBossHp(this, v10);
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
      *p_newinfo = info;
      sub_1BCA784((PartyOrganizationUtility_o *)p_newinfo, (int64_t)info, fixUpdate, (int32_t)method, v4, v5, v6, v7);
    }
  }
}
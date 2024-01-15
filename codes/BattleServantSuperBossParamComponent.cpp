void __fastcall BattleServantSuperBossParamComponent___ctor(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCD44 & 1) == 0 )
  {
    sub_B16FFC(&BattleServantParamComponent_TypeInfo, method);
    byte_40FCD44 = 1;
  }
  if ( (BYTE3(BattleServantParamComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleServantParamComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantParamComponent_TypeInfo);
  }
  BattleServantParamComponent___ctor((BattleServantParamComponent_o *)this, method);
}


void __fastcall BattleServantSuperBossParamComponent__UpdateTotalHp(
        BattleServantSuperBossParamComponent_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0
  struct BattleSuperBossInfo_o *previnfo; // x8
  int64_t v7; // x22
  int32_t v8; // w21
  const MethodInfo *v9; // x1
  int64_t NowHp; // x20
  UILabel_o *superBosshplabel; // x21
  System_String_o *SuperBossHPFormat; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  struct BattleSuperBossInfo_o *v16; // x8
  int64_t v17; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FCD40 & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, svtData);
    byte_40FCD40 = 1;
  }
  if ( !svtData )
    goto LABEL_16;
  if ( BattleServantData__GetMaxShiftIconCount(svtData, 0LL) > 0 )
    return;
  MaxHp = BattleServantData__getMaxHp(svtData, 0LL);
  previnfo = this->fields.previnfo;
  if ( !previnfo )
    goto LABEL_16;
  v7 = previnfo->fields.maxHp - previnfo->fields.totalDamage;
  if ( v7 <= MaxHp )
  {
    NowHp = BattleServantData__getNowHp(svtData, 0LL);
  }
  else
  {
    v8 = BattleServantData__getMaxHp(svtData, 0LL);
    NowHp = v7 - (v8 - BattleServantData__getNowHp(svtData, 0LL));
  }
  if ( NowHp < 1 )
  {
    BattleServantSuperBossParamComponent__setDownMessage(this, v9);
  }
  else
  {
    superBosshplabel = this->fields.superBosshplabel;
    SuperBossHPFormat = BattleServantSuperBossParamComponent__get_SuperBossHPFormat(this, v9);
    v17 = NowHp;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
    v14 = System_String__Format(SuperBossHPFormat, v13, 0LL);
    if ( !superBosshplabel )
      goto LABEL_16;
    UILabel__set_text(superBosshplabel, v14, 0LL);
  }
  v16 = this->fields.previnfo;
  if ( !v16 )
LABEL_16:
    sub_B170D4();
  BattleServantSuperBossParamComponent__updateSuperBossHpbar(this, NowHp, v16->fields.maxHp, v15);
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
  BattleServantConfConponent_o *p_hpformat; // x19
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCD3E & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_2520/*"BATTLE_SUPERBOSS_TOTALHP"*/, v3);
    byte_40FCD3E = 1;
  }
  result = this->fields.hpformat;
  if ( !result )
  {
    p_hpformat = (BattleServantConfConponent_o *)&this->fields.hpformat;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_2520/*"BATTLE_SUPERBOSS_TOTALHP"*/, 0LL);
    p_hpformat->klass = (BattleServantConfConponent_c *)v6;
    sub_B16F98(p_hpformat, v6, v7, v8, v9, v10, v11, v12);
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_WarQuestSelectionMaster; // x0
  Il2CppObject *SingleEntity; // x21
  WebViewManager_o *Instance; // x0
  EventBossStatusUiMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int v15; // s3
  float v16; // s4
  float v17; // s5
  float v18; // s6
  EventBossStatusUiEntity_o *v19; // x23
  int32_t GaugeId; // w0
  UILabel_o *superBosshplabel; // x22
  int32_t hpBarType; // w21
  UnityEngine_Component_o **p_superBosshplabel; // x24
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  int v28; // s0
  int v29; // s1
  int v30; // s2
  BattleServantChangeBarComponent_o *changeGauge; // x0
  struct BattleServantChangeBarComponent_o *hpChange; // x8
  const MethodInfo *v33; // x1
  int32_t MaxShiftIconCount; // w21
  UnityEngine_Object_o *v35; // x22
  struct BattleServantChangeBarComponent_o *v36; // x8
  UnityEngine_Component_o *nextTdGauge; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *showBuffComponent; // x0
  UnityEngine_Transform_o *v40; // x0
  UnityEngine_Component_o *superbosshpGauge; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v43; // w21
  UnityEngine_GameObject_o *v44; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FCD3F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, data);
    sub_B16FFC(&Method_DataManager_GetMaster_BattleMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_40FCD3F = 1;
  }
  if ( data )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                       Master_WarQuestSelectionMaster,
                       (const MethodInfo_266F674 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (EventBossStatusUiMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
        if ( SingleEntity )
        {
          if ( MasterData_WarQuestSelectionMaster )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          MasterData_WarQuestSelectionMaster,
                                          HIDWORD(SingleEntity[6].klass),
                                          data->fields.raidId,
                                          0LL);
            if ( EntityFromEventIdAndIndex )
            {
              v19 = EntityFromEventIdAndIndex;
              GaugeId = EventBossStatusUiEntity__GetGaugeId(EntityFromEventIdAndIndex, 0LL);
              superBosshplabel = this->fields.superBosshplabel;
              hpBarType = GaugeId;
              v46.fields.r = 0.0;
              v46.fields.g = 0.0;
              v46.fields.b = 0.0;
              v46.fields.a = 0.0;
              p_superBosshplabel = (UnityEngine_Component_o **)&this->fields.superBosshplabel;
              *(UnityEngine_Color_o *)&methodPointer = EventBossStatusUiEntity__GetTextEffectColor(v19, v46, 0LL);
              if ( !superBosshplabel )
                goto LABEL_37;
            }
            else
            {
              superBosshplabel = this->fields.superBosshplabel;
              v28 = 0;
              v29 = 0;
              v30 = 0;
              p_superBosshplabel = (UnityEngine_Component_o **)&this->fields.superBosshplabel;
              var40.methodPointer = 0LL;
              var40.invoker_method = 0LL;
              UnityEngine_Color___ctor_40666012(*(UnityEngine_Color_o *)(&v15 - 3), v16, v17, v18, &var40);
              methodPointer_high = HIDWORD(var40.methodPointer);
              methodPointer = (int)var40.methodPointer;
              invoker_method_high = HIDWORD(var40.invoker_method);
              invoker_method = (int)var40.invoker_method;
              hpBarType = -1;
              if ( !superBosshplabel )
                goto LABEL_37;
            }
            UILabel__set_effectColor(superBosshplabel, *(UnityEngine_Color_o *)&methodPointer, 0LL);
            changeGauge = this->fields.changeGauge;
            if ( hpBarType == -1 )
              hpBarType = data->fields.hpBarType;
            if ( changeGauge )
            {
              BattleServantChangeBarComponent__setBarType(changeGauge, hpBarType, 0, 0LL);
              hpChange = this->fields.hpChange;
              if ( hpChange )
              {
                hpChange->fields.isSuperBossNormal = 1;
                MaxShiftIconCount = BattleServantData__GetMaxShiftIconCount(data, 0LL);
                if ( MaxShiftIconCount >= 1 )
                {
                  v35 = (UnityEngine_Object_o *)this->fields.hpChange;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  if ( UnityEngine_Object__op_Inequality(v35, 0LL, 0LL) )
                  {
                    v36 = this->fields.hpChange;
                    if ( !v36 )
                      goto LABEL_37;
                    v36->fields.isSuperBossShift = 1;
                  }
                  nextTdGauge = (UnityEngine_Component_o *)this->fields.nextTdGauge;
                  if ( !nextTdGauge )
                    goto LABEL_37;
                  transform = UnityEngine_Component__get_transform(nextTdGauge, 0LL);
                  if ( !transform )
                    goto LABEL_37;
                  UnityEngine_Transform__set_localPosition(transform, this->fields.shiftTdPos, 0LL);
                  showBuffComponent = (UnityEngine_Component_o *)this->fields.showBuffComponent;
                  if ( !showBuffComponent )
                    goto LABEL_37;
                  v40 = UnityEngine_Component__get_transform(showBuffComponent, 0LL);
                  if ( !v40 )
                    goto LABEL_37;
                  UnityEngine_Transform__set_localPosition(v40, this->fields.shiftBuffPos, 0LL);
                }
                BattleServantSuperBossParamComponent__updateStateString(this, v33);
                superbosshpGauge = (UnityEngine_Component_o *)this->fields.superbosshpGauge;
                if ( superbosshpGauge )
                {
                  gameObject = UnityEngine_Component__get_gameObject(superbosshpGauge, 0LL);
                  if ( gameObject )
                  {
                    v43 = MaxShiftIconCount < 1;
                    UnityEngine_GameObject__SetActive(gameObject, v43, 0LL);
                    if ( *p_superBosshplabel )
                    {
                      v44 = UnityEngine_Component__get_gameObject(*p_superBosshplabel, 0LL);
                      if ( v44 )
                      {
                        UnityEngine_GameObject__SetActive(v44, v43, 0LL);
                        goto LABEL_36;
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
LABEL_37:
    sub_B170D4();
  }
LABEL_36:
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantSuperBossParamComponent__setDownMessage(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *superBosshplabel; // x0

  if ( (byte_40FCD42 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_951/*"0"*/, method);
    byte_40FCD42 = 1;
  }
  superBosshplabel = this->fields.superBosshplabel;
  if ( !superBosshplabel )
    sub_B170D4();
  UILabel__set_text(superBosshplabel, (System_String_o *)StringLiteral_951/*"0"*/, 0LL);
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
    sub_B170D4();
  BattleServantChangeBarComponent__setSplitHp(changeGauge, split, maxhp, 0LL);
}


void __fastcall BattleServantSuperBossParamComponent__updateStateString(
        BattleServantSuperBossParamComponent_o *this,
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

  if ( (byte_40FCD43 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&StringLiteral_1/*""*/, v3);
    byte_40FCD43 = 1;
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
              goto LABEL_13;
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
                  goto LABEL_13;
                if ( this->fields.stateLabel )
                {
                  v15 = v13->m_Items[1];
                  v14 = this->fields.stateLabel;
                  goto LABEL_15;
                }
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_B170D4();
  }
LABEL_13:
  v14 = this->fields.stateLabel;
  if ( !v14 )
    goto LABEL_18;
  v15 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_15:
  UILabel__set_text(v14, v15, 0LL);
}


void __fastcall BattleServantSuperBossParamComponent__updateSuperBossHp(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleSuperBossInfo_o *newinfo; // x1
  BattleServantData_o *data; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x2

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
  data = this->fields.data;
  this->fields.flgUpdate = 0;
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

  if ( (byte_40FCD41 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, now);
    byte_40FCD41 = 1;
  }
  superbosshpGauge = (UnityEngine_Object_o *)this->fields.superbosshpGauge;
  if ( (now & 0x8000000000000000LL) != 0 )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(superbosshpGauge, 0LL, 0LL) )
    {
      if ( this->fields.superbosshpGauge )
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
    if ( UnityEngine_Object__op_Inequality(superbosshpGauge, 0LL, 0LL) )
    {
      if ( this->fields.superbosshpGauge )
        goto BattleHpGaugeBarComponent$$setValue_19731276;
      goto LABEL_17;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantSuperBossParamComponent__updateSuperBossInfo(
        BattleServantSuperBossParamComponent_o *this,
        BattleSuperBossInfo_o *info,
        bool fixUpdate,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleSuperBossInfo_o **p_newinfo; // x0
  const MethodInfo *v10; // x1

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
    BattleServantSuperBossParamComponent__updateSuperBossHp(this, v10);
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
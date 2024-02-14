void __fastcall BattleServantSuperBossParamComponent___ctor(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42172B5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleServantParamComponent_TypeInfo, method);
    byte_42172B5 = 1;
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
  if ( (byte_42172B1 & 1) == 0 )
  {
    this = (BattleServantSuperBossParamComponent_o *)sub_B0D8A4(&long_TypeInfo, svtData);
    byte_42172B1 = 1;
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
    sub_B0D97C(this);
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

  if ( (byte_42172AF & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_2541/*"BATTLE_SUPERBOSS_TOTALHP"*/, v3);
    byte_42172AF = 1;
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
    v6 = (System_Int32_array **)LocalizationManager__Get((System_String_o *)StringLiteral_2541/*"BATTLE_SUPERBOSS_TOTALHP"*/, 0LL);
    p_hpformat->klass = (BattleServantConfConponent_c *)v6;
    sub_B0D840(p_hpformat, v6, v7, v8, v9, v10, v11, v12);
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
  EventBossStatusUiEntity_o *EntityFromEventIdAndIndex; // x0
  int v13; // s3
  float v14; // s4
  float v15; // s5
  float v16; // s6
  EventBossStatusUiEntity_o *v17; // x23
  int32_t GaugeId; // w0
  UILabel_o *superBosshplabel; // x22
  int32_t hpBarType; // w21
  struct UILabel_o **p_superBosshplabel; // x24
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  int v26; // s0
  int v27; // s1
  int v28; // s2
  struct BattleServantChangeBarComponent_o *hpChange; // x8
  const MethodInfo *v30; // x1
  int32_t MaxShiftIconCount; // w21
  UnityEngine_Object_o *v32; // x22
  struct BattleServantChangeBarComponent_o *v33; // x8
  bool v34; // w21
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42172B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventBossStatusUiMaster___, data);
    sub_B0D8A4(&Method_DataManager_GetMaster_BattleMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_42172B0 = 1;
  }
  if ( data )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                       Master_WarQuestSelectionMaster,
                       (const MethodInfo_2669EC0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
      Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                         (DataManager_o *)Master_WarQuestSelectionMaster,
                                                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventBossStatusUiMaster___);
        if ( SingleEntity )
        {
          if ( Master_WarQuestSelectionMaster )
          {
            EntityFromEventIdAndIndex = EventBossStatusUiMaster__GetEntityFromEventIdAndIndex(
                                          (EventBossStatusUiMaster_o *)Master_WarQuestSelectionMaster,
                                          HIDWORD(SingleEntity[6].klass),
                                          data->fields.raidId,
                                          0LL);
            if ( EntityFromEventIdAndIndex )
            {
              v17 = EntityFromEventIdAndIndex;
              GaugeId = EventBossStatusUiEntity__GetGaugeId(EntityFromEventIdAndIndex, 0LL);
              superBosshplabel = this->fields.superBosshplabel;
              hpBarType = GaugeId;
              v36.fields.r = 0.0;
              v36.fields.g = 0.0;
              v36.fields.b = 0.0;
              v36.fields.a = 0.0;
              p_superBosshplabel = &this->fields.superBosshplabel;
              *(UnityEngine_Color_o *)&methodPointer = EventBossStatusUiEntity__GetTextEffectColor(v17, v36, 0LL);
              if ( !superBosshplabel )
                goto LABEL_37;
            }
            else
            {
              superBosshplabel = this->fields.superBosshplabel;
              v26 = 0;
              v27 = 0;
              v28 = 0;
              p_superBosshplabel = &this->fields.superBosshplabel;
              var40.methodPointer = 0LL;
              var40.invoker_method = 0LL;
              UnityEngine_Color___ctor_40757524(*(UnityEngine_Color_o *)(&v13 - 3), v14, v15, v16, &var40);
              methodPointer_high = HIDWORD(var40.methodPointer);
              methodPointer = (int)var40.methodPointer;
              invoker_method_high = HIDWORD(var40.invoker_method);
              invoker_method = (int)var40.invoker_method;
              hpBarType = -1;
              if ( !superBosshplabel )
                goto LABEL_37;
            }
            UILabel__set_effectColor(superBosshplabel, *(UnityEngine_Color_o *)&methodPointer, 0LL);
            Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.changeGauge;
            if ( hpBarType == -1 )
              hpBarType = data->fields.hpBarType;
            if ( Master_WarQuestSelectionMaster )
            {
              BattleServantChangeBarComponent__setBarType(
                (BattleServantChangeBarComponent_o *)Master_WarQuestSelectionMaster,
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
                  v32 = (UnityEngine_Object_o *)this->fields.hpChange;
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Object__op_Inequality(
                                                                                                   v32,
                                                                                                   0LL,
                                                                                                   0LL);
                  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
                  {
                    v33 = this->fields.hpChange;
                    if ( !v33 )
                      goto LABEL_37;
                    v33->fields.isSuperBossShift = 1;
                  }
                  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.nextTdGauge;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_37;
                  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                                                   (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                                   0LL);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_37;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                    this->fields.shiftTdPos,
                    0LL);
                  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.showBuffComponent;
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_37;
                  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_transform(
                                                                                                   (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                                   0LL);
                  if ( !Master_WarQuestSelectionMaster )
                    goto LABEL_37;
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
                    this->fields.shiftBuffPos,
                    0LL);
                }
                BattleServantSuperBossParamComponent__updateStateString(this, v30);
                Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.superbosshpGauge;
                if ( Master_WarQuestSelectionMaster )
                {
                  Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)Master_WarQuestSelectionMaster,
                                                                                                   0LL);
                  if ( Master_WarQuestSelectionMaster )
                  {
                    v34 = MaxShiftIconCount < 1;
                    UnityEngine_GameObject__SetActive(
                      (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                      v34,
                      0LL);
                    Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)*p_superBosshplabel;
                    if ( *p_superBosshplabel )
                    {
                      Master_WarQuestSelectionMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_WarQuestSelectionMaster, 0LL);
                      if ( Master_WarQuestSelectionMaster )
                      {
                        UnityEngine_GameObject__SetActive(
                          (UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster,
                          v34,
                          0LL);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
LABEL_36:
  BattleServantParamComponent__setData((BattleServantParamComponent_o *)this, data, method);
}


void __fastcall BattleServantSuperBossParamComponent__setDownMessage(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *superBosshplabel; // x0

  if ( (byte_42172B3 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_960/*"0"*/, method);
    byte_42172B3 = 1;
  }
  superBosshplabel = this->fields.superBosshplabel;
  if ( !superBosshplabel )
    sub_B0D97C(0LL);
  UILabel__set_text(superBosshplabel, (System_String_o *)StringLiteral_960/*"0"*/, 0LL);
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
    sub_B0D97C(0LL);
  BattleServantChangeBarComponent__setSplitHp(changeGauge, split, maxhp, 0LL);
}


void __fastcall BattleServantSuperBossParamComponent__updateStateString(
        BattleServantSuperBossParamComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleServantData_o *data; // x8
  void *stateLabel; // x0
  System_String_o *statestring; // x20
  struct UILabel_o *shortNameLabel; // x8
  struct System_String_o *mText; // x9
  System_String_o *v9; // x1
  __int64 v10; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42172B4 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_42172B4 = 1;
  }
  data = this->fields.data;
  if ( data )
  {
    stateLabel = this->fields.stateLabel;
    if ( stateLabel )
    {
      statestring = data->fields.statestring;
      stateLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)stateLabel, 0LL);
      shortNameLabel = this->fields.shortNameLabel;
      if ( shortNameLabel )
      {
        mText = shortNameLabel->fields.mText;
        if ( mText )
        {
          if ( stateLabel )
          {
            v11.fields.z = 0.0;
            v11.fields.x = (float)(mText->fields.m_stringLength * shortNameLabel->fields.mFontSize) + 10.0;
            v11.fields.y = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)stateLabel, v11, 0LL);
            if ( !statestring )
              goto LABEL_13;
            stateLabel = (void *)sub_B0D8BC(char___TypeInfo, 1LL);
            if ( stateLabel )
            {
              if ( !*((_DWORD *)stateLabel + 6) )
              {
                v10 = sub_B0D9A8(stateLabel);
                sub_B0D948(v10, 0LL);
              }
              *((_WORD *)stateLabel + 16) = 58;
              stateLabel = System_String__Split(statestring, (System_Char_array *)stateLabel, 0LL);
              if ( stateLabel )
              {
                if ( *((int *)stateLabel + 6) < 2 )
                  goto LABEL_13;
                if ( this->fields.stateLabel )
                {
                  v9 = (System_String_o *)*((_QWORD *)stateLabel + 5);
                  stateLabel = this->fields.stateLabel;
                  goto LABEL_15;
                }
              }
            }
          }
        }
      }
    }
LABEL_18:
    sub_B0D97C(stateLabel);
  }
LABEL_13:
  stateLabel = this->fields.stateLabel;
  if ( !stateLabel )
    goto LABEL_18;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
LABEL_15:
  UILabel__set_text((UILabel_o *)stateLabel, v9, 0LL);
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
  sub_B0D840(
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
  struct BattleHpGaugeBarComponent_o *v7; // x0

  if ( (byte_42172B2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, now);
    byte_42172B2 = 1;
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
      v7 = this->fields.superbosshpGauge;
      if ( v7 )
BattleHpGaugeBarComponent$$setValue_18874428:
        JUMPOUT(0x120003CLL);
LABEL_17:
      sub_B0D97C(v7);
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
      v7 = this->fields.superbosshpGauge;
      if ( v7 )
        goto BattleHpGaugeBarComponent$$setValue_18874428;
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
    sub_B0D840(
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
      sub_B0D97C(p_newinfo);
    if ( info->fields.totalDamage != (*p_newinfo)->fields.totalDamage )
    {
LABEL_6:
      this->fields.newinfo = info;
      sub_B0D840(
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
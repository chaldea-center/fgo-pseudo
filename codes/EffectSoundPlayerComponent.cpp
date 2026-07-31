void EffectSoundPlayerComponent___ctor(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EffectSoundPlayerComponent__ChangeVolumeBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int v5; // w8
  System_String_o *BgmName; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  System_String_o *klass; // x19
  __int64 v10; // x1
  float v11; // s8
  __int64 v12; // x1
  System_String_o *v13; // x20
  System_String_o *v14; // x21
  float v15; // s0
  float v16; // s8
  __int64 v17; // x1
  float v18; // s9

  if ( (byte_5939DA7 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&SoundManager_TypeInfo);
    byte_5939DA7 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, name);
  v4 = this;
  v5 = *(&BgmManager_TypeInfo->_2.cctor_finished + 1);
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 2 )
  {
    if ( !v5 )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, name);
    BgmName = BgmManager__GetBgmName(0);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      v8 = BgmName;
      klass = (System_String_o *)v4[1].klass;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v7);
      v11 = System_Convert__ToSingle_76478476(klass, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10);
      SoundManager__playBgm_48459636(v8, v11, 0);
      return;
    }
LABEL_24:
    sub_21FFED4(BgmName);
  }
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, name);
  BgmName = BgmManager__GetBgmName(0);
  if ( !LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_24;
  v13 = BgmName;
  v14 = (System_String_o *)v4[1].klass;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v12);
  v15 = System_Convert__ToSingle_76478476(v14, 0);
  if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_24;
  v16 = v15;
  v18 = System_Convert__ToSingle_76478476((System_String_o *)v4[1].monitor, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17);
  SoundManager__playBgm_48459752(v13, v16, v18, 0);
}


void EffectSoundPlayerComponent__ChangeVolumeSubBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  const MethodInfo *v8; // x5
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  const MethodInfo *v11; // x5
  _BOOL8 IsPlayBgmByBgmIds; // x0
  MethodInfo *v13; // x2
  const MethodInfo *v14; // x4
  __int64 v15; // x1
  System_String_o *BgmNameByBgmId; // x19
  float v17; // s8
  float v18; // s9
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x2
  System_Int32_array *bgmIds; // [xsp+0h] [xbp-40h] BYREF
  float parsedValue; // [xsp+Ch] [xbp-34h] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_5939DAC & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_4530/*"ChangeVolumeSubBgm"*/);
    sub_21FFC50(&StringLiteral_20256/*"fadeTime"*/);
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&StringLiteral_26037/*"volume"*/);
    byte_5939DAC = 1;
  }
  *(_QWORD *)result = 0;
  parsedValue = 0.0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 3 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].klass, &result[1], 0);
    if ( v5 )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_19;
      v5 = EffectSoundPlayerComponent__TryParseFloat(
             (EffectSoundPlayerComponent_o *)v5,
             (System_String_o *)v4[1].monitor,
             v6,
             v7,
             (float *)result,
             v8);
      if ( !v5 )
        return;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
LABEL_19:
        sub_21FFED4(v5);
      IsPlayBgmByBgmIds = EffectSoundPlayerComponent__TryParseFloat(
                            (EffectSoundPlayerComponent_o *)v5,
                            (System_String_o *)v4[1].fields.m_CachedPtr,
                            v9,
                            v10,
                            &parsedValue,
                            v11);
      if ( IsPlayBgmByBgmIds
        && (SLODWORD(v4->fields.m_CancellationTokenSource) < 4
         || (v19 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                     (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                     (System_String_o *)v4[1].fields.m_CancellationTokenSource,
                     (System_String_o *)v13,
                     &bgmIds,
                     v14))
         && (IsPlayBgmByBgmIds = EffectSoundPlayerComponent__IsPlayBgmByBgmIds(
                                   (EffectSoundPlayerComponent_o *)v19,
                                   bgmIds,
                                   v20))) )
      {
        BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId(
                           (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                           result[1],
                           v13);
        v17 = *(float *)result;
        v18 = parsedValue;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
        SoundManager__PlaySubBgm_48459416(BgmNameByBgmId, v17, v18, 0);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EffectSoundPlayerComponent__GetBgmNameByBgmId(
        EffectSoundPlayerComponent_o *this,
        int32_t bgmId,
        const MethodInfo *method)
{
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939DB0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_5939DB0 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&bgmId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    bgmId,
                                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_21FFECC(Master_object, v6);
  }
  return 0;
}


bool EffectSoundPlayerComponent__IsPlayBgmByBgmIds(
        EffectSoundPlayerComponent_o *this,
        System_Int32_array *bgmIds,
        const MethodInfo *method)
{
  System_String_o *BgmName; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_o *v7; // x20
  unsigned __int64 v8; // x22
  int32_t v9; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5939DAD & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_5939DAD = 1;
  }
  entity = 0;
  if ( !bgmIds || !bgmIds->max_length )
    return 0;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, bgmIds);
  BgmName = BgmManager__GetBgmName(0);
  max_length = bgmIds->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = BgmName;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= (unsigned int)max_length )
      sub_21FFED4(BgmName);
    v9 = bgmIds->m_Items[v8];
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    BgmName = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !BgmName )
LABEL_19:
      sub_21FFECC(BgmName, v5);
    BgmName = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)BgmName,
                                   &entity,
                                   v9,
                                   (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)BgmName & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_19;
      BgmName = (System_String_o *)System_String__op_Equality((System_String_o *)entity[1].monitor, v7, 0);
      if ( ((unsigned __int8)BgmName & 1) != 0 )
        return 1;
    }
    LODWORD(max_length) = bgmIds->max_length;
    if ( (__int64)++v8 >= (int)max_length )
      return 0;
  }
}


void EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5939DA5 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5939DA5 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PauseBgm(1, 0);
}


void EffectSoundPlayerComponent__PauseSubBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *subBgmId,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  System_String_o *BgmNameByBgmId; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5939DAA & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11014/*"PauseSubBgm"*/);
    byte_5939DAA = 1;
  }
  result = 0;
  v4 = System_Int32__TryParse(subBgmId, &result, 0);
  if ( v4 )
  {
    BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId((EffectSoundPlayerComponent_o *)v4, result, v5);
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v6);
    BgmManager__PauseSubBgm(1, BgmNameByBgmId, 0);
  }
}


void EffectSoundPlayerComponent__PlayBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *bgmId,
        const MethodInfo *method)
{
  int v4; // w8
  Il2CppObject *Master_object; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v7; // x1
  System_String_o *monitor; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5939DA3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5939DA3 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, bgmId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0);
  if ( !Master_object )
    goto LABEL_14;
  IsNullOrEmpty = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_14:
    sub_21FFECC(IsNullOrEmpty, v7);
  monitor = (System_String_o *)entity[1].monitor;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
  SoundManager__playBgm(monitor, 0);
}


void EffectSoundPlayerComponent__PlaySe(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5939D9F & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&Method_EffectSoundPlayerComponent_PlaySe__);
    byte_5939D9F = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySe__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySe__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)v4[1].klass, 0, 0);
      return;
    }
LABEL_15:
    sub_21FFED4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySe_48366604(
    v7,
    (System_String_o *)v4[1].klass,
    (System_String_o *)v4[1].monitor,
    1.0,
    0,
    0,
    0);
}


void EffectSoundPlayerComponent__PlaySeContinue(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5939DA0 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&Method_EffectSoundPlayerComponent_PlaySeContinue__);
    byte_5939DA0 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinue__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySeContinue__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySeContinue(v7, (System_String_o *)v4[1].klass, 0, 0);
      return;
    }
LABEL_15:
    sub_21FFED4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySeContinue_48365504(
    v7,
    (System_String_o *)v4[1].klass,
    (System_String_o *)v4[1].monitor,
    0,
    0);
}


void EffectSoundPlayerComponent__PlaySeContinueIgnorePreDelay(
        EffectSoundPlayerComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5939DA2 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
    byte_5939DA2 = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySeContinue(v7, (System_String_o *)v4[1].klass, 1, 0);
      return;
    }
LABEL_15:
    sub_21FFED4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySeContinue_48365504(
    v7,
    (System_String_o *)v4[1].klass,
    (System_String_o *)v4[1].monitor,
    1,
    0);
}


void EffectSoundPlayerComponent__PlaySeIgnorePreDelay(
        EffectSoundPlayerComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_5939DA1 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
    byte_5939DA1 = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)v4[1].klass, 1, 0);
      return;
    }
LABEL_15:
    sub_21FFED4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySe_48366604(
    v7,
    (System_String_o *)v4[1].klass,
    (System_String_o *)v4[1].monitor,
    1.0,
    0,
    1,
    0);
}


void EffectSoundPlayerComponent__PlaySubBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  const MethodInfo *v8; // x4
  System_String_o *monitor; // x19
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  System_Int32_array *bgmIds; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_5939DA8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&SoundManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&StringLiteral_11109/*"PlaySubBgm"*/);
    byte_5939DA8 = 1;
  }
  result = 0;
  bgmIds = 0;
  entity = 0;
  if ( !paramStr )
    goto LABEL_21;
  this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0);
  if ( !this )
    goto LABEL_21;
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_21FFED4(this);
  v5 = System_Int32__TryParse((System_String_o *)this[1].klass, &result, 0);
  if ( v5
    && (SLODWORD(v4->fields.m_CancellationTokenSource) < 2
     || (v10 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                 (EffectSoundPlayerComponent_o *)v5,
                 (System_String_o *)v4[1].monitor,
                 v7,
                 &bgmIds,
                 v8))
     && EffectSoundPlayerComponent__IsPlayBgmByBgmIds((EffectSoundPlayerComponent_o *)v10, bgmIds, v11)) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
    this = (EffectSoundPlayerComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( this )
    {
      this = (EffectSoundPlayerComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               &entity,
                                               result,
                                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)this & 1) == 0 )
        return;
      if ( entity )
      {
        this = (EffectSoundPlayerComponent_o *)System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
          if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, paramStr);
          SoundManager__PlaySubBgm(monitor, 0.0, 0);
          return;
        }
      }
    }
LABEL_21:
    sub_21FFECC(this, paramStr);
  }
}


void EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5939DA6 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5939DA6 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PauseBgm(0, 0);
}


void EffectSoundPlayerComponent__ResumeSubBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 IsPlayBgmByBgmIds; // x0
  MethodInfo *v6; // x2
  const MethodInfo *v7; // x4
  __int64 v8; // x1
  System_String_o *BgmNameByBgmId; // x19
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  System_Int32_array *bgmIds; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_5939DAB & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_21FFC50(&StringLiteral_11865/*"ResumeSubBgm"*/);
    byte_5939DAB = 1;
  }
  result = 0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, paramStr);
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_21FFED4(this);
  IsPlayBgmByBgmIds = System_Int32__TryParse((System_String_o *)this[1].klass, &result, 0);
  if ( IsPlayBgmByBgmIds
    && (SLODWORD(v4->fields.m_CancellationTokenSource) < 2
     || (v10 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                 (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                 (System_String_o *)v4[1].monitor,
                 (System_String_o *)v6,
                 &bgmIds,
                 v7))
     && (IsPlayBgmByBgmIds = EffectSoundPlayerComponent__IsPlayBgmByBgmIds(
                               (EffectSoundPlayerComponent_o *)v10,
                               bgmIds,
                               v11))) )
  {
    BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId(
                       (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                       result,
                       v6);
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
    BgmManager__PauseSubBgm(0, BgmNameByBgmId, 0);
  }
}


void EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5939DA4 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5939DA4 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__stopBgm(0);
}


void EffectSoundPlayerComponent__StopSubBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *subBgmId,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  System_String_o *BgmNameByBgmId; // x19
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5939DA9 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&StringLiteral_13613/*"StopSubBgm"*/);
    byte_5939DA9 = 1;
  }
  result = 0;
  v4 = System_Int32__TryParse(subBgmId, &result, 0);
  if ( v4 )
  {
    BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId((EffectSoundPlayerComponent_o *)v4, result, v5);
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v6);
    BgmManager__StopSubBgm(BgmNameByBgmId, 0.0, 0);
  }
}


bool EffectSoundPlayerComponent__TryParseBgmId(
        EffectSoundPlayerComponent_o *this,
        System_String_o *value,
        System_String_o *callerName,
        int32_t *bgmId,
        const MethodInfo *method)
{
  return System_Int32__TryParse(value, bgmId, 0);
}


bool EffectSoundPlayerComponent__TryParseFloat(
        EffectSoundPlayerComponent_o *this,
        System_String_o *value,
        System_String_o *callerName,
        System_String_o *fieldName,
        float *parsedValue,
        const MethodInfo *method)
{
  System_IFormatProvider_o *InvariantCulture; // x0
  __int64 v9; // x1
  System_IFormatProvider_o *CurrentCulture; // x2

  if ( (byte_5939DAF & 1) == 0 )
  {
    sub_21FFC50(&System_Globalization_CultureInfo_TypeInfo);
    byte_5939DAF = 1;
  }
  if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, value);
  InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
  if ( System_Single__TryParse_77014784(value, 167, InvariantCulture, parsedValue, 0) )
    return 1;
  if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v9);
  CurrentCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_CurrentCulture(0);
  return System_Single__TryParse_77014784(value, 167, CurrentCulture, parsedValue, 0);
}


bool EffectSoundPlayerComponent__TryParseMainBgmIdList(
        EffectSoundPlayerComponent_o *this,
        System_String_o *json,
        System_String_o *callerName,
        System_Int32_array **bgmIds,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  System_Int32_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5939DAE & 1) == 0 )
  {
    sub_21FFC50(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_int_____);
    sub_21FFC50(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_5939DAE = 1;
  }
  *bgmIds = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)bgmIds,
    0,
    callerName,
    (System_String_o *)bgmIds,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( !*(&Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo, v10);
  v11 = (System_Int32_array *)Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
                                json,
                                (const MethodInfo_388F700 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_int_____);
  *bgmIds = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)bgmIds, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  return *bgmIds && (*bgmIds)->max_length != 0;
}
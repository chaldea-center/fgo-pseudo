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

  if ( (byte_5971F6B & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&System_Convert_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&SoundManager_TypeInfo);
    byte_5971F6B = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, name);
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
      v11 = System_Convert__ToSingle_76691780(klass, 0);
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v10);
      SoundManager__playBgm_48506764(v8, v11, 0);
      return;
    }
LABEL_24:
    sub_2213CE4(BgmName);
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
  v15 = System_Convert__ToSingle_76691780(v14, 0);
  if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
    goto LABEL_24;
  v16 = v15;
  v18 = System_Convert__ToSingle_76691780((System_String_o *)v4[1].monitor, 0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17);
  SoundManager__playBgm_48506880(v13, v16, v18, 0);
}


void EffectSoundPlayerComponent__ChangeVolumeSeWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x20
  EffectSoundPlayerComponent_c *klass; // x19
  _BOOL8 IsNullOrEmpty; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  const MethodInfo *v9; // x5
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  const MethodInfo *v12; // x5
  _BOOL8 v13; // x0
  System_String_o *v14; // x2
  const MethodInfo *v15; // x4
  System_Reflection_MethodBase_o *v16; // x0
  _BOOL8 v17; // x0
  const MethodInfo *v18; // x2
  System_Int32_array *bgmIds; // [xsp+0h] [xbp-30h] BYREF
  float parsedValue; // [xsp+Ch] [xbp-24h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_5971F7E & 1) == 0 )
  {
    sub_2213A60(&Method_EffectSoundPlayerComponent_ChangeVolumeSeWithChannel__);
    sub_2213A60(&StringLiteral_4535/*"ChangeVolumeSeWithChannel"*/);
    sub_2213A60(&StringLiteral_20298/*"fadeTime"*/);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_26087/*"volume"*/);
    byte_5971F7E = 1;
  }
  *(_QWORD *)result = 0;
  parsedValue = 0.0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 4 )
  {
    klass = this[1].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)klass, 0);
    if ( !IsNullOrEmpty )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_19;
      IsNullOrEmpty = System_Int32__TryParse((System_String_o *)v4[1].monitor, &result[1], 0);
      if ( !IsNullOrEmpty )
        return;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_19;
      IsNullOrEmpty = EffectSoundPlayerComponent__TryParseFloat(
                        (EffectSoundPlayerComponent_o *)IsNullOrEmpty,
                        (System_String_o *)v4[1].fields.m_CachedPtr,
                        v7,
                        v8,
                        (float *)result,
                        v9);
      if ( !IsNullOrEmpty )
        return;
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
LABEL_19:
        sub_2213CE4(IsNullOrEmpty);
      v13 = EffectSoundPlayerComponent__TryParseFloat(
              (EffectSoundPlayerComponent_o *)IsNullOrEmpty,
              (System_String_o *)v4[1].fields.m_CancellationTokenSource,
              v10,
              v11,
              &parsedValue,
              v12);
      if ( v13
        && (SLODWORD(v4->fields.m_CancellationTokenSource) < 5
         || (v17 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                     (EffectSoundPlayerComponent_o *)v13,
                     (System_String_o *)v4[2].klass,
                     v14,
                     &bgmIds,
                     v15))
         && EffectSoundPlayerComponent__IsPlayBgmByBgmIds((EffectSoundPlayerComponent_o *)v17, bgmIds, v18)) )
      {
        v16 = (System_Reflection_MethodBase_o *)sub_1FFEFAC(Method_EffectSoundPlayerComponent_ChangeVolumeSeWithChannel__);
        OverwriteAssetSoundName__ChangeVolumeSeByChannel(
          v16,
          (System_String_o *)klass,
          result[1],
          *(float *)result,
          parsedValue,
          0);
      }
    }
  }
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

  if ( (byte_5971F70 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_4536/*"ChangeVolumeSubBgm"*/);
    sub_2213A60(&StringLiteral_20298/*"fadeTime"*/);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_26087/*"volume"*/);
    byte_5971F70 = 1;
  }
  *(_QWORD *)result = 0;
  parsedValue = 0.0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
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
        sub_2213CE4(v5);
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
        SoundManager__PlaySubBgm_48506544(BgmNameByBgmId, v17, v18, 0);
      }
    }
  }
}


void EffectSoundPlayerComponent__ChangeVolumeSubBgmWithChannel(
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
  System_String_o *BgmNameByBgmId; // x19
  __int64 v16; // x1
  __int64 v17; // kr00_8
  int32_t v18; // w20
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x2
  System_Int32_array *bgmIds; // [xsp+0h] [xbp-40h] BYREF
  __int64 parsedValue; // [xsp+8h] [xbp-38h] BYREF
  int32_t result[2]; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_5971F79 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&StringLiteral_4537/*"ChangeVolumeSubBgmWithChannel"*/);
    sub_2213A60(&StringLiteral_20298/*"fadeTime"*/);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_26087/*"volume"*/);
    byte_5971F79 = 1;
  }
  *(_QWORD *)result = 0;
  bgmIds = 0;
  parsedValue = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 4 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].klass, &result[1], 0);
    if ( v5 )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_22;
      v5 = System_Int32__TryParse((System_String_o *)v4[1].monitor, result, 0);
      if ( !v5 )
        return;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_22;
      v5 = EffectSoundPlayerComponent__TryParseFloat(
             (EffectSoundPlayerComponent_o *)v5,
             (System_String_o *)v4[1].fields.m_CachedPtr,
             v6,
             v7,
             (float *)&parsedValue + 1,
             v8);
      if ( !v5 )
        return;
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
LABEL_22:
        sub_2213CE4(v5);
      IsPlayBgmByBgmIds = EffectSoundPlayerComponent__TryParseFloat(
                            (EffectSoundPlayerComponent_o *)v5,
                            (System_String_o *)v4[1].fields.m_CancellationTokenSource,
                            v9,
                            v10,
                            (float *)&parsedValue,
                            v11);
      if ( IsPlayBgmByBgmIds
        && (SLODWORD(v4->fields.m_CancellationTokenSource) < 5
         || (v19 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                     (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                     (System_String_o *)v4[2].klass,
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
        if ( !System_String__IsNullOrEmpty(BgmNameByBgmId, 0) )
        {
          v17 = parsedValue;
          v18 = result[0];
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v16);
          BgmManager__ChangeVolumeSubBgmByChannel(BgmNameByBgmId, v18, *((float *)&v17 + 1), *(float *)&v17, 0);
        }
      }
    }
  }
}


void EffectSoundPlayerComponent__ChangeVolumeVoiceWithChannel(
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
  __int64 v12; // x1
  System_String_o *monitor; // x19
  System_String_o *klass; // x20
  float v15; // s8
  float v16; // s9
  int32_t v17; // w21
  float parsedValue; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5971F83 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&StringLiteral_4538/*"ChangeVolumeVoiceWithChannel"*/);
    sub_2213A60(&StringLiteral_20298/*"fadeTime"*/);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_26087/*"volume"*/);
    byte_5971F83 = 1;
  }
  *(_QWORD *)result = 0;
  parsedValue = 0.0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 5 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].fields.m_CachedPtr, &result[1], 0);
    if ( v5 )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFC) == 0 )
        goto LABEL_17;
      v5 = EffectSoundPlayerComponent__TryParseFloat(
             (EffectSoundPlayerComponent_o *)v5,
             (System_String_o *)v4[1].fields.m_CancellationTokenSource,
             v6,
             v7,
             (float *)result,
             v8);
      if ( !v5 )
        return;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 4 )
        goto LABEL_17;
      v5 = EffectSoundPlayerComponent__TryParseFloat(
             (EffectSoundPlayerComponent_o *)v5,
             (System_String_o *)v4[2].klass,
             v9,
             v10,
             &parsedValue,
             v11);
      if ( !v5 )
        return;
      if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
LABEL_17:
        sub_2213CE4(v5);
      klass = (System_String_o *)v4[1].klass;
      monitor = (System_String_o *)v4[1].monitor;
      v16 = parsedValue;
      v15 = *(float *)result;
      v17 = result[1];
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v12);
      SeManager__ChangeVolumeVoiceByChannel(klass, monitor, v17, v15, v16, 0);
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

  if ( (byte_5971F74 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_5971F74 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&bgmId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    bgmId,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_2213CDC(Master_object, v6);
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

  if ( (byte_5971F71 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    byte_5971F71 = 1;
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
      sub_2213CE4(BgmName);
    v9 = bgmIds->m_Items[v8];
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
    BgmName = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !BgmName )
LABEL_19:
      sub_2213CDC(BgmName, v5);
    BgmName = (System_String_o *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)BgmName,
                                   &entity,
                                   v9,
                                   (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
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
  if ( (byte_5971F69 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_5971F69 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PauseBgm(1, 0);
}


void EffectSoundPlayerComponent__PauseSeWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x20
  EffectSoundPlayerComponent_c *klass; // x19
  _BOOL8 IsNullOrEmpty; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5971F7C & 1) == 0 )
  {
    sub_2213A60(&Method_EffectSoundPlayerComponent_PauseSeWithChannel__);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11028/*"PauseSeWithChannel"*/);
    byte_5971F7C = 1;
  }
  result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    klass = this[1].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)klass, 0);
    if ( !IsNullOrEmpty )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(IsNullOrEmpty);
      if ( System_Int32__TryParse((System_String_o *)v4[1].monitor, &result, 0) )
      {
        v7 = Method_EffectSoundPlayerComponent_PauseSeWithChannel__;
        if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PauseSeWithChannel__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PauseSeWithChannel__);
        v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
        OverwriteAssetSoundName__PauseSeByChannel(v8, 1, (System_String_o *)klass, result, 0);
      }
    }
  }
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

  if ( (byte_5971F6E & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&StringLiteral_11029/*"PauseSubBgm"*/);
    byte_5971F6E = 1;
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


void EffectSoundPlayerComponent__PauseSubBgmWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  System_String_o *BgmNameByBgmId; // x19
  __int64 v9; // x1
  int32_t v10; // w20
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5971F77 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11030/*"PauseSubBgmWithChannel"*/);
    byte_5971F77 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].klass, &result[1], 0);
    if ( v5 )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v5);
      v6 = System_Int32__TryParse((System_String_o *)v4[1].monitor, result, 0);
      if ( v6 )
      {
        BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId(
                           (EffectSoundPlayerComponent_o *)v6,
                           result[1],
                           v7);
        if ( !System_String__IsNullOrEmpty(BgmNameByBgmId, 0) )
        {
          v10 = result[0];
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
          BgmManager__PauseSubBgmByChannel(1, BgmNameByBgmId, v10, 0);
        }
      }
    }
  }
}


void EffectSoundPlayerComponent__PauseVoiceWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *monitor; // x19
  System_String_o *klass; // x20
  int32_t v9; // w21
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971F81 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11031/*"PauseVoiceWithChannel"*/);
    byte_5971F81 = 1;
  }
  result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 3 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].fields.m_CachedPtr, &result, 0);
    if ( v5 )
    {
      if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        sub_2213CE4(v5);
      klass = (System_String_o *)v4[1].klass;
      monitor = (System_String_o *)v4[1].monitor;
      v9 = result;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v6);
      SeManager__PauseVoiceByChannel(1, klass, monitor, v9, 0);
    }
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

  if ( (byte_5971F67 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5971F67 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, bgmId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0);
  if ( !Master_object )
    goto LABEL_14;
  IsNullOrEmpty = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_14:
    sub_2213CDC(IsNullOrEmpty, v7);
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

  if ( (byte_5971F63 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&Method_EffectSoundPlayerComponent_PlaySe__);
    byte_5971F63 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySe__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySe__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)v4[1].klass, 0, 0);
      return;
    }
LABEL_15:
    sub_2213CE4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySe_48402488(
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

  if ( (byte_5971F64 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&Method_EffectSoundPlayerComponent_PlaySeContinue__);
    byte_5971F64 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinue__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySeContinue__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySeContinue(v7, (System_String_o *)v4[1].klass, 0, 0);
      return;
    }
LABEL_15:
    sub_2213CE4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySeContinue_48401388(
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

  if ( (byte_5971F66 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
    byte_5971F66 = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySeContinue(v7, (System_String_o *)v4[1].klass, 1, 0);
      return;
    }
LABEL_15:
    sub_2213CE4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySeContinue_48401388(
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

  if ( (byte_5971F65 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
    byte_5971F65 = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
    v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)v4[1].klass, 1, 0);
      return;
    }
LABEL_15:
    sub_2213CE4(v7);
  }
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_2213A44(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySe_48402488(
    v7,
    (System_String_o *)v4[1].klass,
    (System_String_o *)v4[1].monitor,
    1.0,
    0,
    1,
    0);
}


void EffectSoundPlayerComponent__PlaySeWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x20
  EffectSoundPlayerComponent_c *klass; // x19
  _BOOL8 IsNullOrEmpty; // x0
  _BOOL8 v7; // x0
  System_String_o *v8; // x2
  const MethodInfo *v9; // x4
  _QWORD *v10; // x0
  __int64 v11; // x1
  System_Reflection_MethodBase_o *v12; // x21
  int32_t v13; // w20
  SeManager_c *v14; // x8
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  System_Int32_array *bgmIds; // [xsp+8h] [xbp-38h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_5971F7A & 1) == 0 )
  {
    sub_2213A60(&Method_EffectSoundPlayerComponent_PlaySeWithChannel__);
    sub_2213A60(&SeManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11124/*"PlaySeWithChannel"*/);
    byte_5971F7A = 1;
  }
  result = 0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    klass = this[1].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)klass, 0);
    if ( !IsNullOrEmpty )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(IsNullOrEmpty);
      v7 = System_Int32__TryParse((System_String_o *)v4[1].monitor, &result, 0);
      if ( v7
        && (SLODWORD(v4->fields.m_CancellationTokenSource) < 3
         || (v15 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                     (EffectSoundPlayerComponent_o *)v7,
                     (System_String_o *)v4[1].fields.m_CachedPtr,
                     v8,
                     &bgmIds,
                     v9))
         && EffectSoundPlayerComponent__IsPlayBgmByBgmIds((EffectSoundPlayerComponent_o *)v15, bgmIds, v16)) )
      {
        v10 = Method_EffectSoundPlayerComponent_PlaySeWithChannel__;
        if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeWithChannel__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_PlaySeWithChannel__);
        v12 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
        v13 = result;
        v14 = SeManager_TypeInfo;
        if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v11);
          v14 = SeManager_TypeInfo;
        }
        OverwriteAssetSoundName__PlaySeByChannel(
          v12,
          (System_String_o *)klass,
          v13,
          v14->static_fields->DEFAULT_VOLUME,
          0.0,
          0,
          0,
          0,
          0);
      }
    }
  }
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

  if ( (byte_5971F6C & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BgmMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_2213A60(&SoundManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11127/*"PlaySubBgm"*/);
    byte_5971F6C = 1;
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
    sub_2213CE4(this);
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
    this = (EffectSoundPlayerComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( this )
    {
      this = (EffectSoundPlayerComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                               &entity,
                                               result,
                                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
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
    sub_2213CDC(this, paramStr);
  }
}


void EffectSoundPlayerComponent__PlaySubBgmWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  _BOOL8 IsPlayBgmByBgmIds; // x0
  MethodInfo *v7; // x2
  const MethodInfo *v8; // x4
  System_String_o *BgmNameByBgmId; // x20
  int32_t v10; // w21
  SubBgmPlayArgsWithChannel_o *v11; // x0
  System_Nullable_float__o v12; // x3
  SubBgmPlayArgsWithChannel_o *v13; // x19
  __int64 v14; // x1
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  System_Int32_array *bgmIds; // [xsp+0h] [xbp-30h] BYREF
  int32_t result[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5971F75 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SubBgmPlayArgsWithChannel_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11128/*"PlaySubBgmWithChannel"*/);
    byte_5971F75 = 1;
  }
  bgmIds = 0;
  *(_QWORD *)result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].klass, &result[1], 0);
    if ( v5 )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v5);
      IsPlayBgmByBgmIds = System_Int32__TryParse((System_String_o *)v4[1].monitor, result, 0);
      if ( IsPlayBgmByBgmIds
        && (SLODWORD(v4->fields.m_CancellationTokenSource) < 3
         || (v15 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                     (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                     (System_String_o *)v4[1].fields.m_CachedPtr,
                     (System_String_o *)v7,
                     &bgmIds,
                     v8))
         && (IsPlayBgmByBgmIds = EffectSoundPlayerComponent__IsPlayBgmByBgmIds(
                                   (EffectSoundPlayerComponent_o *)v15,
                                   bgmIds,
                                   v16))) )
      {
        BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId(
                           (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                           result[1],
                           v7);
        if ( !System_String__IsNullOrEmpty(BgmNameByBgmId, 0) )
        {
          v10 = result[0];
          v11 = (SubBgmPlayArgsWithChannel_o *)sub_2213CCC(SubBgmPlayArgsWithChannel_TypeInfo);
          v12 = 0;
          v13 = v11;
          SubBgmPlayArgsWithChannel___ctor(v11, BgmNameByBgmId, v10, v12, 0.0, 0, 0);
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v14);
          BgmManager__PlaySubBgmByChannel(v13, 0);
        }
      }
    }
  }
}


void EffectSoundPlayerComponent__PlayVoiceWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x21
  System_String_o *monitor; // x19
  EffectSoundPlayerComponent_c *klass; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971F7F & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11133/*"PlayVoiceWithChannel"*/);
    byte_5971F7F = 1;
  }
  result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 3 )
  {
    klass = this[1].klass;
    monitor = (System_String_o *)this[1].monitor;
    if ( !System_String__IsNullOrEmpty((System_String_o *)klass, 0) )
    {
      IsNullOrEmpty = System_String__IsNullOrEmpty(monitor, 0);
      if ( !IsNullOrEmpty )
      {
        if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 2 )
          sub_2213CE4(IsNullOrEmpty);
        if ( System_Int32__TryParse((System_String_o *)v4[1].fields.m_CachedPtr, &result, 0) )
        {
          v9 = result;
          if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
          SeManager__PlayVoiceByChannel((System_String_o *)klass, monitor, v9, 0, 0, 0);
        }
      }
    }
  }
}


void EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5971F6A & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_5971F6A = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PauseBgm(0, 0);
}


void EffectSoundPlayerComponent__ResumeSeWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x20
  EffectSoundPlayerComponent_c *klass; // x19
  _BOOL8 IsNullOrEmpty; // x0
  _BOOL8 v7; // x0
  System_String_o *v8; // x2
  const MethodInfo *v9; // x4
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x2
  System_Int32_array *bgmIds; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_5971F7D & 1) == 0 )
  {
    sub_2213A60(&Method_EffectSoundPlayerComponent_ResumeSeWithChannel__);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11885/*"ResumeSeWithChannel"*/);
    byte_5971F7D = 1;
  }
  result = 0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    klass = this[1].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)klass, 0);
    if ( !IsNullOrEmpty )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(IsNullOrEmpty);
      v7 = System_Int32__TryParse((System_String_o *)v4[1].monitor, &result, 0);
      if ( v7
        && (SLODWORD(v4->fields.m_CancellationTokenSource) < 3
         || (v12 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                     (EffectSoundPlayerComponent_o *)v7,
                     (System_String_o *)v4[1].fields.m_CachedPtr,
                     v8,
                     &bgmIds,
                     v9))
         && EffectSoundPlayerComponent__IsPlayBgmByBgmIds((EffectSoundPlayerComponent_o *)v12, bgmIds, v13)) )
      {
        v10 = Method_EffectSoundPlayerComponent_ResumeSeWithChannel__;
        if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_ResumeSeWithChannel__ + 83) & 2) != 0 )
          v10 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_ResumeSeWithChannel__);
        v11 = (System_Reflection_MethodBase_o *)sub_2213A44(v10, v10[4]);
        OverwriteAssetSoundName__PauseSeByChannel(v11, 0, (System_String_o *)klass, result, 0);
      }
    }
  }
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

  if ( (byte_5971F6F & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11886/*"ResumeSubBgm"*/);
    byte_5971F6F = 1;
  }
  result = 0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource) )
    sub_2213CE4(this);
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


void EffectSoundPlayerComponent__ResumeSubBgmWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  _BOOL8 IsPlayBgmByBgmIds; // x0
  MethodInfo *v7; // x2
  const MethodInfo *v8; // x4
  System_String_o *BgmNameByBgmId; // x19
  __int64 v10; // x1
  int32_t v11; // w20
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x2
  System_Int32_array *bgmIds; // [xsp+8h] [xbp-28h] BYREF
  int32_t result[2]; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_5971F78 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11887/*"ResumeSubBgmWithChannel"*/);
    byte_5971F78 = 1;
  }
  *(_QWORD *)result = 0;
  bgmIds = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].klass, &result[1], 0);
    if ( v5 )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v5);
      IsPlayBgmByBgmIds = System_Int32__TryParse((System_String_o *)v4[1].monitor, result, 0);
      if ( IsPlayBgmByBgmIds
        && (SLODWORD(v4->fields.m_CancellationTokenSource) < 3
         || (v12 = EffectSoundPlayerComponent__TryParseMainBgmIdList(
                     (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                     (System_String_o *)v4[1].fields.m_CachedPtr,
                     (System_String_o *)v7,
                     &bgmIds,
                     v8))
         && (IsPlayBgmByBgmIds = EffectSoundPlayerComponent__IsPlayBgmByBgmIds(
                                   (EffectSoundPlayerComponent_o *)v12,
                                   bgmIds,
                                   v13))) )
      {
        BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId(
                           (EffectSoundPlayerComponent_o *)IsPlayBgmByBgmIds,
                           result[1],
                           v7);
        if ( !System_String__IsNullOrEmpty(BgmNameByBgmId, 0) )
        {
          v11 = result[0];
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v10);
          BgmManager__PauseSubBgmByChannel(0, BgmNameByBgmId, v11, 0);
        }
      }
    }
  }
}


void EffectSoundPlayerComponent__ResumeVoiceWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *monitor; // x19
  System_String_o *klass; // x20
  int32_t v9; // w21
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971F82 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_11888/*"ResumeVoiceWithChannel"*/);
    byte_5971F82 = 1;
  }
  result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 3 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].fields.m_CachedPtr, &result, 0);
    if ( v5 )
    {
      if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        sub_2213CE4(v5);
      klass = (System_String_o *)v4[1].klass;
      monitor = (System_String_o *)v4[1].monitor;
      v9 = result;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v6);
      SeManager__PauseVoiceByChannel(0, klass, monitor, v9, 0);
    }
  }
}


void EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_5971F68 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5971F68 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__stopBgm(0);
}


void EffectSoundPlayerComponent__StopSeWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x20
  EffectSoundPlayerComponent_c *klass; // x19
  _BOOL8 IsNullOrEmpty; // x0
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5971F7B & 1) == 0 )
  {
    sub_2213A60(&Method_EffectSoundPlayerComponent_StopSeWithChannel__);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_13640/*"StopSeWithChannel"*/);
    byte_5971F7B = 1;
  }
  result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    klass = this[1].klass;
    IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)klass, 0);
    if ( !IsNullOrEmpty )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(IsNullOrEmpty);
      if ( System_Int32__TryParse((System_String_o *)v4[1].monitor, &result, 0) )
      {
        v7 = Method_EffectSoundPlayerComponent_StopSeWithChannel__;
        if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_StopSeWithChannel__ + 83) & 2) != 0 )
          v7 = (_QWORD *)sub_2213A78(Method_EffectSoundPlayerComponent_StopSeWithChannel__);
        v8 = (System_Reflection_MethodBase_o *)sub_2213A44(v7, v7[4]);
        OverwriteAssetSoundName__StopSeByChannel(v8, (System_String_o *)klass, result, 0.0, 0);
      }
    }
  }
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

  if ( (byte_5971F6D & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&StringLiteral_13641/*"StopSubBgm"*/);
    byte_5971F6D = 1;
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


void EffectSoundPlayerComponent__StopSubBgmWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  _BOOL8 v6; // x0
  const MethodInfo *v7; // x2
  System_String_o *BgmNameByBgmId; // x19
  __int64 v9; // x1
  int32_t v10; // w20
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5971F76 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_13642/*"StopSubBgmWithChannel"*/);
    byte_5971F76 = 1;
  }
  *(_QWORD *)result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 2 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].klass, &result[1], 0);
    if ( v5 )
    {
      if ( ((__int64)v4->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        sub_2213CE4(v5);
      v6 = System_Int32__TryParse((System_String_o *)v4[1].monitor, result, 0);
      if ( v6 )
      {
        BgmNameByBgmId = EffectSoundPlayerComponent__GetBgmNameByBgmId(
                           (EffectSoundPlayerComponent_o *)v6,
                           result[1],
                           v7);
        if ( !System_String__IsNullOrEmpty(BgmNameByBgmId, 0) )
        {
          v10 = result[0];
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v9);
          BgmManager__StopSubBgmByChannel(BgmNameByBgmId, v10, 0.0, 0);
        }
      }
    }
  }
}


void EffectSoundPlayerComponent__StopVoiceWithChannel(
        EffectSoundPlayerComponent_o *this,
        System_String_o *paramStr,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_o *monitor; // x19
  System_String_o *klass; // x20
  int32_t v9; // w21
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5971F80 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_2213A60(&StringLiteral_13643/*"StopVoiceWithChannel"*/);
    byte_5971F80 = 1;
  }
  result = 0;
  if ( !paramStr || (this = (EffectSoundPlayerComponent_o *)System_String__Split(paramStr, 0x3Au, 0, 0)) == 0 )
    sub_2213CDC(this, paramStr);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 3 )
  {
    v5 = System_Int32__TryParse((System_String_o *)this[1].fields.m_CachedPtr, &result, 0);
    if ( v5 )
    {
      if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
        sub_2213CE4(v5);
      klass = (System_String_o *)v4[1].klass;
      monitor = (System_String_o *)v4[1].monitor;
      v9 = result;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v6);
      SeManager__StopVoiceByChannel(klass, monitor, v9, 0.0, 0);
    }
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


bool EffectSoundPlayerComponent__TryParseChannelId(
        EffectSoundPlayerComponent_o *this,
        System_String_o *value,
        System_String_o *callerName,
        int32_t *channelId,
        const MethodInfo *method)
{
  return System_Int32__TryParse(value, channelId, 0);
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

  if ( (byte_5971F73 & 1) == 0 )
  {
    sub_2213A60(&System_Globalization_CultureInfo_TypeInfo);
    byte_5971F73 = 1;
  }
  if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, value);
  InvariantCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_InvariantCulture(0);
  if ( System_Single__TryParse_77228088(value, 167, InvariantCulture, parsedValue, 0) )
    return 1;
  if ( !*(&System_Globalization_CultureInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Globalization_CultureInfo_TypeInfo, v9);
  CurrentCulture = (System_IFormatProvider_o *)System_Globalization_CultureInfo__get_CurrentCulture(0);
  return System_Single__TryParse_77228088(value, 167, CurrentCulture, parsedValue, 0);
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

  if ( (byte_5971F72 & 1) == 0 )
  {
    sub_2213A60(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_int_____);
    sub_2213A60(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_5971F72 = 1;
  }
  *bgmIds = 0;
  sub_2213A04(
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
                                (const MethodInfo_38C2BC8 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_int_____);
  *bgmIds = v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)bgmIds, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  return *bgmIds && (*bgmIds)->max_length != 0;
}
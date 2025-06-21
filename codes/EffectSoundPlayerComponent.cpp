void __fastcall EffectSoundPlayerComponent___ctor(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ChangeVolumeBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  EffectSoundPlayerComponent_o *v6; // x20
  int m_CancellationTokenSource; // w22
  System_String_o *BgmName; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x19
  System_String_o *klass; // x21
  float v13; // s8
  float v14; // s9

  if ( (byte_4B1DB70 & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, name);
    sub_1BCAFF8(&System_Convert_TypeInfo, v4);
    this = (EffectSoundPlayerComponent_o *)sub_1BCAFF8(&SoundManager_TypeInfo, v5);
    byte_4B1DB70 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, name);
  v6 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  if ( !LODWORD(v6->fields.m_CancellationTokenSource) )
    goto LABEL_19;
  v11 = BgmName;
  klass = (System_String_o *)v6[1].klass;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v13 = System_Convert__ToSingle_63541508(klass, 0LL);
  if ( m_CancellationTokenSource < 2 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm_40688204(v11, v13, 0LL);
    return;
  }
  if ( LODWORD(v6->fields.m_CancellationTokenSource) <= 1 )
LABEL_19:
    sub_1BCB25C(BgmName, v9, v10);
  v14 = System_Convert__ToSingle_63541508((System_String_o *)v6[1].monitor, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_40688320(v11, v13, v14, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DB6E & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    byte_4B1DB6E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(1, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlayBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *bgmId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v9; // x1
  System_String_o *monitor; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1DB6C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_BgmMaster___, bgmId);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5);
    sub_1BCAFF8(&SoundManager_TypeInfo, v6);
    byte_4B1DB6C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_object )
    goto LABEL_14;
  IsNullOrEmpty = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_32C7E4C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_14:
    sub_1BCB254(IsNullOrEmpty, v9);
  monitor = (System_String_o *)entity[1].monitor;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(monitor, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlaySe(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *klass; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1DB68 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1BCAFF8(&Method_EffectSoundPlayerComponent_PlaySe__, name);
    byte_4B1DB68 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySe__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_EffectSoundPlayerComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, klass, 0, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, klass, v9);
  OverwriteAssetSoundName__PlaySe_40595740(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0LL, 0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlaySeContinue(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *klass; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1DB69 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1BCAFF8(&Method_EffectSoundPlayerComponent_PlaySeContinue__, name);
    byte_4B1DB69 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_EffectSoundPlayerComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, klass, 0, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, klass, v9);
  OverwriteAssetSoundName__PlaySeContinue_40594888(v7, klass, (System_String_o *)v4[1].monitor, 0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlaySeContinueIgnorePreDelay(
        EffectSoundPlayerComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *klass; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1DB6B & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1BCAFF8(
                                             &Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__,
                                             soundInfo);
    byte_4B1DB6B = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, klass, 1, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, klass, v9);
  OverwriteAssetSoundName__PlaySeContinue_40594888(v7, klass, (System_String_o *)v4[1].monitor, 1, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlaySeIgnorePreDelay(
        EffectSoundPlayerComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *klass; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1DB6A & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1BCAFF8(
                                             &Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__,
                                             soundInfo);
    byte_4B1DB6A = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, klass, 1, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, klass, v9);
  OverwriteAssetSoundName__PlaySe_40595740(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0LL, 1, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DB6F & 1) == 0 )
  {
    sub_1BCAFF8(&BgmManager_TypeInfo, method);
    byte_4B1DB6F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4B1DB6D & 1) == 0 )
  {
    sub_1BCAFF8(&SoundManager_TypeInfo, method);
    byte_4B1DB6D = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
}
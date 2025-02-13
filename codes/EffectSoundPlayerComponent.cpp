void __fastcall EffectSoundPlayerComponent___ctor(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ChangeVolumeBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x20
  int m_CancellationTokenSource; // w22
  System_String_o *BgmName; // x0
  __int64 v7; // x1
  System_String_o *v8; // x19
  System_String_o *klass; // x21
  float v10; // s8
  float v11; // s9

  if ( (byte_4BDD9A2 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDD9A2 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C22094(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  if ( !LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_19;
  v8 = BgmName;
  klass = (System_String_o *)v4[1].klass;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v10 = System_Convert__ToSingle_63777056(klass, 0LL);
  if ( m_CancellationTokenSource < 2 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm_39951768(v8, v10, 0LL);
    return;
  }
  if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
LABEL_19:
    sub_1C2209C(BgmName, v7);
  v11 = System_Convert__ToSingle_63777056((System_String_o *)v4[1].monitor, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_39951884(v8, v10, v11, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD9A0 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    byte_4BDD9A0 = 1;
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
  Il2CppObject *Master_object; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  System_String_o *monitor; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDD99E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDD99E = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_object )
    goto LABEL_14;
  IsNullOrEmpty = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_325BE14 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_14:
    sub_1C22094(IsNullOrEmpty, v6);
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
  unsigned int v9; // w8

  if ( (byte_4BDD99A & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C21E38(&Method_EffectSoundPlayerComponent_PlaySe__);
    byte_4BDD99A = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C22094(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySe__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_EffectSoundPlayerComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, klass, 0, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C2209C(v7, klass);
  OverwriteAssetSoundName__PlaySe_39859480(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0LL, 0, 0LL);
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
  unsigned int v9; // w8

  if ( (byte_4BDD99B & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C21E38(&Method_EffectSoundPlayerComponent_PlaySeContinue__);
    byte_4BDD99B = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C22094(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_EffectSoundPlayerComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, klass, 0, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C2209C(v7, klass);
  OverwriteAssetSoundName__PlaySeContinue_39858972(v7, klass, (System_String_o *)v4[1].monitor, 0, 0LL);
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
  unsigned int v9; // w8

  if ( (byte_4BDD99D & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C21E38(&Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
    byte_4BDD99D = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C22094(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, klass, 1, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C2209C(v7, klass);
  OverwriteAssetSoundName__PlaySeContinue_39858972(v7, klass, (System_String_o *)v4[1].monitor, 1, 0LL);
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
  unsigned int v9; // w8

  if ( (byte_4BDD99C & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C21E38(&Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
    byte_4BDD99C = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C22094(this, soundInfo);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, klass, 1, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C2209C(v7, klass);
  OverwriteAssetSoundName__PlaySe_39859480(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0LL, 1, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD9A1 & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    byte_4BDD9A1 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD99F & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDD99F = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
}
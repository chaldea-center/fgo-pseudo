void EffectSoundPlayerComponent___ctor(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void EffectSoundPlayerComponent__ChangeVolumeBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x20
  int m_CancellationTokenSource; // w22
  System_String_o *BgmName; // x0
  System_String_o *v7; // x19
  System_String_o *klass; // x21
  float v9; // s8
  float v10; // s9

  if ( (byte_4C44680 & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    this = (EffectSoundPlayerComponent_o *)sub_1C37058(&SoundManager_TypeInfo);
    byte_4C44680 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_1C372B4(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0);
  if ( !LODWORD(v4->fields.m_CancellationTokenSource) )
    goto LABEL_19;
  v7 = BgmName;
  klass = (System_String_o *)v4[1].klass;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToSingle_64654140(klass, 0);
  if ( m_CancellationTokenSource < 2 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm_41512696(v7, v9, 0);
    return;
  }
  if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
LABEL_19:
    sub_1C372BC(BgmName);
  v10 = System_Convert__ToSingle_64654140((System_String_o *)v4[1].monitor, 0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_41512812(v7, v9, v10, 0);
}


void EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C4467E & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C4467E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(1, 0);
}


void EffectSoundPlayerComponent__PlayBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *bgmId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  __int64 IsNullOrEmpty; // x0
  System_String_o *monitor; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C4467C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C4467C = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0);
  if ( !Master_object )
    goto LABEL_14;
  IsNullOrEmpty = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_33A10EC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_14:
    sub_1C372B4(IsNullOrEmpty);
  monitor = (System_String_o *)entity[1].monitor;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(monitor, 0);
}


void EffectSoundPlayerComponent__PlaySe(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *klass; // x1

  if ( (byte_4C44678 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C37058(&Method_EffectSoundPlayerComponent_PlaySe__);
    byte_4C44678 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_1C372B4(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySe__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_EffectSoundPlayerComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, klass, 0, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C372BC(v7);
  OverwriteAssetSoundName__PlaySe_41420232(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0, 0, 0);
}


void EffectSoundPlayerComponent__PlaySeContinue(
        EffectSoundPlayerComponent_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *klass; // x1

  if ( (byte_4C44679 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C37058(&Method_EffectSoundPlayerComponent_PlaySeContinue__);
    byte_4C44679 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0)) == 0 )
    sub_1C372B4(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_EffectSoundPlayerComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, klass, 0, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C372BC(v7);
  OverwriteAssetSoundName__PlaySeContinue_41419380(v7, klass, (System_String_o *)v4[1].monitor, 0, 0);
}


void EffectSoundPlayerComponent__PlaySeContinueIgnorePreDelay(
        EffectSoundPlayerComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *klass; // x1

  if ( (byte_4C4467B & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C37058(&Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
    byte_4C4467B = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_1C372B4(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_EffectSoundPlayerComponent_PlaySeContinueIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, klass, 1, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C372BC(v7);
  OverwriteAssetSoundName__PlaySeContinue_41419380(v7, klass, (System_String_o *)v4[1].monitor, 1, 0);
}


void EffectSoundPlayerComponent__PlaySeIgnorePreDelay(
        EffectSoundPlayerComponent_o *this,
        System_String_o *soundInfo,
        const MethodInfo *method)
{
  EffectSoundPlayerComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *klass; // x1

  if ( (byte_4C4467A & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1C37058(&Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
    byte_4C4467A = 1;
  }
  if ( !soundInfo || (this = (EffectSoundPlayerComponent_o *)System_String__Split(soundInfo, 0x3Au, 0, 0)) == 0 )
    sub_1C372B4(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C37070(Method_EffectSoundPlayerComponent_PlaySeIgnorePreDelay__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, klass, 1, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C372BC(v7);
  OverwriteAssetSoundName__PlaySe_41420232(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0, 1, 0);
}


void EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C4467F & 1) == 0 )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C4467F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0);
}


void EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C4467D & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C4467D = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0);
}
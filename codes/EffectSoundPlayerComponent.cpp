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
  System_String_o *v10; // x19
  System_String_o *klass; // x21
  float v12; // s8
  float v13; // s9

  if ( (byte_4A09FEE & 1) == 0 )
  {
    sub_1B686D4(&BgmManager_TypeInfo, name);
    sub_1B686D4(&System_Convert_TypeInfo, v4);
    this = (EffectSoundPlayerComponent_o *)sub_1B686D4(&SoundManager_TypeInfo, v5);
    byte_4A09FEE = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B68930(this, name);
  v6 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmName = BgmManager__GetBgmName(0LL);
  if ( !LODWORD(v6->fields.m_CancellationTokenSource) )
    goto LABEL_19;
  v10 = BgmName;
  klass = (System_String_o *)v6[1].klass;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v12 = System_Convert__ToSingle_62080720(klass, 0LL);
  if ( m_CancellationTokenSource < 2 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm_38443188(v10, v12, 0LL);
    return;
  }
  if ( LODWORD(v6->fields.m_CancellationTokenSource) <= 1 )
LABEL_19:
    sub_1B68938(BgmName, v9);
  v13 = System_Convert__ToSingle_62080720((System_String_o *)v6[1].monitor, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm_38443304(v10, v12, v13, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A09FEC & 1) == 0 )
  {
    sub_1B686D4(&BgmManager_TypeInfo, method);
    byte_4A09FEC = 1;
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

  if ( (byte_4A09FEA & 1) == 0 )
  {
    sub_1B686D4(&Method_DataManager_GetMaster_BgmMaster___, bgmId);
    sub_1B686D4(&DataManager_TypeInfo, v4);
    sub_1B686D4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5);
    sub_1B686D4(&SoundManager_TypeInfo, v6);
    byte_4A09FEA = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E49CFC *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_object )
    goto LABEL_14;
  IsNullOrEmpty = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_30E4514 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_14:
    sub_1B68930(IsNullOrEmpty, v9);
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

  if ( (byte_4A09FE8 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1B686D4(&Method_EffectSoundPlayerComponent_PlaySe__, name);
    byte_4A09FE8 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B68930(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySe__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B686EC(Method_EffectSoundPlayerComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, klass, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1B68938(v7, klass);
  OverwriteAssetSoundName__PlaySe_38278344(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0LL, 0LL);
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

  if ( (byte_4A09FE9 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1B686D4(&Method_EffectSoundPlayerComponent_PlaySeContinue__, name);
    byte_4A09FE9 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1B68930(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B686EC(Method_EffectSoundPlayerComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B686B8(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  klass = (System_String_o *)v4[1].klass;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySeContinue(v7, klass, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1B68938(v7, klass);
  OverwriteAssetSoundName__PlaySeContinue_38277640(v7, klass, (System_String_o *)v4[1].monitor, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A09FED & 1) == 0 )
  {
    sub_1B686D4(&BgmManager_TypeInfo, method);
    byte_4A09FED = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A09FEB & 1) == 0 )
  {
    sub_1B686D4(&SoundManager_TypeInfo, method);
    byte_4A09FEB = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
}
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  EffectSoundPlayerComponent_o *v8; // x20
  int m_CancellationTokenSource; // w22
  System_String_o *BgmName; // x0
  __int64 v11; // x1
  System_String_o *v12; // x19
  System_String_o *klass; // x21
  float v14; // s8
  __int64 v15; // x1
  float v16; // s9

  if ( (byte_4B175D6 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, name, method);
    sub_1BCA7E0(&System_Convert_TypeInfo, v4, v5);
    this = (EffectSoundPlayerComponent_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v6, v7);
    byte_4B175D6 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCAA3C(this, name);
  v8 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, name);
  BgmName = BgmManager__GetBgmName(0LL);
  if ( !LODWORD(v8->fields.m_CancellationTokenSource) )
    goto LABEL_19;
  v12 = BgmName;
  klass = (System_String_o *)v8[1].klass;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v11);
  v14 = System_Convert__ToSingle_63062800(klass, 0LL);
  if ( m_CancellationTokenSource < 2 )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v11);
    SoundManager__playBgm_39413800(v12, v14, 0LL);
    return;
  }
  if ( LODWORD(v8->fields.m_CancellationTokenSource) <= 1 )
LABEL_19:
    sub_1BCAA44(BgmName, v11);
  v16 = System_Convert__ToSingle_63062800((System_String_o *)v8[1].monitor, 0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v15);
  SoundManager__playBgm_39413916(v12, v14, v16, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PauseBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B175D4 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B175D4 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PauseBgm(1, 0LL);
}


void __fastcall EffectSoundPlayerComponent__PlayBgm(
        EffectSoundPlayerComponent_o *this,
        System_String_o *bgmId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x20
  __int64 IsNullOrEmpty; // x0
  __int64 v12; // x1
  System_String_o *monitor; // x19
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B175D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_BgmMaster___, bgmId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    byte_4B175D2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, bgmId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_BgmMaster___);
  IsNullOrEmpty = System_Int32__Parse(bgmId, 0LL);
  if ( !Master_object )
    goto LABEL_14;
  IsNullOrEmpty = DataMasterBase_object__object__int___TryGetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    &entity,
                    IsNullOrEmpty,
                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( (IsNullOrEmpty & 1) == 0 )
    return;
  if ( !entity )
    goto LABEL_14;
  IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)entity[1].monitor, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
    return;
  if ( !entity )
LABEL_14:
    sub_1BCAA3C(IsNullOrEmpty, v12);
  monitor = (System_String_o *)entity[1].monitor;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v12);
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

  if ( (byte_4B175D0 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1BCA7E0(&Method_EffectSoundPlayerComponent_PlaySe__, name, method);
    byte_4B175D0 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCAA3C(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySe__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_EffectSoundPlayerComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
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
    sub_1BCAA44(v7, klass);
  OverwriteAssetSoundName__PlaySe_39322196(v7, klass, (System_String_o *)v4[1].monitor, 1.0, 0LL, 0LL);
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

  if ( (byte_4B175D1 & 1) == 0 )
  {
    this = (EffectSoundPlayerComponent_o *)sub_1BCA7E0(
                                             &Method_EffectSoundPlayerComponent_PlaySeContinue__,
                                             name,
                                             method);
    byte_4B175D1 = 1;
  }
  if ( !name || (this = (EffectSoundPlayerComponent_o *)System_String__Split(name, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCAA3C(this, name);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_EffectSoundPlayerComponent_PlaySeContinue__;
  if ( (*((_BYTE *)Method_EffectSoundPlayerComponent_PlaySeContinue__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_EffectSoundPlayerComponent_PlaySeContinue__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
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
    sub_1BCAA44(v7, klass);
  OverwriteAssetSoundName__PlaySeContinue_39321728(v7, klass, (System_String_o *)v4[1].monitor, 0LL);
}


void __fastcall EffectSoundPlayerComponent__ResumeBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B175D5 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B175D5 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PauseBgm(0, 0LL);
}


void __fastcall EffectSoundPlayerComponent__StopBgm(EffectSoundPlayerComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B175D3 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B175D3 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  SoundManager__stopBgm(0LL);
}
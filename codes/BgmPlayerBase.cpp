void __fastcall BgmPlayerBase___ctor(BgmPlayerBase_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BgmPlayerBase__ChangeVolume(
        BgmPlayerBase_o *this,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  MethodInfo *v4; // x2
  BgmPlayerBase_o *v7; // x19
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **bgmPlayer; // x1
  System_Int32_array **bgmFadePlayer; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CriAtomSource_o *v21; // x0
  __int64 v22; // x1
  struct CriAtomSource_o *v23; // x8
  BgmManager_c *v24; // x0
  float fadeBaseVolume; // s1
  float masterVolume; // s0
  bool result; // w0
  CriAtomSource_o *v28; // x20
  BgmManager_c *v29; // x0

  v7 = this;
  if ( (byte_40F906F & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F906F = 1;
  }
  if ( v7->fields.fadeinTime > 0.0 )
  {
    this = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmFadePlayer, v4);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      bgmPlayer = (System_Int32_array **)v7->fields.bgmPlayer;
      bgmFadePlayer = (System_Int32_array **)v7->fields.bgmFadePlayer;
      v7->fields.bgmFadePlayer = (struct CriAtomSource_o *)bgmPlayer;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v7->fields.bgmFadePlayer,
        bgmPlayer,
        (System_String_array **)v4,
        v8,
        v9,
        v10,
        v11,
        v12);
      v7->fields.bgmPlayer = (struct CriAtomSource_o *)bgmFadePlayer;
      sub_B16F98((BattleServantConfConponent_o *)&v7->fields.bgmPlayer, bgmFadePlayer, v15, v16, v17, v18, v19, v20);
      v21 = v7->fields.bgmFadePlayer;
      if ( !v21 )
        goto LABEL_31;
      CriAtomSource__Stop(v21, 0LL);
    }
  }
  if ( !BgmPlayerBase__CheckPlaying(this, v7->fields.bgmPlayer, v4) )
    return 0;
  if ( fadeTime > 0.0 )
  {
    v23 = v7->fields.bgmPlayer;
    if ( v23 )
    {
      v7->fields.fadeBaseVolume = v23->fields._volume;
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !byte_40F6390 )
      {
        sub_B16FFC(&BgmManager_TypeInfo, v22);
        byte_40F6390 = 1;
      }
      v24 = BgmManager_TypeInfo;
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v24 = BgmManager_TypeInfo;
      }
      fadeBaseVolume = v7->fields.fadeBaseVolume;
      masterVolume = v24->static_fields->masterVolume;
      v7->fields.fadeinTime = fadeTime;
      v7->fields.playTime = -1.0;
      v7->fields.fadeChangeVolume = (float)(masterVolume * volume) - fadeBaseVolume;
      goto LABEL_30;
    }
LABEL_31:
    sub_B170D4();
  }
  v7->fields.fadeinTime = 0.0;
  v28 = v7->fields.bgmPlayer;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_40F6390 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, v22);
    byte_40F6390 = 1;
  }
  v29 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v29 = BgmManager_TypeInfo;
  }
  if ( !v28 )
    goto LABEL_31;
  CriAtomSource__set_volume(v28, v29->static_fields->masterVolume * volume, 0LL);
LABEL_30:
  result = 1;
  v7->fields.fadeoutTime = 0.0;
  v7->fields.playVolume = volume;
  return result;
}


bool __fastcall BgmPlayerBase__CheckPlaying(BgmPlayerBase_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  int32_t status; // w0

  if ( !player )
    sub_B170D4();
  status = CriAtomSource__get_status(player, 0LL);
  if ( status != 1 )
    LOBYTE(status) = CriAtomSource__get_status(player, 0LL) == 2;
  return status;
}


bool __fastcall BgmPlayerBase__FadeoutBgm(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BgmManager_c *v11; // x0
  bool result; // w0

  if ( (byte_40F9074 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F9074 = 1;
  }
  if ( !this->fields.bgmName )
    return 0;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_40F7685 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F7685 = 1;
  }
  v11 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v11 = BgmManager_TypeInfo;
  }
  if ( !v11->static_fields->isMute )
    BgmPlayerBase__FadeoutLocal(this, fadeoutTime, method);
  this->fields.bgmName = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  result = 1;
  this->fields.bgmVolume = 0.0;
  return result;
}


void __fastcall BgmPlayerBase__FadeoutLocal(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  BattleServantConfConponent_o *p_bgmPlayer; // x20
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  CriAtomSource_o **p_bgmFadePlayer; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **klass; // x1
  CriAtomSource_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  float volume; // w8

  p_bgmPlayer = (BattleServantConfConponent_o *)&this->fields.bgmPlayer;
  v7 = BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v3);
  if ( v7 && this->fields.fadeoutTime <= 0.0 )
  {
    if ( this->fields.fadeinTime > 0.0 )
    {
      p_bgmFadePlayer = &this->fields.bgmFadePlayer;
      if ( BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v7, this->fields.bgmFadePlayer, v8) )
      {
        klass = (System_Int32_array **)p_bgmPlayer->klass;
        v17 = *p_bgmFadePlayer;
        *p_bgmFadePlayer = (CriAtomSource_o *)p_bgmPlayer->klass;
        sub_B16F98((BattleServantConfConponent_o *)&this->fields.bgmFadePlayer, klass, v10, v11, v12, v13, v14, v15);
        p_bgmPlayer->klass = (BattleServantConfConponent_c *)v17;
        sub_B16F98(p_bgmPlayer, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
        if ( !*p_bgmFadePlayer )
          goto LABEL_10;
        CriAtomSource__Stop(*p_bgmFadePlayer, 0LL);
      }
    }
    bgmPlayer = this->fields.bgmPlayer;
    this->fields.fadeoutTime = fadeoutTime;
    this->fields.fadeinTime = 0.0;
    if ( bgmPlayer )
    {
      volume = bgmPlayer->fields._volume;
      this->fields.playTime = -1.0;
      *(_QWORD *)&this->fields.fadeBaseVolume = LODWORD(volume);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
}


System_String_array *__fastcall BgmPlayerBase__GetUsingCueNames(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  System_String_array *v13; // x19
  System_Int32_array **cueName; // x21
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct CriAtomSource_o *bgmFadePlayer; // x8
  System_Int32_array **v21; // x20

  if ( (byte_40F9071 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    byte_40F9071 = 1;
  }
  v4 = sub_B17014(string___TypeInfo, 2LL, v2);
  bgmPlayer = this->fields.bgmPlayer;
  if ( !bgmPlayer )
    goto LABEL_13;
  v13 = (System_String_array *)v4;
  if ( !v4 )
    goto LABEL_13;
  cueName = (System_Int32_array **)bgmPlayer->fields._cueName;
  if ( cueName )
  {
    v4 = sub_B170BC(cueName, *(_QWORD *)(*(_QWORD *)v4 + 64LL));
    if ( !v4 )
    {
LABEL_15:
      sub_B170F4(v4);
      sub_B170A0();
    }
  }
  if ( !v13->max_length )
    goto LABEL_14;
  v13->m_Items[0] = (System_String_o *)cueName;
  sub_B16F98((BattleServantConfConponent_o *)v13->m_Items, cueName, v6, v7, v8, v9, v10, v11);
  bgmFadePlayer = this->fields.bgmFadePlayer;
  if ( !bgmFadePlayer )
LABEL_13:
    sub_B170D4();
  v21 = (System_Int32_array **)bgmFadePlayer->fields._cueName;
  if ( v21 )
  {
    v4 = sub_B170BC(v21, v13->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( v13->max_length <= 1 )
  {
LABEL_14:
    sub_B17100(v4, v5, v6);
    sub_B170A0();
  }
  v13->m_Items[1] = (System_String_o *)v21;
  sub_B16F98((BattleServantConfConponent_o *)&v13->m_Items[1], v21, v6, v15, v16, v17, v18, v19);
  return v13;
}


void __fastcall BgmPlayerBase__Initialize(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  BgmManager_o *Instance; // x0
  const MethodInfo *v7; // x1
  System_Int32_array **CriAtomSource; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct CriAtomSource_o *v15; // x20
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  BgmPlayerBase_Fields *p_cueSheet; // x0
  CriAtomSource_o **p_bgmFadePlayer; // x20
  UnityEngine_Object_o *bgmFadePlayer; // x21
  BgmManager_o *v27; // x0
  const MethodInfo *v28; // x1
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct CriAtomSource_o *v36; // x20
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_40F906D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_40F906D = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    CriAtomSource = (System_Int32_array **)BgmManager__GenerateCriAtomSource(Instance, v7);
    *p_bgmPlayer = (CriAtomSource_o *)CriAtomSource;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.bgmPlayer, CriAtomSource, v9, v10, v11, v12, v13, v14);
    if ( !*p_bgmPlayer )
      goto LABEL_23;
    (*p_bgmPlayer)->fields._androidUseLowLatencyVoicePool = 0;
    v15 = this->fields.bgmPlayer;
    v16 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
            this,
            this->klass->vtable._5_Initialize.methodPtr);
    if ( !v15 )
      goto LABEL_23;
    v15->fields._cueSheet = (struct System_String_o *)v16;
    v23 = (System_Int32_array **)v16;
    p_cueSheet = (BgmPlayerBase_Fields *)&v15->fields._cueSheet;
  }
  else
  {
    if ( !*p_bgmPlayer )
      goto LABEL_23;
    CriAtomSource__Stop(*p_bgmPlayer, 0LL);
    this->fields.bgmName = 0LL;
    p_cueSheet = &this->fields;
    v23 = 0LL;
  }
  sub_B16F98((BattleServantConfConponent_o *)p_cueSheet, v23, v17, v18, v19, v20, v21, v22);
  p_bgmFadePlayer = &this->fields.bgmFadePlayer;
  bgmFadePlayer = (UnityEngine_Object_o *)this->fields.bgmFadePlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(bgmFadePlayer, 0LL, 0LL) )
  {
    v27 = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( v27 )
    {
      v29 = (System_Int32_array **)BgmManager__GenerateCriAtomSource(v27, v28);
      *p_bgmFadePlayer = (CriAtomSource_o *)v29;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.bgmFadePlayer, v29, v30, v31, v32, v33, v34, v35);
      if ( *p_bgmFadePlayer )
      {
        (*p_bgmFadePlayer)->fields._androidUseLowLatencyVoicePool = 0;
        v36 = this->fields.bgmFadePlayer;
        v37 = (System_Int32_array **)((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
                                       this,
                                       this->klass->vtable._5_Initialize.methodPtr);
        if ( v36 )
        {
          v36->fields._cueSheet = (struct System_String_o *)v37;
          sub_B16F98((BattleServantConfConponent_o *)&v36->fields._cueSheet, v37, v38, v39, v40, v41, v42, v43);
          return;
        }
      }
    }
LABEL_23:
    sub_B170D4();
  }
  if ( !*p_bgmFadePlayer )
    goto LABEL_23;
  CriAtomSource__Stop(*p_bgmFadePlayer, 0LL);
}


bool __fastcall BgmPlayerBase__IsBgmPlaying(BgmPlayerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v2);
}


bool __fastcall BgmPlayerBase__IsCrossFadePlaying(BgmPlayerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return this->fields.fadeinTime > 0.0 && BgmPlayerBase__CheckPlaying(this, this->fields.bgmFadePlayer, v2);
}


bool __fastcall BgmPlayerBase__IsPlaying(BgmPlayerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL8 v4; // x0
  const MethodInfo *v5; // x2

  v4 = BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v2);
  if ( v4 )
    return 1;
  if ( this->fields.fadeinTime <= 0.0 )
    return 0;
  return BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v4, this->fields.bgmFadePlayer, v5);
}


void __fastcall BgmPlayerBase__LateUpdate(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  float deltaTime; // s8
  _BOOL8 IsPaused; // x0
  const MethodInfo *v8; // x2
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  float fadeoutTime; // s0
  float playTime; // s1
  float v14; // s2
  bool v15; // nf
  float v16; // s1
  BgmManager_c *v17; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  CriAtomSource_o *v19; // x0
  float v20; // s0
  BattleServantConfConponent_o *p_bgmFadePlayer; // x23
  __int64 v22; // x1
  CriAtomSource_o *v23; // x21
  struct CriAtomSource_o **v24; // x8
  float v25; // s0
  float fadeinTime; // s1
  CriAtomSource_o *v27; // x22
  float v28; // s2
  float v29; // s0
  BgmManager_c *v30; // x0
  BgmManager_c *v31; // x0
  float v32; // s0
  BgmManager_c *v33; // x0
  CriAtomSource_o *v34; // x1
  System_Int32_array **klass; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_40F9075 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F9075 = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    deltaTime = RealTime__get_deltaTime(0LL);
    if ( deltaTime > 0.5 )
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    if ( !*p_bgmPlayer )
      goto LABEL_93;
    IsPaused = CriAtomSource__IsPaused(*p_bgmPlayer, 0LL);
    if ( !IsPaused )
    {
      v9 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)IsPaused, *p_bgmPlayer, v8);
      if ( v9
        || this->fields.fadeinTime > 0.0
        && (v9 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v9, this->fields.bgmFadePlayer, v11)) )
      {
        fadeoutTime = this->fields.fadeoutTime;
        if ( fadeoutTime > 0.0 )
        {
          playTime = this->fields.playTime;
          v14 = deltaTime + playTime;
          v15 = playTime < 0.0;
          v16 = 0.0;
          if ( !v15 )
            v16 = v14;
          this->fields.playTime = v16;
          if ( v16 >= fadeoutTime )
          {
            BgmPlayerBase__StopLocal(this, v10);
            return;
          }
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          if ( !byte_40F7685 )
          {
            sub_B16FFC(&BgmManager_TypeInfo, v10);
            byte_40F7685 = 1;
          }
          v17 = BgmManager_TypeInfo;
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            v17 = BgmManager_TypeInfo;
          }
          static_fields = v17->static_fields;
          v19 = *p_bgmPlayer;
          if ( static_fields->isMute )
          {
            if ( v19 )
            {
              v20 = 0.0;
LABEL_92:
              CriAtomSource__set_volume(v19, v20, 0LL);
              return;
            }
          }
          else if ( v19 )
          {
            v20 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
            goto LABEL_92;
          }
LABEL_93:
          sub_B170D4();
        }
        if ( this->fields.fadeinTime > 0.0 )
        {
          p_bgmFadePlayer = (BattleServantConfConponent_o *)&this->fields.bgmFadePlayer;
          if ( BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v9, this->fields.bgmFadePlayer, v11) )
          {
            v23 = *p_bgmPlayer;
            v24 = &this->fields.bgmFadePlayer;
          }
          else
          {
            v23 = 0LL;
            v24 = &this->fields.bgmPlayer;
          }
          v25 = this->fields.playTime;
          fadeinTime = this->fields.fadeinTime;
          v27 = *v24;
          v28 = deltaTime + v25;
          v15 = v25 < 0.0;
          v29 = 0.0;
          if ( !v15 )
            v29 = v28;
          this->fields.playTime = v29;
          if ( v29 >= fadeinTime )
          {
            this->fields.fadeinTime = 0.0;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            }
            if ( !byte_40F7685 )
            {
              sub_B16FFC(&BgmManager_TypeInfo, v22);
              byte_40F7685 = 1;
            }
            v31 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v31 = BgmManager_TypeInfo;
            }
            v32 = 0.0;
            if ( !v31->static_fields->isMute )
            {
              if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v31);
              if ( !byte_40F6390 )
              {
                sub_B16FFC(&BgmManager_TypeInfo, v22);
                byte_40F6390 = 1;
              }
              v33 = BgmManager_TypeInfo;
              if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BgmManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                v33 = BgmManager_TypeInfo;
              }
              v32 = v33->static_fields->masterVolume * this->fields.playVolume;
            }
            if ( !v27 )
              goto LABEL_93;
            CriAtomSource__set_volume(v27, v32, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
            {
              if ( v23 )
              {
                CriAtomSource__Stop(v23, 0LL);
                v34 = *p_bgmPlayer;
                klass = (System_Int32_array **)p_bgmFadePlayer->klass;
                p_bgmFadePlayer->klass = (BattleServantConfConponent_c *)*p_bgmPlayer;
                sub_B16F98(p_bgmFadePlayer, (System_Int32_array **)v34, v36, v37, v38, v39, v40, v41);
                *p_bgmPlayer = (CriAtomSource_o *)klass;
                sub_B16F98((BattleServantConfConponent_o *)p_bgmPlayer, klass, v42, v43, v44, v45, v46, v47);
                return;
              }
              goto LABEL_93;
            }
          }
          else
          {
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            }
            if ( !byte_40F7685 )
            {
              sub_B16FFC(&BgmManager_TypeInfo, v22);
              byte_40F7685 = 1;
            }
            v30 = BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v30 = BgmManager_TypeInfo;
            }
            if ( !v30->static_fields->isMute )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
              {
                if ( v27 )
                {
                  v19 = v27;
                  v20 = this->fields.fadeBaseVolume
                      + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
                  goto LABEL_92;
                }
                goto LABEL_93;
              }
              if ( !v27 )
                goto LABEL_93;
              CriAtomSource__set_volume(
                v27,
                (float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime,
                0LL);
              if ( !v23 )
                goto LABEL_93;
              v20 = this->fields.fadeBaseVolume
                  * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeinTime));
LABEL_89:
              v19 = v23;
              goto LABEL_92;
            }
            if ( !v27 )
              goto LABEL_93;
            CriAtomSource__set_volume(v27, 0.0, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
            {
              if ( !v23 )
                goto LABEL_93;
              v20 = 0.0;
              goto LABEL_89;
            }
          }
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmPlayerBase__PauseBgm(BgmPlayerBase_o *this, bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v6; // x2
  struct CriAtomSource_o *v7; // x0
  CriAtomSource_o *v8; // x0

  if ( (byte_40F906C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isPause);
    byte_40F906C = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    v7 = this->fields.bgmPlayer;
    if ( isPause )
    {
      if ( !BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v7, this->fields.bgmPlayer, v6) )
        return;
    }
    else
    {
      if ( !v7 )
        goto LABEL_15;
      if ( !CriAtomSource__IsPaused(v7, 0LL) )
        return;
    }
    v8 = this->fields.bgmPlayer;
    if ( v8 )
    {
      CriAtomSource__Pause(v8, isPause, 0LL);
      return;
    }
LABEL_15:
    sub_B170D4();
  }
}


void __fastcall BgmPlayerBase__PlayBgm(
        BgmPlayerBase_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        int64_t startTime,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  BgmManager_c *v20; // x0

  if ( (byte_40F9073 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, name);
    byte_40F9073 = 1;
  }
  if ( !name )
    sub_B170D4();
  if ( System_String__Equals_43731072(name, this->fields.bgmName, 0LL) )
  {
    if ( this->fields.fadeoutTime > 0.0 || this->fields.bgmVolume != volume )
    {
      this->fields.bgmVolume = volume;
      this->fields.bgmFadeTime = fadeTime;
      BgmPlayerBase__ChangeVolume(this, volume, fadeTime, v11);
    }
  }
  else
  {
    this->fields.bgmName = name;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v12, v13, v14, v15, v16, v17);
    this->fields.startTime = startTime;
    this->fields.bgmVolume = volume;
    this->fields.bgmFadeTime = fadeTime;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_40F7685 )
    {
      sub_B16FFC(&BgmManager_TypeInfo, v18);
      byte_40F7685 = 1;
    }
    v20 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v20 = BgmManager_TypeInfo;
    }
    if ( !v20->static_fields->isMute && BgmPlayerBase__PlayLocal(this, name, volume, fadeTime, 1, v19) )
      this->fields.bgmFadeTime = 0.0;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmPlayerBase__PlayLocal(
        BgmPlayerBase_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        bool loop,
        const MethodInfo *method)
{
  __int64 v6; // x4
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BgmPlayerBase_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **bgmFadePlayer; // x1
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  struct CriAtomSource_o *bgmPlayer; // x8
  System_Int32_array **v41; // x1
  CriAtomSource_o *v42; // x0
  System_Action_o *v43; // x19
  BgmManager_o *Instance; // x0
  const MethodInfo *v45; // x3

  if ( (byte_40F9070 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, name);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v12);
    sub_B16FFC(&Method_BgmPlayerBase___c__DisplayClass30_0__PlayLocal_b__0__, v13);
    sub_B16FFC(&BgmPlayerBase___c__DisplayClass30_0_TypeInfo, v14);
    byte_40F9070 = 1;
  }
  v15 = sub_B170CC(BgmPlayerBase___c__DisplayClass30_0_TypeInfo, name, loop, method, v6);
  BgmPlayerBase___c__DisplayClass30_0___ctor((BgmPlayerBase___c__DisplayClass30_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = name;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)name, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v15 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v15 + 24), (System_Int32_array **)this, v22, v23, v24, v25, v26, v27);
  *(float *)(v15 + 40) = volume;
  *(float *)(v15 + 44) = fadeTime;
  *(_BYTE *)(v15 + 48) = loop;
  if ( fadeTime > 0.0 && BgmPlayerBase__CheckPlaying(v28, this->fields.bgmPlayer, (const MethodInfo *)v29) )
  {
    bgmFadePlayer = (System_Int32_array **)this->fields.bgmFadePlayer;
    *(_QWORD *)(v15 + 32) = bgmFadePlayer;
    sub_B16F98((BattleServantConfConponent_o *)(v15 + 32), bgmFadePlayer, v29, v30, v31, v32, v33, v34);
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer )
      goto LABEL_12;
    this->fields.fadeBaseVolume = bgmPlayer->fields._volume;
  }
  else
  {
    v41 = (System_Int32_array **)this->fields.bgmPlayer;
    *(_QWORD *)(v15 + 32) = v41;
    sub_B16F98((BattleServantConfConponent_o *)(v15 + 32), v41, v29, v30, v31, v32, v33, v34);
    v42 = this->fields.bgmFadePlayer;
    if ( !v42 )
      goto LABEL_12;
    CriAtomSource__Stop(v42, 0LL);
    this->fields.fadeBaseVolume = 0.0;
  }
  v43 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(v43, (Il2CppObject *)v15, Method_BgmPlayerBase___c__DisplayClass30_0__PlayLocal_b__0__, 0LL);
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B170D4();
  return BgmManager__PreloadBgm(Instance, *(System_String_o **)(v15 + 16), v43, v45);
}


void __fastcall BgmPlayerBase__ReflectMasterVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x19
  float bgmVolume; // s8
  BgmManager_c *v5; // x0

  if ( (byte_40F906E & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F906E = 1;
  }
  if ( this->fields.bgmName && (this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_40F6390 )
    {
      sub_B16FFC(&BgmManager_TypeInfo, method);
      byte_40F6390 = 1;
    }
    v5 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v5 = BgmManager_TypeInfo;
    }
    if ( !bgmPlayer )
      sub_B170D4();
    CriAtomSource__set_volume(bgmPlayer, bgmVolume * v5->static_fields->masterVolume, 0LL);
  }
}


void __fastcall BgmPlayerBase__Reset(BgmPlayerBase_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_fields; // x19
  struct System_String_o *bgmName; // t1

  BgmPlayerBase__StopLocal(this, method);
  bgmName = this->fields.bgmName;
  p_fields = (BattleServantConfConponent_o *)&this->fields;
  if ( bgmName )
  {
    p_fields->klass = 0LL;
    sub_B16F98(p_fields, 0LL, v3, v4, v5, v6, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmPlayerBase__SetMute(BgmPlayerBase_o *this, bool isMute, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  long double v8; // q8
  struct System_String_o *bgmName; // x8
  BgmPlayerBase_Fields *p_fields; // x20
  struct System_String_o **p_preloadName; // x21
  System_Int32_array **preloadName; // x22
  System_Int32_array **v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BgmPlayerBase_c *klass; // x8
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  p_fields = &this->fields;
  bgmName = this->fields.bgmName;
  if ( isMute )
  {
    if ( bgmName )
      BgmPlayerBase__StopLocal(this, (const MethodInfo *)isMute);
  }
  else if ( bgmName )
  {
    p_preloadName = &this->fields.preloadName;
    preloadName = (System_Int32_array **)this->fields.preloadName;
    *(float *)&v8 = this->fields.bgmVolume;
    v14 = (System_Int32_array **)this->fields.bgmName;
    this->fields.preloadName = bgmName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.preloadName,
      v14,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.bgmName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_fields, 0LL, v15, v16, v17, v18, v19, v20);
    klass = this->klass;
    this->fields.bgmVolume = -1.0;
    ((void (__fastcall *)(BgmPlayerBase_o *, struct System_String_o *, _QWORD, Il2CppMethodPointer, long double, float))klass->vtable._9_PlayBgm.method)(
      this,
      *p_preloadName,
      0LL,
      klass->vtable._10_FadeoutBgm.methodPtr,
      v8,
      0.0);
    *p_preloadName = (struct System_String_o *)preloadName;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.preloadName, preloadName, v22, v23, v24, v25, v26, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmPlayerBase__StopBgm(BgmPlayerBase_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BgmPlayerBase_Fields *p_fields; // x0
  struct System_String_o *bgmName; // t1

  bgmName = this->fields.bgmName;
  p_fields = &this->fields;
  if ( !bgmName && this->fields.fadeoutTime <= 0.0 )
    return 0;
  if ( !keepPlayArgs )
  {
    this->fields.bgmName = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_fields, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    this->fields.bgmVolume = 0.0;
  }
  this->fields.bgmFadeTime = -1.0;
  this->fields.startTime = 0LL;
  BgmPlayerBase__StopLocal(this, (const MethodInfo *)keepPlayArgs);
  return 1;
}


void __fastcall BgmPlayerBase__StopLocal(BgmPlayerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CriAtomSource_o *bgmPlayer; // x0
  CriAtomSource_o *bgmFadePlayer; // x0

  if ( BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v2) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer || (CriAtomSource__Stop(bgmPlayer, 0LL), (bgmFadePlayer = this->fields.bgmFadePlayer) == 0LL) )
      sub_B170D4();
    CriAtomSource__Stop(bgmFadePlayer, 0LL);
  }
  *(_QWORD *)&this->fields.fadeinTime = 0LL;
}


void __fastcall BgmPlayerBase__UpdateVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x20
  BgmManager_c *v4; // x0

  if ( (byte_40F906B & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F906B = 1;
  }
  bgmPlayer = this->fields.bgmPlayer;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_40F6390 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, method);
    byte_40F6390 = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v4 = BgmManager_TypeInfo;
  }
  if ( !bgmPlayer )
    sub_B170D4();
  CriAtomSource__set_volume(bgmPlayer, this->fields.bgmVolume * v4->static_fields->masterVolume, 0LL);
}


System_String_o *__fastcall BgmPlayerBase__get_BgmName(BgmPlayerBase_o *this, const MethodInfo *method)
{
  return this->fields.bgmName;
}


float __fastcall BgmPlayerBase__get_BgmVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  return this->fields.bgmVolume;
}


System_String_o *__fastcall BgmPlayerBase__get_CueSheetName(BgmPlayerBase_o *this, const MethodInfo *method)
{
  if ( (byte_40F9068 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2538, method);
    byte_40F9068 = 1;
  }
  return (System_String_o *)StringLiteral_2538;
}


int32_t __fastcall BgmPlayerBase__get_PlayTime(BgmPlayerBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x20
  CriAtomSource_o *v4; // x0

  if ( (byte_40F9069 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9069 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
    return 0;
  v4 = this->fields.bgmPlayer;
  if ( !v4 )
    sub_B170D4();
  return CriAtomSource__get_time(v4, 0LL);
}


void __fastcall BgmPlayerBase__playStart(
        BgmPlayerBase_o *this,
        CriAtomSource_o *player,
        System_String_o *cueSheet,
        System_String_o *cueName,
        float volume,
        float fadeTime,
        bool loop,
        const MethodInfo *method)
{
  BgmManager_c *v15; // x0
  float masterVolume; // s0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  float v30; // s0
  BgmManager_c *v31; // x0

  if ( (byte_40F9072 & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, player);
    byte_40F9072 = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_40F6390 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, player);
    byte_40F6390 = 1;
  }
  v15 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v15 = BgmManager_TypeInfo;
  }
  masterVolume = v15->static_fields->masterVolume;
  this->fields.fadeinTime = fadeTime;
  this->fields.fadeoutTime = 0.0;
  this->fields.playVolume = volume;
  this->fields.fadeChangeVolume = masterVolume * volume;
  this->fields.playTime = -1.0;
  if ( !player )
    sub_B170D4();
  CriAtomSource__Stop(player, 0LL);
  player->fields._cueSheet = cueSheet;
  sub_B16F98(
    (BattleServantConfConponent_o *)&player->fields._cueSheet,
    (System_Int32_array **)cueSheet,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  player->fields._cueName = cueName;
  sub_B16F98(
    (BattleServantConfConponent_o *)&player->fields._cueName,
    (System_Int32_array **)cueName,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v30 = 0.0;
  if ( fadeTime <= 0.0 )
  {
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_40F6390 )
    {
      sub_B16FFC(&BgmManager_TypeInfo, v29);
      byte_40F6390 = 1;
    }
    v31 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v31 = BgmManager_TypeInfo;
    }
    v30 = v31->static_fields->masterVolume * volume;
  }
  CriAtomSource__set_volume(player, v30, 0LL);
  CriAtomSource__set_startTime(player, this->fields.startTime, 0LL);
  player->fields._loop = loop;
  CriAtomSource__Play(player, 0LL);
}


void __fastcall BgmPlayerBase__set_BgmVolume(BgmPlayerBase_o *this, float value, const MethodInfo *method)
{
  this->fields.bgmVolume = value;
  BgmPlayerBase__UpdateVolume(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmPlayerBase__set_PlayTime(BgmPlayerBase_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x21
  CriAtomSource_o *v6; // x0

  if ( (byte_40F906A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_40F906A = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
  {
    v6 = this->fields.bgmPlayer;
    if ( !v6 )
      sub_B170D4();
    CriAtomSource__set_startTime(v6, value, 0LL);
  }
}


void __fastcall BgmPlayerBase___c__DisplayClass30_0___ctor(
        BgmPlayerBase___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmPlayerBase___c__DisplayClass30_0___PlayLocal_b__0(
        BgmPlayerBase___c__DisplayClass30_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BgmManager_o *Instance; // x0
  BgmManager_o *v5; // x0
  System_String_o *CueName; // x20
  SoundManager_o *v7; // x0
  System_String_o *CueSheet; // x0

  if ( (byte_40F71DC & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v3);
    byte_40F71DC = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BgmManager__IsPreloadSucceeded(Instance, this->fields.name, 0LL) )
  {
    v5 = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( v5 )
    {
      CueName = BgmManager__ExtractCueName(v5, this->fields.name, 0LL);
      v7 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( v7 )
      {
        CueSheet = SoundManager__GetCueSheet(v7, CueName, 0LL);
        if ( this->fields.__4__this )
        {
          BgmPlayerBase__playStart(
            this->fields.__4__this,
            this->fields.player,
            CueSheet,
            CueName,
            this->fields.volume,
            this->fields.fadeTime,
            this->fields.loop,
            0LL);
          return;
        }
      }
    }
LABEL_10:
    sub_B170D4();
  }
}
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
  __int64 v5; // x3
  BgmPlayerBase_o *v8; // x19
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **bgmPlayer; // x1
  System_Int32_array **bgmFadePlayer; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  CriAtomSource_o *v23; // x0
  int v24; // w2
  __int64 v25; // x3
  struct CriAtomSource_o *v26; // x8
  BgmManager_c *v27; // x0
  float fadeBaseVolume; // s1
  float masterVolume; // s0
  bool result; // w0
  CriAtomSource_o *v31; // x20

  v8 = this;
  if ( (byte_42E7E4A & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, (_DWORD)v4, v5);
    byte_42E7E4A = 1;
  }
  if ( v8->fields.fadeinTime > 0.0 )
  {
    this = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, v8->fields.bgmFadePlayer, v4);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      bgmPlayer = (System_Int32_array **)v8->fields.bgmPlayer;
      bgmFadePlayer = (System_Int32_array **)v8->fields.bgmFadePlayer;
      v8->fields.bgmFadePlayer = (struct CriAtomSource_o *)bgmPlayer;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields.bgmFadePlayer,
        bgmPlayer,
        (System_String_array **)v4,
        v9,
        v10,
        v11,
        v12,
        v13);
      v8->fields.bgmPlayer = (struct CriAtomSource_o *)bgmFadePlayer;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields.bgmPlayer, bgmFadePlayer, v16, v17, v18, v19, v20, v21);
      v23 = v8->fields.bgmFadePlayer;
      if ( !v23 )
        goto LABEL_31;
      CriAtomSource__Stop(v23, 0LL);
    }
  }
  v23 = (CriAtomSource_o *)BgmPlayerBase__CheckPlaying(this, v8->fields.bgmPlayer, v4);
  if ( ((unsigned __int8)v23 & 1) == 0 )
    return 0;
  if ( fadeTime > 0.0 )
  {
    v26 = v8->fields.bgmPlayer;
    if ( v26 )
    {
      v8->fields.fadeBaseVolume = v26->fields._volume;
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !byte_42E4CBD )
      {
        sub_B5D5C4(&BgmManager_TypeInfo, v22, v24, v25);
        byte_42E4CBD = 1;
      }
      v27 = BgmManager_TypeInfo;
      if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v27 = BgmManager_TypeInfo;
      }
      fadeBaseVolume = v8->fields.fadeBaseVolume;
      masterVolume = v27->static_fields->masterVolume;
      v8->fields.fadeinTime = fadeTime;
      v8->fields.playTime = -1.0;
      v8->fields.fadeChangeVolume = (float)(masterVolume * volume) - fadeBaseVolume;
      goto LABEL_30;
    }
LABEL_31:
    sub_B5D69C(v23, v22);
  }
  v8->fields.fadeinTime = 0.0;
  v31 = v8->fields.bgmPlayer;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_42E4CBD )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, v22, v24, v25);
    byte_42E4CBD = 1;
  }
  v23 = (CriAtomSource_o *)BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v23 = (CriAtomSource_o *)BgmManager_TypeInfo;
  }
  if ( !v31 )
    goto LABEL_31;
  CriAtomSource__set_volume(v31, *((float *)v23[1].monitor + 8) * volume, 0LL);
LABEL_30:
  result = 1;
  v8->fields.fadeoutTime = 0.0;
  v8->fields.playVolume = volume;
  return result;
}


bool __fastcall BgmPlayerBase__CheckPlaying(BgmPlayerBase_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  int32_t status; // w0

  if ( !player )
    sub_B5D69C(this, 0LL);
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

  if ( (byte_42E7E4F & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, (_DWORD)v3, v4);
    byte_42E7E4F = 1;
  }
  if ( !this->fields.bgmName )
    return 0;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_42E61C6 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, (_DWORD)v3, v4);
    byte_42E61C6 = 1;
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, 0LL, v3, v4, v5, v6, v7, v8);
  result = 1;
  this->fields.bgmVolume = 0.0;
  return result;
}


void __fastcall BgmPlayerBase__FadeoutLocal(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  BattleServantConfConponent_o *p_bgmPlayer; // x20
  BgmPlayerBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CriAtomSource_o **p_bgmFadePlayer; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **klass; // x1
  System_Int32_array **v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  float volume; // w8

  p_bgmPlayer = (BattleServantConfConponent_o *)&this->fields.bgmPlayer;
  v7 = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v3);
  if ( ((unsigned __int8)v7 & 1) != 0 && this->fields.fadeoutTime <= 0.0 )
  {
    if ( this->fields.fadeinTime > 0.0 )
    {
      p_bgmFadePlayer = &this->fields.bgmFadePlayer;
      v7 = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(v7, this->fields.bgmFadePlayer, v9);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        klass = (System_Int32_array **)p_bgmPlayer->klass;
        v18 = (System_Int32_array **)*p_bgmFadePlayer;
        *p_bgmFadePlayer = (struct CriAtomSource_o *)p_bgmPlayer->klass;
        sub_B5D560((BattleServantConfConponent_o *)&this->fields.bgmFadePlayer, klass, v11, v12, v13, v14, v15, v16);
        p_bgmPlayer->klass = (BattleServantConfConponent_c *)v18;
        sub_B5D560(p_bgmPlayer, v18, v19, v20, v21, v22, v23, v24);
        v7 = (BgmPlayerBase_o *)*p_bgmFadePlayer;
        if ( !*p_bgmFadePlayer )
          goto LABEL_10;
        CriAtomSource__Stop((CriAtomSource_o *)v7, 0LL);
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
    sub_B5D69C(v7, v8);
  }
}


System_String_array *__fastcall BgmPlayerBase__GetUsingCueNames(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  System_String_array *v14; // x19
  System_Int32_array **cueName; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct CriAtomSource_o *bgmFadePlayer; // x8
  System_Int32_array **v23; // x20
  __int64 v25; // x0
  __int64 v26; // x0

  if ( (byte_42E7E4C & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E4C = 1;
  }
  v5 = sub_B5D5DC(string___TypeInfo, 2LL);
  bgmPlayer = this->fields.bgmPlayer;
  if ( !bgmPlayer )
    goto LABEL_13;
  v14 = (System_String_array *)v5;
  if ( !v5 )
    goto LABEL_13;
  cueName = (System_Int32_array **)bgmPlayer->fields._cueName;
  if ( cueName )
  {
    v5 = sub_B5D684(cueName, *(_QWORD *)(*(_QWORD *)v5 + 64LL));
    if ( !v5 )
    {
LABEL_15:
      v26 = sub_B5D6BC(v5);
      sub_B5D668(v26, 0LL);
    }
  }
  if ( !v14->max_length )
    goto LABEL_14;
  v14->m_Items[0] = (System_String_o *)cueName;
  sub_B5D560((BattleServantConfConponent_o *)v14->m_Items, cueName, v7, v8, v9, v10, v11, v12);
  bgmFadePlayer = this->fields.bgmFadePlayer;
  if ( !bgmFadePlayer )
LABEL_13:
    sub_B5D69C(v5, v6);
  v23 = (System_Int32_array **)bgmFadePlayer->fields._cueName;
  if ( v23 )
  {
    v5 = sub_B5D684(v23, v14->obj.klass->_1.element_class);
    if ( !v5 )
      goto LABEL_15;
  }
  if ( v14->max_length <= 1 )
  {
LABEL_14:
    v25 = sub_B5D6C8(v5);
    sub_B5D668(v25, 0LL);
  }
  v14->m_Items[1] = (System_String_o *)v23;
  sub_B5D560((BattleServantConfConponent_o *)&v14->m_Items[1], v23, v16, v17, v18, v19, v20, v21);
  return v14;
}


void __fastcall BgmPlayerBase__Initialize(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v10; // x1
  BgmManager_o *Instance; // x0
  System_Int32_array **CriAtomSource; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct CriAtomSource_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  BgmPlayerBase_Fields *p_cueSheet; // x0
  struct CriAtomSource_o **p_bgmFadePlayer; // x20
  UnityEngine_Object_o *bgmFadePlayer; // x21
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct CriAtomSource_o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_42E7E48 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v5, v6, v7);
    byte_42E7E48 = 1;
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
    Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    CriAtomSource = (System_Int32_array **)BgmManager__GenerateCriAtomSource(Instance, v10);
    *p_bgmPlayer = (struct CriAtomSource_o *)CriAtomSource;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.bgmPlayer, CriAtomSource, v13, v14, v15, v16, v17, v18);
    if ( !*p_bgmPlayer )
      goto LABEL_23;
    (*p_bgmPlayer)->fields._androidUseLowLatencyVoicePool = 0;
    v19 = this->fields.bgmPlayer;
    Instance = (BgmManager_o *)((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
                                 this,
                                 this->klass->vtable._5_Initialize.methodPtr);
    if ( !v19 )
      goto LABEL_23;
    v19->fields._cueSheet = (struct System_String_o *)Instance;
    v26 = (System_Int32_array **)Instance;
    p_cueSheet = (BgmPlayerBase_Fields *)&v19->fields._cueSheet;
  }
  else
  {
    Instance = (BgmManager_o *)*p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_23;
    CriAtomSource__Stop((CriAtomSource_o *)Instance, 0LL);
    this->fields.bgmName = 0LL;
    p_cueSheet = &this->fields;
    v26 = 0LL;
  }
  sub_B5D560((BattleServantConfConponent_o *)p_cueSheet, v26, v20, v21, v22, v23, v24, v25);
  p_bgmFadePlayer = &this->fields.bgmFadePlayer;
  bgmFadePlayer = (UnityEngine_Object_o *)this->fields.bgmFadePlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(bgmFadePlayer, 0LL, 0LL) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      v30 = (System_Int32_array **)BgmManager__GenerateCriAtomSource(Instance, v10);
      *p_bgmFadePlayer = (struct CriAtomSource_o *)v30;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.bgmFadePlayer, v30, v31, v32, v33, v34, v35, v36);
      if ( *p_bgmFadePlayer )
      {
        (*p_bgmFadePlayer)->fields._androidUseLowLatencyVoicePool = 0;
        v37 = this->fields.bgmFadePlayer;
        Instance = (BgmManager_o *)((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
                                     this,
                                     this->klass->vtable._5_Initialize.methodPtr);
        if ( v37 )
        {
          v37->fields._cueSheet = (struct System_String_o *)Instance;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v37->fields._cueSheet,
            (System_Int32_array **)Instance,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
          return;
        }
      }
    }
LABEL_23:
    sub_B5D69C(Instance, v10);
  }
  Instance = (BgmManager_o *)*p_bgmFadePlayer;
  if ( !*p_bgmFadePlayer )
    goto LABEL_23;
  CriAtomSource__Stop((CriAtomSource_o *)Instance, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v10; // x1
  float deltaTime; // s8
  CriAtomSource_o *v12; // x0
  _BOOL8 IsPaused; // x0
  const MethodInfo *v14; // x2
  _BOOL8 v15; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x3
  float fadeoutTime; // s0
  float playTime; // s1
  float v20; // s2
  bool v21; // nf
  float v22; // s1
  BgmManager_c *v23; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float v25; // s0
  BattleServantConfConponent_o *p_bgmFadePlayer; // x23
  int v27; // w2
  __int64 v28; // x3
  CriAtomSource_o *v29; // x21
  struct CriAtomSource_o **v30; // x8
  float v31; // s0
  float fadeinTime; // s1
  CriAtomSource_o *v33; // x22
  float v34; // s2
  float v35; // s0
  float v36; // s0
  CriAtomSource_o *v37; // x1
  System_Int32_array **klass; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42E7E50 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7E50 = 1;
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
    v12 = *p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_93;
    IsPaused = CriAtomSource__IsPaused(v12, 0LL);
    if ( !IsPaused )
    {
      v15 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)IsPaused, *p_bgmPlayer, v14);
      if ( v15
        || this->fields.fadeinTime > 0.0
        && (v15 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v15, this->fields.bgmFadePlayer, v16)) )
      {
        fadeoutTime = this->fields.fadeoutTime;
        if ( fadeoutTime > 0.0 )
        {
          playTime = this->fields.playTime;
          v20 = deltaTime + playTime;
          v21 = playTime < 0.0;
          v22 = 0.0;
          if ( !v21 )
            v22 = v20;
          this->fields.playTime = v22;
          if ( v22 >= fadeoutTime )
          {
            BgmPlayerBase__StopLocal(this, v10);
            return;
          }
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          }
          if ( !byte_42E61C6 )
          {
            sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)v10, (_DWORD)v16, v17);
            byte_42E61C6 = 1;
          }
          v23 = BgmManager_TypeInfo;
          if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            v23 = BgmManager_TypeInfo;
          }
          static_fields = v23->static_fields;
          v12 = *p_bgmPlayer;
          if ( static_fields->isMute )
          {
            if ( v12 )
            {
              v25 = 0.0;
LABEL_92:
              CriAtomSource__set_volume(v12, v25, 0LL);
              return;
            }
          }
          else if ( v12 )
          {
            v25 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
            goto LABEL_92;
          }
LABEL_93:
          sub_B5D69C(v12, v10);
        }
        if ( this->fields.fadeinTime > 0.0 )
        {
          p_bgmFadePlayer = (BattleServantConfConponent_o *)&this->fields.bgmFadePlayer;
          if ( BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v15, this->fields.bgmFadePlayer, v16) )
          {
            v29 = *p_bgmPlayer;
            v30 = &this->fields.bgmFadePlayer;
          }
          else
          {
            v29 = 0LL;
            v30 = &this->fields.bgmPlayer;
          }
          v31 = this->fields.playTime;
          fadeinTime = this->fields.fadeinTime;
          v33 = *v30;
          v34 = deltaTime + v31;
          v21 = v31 < 0.0;
          v35 = 0.0;
          if ( !v21 )
            v35 = v34;
          this->fields.playTime = v35;
          if ( v35 >= fadeinTime )
          {
            this->fields.fadeinTime = 0.0;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            }
            if ( !byte_42E61C6 )
            {
              sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)v10, v27, v28);
              byte_42E61C6 = 1;
            }
            v12 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v12 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            v36 = 0.0;
            if ( !*((_BYTE *)v12[1].monitor + 28) )
            {
              if ( (BYTE3(v12[1].fields._listenerOnStart) & 4) != 0 && !LODWORD(v12[1].fields._source_k__BackingField) )
                j_il2cpp_runtime_class_init_0(v12);
              if ( !byte_42E4CBD )
              {
                sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)v10, v27, v28);
                byte_42E4CBD = 1;
              }
              v12 = (CriAtomSource_o *)BgmManager_TypeInfo;
              if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BgmManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                v12 = (CriAtomSource_o *)BgmManager_TypeInfo;
              }
              v36 = *((float *)v12[1].monitor + 8) * this->fields.playVolume;
            }
            if ( !v33 )
              goto LABEL_93;
            CriAtomSource__set_volume(v33, v36, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v12 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
            if ( ((unsigned __int8)v12 & 1) != 0 )
            {
              if ( v29 )
              {
                CriAtomSource__Stop(v29, 0LL);
                v37 = *p_bgmPlayer;
                klass = (System_Int32_array **)p_bgmFadePlayer->klass;
                p_bgmFadePlayer->klass = (BattleServantConfConponent_c *)*p_bgmPlayer;
                sub_B5D560(p_bgmFadePlayer, (System_Int32_array **)v37, v39, v40, v41, v42, v43, v44);
                *p_bgmPlayer = (CriAtomSource_o *)klass;
                sub_B5D560((BattleServantConfConponent_o *)p_bgmPlayer, klass, v45, v46, v47, v48, v49, v50);
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
            if ( !byte_42E61C6 )
            {
              sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)v10, v27, v28);
              byte_42E61C6 = 1;
            }
            v12 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v12 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            if ( !*((_BYTE *)v12[1].monitor + 28) )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v12 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
              if ( ((unsigned __int8)v12 & 1) == 0 )
              {
                if ( v33 )
                {
                  v12 = v33;
                  v25 = this->fields.fadeBaseVolume
                      + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
                  goto LABEL_92;
                }
                goto LABEL_93;
              }
              if ( !v33 )
                goto LABEL_93;
              CriAtomSource__set_volume(
                v33,
                (float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime,
                0LL);
              if ( !v29 )
                goto LABEL_93;
              v25 = this->fields.fadeBaseVolume
                  * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeinTime));
LABEL_89:
              v12 = v29;
              goto LABEL_92;
            }
            if ( !v33 )
              goto LABEL_93;
            CriAtomSource__set_volume(v33, 0.0, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v12 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
            if ( ((unsigned __int8)v12 & 1) != 0 )
            {
              if ( !v29 )
                goto LABEL_93;
              v25 = 0.0;
              goto LABEL_89;
            }
          }
        }
      }
    }
  }
}


void __fastcall BgmPlayerBase__PauseBgm(BgmPlayerBase_o *this, bool isPause, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *bgmPlayer; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct CriAtomSource_o *v9; // x0

  if ( (byte_42E7E47 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isPause, (_DWORD)method, v3);
    byte_42E7E47 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    v9 = this->fields.bgmPlayer;
    if ( isPause )
    {
      if ( !BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v9, this->fields.bgmPlayer, v8) )
        return;
    }
    else
    {
      if ( !v9 )
        goto LABEL_15;
      if ( !CriAtomSource__IsPaused(v9, 0LL) )
        return;
    }
    v9 = this->fields.bgmPlayer;
    if ( v9 )
    {
      CriAtomSource__Pause(v9, isPause, 0LL);
      return;
    }
LABEL_15:
    sub_B5D69C(v9, v7);
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
  BgmPlayerBase_o *v10; // x19
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int v18; // w1
  int v19; // w2
  const MethodInfo *v20; // x3
  BgmManager_c *v21; // x0

  v10 = this;
  if ( (byte_42E7E4E & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)name, startTime, method);
    byte_42E7E4E = 1;
  }
  if ( !name )
    sub_B5D69C(this, name);
  if ( System_String__Equals_44565128(name, v10->fields.bgmName, 0LL) )
  {
    if ( v10->fields.fadeoutTime > 0.0 || v10->fields.bgmVolume != volume )
    {
      v10->fields.bgmVolume = volume;
      v10->fields.bgmFadeTime = fadeTime;
      BgmPlayerBase__ChangeVolume(v10, volume, fadeTime, v11);
    }
  }
  else
  {
    v10->fields.bgmName = name;
    sub_B5D560((BattleServantConfConponent_o *)&v10->fields, (System_Int32_array **)name, v12, v13, v14, v15, v16, v17);
    v10->fields.startTime = startTime;
    v10->fields.bgmVolume = volume;
    v10->fields.bgmFadeTime = fadeTime;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_42E61C6 )
    {
      sub_B5D5C4(&BgmManager_TypeInfo, v18, v19, v20);
      byte_42E61C6 = 1;
    }
    v21 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v21 = BgmManager_TypeInfo;
    }
    if ( !v21->static_fields->isMute && BgmPlayerBase__PlayLocal(v10, name, volume, fadeTime, 1, v20) )
      v10->fields.bgmFadeTime = 0.0;
  }
}


bool __fastcall BgmPlayerBase__PlayLocal(
        BgmPlayerBase_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        bool loop,
        const MethodInfo *method)
{
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  __int64 v20; // x21
  CriAtomSource_o *Instance; // x0
  __int64 v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BgmPlayerBase_o *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **bgmFadePlayer; // x1
  struct CriAtomSource_o *bgmPlayer; // x8
  System_Int32_array **v44; // x1
  System_Action_o *v45; // x19
  const MethodInfo *v46; // x3

  if ( (byte_42E7E4B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)name, loop, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&Method_BgmPlayerBase___c__DisplayClass30_0__PlayLocal_b__0__, v14, v15, v16);
    sub_B5D5C4(&BgmPlayerBase___c__DisplayClass30_0_TypeInfo, v17, v18, v19);
    byte_42E7E4B = 1;
  }
  v20 = sub_B5D694(BgmPlayerBase___c__DisplayClass30_0_TypeInfo);
  BgmPlayerBase___c__DisplayClass30_0___ctor((BgmPlayerBase___c__DisplayClass30_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_12;
  *(_QWORD *)(v20 + 16) = name;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 16), (System_Int32_array **)name, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v20 + 24), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  *(float *)(v20 + 40) = volume;
  *(float *)(v20 + 44) = fadeTime;
  *(_BYTE *)(v20 + 48) = loop;
  if ( fadeTime > 0.0 && BgmPlayerBase__CheckPlaying(v35, this->fields.bgmPlayer, (const MethodInfo *)v36) )
  {
    bgmFadePlayer = (System_Int32_array **)this->fields.bgmFadePlayer;
    *(_QWORD *)(v20 + 32) = bgmFadePlayer;
    sub_B5D560((BattleServantConfConponent_o *)(v20 + 32), bgmFadePlayer, v36, v37, v38, v39, v40, v41);
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer )
      goto LABEL_12;
    this->fields.fadeBaseVolume = bgmPlayer->fields._volume;
  }
  else
  {
    v44 = (System_Int32_array **)this->fields.bgmPlayer;
    *(_QWORD *)(v20 + 32) = v44;
    sub_B5D560((BattleServantConfConponent_o *)(v20 + 32), v44, v36, v37, v38, v39, v40, v41);
    Instance = this->fields.bgmFadePlayer;
    if ( !Instance )
      goto LABEL_12;
    CriAtomSource__Stop(Instance, 0LL);
    this->fields.fadeBaseVolume = 0.0;
  }
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)v20, Method_BgmPlayerBase___c__DisplayClass30_0__PlayLocal_b__0__, 0LL);
  Instance = (CriAtomSource_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_B5D69C(Instance, v22);
  return BgmManager__PreloadBgm((BgmManager_o *)Instance, *(System_String_o **)(v20 + 16), v45, v46);
}


void __fastcall BgmPlayerBase__ReflectMasterVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CriAtomSource_o *bgmPlayer; // x19
  float bgmVolume; // s8
  BgmManager_c *v7; // x0

  if ( (byte_42E7E49 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E49 = 1;
  }
  if ( this->fields.bgmName && (this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_42E4CBD )
    {
      sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
      byte_42E4CBD = 1;
    }
    v7 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v7 = BgmManager_TypeInfo;
    }
    if ( !bgmPlayer )
      sub_B5D69C(v7, method);
    CriAtomSource__set_volume(bgmPlayer, bgmVolume * v7->static_fields->masterVolume, 0LL);
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
    sub_B5D560(p_fields, 0LL, v3, v4, v5, v6, v7, v8);
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.preloadName,
      v14,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.bgmName = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_fields, 0LL, v15, v16, v17, v18, v19, v20);
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
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.preloadName, preloadName, v22, v23, v24, v25, v26, v27);
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
    sub_B5D560((BattleServantConfConponent_o *)p_fields, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v4; // x1
  CriAtomSource_o *bgmPlayer; // x0

  if ( BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v2) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer || (CriAtomSource__Stop(bgmPlayer, 0LL), (bgmPlayer = this->fields.bgmFadePlayer) == 0LL) )
      sub_B5D69C(bgmPlayer, v4);
    CriAtomSource__Stop(bgmPlayer, 0LL);
  }
  *(_QWORD *)&this->fields.fadeinTime = 0LL;
}


void __fastcall BgmPlayerBase__UpdateVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CriAtomSource_o *bgmPlayer; // x20
  BgmManager_c *v6; // x0

  if ( (byte_42E7E46 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E46 = 1;
  }
  bgmPlayer = this->fields.bgmPlayer;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_42E4CBD )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4CBD = 1;
  }
  v6 = BgmManager_TypeInfo;
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v6 = BgmManager_TypeInfo;
  }
  if ( !bgmPlayer )
    sub_B5D69C(v6, method);
  CriAtomSource__set_volume(bgmPlayer, this->fields.bgmVolume * v6->static_fields->masterVolume, 0LL);
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
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7E43 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2602/*"BGM"*/, (_DWORD)method, v2, v3);
    byte_42E7E43 = 1;
  }
  return (System_String_o *)StringLiteral_2602/*"BGM"*/;
}


int32_t __fastcall BgmPlayerBase__get_PlayTime(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *bgmPlayer; // x20
  __int64 v6; // x1
  CriAtomSource_o *v7; // x0

  if ( (byte_42E7E44 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7E44 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
    return 0;
  v7 = this->fields.bgmPlayer;
  if ( !v7 )
    sub_B5D69C(0LL, v6);
  return CriAtomSource__get_time(v7, 0LL);
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
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  float v32; // s0
  BgmManager_c *v33; // x0

  if ( (byte_42E7E4D & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)player, (_DWORD)cueSheet, cueName);
    byte_42E7E4D = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_42E4CBD )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, (_DWORD)player, (_DWORD)cueSheet, cueName);
    byte_42E4CBD = 1;
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
    sub_B5D69C(v15, player);
  CriAtomSource__Stop(player, 0LL);
  player->fields._cueSheet = cueSheet;
  sub_B5D560(
    (BattleServantConfConponent_o *)&player->fields._cueSheet,
    (System_Int32_array **)cueSheet,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  player->fields._cueName = cueName;
  sub_B5D560(
    (BattleServantConfConponent_o *)&player->fields._cueName,
    (System_Int32_array **)cueName,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v32 = 0.0;
  if ( fadeTime <= 0.0 )
  {
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_42E4CBD )
    {
      sub_B5D5C4(&BgmManager_TypeInfo, v29, v30, v31);
      byte_42E4CBD = 1;
    }
    v33 = BgmManager_TypeInfo;
    if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v33 = BgmManager_TypeInfo;
    }
    v32 = v33->static_fields->masterVolume * volume;
  }
  CriAtomSource__set_volume(player, v32, 0LL);
  CriAtomSource__set_startTime(player, this->fields.startTime, 0LL);
  player->fields._loop = loop;
  CriAtomSource__Play(player, 0LL);
}


void __fastcall BgmPlayerBase__set_BgmVolume(BgmPlayerBase_o *this, float value, const MethodInfo *method)
{
  this->fields.bgmVolume = value;
  BgmPlayerBase__UpdateVolume(this, method);
}


void __fastcall BgmPlayerBase__set_PlayTime(BgmPlayerBase_o *this, int32_t value, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *bgmPlayer; // x21
  __int64 v7; // x1
  CriAtomSource_o *v8; // x0

  if ( (byte_42E7E45 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, value, (_DWORD)method, v3);
    byte_42E7E45 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
  {
    v8 = this->fields.bgmPlayer;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    CriAtomSource__set_startTime(v8, value, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BgmManager_o *Instance; // x0
  __int64 v9; // x1
  System_String_o *CueName; // x20

  if ( (byte_42E5DFF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v5, v6, v7);
    byte_42E5DFF = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BgmManager__IsPreloadSucceeded(Instance, this->fields.name, 0LL) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      CueName = BgmManager__ExtractCueName(Instance, this->fields.name, 0LL);
      Instance = (BgmManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( Instance )
      {
        Instance = (BgmManager_o *)SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL);
        if ( this->fields.__4__this )
        {
          BgmPlayerBase__playStart(
            this->fields.__4__this,
            this->fields.player,
            (System_String_o *)Instance,
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
    sub_B5D69C(Instance, v9);
  }
}
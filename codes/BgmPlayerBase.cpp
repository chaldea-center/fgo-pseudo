void __fastcall BgmPlayerBase___ctor(BgmPlayerBase_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmPlayerBase__AddLogBgmAction(
        BgmPlayerBase_o *this,
        System_String_o *actionName,
        System_String_o *opt,
        const MethodInfo *method)
{
  ;
}


void __fastcall BgmPlayerBase__AddLogBgmPause(BgmPlayerBase_o *this, bool isPause, const MethodInfo *method)
{
  ;
}


void __fastcall BgmPlayerBase__AddLogBgmStop(BgmPlayerBase_o *this, System_String_o *opt, const MethodInfo *method)
{
  ;
}


void __fastcall BgmPlayerBase__AddLogBgmVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall BgmPlayerBase__ChangeVolume(
        BgmPlayerBase_o *this,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  BgmPlayerBase_o *v7; // x19
  const MethodInfo *v8; // x3
  struct CriAtomSource_o *bgmPlayer; // x1
  struct CriAtomSource_o *bgmFadePlayer; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  CriAtomSource_o *v14; // x0
  char v15; // w20
  struct CriAtomSource_o *v16; // x8
  BgmManager_c *v17; // x0
  float fadeBaseVolume; // s1
  float masterVolume; // s0
  CriAtomSource_o *v20; // x21

  v7 = this;
  if ( (byte_4A4DB6C & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1B863B8(&BgmManager_TypeInfo, method);
    byte_4A4DB6C = 1;
  }
  if ( v7->fields.fadeinTime > 0.0 )
  {
    this = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmFadePlayer, v4);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      bgmPlayer = v7->fields.bgmPlayer;
      bgmFadePlayer = v7->fields.bgmFadePlayer;
      v7->fields.bgmFadePlayer = bgmPlayer;
      sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.bgmFadePlayer, (int32_t)bgmPlayer, (int32_t)v4, v8);
      v7->fields.bgmPlayer = bgmFadePlayer;
      sub_1B8635C((CGThumbnailListItem_o *)&v7->fields.bgmPlayer, (int32_t)bgmFadePlayer, v11, v12);
      v14 = v7->fields.bgmFadePlayer;
      if ( !v14 )
        goto LABEL_27;
      CriAtomSource__Stop(v14, 0LL);
    }
  }
  v14 = (CriAtomSource_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmPlayer, v4);
  v15 = (char)v14;
  if ( ((unsigned __int8)v14 & 1) != 0 )
  {
    if ( fadeTime <= 0.0 )
    {
      v7->fields.fadeinTime = 0.0;
      v20 = v7->fields.bgmPlayer;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !byte_4A49609 )
      {
        sub_1B863B8(&BgmManager_TypeInfo, v13);
        byte_4A49609 = 1;
      }
      v14 = (CriAtomSource_o *)BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v14 = (CriAtomSource_o *)BgmManager_TypeInfo;
      }
      if ( v20 )
      {
        CriAtomSource__set_volume(v20, *((float *)&v14[1].klass->_1.byval_arg.data + 1) * volume, 0LL);
LABEL_25:
        v7->fields.fadeoutTime = 0.0;
        v7->fields.playVolume = volume;
        return v15 & 1;
      }
    }
    else
    {
      v16 = v7->fields.bgmPlayer;
      if ( v16 )
      {
        v7->fields.fadeBaseVolume = v16->fields._volume;
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        if ( !byte_4A49609 )
        {
          sub_1B863B8(&BgmManager_TypeInfo, v13);
          byte_4A49609 = 1;
        }
        v17 = BgmManager_TypeInfo;
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v17 = BgmManager_TypeInfo;
        }
        fadeBaseVolume = v7->fields.fadeBaseVolume;
        masterVolume = v17->static_fields->masterVolume;
        v7->fields.fadeinTime = fadeTime;
        v7->fields.playTime = -1.0;
        v7->fields.fadeChangeVolume = (float)(masterVolume * volume) - fadeBaseVolume;
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_1B86614(v14, v13);
  }
  return v15 & 1;
}


bool __fastcall BgmPlayerBase__CheckPlaying(BgmPlayerBase_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  int32_t status; // w0

  if ( !player )
    sub_1B86614(this, 0LL);
  status = CriAtomSource__get_status(player, 0LL);
  if ( status != 1 )
    LOBYTE(status) = CriAtomSource__get_status(player, 0LL) == 2;
  return status;
}


bool __fastcall BgmPlayerBase__FadeoutBgm(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_String_o *bgmName; // x21
  BgmManager_c *v8; // x0

  if ( (byte_4A4DB71 & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    byte_4A4DB71 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( bgmName )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4A4B97D )
    {
      sub_1B863B8(&BgmManager_TypeInfo, method);
      byte_4A4B97D = 1;
    }
    v8 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v8 = BgmManager_TypeInfo;
    }
    if ( !v8->static_fields->isMute )
      BgmPlayerBase__FadeoutLocal(this, fadeoutTime, method);
    this->fields.bgmName = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgmName, 0, v3, v4);
    this->fields.bgmVolume = 0.0;
  }
  return bgmName != 0LL;
}


void __fastcall BgmPlayerBase__FadeoutLocal(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CGThumbnailListItem_o *p_bgmPlayer; // x20
  BgmPlayerBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CriAtomSource_o **p_bgmFadePlayer; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_c *klass; // x1
  CGThumbnailListItem_c *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct CriAtomSource_o *bgmPlayer; // x8
  float volume; // s0

  p_bgmPlayer = (CGThumbnailListItem_o *)&this->fields.bgmPlayer;
  v7 = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v3);
  if ( ((unsigned __int8)v7 & 1) != 0 && this->fields.fadeoutTime <= 0.0 )
  {
    if ( this->fields.fadeinTime > 0.0 )
    {
      p_bgmFadePlayer = &this->fields.bgmFadePlayer;
      v7 = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(v7, this->fields.bgmFadePlayer, v9);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        klass = p_bgmPlayer->klass;
        v14 = (CGThumbnailListItem_c *)*p_bgmFadePlayer;
        *p_bgmFadePlayer = (struct CriAtomSource_o *)p_bgmPlayer->klass;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgmFadePlayer, (int32_t)klass, v11, v12);
        p_bgmPlayer->klass = v14;
        sub_1B8635C(p_bgmPlayer, (int32_t)v14, v15, v16);
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
      this->fields.fadeChangeVolume = 0.0;
      this->fields.playTime = -1.0;
      this->fields.fadeBaseVolume = volume;
      return;
    }
LABEL_10:
    sub_1B86614(v7, v8);
  }
}


void __fastcall BgmPlayerBase__FixedUpdate(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v6; // x1
  float fixedUnscaledDeltaTime; // s8
  CriAtomSource_o *v8; // x0
  _BOOL8 IsPaused; // x0
  const MethodInfo *v10; // x2
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  float fadeoutTime; // s0
  float playTime; // s1
  float v15; // s2
  bool v16; // nf
  float v17; // s1
  BgmManager_c *v18; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float v20; // s0
  CGThumbnailListItem_o *p_bgmFadePlayer; // x23
  CriAtomSource_o *v22; // x21
  struct CriAtomSource_o **v23; // x8
  float v24; // s0
  float fadeinTime; // s1
  CriAtomSource_o *v26; // x22
  float v27; // s2
  float v28; // s0
  float v29; // s0
  CriAtomSource_o *v30; // x1
  CGThumbnailListItem_c *klass; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  if ( (byte_4A4DB72 & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A4DB72 = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedUnscaledDeltaTime(0LL);
    if ( fixedUnscaledDeltaTime > 0.5 )
      fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedDeltaTime(0LL);
    v8 = *p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_80;
    IsPaused = CriAtomSource__IsPaused(v8, 0LL);
    if ( !IsPaused )
    {
      v11 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)IsPaused, *p_bgmPlayer, v10);
      if ( v11
        || this->fields.fadeinTime > 0.0
        && (v11 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v11, this->fields.bgmFadePlayer, v12)) )
      {
        fadeoutTime = this->fields.fadeoutTime;
        if ( fadeoutTime > 0.0 )
        {
          playTime = this->fields.playTime;
          v15 = fixedUnscaledDeltaTime + playTime;
          v16 = playTime < 0.0;
          v17 = 0.0;
          if ( !v16 )
            v17 = v15;
          this->fields.playTime = v17;
          if ( v17 >= fadeoutTime )
          {
            BgmPlayerBase__StopLocal(this, v6);
            return;
          }
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          if ( !byte_4A4B97D )
          {
            sub_1B863B8(&BgmManager_TypeInfo, v6);
            byte_4A4B97D = 1;
          }
          v18 = BgmManager_TypeInfo;
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            v18 = BgmManager_TypeInfo;
          }
          static_fields = v18->static_fields;
          v8 = *p_bgmPlayer;
          if ( static_fields->isMute )
          {
            if ( v8 )
            {
              v20 = 0.0;
LABEL_79:
              CriAtomSource__set_volume(v8, v20, 0LL);
              return;
            }
          }
          else if ( v8 )
          {
            v20 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
            goto LABEL_79;
          }
LABEL_80:
          sub_1B86614(v8, v6);
        }
        if ( this->fields.fadeinTime > 0.0 )
        {
          p_bgmFadePlayer = (CGThumbnailListItem_o *)&this->fields.bgmFadePlayer;
          if ( BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v11, this->fields.bgmFadePlayer, v12) )
          {
            v22 = *p_bgmPlayer;
            v23 = &this->fields.bgmFadePlayer;
          }
          else
          {
            v22 = 0LL;
            v23 = &this->fields.bgmPlayer;
          }
          v24 = this->fields.playTime;
          fadeinTime = this->fields.fadeinTime;
          v26 = *v23;
          v27 = fixedUnscaledDeltaTime + v24;
          v16 = v24 < 0.0;
          v28 = 0.0;
          if ( !v16 )
            v28 = v27;
          this->fields.playTime = v28;
          if ( v28 >= fadeinTime )
          {
            this->fields.fadeinTime = 0.0;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            if ( !byte_4A4B97D )
            {
              sub_1B863B8(&BgmManager_TypeInfo, v6);
              byte_4A4B97D = 1;
            }
            v8 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v8 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            v29 = 0.0;
            if ( !LOBYTE(v8[1].klass->_1.byval_arg.data) )
            {
              if ( !*(_DWORD *)&v8[1].fields._guid_k__BackingField.fields._d )
                j_il2cpp_runtime_class_init_0(v8);
              if ( !byte_4A49609 )
              {
                sub_1B863B8(&BgmManager_TypeInfo, v6);
                byte_4A49609 = 1;
              }
              v8 = (CriAtomSource_o *)BgmManager_TypeInfo;
              if ( !BgmManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                v8 = (CriAtomSource_o *)BgmManager_TypeInfo;
              }
              v29 = *((float *)&v8[1].klass->_1.byval_arg.data + 1) * this->fields.playVolume;
            }
            if ( !v26 )
              goto LABEL_80;
            CriAtomSource__set_volume(v26, v29, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v8 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
            if ( ((unsigned __int8)v8 & 1) != 0 )
            {
              if ( v22 )
              {
                CriAtomSource__Stop(v22, 0LL);
                v30 = *p_bgmPlayer;
                klass = p_bgmFadePlayer->klass;
                p_bgmFadePlayer->klass = (CGThumbnailListItem_c *)*p_bgmPlayer;
                sub_1B8635C(p_bgmFadePlayer, (int32_t)v30, v32, v33);
                *p_bgmPlayer = (CriAtomSource_o *)klass;
                sub_1B8635C((CGThumbnailListItem_o *)p_bgmPlayer, (int32_t)klass, v34, v35);
                return;
              }
              goto LABEL_80;
            }
          }
          else
          {
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            if ( !byte_4A4B97D )
            {
              sub_1B863B8(&BgmManager_TypeInfo, v6);
              byte_4A4B97D = 1;
            }
            v8 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v8 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            if ( !LOBYTE(v8[1].klass->_1.byval_arg.data) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v8 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
              if ( ((unsigned __int8)v8 & 1) == 0 )
              {
                if ( v26 )
                {
                  v8 = v26;
                  v20 = this->fields.fadeBaseVolume
                      + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
                  goto LABEL_79;
                }
                goto LABEL_80;
              }
              if ( !v26 )
                goto LABEL_80;
              CriAtomSource__set_volume(
                v26,
                (float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime,
                0LL);
              if ( !v22 )
                goto LABEL_80;
              v20 = this->fields.fadeBaseVolume
                  * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeinTime));
LABEL_76:
              v8 = v22;
              goto LABEL_79;
            }
            if ( !v26 )
              goto LABEL_80;
            CriAtomSource__set_volume(v26, 0.0, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v8 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0LL, 0LL);
            if ( ((unsigned __int8)v8 & 1) != 0 )
            {
              if ( !v22 )
                goto LABEL_80;
              v20 = 0.0;
              goto LABEL_76;
            }
          }
        }
      }
    }
  }
}


System_String_array *__fastcall BgmPlayerBase__GetUsingCueNames(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct CriAtomSource_o *bgmPlayer; // x8
  __int64 v8; // x20
  struct System_String_o *cueName; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct CriAtomSource_o *bgmFadePlayer; // x8
  struct System_String_o *v13; // x1

  if ( (byte_4A4DB6E & 1) == 0 )
  {
    sub_1B863B8(&string___TypeInfo, method);
    byte_4A4DB6E = 1;
  }
  v3 = sub_1B86460(string___TypeInfo, 2LL);
  bgmPlayer = this->fields.bgmPlayer;
  if ( !bgmPlayer )
    goto LABEL_9;
  v8 = v3;
  if ( !v3 )
    goto LABEL_9;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_10;
  cueName = bgmPlayer->fields._cueName;
  *(_QWORD *)(v3 + 32) = cueName;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)cueName, v5, v6);
  bgmFadePlayer = this->fields.bgmFadePlayer;
  if ( !bgmFadePlayer )
LABEL_9:
    sub_1B86614(v3, v4);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
LABEL_10:
    sub_1B8661C(v3, v4);
  v13 = bgmFadePlayer->fields._cueName;
  *(_QWORD *)(v8 + 40) = v13;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 40), (int32_t)v13, v10, v11);
  return (System_String_array *)v8;
}


void __fastcall BgmPlayerBase__Initialize(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  CriAtomSource_o *CriAtomSource; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct CriAtomSource_o *v11; // x20
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct System_String_o **p_cueSheet; // x0
  struct CriAtomSource_o **p_bgmFadePlayer; // x20
  UnityEngine_Object_o *bgmFadePlayer; // x21
  CriAtomSource_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct CriAtomSource_o *v22; // x20
  __int64 v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4A4DB6A & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4A4DB6A = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CriAtomSource = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, 0LL);
    *p_bgmPlayer = CriAtomSource;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgmPlayer, (int32_t)CriAtomSource, v9, v10);
    v11 = *p_bgmPlayer;
    if ( !v11 )
      goto LABEL_19;
    v11->fields._androidUseLowLatencyVoicePool = 0;
    v12 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
            this,
            this->klass->vtable._5_Initialize.methodPtr);
    v11->fields._cueSheet = (struct System_String_o *)v12;
    v15 = v12;
    p_cueSheet = &v11->fields._cueSheet;
  }
  else
  {
    Instance = (Il2CppObject *)*p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_19;
    CriAtomSource__Stop((CriAtomSource_o *)Instance, 0LL);
    this->fields.bgmName = 0LL;
    p_cueSheet = &this->fields.bgmName;
    v15 = 0;
  }
  sub_1B8635C((CGThumbnailListItem_o *)p_cueSheet, v15, v13, v14);
  p_bgmFadePlayer = &this->fields.bgmFadePlayer;
  bgmFadePlayer = (UnityEngine_Object_o *)this->fields.bgmFadePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bgmFadePlayer, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      v19 = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, 0LL);
      *p_bgmFadePlayer = v19;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.bgmFadePlayer, (int32_t)v19, v20, v21);
      v22 = *p_bgmFadePlayer;
      if ( v22 )
      {
        v22->fields._androidUseLowLatencyVoicePool = 0;
        v23 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
                this,
                this->klass->vtable._5_Initialize.methodPtr);
        v22->fields._cueSheet = (struct System_String_o *)v23;
        sub_1B8635C((CGThumbnailListItem_o *)&v22->fields._cueSheet, v23, v24, v25);
        return;
      }
    }
LABEL_19:
    sub_1B86614(Instance, v6);
  }
  Instance = (Il2CppObject *)*p_bgmFadePlayer;
  if ( !*p_bgmFadePlayer )
    goto LABEL_19;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmPlayerBase__PauseBgm(BgmPlayerBase_o *this, bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x21
  struct CriAtomSource_o *v6; // x0
  const MethodInfo *v7; // x2
  CriAtomSource_o *v8; // x1

  if ( (byte_4A4DB69 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isPause);
    byte_4A4DB69 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct CriAtomSource_o *)UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v8 = this->fields.bgmPlayer;
    if ( isPause )
    {
      if ( BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v6, v8, v7) )
        goto LABEL_8;
    }
    else
    {
      if ( !v8 )
        goto LABEL_13;
      if ( CriAtomSource__IsPaused(this->fields.bgmPlayer, 0LL) )
      {
LABEL_8:
        v6 = this->fields.bgmPlayer;
        if ( v6 )
        {
          CriAtomSource__Pause(v6, isPause, 0LL);
          return;
        }
LABEL_13:
        sub_1B86614(v6, v8);
      }
    }
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  BgmManager_c *v16; // x0

  v10 = this;
  if ( (byte_4A4DB70 & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1B863B8(&BgmManager_TypeInfo, name);
    byte_4A4DB70 = 1;
  }
  if ( !name )
    sub_1B86614(this, name);
  if ( System_String__Equals_61680480(name, v10->fields.bgmName, 0LL) )
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
    sub_1B8635C((CGThumbnailListItem_o *)&v10->fields.bgmName, (int32_t)name, v12, v13);
    v10->fields.startTime = startTime;
    v10->fields.bgmVolume = volume;
    v10->fields.bgmFadeTime = fadeTime;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4A4B97D )
    {
      sub_1B863B8(&BgmManager_TypeInfo, v14);
      byte_4A4B97D = 1;
    }
    v16 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v16 = BgmManager_TypeInfo;
    }
    if ( !v16->static_fields->isMute && BgmPlayerBase__PlayLocal(v10, name, volume, fadeTime, 1, v15) )
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  CriAtomSource_o *Instance; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  BgmPlayerBase_o *v21; // x0
  const MethodInfo *v22; // x2
  const MethodInfo *v23; // x3
  struct CriAtomSource_o *bgmFadePlayer; // x1
  struct CriAtomSource_o *bgmPlayer; // x8
  float v26; // s0
  struct CriAtomSource_o *v27; // x1
  System_Action_o *v28; // x19

  if ( (byte_4A4DB6D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, name);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11);
    sub_1B863B8(&Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__, v12);
    sub_1B863B8(&BgmPlayerBase___c__DisplayClass31_0_TypeInfo, v13);
    byte_4A4DB6D = 1;
  }
  v14 = sub_1B86604(BgmPlayerBase___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_12;
  *(_QWORD *)(v14 + 16) = name;
  sub_1B8635C((CGThumbnailListItem_o *)(v14 + 16), (int32_t)name, v17, v18);
  *(_QWORD *)(v14 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v19, v20);
  *(float *)(v14 + 40) = volume;
  *(float *)(v14 + 44) = fadeTime;
  *(_BYTE *)(v14 + 48) = loop;
  if ( fadeTime > 0.0 && BgmPlayerBase__CheckPlaying(v21, this->fields.bgmPlayer, v22) )
  {
    bgmFadePlayer = this->fields.bgmFadePlayer;
    *(_QWORD *)(v14 + 32) = bgmFadePlayer;
    sub_1B8635C((CGThumbnailListItem_o *)(v14 + 32), (int32_t)bgmFadePlayer, (int32_t)v22, v23);
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer )
      goto LABEL_12;
    v26 = bgmPlayer->fields._volume;
  }
  else
  {
    v27 = this->fields.bgmPlayer;
    *(_QWORD *)(v14 + 32) = v27;
    sub_1B8635C((CGThumbnailListItem_o *)(v14 + 32), (int32_t)v27, (int32_t)v22, v23);
    Instance = this->fields.bgmFadePlayer;
    if ( !Instance )
      goto LABEL_12;
    CriAtomSource__Stop(Instance, 0LL);
    v26 = 0.0;
  }
  this->fields.fadeBaseVolume = v26;
  v28 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)v14, Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__, 0LL);
  Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1B86614(Instance, v16);
  return BgmManager__PreloadBgm((BgmManager_o *)Instance, *(System_String_o **)(v14 + 16), v28, 0LL);
}


void __fastcall BgmPlayerBase__ReflectMasterVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x19
  float bgmVolume; // s8
  BgmManager_c *v5; // x0

  if ( (byte_4A4DB6B & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    byte_4A4DB6B = 1;
  }
  if ( this->fields.bgmName && (this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4A49609 )
    {
      sub_1B863B8(&BgmManager_TypeInfo, method);
      byte_4A49609 = 1;
    }
    v5 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v5 = BgmManager_TypeInfo;
    }
    if ( !bgmPlayer )
      sub_1B86614(v5, method);
    CriAtomSource__set_volume(bgmPlayer, bgmVolume * v5->static_fields->masterVolume, 0LL);
  }
}


void __fastcall BgmPlayerBase__Reset(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_bgmName; // x19
  struct System_String_o *bgmName; // t1

  BgmPlayerBase__StopLocal(this, method);
  bgmName = this->fields.bgmName;
  p_bgmName = (CGThumbnailListItem_o *)&this->fields.bgmName;
  if ( bgmName )
  {
    p_bgmName->klass = 0LL;
    sub_1B8635C(p_bgmName, 0, v3, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmPlayerBase__SetMute(BgmPlayerBase_o *this, bool isMute, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  long double v4; // q8
  struct System_String_o *bgmName; // x8
  struct System_String_o **p_bgmName; // x20
  struct System_String_o **p_preloadName; // x21
  struct System_String_o *preloadName; // x22
  struct System_String_o *v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BgmPlayerBase_c *klass; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  p_bgmName = &this->fields.bgmName;
  bgmName = this->fields.bgmName;
  if ( isMute )
  {
    if ( bgmName )
      BgmPlayerBase__StopLocal(this, (const MethodInfo *)isMute);
  }
  else if ( bgmName )
  {
    p_preloadName = &this->fields.preloadName;
    preloadName = this->fields.preloadName;
    *(float *)&v4 = this->fields.bgmVolume;
    v10 = this->fields.bgmName;
    this->fields.preloadName = bgmName;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.preloadName, (int32_t)v10, (int32_t)method, v3);
    this->fields.bgmName = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_bgmName, 0, v11, v12);
    klass = this->klass;
    this->fields.bgmVolume = -1.0;
    ((void (__fastcall *)(BgmPlayerBase_o *, struct System_String_o *, _QWORD, Il2CppMethodPointer, long double, float))klass->vtable._9_PlayBgm.method)(
      this,
      *p_preloadName,
      0LL,
      klass->vtable._10_FadeoutBgm.methodPtr,
      v4,
      0.0);
    *p_preloadName = preloadName;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.preloadName, (int32_t)preloadName, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmPlayerBase__StopBgm(BgmPlayerBase_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o **p_bgmName; // x0
  struct System_String_o *bgmName; // t1

  bgmName = this->fields.bgmName;
  p_bgmName = &this->fields.bgmName;
  if ( !bgmName && this->fields.fadeoutTime <= 0.0 )
    return 0;
  if ( !keepPlayArgs )
  {
    this->fields.bgmName = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_bgmName, 0, (int32_t)method, v3);
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
      sub_1B86614(bgmPlayer, v4);
    CriAtomSource__Stop(bgmPlayer, 0LL);
  }
  *(_QWORD *)&this->fields.fadeinTime = 0LL;
}


void __fastcall BgmPlayerBase__UpdateVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x20
  BgmManager_c *v4; // x0

  if ( (byte_4A4DB68 & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    byte_4A4DB68 = 1;
  }
  bgmPlayer = this->fields.bgmPlayer;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4A49609 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, method);
    byte_4A49609 = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v4 = BgmManager_TypeInfo;
  }
  if ( !bgmPlayer )
    sub_1B86614(v4, method);
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
  if ( (byte_4A4DB65 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_2923/*"BGM"*/, method);
    byte_4A4DB65 = 1;
  }
  return (System_String_o *)StringLiteral_2923/*"BGM"*/;
}


int32_t __fastcall BgmPlayerBase__get_PlayTime(BgmPlayerBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x20
  __int64 v4; // x1
  CriAtomSource_o *v5; // x0

  if ( (byte_4A4DB66 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4DB66 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
    return 0;
  v5 = this->fields.bgmPlayer;
  if ( !v5 )
    sub_1B86614(0LL, v4);
  return CriAtomSource__get_time(v5, 0LL);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  float v22; // s0
  BgmManager_c *v23; // x0

  if ( (byte_4A4DB6F & 1) == 0 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, player);
    byte_4A4DB6F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4A49609 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, player);
    byte_4A49609 = 1;
  }
  v15 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
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
    sub_1B86614(v15, player);
  CriAtomSource__Stop(player, 0LL);
  player->fields._cueSheet = cueSheet;
  sub_1B8635C((CGThumbnailListItem_o *)&player->fields._cueSheet, (int32_t)cueSheet, v17, v18);
  player->fields._cueName = cueName;
  sub_1B8635C((CGThumbnailListItem_o *)&player->fields._cueName, (int32_t)cueName, v19, v20);
  v22 = 0.0;
  if ( fadeTime <= 0.0 )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4A49609 )
    {
      sub_1B863B8(&BgmManager_TypeInfo, v21);
      byte_4A49609 = 1;
    }
    v23 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v23 = BgmManager_TypeInfo;
    }
    v22 = v23->static_fields->masterVolume * volume;
  }
  CriAtomSource__set_volume(player, v22, 0LL);
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
  __int64 v6; // x1
  CriAtomSource_o *v7; // x0

  if ( (byte_4A4DB67 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
    byte_4A4DB67 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
  {
    v7 = this->fields.bgmPlayer;
    if ( !v7 )
      sub_1B86614(0LL, v6);
    CriAtomSource__set_startTime(v7, value, 0LL);
  }
}


void __fastcall BgmPlayerBase___c__DisplayClass31_0___ctor(
        BgmPlayerBase___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BgmPlayerBase___c__DisplayClass31_0___PlayLocal_b__0(
        BgmPlayerBase___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BgmManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *CueName; // x20
  const MethodInfo *v7; // x5
  BgmPlayerBase_o *_4__this; // x8

  if ( (byte_4A4DB73 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v3);
    byte_4A4DB73 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BgmManager__IsPreloadSucceeded(Instance, this->fields.name, 0LL) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      CueName = BgmManager__ExtractCueName(Instance, this->fields.name, 0LL);
      Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( Instance )
      {
        Instance = (BgmManager_o *)SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0LL);
        _4__this = this->fields.__4__this;
        if ( _4__this )
        {
          BgmPlayerBase__playStart(
            _4__this,
            this->fields.player,
            (System_String_o *)Instance,
            CueName,
            this->fields.volume,
            this->fields.fadeTime,
            this->fields.loop,
            v7);
          return;
        }
      }
    }
LABEL_10:
    sub_1B86614(Instance, v5);
  }
}
void BgmPlayerBase___ctor(BgmPlayerBase_o *this, const MethodInfo *method)
{
  this->fields.bgmFadeTime = -1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmPlayerBase__AddLogBgmAction(
        BgmPlayerBase_o *this,
        System_String_o *actionName,
        System_String_o *opt,
        const MethodInfo *method)
{
  ;
}


void BgmPlayerBase__AddLogBgmPause(BgmPlayerBase_o *this, bool isPause, const MethodInfo *method)
{
  ;
}


void BgmPlayerBase__AddLogBgmStop(BgmPlayerBase_o *this, System_String_o *opt, const MethodInfo *method)
{
  ;
}


void BgmPlayerBase__AddLogBgmVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  ;
}


bool BgmPlayerBase__ChangeVolume(BgmPlayerBase_o *this, float volume, float fadeTime, const MethodInfo *method)
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
  if ( (byte_4CB591C & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB591C = 1;
  }
  if ( v7->fields.fadeinTime > 0.0 )
  {
    this = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmFadePlayer, v4);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      bgmPlayer = v7->fields.bgmPlayer;
      bgmFadePlayer = v7->fields.bgmFadePlayer;
      v7->fields.bgmFadePlayer = bgmPlayer;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.bgmFadePlayer, (int32_t)bgmPlayer, (int32_t)v4, v8);
      v7->fields.bgmPlayer = bgmFadePlayer;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.bgmPlayer, (int32_t)bgmFadePlayer, v11, v12);
      v14 = v7->fields.bgmFadePlayer;
      if ( !v14 )
        goto LABEL_27;
      CriAtomSource__Stop(v14, 0);
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
      if ( !byte_4CB10C7 )
      {
        sub_1C6BA08(&BgmManager_TypeInfo);
        byte_4CB10C7 = 1;
      }
      v14 = (CriAtomSource_o *)BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v14 = (CriAtomSource_o *)BgmManager_TypeInfo;
      }
      if ( v20 )
      {
        CriAtomSource__set_volume(v20, *((float *)&v14[1].klass->_1.byval_arg.data + 1) * volume, 0);
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
        if ( !byte_4CB10C7 )
        {
          sub_1C6BA08(&BgmManager_TypeInfo);
          byte_4CB10C7 = 1;
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
    sub_1C6BC60(v14, v13);
  }
  return v15 & 1;
}


bool BgmPlayerBase__CheckPlaying(BgmPlayerBase_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  int32_t status; // w0

  if ( !player )
    sub_1C6BC60(this, 0);
  status = CriAtomSource__get_status(player, 0);
  if ( status != 1 )
    LOBYTE(status) = CriAtomSource__get_status(player, 0) == 2;
  return status;
}


bool BgmPlayerBase__FadeoutBgm(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_String_o *bgmName; // x21
  BgmManager_c *v8; // x0

  if ( (byte_4CB5921 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5921 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( bgmName )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CB36C1 )
    {
      sub_1C6BA08(&BgmManager_TypeInfo);
      byte_4CB36C1 = 1;
    }
    v8 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v8 = BgmManager_TypeInfo;
    }
    if ( !v8->static_fields->isMute )
      BgmPlayerBase__FadeoutLocal(this, fadeoutTime, method);
    this->fields.bgmName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmName, 0, v3, v4);
    this->fields.bgmVolume = 0.0;
  }
  return bgmName != 0;
}


void BgmPlayerBase__FadeoutLocal(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
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
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmFadePlayer, (int32_t)klass, v11, v12);
        p_bgmPlayer->klass = v14;
        sub_1C6B9AC(p_bgmPlayer, (int32_t)v14, v15, v16);
        v7 = (BgmPlayerBase_o *)*p_bgmFadePlayer;
        if ( !*p_bgmFadePlayer )
          goto LABEL_10;
        CriAtomSource__Stop((CriAtomSource_o *)v7, 0);
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
    sub_1C6BC60(v7, v8);
  }
}


void BgmPlayerBase__FixedUpdate(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v5; // x1
  float fixedUnscaledDeltaTime; // s8
  CriAtomSource_o *v7; // x0
  _BOOL8 IsPaused; // x0
  const MethodInfo *v9; // x2
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x2
  float fadeoutTime; // s0
  float playTime; // s1
  float v14; // s2
  bool v15; // nf
  float v16; // s1
  BgmManager_c *v17; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float v19; // s0
  CGThumbnailListItem_o *p_bgmFadePlayer; // x23
  CriAtomSource_o *v21; // x21
  struct CriAtomSource_o **v22; // x8
  float v23; // s0
  float fadeinTime; // s1
  CriAtomSource_o *v25; // x22
  float v26; // s2
  float v27; // s0
  float v28; // s0
  CriAtomSource_o *v29; // x1
  CGThumbnailListItem_c *klass; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4CB5922 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5922 = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(bgmPlayer, 0, 0) )
  {
    fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedUnscaledDeltaTime(0);
    if ( fixedUnscaledDeltaTime > 0.5 )
      fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedDeltaTime(0);
    v7 = *p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_80;
    IsPaused = CriAtomSource__IsPaused(v7, 0);
    if ( !IsPaused )
    {
      v10 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)IsPaused, *p_bgmPlayer, v9);
      if ( v10
        || this->fields.fadeinTime > 0.0
        && (v10 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v10, this->fields.bgmFadePlayer, v11)) )
      {
        fadeoutTime = this->fields.fadeoutTime;
        if ( fadeoutTime > 0.0 )
        {
          playTime = this->fields.playTime;
          v14 = fixedUnscaledDeltaTime + playTime;
          v15 = playTime < 0.0;
          v16 = 0.0;
          if ( !v15 )
            v16 = v14;
          this->fields.playTime = v16;
          if ( v16 >= fadeoutTime )
          {
            BgmPlayerBase__StopLocal(this, v5);
            return;
          }
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          if ( !byte_4CB36C1 )
          {
            sub_1C6BA08(&BgmManager_TypeInfo);
            byte_4CB36C1 = 1;
          }
          v17 = BgmManager_TypeInfo;
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            v17 = BgmManager_TypeInfo;
          }
          static_fields = v17->static_fields;
          v7 = *p_bgmPlayer;
          if ( static_fields->isMute )
          {
            if ( v7 )
            {
              v19 = 0.0;
LABEL_79:
              CriAtomSource__set_volume(v7, v19, 0);
              return;
            }
          }
          else if ( v7 )
          {
            v19 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
            goto LABEL_79;
          }
LABEL_80:
          sub_1C6BC60(v7, v5);
        }
        if ( this->fields.fadeinTime > 0.0 )
        {
          p_bgmFadePlayer = (CGThumbnailListItem_o *)&this->fields.bgmFadePlayer;
          if ( BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v10, this->fields.bgmFadePlayer, v11) )
          {
            v21 = *p_bgmPlayer;
            v22 = &this->fields.bgmFadePlayer;
          }
          else
          {
            v21 = 0;
            v22 = &this->fields.bgmPlayer;
          }
          v23 = this->fields.playTime;
          fadeinTime = this->fields.fadeinTime;
          v25 = *v22;
          v26 = fixedUnscaledDeltaTime + v23;
          v15 = v23 < 0.0;
          v27 = 0.0;
          if ( !v15 )
            v27 = v26;
          this->fields.playTime = v27;
          if ( v27 >= fadeinTime )
          {
            this->fields.fadeinTime = 0.0;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            if ( !byte_4CB36C1 )
            {
              sub_1C6BA08(&BgmManager_TypeInfo);
              byte_4CB36C1 = 1;
            }
            v7 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v7 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            v28 = 0.0;
            if ( !LOBYTE(v7[1].klass->_1.byval_arg.data) )
            {
              if ( !*(_DWORD *)&v7[1].fields._guid_k__BackingField.fields._d )
                j_il2cpp_runtime_class_init_0(v7);
              if ( !byte_4CB10C7 )
              {
                sub_1C6BA08(&BgmManager_TypeInfo);
                byte_4CB10C7 = 1;
              }
              v7 = (CriAtomSource_o *)BgmManager_TypeInfo;
              if ( !BgmManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                v7 = (CriAtomSource_o *)BgmManager_TypeInfo;
              }
              v28 = *((float *)&v7[1].klass->_1.byval_arg.data + 1) * this->fields.playVolume;
            }
            if ( !v25 )
              goto LABEL_80;
            CriAtomSource__set_volume(v25, v28, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v7 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
            if ( ((unsigned __int8)v7 & 1) != 0 )
            {
              if ( v21 )
              {
                CriAtomSource__Stop(v21, 0);
                v29 = *p_bgmPlayer;
                klass = p_bgmFadePlayer->klass;
                p_bgmFadePlayer->klass = (CGThumbnailListItem_c *)*p_bgmPlayer;
                sub_1C6B9AC(p_bgmFadePlayer, (int32_t)v29, v31, v32);
                *p_bgmPlayer = (CriAtomSource_o *)klass;
                sub_1C6B9AC((CGThumbnailListItem_o *)p_bgmPlayer, (int32_t)klass, v33, v34);
                return;
              }
              goto LABEL_80;
            }
          }
          else
          {
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            if ( !byte_4CB36C1 )
            {
              sub_1C6BA08(&BgmManager_TypeInfo);
              byte_4CB36C1 = 1;
            }
            v7 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v7 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            if ( !LOBYTE(v7[1].klass->_1.byval_arg.data) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v7 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
              if ( ((unsigned __int8)v7 & 1) == 0 )
              {
                if ( v25 )
                {
                  v7 = v25;
                  v19 = this->fields.fadeBaseVolume
                      + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
                  goto LABEL_79;
                }
                goto LABEL_80;
              }
              if ( !v25 )
                goto LABEL_80;
              CriAtomSource__set_volume(
                v25,
                (float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime,
                0);
              if ( !v21 )
                goto LABEL_80;
              v19 = this->fields.fadeBaseVolume
                  * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeinTime));
LABEL_76:
              v7 = v21;
              goto LABEL_79;
            }
            if ( !v25 )
              goto LABEL_80;
            CriAtomSource__set_volume(v25, 0.0, 0);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v7 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
            if ( ((unsigned __int8)v7 & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_80;
              v19 = 0.0;
              goto LABEL_76;
            }
          }
        }
      }
    }
  }
}


System_String_array *BgmPlayerBase__GetUsingCueNames(BgmPlayerBase_o *this, const MethodInfo *method)
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

  if ( (byte_4CB591E & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    byte_4CB591E = 1;
  }
  v3 = sub_1C6BAB0(string___TypeInfo, 2);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)cueName, v5, v6);
  bgmFadePlayer = this->fields.bgmFadePlayer;
  if ( !bgmFadePlayer )
LABEL_9:
    sub_1C6BC60(v3, v4);
  if ( *(_DWORD *)(v8 + 24) <= 1u )
LABEL_10:
    sub_1C6BC68(v3);
  v13 = bgmFadePlayer->fields._cueName;
  *(_QWORD *)(v8 + 40) = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)v13, v10, v11);
  return (System_String_array *)v8;
}


void BgmPlayerBase__Initialize(BgmPlayerBase_o *this, const MethodInfo *method)
{
  struct CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  CriAtomSource_o *CriAtomSource; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct CriAtomSource_o *v10; // x20
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  struct System_String_o **p_cueSheet; // x0
  struct CriAtomSource_o **p_bgmFadePlayer; // x20
  UnityEngine_Object_o *bgmFadePlayer; // x21
  CriAtomSource_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct CriAtomSource_o *v21; // x20
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4CB591A & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4CB591A = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bgmPlayer, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CriAtomSource = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, 0);
    *p_bgmPlayer = CriAtomSource;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmPlayer, (int32_t)CriAtomSource, v8, v9);
    v10 = *p_bgmPlayer;
    if ( !v10 )
      goto LABEL_19;
    v10->fields._androidUseLowLatencyVoicePool = 0;
    v11 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))this->klass->vtable._4_get_CueSheetName.methodPtr)(
            this,
            this->klass->vtable._4_get_CueSheetName.method);
    v10->fields._cueSheet = (struct System_String_o *)v11;
    v14 = v11;
    p_cueSheet = &v10->fields._cueSheet;
  }
  else
  {
    Instance = (Il2CppObject *)*p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_19;
    CriAtomSource__Stop((CriAtomSource_o *)Instance, 0);
    this->fields.bgmName = 0;
    p_cueSheet = &this->fields.bgmName;
    v14 = 0;
  }
  sub_1C6B9AC((CGThumbnailListItem_o *)p_cueSheet, v14, v12, v13);
  p_bgmFadePlayer = &this->fields.bgmFadePlayer;
  bgmFadePlayer = (UnityEngine_Object_o *)this->fields.bgmFadePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bgmFadePlayer, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      v18 = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, 0);
      *p_bgmFadePlayer = v18;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmFadePlayer, (int32_t)v18, v19, v20);
      v21 = *p_bgmFadePlayer;
      if ( v21 )
      {
        v21->fields._androidUseLowLatencyVoicePool = 0;
        v22 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))this->klass->vtable._4_get_CueSheetName.methodPtr)(
                this,
                this->klass->vtable._4_get_CueSheetName.method);
        v21->fields._cueSheet = (struct System_String_o *)v22;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v21->fields._cueSheet, v22, v23, v24);
        return;
      }
    }
LABEL_19:
    sub_1C6BC60(Instance, v5);
  }
  Instance = (Il2CppObject *)*p_bgmFadePlayer;
  if ( !*p_bgmFadePlayer )
    goto LABEL_19;
  CriAtomSource__Stop((CriAtomSource_o *)Instance, 0);
}


bool BgmPlayerBase__IsBgmPlaying(BgmPlayerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v2);
}


bool BgmPlayerBase__IsCrossFadePlaying(BgmPlayerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return this->fields.fadeinTime > 0.0 && BgmPlayerBase__CheckPlaying(this, this->fields.bgmFadePlayer, v2);
}


bool BgmPlayerBase__IsPlaying(BgmPlayerBase_o *this, const MethodInfo *method)
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


void BgmPlayerBase__PauseBgm(BgmPlayerBase_o *this, bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x21
  struct CriAtomSource_o *v6; // x0
  const MethodInfo *v7; // x2
  CriAtomSource_o *v8; // x1

  if ( (byte_4CB5919 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5919 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (struct CriAtomSource_o *)UnityEngine_Object__op_Equality(bgmPlayer, 0, 0);
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
      if ( CriAtomSource__IsPaused(this->fields.bgmPlayer, 0) )
      {
LABEL_8:
        v6 = this->fields.bgmPlayer;
        if ( v6 )
        {
          CriAtomSource__Pause(v6, isPause, 0);
          return;
        }
LABEL_13:
        sub_1C6BC60(v6, v8);
      }
    }
  }
}


void BgmPlayerBase__PlayBgm(
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
  const MethodInfo *v14; // x3
  BgmManager_c *v15; // x0

  v10 = this;
  if ( (byte_4CB5920 & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5920 = 1;
  }
  if ( !name )
    sub_1C6BC60(this, name);
  if ( System_String__Equals_64002112(name, v10->fields.bgmName, 0) )
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.bgmName, (int32_t)name, v12, v13);
    v10->fields.startTime = startTime;
    v10->fields.bgmVolume = volume;
    v10->fields.bgmFadeTime = fadeTime;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CB36C1 )
    {
      sub_1C6BA08(&BgmManager_TypeInfo);
      byte_4CB36C1 = 1;
    }
    v15 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v15 = BgmManager_TypeInfo;
    }
    if ( !v15->static_fields->isMute && BgmPlayerBase__PlayLocal(v10, name, volume, fadeTime, 1, v14) )
      v10->fields.bgmFadeTime = 0.0;
  }
}


bool BgmPlayerBase__PlayLocal(
        BgmPlayerBase_o *this,
        System_String_o *name,
        float volume,
        float fadeTime,
        bool loop,
        const MethodInfo *method)
{
  __int64 v11; // x21
  CriAtomSource_o *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BgmPlayerBase_o *v18; // x0
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  struct CriAtomSource_o *bgmFadePlayer; // x1
  struct CriAtomSource_o *bgmPlayer; // x8
  float v23; // s0
  struct CriAtomSource_o *v24; // x1
  System_Action_o *v25; // x19

  if ( (byte_4CB591D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C6BA08(&Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__);
    sub_1C6BA08(&BgmPlayerBase___c__DisplayClass31_0_TypeInfo);
    byte_4CB591D = 1;
  }
  v11 = sub_1C6BC54(BgmPlayerBase___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)name, v14, v15);
  *(_QWORD *)(v11 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 24), (int32_t)this, v16, v17);
  *(float *)(v11 + 40) = volume;
  *(float *)(v11 + 44) = fadeTime;
  *(_BYTE *)(v11 + 48) = loop;
  if ( fadeTime > 0.0 && BgmPlayerBase__CheckPlaying(v18, this->fields.bgmPlayer, v19) )
  {
    bgmFadePlayer = this->fields.bgmFadePlayer;
    *(_QWORD *)(v11 + 32) = bgmFadePlayer;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)bgmFadePlayer, (int32_t)v19, v20);
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer )
      goto LABEL_12;
    v23 = bgmPlayer->fields._volume;
  }
  else
  {
    v24 = this->fields.bgmPlayer;
    *(_QWORD *)(v11 + 32) = v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 32), (int32_t)v24, (int32_t)v19, v20);
    Instance = this->fields.bgmFadePlayer;
    if ( !Instance )
      goto LABEL_12;
    CriAtomSource__Stop(Instance, 0);
    v23 = 0.0;
  }
  this->fields.fadeBaseVolume = v23;
  v25 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v11, Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__, 0);
  Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C6BC60(Instance, v13);
  return BgmManager__PreloadBgm((BgmManager_o *)Instance, *(System_String_o **)(v11 + 16), v25, 0);
}


void BgmPlayerBase__ReflectMasterVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x19
  float bgmVolume; // s8
  BgmManager_c *v5; // x0

  if ( (byte_4CB591B & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB591B = 1;
  }
  if ( this->fields.bgmName && (this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CB10C7 )
    {
      sub_1C6BA08(&BgmManager_TypeInfo);
      byte_4CB10C7 = 1;
    }
    v5 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v5 = BgmManager_TypeInfo;
    }
    if ( !bgmPlayer )
      sub_1C6BC60(v5, method);
    CriAtomSource__set_volume(bgmPlayer, bgmVolume * v5->static_fields->masterVolume, 0);
  }
}


void BgmPlayerBase__Reset(BgmPlayerBase_o *this, const MethodInfo *method)
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
    p_bgmName->klass = 0;
    sub_1C6B9AC(p_bgmName, 0, v3, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void BgmPlayerBase__SetMute(BgmPlayerBase_o *this, bool isMute, const MethodInfo *method)
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
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.preloadName, (int32_t)v10, (int32_t)method, v3);
    this->fields.bgmName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_bgmName, 0, v11, v12);
    klass = this->klass;
    this->fields.bgmVolume = -1.0;
    ((void (__fastcall *)(BgmPlayerBase_o *, struct System_String_o *, _QWORD, const MethodInfo *, long double, float))klass->vtable._9_PlayBgm.methodPtr)(
      this,
      *p_preloadName,
      0,
      klass->vtable._9_PlayBgm.method,
      v4,
      0.0);
    *p_preloadName = preloadName;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.preloadName, (int32_t)preloadName, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
bool BgmPlayerBase__StopBgm(BgmPlayerBase_o *this, bool keepPlayArgs, const MethodInfo *method)
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
    this->fields.bgmName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_bgmName, 0, (int32_t)method, v3);
    this->fields.bgmVolume = 0.0;
  }
  this->fields.bgmFadeTime = -1.0;
  this->fields.startTime = 0;
  BgmPlayerBase__StopLocal(this, (const MethodInfo *)keepPlayArgs);
  return 1;
}


void BgmPlayerBase__StopLocal(BgmPlayerBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  CriAtomSource_o *bgmPlayer; // x0

  if ( BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v2) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer || (CriAtomSource__Stop(bgmPlayer, 0), (bgmPlayer = this->fields.bgmFadePlayer) == 0) )
      sub_1C6BC60(bgmPlayer, v4);
    CriAtomSource__Stop(bgmPlayer, 0);
  }
  *(_QWORD *)&this->fields.fadeinTime = 0;
}


void BgmPlayerBase__UpdateVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x20
  BgmManager_c *v4; // x0

  if ( (byte_4CB5918 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5918 = 1;
  }
  bgmPlayer = this->fields.bgmPlayer;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4CB10C7 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB10C7 = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v4 = BgmManager_TypeInfo;
  }
  if ( !bgmPlayer )
    sub_1C6BC60(v4, method);
  CriAtomSource__set_volume(bgmPlayer, this->fields.bgmVolume * v4->static_fields->masterVolume, 0);
}


System_String_o *BgmPlayerBase__get_BgmName(BgmPlayerBase_o *this, const MethodInfo *method)
{
  return this->fields.bgmName;
}


float BgmPlayerBase__get_BgmVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  return this->fields.bgmVolume;
}


System_String_o *BgmPlayerBase__get_CueSheetName(BgmPlayerBase_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5915 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_2903/*"BGM"*/);
    byte_4CB5915 = 1;
  }
  return (System_String_o *)StringLiteral_2903/*"BGM"*/;
}


int32_t BgmPlayerBase__get_PlayTime(BgmPlayerBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x20
  __int64 v4; // x1
  CriAtomSource_o *v5; // x0

  if ( (byte_4CB5916 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5916 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(bgmPlayer, 0, 0) )
    return 0;
  v5 = this->fields.bgmPlayer;
  if ( !v5 )
    sub_1C6BC60(0, v4);
  return CriAtomSource__get_time(v5, 0);
}


void BgmPlayerBase__playStart(
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
  float v21; // s0
  BgmManager_c *v22; // x0

  if ( (byte_4CB591F & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB591F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4CB10C7 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB10C7 = 1;
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
    sub_1C6BC60(v15, player);
  CriAtomSource__Stop(player, 0);
  player->fields._cueSheet = cueSheet;
  sub_1C6B9AC((CGThumbnailListItem_o *)&player->fields._cueSheet, (int32_t)cueSheet, v17, v18);
  player->fields._cueName = cueName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&player->fields._cueName, (int32_t)cueName, v19, v20);
  v21 = 0.0;
  if ( fadeTime <= 0.0 )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4CB10C7 )
    {
      sub_1C6BA08(&BgmManager_TypeInfo);
      byte_4CB10C7 = 1;
    }
    v22 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v22 = BgmManager_TypeInfo;
    }
    v21 = v22->static_fields->masterVolume * volume;
  }
  CriAtomSource__set_volume(player, v21, 0);
  CriAtomSource__set_startTime(player, this->fields.startTime, 0);
  player->fields._loop = loop;
  CriAtomSource__Play(player, 0);
}


void BgmPlayerBase__set_BgmVolume(BgmPlayerBase_o *this, float value, const MethodInfo *method)
{
  this->fields.bgmVolume = value;
  BgmPlayerBase__UpdateVolume(this, method);
}


void BgmPlayerBase__set_PlayTime(BgmPlayerBase_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x21
  __int64 v6; // x1
  CriAtomSource_o *v7; // x0

  if ( (byte_4CB5917 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5917 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgmPlayer, 0, 0) )
  {
    v7 = this->fields.bgmPlayer;
    if ( !v7 )
      sub_1C6BC60(0, v6);
    CriAtomSource__set_startTime(v7, value, 0);
  }
}


void BgmPlayerBase___c__DisplayClass31_0___ctor(BgmPlayerBase___c__DisplayClass31_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BgmPlayerBase___c__DisplayClass31_0___PlayLocal_b__0(
        BgmPlayerBase___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  BgmManager_o *Instance; // x0
  __int64 v4; // x1
  System_String_o *CueName; // x20
  const MethodInfo *v6; // x5
  BgmPlayerBase_o *_4__this; // x8

  if ( (byte_4CB5923 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4CB5923 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BgmManager__IsPreloadSucceeded(Instance, this->fields.name, 0) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      CueName = BgmManager__ExtractCueName(Instance, this->fields.name, 0);
      Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( Instance )
      {
        Instance = (BgmManager_o *)SoundManager__GetCueSheet((SoundManager_o *)Instance, CueName, 0);
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
            v6);
          return;
        }
      }
    }
LABEL_10:
    sub_1C6BC60(Instance, v4);
  }
}
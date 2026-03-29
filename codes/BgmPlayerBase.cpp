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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct CriAtomSource_o *bgmPlayer; // x1
  struct CriAtomSource_o *bgmFadePlayer; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x1
  CriAtomSource_o *v22; // x0
  char v23; // w20
  struct CriAtomSource_o *v24; // x8
  BgmManager_c *v25; // x0
  float fadeBaseVolume; // s1
  float masterVolume; // s0
  CriAtomSource_o *v28; // x21

  v7 = this;
  if ( (byte_4D30057 & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D30057 = 1;
  }
  if ( v7->fields.fadeinTime > 0.0 )
  {
    this = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmFadePlayer, v4);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      bgmPlayer = v7->fields.bgmPlayer;
      bgmFadePlayer = v7->fields.bgmFadePlayer;
      v7->fields.bgmFadePlayer = bgmPlayer;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v7->fields.bgmFadePlayer,
        (int32_t)bgmPlayer,
        (int32_t)v4,
        v8,
        v9,
        v10,
        v11,
        v12);
      v7->fields.bgmPlayer = bgmFadePlayer;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v7->fields.bgmPlayer,
        (int32_t)bgmFadePlayer,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      v22 = v7->fields.bgmFadePlayer;
      if ( !v22 )
        goto LABEL_27;
      CriAtomSource__Stop(v22, 0);
    }
  }
  v22 = (CriAtomSource_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmPlayer, v4);
  v23 = (char)v22;
  if ( ((unsigned __int8)v22 & 1) != 0 )
  {
    if ( fadeTime <= 0.0 )
    {
      v7->fields.fadeinTime = 0.0;
      v28 = v7->fields.bgmPlayer;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      if ( !byte_4D2B5DC )
      {
        sub_1C93AD4(&BgmManager_TypeInfo);
        byte_4D2B5DC = 1;
      }
      v22 = (CriAtomSource_o *)BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        v22 = (CriAtomSource_o *)BgmManager_TypeInfo;
      }
      if ( v28 )
      {
        CriAtomSource__set_volume(v28, *((float *)&v22[1].klass->_1.byval_arg.data + 1) * volume, 0);
LABEL_25:
        v7->fields.fadeoutTime = 0.0;
        v7->fields.playVolume = volume;
        return v23 & 1;
      }
    }
    else
    {
      v24 = v7->fields.bgmPlayer;
      if ( v24 )
      {
        v7->fields.fadeBaseVolume = v24->fields._volume;
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
        if ( !byte_4D2B5DC )
        {
          sub_1C93AD4(&BgmManager_TypeInfo);
          byte_4D2B5DC = 1;
        }
        v25 = BgmManager_TypeInfo;
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
          v25 = BgmManager_TypeInfo;
        }
        fadeBaseVolume = v7->fields.fadeBaseVolume;
        masterVolume = v25->static_fields->masterVolume;
        v7->fields.fadeinTime = fadeTime;
        v7->fields.playTime = -1.0;
        v7->fields.fadeChangeVolume = (float)(masterVolume * volume) - fadeBaseVolume;
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_1C93D2C(v22, v21);
  }
  return v23 & 1;
}


bool BgmPlayerBase__CheckPlaying(BgmPlayerBase_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  int32_t status; // w0

  if ( !player )
    sub_1C93D2C(this, 0);
  status = CriAtomSource__get_status(player, 0);
  if ( status != 1 )
    LOBYTE(status) = CriAtomSource__get_status(player, 0) == 2;
  return status;
}


bool BgmPlayerBase__FadeoutBgm(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  struct System_String_o *bgmName; // x21
  BgmManager_c *v12; // x0

  if ( (byte_4D3005C & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D3005C = 1;
  }
  bgmName = this->fields.bgmName;
  if ( bgmName )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4D2DDCE )
    {
      sub_1C93AD4(&BgmManager_TypeInfo);
      byte_4D2DDCE = 1;
    }
    v12 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v12 = BgmManager_TypeInfo;
    }
    if ( !v12->static_fields->isMute )
      BgmPlayerBase__FadeoutLocal(this, fadeoutTime, method);
    this->fields.bgmName = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bgmName, 0, v3, v4, v5, v6, v7, v8);
    this->fields.bgmVolume = 0.0;
  }
  return bgmName != 0;
}


void BgmPlayerBase__FadeoutLocal(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  GrandQuestFolderBoardItem_o *p_bgmPlayer; // x20
  BgmPlayerBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CriAtomSource_o **p_bgmFadePlayer; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  GrandQuestFolderBoardItem_c *klass; // x1
  GrandQuestFolderBoardItem_c *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  float volume; // s0

  p_bgmPlayer = (GrandQuestFolderBoardItem_o *)&this->fields.bgmPlayer;
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
        v18 = (GrandQuestFolderBoardItem_c *)*p_bgmFadePlayer;
        *p_bgmFadePlayer = (struct CriAtomSource_o *)p_bgmPlayer->klass;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.bgmFadePlayer,
          (int32_t)klass,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        p_bgmPlayer->klass = v18;
        sub_1C93A78(p_bgmPlayer, (int32_t)v18, v19, v20, v21, v22, v23, v24);
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
    sub_1C93D2C(v7, v8);
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
  GrandQuestFolderBoardItem_o *p_bgmFadePlayer; // x23
  CriAtomSource_o *v21; // x21
  struct CriAtomSource_o **v22; // x8
  float v23; // s0
  float fadeinTime; // s1
  CriAtomSource_o *v25; // x22
  float v26; // s2
  float v27; // s0
  float v28; // s0
  CriAtomSource_o *v29; // x1
  GrandQuestFolderBoardItem_c *klass; // x19
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4D3005D & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3005D = 1;
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
          if ( !byte_4D2DDCE )
          {
            sub_1C93AD4(&BgmManager_TypeInfo);
            byte_4D2DDCE = 1;
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
          sub_1C93D2C(v7, v5);
        }
        if ( this->fields.fadeinTime > 0.0 )
        {
          p_bgmFadePlayer = (GrandQuestFolderBoardItem_o *)&this->fields.bgmFadePlayer;
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
            if ( !byte_4D2DDCE )
            {
              sub_1C93AD4(&BgmManager_TypeInfo);
              byte_4D2DDCE = 1;
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
              if ( !byte_4D2B5DC )
              {
                sub_1C93AD4(&BgmManager_TypeInfo);
                byte_4D2B5DC = 1;
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
                p_bgmFadePlayer->klass = (GrandQuestFolderBoardItem_c *)*p_bgmPlayer;
                sub_1C93A78(p_bgmFadePlayer, (int32_t)v29, v31, v32, v33, v34, v35, v36);
                *p_bgmPlayer = (CriAtomSource_o *)klass;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)p_bgmPlayer, (int32_t)klass, v37, v38, v39, v40, v41, v42);
                return;
              }
              goto LABEL_80;
            }
          }
          else
          {
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            if ( !byte_4D2DDCE )
            {
              sub_1C93AD4(&BgmManager_TypeInfo);
              byte_4D2DDCE = 1;
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  __int64 v12; // x20
  struct System_String_o *cueName; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct CriAtomSource_o *bgmFadePlayer; // x8
  struct System_String_o *v21; // x1

  if ( (byte_4D30059 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    byte_4D30059 = 1;
  }
  v3 = sub_1C93B7C(string___TypeInfo, 2);
  bgmPlayer = this->fields.bgmPlayer;
  if ( !bgmPlayer )
    goto LABEL_9;
  v12 = v3;
  if ( !v3 )
    goto LABEL_9;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_10;
  cueName = bgmPlayer->fields._cueName;
  *(_QWORD *)(v3 + 32) = cueName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)cueName, v5, v6, v7, v8, v9, v10);
  bgmFadePlayer = this->fields.bgmFadePlayer;
  if ( !bgmFadePlayer )
LABEL_9:
    sub_1C93D2C(v3, v4);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
LABEL_10:
    sub_1C93D34(v3);
  v21 = bgmFadePlayer->fields._cueName;
  *(_QWORD *)(v12 + 40) = v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v12 + 40), (int32_t)v21, v14, v15, v16, v17, v18, v19);
  return (System_String_array *)v12;
}


void BgmPlayerBase__Initialize(BgmPlayerBase_o *this, const MethodInfo *method)
{
  struct CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  CriAtomSource_o *CriAtomSource; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct CriAtomSource_o *v14; // x20
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w1
  struct System_String_o **p_cueSheet; // x0
  struct CriAtomSource_o **p_bgmFadePlayer; // x20
  UnityEngine_Object_o *bgmFadePlayer; // x21
  CriAtomSource_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct CriAtomSource_o *v33; // x20
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4D30055 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D30055 = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bgmPlayer, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CriAtomSource = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, v5);
    *p_bgmPlayer = CriAtomSource;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.bgmPlayer,
      (int32_t)CriAtomSource,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = *p_bgmPlayer;
    if ( !v14 )
      goto LABEL_19;
    v14->fields._androidUseLowLatencyVoicePool = 0;
    v15 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))this->klass->vtable._4_get_CueSheetName.methodPtr)(
            this,
            this->klass->vtable._4_get_CueSheetName.method);
    v14->fields._cueSheet = (struct System_String_o *)v15;
    v22 = v15;
    p_cueSheet = &v14->fields._cueSheet;
  }
  else
  {
    Instance = (Il2CppObject *)*p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_19;
    CriAtomSource__Stop((CriAtomSource_o *)Instance, 0);
    this->fields.bgmName = 0;
    p_cueSheet = &this->fields.bgmName;
    v22 = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_cueSheet, v22, v16, v17, v18, v19, v20, v21);
  p_bgmFadePlayer = &this->fields.bgmFadePlayer;
  bgmFadePlayer = (UnityEngine_Object_o *)this->fields.bgmFadePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bgmFadePlayer, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      v26 = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, v5);
      *p_bgmFadePlayer = v26;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.bgmFadePlayer,
        (int32_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v33 = *p_bgmFadePlayer;
      if ( v33 )
      {
        v33->fields._androidUseLowLatencyVoicePool = 0;
        v34 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))this->klass->vtable._4_get_CueSheetName.methodPtr)(
                this,
                this->klass->vtable._4_get_CueSheetName.method);
        v33->fields._cueSheet = (struct System_String_o *)v34;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v33->fields._cueSheet, v34, v35, v36, v37, v38, v39, v40);
        return;
      }
    }
LABEL_19:
    sub_1C93D2C(Instance, v5);
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

  if ( (byte_4D30054 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30054 = 1;
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
        sub_1C93D2C(v6, v8);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x3
  BgmManager_c *v19; // x0

  v10 = this;
  if ( (byte_4D3005B & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D3005B = 1;
  }
  if ( !name )
    sub_1C93D2C(this, name);
  if ( System_String__Equals_64461044(name, v10->fields.bgmName, 0) )
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
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->fields.bgmName, (int32_t)name, v12, v13, v14, v15, v16, v17);
    v10->fields.startTime = startTime;
    v10->fields.bgmVolume = volume;
    v10->fields.bgmFadeTime = fadeTime;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4D2DDCE )
    {
      sub_1C93AD4(&BgmManager_TypeInfo);
      byte_4D2DDCE = 1;
    }
    v19 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v19 = BgmManager_TypeInfo;
    }
    if ( !v19->static_fields->isMute && BgmPlayerBase__PlayLocal(v10, name, volume, fadeTime, 1, v18) )
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  BgmPlayerBase_o *v26; // x0
  const MethodInfo *v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct CriAtomSource_o *bgmFadePlayer; // x1
  struct CriAtomSource_o *bgmPlayer; // x8
  float v35; // s0
  struct CriAtomSource_o *v36; // x1
  System_Action_o *v37; // x19
  const MethodInfo *v38; // x3

  if ( (byte_4D30058 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_1C93AD4(&Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__);
    sub_1C93AD4(&BgmPlayerBase___c__DisplayClass31_0_TypeInfo);
    byte_4D30058 = 1;
  }
  v11 = sub_1C93D20(BgmPlayerBase___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 16), (int32_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(float *)(v11 + 40) = volume;
  *(float *)(v11 + 44) = fadeTime;
  *(_BYTE *)(v11 + 48) = loop;
  if ( fadeTime > 0.0 && BgmPlayerBase__CheckPlaying(v26, this->fields.bgmPlayer, v27) )
  {
    bgmFadePlayer = this->fields.bgmFadePlayer;
    *(_QWORD *)(v11 + 32) = bgmFadePlayer;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)(v11 + 32),
      (int32_t)bgmFadePlayer,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32);
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer )
      goto LABEL_12;
    v35 = bgmPlayer->fields._volume;
  }
  else
  {
    v36 = this->fields.bgmPlayer;
    *(_QWORD *)(v11 + 32) = v36;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)v36, (int32_t)v27, v28, v29, v30, v31, v32);
    Instance = this->fields.bgmFadePlayer;
    if ( !Instance )
      goto LABEL_12;
    CriAtomSource__Stop(Instance, 0);
    v35 = 0.0;
  }
  this->fields.fadeBaseVolume = v35;
  v37 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)v11, Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__, 0);
  Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1C93D2C(Instance, v13);
  return BgmManager__PreloadBgm((BgmManager_o *)Instance, *(System_String_o **)(v11 + 16), v37, v38);
}


void BgmPlayerBase__ReflectMasterVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x19
  float bgmVolume; // s8
  BgmManager_c *v5; // x0

  if ( (byte_4D30056 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D30056 = 1;
  }
  if ( this->fields.bgmName && (this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4D2B5DC )
    {
      sub_1C93AD4(&BgmManager_TypeInfo);
      byte_4D2B5DC = 1;
    }
    v5 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v5 = BgmManager_TypeInfo;
    }
    if ( !bgmPlayer )
      sub_1C93D2C(v5, method);
    CriAtomSource__set_volume(bgmPlayer, bgmVolume * v5->static_fields->masterVolume, 0);
  }
}


void BgmPlayerBase__Reset(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_bgmName; // x19
  struct System_String_o *bgmName; // t1

  BgmPlayerBase__StopLocal(this, method);
  bgmName = this->fields.bgmName;
  p_bgmName = (GrandQuestFolderBoardItem_o *)&this->fields.bgmName;
  if ( bgmName )
  {
    p_bgmName->klass = 0;
    sub_1C93A78(p_bgmName, 0, v3, v4, v5, v6, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void BgmPlayerBase__SetMute(BgmPlayerBase_o *this, bool isMute, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double v8; // q8
  struct System_String_o *bgmName; // x8
  struct System_String_o **p_bgmName; // x20
  struct System_String_o **p_preloadName; // x21
  struct System_String_o *preloadName; // x22
  struct System_String_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  BgmPlayerBase_c *klass; // x8
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

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
    *(float *)&v8 = this->fields.bgmVolume;
    v14 = this->fields.bgmName;
    this->fields.preloadName = bgmName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.preloadName,
      (int32_t)v14,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.bgmName = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_bgmName, 0, v15, v16, v17, v18, v19, v20);
    klass = this->klass;
    this->fields.bgmVolume = -1.0;
    ((void (__fastcall *)(BgmPlayerBase_o *, struct System_String_o *, _QWORD, const MethodInfo *, long double, float))klass->vtable._9_PlayBgm.methodPtr)(
      this,
      *p_preloadName,
      0,
      klass->vtable._9_PlayBgm.method,
      v8,
      0.0);
    *p_preloadName = preloadName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.preloadName,
      (int32_t)preloadName,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
}


// local variable allocation has failed, the output may be wrong!
bool BgmPlayerBase__StopBgm(BgmPlayerBase_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_String_o **p_bgmName; // x0
  struct System_String_o *bgmName; // t1

  bgmName = this->fields.bgmName;
  p_bgmName = &this->fields.bgmName;
  if ( !bgmName && this->fields.fadeoutTime <= 0.0 )
    return 0;
  if ( !keepPlayArgs )
  {
    this->fields.bgmName = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_bgmName, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
      sub_1C93D2C(bgmPlayer, v4);
    CriAtomSource__Stop(bgmPlayer, 0);
  }
  *(_QWORD *)&this->fields.fadeinTime = 0;
}


void BgmPlayerBase__UpdateVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x20
  BgmManager_c *v4; // x0

  if ( (byte_4D30053 & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D30053 = 1;
  }
  bgmPlayer = this->fields.bgmPlayer;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4D2B5DC )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D2B5DC = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v4 = BgmManager_TypeInfo;
  }
  if ( !bgmPlayer )
    sub_1C93D2C(v4, method);
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
  if ( (byte_4D30050 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_2923/*"BGM"*/);
    byte_4D30050 = 1;
  }
  return (System_String_o *)StringLiteral_2923/*"BGM"*/;
}


int32_t BgmPlayerBase__get_PlayTime(BgmPlayerBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x20
  __int64 v4; // x1
  CriAtomSource_o *v5; // x0

  if ( (byte_4D30051 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30051 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(bgmPlayer, 0, 0) )
    return 0;
  v5 = this->fields.bgmPlayer;
  if ( !v5 )
    sub_1C93D2C(0, v4);
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  float v29; // s0
  BgmManager_c *v30; // x0

  if ( (byte_4D3005A & 1) == 0 )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D3005A = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4D2B5DC )
  {
    sub_1C93AD4(&BgmManager_TypeInfo);
    byte_4D2B5DC = 1;
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
    sub_1C93D2C(v15, player);
  CriAtomSource__Stop(player, 0);
  player->fields._cueSheet = cueSheet;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&player->fields._cueSheet, (int32_t)cueSheet, v17, v18, v19, v20, v21, v22);
  player->fields._cueName = cueName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&player->fields._cueName, (int32_t)cueName, v23, v24, v25, v26, v27, v28);
  v29 = 0.0;
  if ( fadeTime <= 0.0 )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4D2B5DC )
    {
      sub_1C93AD4(&BgmManager_TypeInfo);
      byte_4D2B5DC = 1;
    }
    v30 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      v30 = BgmManager_TypeInfo;
    }
    v29 = v30->static_fields->masterVolume * volume;
  }
  CriAtomSource__set_volume(player, v29, 0);
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

  if ( (byte_4D30052 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D30052 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgmPlayer, 0, 0) )
  {
    v7 = this->fields.bgmPlayer;
    if ( !v7 )
      sub_1C93D2C(0, v6);
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
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  System_String_o *CueName; // x20
  const MethodInfo *v8; // x5
  BgmPlayerBase_o *_4__this; // x8

  if ( (byte_4D3005E & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D3005E = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BgmManager__IsPreloadSucceeded(Instance, this->fields.name, v5) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      CueName = BgmManager__ExtractCueName(Instance, this->fields.name, v6);
      Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
            v8);
          return;
        }
      }
    }
LABEL_10:
    sub_1C93D2C(Instance, v4);
  }
}
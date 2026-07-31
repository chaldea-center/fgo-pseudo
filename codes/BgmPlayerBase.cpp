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
  MethodInfo *v4; // x2
  BgmPlayerBase_o *v7; // x19
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct CriAtomSource_o *bgmPlayer; // x1
  struct CriAtomSource_o *bgmFadePlayer; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  CriAtomSource_o *v22; // x0
  char v23; // w20
  struct CriAtomSource_o *v24; // x8
  BgmManager_c *v25; // x0
  BgmManager_c *v26; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float fadeBaseVolume; // s1
  float masterVolume; // s0
  CriAtomSource_o *v30; // x21

  v7 = this;
  if ( (byte_5937CBA & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_21FFC50(&BgmManager_TypeInfo);
    byte_5937CBA = 1;
  }
  if ( v7->fields.fadeinTime > 0.0 )
  {
    this = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmFadePlayer, v4);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      bgmPlayer = v7->fields.bgmPlayer;
      bgmFadePlayer = v7->fields.bgmFadePlayer;
      v7->fields.bgmFadePlayer = bgmPlayer;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.bgmFadePlayer,
        (int32_t)bgmPlayer,
        (System_String_o *)v4,
        v8,
        v9,
        v10,
        v11,
        v12);
      v7->fields.bgmPlayer = bgmFadePlayer;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v7->fields.bgmPlayer,
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
      v30 = v7->fields.bgmPlayer;
      v7->fields.fadeinTime = 0.0;
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
      if ( !byte_593205D )
      {
        sub_21FFC50(&BgmManager_TypeInfo);
        byte_593205D = 1;
      }
      v22 = (CriAtomSource_o *)BgmManager_TypeInfo;
      if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
        v22 = (CriAtomSource_o *)BgmManager_TypeInfo;
      }
      if ( v30 )
      {
        CriAtomSource__set_volume(v30, *((float *)&v22[1].klass->_1.byval_arg.data + 1) * volume, 0);
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
        v25 = BgmManager_TypeInfo;
        v7->fields.fadeBaseVolume = v24->fields._volume;
        if ( !*(&v25->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v25, v21);
        if ( !byte_593205D )
        {
          sub_21FFC50(&BgmManager_TypeInfo);
          byte_593205D = 1;
        }
        v26 = BgmManager_TypeInfo;
        if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
          v26 = BgmManager_TypeInfo;
        }
        static_fields = v26->static_fields;
        fadeBaseVolume = v7->fields.fadeBaseVolume;
        v7->fields.fadeinTime = fadeTime;
        masterVolume = static_fields->masterVolume;
        v7->fields.playTime = -1.0;
        v7->fields.fadeChangeVolume = (float)(masterVolume * volume) - fadeBaseVolume;
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_21FFECC(v22, v21);
  }
  return v23 & 1;
}


bool BgmPlayerBase__CheckPlaying(BgmPlayerBase_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  int32_t status; // w0

  if ( !player )
    sub_21FFECC(this, 0);
  status = CriAtomSource__get_status(player, 0);
  if ( status != 1 )
    LOBYTE(status) = CriAtomSource__get_status(player, 0) == 2;
  return status;
}


bool BgmPlayerBase__FadeoutBgm(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  struct System_String_o *bgmName; // x21
  BgmManager_c *v12; // x0

  if ( (byte_5937CBF & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5937CBF = 1;
  }
  bgmName = this->fields.bgmName;
  if ( bgmName )
  {
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    if ( !byte_59359EA )
    {
      sub_21FFC50(&BgmManager_TypeInfo);
      byte_59359EA = 1;
    }
    v12 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
      v12 = BgmManager_TypeInfo;
    }
    if ( !v12->static_fields->isMute )
      BgmPlayerBase__FadeoutLocal(this, fadeoutTime, method);
    this->fields.bgmName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgmName, 0, v3, v4, v5, v6, v7, v8);
    this->fields.bgmVolume = 0.0;
  }
  return bgmName != 0;
}


void BgmPlayerBase__FadeoutLocal(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  MissionNaviTransitionBoardItem_o *p_bgmPlayer; // x20
  BgmPlayerBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CriAtomSource_o **p_bgmFadePlayer; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  MissionNaviTransitionBoardItem_c *klass; // x1
  MissionNaviTransitionBoardItem_c *v18; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct CriAtomSource_o *bgmPlayer; // x8
  float volume; // s0

  p_bgmPlayer = (MissionNaviTransitionBoardItem_o *)&this->fields.bgmPlayer;
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
        v18 = (MissionNaviTransitionBoardItem_c *)*p_bgmFadePlayer;
        *p_bgmFadePlayer = (struct CriAtomSource_o *)p_bgmPlayer->klass;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.bgmFadePlayer,
          (int32_t)klass,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        p_bgmPlayer->klass = v18;
        sub_21FFBF4(p_bgmPlayer, (int32_t)v18, v19, v20, v21, v22, v23, v24);
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
    sub_21FFECC(v7, v8);
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
  float v14; // s1
  BgmManager_c *v15; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float v17; // s0
  MissionNaviTransitionBoardItem_o *p_bgmFadePlayer; // x23
  __int64 v19; // x1
  long double v20; // q0
  CriAtomSource_o *v21; // x21
  struct CriAtomSource_o **v22; // x8
  float v23; // s0
  float fadeinTime; // s1
  CriAtomSource_o *v25; // x22
  __int64 v26; // x1
  long double v27; // q0
  __int64 v28; // x1
  CriAtomSource_o *v29; // x1
  MissionNaviTransitionBoardItem_c *klass; // x19
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7

  if ( (byte_5937CC0 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937CC0 = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(bgmPlayer, 0, 0) )
  {
    fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedUnscaledDeltaTime(0);
    if ( fixedUnscaledDeltaTime > 0.5 )
      fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedDeltaTime(0);
    v7 = *p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_71;
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
          if ( playTime >= 0.0 )
            v14 = fixedUnscaledDeltaTime + playTime;
          else
            v14 = 0.0;
          this->fields.playTime = v14;
          if ( v14 >= fadeoutTime )
          {
            BgmPlayerBase__StopLocal(this, v5);
            return;
          }
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
          if ( !byte_59359EA )
          {
            sub_21FFC50(&BgmManager_TypeInfo);
            byte_59359EA = 1;
          }
          v15 = BgmManager_TypeInfo;
          if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
            v15 = BgmManager_TypeInfo;
          }
          static_fields = v15->static_fields;
          v7 = *p_bgmPlayer;
          if ( static_fields->isMute )
          {
            if ( v7 )
            {
              v17 = 0.0;
LABEL_70:
              CriAtomSource__set_volume(v7, v17, 0);
              return;
            }
          }
          else if ( v7 )
          {
            v17 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
            goto LABEL_70;
          }
LABEL_71:
          sub_21FFECC(v7, v5);
        }
        if ( this->fields.fadeinTime > 0.0 )
        {
          p_bgmFadePlayer = (MissionNaviTransitionBoardItem_o *)&this->fields.bgmFadePlayer;
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
          if ( v23 >= 0.0 )
            *(float *)&v20 = fixedUnscaledDeltaTime + v23;
          else
            *(float *)&v20 = 0.0;
          this->fields.playTime = *(float *)&v20;
          if ( *(float *)&v20 >= fadeinTime )
          {
            this->fields.fadeinTime = 0.0;
            if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v20 = j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v19);
            v7 = (CriAtomSource_o *)sub_2E05D9C(0, v20);
            *(_QWORD *)&v27 = 0;
            if ( ((unsigned __int8)v7 & 1) == 0 )
            {
              if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
                *(__n128 *)&v27 = j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v5);
              *(float *)&v27 = sub_2918908(0, v27) * this->fields.playVolume;
            }
            if ( !v25 )
              goto LABEL_71;
            CriAtomSource__set_volume(v25, *(float *)&v27, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
            v7 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
            if ( ((unsigned __int8)v7 & 1) != 0 )
            {
              if ( v21 )
              {
                CriAtomSource__Stop(v21, 0);
                v29 = *p_bgmPlayer;
                klass = p_bgmFadePlayer->klass;
                p_bgmFadePlayer->klass = (MissionNaviTransitionBoardItem_c *)*p_bgmPlayer;
                sub_21FFBF4(p_bgmFadePlayer, (int32_t)v29, v31, v32, v33, v34, v35, v36);
                *p_bgmPlayer = (CriAtomSource_o *)klass;
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)p_bgmPlayer,
                  (int32_t)klass,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41,
                  v42);
                return;
              }
              goto LABEL_71;
            }
          }
          else
          {
            if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v20 = j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v19);
            v7 = (CriAtomSource_o *)sub_2E05D9C(0, v20);
            if ( ((unsigned __int8)v7 & 1) == 0 )
            {
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
              v7 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
              if ( ((unsigned __int8)v7 & 1) == 0 )
              {
                if ( v25 )
                {
                  v7 = v25;
                  v17 = this->fields.fadeBaseVolume
                      + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
                  goto LABEL_70;
                }
                goto LABEL_71;
              }
              if ( !v25 )
                goto LABEL_71;
              CriAtomSource__set_volume(
                v25,
                (float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime,
                0);
              if ( !v21 )
                goto LABEL_71;
              v17 = this->fields.fadeBaseVolume
                  * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeinTime));
LABEL_67:
              v7 = v21;
              goto LABEL_70;
            }
            if ( !v25 )
              goto LABEL_71;
            CriAtomSource__set_volume(v25, 0.0, 0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
            v7 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0);
            if ( ((unsigned __int8)v7 & 1) != 0 )
            {
              if ( !v21 )
                goto LABEL_71;
              v17 = 0.0;
              goto LABEL_67;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct CriAtomSource_o *bgmPlayer; // x8
  __int64 v12; // x20
  struct System_String_o *cueName; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct CriAtomSource_o *bgmFadePlayer; // x8
  struct System_String_o *v21; // x1

  if ( (byte_5937CBC & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    byte_5937CBC = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 2);
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)cueName, v5, v6, v7, v8, v9, v10);
  bgmFadePlayer = this->fields.bgmFadePlayer;
  if ( !bgmFadePlayer )
LABEL_9:
    sub_21FFECC(v3, v4);
  if ( (*(_DWORD *)(v12 + 24) & 0xFFFFFFFE) == 0 )
LABEL_10:
    sub_21FFED4(v3);
  v21 = bgmFadePlayer->fields._cueName;
  *(_QWORD *)(v12 + 40) = v21;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v12 + 40), (int32_t)v21, v14, v15, v16, v17, v18, v19);
  return (System_String_array *)v12;
}


void BgmPlayerBase__Initialize(BgmPlayerBase_o *this, const MethodInfo *method)
{
  struct CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v5; // x1
  Il2CppObject *Instance; // x0
  CriAtomSource_o *CriAtomSource; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct CriAtomSource_o *v14; // x20
  __int64 v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  int32_t v22; // w1
  struct System_String_o **p_cueSheet; // x0
  __int64 v24; // x1
  struct CriAtomSource_o **p_bgmFadePlayer; // x20
  UnityEngine_Object_o *bgmFadePlayer; // x21
  CriAtomSource_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct CriAtomSource_o *v34; // x20
  __int64 v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_5937CB8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_5937CB8 = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(bgmPlayer, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CriAtomSource = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, v5);
    *p_bgmPlayer = CriAtomSource;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.bgmPlayer,
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
    v22 = v15;
    v14->fields._cueSheet = (struct System_String_o *)v15;
    p_cueSheet = &v14->fields._cueSheet;
  }
  else
  {
    Instance = (Il2CppObject *)*p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_19;
    CriAtomSource__Stop((CriAtomSource_o *)Instance, 0);
    v22 = 0;
    this->fields.bgmName = 0;
    p_cueSheet = &this->fields.bgmName;
  }
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_cueSheet, v22, v16, v17, v18, v19, v20, v21);
  p_bgmFadePlayer = &this->fields.bgmFadePlayer;
  bgmFadePlayer = (UnityEngine_Object_o *)this->fields.bgmFadePlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  if ( UnityEngine_Object__op_Equality(bgmFadePlayer, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      v27 = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, v5);
      *p_bgmFadePlayer = v27;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.bgmFadePlayer,
        (int32_t)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = *p_bgmFadePlayer;
      if ( v34 )
      {
        v34->fields._androidUseLowLatencyVoicePool = 0;
        v35 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, const MethodInfo *))this->klass->vtable._4_get_CueSheetName.methodPtr)(
                this,
                this->klass->vtable._4_get_CueSheetName.method);
        v34->fields._cueSheet = (struct System_String_o *)v35;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->fields._cueSheet, v35, v36, v37, v38, v39, v40, v41);
        return;
      }
    }
LABEL_19:
    sub_21FFECC(Instance, v5);
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


// local variable allocation has failed, the output may be wrong!
void BgmPlayerBase__PauseBgm(BgmPlayerBase_o *this, bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x21
  struct CriAtomSource_o *v6; // x0
  const MethodInfo *v7; // x2
  CriAtomSource_o *v8; // x1

  if ( (byte_5937CB7 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937CB7 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPause);
  v6 = (struct CriAtomSource_o *)UnityEngine_Object__op_Equality(bgmPlayer, 0, 0);
  if ( ((unsigned __int8)v6 & 1) == 0 )
  {
    v8 = this->fields.bgmPlayer;
    if ( isPause )
    {
      if ( !BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v6, v8, v7) )
        return;
    }
    else
    {
      if ( !v8 )
        goto LABEL_14;
      if ( !CriAtomSource__IsPaused(this->fields.bgmPlayer, 0) )
        return;
    }
    v6 = this->fields.bgmPlayer;
    if ( v6 )
    {
      CriAtomSource__Pause(v6, isPause, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v6, v8);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  BgmManager_c *v20; // x0

  v10 = this;
  if ( (byte_5937CBE & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_21FFC50(&BgmManager_TypeInfo);
    byte_5937CBE = 1;
  }
  if ( !name )
    sub_21FFECC(this, name);
  if ( System_String__Equals_75473208(name, v10->fields.bgmName, 0) )
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.bgmName, (int32_t)name, v12, v13, v14, v15, v16, v17);
    v10->fields.startTime = startTime;
    v10->fields.bgmVolume = volume;
    v10->fields.bgmFadeTime = fadeTime;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v18);
    if ( !byte_59359EA )
    {
      sub_21FFC50(&BgmManager_TypeInfo);
      byte_59359EA = 1;
    }
    v20 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v18);
      v20 = BgmManager_TypeInfo;
    }
    if ( !v20->static_fields->isMute && BgmPlayerBase__PlayLocal(v10, name, volume, fadeTime, 1, v19) )
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  BgmPlayerBase_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct CriAtomSource_o *bgmFadePlayer; // x1
  struct CriAtomSource_o *bgmPlayer; // x8
  float v35; // s0
  struct CriAtomSource_o *v36; // x1
  System_Action_o *v37; // x19
  const MethodInfo *v38; // x3

  if ( (byte_5937CBB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    sub_21FFC50(&Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__);
    sub_21FFC50(&BgmPlayerBase___c__DisplayClass31_0_TypeInfo);
    byte_5937CBB = 1;
  }
  v11 = sub_21FFEBC(BgmPlayerBase___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_12;
  *(_QWORD *)(v11 + 16) = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)name, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 24), (int32_t)this, v20, v21, v22, v23, v24, v25);
  *(float *)(v11 + 40) = volume;
  *(float *)(v11 + 44) = fadeTime;
  *(_BYTE *)(v11 + 48) = loop;
  if ( fadeTime > 0.0 && BgmPlayerBase__CheckPlaying(v26, this->fields.bgmPlayer, (const MethodInfo *)v27) )
  {
    bgmFadePlayer = this->fields.bgmFadePlayer;
    *(_QWORD *)(v11 + 32) = bgmFadePlayer;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)bgmFadePlayer, v27, v28, v29, v30, v31, v32);
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer )
      goto LABEL_12;
    v35 = bgmPlayer->fields._volume;
  }
  else
  {
    v36 = this->fields.bgmPlayer;
    *(_QWORD *)(v11 + 32) = v36;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)v36, v27, v28, v29, v30, v31, v32);
    Instance = this->fields.bgmFadePlayer;
    if ( !Instance )
      goto LABEL_12;
    CriAtomSource__Stop(Instance, 0);
    v35 = 0.0;
  }
  this->fields.fadeBaseVolume = v35;
  v37 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)v11, Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__, 0);
  Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_21FFECC(Instance, v13);
  return BgmManager__PreloadBgm((BgmManager_o *)Instance, *(System_String_o **)(v11 + 16), v37, v38);
}


void BgmPlayerBase__ReflectMasterVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x19
  float bgmVolume; // s8
  BgmManager_c *v5; // x0

  if ( (byte_5937CB9 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5937CB9 = 1;
  }
  if ( this->fields.bgmName && (this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    if ( !byte_593205D )
    {
      sub_21FFC50(&BgmManager_TypeInfo);
      byte_593205D = 1;
    }
    v5 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
      v5 = BgmManager_TypeInfo;
    }
    if ( !bgmPlayer )
      sub_21FFECC(v5, method);
    CriAtomSource__set_volume(bgmPlayer, bgmVolume * v5->static_fields->masterVolume, 0);
  }
}


void BgmPlayerBase__Reset(BgmPlayerBase_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_bgmName; // x19
  struct System_String_o *bgmName; // t1

  BgmPlayerBase__StopLocal(this, method);
  bgmName = this->fields.bgmName;
  p_bgmName = (MissionNaviTransitionBoardItem_o *)&this->fields.bgmName;
  if ( bgmName )
  {
    p_bgmName->klass = 0;
    sub_21FFBF4(p_bgmName, 0, v3, v4, v5, v6, v7, v8);
  }
}


void BgmPlayerBase__SetMute(BgmPlayerBase_o *this, bool isMute, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *bgmName; // x1
  struct System_String_o **p_bgmName; // x20
  float bgmVolume; // s8
  struct System_String_o **p_preloadName; // x21
  struct System_String_o *preloadName; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_String_o *v21; // x1
  const MethodInfo *v22; // x3
  Il2CppMethodPointer methodPtr; // x10
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  p_bgmName = &this->fields.bgmName;
  bgmName = this->fields.bgmName;
  if ( isMute )
  {
    if ( bgmName )
      BgmPlayerBase__StopLocal(this, (const MethodInfo *)bgmName);
  }
  else if ( bgmName )
  {
    bgmVolume = this->fields.bgmVolume;
    p_preloadName = &this->fields.preloadName;
    preloadName = this->fields.preloadName;
    this->fields.preloadName = bgmName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.preloadName,
      (int32_t)bgmName,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.bgmName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_bgmName, 0, v15, v16, v17, v18, v19, v20);
    v21 = *p_preloadName;
    methodPtr = this->klass->vtable._9_PlayBgm.methodPtr;
    v22 = this->klass->vtable._9_PlayBgm.method;
    this->fields.bgmVolume = -1.0;
    ((void (__fastcall *)(BgmPlayerBase_o *, struct System_String_o *, _QWORD, const MethodInfo *, float, double))methodPtr)(
      this,
      v21,
      0,
      v22,
      bgmVolume,
      0.0);
    *p_preloadName = preloadName;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.preloadName,
      (int32_t)preloadName,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
}


// local variable allocation has failed, the output may be wrong!
bool BgmPlayerBase__StopBgm(BgmPlayerBase_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_bgmName; // x0
  struct System_String_o *bgmName; // t1

  bgmName = this->fields.bgmName;
  p_bgmName = &this->fields.bgmName;
  if ( !bgmName && this->fields.fadeoutTime <= 0.0 )
    return 0;
  if ( !keepPlayArgs )
  {
    this->fields.bgmName = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_bgmName, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    this->fields.bgmVolume = 0.0;
  }
  this->fields.startTime = 0;
  this->fields.bgmFadeTime = -1.0;
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
      sub_21FFECC(bgmPlayer, v4);
    CriAtomSource__Stop(bgmPlayer, 0);
  }
  *(_QWORD *)&this->fields.fadeinTime = 0;
}


void BgmPlayerBase__UpdateVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  CriAtomSource_o *bgmPlayer; // x20
  BgmManager_c *v4; // x0

  if ( (byte_5937CB6 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5937CB6 = 1;
  }
  bgmPlayer = this->fields.bgmPlayer;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  if ( !byte_593205D )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593205D = 1;
  }
  v4 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v4 = BgmManager_TypeInfo;
  }
  if ( !bgmPlayer )
    sub_21FFECC(v4, method);
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
  if ( (byte_5937CB3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3027/*"BGM"*/);
    byte_5937CB3 = 1;
  }
  return (System_String_o *)StringLiteral_3027/*"BGM"*/;
}


int32_t BgmPlayerBase__get_PlayTime(BgmPlayerBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x20
  __int64 v4; // x1
  CriAtomSource_o *v5; // x0

  if ( (byte_5937CB4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937CB4 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(bgmPlayer, 0, 0) )
    return 0;
  v5 = this->fields.bgmPlayer;
  if ( !v5 )
    sub_21FFECC(0, v4);
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
  struct BgmManager_StaticFields *static_fields; // x8
  float masterVolume; // s0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  __int64 v30; // x1
  float v31; // s0
  BgmManager_c *v32; // x0

  if ( (byte_5937CBD & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5937CBD = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, player);
  if ( !byte_593205D )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593205D = 1;
  }
  v15 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, player);
    v15 = BgmManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  this->fields.fadeinTime = fadeTime;
  this->fields.fadeoutTime = 0.0;
  masterVolume = static_fields->masterVolume;
  this->fields.playVolume = volume;
  this->fields.playTime = -1.0;
  this->fields.fadeChangeVolume = masterVolume * volume;
  if ( !player )
    sub_21FFECC(v15, player);
  CriAtomSource__Stop(player, 0);
  player->fields._cueSheet = cueSheet;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&player->fields._cueSheet,
    (int32_t)cueSheet,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  player->fields._cueName = cueName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&player->fields._cueName,
    (int32_t)cueName,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v31 = 0.0;
  if ( fadeTime <= 0.0 )
  {
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v30);
    if ( !byte_593205D )
    {
      sub_21FFC50(&BgmManager_TypeInfo);
      byte_593205D = 1;
    }
    v32 = BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v30);
      v32 = BgmManager_TypeInfo;
    }
    v31 = v32->static_fields->masterVolume * volume;
  }
  CriAtomSource__set_volume(player, v31, 0);
  CriAtomSource__set_startTime(player, this->fields.startTime, 0);
  player->fields._loop = loop;
  CriAtomSource__Play(player, 0);
}


void BgmPlayerBase__set_BgmVolume(BgmPlayerBase_o *this, float value, const MethodInfo *method)
{
  this->fields.bgmVolume = value;
  BgmPlayerBase__UpdateVolume(this, method);
}


// local variable allocation has failed, the output may be wrong!
void BgmPlayerBase__set_PlayTime(BgmPlayerBase_o *this, int32_t value, const MethodInfo *method)
{
  UnityEngine_Object_o *bgmPlayer; // x21
  __int64 v6; // x1
  CriAtomSource_o *v7; // x0

  if ( (byte_5937CB5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937CB5 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
  if ( UnityEngine_Object__op_Inequality(bgmPlayer, 0, 0) )
  {
    v7 = this->fields.bgmPlayer;
    if ( !v7 )
      sub_21FFECC(0, v6);
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

  if ( (byte_5937CC1 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_5937CC1 = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BgmManager__IsPreloadSucceeded(Instance, this->fields.name, v5) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      CueName = BgmManager__ExtractCueName(Instance, this->fields.name, v6);
      Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
    sub_21FFECC(Instance, v4);
  }
}
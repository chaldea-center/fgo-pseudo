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
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t bgmPlayer; // x1
  int64_t bgmFadePlayer; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  CriAtomSource_o *v22; // x0
  __int64 v23; // x2
  char v24; // w20
  struct CriAtomSource_o *v25; // x8
  BgmManager_c *v26; // x0
  float fadeBaseVolume; // s1
  float masterVolume; // s0
  CriAtomSource_o *v29; // x21

  v7 = this;
  if ( (byte_4B15834 & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1BCA7E0(&BgmManager_TypeInfo, method, v4);
    byte_4B15834 = 1;
  }
  if ( v7->fields.fadeinTime > 0.0 )
  {
    this = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmFadePlayer, v4);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      bgmPlayer = (int64_t)v7->fields.bgmPlayer;
      bgmFadePlayer = (int64_t)v7->fields.bgmFadePlayer;
      v7->fields.bgmFadePlayer = (struct CriAtomSource_o *)bgmPlayer;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v7->fields.bgmFadePlayer,
        bgmPlayer,
        (int64_t)v4,
        v8,
        v9,
        v10,
        v11,
        v12);
      v7->fields.bgmPlayer = (struct CriAtomSource_o *)bgmFadePlayer;
      sub_1BCA784((PartyOrganizationUtility_o *)&v7->fields.bgmPlayer, bgmFadePlayer, v15, v16, v17, v18, v19, v20);
      v22 = v7->fields.bgmFadePlayer;
      if ( !v22 )
        goto LABEL_27;
      CriAtomSource__Stop(v22, 0LL);
    }
  }
  v22 = (CriAtomSource_o *)BgmPlayerBase__CheckPlaying(this, v7->fields.bgmPlayer, v4);
  v24 = (char)v22;
  if ( ((unsigned __int8)v22 & 1) != 0 )
  {
    if ( fadeTime <= 0.0 )
    {
      v7->fields.fadeinTime = 0.0;
      v29 = v7->fields.bgmPlayer;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
      if ( !byte_4B11950 )
      {
        sub_1BCA7E0(&BgmManager_TypeInfo, v21, v23);
        byte_4B11950 = 1;
      }
      v22 = (CriAtomSource_o *)BgmManager_TypeInfo;
      if ( !BgmManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
        v22 = (CriAtomSource_o *)BgmManager_TypeInfo;
      }
      if ( v29 )
      {
        CriAtomSource__set_volume(v29, *((float *)&v22[1].klass->_1.byval_arg.data + 1) * volume, 0LL);
LABEL_25:
        v7->fields.fadeoutTime = 0.0;
        v7->fields.playVolume = volume;
        return v24 & 1;
      }
    }
    else
    {
      v25 = v7->fields.bgmPlayer;
      if ( v25 )
      {
        v7->fields.fadeBaseVolume = v25->fields._volume;
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
        if ( !byte_4B11950 )
        {
          sub_1BCA7E0(&BgmManager_TypeInfo, v21, v23);
          byte_4B11950 = 1;
        }
        v26 = BgmManager_TypeInfo;
        if ( !BgmManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v21);
          v26 = BgmManager_TypeInfo;
        }
        fadeBaseVolume = v7->fields.fadeBaseVolume;
        masterVolume = v26->static_fields->masterVolume;
        v7->fields.fadeinTime = fadeTime;
        v7->fields.playTime = -1.0;
        v7->fields.fadeChangeVolume = (float)(masterVolume * volume) - fadeBaseVolume;
        goto LABEL_25;
      }
    }
LABEL_27:
    sub_1BCAA3C(v22, v21);
  }
  return v24 & 1;
}


bool __fastcall BgmPlayerBase__CheckPlaying(BgmPlayerBase_o *this, CriAtomSource_o *player, const MethodInfo *method)
{
  int32_t status; // w0

  if ( !player )
    sub_1BCAA3C(this, 0LL);
  status = CriAtomSource__get_status(player, 0LL);
  if ( status != 1 )
    LOBYTE(status) = CriAtomSource__get_status(player, 0LL) == 2;
  return status;
}


bool __fastcall BgmPlayerBase__FadeoutBgm(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  struct System_String_o *bgmName; // x21
  BgmManager_c *v12; // x0

  if ( (byte_4B15839 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v3);
    byte_4B15839 = 1;
  }
  bgmName = this->fields.bgmName;
  if ( bgmName )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    if ( !byte_4B13623 )
    {
      sub_1BCA7E0(&BgmManager_TypeInfo, method, v3);
      byte_4B13623 = 1;
    }
    v12 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
      v12 = BgmManager_TypeInfo;
    }
    if ( !v12->static_fields->isMute )
      BgmPlayerBase__FadeoutLocal(this, fadeoutTime, method);
    this->fields.bgmName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmName, 0LL, v3, v4, v5, v6, v7, v8);
    this->fields.bgmVolume = 0.0;
  }
  return bgmName != 0LL;
}


void __fastcall BgmPlayerBase__FadeoutLocal(BgmPlayerBase_o *this, float fadeoutTime, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  PartyOrganizationUtility_o *p_bgmPlayer; // x20
  BgmPlayerBase_o *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct CriAtomSource_o **p_bgmFadePlayer; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t klass; // x1
  int64_t v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  float volume; // s0

  p_bgmPlayer = (PartyOrganizationUtility_o *)&this->fields.bgmPlayer;
  v7 = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(this, this->fields.bgmPlayer, v3);
  if ( ((unsigned __int8)v7 & 1) != 0 && this->fields.fadeoutTime <= 0.0 )
  {
    if ( this->fields.fadeinTime > 0.0 )
    {
      p_bgmFadePlayer = &this->fields.bgmFadePlayer;
      v7 = (BgmPlayerBase_o *)BgmPlayerBase__CheckPlaying(v7, this->fields.bgmFadePlayer, v9);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        klass = (int64_t)p_bgmPlayer->klass;
        v18 = (int64_t)*p_bgmFadePlayer;
        *p_bgmFadePlayer = (struct CriAtomSource_o *)p_bgmPlayer->klass;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmFadePlayer, klass, v11, v12, v13, v14, v15, v16);
        p_bgmPlayer->klass = (PartyOrganizationUtility_c *)v18;
        sub_1BCA784(p_bgmPlayer, v18, v19, v20, v21, v22, v23, v24);
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
    sub_1BCAA3C(v7, v8);
  }
}


void __fastcall BgmPlayerBase__FixedUpdate(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  const MethodInfo *v8; // x1
  float fixedUnscaledDeltaTime; // s8
  CriAtomSource_o *v10; // x0
  _BOOL8 IsPaused; // x0
  const MethodInfo *v12; // x2
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  float fadeoutTime; // s0
  float playTime; // s1
  float v17; // s2
  bool v18; // nf
  float v19; // s1
  BgmManager_c *v20; // x0
  struct BgmManager_StaticFields *static_fields; // x8
  float v22; // s0
  PartyOrganizationUtility_o *p_bgmFadePlayer; // x23
  __int64 v24; // x2
  CriAtomSource_o *v25; // x21
  struct CriAtomSource_o **v26; // x8
  float v27; // s0
  float fadeinTime; // s1
  CriAtomSource_o *v29; // x22
  float v30; // s2
  float v31; // s0
  __int64 v32; // x1
  float v33; // s0
  __int64 v34; // x1
  CriAtomSource_o *v35; // x1
  int64_t klass; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7

  if ( (byte_4B1583A & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B1583A = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedUnscaledDeltaTime(0LL);
    if ( fixedUnscaledDeltaTime > 0.5 )
      fixedUnscaledDeltaTime = UnityEngine_Time__get_fixedDeltaTime(0LL);
    v10 = *p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_80;
    IsPaused = CriAtomSource__IsPaused(v10, 0LL);
    if ( !IsPaused )
    {
      v13 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)IsPaused, *p_bgmPlayer, v12);
      if ( v13
        || this->fields.fadeinTime > 0.0
        && (v13 = BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v13, this->fields.bgmFadePlayer, v14)) )
      {
        fadeoutTime = this->fields.fadeoutTime;
        if ( fadeoutTime > 0.0 )
        {
          playTime = this->fields.playTime;
          v17 = fixedUnscaledDeltaTime + playTime;
          v18 = playTime < 0.0;
          v19 = 0.0;
          if ( !v18 )
            v19 = v17;
          this->fields.playTime = v19;
          if ( v19 >= fadeoutTime )
          {
            BgmPlayerBase__StopLocal(this, v8);
            return;
          }
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
          if ( !byte_4B13623 )
          {
            sub_1BCA7E0(&BgmManager_TypeInfo, v8, v14);
            byte_4B13623 = 1;
          }
          v20 = BgmManager_TypeInfo;
          if ( !BgmManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
            v20 = BgmManager_TypeInfo;
          }
          static_fields = v20->static_fields;
          v10 = *p_bgmPlayer;
          if ( static_fields->isMute )
          {
            if ( v10 )
            {
              v22 = 0.0;
LABEL_79:
              CriAtomSource__set_volume(v10, v22, 0LL);
              return;
            }
          }
          else if ( v10 )
          {
            v22 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
            goto LABEL_79;
          }
LABEL_80:
          sub_1BCAA3C(v10, v8);
        }
        if ( this->fields.fadeinTime > 0.0 )
        {
          p_bgmFadePlayer = (PartyOrganizationUtility_o *)&this->fields.bgmFadePlayer;
          if ( BgmPlayerBase__CheckPlaying((BgmPlayerBase_o *)v13, this->fields.bgmFadePlayer, v14) )
          {
            v25 = *p_bgmPlayer;
            v26 = &this->fields.bgmFadePlayer;
          }
          else
          {
            v25 = 0LL;
            v26 = &this->fields.bgmPlayer;
          }
          v27 = this->fields.playTime;
          fadeinTime = this->fields.fadeinTime;
          v29 = *v26;
          v30 = fixedUnscaledDeltaTime + v27;
          v18 = v27 < 0.0;
          v31 = 0.0;
          if ( !v18 )
            v31 = v30;
          this->fields.playTime = v31;
          if ( v31 >= fadeinTime )
          {
            this->fields.fadeinTime = 0.0;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
            if ( !byte_4B13623 )
            {
              sub_1BCA7E0(&BgmManager_TypeInfo, v8, v24);
              byte_4B13623 = 1;
            }
            v10 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
              v10 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            v33 = 0.0;
            if ( !LOBYTE(v10[1].klass->_1.byval_arg.data) )
            {
              if ( !*(_DWORD *)&v10[1].fields._guid_k__BackingField.fields._d )
                j_il2cpp_runtime_class_init_0(v10, v8);
              if ( !byte_4B11950 )
              {
                sub_1BCA7E0(&BgmManager_TypeInfo, v8, v24);
                byte_4B11950 = 1;
              }
              v10 = (CriAtomSource_o *)BgmManager_TypeInfo;
              if ( !BgmManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
                v10 = (CriAtomSource_o *)BgmManager_TypeInfo;
              }
              v33 = *((float *)&v10[1].klass->_1.byval_arg.data + 1) * this->fields.playVolume;
            }
            if ( !v29 )
              goto LABEL_80;
            CriAtomSource__set_volume(v29, v33, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
            v10 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
            if ( ((unsigned __int8)v10 & 1) != 0 )
            {
              if ( v25 )
              {
                CriAtomSource__Stop(v25, 0LL);
                v35 = *p_bgmPlayer;
                klass = (int64_t)p_bgmFadePlayer->klass;
                p_bgmFadePlayer->klass = (PartyOrganizationUtility_c *)*p_bgmPlayer;
                sub_1BCA784(p_bgmFadePlayer, (int64_t)v35, v37, v38, v39, v40, v41, v42);
                *p_bgmPlayer = (CriAtomSource_o *)klass;
                sub_1BCA784((PartyOrganizationUtility_o *)p_bgmPlayer, klass, v43, v44, v45, v46, v47, v48);
                return;
              }
              goto LABEL_80;
            }
          }
          else
          {
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
            if ( !byte_4B13623 )
            {
              sub_1BCA7E0(&BgmManager_TypeInfo, v8, v24);
              byte_4B13623 = 1;
            }
            v10 = (CriAtomSource_o *)BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
              v10 = (CriAtomSource_o *)BgmManager_TypeInfo;
            }
            if ( !LOBYTE(v10[1].klass->_1.byval_arg.data) )
            {
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
              v10 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
              if ( ((unsigned __int8)v10 & 1) == 0 )
              {
                if ( v29 )
                {
                  v10 = v29;
                  v22 = this->fields.fadeBaseVolume
                      + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
                  goto LABEL_79;
                }
                goto LABEL_80;
              }
              if ( !v29 )
                goto LABEL_80;
              CriAtomSource__set_volume(
                v29,
                (float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime,
                0LL);
              if ( !v25 )
                goto LABEL_80;
              v22 = this->fields.fadeBaseVolume
                  * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeinTime));
LABEL_76:
              v10 = v25;
              goto LABEL_79;
            }
            if ( !v29 )
              goto LABEL_80;
            CriAtomSource__set_volume(v29, 0.0, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
            v10 = (CriAtomSource_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL);
            if ( ((unsigned __int8)v10 & 1) != 0 )
            {
              if ( !v25 )
                goto LABEL_80;
              v22 = 0.0;
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
  __int64 v2; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct CriAtomSource_o *bgmPlayer; // x8
  __int64 v13; // x20
  int64_t cueName; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct CriAtomSource_o *bgmFadePlayer; // x8
  int64_t v22; // x1

  if ( (byte_4B15836 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    byte_4B15836 = 1;
  }
  v4 = sub_1BCA888(string___TypeInfo, 2LL);
  bgmPlayer = this->fields.bgmPlayer;
  if ( !bgmPlayer )
    goto LABEL_9;
  v13 = v4;
  if ( !v4 )
    goto LABEL_9;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_10;
  cueName = (int64_t)bgmPlayer->fields._cueName;
  *(_QWORD *)(v4 + 32) = cueName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v4 + 32), cueName, v6, v7, v8, v9, v10, v11);
  bgmFadePlayer = this->fields.bgmFadePlayer;
  if ( !bgmFadePlayer )
LABEL_9:
    sub_1BCAA3C(v4, v5);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
LABEL_10:
    sub_1BCAA44(v4, v5);
  v22 = (int64_t)bgmFadePlayer->fields._cueName;
  *(_QWORD *)(v13 + 40) = v22;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 40), v22, v15, v16, v17, v18, v19, v20);
  return (System_String_array *)v13;
}


void __fastcall BgmPlayerBase__Initialize(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct CriAtomSource_o **p_bgmPlayer; // x20
  UnityEngine_Object_o *bgmPlayer; // x21
  __int64 v8; // x1
  Il2CppObject *Instance; // x0
  CriAtomSource_o *CriAtomSource; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct CriAtomSource_o *v17; // x20
  __int64 v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  struct System_String_o **p_cueSheet; // x0
  __int64 v27; // x1
  struct CriAtomSource_o **p_bgmFadePlayer; // x20
  UnityEngine_Object_o *bgmFadePlayer; // x21
  CriAtomSource_o *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct CriAtomSource_o *v37; // x20
  int64_t v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  if ( (byte_4B15832 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5);
    byte_4B15832 = 1;
  }
  p_bgmPlayer = &this->fields.bgmPlayer;
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(bgmPlayer, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
      goto LABEL_19;
    CriAtomSource = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, 0LL);
    *p_bgmPlayer = CriAtomSource;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.bgmPlayer,
      (int64_t)CriAtomSource,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v17 = *p_bgmPlayer;
    if ( !v17 )
      goto LABEL_19;
    v17->fields._androidUseLowLatencyVoicePool = 0;
    v18 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
            this,
            this->klass->vtable._5_Initialize.methodPtr);
    v17->fields._cueSheet = (struct System_String_o *)v18;
    v25 = v18;
    p_cueSheet = &v17->fields._cueSheet;
  }
  else
  {
    Instance = (Il2CppObject *)*p_bgmPlayer;
    if ( !*p_bgmPlayer )
      goto LABEL_19;
    CriAtomSource__Stop((CriAtomSource_o *)Instance, 0LL);
    this->fields.bgmName = 0LL;
    p_cueSheet = &this->fields.bgmName;
    v25 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_cueSheet, v25, v19, v20, v21, v22, v23, v24);
  p_bgmFadePlayer = &this->fields.bgmFadePlayer;
  bgmFadePlayer = (UnityEngine_Object_o *)this->fields.bgmFadePlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
  if ( UnityEngine_Object__op_Equality(bgmFadePlayer, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      v30 = BgmManager__GenerateCriAtomSource((BgmManager_o *)Instance, 0LL);
      *p_bgmFadePlayer = v30;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmFadePlayer, (int64_t)v30, v31, v32, v33, v34, v35, v36);
      v37 = *p_bgmFadePlayer;
      if ( v37 )
      {
        v37->fields._androidUseLowLatencyVoicePool = 0;
        v38 = ((__int64 (__fastcall *)(BgmPlayerBase_o *, Il2CppMethodPointer))this->klass->vtable._4_get_CueSheetName.method)(
                this,
                this->klass->vtable._5_Initialize.methodPtr);
        v37->fields._cueSheet = (struct System_String_o *)v38;
        sub_1BCA784((PartyOrganizationUtility_o *)&v37->fields._cueSheet, v38, v39, v40, v41, v42, v43, v44);
        return;
      }
    }
LABEL_19:
    sub_1BCAA3C(Instance, v8);
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

  if ( (byte_4B15831 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, isPause, method);
    byte_4B15831 = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPause);
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
        sub_1BCAA3C(v6, v8);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  __int64 v18; // x1
  __int64 v19; // x2
  const MethodInfo *v20; // x3
  BgmManager_c *v21; // x0

  v10 = this;
  if ( (byte_4B15838 & 1) == 0 )
  {
    this = (BgmPlayerBase_o *)sub_1BCA7E0(&BgmManager_TypeInfo, name, startTime);
    byte_4B15838 = 1;
  }
  if ( !name )
    sub_1BCAA3C(this, name);
  if ( System_String__Equals_62409536(name, v10->fields.bgmName, 0LL) )
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
    sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.bgmName, (int64_t)name, v12, v13, v14, v15, v16, v17);
    v10->fields.startTime = startTime;
    v10->fields.bgmVolume = volume;
    v10->fields.bgmFadeTime = fadeTime;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v18);
    if ( !byte_4B13623 )
    {
      sub_1BCA7E0(&BgmManager_TypeInfo, v18, v19);
      byte_4B13623 = 1;
    }
    v21 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v18);
      v21 = BgmManager_TypeInfo;
    }
    if ( !v21->static_fields->isMute && BgmPlayerBase__PlayLocal(v10, name, volume, fadeTime, 1, v20) )
      v10->fields.bgmFadeTime = 0.0;
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  CriAtomSource_o *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  BgmPlayerBase_o *v32; // x0
  const MethodInfo *v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct CriAtomSource_o *bgmFadePlayer; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  struct CriAtomSource_o *bgmPlayer; // x8
  float v43; // s0
  struct CriAtomSource_o *v44; // x1
  System_Action_o *v45; // x19

  if ( (byte_4B15835 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, name, loop);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__, v13, v14);
    sub_1BCA7E0(&BgmPlayerBase___c__DisplayClass31_0_TypeInfo, v15, v16);
    byte_4B15835 = 1;
  }
  v17 = sub_1BCAA2C(BgmPlayerBase___c__DisplayClass31_0_TypeInfo, name, loop, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_12;
  *(_QWORD *)(v17 + 16) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)name, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)this, v26, v27, v28, v29, v30, v31);
  *(float *)(v17 + 40) = volume;
  *(float *)(v17 + 44) = fadeTime;
  *(_BYTE *)(v17 + 48) = loop;
  if ( fadeTime > 0.0 && BgmPlayerBase__CheckPlaying(v32, this->fields.bgmPlayer, v33) )
  {
    bgmFadePlayer = this->fields.bgmFadePlayer;
    *(_QWORD *)(v17 + 32) = bgmFadePlayer;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)bgmFadePlayer, (int64_t)v33, v34, v35, v36, v37, v38);
    bgmPlayer = this->fields.bgmPlayer;
    if ( !bgmPlayer )
      goto LABEL_12;
    v43 = bgmPlayer->fields._volume;
  }
  else
  {
    v44 = this->fields.bgmPlayer;
    *(_QWORD *)(v17 + 32) = v44;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)v44, (int64_t)v33, v34, v35, v36, v37, v38);
    Instance = this->fields.bgmFadePlayer;
    if ( !Instance )
      goto LABEL_12;
    CriAtomSource__Stop(Instance, 0LL);
    v43 = 0.0;
  }
  this->fields.fadeBaseVolume = v43;
  v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v40, v41);
  System_Action___ctor(v45, (Il2CppObject *)v17, Method_BgmPlayerBase___c__DisplayClass31_0__PlayLocal_b__0__, 0LL);
  Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
LABEL_12:
    sub_1BCAA3C(Instance, v19);
  return BgmManager__PreloadBgm((BgmManager_o *)Instance, *(System_String_o **)(v17 + 16), v45, 0LL);
}


void __fastcall BgmPlayerBase__ReflectMasterVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CriAtomSource_o *bgmPlayer; // x19
  float bgmVolume; // s8
  BgmManager_c *v6; // x0

  if ( (byte_4B15833 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B15833 = 1;
  }
  if ( this->fields.bgmName && (this->fields.fadeinTime == 0.0 || this->fields.fadeoutTime == 0.0) )
  {
    bgmPlayer = this->fields.bgmPlayer;
    bgmVolume = this->fields.bgmVolume;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    if ( !byte_4B11950 )
    {
      sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
      byte_4B11950 = 1;
    }
    v6 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
      v6 = BgmManager_TypeInfo;
    }
    if ( !bgmPlayer )
      sub_1BCAA3C(v6, method);
    CriAtomSource__set_volume(bgmPlayer, bgmVolume * v6->static_fields->masterVolume, 0LL);
  }
}


void __fastcall BgmPlayerBase__Reset(BgmPlayerBase_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_bgmName; // x19
  struct System_String_o *bgmName; // t1

  BgmPlayerBase__StopLocal(this, method);
  bgmName = this->fields.bgmName;
  p_bgmName = (PartyOrganizationUtility_o *)&this->fields.bgmName;
  if ( bgmName )
  {
    p_bgmName->klass = 0LL;
    sub_1BCA784(p_bgmName, 0LL, v3, v4, v5, v6, v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BgmPlayerBase__SetMute(BgmPlayerBase_o *this, bool isMute, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  long double v8; // q8
  struct System_String_o *bgmName; // x8
  struct System_String_o **p_bgmName; // x20
  struct System_String_o **p_preloadName; // x21
  struct System_String_o *preloadName; // x22
  struct System_String_o *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BgmPlayerBase_c *klass; // x8
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.preloadName,
      (int64_t)v14,
      (int64_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.bgmName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_bgmName, 0LL, v15, v16, v17, v18, v19, v20);
    klass = this->klass;
    this->fields.bgmVolume = -1.0;
    ((void (__fastcall *)(BgmPlayerBase_o *, struct System_String_o *, _QWORD, Il2CppMethodPointer, long double, float))klass->vtable._9_PlayBgm.method)(
      this,
      *p_preloadName,
      0LL,
      klass->vtable._10_FadeoutBgm.methodPtr,
      v8,
      0.0);
    *p_preloadName = preloadName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.preloadName,
      (int64_t)preloadName,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BgmPlayerBase__StopBgm(BgmPlayerBase_o *this, bool keepPlayArgs, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_bgmName; // x0
  struct System_String_o *bgmName; // t1

  bgmName = this->fields.bgmName;
  p_bgmName = &this->fields.bgmName;
  if ( !bgmName && this->fields.fadeoutTime <= 0.0 )
    return 0;
  if ( !keepPlayArgs )
  {
    this->fields.bgmName = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_bgmName, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
      sub_1BCAA3C(bgmPlayer, v4);
    CriAtomSource__Stop(bgmPlayer, 0LL);
  }
  *(_QWORD *)&this->fields.fadeinTime = 0LL;
}


void __fastcall BgmPlayerBase__UpdateVolume(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CriAtomSource_o *bgmPlayer; // x20
  BgmManager_c *v5; // x0

  if ( (byte_4B15830 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B15830 = 1;
  }
  bgmPlayer = this->fields.bgmPlayer;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  if ( !byte_4B11950 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, method, v2);
    byte_4B11950 = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v5 = BgmManager_TypeInfo;
  }
  if ( !bgmPlayer )
    sub_1BCAA3C(v5, method);
  CriAtomSource__set_volume(bgmPlayer, this->fields.bgmVolume * v5->static_fields->masterVolume, 0LL);
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
  __int64 v2; // x2

  if ( (byte_4B1582D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3036/*"BGM"*/, method, v2);
    byte_4B1582D = 1;
  }
  return (System_String_o *)StringLiteral_3036/*"BGM"*/;
}


int32_t __fastcall BgmPlayerBase__get_PlayTime(BgmPlayerBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *bgmPlayer; // x20
  __int64 v5; // x1
  CriAtomSource_o *v6; // x0

  if ( (byte_4B1582E & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1582E = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
    return 0;
  v6 = this->fields.bgmPlayer;
  if ( !v6 )
    sub_1BCAA3C(0LL, v5);
  return CriAtomSource__get_time(v6, 0LL);
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
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  float v31; // s0
  BgmManager_c *v32; // x0

  if ( (byte_4B15837 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, player, cueSheet);
    byte_4B15837 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, player);
  if ( !byte_4B11950 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, player, cueSheet);
    byte_4B11950 = 1;
  }
  v15 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, player);
    v15 = BgmManager_TypeInfo;
  }
  masterVolume = v15->static_fields->masterVolume;
  this->fields.fadeinTime = fadeTime;
  this->fields.fadeoutTime = 0.0;
  this->fields.playVolume = volume;
  this->fields.fadeChangeVolume = masterVolume * volume;
  this->fields.playTime = -1.0;
  if ( !player )
    sub_1BCAA3C(v15, player);
  CriAtomSource__Stop(player, 0LL);
  player->fields._cueSheet = cueSheet;
  sub_1BCA784((PartyOrganizationUtility_o *)&player->fields._cueSheet, (int64_t)cueSheet, v17, v18, v19, v20, v21, v22);
  player->fields._cueName = cueName;
  sub_1BCA784((PartyOrganizationUtility_o *)&player->fields._cueName, (int64_t)cueName, v23, v24, v25, v26, v27, v28);
  v31 = 0.0;
  if ( fadeTime <= 0.0 )
  {
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v29);
    if ( !byte_4B11950 )
    {
      sub_1BCA7E0(&BgmManager_TypeInfo, v29, v30);
      byte_4B11950 = 1;
    }
    v32 = BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v29);
      v32 = BgmManager_TypeInfo;
    }
    v31 = v32->static_fields->masterVolume * volume;
  }
  CriAtomSource__set_volume(player, v31, 0LL);
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

  if ( (byte_4B1582F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&value, method);
    byte_4B1582F = 1;
  }
  bgmPlayer = (UnityEngine_Object_o *)this->fields.bgmPlayer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&value);
  if ( UnityEngine_Object__op_Inequality(bgmPlayer, 0LL, 0LL) )
  {
    v7 = this->fields.bgmPlayer;
    if ( !v7 )
      sub_1BCAA3C(0LL, v6);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BgmManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_o *CueName; // x20
  const MethodInfo *v9; // x5
  BgmPlayerBase_o *_4__this; // x8

  if ( (byte_4B1583B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, v4, v5);
    byte_4B1583B = 1;
  }
  Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  if ( BgmManager__IsPreloadSucceeded(Instance, this->fields.name, 0LL) )
  {
    Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( Instance )
    {
      CueName = BgmManager__ExtractCueName(Instance, this->fields.name, 0LL);
      Instance = (BgmManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
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
            v9);
          return;
        }
      }
    }
LABEL_10:
    sub_1BCAA3C(Instance, v7);
  }
}
void SePlayer___ctor(
        SePlayer_o *this,
        int32_t num,
        int32_t type,
        int32_t assetType,
        System_String_o *pathName,
        System_String_o *name,
        float volume,
        bool isLoop,
        float fadeinTime,
        System_Action_o *callbackFunc,
        bool notOverwrite,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Action_o **p_callbackFunc; // x24
  System_Delegate_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Delegate_o *v28; // x8
  System_Action_c *v29; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v31; // x1
  float BaseVolume; // s0
  struct System_String_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  float PreDelayTime; // s0
  const MethodInfo *v37; // x3

  if ( (byte_4C56710 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C56710 = 1;
  }
  this->fields.volume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.seType = type;
  this->fields.playNum = num;
  this->fields.objName = name;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.objName, (int32_t)name, v22, v23);
  p_callbackFunc = &this->fields.callbackFunc;
  v25 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v28 = v25;
  if ( !v25 )
    goto LABEL_7;
  v29 = System_Action_TypeInfo;
  if ( (System_Action_c *)v25->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v25, (System_Action_c *)v25->klass != v29) )
  {
    sub_1C3EA80(v25);
LABEL_7:
    *p_callbackFunc = (struct System_Action_o *)v28;
  }
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)v28, v26, v27);
  BaseVolume = 0.0;
  this->fields.volume = volume;
  this->fields.fadeinTime = fadeinTime;
  this->fields.isLoop = isLoop;
  this->fields.isStop = 0;
  *(_QWORD *)&this->fields.fadeoutTime = 0;
  this->fields.changePitchRequest = 0;
  *(_WORD *)&this->fields.isLoading = 256;
  if ( fadeinTime <= 0.0 )
    BaseVolume = SePlayer__GetBaseVolume(this, v31);
  this->fields.fadeBaseVolume = BaseVolume;
  if ( !pathName )
    goto LABEL_15;
  v33 = System_String__Replace(pathName, 0x2Fu, 0x5Fu, 0);
  this->fields.cueSheetName = v33;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.cueSheetName, (int32_t)v33, v34, v35);
  PreDelayTime = 0.0;
  this->fields.notOverwrite = notOverwrite;
  if ( !ignorePreDelay )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( Instance )
    {
      PreDelayTime = SeManager__GetPreDelayTime((SeManager_o *)Instance, this->fields.cueSheetName, name, v37);
      goto LABEL_14;
    }
LABEL_15:
    sub_1C3E7C0(Instance, v31);
  }
LABEL_14:
  this->fields.preDelayTime = PreDelayTime;
}


void SePlayer__Callback(SePlayer_o *this, const MethodInfo *method)
{
  struct System_Action_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  SePlayer__Destroy(this, method);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


bool SePlayer__ChangeVolume(SePlayer_o *this, float volume, float fadeTime, const MethodInfo *method)
{
  UnityEngine_Object_o *v8; // x20
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  struct CriAtomSource_o *v11; // x8
  float v12; // s0
  float fadeBaseVolume; // s1
  UnityEngine_Object_o *source; // x20
  const MethodInfo *v15; // x1
  CriAtomSource_o *v16; // x20
  float BaseVolume; // s0

  if ( (byte_4C56714 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C56714 = 1;
  }
  if ( this->fields.isStop || this->fields.fadeoutTime > 0.0 )
    return 0;
  this->fields.volume = volume;
  if ( fadeTime <= 0.0 )
  {
    this->fields.fadeinTime = 0.0;
    source = (UnityEngine_Object_o *)this->fields.source;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(source, 0, 0) )
    {
      this->fields.fadeBaseVolume = SePlayer__GetBaseVolume(this, v15);
      return 1;
    }
    v16 = this->fields.source;
    BaseVolume = SePlayer__GetBaseVolume(this, v15);
    if ( v16 )
    {
      CriAtomSource__set_volume(v16, BaseVolume, 0);
      return 1;
    }
LABEL_19:
    sub_1C3E7C0(v9, v10);
  }
  this->fields.fadeinTime = fadeTime;
  v8 = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(v8, 0, 0);
  if ( !v9 )
    return 1;
  v11 = this->fields.source;
  if ( !v11 )
    goto LABEL_19;
  this->fields.fadeBaseVolume = v11->fields._volume;
  v12 = SePlayer__GetBaseVolume(this, v10);
  fadeBaseVolume = this->fields.fadeBaseVolume;
  this->fields.playTime = -1.0;
  this->fields.fadeChangeVolume = v12 - fadeBaseVolume;
  return 1;
}


void SePlayer__Destroy(SePlayer_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CriAtomSource_o **p_source; // x20
  UnityEngine_Object_o *source; // x21
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C56711 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C56711 = 1;
  }
  this->fields.callbackFunc = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, v2, v3);
  p_source = &this->fields.source;
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
  {
    if ( !*p_source )
      sub_1C3E7C0(0, v7);
    CriAtomSource__Stop(*p_source, 0);
    *p_source = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.source, 0, v8, v9);
  }
  *(_DWORD *)&this->fields.isStop = 1;
}


float SePlayer__GetBaseVolume(SePlayer_o *this, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  float result; // s0
  int32_t seType; // w21
  float volume; // s8
  SeManager_c *v7; // x0
  float masterVoiceVolume; // s0
  SeManager_c *v9; // x0

  if ( (byte_4C5670F & 1) == 0 )
  {
    sub_1C3E564(&SeManager_TypeInfo);
    byte_4C5670F = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4C5679D )
  {
    sub_1C3E564(&SeManager_TypeInfo);
    byte_4C5679D = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  result = 0.0;
  if ( !v3->static_fields->isMute )
  {
    seType = this->fields.seType;
    volume = this->fields.volume;
    if ( !v3->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v3);
    if ( seType == 1 )
    {
      if ( !byte_4C5679E )
      {
        sub_1C3E564(&SeManager_TypeInfo);
        byte_4C5679E = 1;
      }
      v7 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v7 = SeManager_TypeInfo;
      }
      masterVoiceVolume = v7->static_fields->masterVoiceVolume;
    }
    else
    {
      if ( !byte_4C5679F )
      {
        sub_1C3E564(&SeManager_TypeInfo);
        byte_4C5679F = 1;
      }
      v9 = SeManager_TypeInfo;
      if ( !SeManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
        v9 = SeManager_TypeInfo;
      }
      masterVoiceVolume = v9->static_fields->masterVolume;
    }
    return volume * masterVoiceVolume;
  }
  return result;
}


void SePlayer__MuteSe(SePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x20
  const MethodInfo *v4; // x1
  CriAtomSource_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  float BaseVolume; // s0

  if ( (byte_4C56715 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C56715 = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
  {
    v5 = this->fields.source;
    BaseVolume = SePlayer__GetBaseVolume(this, v4);
    if ( !v5 )
      sub_1C3E7C0(v6, v7);
    CriAtomSource__set_volume(v5, BaseVolume, 0);
  }
}


void SePlayer__RemoveCallback(SePlayer_o *this, System_Action_o *callbackFunc, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x19
  System_Delegate_o *v6; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Action_c *v10; // x1

  if ( (byte_4C56712 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    byte_4C56712 = 1;
  }
  if ( callbackFunc )
  {
    v6 = (System_Delegate_o *)this->fields.callbackFunc;
    p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
    v7 = System_Delegate__Remove(v6, (System_Delegate_o *)callbackFunc, 0);
    if ( v7 )
    {
      v10 = System_Action_TypeInfo;
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
        || (p_callbackFunc->klass = (CGThumbnailListItem_c *)v7, (System_Action_c *)v7->klass != v10) )
      {
        sub_1C3EA80(v7);
        return;
      }
    }
    else
    {
      p_callbackFunc->klass = 0;
    }
    sub_1C3E508(p_callbackFunc, (int32_t)v7, v8, v9);
  }
}


void SePlayer__SetPause(SePlayer_o *this, bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x21
  __int64 v6; // x1
  CriAtomSource_o *v7; // x0

  if ( (byte_4C5670E & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5670E = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(source, 0, 0) )
  {
    v7 = this->fields.source;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    CriAtomSource__Pause(v7, isPause, 0);
  }
}


void SePlayer__StopSe(SePlayer_o *this, float fadeoutTime, const MethodInfo *method)
{
  UnityEngine_Object_o *v5; // x20
  CriAtomSource_o *Instance; // x0
  __int64 v7; // x1
  struct CriAtomSource_o *v8; // x8
  struct CriAtomSource_o **p_source; // x20
  UnityEngine_Object_o *source; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4C56713 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4C56713 = 1;
  }
  if ( !this->fields.isStop && (fadeoutTime <= 0.0 || this->fields.fadeoutTime <= 0.0) )
  {
    if ( fadeoutTime <= 0.0 )
    {
      p_source = &this->fields.source;
      source = (UnityEngine_Object_o *)this->fields.source;
      *(_WORD *)&this->fields.isStop = 1;
      this->fields.fadeinTime = 0.0;
      this->fields.fadeoutTime = 0.0;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
      {
        Instance = *p_source;
        if ( !*p_source )
          goto LABEL_21;
        CriAtomSource__Stop(Instance, 0);
        *p_source = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.source, 0, v11, v12);
      }
      Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
      if ( Instance )
      {
        SeManager__ReleaseAudioSource((SeManager_o *)Instance, this, v13);
        return;
      }
    }
    else
    {
      this->fields.fadeoutTime = fadeoutTime;
      this->fields.fadeinTime = 0.0;
      v5 = (UnityEngine_Object_o *)this->fields.source;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (CriAtomSource_o *)UnityEngine_Object__op_Inequality(v5, 0, 0);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_12;
      v8 = this->fields.source;
      if ( v8 )
      {
        this->fields.fadeBaseVolume = v8->fields._volume;
LABEL_12:
        this->fields.playTime = -1.0;
        return;
      }
    }
LABEL_21:
    sub_1C3E7C0(Instance, v7);
  }
}


bool SePlayer__Update(SePlayer_o *this, float delta, const MethodInfo *method)
{
  int32_t status; // w0
  struct CriAtomSource_o **p_source; // x19
  UnityEngine_Object_o *source; // x21
  const MethodInfo *v8; // x1
  __int64 Instance; // x0
  const MethodInfo *v10; // x5
  struct CriAtomSource_o *AudioSource_41547360; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_String_o *cueSheetName; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_String_o *objName; // x1
  float fadeoutTime; // s0
  float playTime; // s1
  float v23; // s2
  bool v24; // nf
  float v25; // s1
  SeManager_c *v26; // x0
  struct SeManager_StaticFields *static_fields; // x8
  float v28; // s0
  float fadeinTime; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s1
  SeManager_c *v33; // x0
  struct SeManager_StaticFields *v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct CriAtomSource_o *v37; // x21
  CriAtomSource_o *v38; // x21
  const MethodInfo *v39; // x1
  float v40; // s0
  float fadeBaseVolume; // s1
  float BaseVolume; // s0
  const MethodInfo *v43; // x3
  int v44; // w21
  bool v45; // w8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x21
  int32_t v49; // w1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_String_o *v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w1
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_String_o *v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  float preDelayTime; // s0
  float volume; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C56716 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SeManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_1C3E564(&string___TypeInfo);
    sub_1C3E564(&StringLiteral_16085/*"] vol:"*/);
    sub_1C3E564(&StringLiteral_16072/*"] : ["*/);
    sub_1C3E564(&StringLiteral_11515/*"SE Play (not found) for debug : ["*/);
    byte_4C56716 = 1;
  }
  volume = 0.0;
  if ( this->fields.isLoading )
    goto LABEL_4;
  p_source = &this->fields.source;
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(source, 0, 0) )
  {
    if ( !this->fields.isStop && this->fields.isWaitSource && this->fields.cueSheetName && this->fields.objName )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
      if ( !Instance )
        goto LABEL_97;
      AudioSource_41547360 = SeManager__GetAudioSource_41547360(
                               (SeManager_o *)Instance,
                               this,
                               this->fields.cueSheetName,
                               this->fields.objName,
                               this->fields.notOverwrite,
                               v10);
      this->fields.source = AudioSource_41547360;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.source, (int32_t)AudioSource_41547360, v12, v13);
      v14 = (UnityEngine_Object_o *)this->fields.source;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v14, 0, 0) )
        goto LABEL_4;
      Instance = (__int64)this->fields.source;
      this->fields.isWaitSource = 0;
      if ( !Instance )
        goto LABEL_97;
      cueSheetName = this->fields.cueSheetName;
      *(_QWORD *)(Instance + 120) = cueSheetName;
      sub_1C3E508((CGThumbnailListItem_o *)(Instance + 120), (int32_t)cueSheetName, v15, v16);
      Instance = (__int64)this->fields.source;
      if ( !Instance )
        goto LABEL_97;
      objName = this->fields.objName;
      *(_QWORD *)(Instance + 112) = objName;
      sub_1C3E508((CGThumbnailListItem_o *)(Instance + 112), (int32_t)objName, v18, v19);
      if ( this->fields.fadeoutTime <= 0.0 )
      {
        v38 = this->fields.source;
        if ( this->fields.fadeinTime <= 0.0 )
        {
          BaseVolume = SePlayer__GetBaseVolume(this, v8);
          if ( !v38 )
            goto LABEL_97;
          CriAtomSource__set_volume(v38, BaseVolume, 0);
        }
        else
        {
          if ( !v38 )
            goto LABEL_97;
          CriAtomSource__set_volume(this->fields.source, this->fields.fadeBaseVolume, 0);
          v40 = SePlayer__GetBaseVolume(this, v39);
          fadeBaseVolume = this->fields.fadeBaseVolume;
          this->fields.playTime = -1.0;
          this->fields.fadeChangeVolume = v40 - fadeBaseVolume;
        }
      }
      else
      {
        Instance = (__int64)*p_source;
        if ( !*p_source )
          goto LABEL_97;
        CriAtomSource__set_volume((CriAtomSource_o *)Instance, this->fields.fadeBaseVolume, 0);
        this->fields.playTime = -1.0;
      }
      Instance = (__int64)this->fields.source;
      if ( this->fields.changePitchRequest )
      {
        if ( !Instance )
          goto LABEL_97;
        CriAtomSource__set_pitch((CriAtomSource_o *)Instance, this->fields.pitchValue, 0);
        this->fields.changePitchRequest = 0;
      }
      else
      {
        if ( !Instance )
          goto LABEL_97;
        CriAtomSource__set_pitch((CriAtomSource_o *)Instance, 0.0, 0);
      }
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        goto LABEL_97;
      if ( !SoundManager__IsExistsSound(
              (SoundManager_o *)Instance,
              this->fields.cueSheetName,
              this->fields.objName,
              v43) )
      {
        Instance = sub_1C3E60C(string___TypeInfo, 6);
        if ( !Instance )
          goto LABEL_97;
        v48 = Instance;
        if ( *(_DWORD *)(Instance + 24) )
        {
          v49 = StringLiteral_11515/*"SE Play (not found) for debug : ["*/;
          *(_QWORD *)(Instance + 32) = StringLiteral_11515/*"SE Play (not found) for debug : ["*/;
          sub_1C3E508((CGThumbnailListItem_o *)(Instance + 32), v49, v46, v47);
          if ( *(_DWORD *)(v48 + 24) > 1u )
          {
            v52 = this->fields.cueSheetName;
            *(_QWORD *)(v48 + 40) = v52;
            sub_1C3E508((CGThumbnailListItem_o *)(v48 + 40), (int32_t)v52, v50, v51);
            if ( *(_DWORD *)(v48 + 24) > 2u )
            {
              v55 = StringLiteral_16072/*"] : ["*/;
              *(_QWORD *)(v48 + 48) = StringLiteral_16072/*"] : ["*/;
              sub_1C3E508((CGThumbnailListItem_o *)(v48 + 48), v55, v53, v54);
              if ( *(_DWORD *)(v48 + 24) > 3u )
              {
                v58 = this->fields.objName;
                *(_QWORD *)(v48 + 56) = v58;
                sub_1C3E508((CGThumbnailListItem_o *)(v48 + 56), (int32_t)v58, v56, v57);
                if ( *(_DWORD *)(v48 + 24) > 4u )
                {
                  v61 = StringLiteral_16085/*"] vol:"*/;
                  *(_QWORD *)(v48 + 64) = StringLiteral_16085/*"] vol:"*/;
                  sub_1C3E508((CGThumbnailListItem_o *)(v48 + 64), v61, v59, v60);
                  if ( !*p_source )
                    goto LABEL_97;
                  volume = (*p_source)->fields._volume;
                  Instance = (__int64)System_Single__ToString(volume, (const MethodInfo *)&volume);
                  if ( *(_DWORD *)(v48 + 24) > 5u )
                  {
                    *(_QWORD *)(v48 + 72) = Instance;
                    sub_1C3E508((CGThumbnailListItem_o *)(v48 + 72), Instance, v62, v63);
                    System_String__Concat_63676984((System_String_array *)v48, 0);
                    goto LABEL_4;
                  }
                }
              }
            }
          }
        }
        sub_1C3E7C8(Instance, v8);
      }
      Instance = (__int64)*p_source;
      if ( !*p_source )
        goto LABEL_97;
      Instance = CriAtomSource__get_status((CriAtomSource_o *)Instance, 0);
      if ( !*p_source )
        goto LABEL_97;
      v44 = Instance;
      Instance = System_String__op_Equality((*p_source)->fields._cueSheet, this->fields.cueSheetName, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_90;
      if ( !*p_source )
        goto LABEL_97;
      Instance = System_String__op_Equality((*p_source)->fields._cueName, this->fields.objName, 0);
      if ( (Instance & 1) != 0 )
        v45 = (unsigned int)(v44 - 1) > 1;
      else
LABEL_90:
        v45 = 1;
      if ( !*p_source )
LABEL_97:
        sub_1C3E7C0(Instance, v8);
      Instance = (__int64)(*p_source)->fields._player_k__BackingField;
      if ( v45 )
      {
        if ( !Instance )
          goto LABEL_97;
        preDelayTime = this->fields.preDelayTime;
      }
      else
      {
        preDelayTime = 0.0;
        if ( !Instance )
          goto LABEL_97;
      }
      CriAtomExPlayer__SetPreDelayTime((CriAtomExPlayer_o *)Instance, preDelayTime, 0);
LABEL_59:
      Instance = (__int64)*p_source;
      if ( *p_source )
      {
        CriAtomSource__Play((CriAtomSource_o *)Instance, 0);
        goto LABEL_4;
      }
      goto LABEL_97;
    }
LABEL_61:
    LOBYTE(status) = 0;
    return status;
  }
  fadeoutTime = this->fields.fadeoutTime;
  if ( fadeoutTime > 0.0 )
  {
    playTime = this->fields.playTime;
    v23 = playTime + delta;
    v24 = playTime < 0.0;
    v25 = 0.0;
    if ( !v24 )
      v25 = v23;
    this->fields.playTime = v25;
    if ( v25 >= fadeoutTime )
    {
      Instance = (__int64)*p_source;
      if ( !*p_source )
        goto LABEL_97;
      CriAtomSource__Stop((CriAtomSource_o *)Instance, 0);
      *p_source = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.source, 0, v35, v36);
      goto LABEL_61;
    }
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    if ( !byte_4C5679D )
    {
      sub_1C3E564(&SeManager_TypeInfo);
      byte_4C5679D = 1;
    }
    v26 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v26 = SeManager_TypeInfo;
    }
    static_fields = v26->static_fields;
    Instance = (__int64)*p_source;
    if ( !static_fields->isMute )
    {
      if ( !Instance )
        goto LABEL_97;
      v28 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
LABEL_53:
      CriAtomSource__set_volume((CriAtomSource_o *)Instance, v28, 0);
      goto LABEL_54;
    }
LABEL_45:
    if ( !Instance )
      goto LABEL_97;
    v28 = 0.0;
    goto LABEL_53;
  }
  fadeinTime = this->fields.fadeinTime;
  if ( fadeinTime > 0.0 )
  {
    v30 = this->fields.playTime;
    v31 = v30 + delta;
    v24 = v30 < 0.0;
    v32 = 0.0;
    if ( !v24 )
      v32 = v31;
    this->fields.playTime = v32;
    if ( v32 >= fadeinTime )
    {
      v37 = this->fields.source;
      this->fields.fadeinTime = 0.0;
      v28 = SePlayer__GetBaseVolume(this, v8);
      if ( !v37 )
        goto LABEL_97;
      Instance = (__int64)v37;
      goto LABEL_53;
    }
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    if ( !byte_4C5679D )
    {
      sub_1C3E564(&SeManager_TypeInfo);
      byte_4C5679D = 1;
    }
    v33 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v33 = SeManager_TypeInfo;
    }
    v34 = v33->static_fields;
    Instance = (__int64)*p_source;
    if ( !v34->isMute )
    {
      if ( !Instance )
        goto LABEL_97;
      v28 = this->fields.fadeBaseVolume
          + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
      goto LABEL_53;
    }
    goto LABEL_45;
  }
LABEL_54:
  Instance = (__int64)*p_source;
  if ( !*p_source )
    goto LABEL_97;
  status = CriAtomSource__get_status((CriAtomSource_o *)Instance, 0);
  if ( status == 1 )
    return status;
  Instance = (__int64)*p_source;
  if ( !*p_source )
    goto LABEL_97;
  if ( CriAtomSource__get_status((CriAtomSource_o *)Instance, 0) != 2 )
  {
    if ( this->fields.isLoop )
      goto LABEL_59;
    goto LABEL_61;
  }
LABEL_4:
  LOBYTE(status) = 1;
  return status;
}


System_String_o *SePlayer__get_AssetName(SePlayer_o *this, const MethodInfo *method)
{
  return this->fields.cueSheetName;
}


System_String_o *SePlayer__get_DataName(SePlayer_o *this, const MethodInfo *method)
{
  return this->fields.objName;
}


bool SePlayer__get_IsBusy(SePlayer_o *this, const MethodInfo *method)
{
  int32_t status; // w0
  UnityEngine_Object_o *source; // x20
  __int64 v5; // x1
  CriAtomSource_o *v6; // x0

  if ( (byte_4C5670B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5670B = 1;
  }
  if ( this->fields.isLoading || this->fields.isWaitSource || this->fields.isLoop )
  {
    LOBYTE(status) = 1;
  }
  else
  {
    source = (UnityEngine_Object_o *)this->fields.source;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(source, 0, 0) )
    {
      LOBYTE(status) = 0;
    }
    else
    {
      v6 = this->fields.source;
      if ( !v6 )
        goto LABEL_16;
      status = CriAtomSource__get_status(v6, 0);
      if ( status == 1 )
        return status;
      v6 = this->fields.source;
      if ( !v6 )
LABEL_16:
        sub_1C3E7C0(v6, v5);
      LOBYTE(status) = CriAtomSource__get_status(v6, 0) == 2;
    }
  }
  return status;
}


bool SePlayer__get_IsLoop(SePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct CriAtomSource_o *v6; // x8

  if ( (byte_4C5670C & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5670C = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(source, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.source;
  if ( !v6 )
    sub_1C3E7C0(v4, v5);
  return v6->fields._loop;
}


bool SePlayer__get_IsPause(SePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x20
  __int64 v4; // x1
  CriAtomSource_o *v5; // x0

  if ( (byte_4C5670D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5670D = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(source, 0, 0) )
    return 0;
  v5 = this->fields.source;
  if ( !v5 )
    sub_1C3E7C0(0, v4);
  return CriAtomSource__IsPaused(v5, 0);
}


bool SePlayer__get_IsStop(SePlayer_o *this, const MethodInfo *method)
{
  return this->fields.isStop;
}


float SePlayer__get_Pitch(SePlayer_o *this, const MethodInfo *method)
{
  return this->fields.pitchValue;
}


int32_t SePlayer__get_PlayNum(SePlayer_o *this, const MethodInfo *method)
{
  return this->fields.playNum;
}


int32_t SePlayer__get_Type(SePlayer_o *this, const MethodInfo *method)
{
  return this->fields.seType;
}


void SePlayer__set_Pitch(SePlayer_o *this, float value, const MethodInfo *method)
{
  this->fields.pitchValue = value;
  this->fields.changePitchRequest = 1;
}
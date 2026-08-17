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
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct System_Action_o **p_callbackFunc; // x24
  System_Delegate_o *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int32_t v36; // w8
  System_Action_c *v37; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v39; // x1
  float BaseVolume; // s0
  struct System_String_o *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  float PreDelayTime; // s0
  const MethodInfo *v49; // x3

  if ( (byte_59701B6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_59701B6 = 1;
  }
  this->fields.volume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.seType = type;
  this->fields.playNum = num;
  this->fields.objName = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.objName, (int32_t)name, v22, v23, v24, v25, v26, v27);
  p_callbackFunc = &this->fields.callbackFunc;
  v29 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v36 = (int)v29;
  if ( !v29 )
    goto LABEL_7;
  v37 = System_Action_TypeInfo;
  if ( (System_Action_c *)v29->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v29, (System_Action_c *)v29->klass != v37) )
  {
    sub_221405C(v29, v37, v30, v31);
LABEL_7:
    *p_callbackFunc = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, v36, v30, v31, v32, v33, v34, v35);
  BaseVolume = 0.0;
  this->fields.volume = volume;
  this->fields.fadeinTime = fadeinTime;
  this->fields.isLoop = isLoop;
  *(_WORD *)&this->fields.isLoading = 256;
  this->fields.isStop = 0;
  *(_QWORD *)&this->fields.fadeoutTime = 0;
  this->fields.changePitchRequest = 0;
  if ( fadeinTime <= 0.0 )
    BaseVolume = SePlayer__GetBaseVolume(this, v39);
  this->fields.fadeBaseVolume = BaseVolume;
  if ( !pathName )
    goto LABEL_15;
  v41 = System_String__Replace(pathName, 0x2Fu, 0x5Fu, 0);
  this->fields.cueSheetName = v41;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cueSheetName,
    (int32_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  PreDelayTime = 0.0;
  this->fields.notOverwrite = notOverwrite;
  if ( !ignorePreDelay )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( Instance )
    {
      PreDelayTime = SeManager__GetPreDelayTime((SeManager_o *)Instance, this->fields.cueSheetName, name, v49);
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(Instance, v39);
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
  bool result; // w0
  UnityEngine_Object_c *v8; // x0
  UnityEngine_Object_o *source; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x1
  struct CriAtomSource_o *v12; // x8
  float BaseVolume; // s0
  float fadeBaseVolume; // s1
  UnityEngine_Object_c *v15; // x0
  UnityEngine_Object_o *v16; // x20
  const MethodInfo *v17; // x1
  CriAtomSource_o *v18; // x20
  float v19; // s0
  float v20; // s0

  if ( (byte_59701BA & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59701BA = 1;
  }
  if ( this->fields.isStop || this->fields.fadeoutTime > 0.0 )
    return 0;
  this->fields.volume = volume;
  if ( fadeTime > 0.0 )
  {
    v8 = UnityEngine_Object_TypeInfo;
    source = (UnityEngine_Object_o *)this->fields.source;
    this->fields.fadeinTime = fadeTime;
    if ( !*(&v8->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v8, method);
    v10 = UnityEngine_Object__op_Inequality(source, 0, 0);
    if ( !v10 )
      return 1;
    v12 = this->fields.source;
    if ( v12 )
    {
      this->fields.fadeBaseVolume = v12->fields._volume;
      BaseVolume = SePlayer__GetBaseVolume(this, v11);
      fadeBaseVolume = this->fields.fadeBaseVolume;
      this->fields.playTime = -1.0;
      this->fields.fadeChangeVolume = BaseVolume - fadeBaseVolume;
      return 1;
    }
    goto LABEL_19;
  }
  v15 = UnityEngine_Object_TypeInfo;
  v16 = (UnityEngine_Object_o *)this->fields.source;
  this->fields.fadeinTime = 0.0;
  if ( !*(&v15->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v15, method);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    v18 = this->fields.source;
    v19 = SePlayer__GetBaseVolume(this, v17);
    if ( v18 )
    {
      CriAtomSource__set_volume(v18, v19, 0);
      return 1;
    }
LABEL_19:
    sub_2213CDC(v10, v11);
  }
  v20 = SePlayer__GetBaseVolume(this, v17);
  result = 1;
  this->fields.fadeBaseVolume = v20;
  return result;
}


void SePlayer__ClearChannelKey(SePlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.channelKey = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.channelKey, 0, v2, v3, v4, v5, v6, v7);
}


void SePlayer__Destroy(SePlayer_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  CriAtomSource_o **p_source; // x20
  UnityEngine_Object_o *source; // x21
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_59701B7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59701B7 = 1;
  }
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  this->fields.channelKey = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.channelKey, 0, v9, v10, v11, v12, v13, v14);
  p_source = &this->fields.source;
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
  {
    if ( !*p_source )
      sub_2213CDC(0, v18);
    CriAtomSource__Stop(*p_source, 0);
    *p_source = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.source, 0, v19, v20, v21, v22, v23, v24);
  }
  *(_DWORD *)&this->fields.isStop = 1;
}


float SePlayer__GetBaseVolume(SePlayer_o *this, const MethodInfo *method)
{
  SeManager_c *v3; // x0
  float result; // s0
  float volume; // s8
  int v6; // w8
  SeManager_c *v7; // x0
  float masterVoiceVolume; // s0
  SeManager_c *v9; // x0

  if ( (byte_59701B5 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701B5 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  if ( !byte_597022B )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_597022B = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v3 = SeManager_TypeInfo;
  }
  result = 0.0;
  if ( !v3->static_fields->isMute )
  {
    volume = this->fields.volume;
    v6 = *(&v3->_2.cctor_finished + 1);
    if ( this->fields.seType == 1 )
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(v3, method);
      if ( !byte_597022C )
      {
        sub_2213A60(&SeManager_TypeInfo);
        byte_597022C = 1;
      }
      v7 = SeManager_TypeInfo;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
        v7 = SeManager_TypeInfo;
      }
      masterVoiceVolume = v7->static_fields->masterVoiceVolume;
    }
    else
    {
      if ( !v6 )
        j_il2cpp_runtime_class_init_0(v3, method);
      if ( !byte_596D7B4 )
      {
        sub_2213A60(&SeManager_TypeInfo);
        byte_596D7B4 = 1;
      }
      v9 = SeManager_TypeInfo;
      if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
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

  if ( (byte_59701BB & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59701BB = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
  {
    v5 = this->fields.source;
    BaseVolume = SePlayer__GetBaseVolume(this, v4);
    if ( !v5 )
      sub_2213CDC(v6, v7);
    CriAtomSource__set_volume(v5, BaseVolume, 0);
  }
}


void SePlayer__RemoveCallback(SePlayer_o *this, System_Action_o *callbackFunc, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v6; // t1
  System_Delegate_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_c *v14; // x1

  if ( (byte_59701B8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_59701B8 = 1;
  }
  if ( callbackFunc )
  {
    v6 = (System_Delegate_o *)this->fields.callbackFunc;
    p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
    v7 = System_Delegate__Remove(v6, (System_Delegate_o *)callbackFunc, 0);
    if ( v7 )
    {
      v14 = System_Action_TypeInfo;
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
        || (p_callbackFunc->klass = (MissionNaviTransitionBoardItem_c *)v7, (System_Action_c *)v7->klass != v14) )
      {
        sub_221405C(v7, v14, v8, v9);
        return;
      }
    }
    else
    {
      p_callbackFunc->klass = 0;
    }
    sub_2213A04(p_callbackFunc, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
}


void SePlayer__SetChannelKey(SePlayer_o *this, System_String_o *key, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.channelKey = key;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.channelKey,
    (int32_t)key,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void SePlayer__SetPause(SePlayer_o *this, bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x21
  __int64 v6; // x1
  CriAtomSource_o *v7; // x0

  if ( (byte_59701B4 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59701B4 = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isPause);
  if ( !UnityEngine_Object__op_Equality(source, 0, 0) )
  {
    v7 = this->fields.source;
    if ( !v7 )
      sub_2213CDC(0, v6);
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
  UnityEngine_Object_c *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  BalanceConfig_c *v18; // x0
  const MethodInfo *v19; // x2

  if ( (byte_59701B9 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_59701B9 = 1;
  }
  if ( !this->fields.isStop && (fadeoutTime <= 0.0 || this->fields.fadeoutTime <= 0.0) )
  {
    if ( fadeoutTime <= 0.0 )
    {
      p_source = &this->fields.source;
      source = (UnityEngine_Object_o *)this->fields.source;
      *(_WORD *)&this->fields.isStop = 1;
      v11 = UnityEngine_Object_TypeInfo;
      this->fields.fadeinTime = 0.0;
      this->fields.fadeoutTime = 0.0;
      if ( !*(&v11->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v11, method);
      if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
      {
        Instance = *p_source;
        if ( !*p_source )
          goto LABEL_28;
        CriAtomSource__Stop(Instance, 0);
        v18 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
          v18 = BalanceConfig_TypeInfo;
        }
        if ( !v18->static_fields->IgnoreResumePauseOnStop )
        {
          Instance = *p_source;
          if ( !*p_source )
            goto LABEL_28;
          if ( CriAtomSource__IsPaused(Instance, 0) )
          {
            Instance = *p_source;
            if ( !*p_source )
              goto LABEL_28;
            CriAtomSource__Pause(Instance, 0, 0);
          }
        }
        *p_source = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.source, 0, v12, v13, v14, v15, v16, v17);
      }
      Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
      if ( Instance )
      {
        SeManager__ReleaseAudioSource((SeManager_o *)Instance, this, v19);
        return;
      }
    }
    else
    {
      v5 = (UnityEngine_Object_o *)this->fields.source;
      this->fields.fadeoutTime = fadeoutTime;
      this->fields.fadeinTime = 0.0;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
LABEL_28:
    sub_2213CDC(Instance, v7);
  }
}


bool SePlayer__Update(SePlayer_o *this, float delta, const MethodInfo *method)
{
  _BOOL4 isLoading; // w8
  int32_t status; // w0
  struct CriAtomSource_o **p_source; // x20
  UnityEngine_Object_o *source; // x21
  const MethodInfo *v9; // x1
  __int64 Instance; // x0
  const MethodInfo *v11; // x5
  struct CriAtomSource_o *AudioSource_48483456; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_Object_o *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_String_o *cueSheetName; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_String_o *objName; // x1
  float fadeoutTime; // s0
  float playTime; // s1
  float v37; // s1
  SeManager_c *v38; // x0
  struct SeManager_StaticFields *static_fields; // x8
  float v40; // s0
  float fadeinTime; // s0
  float v42; // s1
  float v43; // s1
  SeManager_c *v44; // x0
  struct SeManager_StaticFields *v45; // x8
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct CriAtomSource_o *v52; // x21
  CriAtomSource_o *v53; // x21
  const MethodInfo *v54; // x1
  float v55; // s0
  float fadeBaseVolume; // s1
  float BaseVolume; // s0
  const MethodInfo *v58; // x3
  int v59; // w21
  float preDelayTime; // s0
  System_String_array *v61; // x20
  struct CriAtomSource_o *v62; // x8
  System_String_o *v63; // x0
  float volume; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59701BC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_16711/*"] vol:"*/);
    sub_2213A60(&StringLiteral_16695/*"] : ["*/);
    sub_2213A60(&StringLiteral_12021/*"SE Play (not found) for debug : ["*/);
    byte_59701BC = 1;
  }
  isLoading = this->fields.isLoading;
  volume = 0.0;
  if ( isLoading )
    goto LABEL_4;
  p_source = &this->fields.source;
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(source, 0, 0) )
  {
    if ( !this->fields.isStop && this->fields.isWaitSource && this->fields.cueSheetName && this->fields.objName )
    {
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
      if ( !Instance )
        goto LABEL_93;
      AudioSource_48483456 = SeManager__GetAudioSource_48483456(
                               (SeManager_o *)Instance,
                               this,
                               this->fields.cueSheetName,
                               this->fields.objName,
                               this->fields.notOverwrite,
                               v11);
      this->fields.source = AudioSource_48483456;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.source,
        (int32_t)AudioSource_48483456,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v20 = (UnityEngine_Object_o *)this->fields.source;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      if ( !UnityEngine_Object__op_Inequality(v20, 0, 0) )
        goto LABEL_4;
      Instance = (__int64)this->fields.source;
      this->fields.isWaitSource = 0;
      if ( !Instance )
        goto LABEL_93;
      cueSheetName = this->fields.cueSheetName;
      *(_QWORD *)(Instance + 120) = cueSheetName;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(Instance + 120),
        (int32_t)cueSheetName,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      Instance = (__int64)this->fields.source;
      if ( !Instance )
        goto LABEL_93;
      objName = this->fields.objName;
      *(_QWORD *)(Instance + 112) = objName;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(Instance + 112), (int32_t)objName, v28, v29, v30, v31, v32, v33);
      if ( this->fields.fadeoutTime <= 0.0 )
      {
        v53 = this->fields.source;
        if ( this->fields.fadeinTime <= 0.0 )
        {
          BaseVolume = SePlayer__GetBaseVolume(this, v9);
          if ( !v53 )
            goto LABEL_93;
          CriAtomSource__set_volume(v53, BaseVolume, 0);
        }
        else
        {
          if ( !v53 )
            goto LABEL_93;
          CriAtomSource__set_volume(this->fields.source, this->fields.fadeBaseVolume, 0);
          v55 = SePlayer__GetBaseVolume(this, v54);
          fadeBaseVolume = this->fields.fadeBaseVolume;
          this->fields.playTime = -1.0;
          this->fields.fadeChangeVolume = v55 - fadeBaseVolume;
        }
      }
      else
      {
        Instance = (__int64)*p_source;
        if ( !*p_source )
          goto LABEL_93;
        CriAtomSource__set_volume((CriAtomSource_o *)Instance, this->fields.fadeBaseVolume, 0);
        this->fields.playTime = -1.0;
      }
      Instance = (__int64)this->fields.source;
      if ( this->fields.changePitchRequest )
      {
        if ( !Instance )
          goto LABEL_93;
        CriAtomSource__set_pitch((CriAtomSource_o *)Instance, this->fields.pitchValue, 0);
        this->fields.changePitchRequest = 0;
      }
      else
      {
        if ( !Instance )
          goto LABEL_93;
        CriAtomSource__set_pitch((CriAtomSource_o *)Instance, 0.0, 0);
      }
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
LABEL_93:
        sub_2213CDC(Instance, v9);
      if ( !SoundManager__IsExistsSound(
              (SoundManager_o *)Instance,
              this->fields.cueSheetName,
              this->fields.objName,
              v58) )
      {
        Instance = sub_2213B20(string___TypeInfo, 6);
        if ( Instance )
        {
          v61 = (System_String_array *)Instance;
          sub_1FFE2C4(Instance, 0, StringLiteral_12021/*"SE Play (not found) for debug : ["*/);
          sub_1FFE2C4(v61, 1, this->fields.cueSheetName);
          sub_1FFE2C4(v61, 2, StringLiteral_16695/*"] : ["*/);
          sub_1FFE2C4(v61, 3, this->fields.objName);
          Instance = sub_1FFE2C4(v61, 4, StringLiteral_16711/*"] vol:"*/);
          v62 = this->fields.source;
          if ( v62 )
          {
            volume = v62->fields._volume;
            v63 = System_Single__ToString(volume, (const MethodInfo *)&volume);
            sub_1FFE2C4(v61, 5, v63);
            System_String__Concat_75697120(v61, 0);
            goto LABEL_4;
          }
        }
        goto LABEL_93;
      }
      Instance = (__int64)*p_source;
      if ( !*p_source )
        goto LABEL_93;
      Instance = CriAtomSource__get_status((CriAtomSource_o *)Instance, 0);
      if ( !*p_source )
        goto LABEL_93;
      v59 = Instance;
      Instance = System_String__op_Equality((*p_source)->fields._cueSheet, this->fields.cueSheetName, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_97;
      if ( !*p_source )
        goto LABEL_93;
      Instance = System_String__op_Equality((*p_source)->fields._cueName, this->fields.objName, 0);
      if ( (Instance & 1) != 0 && (unsigned int)(v59 - 1) <= 1 )
      {
        if ( !*p_source )
          goto LABEL_93;
        Instance = (__int64)(*p_source)->fields._player_k__BackingField;
        if ( !Instance )
          goto LABEL_93;
        preDelayTime = 0.0;
      }
      else
      {
LABEL_97:
        if ( !*p_source )
          goto LABEL_93;
        Instance = (__int64)(*p_source)->fields._player_k__BackingField;
        if ( !Instance )
          goto LABEL_93;
        preDelayTime = this->fields.preDelayTime;
      }
      CriAtomExPlayer__SetPreDelayTime((CriAtomExPlayer_o *)Instance, preDelayTime, 0);
LABEL_61:
      Instance = (__int64)*p_source;
      if ( *p_source )
      {
        CriAtomSource__Play((CriAtomSource_o *)Instance, 0);
        goto LABEL_4;
      }
      goto LABEL_93;
    }
LABEL_63:
    LOBYTE(status) = 0;
    return status;
  }
  fadeoutTime = this->fields.fadeoutTime;
  if ( fadeoutTime > 0.0 )
  {
    playTime = this->fields.playTime;
    if ( playTime >= 0.0 )
      v37 = playTime + delta;
    else
      v37 = 0.0;
    this->fields.playTime = v37;
    if ( v37 >= fadeoutTime )
    {
      Instance = (__int64)*p_source;
      if ( !*p_source )
        goto LABEL_93;
      CriAtomSource__Stop((CriAtomSource_o *)Instance, 0);
      *p_source = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.source, 0, v46, v47, v48, v49, v50, v51);
      goto LABEL_63;
    }
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
    if ( !byte_597022B )
    {
      sub_2213A60(&SeManager_TypeInfo);
      byte_597022B = 1;
    }
    v38 = SeManager_TypeInfo;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
      v38 = SeManager_TypeInfo;
    }
    static_fields = v38->static_fields;
    Instance = (__int64)*p_source;
    if ( !static_fields->isMute )
    {
      if ( !Instance )
        goto LABEL_93;
      v40 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
LABEL_55:
      CriAtomSource__set_volume((CriAtomSource_o *)Instance, v40, 0);
      goto LABEL_56;
    }
LABEL_47:
    if ( !Instance )
      goto LABEL_93;
    v40 = 0.0;
    goto LABEL_55;
  }
  fadeinTime = this->fields.fadeinTime;
  if ( fadeinTime > 0.0 )
  {
    v42 = this->fields.playTime;
    if ( v42 >= 0.0 )
      v43 = v42 + delta;
    else
      v43 = 0.0;
    this->fields.playTime = v43;
    if ( v43 >= fadeinTime )
    {
      v52 = this->fields.source;
      this->fields.fadeinTime = 0.0;
      v40 = SePlayer__GetBaseVolume(this, v9);
      if ( !v52 )
        goto LABEL_93;
      Instance = (__int64)v52;
      goto LABEL_55;
    }
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
    if ( !byte_597022B )
    {
      sub_2213A60(&SeManager_TypeInfo);
      byte_597022B = 1;
    }
    v44 = SeManager_TypeInfo;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
      v44 = SeManager_TypeInfo;
    }
    v45 = v44->static_fields;
    Instance = (__int64)*p_source;
    if ( !v45->isMute )
    {
      if ( !Instance )
        goto LABEL_93;
      v40 = this->fields.fadeBaseVolume
          + (float)((float)(this->fields.playTime * this->fields.fadeChangeVolume) / this->fields.fadeinTime);
      goto LABEL_55;
    }
    goto LABEL_47;
  }
LABEL_56:
  Instance = (__int64)*p_source;
  if ( !*p_source )
    goto LABEL_93;
  status = CriAtomSource__get_status((CriAtomSource_o *)Instance, 0);
  if ( status == 1 )
    return status;
  Instance = (__int64)*p_source;
  if ( !*p_source )
    goto LABEL_93;
  if ( CriAtomSource__get_status((CriAtomSource_o *)Instance, 0) != 2 )
  {
    if ( this->fields.isLoop )
      goto LABEL_61;
    goto LABEL_63;
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

  if ( (byte_59701B1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59701B1 = 1;
  }
  if ( this->fields.isLoading || this->fields.isWaitSource || this->fields.isLoop )
  {
    LOBYTE(status) = 1;
  }
  else
  {
    source = (UnityEngine_Object_o *)this->fields.source;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
        sub_2213CDC(v6, v5);
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

  if ( (byte_59701B2 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59701B2 = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v4 = UnityEngine_Object__op_Inequality(source, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.source;
  if ( !v6 )
    sub_2213CDC(v4, v5);
  return v6->fields._loop;
}


bool SePlayer__get_IsPause(SePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x20
  __int64 v4; // x1
  CriAtomSource_o *v5; // x0

  if ( (byte_59701B3 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59701B3 = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Inequality(source, 0, 0) )
    return 0;
  v5 = this->fields.source;
  if ( !v5 )
    sub_2213CDC(0, v4);
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
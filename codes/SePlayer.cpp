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
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Action_o **p_callbackFunc; // x24
  System_Delegate_o *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Delegate_o *v36; // x8
  System_Action_c *v37; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v39; // x1
  float BaseVolume; // s0
  struct System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  float PreDelayTime; // s0
  const MethodInfo *v49; // x3

  if ( (byte_4D303B6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D303B6 = 1;
  }
  this->fields.volume = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.seType = type;
  this->fields.playNum = num;
  this->fields.objName = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.objName, (int32_t)name, v22, v23, v24, v25, v26, v27);
  p_callbackFunc = &this->fields.callbackFunc;
  v29 = System_Delegate__Combine((System_Delegate_o *)this->fields.callbackFunc, (System_Delegate_o *)callbackFunc, 0);
  v36 = v29;
  if ( !v29 )
    goto LABEL_7;
  v37 = System_Action_TypeInfo;
  if ( (System_Action_c *)v29->klass != System_Action_TypeInfo
    || (*p_callbackFunc = (struct System_Action_o *)v29, (System_Action_c *)v29->klass != v37) )
  {
    sub_1C940C8(v29);
LABEL_7:
    *p_callbackFunc = (struct System_Action_o *)v36;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, (int32_t)v36, v30, v31, v32, v33, v34, v35);
  BaseVolume = 0.0;
  this->fields.volume = volume;
  this->fields.fadeinTime = fadeinTime;
  this->fields.isLoop = isLoop;
  this->fields.isStop = 0;
  *(_QWORD *)&this->fields.fadeoutTime = 0;
  this->fields.changePitchRequest = 0;
  *(_WORD *)&this->fields.isLoading = 256;
  if ( fadeinTime <= 0.0 )
    BaseVolume = SePlayer__GetBaseVolume(this, v39);
  this->fields.fadeBaseVolume = BaseVolume;
  if ( !pathName )
    goto LABEL_15;
  v41 = System_String__Replace(pathName, 0x2Fu, 0x5Fu, 0);
  this->fields.cueSheetName = v41;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.cueSheetName, (int32_t)v41, v42, v43, v44, v45, v46, v47);
  PreDelayTime = 0.0;
  this->fields.notOverwrite = notOverwrite;
  if ( !ignorePreDelay )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    if ( Instance )
    {
      PreDelayTime = SeManager__GetPreDelayTime((SeManager_o *)Instance, this->fields.cueSheetName, name, v49);
      goto LABEL_14;
    }
LABEL_15:
    sub_1C93D2C(Instance, v39);
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

  if ( (byte_4D303BA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303BA = 1;
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
    sub_1C93D2C(v9, v10);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  CriAtomSource_o **p_source; // x20
  UnityEngine_Object_o *source; // x21
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D303B7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303B7 = 1;
  }
  this->fields.callbackFunc = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  p_source = &this->fields.source;
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
  {
    if ( !*p_source )
      sub_1C93D2C(0, v11);
    CriAtomSource__Stop(*p_source, 0);
    *p_source = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.source, 0, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4D303B5 & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D303B5 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4D3042F )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    byte_4D3042F = 1;
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
      if ( !byte_4D30430 )
      {
        sub_1C93AD4(&SeManager_TypeInfo);
        byte_4D30430 = 1;
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
      if ( !byte_4D2DA48 )
      {
        sub_1C93AD4(&SeManager_TypeInfo);
        byte_4D2DA48 = 1;
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

  if ( (byte_4D303BB & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303BB = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(source, 0, 0) )
  {
    v5 = this->fields.source;
    BaseVolume = SePlayer__GetBaseVolume(this, v4);
    if ( !v5 )
      sub_1C93D2C(v6, v7);
    CriAtomSource__set_volume(v5, BaseVolume, 0);
  }
}


void SePlayer__RemoveCallback(SePlayer_o *this, System_Action_o *callbackFunc, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x19
  System_Delegate_o *v6; // t1
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_c *v14; // x1

  if ( (byte_4D303B8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    byte_4D303B8 = 1;
  }
  if ( callbackFunc )
  {
    v6 = (System_Delegate_o *)this->fields.callbackFunc;
    p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
    v7 = System_Delegate__Remove(v6, (System_Delegate_o *)callbackFunc, 0);
    if ( v7 )
    {
      v14 = System_Action_TypeInfo;
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo
        || (p_callbackFunc->klass = (GrandQuestFolderBoardItem_c *)v7, (System_Action_c *)v7->klass != v14) )
      {
        sub_1C940C8(v7);
        return;
      }
    }
    else
    {
      p_callbackFunc->klass = 0;
    }
    sub_1C93A78(p_callbackFunc, (int32_t)v7, v8, v9, v10, v11, v12, v13);
  }
}


void SePlayer__SetPause(SePlayer_o *this, bool isPause, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x21
  __int64 v6; // x1
  CriAtomSource_o *v7; // x0

  if ( (byte_4D303B4 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303B4 = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(source, 0, 0) )
  {
    v7 = this->fields.source;
    if ( !v7 )
      sub_1C93D2C(0, v6);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BalanceConfig_c *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_4D303B9 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    byte_4D303B9 = 1;
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
          goto LABEL_28;
        CriAtomSource__Stop(Instance, 0);
        v17 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v17 = BalanceConfig_TypeInfo;
        }
        if ( !v17->static_fields->IgnoreResumePauseOnStop )
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
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.source, 0, v11, v12, v13, v14, v15, v16);
      }
      Instance = (CriAtomSource_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
      if ( Instance )
      {
        SeManager__ReleaseAudioSource((SeManager_o *)Instance, this, v18);
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
LABEL_28:
    sub_1C93D2C(Instance, v7);
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
  struct CriAtomSource_o *AudioSource_42230060; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Object_o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_String_o *cueSheetName; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_String_o *objName; // x1
  float fadeoutTime; // s0
  float playTime; // s1
  float v35; // s2
  bool v36; // nf
  float v37; // s1
  SeManager_c *v38; // x0
  struct SeManager_StaticFields *static_fields; // x8
  float v40; // s0
  float fadeinTime; // s0
  float v42; // s1
  float v43; // s2
  float v44; // s1
  SeManager_c *v45; // x0
  struct SeManager_StaticFields *v46; // x8
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct CriAtomSource_o *v53; // x21
  CriAtomSource_o *v54; // x21
  const MethodInfo *v55; // x1
  float v56; // s0
  float fadeBaseVolume; // s1
  float BaseVolume; // s0
  const MethodInfo *v59; // x3
  int v60; // w21
  bool v61; // w8
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  __int64 v68; // x21
  int32_t v69; // w1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct System_String_o *v76; // x1
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  int32_t v83; // w1
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  struct System_String_o *v90; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  float preDelayTime; // s0
  float volume; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D303BC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_SeManager__get_Instance__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_16173/*"] vol:"*/);
    sub_1C93AD4(&StringLiteral_16160/*"] : ["*/);
    sub_1C93AD4(&StringLiteral_11600/*"SE Play (not found) for debug : ["*/);
    byte_4D303BC = 1;
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SeManager__get_Instance__);
      if ( !Instance )
        goto LABEL_97;
      AudioSource_42230060 = SeManager__GetAudioSource_42230060(
                               (SeManager_o *)Instance,
                               this,
                               this->fields.cueSheetName,
                               this->fields.objName,
                               this->fields.notOverwrite,
                               v10);
      this->fields.source = AudioSource_42230060;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.source,
        (int32_t)AudioSource_42230060,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v18 = (UnityEngine_Object_o *)this->fields.source;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
        goto LABEL_4;
      Instance = (__int64)this->fields.source;
      this->fields.isWaitSource = 0;
      if ( !Instance )
        goto LABEL_97;
      cueSheetName = this->fields.cueSheetName;
      *(_QWORD *)(Instance + 120) = cueSheetName;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(Instance + 120), (int32_t)cueSheetName, v19, v20, v21, v22, v23, v24);
      Instance = (__int64)this->fields.source;
      if ( !Instance )
        goto LABEL_97;
      objName = this->fields.objName;
      *(_QWORD *)(Instance + 112) = objName;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(Instance + 112), (int32_t)objName, v26, v27, v28, v29, v30, v31);
      if ( this->fields.fadeoutTime <= 0.0 )
      {
        v54 = this->fields.source;
        if ( this->fields.fadeinTime <= 0.0 )
        {
          BaseVolume = SePlayer__GetBaseVolume(this, v8);
          if ( !v54 )
            goto LABEL_97;
          CriAtomSource__set_volume(v54, BaseVolume, 0);
        }
        else
        {
          if ( !v54 )
            goto LABEL_97;
          CriAtomSource__set_volume(this->fields.source, this->fields.fadeBaseVolume, 0);
          v56 = SePlayer__GetBaseVolume(this, v55);
          fadeBaseVolume = this->fields.fadeBaseVolume;
          this->fields.playTime = -1.0;
          this->fields.fadeChangeVolume = v56 - fadeBaseVolume;
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
      Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !Instance )
        goto LABEL_97;
      if ( !SoundManager__IsExistsSound(
              (SoundManager_o *)Instance,
              this->fields.cueSheetName,
              this->fields.objName,
              v59) )
      {
        Instance = sub_1C93B7C(string___TypeInfo, 6);
        if ( !Instance )
          goto LABEL_97;
        v68 = Instance;
        if ( *(_DWORD *)(Instance + 24) )
        {
          v69 = StringLiteral_11600/*"SE Play (not found) for debug : ["*/;
          *(_QWORD *)(Instance + 32) = StringLiteral_11600/*"SE Play (not found) for debug : ["*/;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(Instance + 32), v69, v62, v63, v64, v65, v66, v67);
          if ( *(_DWORD *)(v68 + 24) > 1u )
          {
            v76 = this->fields.cueSheetName;
            *(_QWORD *)(v68 + 40) = v76;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v68 + 40), (int32_t)v76, v70, v71, v72, v73, v74, v75);
            if ( *(_DWORD *)(v68 + 24) > 2u )
            {
              v83 = StringLiteral_16160/*"] : ["*/;
              *(_QWORD *)(v68 + 48) = StringLiteral_16160/*"] : ["*/;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v68 + 48), v83, v77, v78, v79, v80, v81, v82);
              if ( *(_DWORD *)(v68 + 24) > 3u )
              {
                v90 = this->fields.objName;
                *(_QWORD *)(v68 + 56) = v90;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v68 + 56), (int32_t)v90, v84, v85, v86, v87, v88, v89);
                if ( *(_DWORD *)(v68 + 24) > 4u )
                {
                  v97 = StringLiteral_16173/*"] vol:"*/;
                  *(_QWORD *)(v68 + 64) = StringLiteral_16173/*"] vol:"*/;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v68 + 64), v97, v91, v92, v93, v94, v95, v96);
                  if ( !*p_source )
                    goto LABEL_97;
                  volume = (*p_source)->fields._volume;
                  Instance = (__int64)System_Single__ToString(volume, (const MethodInfo *)&volume);
                  if ( *(_DWORD *)(v68 + 24) > 5u )
                  {
                    *(_QWORD *)(v68 + 72) = Instance;
                    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v68 + 72), Instance, v98, v99, v100, v101, v102, v103);
                    System_String__Concat_64466256((System_String_array *)v68, 0);
                    goto LABEL_4;
                  }
                }
              }
            }
          }
        }
        sub_1C93D34(Instance);
      }
      Instance = (__int64)*p_source;
      if ( !*p_source )
        goto LABEL_97;
      Instance = CriAtomSource__get_status((CriAtomSource_o *)Instance, 0);
      if ( !*p_source )
        goto LABEL_97;
      v60 = Instance;
      Instance = System_String__op_Equality((*p_source)->fields._cueSheet, this->fields.cueSheetName, 0);
      if ( (Instance & 1) == 0 )
        goto LABEL_90;
      if ( !*p_source )
        goto LABEL_97;
      Instance = System_String__op_Equality((*p_source)->fields._cueName, this->fields.objName, 0);
      if ( (Instance & 1) != 0 )
        v61 = (unsigned int)(v60 - 1) > 1;
      else
LABEL_90:
        v61 = 1;
      if ( !*p_source )
LABEL_97:
        sub_1C93D2C(Instance, v8);
      Instance = (__int64)(*p_source)->fields._player_k__BackingField;
      if ( v61 )
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
    v35 = playTime + delta;
    v36 = playTime < 0.0;
    v37 = 0.0;
    if ( !v36 )
      v37 = v35;
    this->fields.playTime = v37;
    if ( v37 >= fadeoutTime )
    {
      Instance = (__int64)*p_source;
      if ( !*p_source )
        goto LABEL_97;
      CriAtomSource__Stop((CriAtomSource_o *)Instance, 0);
      *p_source = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.source, 0, v47, v48, v49, v50, v51, v52);
      goto LABEL_61;
    }
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    if ( !byte_4D3042F )
    {
      sub_1C93AD4(&SeManager_TypeInfo);
      byte_4D3042F = 1;
    }
    v38 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v38 = SeManager_TypeInfo;
    }
    static_fields = v38->static_fields;
    Instance = (__int64)*p_source;
    if ( !static_fields->isMute )
    {
      if ( !Instance )
        goto LABEL_97;
      v40 = this->fields.fadeBaseVolume * (float)(1.0 - (float)(this->fields.playTime / this->fields.fadeoutTime));
LABEL_53:
      CriAtomSource__set_volume((CriAtomSource_o *)Instance, v40, 0);
      goto LABEL_54;
    }
LABEL_45:
    if ( !Instance )
      goto LABEL_97;
    v40 = 0.0;
    goto LABEL_53;
  }
  fadeinTime = this->fields.fadeinTime;
  if ( fadeinTime > 0.0 )
  {
    v42 = this->fields.playTime;
    v43 = v42 + delta;
    v36 = v42 < 0.0;
    v44 = 0.0;
    if ( !v36 )
      v44 = v43;
    this->fields.playTime = v44;
    if ( v44 >= fadeinTime )
    {
      v53 = this->fields.source;
      this->fields.fadeinTime = 0.0;
      v40 = SePlayer__GetBaseVolume(this, v8);
      if ( !v53 )
        goto LABEL_97;
      Instance = (__int64)v53;
      goto LABEL_53;
    }
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    if ( !byte_4D3042F )
    {
      sub_1C93AD4(&SeManager_TypeInfo);
      byte_4D3042F = 1;
    }
    v45 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v45 = SeManager_TypeInfo;
    }
    v46 = v45->static_fields;
    Instance = (__int64)*p_source;
    if ( !v46->isMute )
    {
      if ( !Instance )
        goto LABEL_97;
      v40 = this->fields.fadeBaseVolume
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

  if ( (byte_4D303B1 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303B1 = 1;
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
        sub_1C93D2C(v6, v5);
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

  if ( (byte_4D303B2 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303B2 = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(source, 0, 0);
  if ( !v4 )
    return 0;
  v6 = this->fields.source;
  if ( !v6 )
    sub_1C93D2C(v4, v5);
  return v6->fields._loop;
}


bool SePlayer__get_IsPause(SePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *source; // x20
  __int64 v4; // x1
  CriAtomSource_o *v5; // x0

  if ( (byte_4D303B3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D303B3 = 1;
  }
  source = (UnityEngine_Object_o *)this->fields.source;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(source, 0, 0) )
    return 0;
  v5 = this->fields.source;
  if ( !v5 )
    sub_1C93D2C(0, v4);
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
void __fastcall CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIButton_o *touch; // x0
  UnityEngine_Object_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  UnityEngine_Texture2D_o *v10; // x20
  struct UIButton_o *v11; // x0
  UIWidget_o *v12; // x20
  int v13; // s0
  UnityEngine_Behaviour_o *v17; // x0

  if ( (byte_40FB51B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, v3);
    byte_40FB51B = 1;
  }
  touch = this->fields.touch;
  if ( !touch )
    goto LABEL_13;
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(struct UIButton_o *, Il2CppRuntimeInterfaceOffsetPair *))touch->klass[1]._1.implementedInterfaces)(
                                 touch,
                                 touch->klass[1]._1.interfaceOffsets);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Texture2D_o *)sub_B170CC(UnityEngine_Texture2D_TypeInfo, v6, v7, v8, v9);
    UnityEngine_Texture2D___ctor_34911944(v10, 128, 128, 1, 0, 0LL);
    v11 = this->fields.touch;
    if ( v11 )
    {
      ((void (__fastcall *)(struct UIButton_o *, UnityEngine_Texture2D_o *, Il2CppRGCTXData *))v11->klass[1].static_fields)(
        v11,
        v10,
        v11->klass[1].rgctx_data);
      v12 = (UIWidget_o *)this->fields.touch;
      *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_black(0LL);
      if ( v12 )
      {
        UIWidget__set_color(v12, *(UnityEngine_Color_o *)&v13, 0LL);
        goto LABEL_11;
      }
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_11:
  v17 = (UnityEngine_Behaviour_o *)this->fields.touch;
  if ( !v17 )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(v17, 0, 0LL);
}


void __fastcall CRIMoviePlayer__DispTexture(CRIMoviePlayer_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *touch; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *busyAnim; // x0
  UnityEngine_GameObject_o *v8; // x0

  touch = (UnityEngine_Component_o *)this->fields.touch;
  if ( !touch
    || (gameObject = UnityEngine_Component__get_gameObject(touch, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, flag, 0LL),
        (busyAnim = (UnityEngine_Component_o *)this->fields.busyAnim) == 0LL)
    || (v8 = UnityEngine_Component__get_gameObject(busyAnim, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v8, !flag, 0LL);
}


void __fastcall CRIMoviePlayer__Dispose(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x8
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x8
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x20
  __int64 v8; // x0
  UnityEngine_Object_o *v9; // x19

  if ( (byte_40FB517 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB517 = 1;
  }
  v3 = *(_QWORD *)&this->fields.renderMode;
  if ( !v3 )
    goto LABEL_19;
  v4 = *(UnityEngine_Object_o **)(v3 + 208);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    v5 = *(_QWORD *)&this->fields.renderMode;
    if ( v5 )
    {
      v6 = *(UnityEngine_Component_o **)(v5 + 208);
      if ( v6 )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
        goto LABEL_14;
      }
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_14:
  v8 = *(_QWORD *)&this->fields.renderMode;
  if ( !v8 )
    goto LABEL_19;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 392LL))(v8, *(_QWORD *)(*(_QWORD *)v8 + 400LL));
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(v9, 0LL);
}


void __fastcall CRIMoviePlayer__EndCallBack(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_c *klass; // x0
  System_Action_o *v4; // x0
  BattleServantConfConponent_o *p_isPlaying; // x19
  System_Action_o *v6; // t1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  klass = this[1].klass;
  if ( klass )
    CinemascopeSideFrame__Hide((CinemascopeSideFrame_o *)klass, 0LL);
  v6 = *(System_Action_o **)&this->fields.isPlaying;
  p_isPlaying = (BattleServantConfConponent_o *)&this->fields.isPlaying;
  v4 = v6;
  if ( v6 )
  {
    System_Action__Invoke(v4, 0LL);
    p_isPlaying->klass = 0LL;
    sub_B16F98(p_isPlaying, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall CRIMoviePlayer__HideCinemascopeSideFrame(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_c *klass; // x0

  klass = this[1].klass;
  if ( klass )
    CinemascopeSideFrame__HideLater((CinemascopeSideFrame_o *)klass, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__Initialize(
        CRIMoviePlayer_o *this,
        System_String_o *name,
        System_String_o *path,
        float volume,
        bool isCanSkip,
        CriFsBinder_o *cpk,
        System_Action_o *callBack,
        bool isCanControl,
        CinemascopeSideFrame_o *cinemascopeSideFrame,
        bool targetAlpha,
        int32_t fadeStartFrame,
        bool isLoadModeToDefaultWhenDestory,
        const MethodInfo *method)
{
  __int64 v22; // x1
  __int64 v23; // x1
  CRIMoviePlayer_o *v24; // x27
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  CRIMoviePlayer_c *klass; // x0
  CinemascopeSideFrame_o *v30; // x26
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UIWidget_o *touch; // x25
  int32_t Value; // w0
  UnityEngine_Component_o *background; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool v41; // w24
  CriMana_Player_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  CriMana_Player_o *v49; // x0
  UnityEngine_GameObject_o *control; // x0
  UnityEngine_GameObject_o *v51; // x0
  System_Nullable_int__o v52; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_int__o v53; // 0:x0.8

  if ( (byte_40FB516 & 1) == 0 )
  {
    sub_B16FFC(&CinemascopeSideFrame_TypeInfo, name);
    sub_B16FFC(&Method_System_Nullable_int__get_HasValue__, v22);
    sub_B16FFC(&Method_System_Nullable_int__get_Value__, v23);
    byte_40FB516 = 1;
  }
  v52 = 0LL;
  this[1].klass = (CRIMoviePlayer_c *)cinemascopeSideFrame;
  v24 = this + 1;
  BYTE2(this->fields.cinemascopeSideFrame) = isLoadModeToDefaultWhenDestory;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)cinemascopeSideFrame,
    (System_String_array **)path,
    (System_String_array **)isCanSkip,
    (System_Boolean_array **)cpk,
    (System_Int32_array **)callBack,
    (System_Int32_array *)isCanControl,
    (System_Int32_array *)cinemascopeSideFrame);
  klass = this[1].klass;
  if ( !klass )
  {
    v30 = (CinemascopeSideFrame_o *)sub_B170CC(CinemascopeSideFrame_TypeInfo, v25, v26, v27, v28);
    CinemascopeSideFrame___ctor(v30, 1, 1, 0LL);
    v24->klass = (CRIMoviePlayer_c *)v30;
    sub_B16F98((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    klass = v24->klass;
    if ( !v24->klass )
      goto LABEL_17;
  }
  v52 = CinemascopeSideFrame__Show((CinemascopeSideFrame_o *)klass, name, 0LL);
  if ( (*(_QWORD *)&v52 & 0xFF00000000LL) != 0 )
  {
    touch = (UIWidget_o *)this->fields.touch;
    v53 = (System_Nullable_int__o)&v52;
    Value = System_Nullable_int___get_Value(v53, (const MethodInfo_2968794 *)Method_System_Nullable_int__get_Value__);
    if ( !touch )
      goto LABEL_17;
    UIWidget__set_width(touch, Value, 0LL);
  }
  background = (UnityEngine_Component_o *)this->fields.background;
  if ( !background )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject(background, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  v41 = isCanSkip;
  UnityEngine_GameObject__SetActive(gameObject, v41, 0LL);
  LOBYTE(this->fields.cinemascopeSideFrame) = v41;
  BYTE1(this->fields.cinemascopeSideFrame) = isCanControl;
  CriManaMovieMaterial__set_applyTargetAlpha((CriManaMovieMaterial_o *)this, targetAlpha, 0LL);
  v42 = *(CriMana_Player_o **)&this->fields.renderMode;
  *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) = fadeStartFrame;
  this->fields.isCanSkip = 0;
  if ( !v42 )
    goto LABEL_17;
  if ( CriMana_Player__SetFile(v42, cpk, path, 0, 0LL) )
  {
    *(_QWORD *)&this->fields.isPlaying = callBack;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.isPlaying,
      (System_Int32_array **)callBack,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
    v49 = *(CriMana_Player_o **)&this->fields.renderMode;
    if ( !v49 )
      goto LABEL_17;
    CriMana_Player__SetVolume(v49, volume, 0LL);
  }
  CRIMoviePlayer__DispTexture(this, 0, (const MethodInfo *)v43);
  control = (UnityEngine_GameObject_o *)this->fields.control;
  if ( !control || (v51 = UnityEngine_GameObject__get_gameObject(control, 0LL)) == 0LL )
LABEL_17:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(v51, 0, 0LL);
}


bool __fastcall CRIMoviePlayer__IsPlaying(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v3; // x0

  v3 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( v3 )
    LOBYTE(v3) = CriMana_Player__get_status(v3, 0LL) == 5 && this->fields.isCanSkip;
  return (char)v3;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__MoviePlay(
        CRIMoviePlayer_o *this,
        bool isBgmPause,
        bool isSePause,
        bool isVoicePause,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x4
  System_Collections_IEnumerator_o *v10; // x1

  CRIMoviePlayer__DispTexture(this, 0, (const MethodInfo *)isSePause);
  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0LL);
  this->fields.isCanSkip = 0;
  v10 = CRIMoviePlayer__PlaySequence(this, isBgmPause, isSePause, isVoicePause, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall CRIMoviePlayer__MovieSeekByFrame(CRIMoviePlayer_o *this, int32_t frame, const MethodInfo *method)
{
  CriMana_Player_o *v4; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  v4 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && this->fields.isCanSkip )
  {
    this->fields.isCanSkip = 0;
    v7 = CRIMoviePlayer__SeekSequence(this, frame, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall CRIMoviePlayer__MovieSeekByRelativeTime(CRIMoviePlayer_o *this, int32_t sec, const MethodInfo *method)
{
  CriMana_Player_o *v4; // x0
  CriMana_Player_o *v6; // x0
  CriMana_FrameInfo_o *frameInfo; // x0
  int32_t frameNo; // w21
  CriMana_FrameInfo_o *v9; // x0
  const MethodInfo *v10; // x2
  System_Collections_IEnumerator_o *v11; // x1

  v4 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && this->fields.isCanSkip )
  {
    v6 = *(CriMana_Player_o **)&this->fields.renderMode;
    this->fields.isCanSkip = 0;
    if ( !v6
      || (frameInfo = CriMana_Player__get_frameInfo(v6, 0LL)) == 0LL
      || !*(_QWORD *)&this->fields.renderMode
      || (frameNo = frameInfo->fields.frameNo,
          (v9 = CriMana_Player__get_frameInfo(*(CriMana_Player_o **)&this->fields.renderMode, 0LL)) == 0LL) )
    {
      sub_B170D4();
    }
    v11 = CRIMoviePlayer__SeekSequence(this, LODWORD(v9->fields.tunit) * sec / 1000 + frameNo, v10);
    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
  }
}


void __fastcall CRIMoviePlayer__MovieStop(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x1

  CRIMoviePlayer__DispTexture(this, 0, v2);
  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0LL);
  this->fields.isCanSkip = 0;
  v5 = CRIMoviePlayer__StopSequence(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  CRIMoviePlayer_o *v6; // x0
  const MethodInfo *v7; // x4
  __int64 v8; // x8
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x8
  UnityEngine_Component_o *v11; // x0
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_40FB51C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&TouchEffectManager_TypeInfo, v4);
    byte_40FB51C = 1;
  }
  if ( BYTE2(this->fields.cinemascopeSideFrame) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__SetLoadMode(Instance, 0, 0LL);
  }
  if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  }
  TouchEffectManager__SetBlock(0, 0LL);
  CRIMoviePlayer__SetPauseSound(v6, 0, 0, 0, v7);
  v8 = *(_QWORD *)&this->fields.renderMode;
  if ( v8 )
  {
    v9 = *(UnityEngine_Object_o **)(v8 + 208);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
    {
      v10 = *(_QWORD *)&this->fields.renderMode;
      if ( v10 )
      {
        v11 = *(UnityEngine_Component_o **)(v10 + 208);
        if ( v11 )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
          goto LABEL_20;
        }
      }
LABEL_21:
      sub_B170D4();
    }
  }
LABEL_20:
  CriManaMovieMaterial__OnDestroy((CriManaMovieMaterial_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__OnMaterialAvailableChanged(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  struct System_String_o *moviePath; // x20
  UnityEngine_Object_o *touch; // x20
  struct UIButton_o *v5; // x0
  struct System_String_o *v6; // x19
  UnityEngine_Texture_o *v7; // x0

  if ( (byte_40FB51E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB51E = 1;
  }
  CriManaMovieController__OnMaterialAvailableChanged((CriManaMovieController_o *)this, 0LL);
  if ( BYTE3(this->fields.ambisonicSource) )
  {
    moviePath = this->fields._moviePath;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)moviePath, 0LL, 0LL) )
    {
      touch = (UnityEngine_Object_o *)this->fields.touch;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(touch, 0LL, 0LL) )
      {
        v5 = this->fields.touch;
        if ( !v5
          || (v6 = this->fields._moviePath,
              v7 = (UnityEngine_Texture_o *)((__int64 (__fastcall *)(struct UIButton_o *, Il2CppRuntimeInterfaceOffsetPair *))v5->klass[1]._1.implementedInterfaces)(
                                              v5,
                                              v5->klass[1]._1.interfaceOffsets),
              !v6) )
        {
          sub_B170D4();
        }
        UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v6, v7, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__PlaySequence(
        CRIMoviePlayer_o *this,
        bool isBgmPause,
        bool isSePause,
        bool isVoicePause,
        const MethodInfo *method)
{
  __int64 v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40FB518 & 1) == 0 )
  {
    sub_B16FFC(&CRIMoviePlayer__PlaySequence_d__24_TypeInfo, isBgmPause);
    byte_40FB518 = 1;
  }
  v9 = sub_B170CC(CRIMoviePlayer__PlaySequence_d__24_TypeInfo, isBgmPause, isSePause, isVoicePause, method);
  CRIMoviePlayer__PlaySequence_d__24___ctor((CRIMoviePlayer__PlaySequence_d__24_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v9 + 41) = isBgmPause;
  *(_BYTE *)(v9 + 42) = isSePause;
  *(_BYTE *)(v9 + 40) = isVoicePause;
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__SeekSequence(
        CRIMoviePlayer_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FB51A & 1) == 0 )
  {
    sub_B16FFC(&CRIMoviePlayer__SeekSequence_d__26_TypeInfo, *(_QWORD *)&frame);
    byte_40FB51A = 1;
  }
  v7 = sub_B170CC(CRIMoviePlayer__SeekSequence_d__26_TypeInfo, *(_QWORD *)&frame, method, v3, v4);
  CRIMoviePlayer__SeekSequence_d__26___ctor((CRIMoviePlayer__SeekSequence_d__26_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = frame;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__SetBackgroundColor(
        CRIMoviePlayer_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *busyAnim; // x0

  busyAnim = this->fields.busyAnim;
  if ( !busyAnim )
    sub_B170D4();
  UIWidget__set_color((UIWidget_o *)busyAnim, color, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__SetPauseSound(
        CRIMoviePlayer_o *this,
        bool isVoicePause,
        bool isBgmPause,
        bool isSePause,
        const MethodInfo *method)
{
  __int64 v8; // x1

  if ( (byte_40FB51D & 1) == 0 )
  {
    sub_B16FFC(&BgmManager_TypeInfo, isVoicePause);
    sub_B16FFC(&SeManager_TypeInfo, v8);
    byte_40FB51D = 1;
  }
  if ( (BYTE3(BgmManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(isBgmPause, 0LL);
  if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PauseSe(isSePause, 0LL);
  SeManager__PauseVoice(isVoicePause, 0LL);
}


void __fastcall CRIMoviePlayer__SetVolume(CRIMoviePlayer_o *this, float volume, const MethodInfo *method)
{
  CriMana_Player_o *v3; // x0

  v3 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( !v3 )
    sub_B170D4();
  CriMana_Player__SetVolume(v3, volume, 0LL);
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__StopSequence(
        CRIMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB519 & 1) == 0 )
  {
    sub_B16FFC(&CRIMoviePlayer__StopSequence_d__25_TypeInfo, method);
    byte_40FB519 = 1;
  }
  v6 = sub_B170CC(CRIMoviePlayer__StopSequence_d__25_TypeInfo, method, v2, v3, v4);
  CRIMoviePlayer__StopSequence_d__25___ctor((CRIMoviePlayer__StopSequence_d__25_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall CRIMoviePlayer__Update(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v3; // x0
  const MethodInfo *v4; // x1
  CriMana_Player_o *v5; // x0
  CriMana_Player_o *v6; // x0
  CriMana_Player_o *v7; // x0
  const MethodInfo *v8; // x1

  v3 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( v3 )
  {
    if ( CriMana_Player__get_status(v3, 0LL) == 6 )
    {
LABEL_5:
      CRIMoviePlayer__EndCallBack(this, v4);
      this->fields.isCanSkip = 0;
      return;
    }
    v5 = *(CriMana_Player_o **)&this->fields.renderMode;
    if ( !v5 )
      goto LABEL_14;
    if ( CriMana_Player__get_status(v5, 0LL) == 7 )
      goto LABEL_5;
    v6 = *(CriMana_Player_o **)&this->fields.renderMode;
    if ( !v6 )
      goto LABEL_14;
    if ( CriMana_Player__get_status(v6, 0LL) == 5
      && BYTE3(this->fields.ambisonicSource)
      && *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) )
    {
      v7 = *(CriMana_Player_o **)&this->fields.renderMode;
      if ( v7 )
      {
        if ( CriMana_Player__GetDisplayedFrameNo(v7, 0LL) >= *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) )
        {
          CRIMoviePlayer__EndCallBack(this, v8);
          *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) = 0;
        }
        return;
      }
LABEL_14:
      sub_B170D4();
    }
  }
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__26_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v2; // x0

  v2 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( !v2 )
    sub_B170D4();
  return CriMana_Player__get_frameInfo(v2, 0LL) != 0LL;
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__26_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v2; // x0

  v2 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( !v2 )
    sub_B170D4();
  return CriMana_Player__get_status(v2, 0LL) == 0;
}


bool __fastcall CRIMoviePlayer__get_isCanControl(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  return BYTE1(this->fields.cinemascopeSideFrame);
}


void __fastcall CRIMoviePlayer__set_isCanControl(CRIMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  BYTE1(this->fields.cinemascopeSideFrame) = value;
}


void __fastcall CRIMoviePlayer__PlaySequence_d__24___ctor(
        CRIMoviePlayer__PlaySequence_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CRIMoviePlayer__PlaySequence_d__24__MoveNext(
        CRIMoviePlayer__PlaySequence_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct CRIMoviePlayer_o *_4__this; // x20
  CommonUI_o *Instance; // x0
  CriMana_Player_o *v6; // x0
  CriMana_Player_o *v7; // x0
  CriMana_Player_o *v8; // x0
  CriMana_Player_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  CriMana_Player_o *v16; // x0
  CriMana_Player_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool v24; // w21
  Il2CppObject **v25; // x19
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  int v32; // w8
  CriMana_Player_o *v33; // x0
  CriMana_Player_o *v34; // x0
  CriMana_Player_o *v35; // x0
  CriMana_Player_o *v36; // x0
  CriMana_FrameInfo_o *frameInfo; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  CommonUI_o *v44; // x0
  struct UIButton_o *touch; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Component_o *busyAnim; // x0
  UnityEngine_GameObject_o *v55; // x0
  Il2CppObject **v56; // x19
  int v57; // w8
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F70AB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&TouchEffectManager_TypeInfo, v3);
    byte_40F70AB = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_56;
      CommonUI__SetLoadMode(Instance, 8, 0LL);
      if ( !_4__this )
        goto LABEL_56;
      goto LABEL_14;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
LABEL_14:
      v8 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v8 )
        goto LABEL_56;
      if ( !CriMana_Player__get_status(v8, 0LL) )
        goto LABEL_18;
      v9 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v9 )
        goto LABEL_56;
      if ( CriMana_Player__get_status(v9, 0LL) != 6 )
      {
        this->fields.__2__current = 0LL;
        p__2__current = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v10, v11, v12, v13, v14, v15);
        v24 = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return v24;
      }
LABEL_18:
      v16 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v16 )
        goto LABEL_56;
      CriMana_Player__Prepare(v16, 0LL);
LABEL_20:
      v17 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v17 )
        goto LABEL_56;
      if ( CriMana_Player__get_status(v17, 0LL) == 4 )
      {
        CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
        if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TouchEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
        }
        v24 = 1;
        TouchEffectManager__SetBlock(1, 0LL);
        this->fields.__2__current = 0LL;
        v25 = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)v25, 0LL, v26, v27, v28, v29, v30, v31);
        v32 = 3;
        goto LABEL_46;
      }
      this->fields.__2__current = 0LL;
      v56 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v56, 0LL, v18, v19, v20, v21, v22, v23);
      v57 = 2;
      goto LABEL_54;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      v33 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v33 )
        goto LABEL_56;
      if ( !CriMana_Player__get_status(v33, 0LL) )
        goto LABEL_31;
      v34 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v34 )
        goto LABEL_56;
      if ( CriMana_Player__get_status(v34, 0LL) == 7 )
        goto LABEL_31;
      goto LABEL_20;
    case 3:
      this->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_34;
      goto LABEL_56;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      v6 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v6 )
        goto LABEL_56;
      if ( !CriMana_Player__get_status(v6, 0LL) )
        goto LABEL_31;
      v7 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v7 )
        goto LABEL_56;
      if ( CriMana_Player__get_status(v7, 0LL) != 7 )
      {
LABEL_34:
        v35 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
        if ( !v35 )
          goto LABEL_56;
        if ( CriMana_Player__get_status(v35, 0LL) == 5 )
        {
          v36 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
          if ( !v36 )
            goto LABEL_56;
          frameInfo = CriMana_Player__get_frameInfo(v36, 0LL);
          if ( !frameInfo )
            goto LABEL_56;
          if ( !frameInfo->fields.frameNo )
          {
            this->fields.__2__current = 0LL;
            v56 = &this->fields.__2__current;
            sub_B16F98((BattleServantConfConponent_o *)v56, 0LL, v38, v39, v40, v41, v42, v43);
            v57 = 4;
LABEL_54:
            *((_DWORD *)v56 - 2) = v57;
            return 1;
          }
        }
        CRIMoviePlayer__SetPauseSound(
          _4__this,
          this->fields.isVoicePause,
          this->fields.isBgmPause,
          this->fields.isSePause,
          0LL);
        if ( LOBYTE(_4__this->fields.cinemascopeSideFrame) )
        {
          v44 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !v44 )
            goto LABEL_56;
          CommonUI__SetLoadMode(v44, 0, 0LL);
        }
        touch = _4__this->fields.touch;
        if ( touch )
        {
          ((void (__fastcall *)(struct UIButton_o *, struct System_String_o *, Il2CppClass **))touch->klass[1]._1.methods)(
            touch,
            _4__this->fields._moviePath,
            touch->klass[1]._1.nestedTypes);
          v46 = (UnityEngine_Component_o *)_4__this->fields.touch;
          if ( v46 )
          {
            gameObject = UnityEngine_Component__get_gameObject(v46, 0LL);
            if ( gameObject )
            {
              v24 = 1;
              UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
              this->fields.__2__current = 0LL;
              v25 = &this->fields.__2__current;
              sub_B16F98((BattleServantConfConponent_o *)v25, 0LL, v48, v49, v50, v51, v52, v53);
              v32 = 5;
LABEL_46:
              *((_DWORD *)v25 - 2) = v32;
              return v24;
            }
          }
        }
LABEL_56:
        sub_B170D4();
      }
LABEL_31:
      CRIMoviePlayer__EndCallBack(_4__this, 0LL);
      return 0;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      busyAnim = (UnityEngine_Component_o *)_4__this->fields.busyAnim;
      if ( !busyAnim )
        goto LABEL_56;
      v55 = UnityEngine_Component__get_gameObject(busyAnim, 0LL);
      if ( !v55 )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive(v55, 0, 0LL);
      v24 = 0;
      _4__this->fields.isCanSkip = 1;
      return v24;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall CRIMoviePlayer__PlaySequence_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__PlaySequence_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CRIMoviePlayer__PlaySequence_d__24__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__PlaySequence_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CRIMoviePlayer__PlaySequence_d__24_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall CRIMoviePlayer__PlaySequence_d__24__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__PlaySequence_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CRIMoviePlayer__PlaySequence_d__24__System_IDisposable_Dispose(
        CRIMoviePlayer__PlaySequence_d__24_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CRIMoviePlayer__SeekSequence_d__26___ctor(
        CRIMoviePlayer__SeekSequence_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CRIMoviePlayer__SeekSequence_d__26__MoveNext(
        CRIMoviePlayer__SeekSequence_d__26_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct CRIMoviePlayer_o *_4__this; // x20
  CriMana_Player_o *v15; // x0
  int32_t frame; // w21
  CriMana_MovieInfo_o *movieInfo; // x0
  CriMana_Player_o *v18; // x0
  UnityEngine_GameObject_o *control; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject **p__2__current; // x19
  int v22; // w8
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  CriMana_Player_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  UnityEngine_WaitForEndOfFrame_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  CriMana_Player_o *v41; // x0
  bool *p_retry_5__3; // x22
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  bool result; // w0
  Il2CppObject *waitForEOF_5__4; // x1
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Func_bool__o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  UnityEngine_WaitUntil_o *v60; // x20
  Il2CppObject **v61; // x19
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Func_bool__o *v68; // x21
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  UnityEngine_WaitUntil_o *v73; // x20
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7

  if ( (byte_40F70AC & 1) == 0 )
  {
    sub_B16FFC(&Method_CRIMoviePlayer__SeekSequence_b__26_0__, method);
    sub_B16FFC(&Method_CRIMoviePlayer__SeekSequence_b__26_1__, v9);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v10);
    sub_B16FFC(&System_Func_bool__TypeInfo, v11);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v13);
    byte_40F70AC = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      v15 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v15 )
        goto LABEL_38;
      frame = this->fields.frame;
      movieInfo = CriMana_Player__get_movieInfo(v15, 0LL);
      if ( !movieInfo )
        goto LABEL_38;
      this->fields.frame = UnityEngine_Mathf__Clamp_40670656(frame, 0, movieInfo->fields.totalFrames - 1, 0LL);
      v18 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v18 )
        goto LABEL_38;
      this->fields._isPaused_5__2 = CriMana_Player__IsPaused(v18, 0LL);
      CRIMoviePlayer__DispTexture(_4__this, 0, 0LL);
      control = (UnityEngine_GameObject_o *)_4__this->fields.control;
      if ( !control )
        goto LABEL_38;
      gameObject = UnityEngine_GameObject__get_gameObject(control, 0LL);
      if ( !gameObject )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      this->fields._retry_5__3 = 0;
      goto LABEL_33;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      v29 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
      if ( !v29 )
        goto LABEL_38;
      CriMana_Player__SetSeekPosition(v29, this->fields.frame, 0LL);
      if ( this->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0LL);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
      v34 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v30, v31, v32, v33);
      UnityEngine_WaitForEndOfFrame___ctor(v34, 0LL);
      this->fields._waitForEOF_5__4 = v34;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._waitForEOF_5__4,
        (System_Int32_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      this->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      goto LABEL_21;
    case 2:
      this->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields._prevTime_5__5) >= 2.0 )
      {
        this->fields._retry_5__3 = 1;
        p_retry_5__3 = &this->fields._retry_5__3;
      }
      else
      {
        if ( !_4__this )
LABEL_38:
          sub_B170D4();
LABEL_21:
        v41 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
        if ( !v41 )
          goto LABEL_38;
        if ( CriMana_Player__get_status(v41, 0LL) != 5 )
        {
          waitForEOF_5__4 = (Il2CppObject *)this->fields._waitForEOF_5__4;
          this->fields.__2__current = waitForEOF_5__4;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.__2__current,
            (System_Int32_array **)waitForEOF_5__4,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
          this->fields.__1__state = 2;
          return 1;
        }
        p_retry_5__3 = &this->fields._retry_5__3;
      }
      this->fields._waitForEOF_5__4 = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields._waitForEOF_5__4, 0LL, v23, v24, v25, v26, v27, v28);
      if ( !this->fields._retry_5__3 )
      {
        v68 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v47, v48, v49, v50);
        System_Func_bool____ctor(
          v68,
          (Il2CppObject *)_4__this,
          Method_CRIMoviePlayer__SeekSequence_b__26_0__,
          (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
        v73 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v69, v70, v71, v72);
        UnityEngine_WaitUntil___ctor(v73, v68, 0LL);
        this->fields.__2__current = (Il2CppObject *)v73;
        p__2__current = &this->fields.__2__current;
        sub_B16F98(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v73,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
        v22 = 3;
LABEL_35:
        *((_DWORD *)p__2__current - 2) = v22;
        return 1;
      }
      *p_retry_5__3 = 0;
      if ( !_4__this )
        goto LABEL_38;
LABEL_33:
      CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0LL);
      v55 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v51, v52, v53, v54);
      System_Func_bool____ctor(
        v55,
        (Il2CppObject *)_4__this,
        Method_CRIMoviePlayer__SeekSequence_b__26_1__,
        (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
      v60 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v56, v57, v58, v59);
      UnityEngine_WaitUntil___ctor(v60, v55, 0LL);
      this->fields.__2__current = (Il2CppObject *)v60;
      v61 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v61, (System_Int32_array **)v60, v62, v63, v64, v65, v66, v67);
      result = 1;
      *((_DWORD *)v61 - 2) = 1;
      return result;
    case 3:
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      v22 = 4;
      goto LABEL_35;
    case 4:
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      v22 = 5;
      goto LABEL_35;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      CRIMoviePlayer__DispTexture(_4__this, 1, 0LL);
      v43 = (UnityEngine_GameObject_o *)_4__this->fields.control;
      if ( !v43 )
        goto LABEL_38;
      v44 = UnityEngine_GameObject__get_gameObject(v43, 0LL);
      if ( !v44 )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive(v44, 0, 0LL);
      result = 0;
      _4__this->fields.isCanSkip = 1;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall CRIMoviePlayer__SeekSequence_d__26__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__SeekSequence_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CRIMoviePlayer__SeekSequence_d__26__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__SeekSequence_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CRIMoviePlayer__SeekSequence_d__26_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall CRIMoviePlayer__SeekSequence_d__26__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__SeekSequence_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CRIMoviePlayer__SeekSequence_d__26__System_IDisposable_Dispose(
        CRIMoviePlayer__SeekSequence_d__26_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CRIMoviePlayer__StopSequence_d__25___ctor(
        CRIMoviePlayer__StopSequence_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CRIMoviePlayer__StopSequence_d__25__MoveNext(
        CRIMoviePlayer__StopSequence_d__25_o *this,
        const MethodInfo *method)
{
  struct CRIMoviePlayer_o *_4__this; // x20
  CriMana_Player_o *v4; // x0
  CriMana_Player_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  v4 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
  if ( !v4 )
    goto LABEL_10;
  if ( !CriMana_Player__get_status(v4, 0LL) )
  {
LABEL_7:
    CRIMoviePlayer__EndCallBack(_4__this, 0LL);
    return 0;
  }
  v5 = *(CriMana_Player_o **)&_4__this->fields.renderMode;
  if ( !v5 )
LABEL_10:
    sub_B170D4();
  if ( CriMana_Player__get_status(v5, 0LL) == 6 )
    goto LABEL_7;
  this->fields.__2__current = 0LL;
  p__2__current = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v6, v7, v8, v9, v10, v11);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall CRIMoviePlayer__StopSequence_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__StopSequence_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CRIMoviePlayer__StopSequence_d__25__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__StopSequence_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_CRIMoviePlayer__StopSequence_d__25_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall CRIMoviePlayer__StopSequence_d__25__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__StopSequence_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CRIMoviePlayer__StopSequence_d__25__System_IDisposable_Dispose(
        CRIMoviePlayer__StopSequence_d__25_o *this,
        const MethodInfo *method)
{
  ;
}
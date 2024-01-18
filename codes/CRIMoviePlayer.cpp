void __fastcall CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Behaviour_o *touch; // x0
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Texture2D_o *v6; // x20
  UIWidget_o *v7; // x20
  int v8; // s0

  if ( (byte_418978C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, v3);
    byte_418978C = 1;
  }
  touch = (UnityEngine_Behaviour_o *)this->fields.touch;
  if ( !touch )
    goto LABEL_13;
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))touch->klass[1].vtable._3_ToString.method)(
                                 touch,
                                 touch->klass[2]._1.image);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Texture2D_o *)sub_B2C42C(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35417420(v6, 128, 128, 1, 0, 0LL);
    touch = (UnityEngine_Behaviour_o *)this->fields.touch;
    if ( touch )
    {
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, UnityEngine_Texture2D_o *, const char *))touch->klass[2]._1.gc_desc)(
        touch,
        v6,
        touch->klass[2]._1.name);
      v7 = (UIWidget_o *)this->fields.touch;
      *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_black(0LL);
      if ( v7 )
      {
        UIWidget__set_color(v7, *(UnityEngine_Color_o *)&v8, 0LL);
        goto LABEL_11;
      }
    }
LABEL_13:
    sub_B2C434(touch, method);
  }
LABEL_11:
  touch = (UnityEngine_Behaviour_o *)this->fields.touch;
  if ( !touch )
    goto LABEL_13;
  UnityEngine_Behaviour__set_enabled(touch, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__DispTexture(CRIMoviePlayer_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *touch; // x0

  touch = (UnityEngine_Component_o *)this->fields.touch;
  if ( !touch
    || (touch = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touch, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touch, flag, 0LL),
        (touch = (UnityEngine_Component_o *)this->fields.busyAnim) == 0LL)
    || (touch = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(touch, 0LL)) == 0LL )
  {
    sub_B2C434(touch, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touch, !flag, 0LL);
}


void __fastcall CRIMoviePlayer__Dispose(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *v2; // x19
  __int64 v3; // x8
  UnityEngine_Object_o *v4; // x20
  __int64 v5; // x8
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  v2 = this;
  if ( (byte_4189788 & 1) == 0 )
  {
    this = (CRIMoviePlayer_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189788 = 1;
  }
  v3 = *(_QWORD *)&v2->fields.renderMode;
  if ( !v3 )
    goto LABEL_19;
  v4 = *(UnityEngine_Object_o **)(v3 + 208);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = *(_QWORD *)&v2->fields.renderMode;
    if ( v5 )
    {
      this = *(CRIMoviePlayer_o **)(v5 + 208);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
        goto LABEL_14;
      }
    }
LABEL_19:
    sub_B2C434(this, method);
  }
LABEL_14:
  this = *(CRIMoviePlayer_o **)&v2->fields.renderMode;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(CRIMoviePlayer_o *, Il2CppMethodPointer))this->klass->vtable._5_OnDisable.method)(
    this,
    this->klass->vtable._6_CriInternalUpdate.methodPtr);
  v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(v7, 0LL);
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
    sub_B2C2F8(p_isPlaying, 0LL, v7, v8, v9, v10, v11, v12);
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
  CinemascopeSideFrame_o *klass; // x0
  CinemascopeSideFrame_o *v26; // x26
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  UIWidget_o *touch; // x25
  bool v35; // w24
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Nullable_int__o v42; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_int__o v43; // 0:x0.8

  if ( (byte_4189787 & 1) == 0 )
  {
    sub_B2C35C(&CinemascopeSideFrame_TypeInfo, name);
    sub_B2C35C(&Method_System_Nullable_int__get_HasValue__, v22);
    sub_B2C35C(&Method_System_Nullable_int__get_Value__, v23);
    byte_4189787 = 1;
  }
  v42 = 0LL;
  this[1].klass = (CRIMoviePlayer_c *)cinemascopeSideFrame;
  v24 = this + 1;
  BYTE2(this->fields.cinemascopeSideFrame) = isLoadModeToDefaultWhenDestory;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this[1],
    (System_Int32_array **)cinemascopeSideFrame,
    (System_String_array **)path,
    (System_String_array **)isCanSkip,
    (System_Boolean_array **)cpk,
    (System_Int32_array **)callBack,
    (System_Int32_array *)isCanControl,
    (System_Int32_array *)cinemascopeSideFrame);
  klass = (CinemascopeSideFrame_o *)this[1].klass;
  if ( !klass )
  {
    v26 = (CinemascopeSideFrame_o *)sub_B2C42C(CinemascopeSideFrame_TypeInfo);
    CinemascopeSideFrame___ctor(v26, 1, 1, 0LL);
    v24->klass = (CRIMoviePlayer_c *)v26;
    sub_B2C2F8((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    klass = (CinemascopeSideFrame_o *)v24->klass;
    if ( !v24->klass )
      goto LABEL_17;
  }
  v42 = CinemascopeSideFrame__Show(klass, name, 0LL);
  if ( (*(_QWORD *)&v42 & 0xFF00000000LL) != 0 )
  {
    touch = (UIWidget_o *)this->fields.touch;
    v43 = (System_Nullable_int__o)&v42;
    klass = (CinemascopeSideFrame_o *)System_Nullable_int___get_Value(
                                        v43,
                                        (const MethodInfo_2151C34 *)Method_System_Nullable_int__get_Value__);
    if ( !touch )
      goto LABEL_17;
    UIWidget__set_width(touch, (int32_t)klass, 0LL);
  }
  klass = (CinemascopeSideFrame_o *)this->fields.background;
  if ( !klass )
    goto LABEL_17;
  klass = (CinemascopeSideFrame_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)klass, 0LL);
  if ( !klass )
    goto LABEL_17;
  v35 = isCanSkip;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, v35, 0LL);
  LOBYTE(this->fields.cinemascopeSideFrame) = v35;
  BYTE1(this->fields.cinemascopeSideFrame) = isCanControl;
  CriManaMovieMaterial__set_applyTargetAlpha((CriManaMovieMaterial_o *)this, targetAlpha, 0LL);
  klass = *(CinemascopeSideFrame_o **)&this->fields.renderMode;
  *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) = fadeStartFrame;
  this->fields.isCanSkip = 0;
  if ( !klass )
    goto LABEL_17;
  if ( CriMana_Player__SetFile((CriMana_Player_o *)klass, cpk, path, 0, 0LL) )
  {
    *(_QWORD *)&this->fields.isPlaying = callBack;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.isPlaying,
      (System_Int32_array **)callBack,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    klass = *(CinemascopeSideFrame_o **)&this->fields.renderMode;
    if ( !klass )
      goto LABEL_17;
    CriMana_Player__SetVolume((CriMana_Player_o *)klass, volume, 0LL);
  }
  CRIMoviePlayer__DispTexture(this, 0, (const MethodInfo *)v36);
  klass = (CinemascopeSideFrame_o *)this->fields.control;
  if ( !klass
    || (klass = (CinemascopeSideFrame_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)klass, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B2C434(klass, v33);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, 0, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall CRIMoviePlayer__MovieSeekByRelativeTime(CRIMoviePlayer_o *this, int32_t sec, const MethodInfo *method)
{
  CriMana_Player_o *v4; // x0
  __int64 v6; // x1
  CriMana_FrameInfo_o *frameInfo; // x0
  int32_t frameNo; // w21
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  v4 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && this->fields.isCanSkip )
  {
    frameInfo = *(CriMana_FrameInfo_o **)&this->fields.renderMode;
    this->fields.isCanSkip = 0;
    if ( !frameInfo
      || (frameInfo = CriMana_Player__get_frameInfo((CriMana_Player_o *)frameInfo, 0LL)) == 0LL
      || !*(_QWORD *)&this->fields.renderMode
      || (frameNo = frameInfo->fields.frameNo,
          (frameInfo = CriMana_Player__get_frameInfo(*(CriMana_Player_o **)&this->fields.renderMode, 0LL)) == 0LL) )
    {
      sub_B2C434(frameInfo, v6);
    }
    v10 = CRIMoviePlayer__SeekSequence(this, LODWORD(frameInfo->fields.tunit) * sec / 1000 + frameNo, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  CRIMoviePlayer_o *v7; // x0
  const MethodInfo *v8; // x4
  __int64 v9; // x8
  UnityEngine_Object_o *v10; // x20
  __int64 v11; // x8
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_418978D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&TouchEffectManager_TypeInfo, v4);
    byte_418978D = 1;
  }
  if ( BYTE2(this->fields.cinemascopeSideFrame) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  }
  if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  }
  TouchEffectManager__SetBlock(0, 0LL);
  CRIMoviePlayer__SetPauseSound(v7, 0, 0, 0, v8);
  v9 = *(_QWORD *)&this->fields.renderMode;
  if ( v9 )
  {
    v10 = *(UnityEngine_Object_o **)(v9 + 208);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (WebViewManager_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v11 = *(_QWORD *)&this->fields.renderMode;
      if ( v11 )
      {
        Instance = *(WebViewManager_o **)(v11 + 208);
        if ( Instance )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
          goto LABEL_20;
        }
      }
LABEL_21:
      sub_B2C434(Instance, v6);
    }
  }
LABEL_20:
  CriManaMovieMaterial__OnDestroy((CriManaMovieMaterial_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__OnMaterialAvailableChanged(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  struct System_String_o *moviePath; // x20
  UnityEngine_Object_o *touch; // x20
  __int64 v5; // x1
  UnityEngine_Texture_o *v6; // x0
  struct System_String_o *v7; // x19

  if ( (byte_418978F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418978F = 1;
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
        v6 = (UnityEngine_Texture_o *)this->fields.touch;
        if ( !v6
          || (v7 = this->fields._moviePath,
              v6 = (UnityEngine_Texture_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, _QWORD))&v6->klass[1]._2.thread_static_fields_offset)(
                                              v6,
                                              *(_QWORD *)&v6->klass[1]._2.token),
              !v7) )
        {
          sub_B2C434(v6, v5);
        }
        UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v7, v6, 0LL);
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
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4189789 & 1) == 0 )
  {
    sub_B2C35C(&CRIMoviePlayer__PlaySequence_d__24_TypeInfo, isBgmPause);
    byte_4189789 = 1;
  }
  v9 = sub_B2C42C(CRIMoviePlayer__PlaySequence_d__24_TypeInfo);
  CRIMoviePlayer__PlaySequence_d__24___ctor((CRIMoviePlayer__PlaySequence_d__24_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418978B & 1) == 0 )
  {
    sub_B2C35C(&CRIMoviePlayer__SeekSequence_d__26_TypeInfo, *(_QWORD *)&frame);
    byte_418978B = 1;
  }
  v5 = sub_B2C42C(CRIMoviePlayer__SeekSequence_d__26_TypeInfo);
  CRIMoviePlayer__SeekSequence_d__26___ctor((CRIMoviePlayer__SeekSequence_d__26_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 32) = frame;
  return (System_Collections_IEnumerator_o *)v5;
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418978E & 1) == 0 )
  {
    sub_B2C35C(&BgmManager_TypeInfo, isVoicePause);
    sub_B2C35C(&SeManager_TypeInfo, v8);
    byte_418978E = 1;
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
    sub_B2C434(0LL, method);
  CriMana_Player__SetVolume(v3, volume, 0LL);
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__StopSequence(
        CRIMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_418978A & 1) == 0 )
  {
    sub_B2C35C(&CRIMoviePlayer__StopSequence_d__25_TypeInfo, method);
    byte_418978A = 1;
  }
  v3 = sub_B2C42C(CRIMoviePlayer__StopSequence_d__25_TypeInfo);
  CRIMoviePlayer__StopSequence_d__25___ctor((CRIMoviePlayer__StopSequence_d__25_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CRIMoviePlayer__Update(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v3; // x0
  const MethodInfo *v4; // x1
  CriMana_Player_o *v5; // x0
  const MethodInfo *v6; // x1

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
    v5 = *(CriMana_Player_o **)&this->fields.renderMode;
    if ( !v5 )
      goto LABEL_14;
    if ( CriMana_Player__get_status(v5, 0LL) == 5
      && BYTE3(this->fields.ambisonicSource)
      && *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) )
    {
      v5 = *(CriMana_Player_o **)&this->fields.renderMode;
      if ( v5 )
      {
        if ( CriMana_Player__GetDisplayedFrameNo(v5, 0LL) >= *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) )
        {
          CRIMoviePlayer__EndCallBack(this, v6);
          *(_DWORD *)(&this->fields.isLoadModeToDefaultWhenDestory + 2) = 0;
        }
        return;
      }
LABEL_14:
      sub_B2C434(v5, v4);
    }
  }
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__26_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v2; // x0

  v2 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( !v2 )
    sub_B2C434(0LL, method);
  return CriMana_Player__get_frameInfo(v2, 0LL) != 0LL;
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__26_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v2; // x0

  v2 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( !v2 )
    sub_B2C434(0LL, method);
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
  CRIMoviePlayer__PlaySequence_d__24_o *v2; // x19
  __int64 v3; // x1
  struct CRIMoviePlayer_o *_4__this; // x20
  bool v5; // w21
  Il2CppObject **v6; // x19
  int v7; // w8
  Il2CppObject **v8; // x19
  int v9; // w8
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4184EB3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (CRIMoviePlayer__PlaySequence_d__24_o *)sub_B2C35C(&TouchEffectManager_TypeInfo, v3);
    byte_4184EB3 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (CRIMoviePlayer__PlaySequence_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_56;
      CommonUI__SetLoadMode((CommonUI_o *)this, 8, 0LL);
      if ( !_4__this )
        goto LABEL_56;
      goto LABEL_14;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
LABEL_14:
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
        goto LABEL_18;
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 6 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, 0LL);
        v5 = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return v5;
      }
LABEL_18:
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      CriMana_Player__Prepare((CriMana_Player_o *)this, 0LL);
LABEL_20:
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 4 )
      {
        CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
        if ( (BYTE3(TouchEffectManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TouchEffectManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
        }
        v5 = 1;
        TouchEffectManager__SetBlock(1, 0LL);
        v2->fields.__2__current = 0LL;
        v6 = &v2->fields.__2__current;
        sub_B2C2F8(v6, 0LL);
        v7 = 3;
        goto LABEL_46;
      }
      v2->fields.__2__current = 0LL;
      v8 = &v2->fields.__2__current;
      sub_B2C2F8(v8, 0LL);
      v9 = 2;
      goto LABEL_54;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
        goto LABEL_31;
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 7 )
        goto LABEL_31;
      goto LABEL_20;
    case 3:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_34;
      goto LABEL_56;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
        goto LABEL_31;
      this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 7 )
      {
LABEL_34:
        this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
        if ( !this )
          goto LABEL_56;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 5 )
        {
          this = *(CRIMoviePlayer__PlaySequence_d__24_o **)&_4__this->fields.renderMode;
          if ( !this )
            goto LABEL_56;
          this = (CRIMoviePlayer__PlaySequence_d__24_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0LL);
          if ( !this )
            goto LABEL_56;
          if ( !this->fields.__1__state )
          {
            v2->fields.__2__current = 0LL;
            v8 = &v2->fields.__2__current;
            sub_B2C2F8(v8, 0LL);
            v9 = 4;
LABEL_54:
            *((_DWORD *)v8 - 2) = v9;
            return 1;
          }
        }
        CRIMoviePlayer__SetPauseSound(
          _4__this,
          v2->fields.isVoicePause,
          v2->fields.isBgmPause,
          v2->fields.isSePause,
          0LL);
        if ( LOBYTE(_4__this->fields.cinemascopeSideFrame) )
        {
          this = (CRIMoviePlayer__PlaySequence_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_56;
          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
        }
        this = (CRIMoviePlayer__PlaySequence_d__24_o *)_4__this->fields.touch;
        if ( this )
        {
          (*(void (__fastcall **)(CRIMoviePlayer__PlaySequence_d__24_o *, struct System_String_o *, _QWORD))&this->klass[1]._2.thread_static_fields_offset)(
            this,
            _4__this->fields._moviePath,
            *(_QWORD *)&this->klass[1]._2.token);
          this = (CRIMoviePlayer__PlaySequence_d__24_o *)_4__this->fields.touch;
          if ( this )
          {
            this = (CRIMoviePlayer__PlaySequence_d__24_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( this )
            {
              v5 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v2->fields.__2__current = 0LL;
              v6 = &v2->fields.__2__current;
              sub_B2C2F8(v6, 0LL);
              v7 = 5;
LABEL_46:
              *((_DWORD *)v6 - 2) = v7;
              return v5;
            }
          }
        }
LABEL_56:
        sub_B2C434(this, method);
      }
LABEL_31:
      CRIMoviePlayer__EndCallBack(_4__this, 0LL);
      return 0;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      this = (CRIMoviePlayer__PlaySequence_d__24_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_56;
      this = (CRIMoviePlayer__PlaySequence_d__24_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v5 = 0;
      _4__this->fields.isCanSkip = 1;
      return v5;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CRIMoviePlayer__PlaySequence_d__24_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  CRIMoviePlayer__SeekSequence_d__26_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct CRIMoviePlayer_o *_4__this; // x20
  int32_t frame; // w21
  Il2CppObject **p__2__current; // x19
  int v11; // w8
  UnityEngine_WaitForEndOfFrame_o *v12; // x21
  bool *p_retry_5__3; // x22
  bool result; // w0
  Il2CppObject *waitForEOF_5__4; // x1
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20
  Il2CppObject **v18; // x19
  System_Func_bool__o *v19; // x21
  UnityEngine_WaitUntil_o *v20; // x20

  v2 = this;
  if ( (byte_4184EB4 & 1) == 0 )
  {
    sub_B2C35C(&Method_CRIMoviePlayer__SeekSequence_b__26_0__, method);
    sub_B2C35C(&Method_CRIMoviePlayer__SeekSequence_b__26_1__, v3);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v4);
    sub_B2C35C(&System_Func_bool__TypeInfo, v5);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    this = (CRIMoviePlayer__SeekSequence_d__26_o *)sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v7);
    byte_4184EB4 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_38;
      frame = v2->fields.frame;
      this = (CRIMoviePlayer__SeekSequence_d__26_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
      if ( !this )
        goto LABEL_38;
      v2->fields.frame = UnityEngine_Mathf__Clamp_40637828(frame, 0, *(_DWORD *)&this->fields._isPaused_5__2 - 1, 0LL);
      this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_38;
      v2->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0LL);
      CRIMoviePlayer__DispTexture(_4__this, 0, 0LL);
      this = (CRIMoviePlayer__SeekSequence_d__26_o *)_4__this->fields.control;
      if ( !this )
        goto LABEL_38;
      this = (CRIMoviePlayer__SeekSequence_d__26_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v2->fields._retry_5__3 = 0;
      goto LABEL_33;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_38;
      CriMana_Player__SetSeekPosition((CriMana_Player_o *)this, v2->fields.frame, 0LL);
      if ( v2->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0LL);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
      v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v12, 0LL);
      v2->fields._waitForEOF_5__4 = v12;
      sub_B2C2F8(&v2->fields._waitForEOF_5__4, v12);
      v2->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      goto LABEL_21;
    case 2:
      v2->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v2->fields._prevTime_5__5) >= 2.0 )
      {
        v2->fields._retry_5__3 = 1;
        p_retry_5__3 = &v2->fields._retry_5__3;
      }
      else
      {
        if ( !_4__this )
LABEL_38:
          sub_B2C434(this, method);
LABEL_21:
        this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
        if ( !this )
          goto LABEL_38;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 5 )
        {
          waitForEOF_5__4 = (Il2CppObject *)v2->fields._waitForEOF_5__4;
          v2->fields.__2__current = waitForEOF_5__4;
          sub_B2C2F8(&v2->fields.__2__current, waitForEOF_5__4);
          v2->fields.__1__state = 2;
          return 1;
        }
        p_retry_5__3 = &v2->fields._retry_5__3;
      }
      v2->fields._waitForEOF_5__4 = 0LL;
      sub_B2C2F8(&v2->fields._waitForEOF_5__4, 0LL);
      if ( !v2->fields._retry_5__3 )
      {
        v19 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v19,
          (Il2CppObject *)_4__this,
          Method_CRIMoviePlayer__SeekSequence_b__26_0__,
          (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
        v20 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v20, v19, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v20;
        p__2__current = &v2->fields.__2__current;
        sub_B2C2F8(p__2__current, v20);
        v11 = 3;
LABEL_35:
        *((_DWORD *)p__2__current - 2) = v11;
        return 1;
      }
      *p_retry_5__3 = 0;
      if ( !_4__this )
        goto LABEL_38;
LABEL_33:
      CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0LL);
      v16 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v16,
        (Il2CppObject *)_4__this,
        Method_CRIMoviePlayer__SeekSequence_b__26_1__,
        (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
      v17 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v17, v16, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v17;
      v18 = &v2->fields.__2__current;
      sub_B2C2F8(v18, v17);
      result = 1;
      *((_DWORD *)v18 - 2) = 1;
      return result;
    case 3:
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B2C2F8(p__2__current, 0LL);
      v11 = 4;
      goto LABEL_35;
    case 4:
      v2->fields.__2__current = 0LL;
      p__2__current = &v2->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B2C2F8(p__2__current, 0LL);
      v11 = 5;
      goto LABEL_35;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      CRIMoviePlayer__DispTexture(_4__this, 1, 0LL);
      this = (CRIMoviePlayer__SeekSequence_d__26_o *)_4__this->fields.control;
      if ( !this )
        goto LABEL_38;
      this = (CRIMoviePlayer__SeekSequence_d__26_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CRIMoviePlayer__SeekSequence_d__26_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  CRIMoviePlayer__StopSequence_d__25_o *v3; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  v3 = this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  this = *(CRIMoviePlayer__StopSequence_d__25_o **)&_4__this->fields.renderMode;
  if ( !this )
    goto LABEL_10;
  if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
  {
LABEL_7:
    CRIMoviePlayer__EndCallBack(_4__this, 0LL);
    return 0;
  }
  this = *(CRIMoviePlayer__StopSequence_d__25_o **)&_4__this->fields.renderMode;
  if ( !this )
LABEL_10:
    sub_B2C434(this, method);
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 6 )
    goto LABEL_7;
  v3->fields.__2__current = 0LL;
  p__2__current = &v3->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_CRIMoviePlayer__StopSequence_d__25_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
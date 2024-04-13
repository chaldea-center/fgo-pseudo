void __fastcall CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Behaviour_o *touch; // x0
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Texture2D_o *v10; // x20
  UIWidget_o *v11; // x20
  int v12; // s0

  if ( (byte_42EB5DE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v5, v6, v7);
    byte_42EB5DE = 1;
  }
  touch = (UnityEngine_Behaviour_o *)this->fields.touch;
  if ( !touch )
    goto LABEL_13;
  v9 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, void *))touch->klass[1].vtable._3_ToString.method)(
                                 touch,
                                 touch->klass[2]._1.image);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(v9, 0LL, 0LL) )
  {
    v10 = (UnityEngine_Texture2D_o *)sub_B5D694(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_35722864(v10, 128, 128, 1, 0, 0LL);
    touch = (UnityEngine_Behaviour_o *)this->fields.touch;
    if ( touch )
    {
      ((void (__fastcall *)(UnityEngine_Behaviour_o *, UnityEngine_Texture2D_o *, const char *))touch->klass[2]._1.gc_desc)(
        touch,
        v10,
        touch->klass[2]._1.name);
      v11 = (UIWidget_o *)this->fields.touch;
      *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_black(0LL);
      if ( v11 )
      {
        UIWidget__set_color(v11, *(UnityEngine_Color_o *)&v12, 0LL);
        goto LABEL_11;
      }
    }
LABEL_13:
    sub_B5D69C(touch, method);
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
    sub_B5D69C(touch, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)touch, !flag, 0LL);
}


void __fastcall CRIMoviePlayer__Dispose(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CRIMoviePlayer_o *v4; // x19
  __int64 v5; // x8
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x8
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v9; // x19

  v4 = this;
  if ( (byte_42EB5DA & 1) == 0 )
  {
    this = (CRIMoviePlayer_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5DA = 1;
  }
  v5 = *(_QWORD *)&v4->fields.renderMode;
  if ( !v5 )
    goto LABEL_19;
  v6 = *(UnityEngine_Object_o **)(v5 + 208);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = *(_QWORD *)&v4->fields.renderMode;
    if ( v7 )
    {
      this = *(CRIMoviePlayer_o **)(v7 + 208);
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
        goto LABEL_14;
      }
    }
LABEL_19:
    sub_B5D69C(this, method);
  }
LABEL_14:
  this = *(CRIMoviePlayer_o **)&v4->fields.renderMode;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(CRIMoviePlayer_o *, Il2CppMethodPointer))this->klass->vtable._5_OnDisable.method)(
    this,
    this->klass->vtable._6_CriInternalUpdate.methodPtr);
  v9 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(v9, 0LL);
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
    sub_B5D560(p_isPlaying, 0LL, v7, v8, v9, v10, v11, v12);
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  CRIMoviePlayer_o *v28; // x27
  CinemascopeSideFrame_o *klass; // x0
  CinemascopeSideFrame_o *v30; // x26
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x1
  UIWidget_o *touch; // x25
  bool v39; // w24
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Nullable_int__o v46; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_int__o v47; // 0:x0.8

  if ( (byte_42EB5D9 & 1) == 0 )
  {
    sub_B5D5C4(&CinemascopeSideFrame_TypeInfo, (_DWORD)name, (_DWORD)path, isCanSkip);
    sub_B5D5C4(&Method_System_Nullable_int__get_HasValue__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Nullable_int__get_Value__, v25, v26, v27);
    byte_42EB5D9 = 1;
  }
  v46 = 0LL;
  this[1].klass = (CRIMoviePlayer_c *)cinemascopeSideFrame;
  v28 = this + 1;
  BYTE2(this->fields.cinemascopeSideFrame) = isLoadModeToDefaultWhenDestory;
  sub_B5D560(
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
    v30 = (CinemascopeSideFrame_o *)sub_B5D694(CinemascopeSideFrame_TypeInfo);
    CinemascopeSideFrame___ctor(v30, 1, 1, 0LL);
    v28->klass = (CRIMoviePlayer_c *)v30;
    sub_B5D560((BattleServantConfConponent_o *)&this[1], (System_Int32_array **)v30, v31, v32, v33, v34, v35, v36);
    klass = (CinemascopeSideFrame_o *)v28->klass;
    if ( !v28->klass )
      goto LABEL_17;
  }
  v46 = CinemascopeSideFrame__Show(klass, name, 0LL);
  if ( (*(_QWORD *)&v46 & 0xFF00000000LL) != 0 )
  {
    touch = (UIWidget_o *)this->fields.touch;
    v47 = (System_Nullable_int__o)&v46;
    klass = (CinemascopeSideFrame_o *)System_Nullable_int___get_Value(
                                        v47,
                                        (const MethodInfo_234B308 *)Method_System_Nullable_int__get_Value__);
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
  v39 = isCanSkip;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, v39, 0LL);
  LOBYTE(this->fields.cinemascopeSideFrame) = v39;
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
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.isPlaying,
      (System_Int32_array **)callBack,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    klass = *(CinemascopeSideFrame_o **)&this->fields.renderMode;
    if ( !klass )
      goto LABEL_17;
    CriMana_Player__SetVolume((CriMana_Player_o *)klass, volume, 0LL);
  }
  CRIMoviePlayer__DispTexture(this, 0, (const MethodInfo *)v40);
  klass = (CinemascopeSideFrame_o *)this->fields.control;
  if ( !klass
    || (klass = (CinemascopeSideFrame_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)klass, 0LL)) == 0LL )
  {
LABEL_17:
    sub_B5D69C(klass, v37);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
      sub_B5D69C(frameInfo, v6);
    }
    v10 = CRIMoviePlayer__SeekSequence(this, LODWORD(frameInfo->fields.tunit) * sec / 1000 + frameNo, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  CRIMoviePlayer_o *v13; // x0
  const MethodInfo *v14; // x4
  __int64 v15; // x8
  UnityEngine_Object_o *v16; // x20
  __int64 v17; // x8
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_42EB5DF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TouchEffectManager_TypeInfo, v8, v9, v10);
    byte_42EB5DF = 1;
  }
  if ( BYTE2(this->fields.cinemascopeSideFrame) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  CRIMoviePlayer__SetPauseSound(v13, 0, 0, 0, v14);
  v15 = *(_QWORD *)&this->fields.renderMode;
  if ( v15 )
  {
    v16 = *(UnityEngine_Object_o **)(v15 + 208);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = (WebViewManager_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v17 = *(_QWORD *)&this->fields.renderMode;
      if ( v17 )
      {
        Instance = *(WebViewManager_o **)(v17 + 208);
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
          UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
          goto LABEL_20;
        }
      }
LABEL_21:
      sub_B5D69C(Instance, v12);
    }
  }
LABEL_20:
  CriManaMovieMaterial__OnDestroy((CriManaMovieMaterial_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__OnMaterialAvailableChanged(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_String_o *moviePath; // x20
  UnityEngine_Object_o *touch; // x20
  __int64 v7; // x1
  UnityEngine_Texture_o *v8; // x0
  struct System_String_o *v9; // x19

  if ( (byte_42EB5E1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5E1 = 1;
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
        v8 = (UnityEngine_Texture_o *)this->fields.touch;
        if ( !v8
          || (v9 = this->fields._moviePath,
              v8 = (UnityEngine_Texture_o *)(*(__int64 (__fastcall **)(UnityEngine_Texture_o *, _QWORD))&v8->klass[1]._2.thread_static_fields_offset)(
                                              v8,
                                              *(_QWORD *)&v8->klass[1]._2.token),
              !v9) )
        {
          sub_B5D69C(v8, v7);
        }
        UnityEngine_Material__set_mainTexture((UnityEngine_Material_o *)v9, v8, 0LL);
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

  if ( (byte_42EB5DB & 1) == 0 )
  {
    sub_B5D5C4(&CRIMoviePlayer__PlaySequence_d__24_TypeInfo, isBgmPause, isSePause, isVoicePause);
    byte_42EB5DB = 1;
  }
  v9 = sub_B5D694(CRIMoviePlayer__PlaySequence_d__24_TypeInfo);
  CRIMoviePlayer__PlaySequence_d__24___ctor((CRIMoviePlayer__PlaySequence_d__24_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_BYTE *)(v9 + 41) = isBgmPause;
  *(_BYTE *)(v9 + 42) = isSePause;
  *(_BYTE *)(v9 + 40) = isVoicePause;
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__SeekSequence(
        CRIMoviePlayer_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB5DD & 1) == 0 )
  {
    sub_B5D5C4(&CRIMoviePlayer__SeekSequence_d__26_TypeInfo, frame, (_DWORD)method, v3);
    byte_42EB5DD = 1;
  }
  v6 = sub_B5D694(CRIMoviePlayer__SeekSequence_d__26_TypeInfo);
  CRIMoviePlayer__SeekSequence_d__26___ctor((CRIMoviePlayer__SeekSequence_d__26_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 32) = frame;
  return (System_Collections_IEnumerator_o *)v6;
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
    sub_B5D69C(0LL, method);
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
  char v8; // w1
  char v9; // w2
  __int64 v10; // x3

  if ( (byte_42EB5E0 & 1) == 0 )
  {
    sub_B5D5C4(&BgmManager_TypeInfo, isVoicePause, isBgmPause, isSePause);
    sub_B5D5C4(&SeManager_TypeInfo, v8, v9, v10);
    byte_42EB5E0 = 1;
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
    sub_B5D69C(0LL, method);
  CriMana_Player__SetVolume(v3, volume, 0LL);
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__StopSequence(
        CRIMoviePlayer_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB5DC & 1) == 0 )
  {
    sub_B5D5C4(&CRIMoviePlayer__StopSequence_d__25_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5DC = 1;
  }
  v5 = sub_B5D694(CRIMoviePlayer__StopSequence_d__25_TypeInfo);
  CRIMoviePlayer__StopSequence_d__25___ctor((CRIMoviePlayer__StopSequence_d__25_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
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
      sub_B5D69C(v5, v4);
    }
  }
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__26_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v2; // x0

  v2 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( !v2 )
    sub_B5D69C(0LL, method);
  return CriMana_Player__get_frameInfo(v2, 0LL) != 0LL;
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__26_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *v2; // x0

  v2 = *(CriMana_Player_o **)&this->fields.renderMode;
  if ( !v2 )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  CRIMoviePlayer__PlaySequence_d__24_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct CRIMoviePlayer_o *_4__this; // x20
  bool v9; // w21
  Il2CppObject **v10; // x19
  int v11; // w8
  Il2CppObject **v12; // x19
  int v13; // w8
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E5E3B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    this = (CRIMoviePlayer__PlaySequence_d__24_o *)sub_B5D5C4(&TouchEffectManager_TypeInfo, v5, v6, v7);
    byte_42E5E3B = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      this = (CRIMoviePlayer__PlaySequence_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_56;
      CommonUI__SetLoadMode((CommonUI_o *)this, 8, 0LL);
      if ( !_4__this )
        goto LABEL_56;
      goto LABEL_14;
    case 1:
      v4->fields.__1__state = -1;
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
        v4->fields.__2__current = 0LL;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v9 = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return v9;
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
        v9 = 1;
        TouchEffectManager__SetBlock(1, 0LL);
        v4->fields.__2__current = 0LL;
        v10 = &v4->fields.__2__current;
        sub_B5D560(v10);
        v11 = 3;
        goto LABEL_46;
      }
      v4->fields.__2__current = 0LL;
      v12 = &v4->fields.__2__current;
      sub_B5D560(v12);
      v13 = 2;
      goto LABEL_54;
    case 2:
      v4->fields.__1__state = -1;
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
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_34;
      goto LABEL_56;
    case 4:
      v4->fields.__1__state = -1;
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
            v4->fields.__2__current = 0LL;
            v12 = &v4->fields.__2__current;
            sub_B5D560(v12);
            v13 = 4;
LABEL_54:
            *((_DWORD *)v12 - 2) = v13;
            return 1;
          }
        }
        CRIMoviePlayer__SetPauseSound(
          _4__this,
          v4->fields.isVoicePause,
          v4->fields.isBgmPause,
          v4->fields.isSePause,
          0LL);
        if ( LOBYTE(_4__this->fields.cinemascopeSideFrame) )
        {
          this = (CRIMoviePlayer__PlaySequence_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v9 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v4->fields.__2__current = 0LL;
              v10 = &v4->fields.__2__current;
              sub_B5D560(v10);
              v11 = 5;
LABEL_46:
              *((_DWORD *)v10 - 2) = v11;
              return v9;
            }
          }
        }
LABEL_56:
        sub_B5D69C(this, method);
      }
LABEL_31:
      CRIMoviePlayer__EndCallBack(_4__this, 0LL);
      return 0;
    case 5:
      v4->fields.__1__state = -1;
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
      v9 = 0;
      _4__this->fields.isCanSkip = 1;
      return v9;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CRIMoviePlayer__PlaySequence_d__24_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  CRIMoviePlayer__SeekSequence_d__26_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct CRIMoviePlayer_o *_4__this; // x20
  int32_t frame; // w21
  Il2CppObject **p__2__current; // x19
  int v23; // w8
  UnityEngine_WaitForEndOfFrame_o *v24; // x21
  bool *p_retry_5__3; // x22
  bool result; // w0
  System_Func_bool__o *v27; // x21
  UnityEngine_WaitUntil_o *v28; // x20
  Il2CppObject **v29; // x19
  System_Func_bool__o *v30; // x21
  UnityEngine_WaitUntil_o *v31; // x20

  v4 = this;
  if ( (byte_42E5E3C & 1) == 0 )
  {
    sub_B5D5C4(&Method_CRIMoviePlayer__SeekSequence_b__26_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CRIMoviePlayer__SeekSequence_b__26_1__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v14, v15, v16);
    this = (CRIMoviePlayer__SeekSequence_d__26_o *)sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
    byte_42E5E3C = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_38;
      frame = v4->fields.frame;
      this = (CRIMoviePlayer__SeekSequence_d__26_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
      if ( !this )
        goto LABEL_38;
      v4->fields.frame = UnityEngine_Mathf__Clamp_41572460(frame, 0, *(_DWORD *)&this->fields._isPaused_5__2 - 1, 0LL);
      this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_38;
      v4->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0LL);
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
      v4->fields._retry_5__3 = 0;
      goto LABEL_33;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
      if ( !this )
        goto LABEL_38;
      CriMana_Player__SetSeekPosition((CriMana_Player_o *)this, v4->fields.frame, 0LL);
      if ( v4->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0LL);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
      v24 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v24, 0LL);
      v4->fields._waitForEOF_5__4 = v24;
      sub_B5D560(&v4->fields._waitForEOF_5__4);
      v4->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      goto LABEL_21;
    case 2:
      v4->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__5) >= 2.0 )
      {
        v4->fields._retry_5__3 = 1;
        p_retry_5__3 = &v4->fields._retry_5__3;
      }
      else
      {
        if ( !_4__this )
LABEL_38:
          sub_B5D69C(this, method);
LABEL_21:
        this = *(CRIMoviePlayer__SeekSequence_d__26_o **)&_4__this->fields.renderMode;
        if ( !this )
          goto LABEL_38;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 5 )
        {
          v4->fields.__2__current = (Il2CppObject *)v4->fields._waitForEOF_5__4;
          sub_B5D560(&v4->fields.__2__current);
          v4->fields.__1__state = 2;
          return 1;
        }
        p_retry_5__3 = &v4->fields._retry_5__3;
      }
      v4->fields._waitForEOF_5__4 = 0LL;
      sub_B5D560(&v4->fields._waitForEOF_5__4);
      if ( !v4->fields._retry_5__3 )
      {
        v30 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v30,
          (Il2CppObject *)_4__this,
          Method_CRIMoviePlayer__SeekSequence_b__26_0__,
          (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
        v31 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v31, v30, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v31;
        p__2__current = &v4->fields.__2__current;
        sub_B5D560(p__2__current);
        v23 = 3;
LABEL_35:
        *((_DWORD *)p__2__current - 2) = v23;
        return 1;
      }
      *p_retry_5__3 = 0;
      if ( !_4__this )
        goto LABEL_38;
LABEL_33:
      CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0LL);
      v27 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(
        v27,
        (Il2CppObject *)_4__this,
        Method_CRIMoviePlayer__SeekSequence_b__26_1__,
        (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
      v28 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v28, v27, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v28;
      v29 = &v4->fields.__2__current;
      sub_B5D560(v29);
      result = 1;
      *((_DWORD *)v29 - 2) = 1;
      return result;
    case 3:
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B5D560(p__2__current);
      v23 = 4;
      goto LABEL_35;
    case 4:
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_B5D560(p__2__current);
      v23 = 5;
      goto LABEL_35;
    case 5:
      v4->fields.__1__state = -1;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CRIMoviePlayer__SeekSequence_d__26_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    sub_B5D69C(this, method);
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 6 )
    goto LABEL_7;
  v3->fields.__2__current = 0LL;
  p__2__current = &v3->fields.__2__current;
  sub_B5D560(p__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_CRIMoviePlayer__StopSequence_d__25_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
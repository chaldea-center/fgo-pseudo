void CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0);
}


void CRIMoviePlayer__ActiveAnim(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *busyAnim; // x0

  busyAnim = this->fields.busyAnim;
  if ( !busyAnim || (busyAnim = UnityEngine_GameObject__get_gameObject(busyAnim, 0)) == 0 )
    sub_2213CDC(busyAnim, method);
  UnityEngine_GameObject__SetActive(busyAnim, 1, 0);
}


void CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  UIWidget_o *texture; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  UnityEngine_Texture2D_o *v7; // x20
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596A47B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    byte_596A47B = 1;
  }
  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture )
    goto LABEL_12;
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                 texture,
                                 texture->klass->vtable._26_get_mainTexture.method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    v7 = (UnityEngine_Texture2D_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_83318944(v7, 128, 128, 1, 0, 0);
    texture = (UIWidget_o *)this->fields.texture;
    if ( texture )
    {
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._27_set_mainTexture.methodPtr)(
        texture,
        v7,
        texture->klass->vtable._27_set_mainTexture.method);
      texture = (UIWidget_o *)this->fields.texture;
      if ( texture )
      {
        v8.fields.r = 0.0;
        v8.fields.g = 0.0;
        v8.fields.b = 0.0;
        v8.fields.a = 1.0;
        UIWidget__set_color(texture, v8, 0);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_2213CDC(texture, method);
  }
LABEL_10:
  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)texture, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void CRIMoviePlayer__DispTexture(CRIMoviePlayer_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *texture; // x0

  texture = (UnityEngine_Component_o *)this->fields.texture;
  if ( !texture
    || (texture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(texture, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)texture, flag, 0),
        (texture = (UnityEngine_Component_o *)this->fields.background) == 0)
    || (texture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(texture, 0)) == 0 )
  {
    sub_2213CDC(texture, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)texture, !flag, 0);
}


void CRIMoviePlayer__Dispose(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CRIMoviePlayer_o *v3; // x19
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *playerHolder_k__BackingField; // x20
  struct CriMana_Player_o *v6; // x8
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *v12; // x19

  v3 = this;
  if ( (byte_596A476 & 1) == 0 )
  {
    this = (CRIMoviePlayer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A476 = 1;
  }
  player_k__BackingField = v3->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    goto LABEL_16;
  playerHolder_k__BackingField = (UnityEngine_Object_o *)player_k__BackingField->fields._playerHolder_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(playerHolder_k__BackingField, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields._player_k__BackingField;
    if ( v6 )
    {
      this = (CRIMoviePlayer_o *)v6->fields._playerHolder_k__BackingField;
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_2213CDC(this, method);
  }
LABEL_12:
  this = (CRIMoviePlayer_o *)v3->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_16;
  ((void (__fastcall *)(CRIMoviePlayer_o *, const MethodInfo *))this->klass->vtable._5_OnDisable.methodPtr)(
    this,
    this->klass->vtable._5_OnDisable.method);
  v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  UnityEngine_Object__Destroy_83459800(v12, 0);
}


void CRIMoviePlayer__EndCallBack(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CinemascopeSideFrame_o *cinemascopeSideFrame; // x0
  struct System_Action_o *callBack; // x8
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  cinemascopeSideFrame = this->fields.cinemascopeSideFrame;
  if ( cinemascopeSideFrame )
    CinemascopeSideFrame__Hide(cinemascopeSideFrame, method);
  callBack = this->fields.callBack;
  if ( callBack )
  {
    ((void (__fastcall *)(intptr_t, intptr_t))callBack->fields.invoke_impl)(
      callBack->fields.method_code,
      callBack->fields.method);
    this->fields.callBack = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callBack, 0, v5, v6, v7, v8, v9, v10);
  }
  ActionExtensions__Call(this->fields.nonDeleteCallBack, 0);
}


void CRIMoviePlayer__HideCinemascopeSideFrame(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CinemascopeSideFrame_o *cinemascopeSideFrame; // x0

  cinemascopeSideFrame = this->fields.cinemascopeSideFrame;
  if ( cinemascopeSideFrame )
    CinemascopeSideFrame__HideLater(cinemascopeSideFrame, method);
}


// local variable allocation has failed, the output may be wrong!
void CRIMoviePlayer__Initialize(
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
        System_Action_o *nonDeleteCallBack,
        System_Action_o *startCallBack,
        bool enableSkipButton,
        const MethodInfo *method)
{
  const MethodInfo *v25; // x2
  CinemascopeSideFrame_o *Value; // x0
  __int64 v27; // x26
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  _BOOL8 v34; // x1
  UIWidget_o *texture; // x25
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  System_Nullable_int__o v54; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596A475 & 1) == 0 )
  {
    sub_2213A60(&CinemascopeSideFrame_TypeInfo);
    sub_2213A60(&Method_System_Nullable_int__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_int__get_Value__);
    byte_596A475 = 1;
  }
  v54 = 0;
  this->fields.isLoadModeToDefaultWhenDestory = isLoadModeToDefaultWhenDestory;
  this->fields.cinemascopeSideFrame = cinemascopeSideFrame;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cinemascopeSideFrame,
    (int32_t)cinemascopeSideFrame,
    path,
    (System_String_o *)isCanSkip,
    (int32_t)cpk,
    (int32_t)callBack,
    isCanControl,
    (bool)cinemascopeSideFrame);
  Value = this->fields.cinemascopeSideFrame;
  if ( !Value )
  {
    v27 = sub_2213CCC(CinemascopeSideFrame_TypeInfo);
    *(_WORD *)(v27 + 16) = 257;
    System_Object___ctor((Il2CppObject *)v27, 0);
    *(_WORD *)(v27 + 16) = 257;
    this->fields.cinemascopeSideFrame = (struct CinemascopeSideFrame_o *)v27;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cinemascopeSideFrame,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    Value = this->fields.cinemascopeSideFrame;
    if ( !Value )
      goto LABEL_20;
  }
  v54 = CinemascopeSideFrame__Show(Value, name, v25);
  if ( v54.fields.hasValue )
  {
    texture = (UIWidget_o *)this->fields.texture;
    Value = (CinemascopeSideFrame_o *)System_Nullable_int___get_Value(
                                        (System_Nullable_int__o)&v54,
                                        (const MethodInfo_45E4324 *)Method_System_Nullable_int__get_Value__);
    if ( !texture )
      goto LABEL_20;
    UIWidget__set_width(texture, (int32_t)Value, 0);
  }
  this->fields.isCanSkip = isCanSkip;
  this->fields._isCanControl_k__BackingField = isCanControl;
  CriManaMovieMaterial__set_applyTargetAlpha((CriManaMovieMaterial_o *)this, targetAlpha, 0);
  Value = (CinemascopeSideFrame_o *)this->fields.touch;
  this->fields.crossFadeStartFrame = fadeStartFrame;
  this->fields._IsEnableSkipButton_k__BackingField = enableSkipButton;
  if ( !Value )
    goto LABEL_20;
  Value = (CinemascopeSideFrame_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0);
  v34 = isCanSkip || (unsigned __int64)this->fields._IsEnableSkipButton_k__BackingField;
  if ( !Value )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, v34, 0);
  Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
  this->fields.isPlaying = 0;
  if ( !Value )
    goto LABEL_20;
  if ( CriMana_Player__SetFile((CriMana_Player_o *)Value, cpk, path, 0, 0) )
  {
    this->fields.callBack = callBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callBack,
      (int32_t)callBack,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    this->fields.nonDeleteCallBack = nonDeleteCallBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.nonDeleteCallBack,
      (int32_t)nonDeleteCallBack,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    this->fields.startCallBack = startCallBack;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.startCallBack,
      (int32_t)startCallBack,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
    if ( !Value )
      goto LABEL_20;
    CriMana_Player__SetVolume((CriMana_Player_o *)Value, volume, 0);
  }
  CRIMoviePlayer__DispTexture(this, 0, (const MethodInfo *)v36);
  Value = (CinemascopeSideFrame_o *)this->fields.busyAnim;
  if ( !Value
    || (Value = (CinemascopeSideFrame_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Value, 0)) == 0 )
  {
LABEL_20:
    sub_2213CDC(Value, v34);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, 0, 0);
  *(_WORD *)&this->fields.isVoicePauseEnded = 0;
  this->fields.isSePauseEnded = 0;
}


bool CRIMoviePlayer__IsPlaying(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
    LOBYTE(player_k__BackingField) = CriMana_Player__get_status(player_k__BackingField, 0) == 5
                                  && this->fields.isPlaying;
  return (char)player_k__BackingField;
}


bool CRIMoviePlayer__IsStoppable(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0
  __int64 v4; // x1
  CriMana_Player_o *v5; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    LODWORD(player_k__BackingField) = CriMana_Player__get_status(player_k__BackingField, 0);
    if ( (_DWORD)player_k__BackingField != 1 )
    {
      v5 = this->fields._player_k__BackingField;
      if ( !v5 )
        goto LABEL_15;
      if ( CriMana_Player__get_status(v5, 0) != 3 )
      {
        v5 = this->fields._player_k__BackingField;
        if ( !v5 )
          goto LABEL_15;
        if ( CriMana_Player__get_status(v5, 0) != 4 )
        {
          v5 = this->fields._player_k__BackingField;
          if ( !v5 )
            goto LABEL_15;
          if ( CriMana_Player__get_status(v5, 0) != 9 )
          {
            v5 = this->fields._player_k__BackingField;
            if ( v5 )
            {
              if ( CriMana_Player__get_status(v5, 0) == 5 )
                goto LABEL_11;
              v5 = this->fields._player_k__BackingField;
              if ( v5 )
              {
                LOBYTE(player_k__BackingField) = CriMana_Player__get_status(v5, 0) == 6;
                return (char)player_k__BackingField;
              }
            }
LABEL_15:
            sub_2213CDC(v5, v4);
          }
        }
      }
LABEL_11:
      LOBYTE(player_k__BackingField) = 1;
    }
  }
  return (char)player_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void CRIMoviePlayer__MoviePlay(
        CRIMoviePlayer_o *this,
        bool isBgmPause,
        bool isSePause,
        bool isVoicePause,
        bool isCanPauseZeroFrame,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x5
  System_Collections_IEnumerator_o *v12; // x1

  CRIMoviePlayer__DispTexture(this, 0, (const MethodInfo *)isSePause);
  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0);
  this->fields.isPlaying = 0;
  v12 = CRIMoviePlayer__PlaySequence(this, isBgmPause, isSePause, isVoicePause, isCanPauseZeroFrame, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v12, 0);
}


void CRIMoviePlayer__MovieSeekByFrame(CRIMoviePlayer_o *this, int32_t frame, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v6; // x3
  System_Collections_IEnumerator_o *v7; // x1

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField && CriMana_Player__get_status(player_k__BackingField, 0) == 5 && this->fields.isPlaying )
  {
    this->fields.isPlaying = 0;
    v7 = CRIMoviePlayer__SeekSequence(this, frame, 0, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
  }
}


void CRIMoviePlayer__MovieSeekByRelativeTime(CRIMoviePlayer_o *this, int32_t sec, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0
  __int64 v6; // x1
  CriMana_Player_o *frameInfo; // x0
  int32_t a; // w21
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *v10; // x1

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField && CriMana_Player__get_status(player_k__BackingField, 0) == 5 && this->fields.isPlaying )
  {
    frameInfo = this->fields._player_k__BackingField;
    this->fields.isPlaying = 0;
    if ( !frameInfo
      || (frameInfo = (CriMana_Player_o *)CriMana_Player__get_frameInfo(frameInfo, 0)) == 0
      || !this->fields._player_k__BackingField
      || (a = frameInfo->fields.guid.fields._a,
          (frameInfo = (CriMana_Player_o *)CriMana_Player__get_frameInfo(this->fields._player_k__BackingField, 0)) == 0) )
    {
      sub_2213CDC(frameInfo, v6);
    }
    v10 = CRIMoviePlayer__SeekSequence(this, *(_DWORD *)&frameInfo->fields.wasStopping * sec / 1000 + a, 0, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v10, 0);
  }
}


void CRIMoviePlayer__MovieStop(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x1

  CRIMoviePlayer__DispTexture(this, 0, v2);
  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0);
  this->fields.isPlaying = 0;
  v5 = CRIMoviePlayer__StopSequence(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  CRIMoviePlayer_o *v6; // x0
  const MethodInfo *v7; // x4
  __int64 v8; // x1
  __int64 v9; // x2
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *playerHolder_k__BackingField; // x20
  struct CriMana_Player_o *v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_596A47C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596A47C = 1;
  }
  if ( this->fields.isLoadModeToDefaultWhenDestory )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    CommonUI__SetLoadMode(Instance, 0, 0);
  }
  if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method, v2);
  TouchEffectManager__SetBlock(0, 0);
  CRIMoviePlayer__SetPauseSound(
    v6,
    this->fields.isVoicePauseEnded,
    this->fields.isBgmPauseEnded,
    this->fields.isSePauseEnded,
    v7);
  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    playerHolder_k__BackingField = (UnityEngine_Object_o *)player_k__BackingField->fields._playerHolder_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(playerHolder_k__BackingField, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v12 = this->fields._player_k__BackingField;
      if ( v12 )
      {
        Instance = (CommonUI_o *)v12->fields._playerHolder_k__BackingField;
        if ( Instance )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
          UnityEngine_Object__Destroy_83459800(gameObject, 0);
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_2213CDC(Instance, v5);
    }
  }
LABEL_17:
  CriManaMovieMaterial__OnDestroy((CriManaMovieMaterial_o *)this, 0);
}


void CRIMoviePlayer__OnMaterialAvailableChanged(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *material; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *texture; // x20
  __int64 v9; // x1
  struct UITexture_o *v10; // x0
  UnityEngine_Material_o *v11; // x19

  if ( (byte_596A47E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A47E = 1;
  }
  CriManaMovieController__OnMaterialAvailableChanged((CriManaMovieController_o *)this, 0);
  if ( this->fields._applyTargetAlpha )
  {
    material = (UnityEngine_Object_o *)this->fields._material;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
    {
      texture = (UnityEngine_Object_o *)this->fields.texture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
      {
        v10 = this->fields.texture;
        if ( !v10
          || (v11 = this->fields._material,
              v10 = (struct UITexture_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))v10->klass->vtable._26_get_mainTexture.methodPtr)(
                                            v10,
                                            v10->klass->vtable._26_get_mainTexture.method),
              !v11) )
        {
          sub_2213CDC(v10, v9);
        }
        UnityEngine_Material__set_mainTexture(v11, (UnityEngine_Texture_o *)v10, 0);
      }
    }
  }
}


System_Collections_IEnumerator_o *CRIMoviePlayer__PlaySeekSequence(
        CRIMoviePlayer_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596A47A & 1) == 0 )
  {
    sub_2213A60(&CRIMoviePlayer__PlaySeekSequence_d__47_TypeInfo);
    byte_596A47A = 1;
  }
  v5 = sub_2213CCC(CRIMoviePlayer__PlaySeekSequence_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_DWORD *)(v5 + 40) = frame;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *CRIMoviePlayer__PlaySequence(
        CRIMoviePlayer_o *this,
        bool isBgmPause,
        bool isSePause,
        bool isVoicePause,
        bool isCanPauseZeroFrame,
        const MethodInfo *method)
{
  bool v11; // w24
  __int64 v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_596A477 & 1) == 0 )
  {
    sub_2213A60(&CRIMoviePlayer__PlaySequence_d__44_TypeInfo);
    byte_596A477 = 1;
  }
  v11 = isBgmPause;
  v12 = sub_2213CCC(CRIMoviePlayer__PlaySequence_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v12 + 32), (int32_t)this, v13, v14, v15, v16, v17, v18);
  *(_BYTE *)(v12 + 42) = v11;
  *(_BYTE *)(v12 + 43) = isSePause;
  *(_BYTE *)(v12 + 41) = isVoicePause;
  *(_BYTE *)(v12 + 40) = isCanPauseZeroFrame;
  return (System_Collections_IEnumerator_o *)v12;
}


System_Collections_IEnumerator_o *CRIMoviePlayer__SeekSequence(
        CRIMoviePlayer_o *this,
        int32_t frame,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596A479 & 1) == 0 )
  {
    sub_2213A60(&CRIMoviePlayer__SeekSequence_d__46_TypeInfo);
    byte_596A479 = 1;
  }
  v7 = sub_2213CCC(CRIMoviePlayer__SeekSequence_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 32) = frame;
  *(_QWORD *)(v7 + 48) = callBack;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callBack, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void CRIMoviePlayer__SetBackgroundColor(CRIMoviePlayer_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  UIWidget_o *background; // x0

  background = (UIWidget_o *)this->fields.background;
  if ( !background )
    sub_2213CDC(0, method);
  UIWidget__set_color(background, color, 0);
}


// local variable allocation has failed, the output may be wrong!
void CRIMoviePlayer__SetPauseSound(
        CRIMoviePlayer_o *this,
        bool isVoicePause,
        bool isBgmPause,
        bool isSePause,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_596A47D & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    byte_596A47D = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, isVoicePause, isBgmPause);
  BgmManager__PauseBgm(isBgmPause, 0);
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8, v9);
  SeManager__PauseSe(isSePause, 0);
  SeManager__PauseVoice(isVoicePause, 0);
}


void CRIMoviePlayer__SetPauseSoundEnded(
        CRIMoviePlayer_o *this,
        bool isVoicePause,
        bool isBgmPause,
        bool isSePause,
        const MethodInfo *method)
{
  this->fields.isVoicePauseEnded = isVoicePause;
  this->fields.isBgmPauseEnded = isBgmPause;
  this->fields.isSePauseEnded = isSePause;
}


void CRIMoviePlayer__SetVolume(CRIMoviePlayer_o *this, float volume, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_2213CDC(0, method);
  CriMana_Player__SetVolume(player_k__BackingField, volume, 0);
}


void CRIMoviePlayer__StopAndDispBg(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CRIMoviePlayer__DispTexture(this, 0, v2);
  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0);
  this->fields.isPlaying = 0;
}


System_Collections_IEnumerator_o *CRIMoviePlayer__StopSequence(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A478 & 1) == 0 )
  {
    sub_2213A60(&CRIMoviePlayer__StopSequence_d__45_TypeInfo);
    byte_596A478 = 1;
  }
  v3 = sub_2213CCC(CRIMoviePlayer__StopSequence_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void CRIMoviePlayer__Update(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v4; // x1
  CriMana_Player_o *v5; // x0
  const MethodInfo *v6; // x1

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    if ( CriMana_Player__get_status(player_k__BackingField, 0) == 6 )
    {
LABEL_5:
      CRIMoviePlayer__EndCallBack(this, v4);
      this->fields.isPlaying = 0;
      return;
    }
    v5 = this->fields._player_k__BackingField;
    if ( !v5 )
      goto LABEL_14;
    if ( CriMana_Player__get_status(v5, 0) == 7 )
      goto LABEL_5;
    v5 = this->fields._player_k__BackingField;
    if ( !v5 )
      goto LABEL_14;
    if ( CriMana_Player__get_status(v5, 0) == 5 && this->fields._applyTargetAlpha && this->fields.crossFadeStartFrame )
    {
      v5 = this->fields._player_k__BackingField;
      if ( v5 )
      {
        if ( CriMana_Player__GetDisplayedFrameNo(v5, 0) >= this->fields.crossFadeStartFrame )
        {
          CRIMoviePlayer__EndCallBack(this, v6);
          this->fields.crossFadeStartFrame = 0;
        }
        return;
      }
LABEL_14:
      sub_2213CDC(v5, v4);
    }
  }
}


bool CRIMoviePlayer___PlaySeekSequence_b__47_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_2213CDC(0, method);
  return CriMana_Player__get_frameInfo(player_k__BackingField, 0) != 0;
}


bool CRIMoviePlayer___PlaySeekSequence_b__47_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_2213CDC(0, method);
  return CriMana_Player__get_status(player_k__BackingField, 0) == 0;
}


bool CRIMoviePlayer___SeekSequence_b__46_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_2213CDC(0, method);
  return CriMana_Player__get_frameInfo(player_k__BackingField, 0) != 0;
}


bool CRIMoviePlayer___SeekSequence_b__46_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_2213CDC(0, method);
  return CriMana_Player__get_status(player_k__BackingField, 0) == 0;
}


UILabel_o *CRIMoviePlayer__get_DebugLabel(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields.debugLabel;
}


bool CRIMoviePlayer__get_IsEnableSkipButton(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._IsEnableSkipButton_k__BackingField;
}


UITexture_o *CRIMoviePlayer__get_Texture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields.texture;
}


bool CRIMoviePlayer__get_isCanControl(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._isCanControl_k__BackingField;
}


void CRIMoviePlayer__set_Background(CRIMoviePlayer_o *this, UITexture_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.background = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.background,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CRIMoviePlayer__set_BusyAnim(CRIMoviePlayer_o *this, UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.busyAnim = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.busyAnim,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CRIMoviePlayer__set_IsEnableSkipButton(CRIMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsEnableSkipButton_k__BackingField = value;
}


void CRIMoviePlayer__set_Touch(CRIMoviePlayer_o *this, UIButton_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.touch = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.touch,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CRIMoviePlayer__set_isCanControl(CRIMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isCanControl_k__BackingField = value;
}


void CRIMoviePlayer__PlaySeekSequence_d__47___ctor(
        CRIMoviePlayer__PlaySeekSequence_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__PlaySeekSequence_d__47__MoveNext(
        CRIMoviePlayer__PlaySeekSequence_d__47_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  const MethodInfo *v4; // x4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CRIMoviePlayer__PlaySeekSequence_d__47_o *v8; // x19
  int _1__state; // w8
  struct CRIMoviePlayer_o *_4__this; // x20
  bool v11; // w21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int frame; // w21
  int v25; // w8
  int32_t v26; // w8
  const MethodInfo *v27; // x2
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  int v29; // w8
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  MissionNaviTransitionBoardItem_o *v36; // x19
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  UnityEngine_WaitForEndOfFrame_o *v43; // x21
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  Il2CppObject *waitForEOF_5__4; // x1
  MissionNaviTransitionBoardItem_o *v51; // x19
  System_Func_bool__o *v52; // x21
  UnityEngine_WaitUntil_o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Func_bool__o *v60; // x21
  UnityEngine_WaitUntil_o *v61; // x20
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7

  v8 = this;
  if ( (byte_596A47F & 1) == 0 )
  {
    sub_2213A60(&Method_CRIMoviePlayer__PlaySeekSequence_b__47_0__);
    sub_2213A60(&Method_CRIMoviePlayer__PlaySeekSequence_b__47_1__);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596A47F = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  v11 = 0;
  if ( _1__state > 4 )
  {
    if ( _1__state <= 6 )
    {
      v8->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      p__2__current[-1].fields._BoardType_k__BackingField = -1;
      if ( _1__state == 5 )
      {
        sub_2213A04(p__2__current, 0, v2, v3, (int32_t)v4, v5, v6, v7);
        v29 = 6;
      }
      else
      {
        sub_2213A04(p__2__current, 0, v2, v3, (int32_t)v4, v5, v6, v7);
        v29 = 7;
      }
      goto LABEL_68;
    }
    if ( _1__state == 7 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      CRIMoviePlayer__SetPauseSound((CRIMoviePlayer_o *)this, 1, 1, 1, v4);
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields.texture;
      if ( !this )
        goto LABEL_70;
      (*(void (__fastcall **)(CRIMoviePlayer__PlaySeekSequence_d__47_o *, struct UnityEngine_Material_o *, _QWORD))&this->klass[1]._2.element_size)(
        this,
        _4__this->fields._material,
        *(_QWORD *)&this->klass[1]._2.static_fields_size);
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields.texture;
      if ( !this )
        goto LABEL_70;
      *((_BYTE *)this + 180) = 1;
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_70;
      v11 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v8->fields.__2__current = 0;
      v36 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(v36, 0, v37, v38, v39, v40, v41, v42);
      v36[-1].fields._BoardType_k__BackingField = 8;
    }
    else if ( _1__state == 8 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields.background;
      if ( !this )
        goto LABEL_70;
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_70;
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_70;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v11 = 0;
      _4__this->fields.isPlaying = 1;
    }
    return v11;
  }
  if ( _1__state > 2 )
  {
    if ( _1__state == 3 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_70;
      CriMana_Player__SetSeekPosition((CriMana_Player_o *)this, v8->fields.frame, 0);
      if ( v8->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0);
      v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
      v8->fields._waitForEOF_5__4 = v43;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._waitForEOF_5__4,
        (int32_t)v43,
        v44,
        v45,
        v46,
        v47,
        v48,
        v49);
      v8->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
    }
    else
    {
      v8->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v8->fields._prevTime_5__5) >= 2.0 )
      {
        v8->fields._retry_5__3 = 1;
        goto LABEL_64;
      }
      if ( !_4__this )
        goto LABEL_70;
    }
    this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
    if ( !this )
      goto LABEL_70;
    if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 5 )
    {
      waitForEOF_5__4 = (Il2CppObject *)v8->fields._waitForEOF_5__4;
      v8->fields.__2__current = waitForEOF_5__4;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)waitForEOF_5__4, v30, v31, v32, v33, v34, v35);
      v29 = 4;
      goto LABEL_68;
    }
LABEL_64:
    v8->fields._waitForEOF_5__4 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._waitForEOF_5__4, 0, v30, v31, v32, v33, v34, v35);
    if ( !v8->fields._retry_5__3 )
    {
      v60 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v60, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__PlaySeekSequence_b__47_0__, 0);
      v61 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v61, v60, 0);
      v8->fields.__2__current = (Il2CppObject *)v61;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(p__2__current, (int32_t)v61, v62, v63, v64, v65, v66, v67);
      v29 = 5;
      goto LABEL_68;
    }
    v8->fields._retry_5__3 = 0;
    if ( _4__this )
      goto LABEL_66;
    goto LABEL_70;
  }
  if ( (unsigned int)_1__state >= 2 )
  {
    if ( _1__state == 2 )
    {
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_70;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
      {
        this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_70;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 7 )
          goto LABEL_13;
      }
      CRIMoviePlayer__EndCallBack(_4__this, method);
      return 0;
    }
  }
  else
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_70;
    this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
    if ( !this )
      goto LABEL_70;
    if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
      goto LABEL_11;
    this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
    if ( !this )
      goto LABEL_70;
    if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 6 )
    {
LABEL_11:
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_70;
      CriMana_Player__Prepare((CriMana_Player_o *)this, 0);
LABEL_13:
      this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_70;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 4 )
      {
        this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
        if ( this )
        {
          frame = v8->fields.frame;
          this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
          if ( this )
          {
            v25 = (int)this->fields._waitForEOF_5__4;
            this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields._player_k__BackingField;
            v26 = v25 - 1;
            if ( frame < v26 )
              v26 = frame;
            if ( frame < 0 )
              v26 = 0;
            v8->fields.frame = v26;
            if ( this )
            {
              v8->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0);
              CRIMoviePlayer__DispTexture(_4__this, 0, v27);
              this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)_4__this->fields.busyAnim;
              if ( this )
              {
                this = (CRIMoviePlayer__PlaySeekSequence_d__47_o *)UnityEngine_GameObject__get_gameObject(
                                                                     (UnityEngine_GameObject_o *)this,
                                                                     0);
                if ( this )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                  v8->fields._retry_5__3 = 0;
LABEL_66:
                  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0);
                  v52 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
                  System_Func_bool____ctor(
                    v52,
                    (Il2CppObject *)_4__this,
                    Method_CRIMoviePlayer__PlaySeekSequence_b__47_1__,
                    0);
                  v53 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
                  UnityEngine_WaitUntil___ctor(v53, v52, 0);
                  v8->fields.__2__current = (Il2CppObject *)v53;
                  p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
                  sub_2213A04(p__2__current, (int32_t)v53, v54, v55, v56, v57, v58, v59);
                  v29 = 3;
                  goto LABEL_68;
                }
              }
            }
          }
        }
LABEL_70:
        sub_2213CDC(this, method);
      }
      v8->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(p__2__current, 0, v18, v19, v20, v21, v22, v23);
      v29 = 2;
LABEL_68:
      p__2__current[-1].fields._BoardType_k__BackingField = v29;
      return 1;
    }
    v8->fields.__2__current = 0;
    v51 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_2213A04(v51, 0, v12, v13, v14, v15, v16, v17);
    v11 = 1;
    v51[-1].fields._BoardType_k__BackingField = 1;
  }
  return v11;
}


Il2CppObject *CRIMoviePlayer__PlaySeekSequence_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__PlaySeekSequence_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__PlaySeekSequence_d__47__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__PlaySeekSequence_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CRIMoviePlayer__PlaySeekSequence_d__47_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CRIMoviePlayer__PlaySeekSequence_d__47__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__PlaySeekSequence_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__PlaySeekSequence_d__47__System_IDisposable_Dispose(
        CRIMoviePlayer__PlaySeekSequence_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void CRIMoviePlayer__PlaySequence_d__44___ctor(
        CRIMoviePlayer__PlaySequence_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__PlaySequence_d__44__MoveNext(CRIMoviePlayer__PlaySequence_d__44_o *this, const MethodInfo *method)
{
  CRIMoviePlayer__PlaySequence_d__44_o *v2; // x19
  int _1__state; // w8
  struct CRIMoviePlayer_o *_4__this; // x20
  bool v5; // w21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Action_o *v12; // x19
  struct System_Action_o **p_startCallBack; // x20
  struct System_Action_o *startCallBack; // t1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  __int64 v28; // x2
  MissionNaviTransitionBoardItem_o *v29; // x19
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  int v36; // w8
  const MethodInfo *v37; // x4
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  int v50; // w8
  MissionNaviTransitionBoardItem_o *v51; // x19

  v2 = this;
  if ( (byte_596A480 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CRIMoviePlayer__PlaySequence_d__44_o *)sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596A480 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  v5 = 0;
  if ( _1__state > 2 )
  {
    switch ( _1__state )
    {
      case 3:
        v2->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_65;
        break;
      case 4:
        v2->fields.__1__state = -1;
        if ( !_4__this )
          goto LABEL_65;
        this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_65;
        if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
          goto LABEL_43;
        this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_65;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 7 )
          goto LABEL_43;
        break;
      case 5:
        v2->fields.__1__state = -1;
        if ( _4__this )
        {
          this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields.background;
          if ( this )
          {
            this = (CRIMoviePlayer__PlaySequence_d__44_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              startCallBack = _4__this->fields.startCallBack;
              p_startCallBack = &_4__this->fields.startCallBack;
              v12 = startCallBack;
              *((_BYTE *)p_startCallBack + 8) = 1;
              if ( startCallBack )
              {
                *p_startCallBack = 0;
                sub_2213A04((MissionNaviTransitionBoardItem_o *)p_startCallBack, 0, v6, v7, v8, v9, v10, v11);
                ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(
                  v12->fields.method_code,
                  v12->fields.method);
              }
              return 0;
            }
          }
        }
        goto LABEL_65;
      default:
        return v5;
    }
    this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
    if ( !this )
      goto LABEL_65;
    this = (CRIMoviePlayer__PlaySequence_d__44_o *)CriMana_Player__get_status((CriMana_Player_o *)this, 0);
    if ( (_DWORD)this == 5 )
    {
      this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_65;
      this = (CRIMoviePlayer__PlaySequence_d__44_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0);
      if ( !this )
        goto LABEL_65;
      if ( !this->fields.__1__state && !v2->fields.isCanPauseZeroFrame )
      {
        v2->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, 0, v38, v39, (int32_t)v37, v40, v41, v42);
        v50 = 4;
        goto LABEL_61;
      }
    }
    CRIMoviePlayer__SetPauseSound(
      (CRIMoviePlayer_o *)this,
      v2->fields.isVoicePause,
      v2->fields.isBgmPause,
      v2->fields.isSePause,
      v37);
    if ( _4__this->fields.isCanSkip || _4__this->fields._IsEnableSkipButton_k__BackingField )
    {
      this = (CRIMoviePlayer__PlaySequence_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_65;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
    }
    this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields.texture;
    if ( this )
    {
      (*(void (__fastcall **)(CRIMoviePlayer__PlaySequence_d__44_o *, struct UnityEngine_Material_o *, _QWORD))&this->klass[1]._2.element_size)(
        this,
        _4__this->fields._material,
        *(_QWORD *)&this->klass[1]._2.static_fields_size);
      this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields.texture;
      if ( this )
      {
        *((_BYTE *)this + 180) = 1;
        this = (CRIMoviePlayer__PlaySequence_d__44_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( this )
        {
          v5 = 1;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          v2->fields.__2__current = 0;
          v29 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
          sub_2213A04(v29, 0, v43, v44, v45, v46, v47, v48);
          v36 = 5;
LABEL_59:
          v29[-1].fields._BoardType_k__BackingField = v36;
          return v5;
        }
      }
    }
LABEL_65:
    sub_2213CDC(this, method);
  }
  switch ( _1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (CRIMoviePlayer__PlaySequence_d__44_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_65;
      CommonUI__SetLoadMode((CommonUI_o *)this, 8, 0);
      goto LABEL_26;
    case 1:
      v2->fields.__1__state = -1;
LABEL_26:
      if ( _4__this )
      {
        this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
        if ( this )
        {
          if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
          {
            this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
            if ( !this )
              goto LABEL_65;
            if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 6 )
            {
              v2->fields.__2__current = 0;
              v51 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
              sub_2213A04(v51, 0, v15, v16, v17, v18, v19, v20);
              v5 = 1;
              v51[-1].fields._BoardType_k__BackingField = 1;
              return v5;
            }
          }
          this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
          if ( this )
          {
            CriMana_Player__Prepare((CriMana_Player_o *)this, 0);
LABEL_33:
            this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
            if ( this )
            {
              if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 4 )
              {
                CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0);
                if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v27, v28);
                v5 = 1;
                TouchEffectManager__SetBlock(1, 0);
                v2->fields.__2__current = 0;
                v29 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
                sub_2213A04(v29, 0, v30, v31, v32, v33, v34, v35);
                v36 = 3;
                goto LABEL_59;
              }
              v2->fields.__2__current = 0;
              p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
              sub_2213A04(p__2__current, 0, v21, v22, v23, v24, v25, v26);
              v50 = 2;
LABEL_61:
              p__2__current[-1].fields._BoardType_k__BackingField = v50;
              return 1;
            }
            goto LABEL_65;
          }
        }
      }
      goto LABEL_65;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_65;
      this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_65;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
      {
        this = (CRIMoviePlayer__PlaySequence_d__44_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_65;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 7 )
          goto LABEL_43;
        goto LABEL_33;
      }
LABEL_43:
      CRIMoviePlayer__EndCallBack(_4__this, method);
      return 0;
  }
  return v5;
}


Il2CppObject *CRIMoviePlayer__PlaySequence_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__PlaySequence_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__PlaySequence_d__44__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__PlaySequence_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CRIMoviePlayer__PlaySequence_d__44_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CRIMoviePlayer__PlaySequence_d__44__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__PlaySequence_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__PlaySequence_d__44__System_IDisposable_Dispose(
        CRIMoviePlayer__PlaySequence_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void CRIMoviePlayer__SeekSequence_d__46___ctor(
        CRIMoviePlayer__SeekSequence_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__SeekSequence_d__46__MoveNext(CRIMoviePlayer__SeekSequence_d__46_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct CRIMoviePlayer_o *_4__this; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Action_o *callBack; // x0
  int32_t frame; // w21
  int v20; // w8
  int32_t v21; // w8
  const MethodInfo *v22; // x2
  Il2CppObject **p__2__current; // x19
  int v24; // w8
  UnityEngine_WaitForEndOfFrame_o *v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *waitForEOF_5__4; // x1
  System_Func_bool__o *v33; // x21
  UnityEngine_WaitUntil_o *v34; // x20
  Il2CppObject **v35; // x19
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Func_bool__o *v42; // x21
  UnityEngine_WaitUntil_o *v43; // x20
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7

  if ( (byte_596A481 & 1) == 0 )
  {
    sub_2213A60(&Method_CRIMoviePlayer__SeekSequence_b__46_0__);
    sub_2213A60(&Method_CRIMoviePlayer__SeekSequence_b__46_1__);
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596A481 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  player_k__BackingField = 0;
  if ( _1__state <= 2 )
  {
    if ( _1__state )
    {
      if ( _1__state != 1 )
      {
        if ( _1__state != 2 )
          return (char)player_k__BackingField;
        this->fields.__1__state = -1;
        if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields._prevTime_5__5) >= 2.0 )
        {
          this->fields._retry_5__3 = 1;
LABEL_39:
          this->fields._waitForEOF_5__4 = 0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._waitForEOF_5__4,
            0,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          if ( !this->fields._retry_5__3 )
          {
            v42 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(v42, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__46_0__, 0);
            v43 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v43, v42, 0);
            this->fields.__2__current = (Il2CppObject *)v43;
            p__2__current = &this->fields.__2__current;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v43, v44, v45, v46, v47, v48, v49);
            v24 = 3;
            goto LABEL_43;
          }
          this->fields._retry_5__3 = 0;
          if ( !_4__this )
            goto LABEL_45;
          goto LABEL_41;
        }
        if ( !_4__this )
          goto LABEL_45;
LABEL_34:
        player_k__BackingField = _4__this->fields._player_k__BackingField;
        if ( !player_k__BackingField )
          goto LABEL_45;
        if ( CriMana_Player__get_status(player_k__BackingField, 0) != 5 )
        {
          waitForEOF_5__4 = (Il2CppObject *)this->fields._waitForEOF_5__4;
          this->fields.__2__current = waitForEOF_5__4;
          p__2__current = &this->fields.__2__current;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)p__2__current,
            (int32_t)waitForEOF_5__4,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          v24 = 2;
          goto LABEL_43;
        }
        goto LABEL_39;
      }
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        player_k__BackingField = _4__this->fields._player_k__BackingField;
        if ( player_k__BackingField )
        {
          CriMana_Player__SetSeekPosition(player_k__BackingField, this->fields.frame, 0);
          if ( this->fields._isPaused_5__2 )
            CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0);
          CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0);
          v25 = (UnityEngine_WaitForEndOfFrame_o *)sub_2213CCC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v25, 0);
          this->fields._waitForEOF_5__4 = v25;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._waitForEOF_5__4,
            (int32_t)v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          this->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
          goto LABEL_34;
        }
      }
    }
    else
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        player_k__BackingField = _4__this->fields._player_k__BackingField;
        if ( player_k__BackingField )
        {
          frame = this->fields.frame;
          player_k__BackingField = (CriMana_Player_o *)CriMana_Player__get_movieInfo(player_k__BackingField, 0);
          if ( player_k__BackingField )
          {
            v20 = *(_DWORD *)&player_k__BackingField->fields.lastNativeStatus.fields.hasValue;
            player_k__BackingField = _4__this->fields._player_k__BackingField;
            v21 = v20 - 1;
            if ( frame < v21 )
              v21 = frame;
            if ( frame < 0 )
              v21 = 0;
            this->fields.frame = v21;
            if ( player_k__BackingField )
            {
              this->fields._isPaused_5__2 = CriMana_Player__IsPaused(player_k__BackingField, 0);
              CRIMoviePlayer__DispTexture(_4__this, 0, v22);
              player_k__BackingField = (CriMana_Player_o *)_4__this->fields.busyAnim;
              if ( player_k__BackingField )
              {
                player_k__BackingField = (CriMana_Player_o *)UnityEngine_GameObject__get_gameObject(
                                                               (UnityEngine_GameObject_o *)player_k__BackingField,
                                                               0);
                if ( player_k__BackingField )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player_k__BackingField, 1, 0);
                  this->fields._retry_5__3 = 0;
LABEL_41:
                  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0);
                  v33 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
                  System_Func_bool____ctor(
                    v33,
                    (Il2CppObject *)_4__this,
                    Method_CRIMoviePlayer__SeekSequence_b__46_1__,
                    0);
                  v34 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
                  UnityEngine_WaitUntil___ctor(v34, v33, 0);
                  this->fields.__2__current = (Il2CppObject *)v34;
                  v35 = &this->fields.__2__current;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)v35, (int32_t)v34, v36, v37, v38, v39, v40, v41);
                  *((_DWORD *)v35 - 2) = 1;
                  LOBYTE(player_k__BackingField) = 1;
                  return (char)player_k__BackingField;
                }
              }
            }
          }
        }
      }
    }
LABEL_45:
    sub_2213CDC(player_k__BackingField, method);
  }
  switch ( _1__state )
  {
    case 3:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v24 = 4;
LABEL_43:
      *((_DWORD *)p__2__current - 2) = v24;
      LOBYTE(player_k__BackingField) = 1;
      return (char)player_k__BackingField;
    case 4:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v24 = 5;
      goto LABEL_43;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_45;
      CRIMoviePlayer__DispTexture(_4__this, 1, (const MethodInfo *)v2);
      player_k__BackingField = (CriMana_Player_o *)_4__this->fields.busyAnim;
      if ( !player_k__BackingField )
        goto LABEL_45;
      player_k__BackingField = (CriMana_Player_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)player_k__BackingField,
                                                     0);
      if ( !player_k__BackingField )
        goto LABEL_45;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player_k__BackingField, 0, 0);
      callBack = this->fields.callBack;
      _4__this->fields.isPlaying = 1;
      ActionExtensions__Call(callBack, 0);
      LOBYTE(player_k__BackingField) = 0;
      break;
  }
  return (char)player_k__BackingField;
}


Il2CppObject *CRIMoviePlayer__SeekSequence_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__SeekSequence_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__SeekSequence_d__46__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__SeekSequence_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CRIMoviePlayer__SeekSequence_d__46_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CRIMoviePlayer__SeekSequence_d__46__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__SeekSequence_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__SeekSequence_d__46__System_IDisposable_Dispose(
        CRIMoviePlayer__SeekSequence_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void CRIMoviePlayer__StopSequence_d__45___ctor(
        CRIMoviePlayer__StopSequence_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__StopSequence_d__45__MoveNext(CRIMoviePlayer__StopSequence_d__45_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *_4__this; // x20
  CRIMoviePlayer__StopSequence_d__45_o *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  v3 = this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  this = (CRIMoviePlayer__StopSequence_d__45_o *)_4__this->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_10;
  if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
  {
LABEL_7:
    CRIMoviePlayer__EndCallBack(_4__this, method);
    return 0;
  }
  this = (CRIMoviePlayer__StopSequence_d__45_o *)_4__this->fields._player_k__BackingField;
  if ( !this )
LABEL_10:
    sub_2213CDC(this, method);
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 6 )
    goto LABEL_7;
  v3->fields.__2__current = 0;
  p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_2213A04(p__2__current, 0, v4, v5, v6, v7, v8, v9);
  p__2__current[-1].fields._BoardType_k__BackingField = 1;
  return 1;
}


Il2CppObject *CRIMoviePlayer__StopSequence_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__StopSequence_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__StopSequence_d__45__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__StopSequence_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_CRIMoviePlayer__StopSequence_d__45_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *CRIMoviePlayer__StopSequence_d__45__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__StopSequence_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__StopSequence_d__45__System_IDisposable_Dispose(
        CRIMoviePlayer__StopSequence_d__45_o *this,
        const MethodInfo *method)
{
  ;
}
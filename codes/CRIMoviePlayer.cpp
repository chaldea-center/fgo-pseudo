void CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0);
}


void CRIMoviePlayer__ActiveAnim(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *busyAnim; // x0

  busyAnim = this->fields.busyAnim;
  if ( !busyAnim || (busyAnim = UnityEngine_GameObject__get_gameObject(busyAnim, 0)) == 0 )
    sub_1C71608(busyAnim, method);
  UnityEngine_GameObject__SetActive(busyAnim, 1, 0);
}


void CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  UIWidget_o *texture; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Texture2D_o *v5; // x20
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC1526 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&UnityEngine_Texture2D_TypeInfo);
    byte_4CC1526 = 1;
  }
  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture )
    goto LABEL_12;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, const MethodInfo *))texture->klass->vtable._26_get_mainTexture.methodPtr)(
                                 texture,
                                 texture->klass->vtable._26_get_mainTexture.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
  {
    v5 = (UnityEngine_Texture2D_o *)sub_1C715FC(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71612192(v5, 128, 128, 1, 0, 0);
    texture = (UIWidget_o *)this->fields.texture;
    if ( texture )
    {
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._27_set_mainTexture.methodPtr)(
        texture,
        v5,
        texture->klass->vtable._27_set_mainTexture.method);
      texture = (UIWidget_o *)this->fields.texture;
      if ( texture )
      {
        v6.fields.r = 0.0;
        v6.fields.g = 0.0;
        v6.fields.b = 0.0;
        v6.fields.a = 1.0;
        UIWidget__set_color(texture, v6, 0);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1C71608(texture, method);
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
    sub_1C71608(texture, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)texture, !flag, 0);
}


void CRIMoviePlayer__Dispose(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *v2; // x19
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *playerHolder_k__BackingField; // x20
  struct CriMana_Player_o *v5; // x8
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  v2 = this;
  if ( (byte_4CC1521 & 1) == 0 )
  {
    this = (CRIMoviePlayer_o *)sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1521 = 1;
  }
  player_k__BackingField = v2->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    goto LABEL_16;
  playerHolder_k__BackingField = (UnityEngine_Object_o *)player_k__BackingField->fields._playerHolder_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(playerHolder_k__BackingField, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields._player_k__BackingField;
    if ( v5 )
    {
      this = (CRIMoviePlayer_o *)v5->fields._playerHolder_k__BackingField;
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71724608(gameObject, 0);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_1C71608(this, method);
  }
LABEL_12:
  this = (CRIMoviePlayer_o *)v2->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_16;
  ((void (__fastcall *)(CRIMoviePlayer_o *, const MethodInfo *))this->klass->vtable._5_OnDisable.methodPtr)(
    this,
    this->klass->vtable._5_OnDisable.method);
  v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71724608(v7, 0);
}


void CRIMoviePlayer__EndCallBack(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CinemascopeSideFrame_o *cinemascopeSideFrame; // x0
  struct System_Action_o *callBack; // x8

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
    sub_1C71354(&this->fields.callBack, 0);
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
        const MethodInfo *method)
{
  struct CinemascopeSideFrame_o **p_cinemascopeSideFrame; // x27
  const MethodInfo *v24; // x2
  CinemascopeSideFrame_o *Value; // x0
  __int64 v26; // x26
  __int64 v27; // x1
  UIWidget_o *texture; // x25
  System_Nullable_int__o v29; // x0
  const MethodInfo *v30; // x2
  System_Nullable_int__o v31; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CC1520 & 1) == 0 )
  {
    sub_1C713B0(&CinemascopeSideFrame_TypeInfo);
    sub_1C713B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_int__get_Value__);
    byte_4CC1520 = 1;
  }
  this->fields.isLoadModeToDefaultWhenDestory = isLoadModeToDefaultWhenDestory;
  p_cinemascopeSideFrame = &this->fields.cinemascopeSideFrame;
  this->fields.cinemascopeSideFrame = cinemascopeSideFrame;
  sub_1C71354(&this->fields.cinemascopeSideFrame, cinemascopeSideFrame);
  Value = this->fields.cinemascopeSideFrame;
  if ( !Value )
  {
    v26 = sub_1C715FC(CinemascopeSideFrame_TypeInfo);
    *(_WORD *)(v26 + 16) = 257;
    System_Object___ctor((Il2CppObject *)v26, 0);
    *(_WORD *)(v26 + 16) = 257;
    *p_cinemascopeSideFrame = (struct CinemascopeSideFrame_o *)v26;
    sub_1C71354(&this->fields.cinemascopeSideFrame, v26);
    Value = *p_cinemascopeSideFrame;
    if ( !*p_cinemascopeSideFrame )
      goto LABEL_17;
  }
  v31 = CinemascopeSideFrame__Show(Value, name, v24);
  if ( v31.fields.hasValue )
  {
    texture = (UIWidget_o *)this->fields.texture;
    v29 = (System_Nullable_int__o)&v31;
    Value = (CinemascopeSideFrame_o *)System_Nullable_int___get_Value(
                                        v29,
                                        (const MethodInfo_3938D54 *)Method_System_Nullable_int__get_Value__);
    if ( !texture )
      goto LABEL_17;
    UIWidget__set_width(texture, (int32_t)Value, 0);
  }
  Value = (CinemascopeSideFrame_o *)this->fields.touch;
  if ( !Value )
    goto LABEL_17;
  Value = (CinemascopeSideFrame_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0);
  if ( !Value )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, isCanSkip, 0);
  this->fields.isCanSkip = isCanSkip;
  this->fields._isCanControl_k__BackingField = isCanControl;
  CriManaMovieMaterial__set_applyTargetAlpha((CriManaMovieMaterial_o *)this, targetAlpha, 0);
  Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
  this->fields.crossFadeStartFrame = fadeStartFrame;
  this->fields.isPlaying = 0;
  if ( !Value )
    goto LABEL_17;
  if ( CriMana_Player__SetFile((CriMana_Player_o *)Value, cpk, path, 0, 0) )
  {
    this->fields.callBack = callBack;
    sub_1C71354(&this->fields.callBack, callBack);
    this->fields.nonDeleteCallBack = nonDeleteCallBack;
    sub_1C71354(&this->fields.nonDeleteCallBack, nonDeleteCallBack);
    Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
    if ( !Value )
      goto LABEL_17;
    CriMana_Player__SetVolume((CriMana_Player_o *)Value, volume, 0);
  }
  CRIMoviePlayer__DispTexture(this, 0, v30);
  Value = (CinemascopeSideFrame_o *)this->fields.busyAnim;
  if ( !Value
    || (Value = (CinemascopeSideFrame_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Value, 0)) == 0 )
  {
LABEL_17:
    sub_1C71608(Value, v27);
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
            sub_1C71608(v5, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v12, 0);
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
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
      sub_1C71608(frameInfo, v6);
    }
    v10 = CRIMoviePlayer__SeekSequence(this, *(_DWORD *)&frameInfo->fields.wasStopping * sec / 1000 + a, 0, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v10, 0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CRIMoviePlayer_o *v5; // x0
  const MethodInfo *v6; // x4
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *playerHolder_k__BackingField; // x20
  struct CriMana_Player_o *v9; // x8
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4CC1527 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&TouchEffectManager_TypeInfo);
    byte_4CC1527 = 1;
  }
  if ( this->fields.isLoadModeToDefaultWhenDestory )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    CommonUI__SetLoadMode(Instance, 0, 0);
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0);
  CRIMoviePlayer__SetPauseSound(
    v5,
    this->fields.isVoicePauseEnded,
    this->fields.isBgmPauseEnded,
    this->fields.isSePauseEnded,
    v6);
  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    playerHolder_k__BackingField = (UnityEngine_Object_o *)player_k__BackingField->fields._playerHolder_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(playerHolder_k__BackingField, 0, 0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v9 = this->fields._player_k__BackingField;
      if ( v9 )
      {
        Instance = (CommonUI_o *)v9->fields._playerHolder_k__BackingField;
        if ( Instance )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71724608(gameObject, 0);
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_1C71608(Instance, v4);
    }
  }
LABEL_17:
  CriManaMovieMaterial__OnDestroy((CriManaMovieMaterial_o *)this, 0);
}


void CRIMoviePlayer__OnMaterialAvailableChanged(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *texture; // x20
  __int64 v5; // x1
  struct UITexture_o *v6; // x0
  UnityEngine_Material_o *v7; // x19

  if ( (byte_4CC1529 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC1529 = 1;
  }
  CriManaMovieController__OnMaterialAvailableChanged((CriManaMovieController_o *)this, 0);
  if ( this->fields._applyTargetAlpha )
  {
    material = (UnityEngine_Object_o *)this->fields._material;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(material, 0, 0) )
    {
      texture = (UnityEngine_Object_o *)this->fields.texture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(texture, 0, 0) )
      {
        v6 = this->fields.texture;
        if ( !v6
          || (v7 = this->fields._material,
              v6 = (struct UITexture_o *)((__int64 (__fastcall *)(struct UITexture_o *, const MethodInfo *))v6->klass->vtable._26_get_mainTexture.methodPtr)(
                                           v6,
                                           v6->klass->vtable._26_get_mainTexture.method),
              !v7) )
        {
          sub_1C71608(v6, v5);
        }
        UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)v6, 0);
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

  if ( (byte_4CC1525 & 1) == 0 )
  {
    sub_1C713B0(&CRIMoviePlayer__PlaySeekSequence_d__42_TypeInfo);
    byte_4CC1525 = 1;
  }
  v5 = sub_1C715FC(CRIMoviePlayer__PlaySeekSequence_d__42_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C71354(v5 + 32, this);
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

  if ( (byte_4CC1522 & 1) == 0 )
  {
    sub_1C713B0(&CRIMoviePlayer__PlaySequence_d__39_TypeInfo);
    byte_4CC1522 = 1;
  }
  v11 = isVoicePause;
  v12 = sub_1C715FC(CRIMoviePlayer__PlaySequence_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 32) = this;
  sub_1C71354(v12 + 32, this);
  *(_BYTE *)(v12 + 42) = isBgmPause;
  *(_BYTE *)(v12 + 43) = isSePause;
  *(_BYTE *)(v12 + 41) = v11;
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

  if ( (byte_4CC1524 & 1) == 0 )
  {
    sub_1C713B0(&CRIMoviePlayer__SeekSequence_d__41_TypeInfo);
    byte_4CC1524 = 1;
  }
  v7 = sub_1C715FC(CRIMoviePlayer__SeekSequence_d__41_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C71354(v7 + 40, this);
  *(_DWORD *)(v7 + 32) = frame;
  *(_QWORD *)(v7 + 48) = callBack;
  sub_1C71354(v7 + 48, callBack);
  return (System_Collections_IEnumerator_o *)v7;
}


void CRIMoviePlayer__SetBackgroundColor(CRIMoviePlayer_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  UIWidget_o *background; // x0

  background = (UIWidget_o *)this->fields.background;
  if ( !background )
    sub_1C71608(0, method);
  UIWidget__set_color(background, color, 0);
}


void CRIMoviePlayer__SetPauseSound(
        CRIMoviePlayer_o *this,
        bool isVoicePause,
        bool isBgmPause,
        bool isSePause,
        const MethodInfo *method)
{
  if ( (byte_4CC1528 & 1) == 0 )
  {
    sub_1C713B0(&BgmManager_TypeInfo);
    sub_1C713B0(&SeManager_TypeInfo);
    byte_4CC1528 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(isBgmPause, 0);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
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
    sub_1C71608(0, method);
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

  if ( (byte_4CC1523 & 1) == 0 )
  {
    sub_1C713B0(&CRIMoviePlayer__StopSequence_d__40_TypeInfo);
    byte_4CC1523 = 1;
  }
  v3 = sub_1C715FC(CRIMoviePlayer__StopSequence_d__40_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354(v3 + 32, this);
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
      sub_1C71608(v5, v4);
    }
  }
}


bool CRIMoviePlayer___PlaySeekSequence_b__42_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1C71608(0, method);
  return CriMana_Player__get_frameInfo(player_k__BackingField, 0) != 0;
}


bool CRIMoviePlayer___PlaySeekSequence_b__42_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1C71608(0, method);
  return CriMana_Player__get_status(player_k__BackingField, 0) == 0;
}


bool CRIMoviePlayer___SeekSequence_b__41_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1C71608(0, method);
  return CriMana_Player__get_frameInfo(player_k__BackingField, 0) != 0;
}


bool CRIMoviePlayer___SeekSequence_b__41_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1C71608(0, method);
  return CriMana_Player__get_status(player_k__BackingField, 0) == 0;
}


UILabel_o *CRIMoviePlayer__get_DebugLabel(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields.debugLabel;
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
  this->fields.background = value;
  sub_1C71354(&this->fields.background, value);
}


void CRIMoviePlayer__set_BusyAnim(CRIMoviePlayer_o *this, UnityEngine_GameObject_o *value, const MethodInfo *method)
{
  this->fields.busyAnim = value;
  sub_1C71354(&this->fields.busyAnim, value);
}


void CRIMoviePlayer__set_Touch(CRIMoviePlayer_o *this, UIButton_o *value, const MethodInfo *method)
{
  this->fields.touch = value;
  sub_1C71354(&this->fields.touch, value);
}


void CRIMoviePlayer__set_isCanControl(CRIMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isCanControl_k__BackingField = value;
}


void CRIMoviePlayer__PlaySeekSequence_d__42___ctor(
        CRIMoviePlayer__PlaySeekSequence_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__PlaySeekSequence_d__42__MoveNext(
        CRIMoviePlayer__PlaySeekSequence_d__42_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  CRIMoviePlayer__PlaySeekSequence_d__42_o *v3; // x19
  struct CRIMoviePlayer_o *_4__this; // x20
  int frame; // w21
  int v6; // w8
  const MethodInfo *v7; // x2
  bool v8; // w21
  UnityEngine_WaitForEndOfFrame_o *v9; // x21
  Il2CppObject *waitForEOF_5__4; // x1
  Il2CppObject **p__2__current; // x19
  int v12; // w8
  Il2CppObject **v13; // x19
  Il2CppObject **v14; // x19
  System_Func_bool__o *v15; // x21
  UnityEngine_WaitUntil_o *v16; // x20
  System_Func_bool__o *v17; // x21
  UnityEngine_WaitUntil_o *v18; // x20

  v3 = this;
  if ( (byte_4CC152A & 1) == 0 )
  {
    sub_1C713B0(&Method_CRIMoviePlayer__PlaySeekSequence_b__42_0__);
    sub_1C713B0(&Method_CRIMoviePlayer__PlaySeekSequence_b__42_1__);
    sub_1C713B0(&System_Func_bool__TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)sub_1C713B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CC152A = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_63;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_63;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
        goto LABEL_9;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_63;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 6 )
      {
LABEL_9:
        this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_63;
        CriMana_Player__Prepare((CriMana_Player_o *)this, 0);
LABEL_11:
        this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_63;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 4 )
        {
          this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
          if ( this )
          {
            frame = v3->fields.frame;
            this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)CriMana_Player__get_movieInfo(
                                                                 (CriMana_Player_o *)this,
                                                                 0);
            if ( this )
            {
              v6 = LODWORD(this->fields._waitForEOF_5__4) - 1;
              if ( frame <= v6 )
                v6 = frame;
              if ( frame < 0 )
                v6 = 0;
              v3->fields.frame = v6;
              this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
              if ( this )
              {
                v3->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0);
                CRIMoviePlayer__DispTexture(_4__this, 0, v7);
                this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields.busyAnim;
                if ( this )
                {
                  this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)UnityEngine_GameObject__get_gameObject(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       0);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                    v3->fields._retry_5__3 = 0;
LABEL_59:
                    CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0);
                    v15 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
                    System_Func_bool____ctor(
                      v15,
                      (Il2CppObject *)_4__this,
                      Method_CRIMoviePlayer__PlaySeekSequence_b__42_1__,
                      0);
                    v16 = (UnityEngine_WaitUntil_o *)sub_1C715FC(UnityEngine_WaitUntil_TypeInfo);
                    UnityEngine_WaitUntil___ctor(v16, v15, 0);
                    v3->fields.__2__current = (Il2CppObject *)v16;
                    p__2__current = &v3->fields.__2__current;
                    sub_1C71354(p__2__current, v16);
                    v12 = 3;
                    goto LABEL_61;
                  }
                }
              }
            }
          }
LABEL_63:
          sub_1C71608(this, method);
        }
        v3->fields.__2__current = 0;
        p__2__current = &v3->fields.__2__current;
        sub_1C71354(p__2__current, 0);
        v12 = 2;
LABEL_61:
        *((_DWORD *)p__2__current - 2) = v12;
        return 1;
      }
      v3->fields.__2__current = 0;
      v14 = &v3->fields.__2__current;
      sub_1C71354(v14, 0);
      v8 = 1;
      *((_DWORD *)v14 - 2) = 1;
      return v8;
    case 2:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_63;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_63;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
        goto LABEL_31;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_63;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 7 )
        goto LABEL_11;
LABEL_31:
      CRIMoviePlayer__EndCallBack(_4__this, method);
      return 0;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_63;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_63;
      CriMana_Player__SetSeekPosition((CriMana_Player_o *)this, v3->fields.frame, 0);
      if ( v3->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      v3->fields._waitForEOF_5__4 = v9;
      sub_1C71354(&v3->fields._waitForEOF_5__4, v9);
      v3->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
      goto LABEL_38;
    case 4:
      v3->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v3->fields._prevTime_5__5) >= 2.0 )
      {
        v3->fields._retry_5__3 = 1;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_63;
LABEL_38:
        this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_63;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 5 )
        {
          waitForEOF_5__4 = (Il2CppObject *)v3->fields._waitForEOF_5__4;
          v3->fields.__2__current = waitForEOF_5__4;
          p__2__current = &v3->fields.__2__current;
          sub_1C71354(p__2__current, waitForEOF_5__4);
          v12 = 4;
          goto LABEL_61;
        }
      }
      v3->fields._waitForEOF_5__4 = 0;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)sub_1C71354(&v3->fields._waitForEOF_5__4, 0);
      if ( !v3->fields._retry_5__3 )
      {
        v17 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v17, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__PlaySeekSequence_b__42_0__, 0);
        v18 = (UnityEngine_WaitUntil_o *)sub_1C715FC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v18, v17, 0);
        v3->fields.__2__current = (Il2CppObject *)v18;
        p__2__current = &v3->fields.__2__current;
        sub_1C71354(p__2__current, v18);
        v12 = 5;
        goto LABEL_61;
      }
      v3->fields._retry_5__3 = 0;
      if ( _4__this )
        goto LABEL_59;
      goto LABEL_63;
    case 5:
      v3->fields.__2__current = 0;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1C71354(p__2__current, 0);
      v12 = 6;
      goto LABEL_61;
    case 6:
      v3->fields.__2__current = 0;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1C71354(p__2__current, 0);
      v12 = 7;
      goto LABEL_61;
    case 7:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_63;
      CRIMoviePlayer__SetPauseSound((CRIMoviePlayer_o *)this, 1, 1, 1, v2);
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields.texture;
      if ( !this )
        goto LABEL_63;
      (*(void (__fastcall **)(CRIMoviePlayer__PlaySeekSequence_d__42_o *, struct UnityEngine_Material_o *, _QWORD))&this->klass[1]._2.element_size)(
        this,
        _4__this->fields._material,
        *(_QWORD *)&this->klass[1]._2.static_fields_size);
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields.texture;
      if ( !this )
        goto LABEL_63;
      BYTE4(this[2].fields._waitForEOF_5__4) = 1;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_63;
      v8 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v3->fields.__2__current = 0;
      v13 = &v3->fields.__2__current;
      sub_1C71354(v13, 0);
      *((_DWORD *)v13 - 2) = 8;
      return v8;
    case 8:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_63;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields.background;
      if ( !this )
        goto LABEL_63;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_63;
      this = (CRIMoviePlayer__PlaySeekSequence_d__42_o *)UnityEngine_GameObject__get_gameObject(
                                                           (UnityEngine_GameObject_o *)this,
                                                           0);
      if ( !this )
        goto LABEL_63;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v8 = 0;
      _4__this->fields.isPlaying = 1;
      return v8;
    default:
      return 0;
  }
}


Il2CppObject *CRIMoviePlayer__PlaySeekSequence_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__PlaySeekSequence_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__PlaySeekSequence_d__42__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__PlaySeekSequence_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_CRIMoviePlayer__PlaySeekSequence_d__42_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *CRIMoviePlayer__PlaySeekSequence_d__42__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__PlaySeekSequence_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__PlaySeekSequence_d__42__System_IDisposable_Dispose(
        CRIMoviePlayer__PlaySeekSequence_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void CRIMoviePlayer__PlaySequence_d__39___ctor(
        CRIMoviePlayer__PlaySequence_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__PlaySequence_d__39__MoveNext(CRIMoviePlayer__PlaySequence_d__39_o *this, const MethodInfo *method)
{
  CRIMoviePlayer__PlaySequence_d__39_o *v2; // x19
  struct CRIMoviePlayer_o *_4__this; // x20
  bool v4; // w21
  Il2CppObject **v5; // x19
  int v6; // w8
  const MethodInfo *v7; // x4
  Il2CppObject **v8; // x19
  int v9; // w8
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_4CC152B & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CRIMoviePlayer__PlaySequence_d__39_o *)sub_1C713B0(&TouchEffectManager_TypeInfo);
    byte_4CC152B = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_57;
      CommonUI__SetLoadMode((CommonUI_o *)this, 8, 0);
LABEL_7:
      if ( !_4__this )
        goto LABEL_57;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
        goto LABEL_12;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 6 )
      {
        v2->fields.__2__current = 0;
        p__2__current = &v2->fields.__2__current;
        sub_1C71354(p__2__current, 0);
        v4 = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return v4;
      }
LABEL_12:
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      CriMana_Player__Prepare((CriMana_Player_o *)this, 0);
LABEL_14:
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 4 )
      {
        v2->fields.__2__current = 0;
        v8 = &v2->fields.__2__current;
        sub_1C71354(v8, 0);
        v9 = 2;
        goto LABEL_53;
      }
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0);
      if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
      v4 = 1;
      TouchEffectManager__SetBlock(1, 0);
      v2->fields.__2__current = 0;
      v5 = &v2->fields.__2__current;
      sub_1C71354(v5, 0);
      v6 = 3;
      goto LABEL_47;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_7;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_57;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
        goto LABEL_32;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 7 )
        goto LABEL_32;
      goto LABEL_14;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_57;
      goto LABEL_34;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_57;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
        goto LABEL_32;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 7 )
      {
LABEL_32:
        CRIMoviePlayer__EndCallBack(_4__this, method);
        return 0;
      }
LABEL_34:
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)CriMana_Player__get_status((CriMana_Player_o *)this, 0);
      if ( (_DWORD)this != 5 )
        goto LABEL_40;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_57;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0);
      if ( !this )
        goto LABEL_57;
      if ( !this->fields.__1__state && !v2->fields.isCanPauseZeroFrame )
      {
        v2->fields.__2__current = 0;
        v8 = &v2->fields.__2__current;
        sub_1C71354(v8, 0);
        v9 = 4;
LABEL_53:
        *((_DWORD *)v8 - 2) = v9;
        return 1;
      }
LABEL_40:
      CRIMoviePlayer__SetPauseSound(
        (CRIMoviePlayer_o *)this,
        v2->fields.isVoicePause,
        v2->fields.isBgmPause,
        v2->fields.isSePause,
        v7);
      if ( !_4__this->fields.isCanSkip )
        goto LABEL_43;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_57;
      CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
LABEL_43:
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields.texture;
      if ( !this
        || ((*(void (__fastcall **)(CRIMoviePlayer__PlaySequence_d__39_o *, struct UnityEngine_Material_o *, _QWORD))&this->klass[1]._2.element_size)(
              this,
              _4__this->fields._material,
              *(_QWORD *)&this->klass[1]._2.static_fields_size),
            (this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields.texture) == 0)
        || (BYTE4(this[3].fields.__4__this) = 1,
            (this = (CRIMoviePlayer__PlaySequence_d__39_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0)) == 0) )
      {
LABEL_57:
        sub_1C71608(this, method);
      }
      v4 = 1;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v2->fields.__2__current = 0;
      v5 = &v2->fields.__2__current;
      sub_1C71354(v5, 0);
      v6 = 5;
LABEL_47:
      *((_DWORD *)v5 - 2) = v6;
      return v4;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_57;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)_4__this->fields.background;
      if ( !this )
        goto LABEL_57;
      this = (CRIMoviePlayer__PlaySequence_d__39_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v4 = 0;
      _4__this->fields.isPlaying = 1;
      return v4;
    default:
      return 0;
  }
}


Il2CppObject *CRIMoviePlayer__PlaySequence_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__PlaySequence_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__PlaySequence_d__39__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__PlaySequence_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_CRIMoviePlayer__PlaySequence_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *CRIMoviePlayer__PlaySequence_d__39__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__PlaySequence_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__PlaySequence_d__39__System_IDisposable_Dispose(
        CRIMoviePlayer__PlaySequence_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void CRIMoviePlayer__SeekSequence_d__41___ctor(
        CRIMoviePlayer__SeekSequence_d__41_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__SeekSequence_d__41__MoveNext(CRIMoviePlayer__SeekSequence_d__41_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  CRIMoviePlayer__SeekSequence_d__41_o *v3; // x19
  struct CRIMoviePlayer_o *_4__this; // x20
  int frame; // w21
  int v6; // w8
  const MethodInfo *v7; // x2
  Il2CppObject **p__2__current; // x19
  int v9; // w8
  UnityEngine_WaitForEndOfFrame_o *v10; // x21
  Il2CppObject *waitForEOF_5__4; // x1
  bool result; // w0
  System_Func_bool__o *v13; // x21
  UnityEngine_WaitUntil_o *v14; // x20
  Il2CppObject **v15; // x19
  System_Func_bool__o *v16; // x21
  UnityEngine_WaitUntil_o *v17; // x20

  v3 = this;
  if ( (byte_4CC152C & 1) == 0 )
  {
    sub_1C713B0(&Method_CRIMoviePlayer__SeekSequence_b__41_0__);
    sub_1C713B0(&Method_CRIMoviePlayer__SeekSequence_b__41_1__);
    sub_1C713B0(&System_Func_bool__TypeInfo);
    sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (CRIMoviePlayer__SeekSequence_d__41_o *)sub_1C713B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4CC152C = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_39;
      frame = v3->fields.frame;
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
      if ( !this )
        goto LABEL_39;
      v6 = LODWORD(this->fields.callBack) - 1;
      if ( frame <= v6 )
        v6 = frame;
      if ( frame < 0 )
        v6 = 0;
      v3->fields.frame = v6;
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_39;
      v3->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0);
      CRIMoviePlayer__DispTexture(_4__this, 0, v7);
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_39;
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v3->fields._retry_5__3 = 0;
      goto LABEL_36;
    case 1:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_39;
      CriMana_Player__SetSeekPosition((CriMana_Player_o *)this, v3->fields.frame, 0);
      if ( v3->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0);
      v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v10, 0);
      v3->fields._waitForEOF_5__4 = v10;
      sub_1C71354(&v3->fields._waitForEOF_5__4, v10);
      v3->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0);
      goto LABEL_25;
    case 2:
      v3->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - v3->fields._prevTime_5__5) >= 2.0 )
      {
        v3->fields._retry_5__3 = 1;
      }
      else
      {
        if ( !_4__this )
LABEL_39:
          sub_1C71608(this, method);
LABEL_25:
        this = (CRIMoviePlayer__SeekSequence_d__41_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_39;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) != 5 )
        {
          waitForEOF_5__4 = (Il2CppObject *)v3->fields._waitForEOF_5__4;
          v3->fields.__2__current = waitForEOF_5__4;
          p__2__current = &v3->fields.__2__current;
          sub_1C71354(p__2__current, waitForEOF_5__4);
          v9 = 2;
LABEL_38:
          *((_DWORD *)p__2__current - 2) = v9;
          return 1;
        }
      }
      v3->fields._waitForEOF_5__4 = 0;
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)sub_1C71354(&v3->fields._waitForEOF_5__4, 0);
      if ( !v3->fields._retry_5__3 )
      {
        v16 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v16, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__41_0__, 0);
        v17 = (UnityEngine_WaitUntil_o *)sub_1C715FC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v17, v16, 0);
        v3->fields.__2__current = (Il2CppObject *)v17;
        p__2__current = &v3->fields.__2__current;
        sub_1C71354(p__2__current, v17);
        v9 = 3;
        goto LABEL_38;
      }
      v3->fields._retry_5__3 = 0;
      if ( !_4__this )
        goto LABEL_39;
LABEL_36:
      CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0);
      v13 = (System_Func_bool__o *)sub_1C715FC(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v13, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__41_1__, 0);
      v14 = (UnityEngine_WaitUntil_o *)sub_1C715FC(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v14, v13, 0);
      v3->fields.__2__current = (Il2CppObject *)v14;
      v15 = &v3->fields.__2__current;
      sub_1C71354(v15, v14);
      result = 1;
      *((_DWORD *)v15 - 2) = 1;
      return result;
    case 3:
      v3->fields.__2__current = 0;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1C71354(p__2__current, 0);
      v9 = 4;
      goto LABEL_38;
    case 4:
      v3->fields.__2__current = 0;
      p__2__current = &v3->fields.__2__current;
      *((_DWORD *)p__2__current - 2) = -1;
      sub_1C71354(p__2__current, 0);
      v9 = 5;
      goto LABEL_38;
    case 5:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_39;
      CRIMoviePlayer__DispTexture(_4__this, 1, v2);
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_39;
      this = (CRIMoviePlayer__SeekSequence_d__41_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
      if ( !this )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      _4__this->fields.isPlaying = 1;
      ActionExtensions__Call(v3->fields.callBack, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *CRIMoviePlayer__SeekSequence_d__41__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__SeekSequence_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__SeekSequence_d__41__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__SeekSequence_d__41_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_CRIMoviePlayer__SeekSequence_d__41_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *CRIMoviePlayer__SeekSequence_d__41__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__SeekSequence_d__41_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__SeekSequence_d__41__System_IDisposable_Dispose(
        CRIMoviePlayer__SeekSequence_d__41_o *this,
        const MethodInfo *method)
{
  ;
}


void CRIMoviePlayer__StopSequence_d__40___ctor(
        CRIMoviePlayer__StopSequence_d__40_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool CRIMoviePlayer__StopSequence_d__40__MoveNext(CRIMoviePlayer__StopSequence_d__40_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *_4__this; // x20
  CRIMoviePlayer__StopSequence_d__40_o *v3; // x19
  bool result; // w0
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  v3 = this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  this = (CRIMoviePlayer__StopSequence_d__40_o *)_4__this->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_10;
  if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0) )
  {
LABEL_7:
    CRIMoviePlayer__EndCallBack(_4__this, method);
    return 0;
  }
  this = (CRIMoviePlayer__StopSequence_d__40_o *)_4__this->fields._player_k__BackingField;
  if ( !this )
LABEL_10:
    sub_1C71608(this, method);
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0) == 6 )
    goto LABEL_7;
  v3->fields.__2__current = 0;
  p__2__current = &v3->fields.__2__current;
  sub_1C71354(p__2__current, 0);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *CRIMoviePlayer__StopSequence_d__40__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__StopSequence_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn CRIMoviePlayer__StopSequence_d__40__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__StopSequence_d__40_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_CRIMoviePlayer__StopSequence_d__40_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *CRIMoviePlayer__StopSequence_d__40__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__StopSequence_d__40_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void CRIMoviePlayer__StopSequence_d__40__System_IDisposable_Dispose(
        CRIMoviePlayer__StopSequence_d__40_o *this,
        const MethodInfo *method)
{
  ;
}
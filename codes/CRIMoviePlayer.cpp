void __fastcall CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *texture; // x0
  UnityEngine_Object_o *v5; // x20
  UnityEngine_Texture2D_o *v6; // x20
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_48E6214 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Texture2D_TypeInfo, v3);
    byte_48E6214 = 1;
  }
  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture )
    goto LABEL_12;
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                 texture,
                                 texture->klass->vtable._27_set_mainTexture.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v5, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Texture2D_o *)sub_1B00F18(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_67965920(v6, 128, 128, 1, 0, 0LL);
    texture = (UIWidget_o *)this->fields.texture;
    if ( texture )
    {
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
        texture,
        v6,
        texture->klass->vtable._28_get_shader.methodPtr);
      texture = (UIWidget_o *)this->fields.texture;
      if ( texture )
      {
        v7.fields.r = 0.0;
        v7.fields.g = 0.0;
        v7.fields.b = 0.0;
        v7.fields.a = 1.0;
        UIWidget__set_color(texture, v7, 0LL);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1B00F28(texture, method);
  }
LABEL_10:
  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)texture, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__DispTexture(CRIMoviePlayer_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *texture; // x0

  texture = (UnityEngine_Component_o *)this->fields.texture;
  if ( !texture
    || (texture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(texture, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)texture, flag, 0LL),
        (texture = (UnityEngine_Component_o *)this->fields.background) == 0LL)
    || (texture = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(texture, 0LL)) == 0LL )
  {
    sub_1B00F28(texture, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)texture, !flag, 0LL);
}


void __fastcall CRIMoviePlayer__Dispose(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *v2; // x19
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *klass; // x20
  struct CriMana_Player_o *v5; // x8
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Object_o *v7; // x19

  v2 = this;
  if ( (byte_48E6210 & 1) == 0 )
  {
    this = (CRIMoviePlayer_o *)sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E6210 = 1;
  }
  player_k__BackingField = v2->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    goto LABEL_16;
  klass = (UnityEngine_Object_o *)player_k__BackingField[1].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields._player_k__BackingField;
    if ( v5 )
    {
      this = (CRIMoviePlayer_o *)v5[1].klass;
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_1B00F28(this, method);
  }
LABEL_12:
  this = (CRIMoviePlayer_o *)v2->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_16;
  ((void (__fastcall *)(CRIMoviePlayer_o *, Il2CppMethodPointer))this->klass->vtable._5_OnDisable.method)(
    this,
    this->klass->vtable._6_CriInternalUpdate.methodPtr);
  v7 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68077656(v7, 0LL);
}


void __fastcall CRIMoviePlayer__EndCallBack(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CinemascopeSideFrame_o *cinemascopeSideFrame; // x0
  struct System_Action_o *v4; // x8
  ServantStatusBattleListViewItem_o *p_callBack; // x19
  struct System_Action_o *callBack; // t1
  int32_t v7; // w2
  int32_t v8; // w3

  cinemascopeSideFrame = this->fields.cinemascopeSideFrame;
  if ( cinemascopeSideFrame )
    CinemascopeSideFrame__Hide(cinemascopeSideFrame, method);
  callBack = this->fields.callBack;
  p_callBack = (ServantStatusBattleListViewItem_o *)&this->fields.callBack;
  v4 = callBack;
  if ( callBack )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
    p_callBack->klass = 0LL;
    sub_1B00C70(p_callBack, 0, v7, v8);
  }
}


void __fastcall CRIMoviePlayer__HideCinemascopeSideFrame(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CinemascopeSideFrame_o *cinemascopeSideFrame; // x0

  cinemascopeSideFrame = this->fields.cinemascopeSideFrame;
  if ( cinemascopeSideFrame )
    CinemascopeSideFrame__HideLater(cinemascopeSideFrame, method);
}


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
  struct CinemascopeSideFrame_o **p_cinemascopeSideFrame; // x27
  const MethodInfo *v25; // x2
  CinemascopeSideFrame_o *Value; // x0
  __int64 v27; // x26
  int32_t v28; // w2
  char v29; // w3
  __int64 v30; // x1
  UIWidget_o *texture; // x25
  const MethodInfo *v32; // x2
  char v33; // w3
  System_Nullable_int__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_int__o v35; // 0:x0.8

  if ( (byte_48E620F & 1) == 0 )
  {
    sub_1B00CCC(&CinemascopeSideFrame_TypeInfo, name);
    sub_1B00CCC(&Method_System_Nullable_int__get_HasValue__, v22);
    sub_1B00CCC(&Method_System_Nullable_int__get_Value__, v23);
    byte_48E620F = 1;
  }
  this->fields.cinemascopeSideFrame = cinemascopeSideFrame;
  p_cinemascopeSideFrame = &this->fields.cinemascopeSideFrame;
  this->fields.isLoadModeToDefaultWhenDestory = isLoadModeToDefaultWhenDestory;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.cinemascopeSideFrame,
    (int32_t)cinemascopeSideFrame,
    (int32_t)path,
    isCanSkip);
  Value = this->fields.cinemascopeSideFrame;
  if ( !Value )
  {
    v27 = sub_1B00F18(CinemascopeSideFrame_TypeInfo);
    *(_WORD *)(v27 + 16) = 257;
    System_Object___ctor((Il2CppObject *)v27, 0LL);
    *(_WORD *)(v27 + 16) = 257;
    *p_cinemascopeSideFrame = (struct CinemascopeSideFrame_o *)v27;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.cinemascopeSideFrame, v27, v28, v29);
    Value = *p_cinemascopeSideFrame;
    if ( !*p_cinemascopeSideFrame )
      goto LABEL_17;
  }
  v34 = CinemascopeSideFrame__Show(Value, name, v25);
  if ( v34.fields.hasValue )
  {
    texture = (UIWidget_o *)this->fields.texture;
    v35 = (System_Nullable_int__o)&v34;
    Value = (CinemascopeSideFrame_o *)System_Nullable_int___get_Value(
                                        v35,
                                        (const MethodInfo_34DEC1C *)Method_System_Nullable_int__get_Value__);
    if ( !texture )
      goto LABEL_17;
    UIWidget__set_width(texture, (int32_t)Value, 0LL);
  }
  Value = (CinemascopeSideFrame_o *)this->fields.touch;
  if ( !Value )
    goto LABEL_17;
  Value = (CinemascopeSideFrame_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Value, 0LL);
  if ( !Value )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, isCanSkip, 0LL);
  this->fields.isCanSkip = isCanSkip;
  this->fields._isCanControl_k__BackingField = isCanControl;
  CriManaMovieMaterial__set_applyTargetAlpha((CriManaMovieMaterial_o *)this, targetAlpha, 0LL);
  Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
  this->fields.crossFadeStartFrame = fadeStartFrame;
  this->fields.isPlaying = 0;
  if ( !Value )
    goto LABEL_17;
  if ( CriMana_Player__SetFile((CriMana_Player_o *)Value, cpk, path, 0, 0LL) )
  {
    this->fields.callBack = callBack;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callBack, (int32_t)callBack, (int32_t)v32, v33);
    Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
    if ( !Value )
      goto LABEL_17;
    CriMana_Player__SetVolume((CriMana_Player_o *)Value, volume, 0LL);
  }
  CRIMoviePlayer__DispTexture(this, 0, v32);
  Value = (CinemascopeSideFrame_o *)this->fields.busyAnim;
  if ( !Value
    || (Value = (CinemascopeSideFrame_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Value, 0LL)) == 0LL )
  {
LABEL_17:
    sub_1B00F28(Value, v30);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Value, 0, 0LL);
}


bool __fastcall CRIMoviePlayer__IsPlaying(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
    LOBYTE(player_k__BackingField) = CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
                                  && this->fields.isPlaying;
  return (char)player_k__BackingField;
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
  this->fields.isPlaying = 0;
  v10 = CRIMoviePlayer__PlaySequence(this, isBgmPause, isSePause, isVoicePause, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall CRIMoviePlayer__MovieSeekByFrame(CRIMoviePlayer_o *this, int32_t frame, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v6; // x2
  System_Collections_IEnumerator_o *v7; // x1

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5 && this->fields.isPlaying )
  {
    this->fields.isPlaying = 0;
    v7 = CRIMoviePlayer__SeekSequence(this, frame, v6);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
  }
}


void __fastcall CRIMoviePlayer__MovieSeekByRelativeTime(CRIMoviePlayer_o *this, int32_t sec, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0
  __int64 v6; // x1
  CriMana_Player_o *frameInfo; // x0
  int32_t a; // w21
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5 && this->fields.isPlaying )
  {
    frameInfo = this->fields._player_k__BackingField;
    this->fields.isPlaying = 0;
    if ( !frameInfo
      || (frameInfo = (CriMana_Player_o *)CriMana_Player__get_frameInfo(frameInfo, 0LL)) == 0LL
      || !this->fields._player_k__BackingField
      || (a = frameInfo->fields.guid.fields._a,
          (frameInfo = (CriMana_Player_o *)CriMana_Player__get_frameInfo(this->fields._player_k__BackingField, 0LL)) == 0LL) )
    {
      sub_1B00F28(frameInfo, v6);
    }
    v10 = CRIMoviePlayer__SeekSequence(this, *(_DWORD *)&frameInfo->fields.wasStopping * sec / 1000 + a, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
  }
}


void __fastcall CRIMoviePlayer__MovieStop(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *v5; // x1

  CRIMoviePlayer__DispTexture(this, 0, v2);
  CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)this, 0LL);
  this->fields.isPlaying = 0;
  v5 = CRIMoviePlayer__StopSequence(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_68062928((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CRIMoviePlayer_o *v7; // x0
  const MethodInfo *v8; // x4
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *klass; // x20
  struct CriMana_Player_o *v11; // x8
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_48E6215 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B00CCC(&TouchEffectManager_TypeInfo, v4);
    byte_48E6215 = 1;
  }
  if ( this->fields.isLoadModeToDefaultWhenDestory )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    CommonUI__SetLoadMode(Instance, 0, 0LL);
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0LL);
  CRIMoviePlayer__SetPauseSound(v7, 0, 0, 0, v8);
  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    klass = (UnityEngine_Object_o *)player_k__BackingField[1].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v11 = this->fields._player_k__BackingField;
      if ( v11 )
      {
        Instance = (CommonUI_o *)v11[1].klass;
        if ( Instance )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_68077656(gameObject, 0LL);
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_1B00F28(Instance, v6);
    }
  }
LABEL_17:
  CriManaMovieMaterial__OnDestroy((CriManaMovieMaterial_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__OnMaterialAvailableChanged(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *material; // x20
  UnityEngine_Object_o *texture; // x20
  __int64 v5; // x1
  struct UITexture_o *v6; // x0
  UnityEngine_Material_o *v7; // x19

  if ( (byte_48E6217 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E6217 = 1;
  }
  CriManaMovieController__OnMaterialAvailableChanged((CriManaMovieController_o *)this, 0LL);
  if ( this->fields._applyTargetAlpha )
  {
    material = (UnityEngine_Object_o *)this->fields._material;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(material, 0LL, 0LL) )
    {
      texture = (UnityEngine_Object_o *)this->fields.texture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(texture, 0LL, 0LL) )
      {
        v6 = this->fields.texture;
        if ( !v6
          || (v7 = this->fields._material,
              v6 = (struct UITexture_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v6->klass->vtable._26_get_mainTexture.method)(
                                           v6,
                                           v6->klass->vtable._27_set_mainTexture.methodPtr),
              !v7) )
        {
          sub_1B00F28(v6, v5);
        }
        UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)v6, 0LL);
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
  bool v9; // w23
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E6211 & 1) == 0 )
  {
    sub_1B00CCC(&CRIMoviePlayer__PlaySequence_d__23_TypeInfo, isBgmPause);
    byte_48E6211 = 1;
  }
  v9 = isVoicePause;
  v10 = sub_1B00F18(CRIMoviePlayer__PlaySequence_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)this, v11, v12);
  *(_BYTE *)(v10 + 41) = isBgmPause;
  *(_BYTE *)(v10 + 42) = isSePause;
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__SeekSequence(
        CRIMoviePlayer_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E6213 & 1) == 0 )
  {
    sub_1B00CCC(&CRIMoviePlayer__SeekSequence_d__25_TypeInfo, *(_QWORD *)&frame);
    byte_48E6213 = 1;
  }
  v5 = sub_1B00F18(CRIMoviePlayer__SeekSequence_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 32) = frame;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMoviePlayer__SetBackgroundColor(
        CRIMoviePlayer_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UIWidget_o *background; // x0

  background = (UIWidget_o *)this->fields.background;
  if ( !background )
    sub_1B00F28(0LL, method);
  UIWidget__set_color(background, color, 0LL);
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

  if ( (byte_48E6216 & 1) == 0 )
  {
    sub_1B00CCC(&BgmManager_TypeInfo, isVoicePause);
    sub_1B00CCC(&SeManager_TypeInfo, v8);
    byte_48E6216 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PauseBgm(isBgmPause, 0LL);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PauseSe(isSePause, 0LL);
  SeManager__PauseVoice(isVoicePause, 0LL);
}


void __fastcall CRIMoviePlayer__SetVolume(CRIMoviePlayer_o *this, float volume, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1B00F28(0LL, method);
  CriMana_Player__SetVolume(player_k__BackingField, volume, 0LL);
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__StopSequence(
        CRIMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E6212 & 1) == 0 )
  {
    sub_1B00CCC(&CRIMoviePlayer__StopSequence_d__24_TypeInfo, method);
    byte_48E6212 = 1;
  }
  v3 = sub_1B00F18(CRIMoviePlayer__StopSequence_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall CRIMoviePlayer__Update(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v4; // x1
  CriMana_Player_o *v5; // x0
  const MethodInfo *v6; // x1

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    if ( CriMana_Player__get_status(player_k__BackingField, 0LL) == 6 )
    {
LABEL_5:
      CRIMoviePlayer__EndCallBack(this, v4);
      this->fields.isPlaying = 0;
      return;
    }
    v5 = this->fields._player_k__BackingField;
    if ( !v5 )
      goto LABEL_14;
    if ( CriMana_Player__get_status(v5, 0LL) == 7 )
      goto LABEL_5;
    v5 = this->fields._player_k__BackingField;
    if ( !v5 )
      goto LABEL_14;
    if ( CriMana_Player__get_status(v5, 0LL) == 5 && this->fields._applyTargetAlpha && this->fields.crossFadeStartFrame )
    {
      v5 = this->fields._player_k__BackingField;
      if ( v5 )
      {
        if ( CriMana_Player__GetDisplayedFrameNo(v5, 0LL) >= this->fields.crossFadeStartFrame )
        {
          CRIMoviePlayer__EndCallBack(this, v6);
          this->fields.crossFadeStartFrame = 0;
        }
        return;
      }
LABEL_14:
      sub_1B00F28(v5, v4);
    }
  }
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__25_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1B00F28(0LL, method);
  return CriMana_Player__get_frameInfo(player_k__BackingField, 0LL) != 0LL;
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__25_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1B00F28(0LL, method);
  return CriMana_Player__get_status(player_k__BackingField, 0LL) == 0;
}


bool __fastcall CRIMoviePlayer__get_isCanControl(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._isCanControl_k__BackingField;
}


void __fastcall CRIMoviePlayer__set_isCanControl(CRIMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._isCanControl_k__BackingField = value;
}


void __fastcall CRIMoviePlayer__PlaySequence_d__23___ctor(
        CRIMoviePlayer__PlaySequence_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CRIMoviePlayer__PlaySequence_d__23__MoveNext(
        CRIMoviePlayer__PlaySequence_d__23_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer__PlaySequence_d__23_o *v2; // x19
  __int64 v3; // x1
  struct CRIMoviePlayer_o *_4__this; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  bool v9; // w21
  ServantStatusBattleListViewItem_o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w8
  const MethodInfo *v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_o *v19; // x19
  int v20; // w8
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  v2 = this;
  if ( (byte_48E6218 & 1) == 0 )
  {
    sub_1B00CCC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (CRIMoviePlayer__PlaySequence_d__23_o *)sub_1B00CCC(&TouchEffectManager_TypeInfo, v3);
    byte_48E6218 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_56;
      CommonUI__SetLoadMode((CommonUI_o *)this, 8, 0LL);
LABEL_7:
      if ( !_4__this )
        goto LABEL_56;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
        goto LABEL_12;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 6 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B00C70(p__2__current, 0, v5, v6);
        v9 = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return v9;
      }
LABEL_12:
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      CriMana_Player__Prepare((CriMana_Player_o *)this, 0LL);
LABEL_14:
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 4 )
      {
        CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
        if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
        v9 = 1;
        TouchEffectManager__SetBlock(1, 0LL);
        v2->fields.__2__current = 0LL;
        v10 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B00C70(v10, 0, v11, v12);
        v13 = 3;
        goto LABEL_46;
      }
      v2->fields.__2__current = 0LL;
      v19 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B00C70(v19, 0, v7, v8);
      v20 = 2;
      goto LABEL_54;
    case 1:
      v2->fields.__1__state = -1;
      goto LABEL_7;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
        goto LABEL_32;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 7 )
        goto LABEL_32;
      goto LABEL_14;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      goto LABEL_34;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
        goto LABEL_32;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_56;
      if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 7 )
      {
LABEL_34:
        this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_56;
        this = (CRIMoviePlayer__PlaySequence_d__23_o *)CriMana_Player__get_status((CriMana_Player_o *)this, 0LL);
        if ( (_DWORD)this == 5 )
        {
          this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields._player_k__BackingField;
          if ( !this )
            goto LABEL_56;
          this = (CRIMoviePlayer__PlaySequence_d__23_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0LL);
          if ( !this )
            goto LABEL_56;
          if ( !this->fields.__1__state )
          {
            v2->fields.__2__current = 0LL;
            v19 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
            sub_1B00C70(v19, 0, v15, v16);
            v20 = 4;
LABEL_54:
            *(_DWORD *)&v19[-1].fields.isMine = v20;
            return 1;
          }
        }
        CRIMoviePlayer__SetPauseSound(
          (CRIMoviePlayer_o *)this,
          v2->fields.isVoicePause,
          v2->fields.isBgmPause,
          v2->fields.isSePause,
          v14);
        if ( _4__this->fields.isCanSkip )
        {
          this = (CRIMoviePlayer__PlaySequence_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !this )
            goto LABEL_56;
          CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
        }
        this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields.texture;
        if ( this )
        {
          (*(void (__fastcall **)(CRIMoviePlayer__PlaySequence_d__23_o *, struct UnityEngine_Material_o *, _QWORD))&this->klass[1]._2.thread_static_fields_offset)(
            this,
            _4__this->fields._material,
            *(_QWORD *)&this->klass[1]._2.token);
          this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields.texture;
          if ( this )
          {
            BYTE4(this[3].fields.__4__this) = 1;
            this = (CRIMoviePlayer__PlaySequence_d__23_o *)UnityEngine_Component__get_gameObject(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( this )
            {
              v9 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v2->fields.__2__current = 0LL;
              v10 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B00C70(v10, 0, v17, v18);
              v13 = 5;
LABEL_46:
              *(_DWORD *)&v10[-1].fields.isMine = v13;
              return v9;
            }
          }
        }
LABEL_56:
        sub_1B00F28(this, method);
      }
LABEL_32:
      CRIMoviePlayer__EndCallBack(_4__this, method);
      return 0;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)_4__this->fields.background;
      if ( !this )
        goto LABEL_56;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_56;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v9 = 0;
      _4__this->fields.isPlaying = 1;
      return v9;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall CRIMoviePlayer__PlaySequence_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__PlaySequence_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CRIMoviePlayer__PlaySequence_d__23__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__PlaySequence_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_CRIMoviePlayer__PlaySequence_d__23_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall CRIMoviePlayer__PlaySequence_d__23__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__PlaySequence_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CRIMoviePlayer__PlaySequence_d__23__System_IDisposable_Dispose(
        CRIMoviePlayer__PlaySequence_d__23_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CRIMoviePlayer__SeekSequence_d__25___ctor(
        CRIMoviePlayer__SeekSequence_d__25_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CRIMoviePlayer__SeekSequence_d__25__MoveNext(
        CRIMoviePlayer__SeekSequence_d__25_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  CRIMoviePlayer__SeekSequence_d__25_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct CRIMoviePlayer_o *_4__this; // x20
  int frame; // w21
  int v11; // w8
  const MethodInfo *v12; // x2
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int v14; // w8
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_WaitForEndOfFrame_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *waitForEOF_5__4; // x1
  bool result; // w0
  System_Func_bool__o *v22; // x21
  UnityEngine_WaitUntil_o *v23; // x20
  ServantStatusBattleListViewItem_o *v24; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  System_Func_bool__o *v27; // x21
  UnityEngine_WaitUntil_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3

  v4 = this;
  if ( (byte_48E6219 & 1) == 0 )
  {
    sub_1B00CCC(&Method_CRIMoviePlayer__SeekSequence_b__25_0__, method);
    sub_1B00CCC(&Method_CRIMoviePlayer__SeekSequence_b__25_1__, v5);
    sub_1B00CCC(&System_Func_bool__TypeInfo, v6);
    sub_1B00CCC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v7);
    this = (CRIMoviePlayer__SeekSequence_d__25_o *)sub_1B00CCC(&UnityEngine_WaitUntil_TypeInfo, v8);
    byte_48E6219 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_40;
      frame = v4->fields.frame;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
      if ( !this )
        goto LABEL_40;
      v11 = *(_DWORD *)&this->fields._isPaused_5__2 - 1;
      if ( frame <= v11 )
        v11 = frame;
      if ( frame < 0 )
        v11 = 0;
      v4->fields.frame = v11;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_40;
      v4->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0LL);
      CRIMoviePlayer__DispTexture(_4__this, 0, v12);
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_40;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v4->fields._retry_5__3 = 0;
      goto LABEL_36;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_40;
      CriMana_Player__SetSeekPosition((CriMana_Player_o *)this, v4->fields.frame, 0LL);
      if ( v4->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0LL);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B00F18(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0LL);
      v4->fields._waitForEOF_5__4 = v17;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._waitForEOF_5__4, (int32_t)v17, v18, v19);
      v4->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      goto LABEL_25;
    case 2:
      v4->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v4->fields._prevTime_5__5) >= 2.0 )
      {
        v4->fields._retry_5__3 = 1;
      }
      else
      {
        if ( !_4__this )
LABEL_40:
          sub_1B00F28(this, method);
LABEL_25:
        this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_40;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 5 )
        {
          waitForEOF_5__4 = (Il2CppObject *)v4->fields._waitForEOF_5__4;
          v4->fields.__2__current = waitForEOF_5__4;
          p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B00C70(p__2__current, (int32_t)waitForEOF_5__4, v15, v16);
          v14 = 2;
LABEL_38:
          *(_DWORD *)&p__2__current[-1].fields.isMine = v14;
          return 1;
        }
      }
      v4->fields._waitForEOF_5__4 = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields._waitForEOF_5__4, 0, v15, v16);
      if ( !v4->fields._retry_5__3 )
      {
        v27 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v27, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__25_0__, 0LL);
        v28 = (UnityEngine_WaitUntil_o *)sub_1B00F18(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v28, v27, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v28;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B00C70(p__2__current, (int32_t)v28, v29, v30);
        v14 = 3;
        goto LABEL_38;
      }
      v4->fields._retry_5__3 = 0;
      if ( !_4__this )
        goto LABEL_40;
LABEL_36:
      CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0LL);
      v22 = (System_Func_bool__o *)sub_1B00F18(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v22, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__25_1__, 0LL);
      v23 = (UnityEngine_WaitUntil_o *)sub_1B00F18(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v23, v22, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v23;
      v24 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B00C70(v24, (int32_t)v23, v25, v26);
      result = 1;
      *(_DWORD *)&v24[-1].fields.isMine = 1;
      return result;
    case 3:
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
      sub_1B00C70(p__2__current, 0, (int32_t)v2, v3);
      v14 = 4;
      goto LABEL_38;
    case 4:
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields.isMine = -1;
      sub_1B00C70(p__2__current, 0, (int32_t)v2, v3);
      v14 = 5;
      goto LABEL_38;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      CRIMoviePlayer__DispTexture(_4__this, 1, v2);
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_40;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      result = 0;
      _4__this->fields.isPlaying = 1;
      return result;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall CRIMoviePlayer__SeekSequence_d__25__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__SeekSequence_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CRIMoviePlayer__SeekSequence_d__25__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__SeekSequence_d__25_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_CRIMoviePlayer__SeekSequence_d__25_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall CRIMoviePlayer__SeekSequence_d__25__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__SeekSequence_d__25_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CRIMoviePlayer__SeekSequence_d__25__System_IDisposable_Dispose(
        CRIMoviePlayer__SeekSequence_d__25_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CRIMoviePlayer__StopSequence_d__24___ctor(
        CRIMoviePlayer__StopSequence_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall CRIMoviePlayer__StopSequence_d__24__MoveNext(
        CRIMoviePlayer__StopSequence_d__24_o *this,
        const MethodInfo *method)
{
  struct CRIMoviePlayer_o *_4__this; // x20
  CRIMoviePlayer__StopSequence_d__24_o *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3
  bool result; // w0
  ServantStatusBattleListViewItem_o *p__2__current; // x19

  if ( this->fields.__1__state >= 2u )
    return 0;
  _4__this = this->fields.__4__this;
  v3 = this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  this = (CRIMoviePlayer__StopSequence_d__24_o *)_4__this->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_10;
  if ( !CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) )
  {
LABEL_7:
    CRIMoviePlayer__EndCallBack(_4__this, method);
    return 0;
  }
  this = (CRIMoviePlayer__StopSequence_d__24_o *)_4__this->fields._player_k__BackingField;
  if ( !this )
LABEL_10:
    sub_1B00F28(this, method);
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 6 )
    goto LABEL_7;
  v3->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v3->fields.__2__current;
  sub_1B00C70(p__2__current, 0, v4, v5);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall CRIMoviePlayer__StopSequence_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        CRIMoviePlayer__StopSequence_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn CRIMoviePlayer__StopSequence_d__24__System_Collections_IEnumerator_Reset(
        CRIMoviePlayer__StopSequence_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_CRIMoviePlayer__StopSequence_d__24_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall CRIMoviePlayer__StopSequence_d__24__System_Collections_IEnumerator_get_Current(
        CRIMoviePlayer__StopSequence_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall CRIMoviePlayer__StopSequence_d__24__System_IDisposable_Dispose(
        CRIMoviePlayer__StopSequence_d__24_o *this,
        const MethodInfo *method)
{
  ;
}
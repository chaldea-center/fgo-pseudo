void __fastcall CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIWidget_o *texture; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  UnityEngine_Texture2D_o *v11; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19F40 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v4, v5);
    byte_4B19F40 = 1;
  }
  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture )
    goto LABEL_12;
  v8 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                 texture,
                                 texture->klass->vtable._27_set_mainTexture.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(v8, 0LL, 0LL) )
  {
    v11 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, method, v9, v10);
    UnityEngine_Texture2D___ctor_70042420(v11, 128, 128, 1, 0, 0LL);
    texture = (UIWidget_o *)this->fields.texture;
    if ( texture )
    {
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
        texture,
        v11,
        texture->klass->vtable._28_get_shader.methodPtr);
      texture = (UIWidget_o *)this->fields.texture;
      if ( texture )
      {
        v12.fields.r = 0.0;
        v12.fields.g = 0.0;
        v12.fields.b = 0.0;
        v12.fields.a = 1.0;
        UIWidget__set_color(texture, v12, 0LL);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1BCAA3C(texture, method);
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
    sub_1BCAA3C(texture, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)texture, !flag, 0LL);
}


void __fastcall CRIMoviePlayer__Dispose(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CRIMoviePlayer_o *v3; // x19
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *klass; // x20
  struct CriMana_Player_o *v6; // x8
  __int64 v7; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x19

  v3 = this;
  if ( (byte_4B19F3C & 1) == 0 )
  {
    this = (CRIMoviePlayer_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19F3C = 1;
  }
  player_k__BackingField = v3->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    goto LABEL_16;
  klass = (UnityEngine_Object_o *)player_k__BackingField[1].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v3->fields._player_k__BackingField;
    if ( v6 )
    {
      this = (CRIMoviePlayer_o *)v6[1].klass;
      if ( this )
      {
        gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_1BCAA3C(this, method);
  }
LABEL_12:
  this = (CRIMoviePlayer_o *)v3->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_16;
  ((void (__fastcall *)(CRIMoviePlayer_o *, Il2CppMethodPointer))this->klass->vtable._5_OnDisable.method)(
    this,
    this->klass->vtable._6_CriInternalUpdate.methodPtr);
  v10 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  UnityEngine_Object__Destroy_70154244(v10, 0LL);
}


void __fastcall CRIMoviePlayer__EndCallBack(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CinemascopeSideFrame_o *cinemascopeSideFrame; // x0
  struct System_Action_o *v4; // x8
  PartyOrganizationUtility_o *p_callBack; // x19
  struct System_Action_o *callBack; // t1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  cinemascopeSideFrame = this->fields.cinemascopeSideFrame;
  if ( cinemascopeSideFrame )
    CinemascopeSideFrame__Hide(cinemascopeSideFrame, method);
  callBack = this->fields.callBack;
  p_callBack = (PartyOrganizationUtility_o *)&this->fields.callBack;
  v4 = callBack;
  if ( callBack )
  {
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
    p_callBack->klass = 0LL;
    sub_1BCA784(p_callBack, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall CRIMoviePlayer__HideCinemascopeSideFrame(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CinemascopeSideFrame_o *cinemascopeSideFrame; // x0

  cinemascopeSideFrame = this->fields.cinemascopeSideFrame;
  if ( cinemascopeSideFrame )
    CinemascopeSideFrame__HideLater(cinemascopeSideFrame, method);
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
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct CinemascopeSideFrame_o **p_cinemascopeSideFrame; // x27
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  __int64 v29; // x3
  CinemascopeSideFrame_o *Value; // x0
  int64_t v31; // x26
  int64_t v32; // x2
  char v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  __int64 v38; // x1
  UIWidget_o *texture; // x25
  const MethodInfo *v40; // x2
  char v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Nullable_int__o v46; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_int__o v47; // 0:x0.8

  if ( (byte_4B19F3B & 1) == 0 )
  {
    sub_1BCA7E0(&CinemascopeSideFrame_TypeInfo, name, path);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v22, v23);
    sub_1BCA7E0(&Method_System_Nullable_int__get_Value__, v24, v25);
    byte_4B19F3B = 1;
  }
  this->fields.cinemascopeSideFrame = cinemascopeSideFrame;
  p_cinemascopeSideFrame = &this->fields.cinemascopeSideFrame;
  this->fields.isLoadModeToDefaultWhenDestory = isLoadModeToDefaultWhenDestory;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.cinemascopeSideFrame,
    (int64_t)cinemascopeSideFrame,
    (int64_t)path,
    isCanSkip,
    (System_String_o *)cpk,
    (BattleSetupInfo_o *)callBack,
    (FollowerInfo_o *)isCanControl,
    (PartyListViewItem_o *)cinemascopeSideFrame);
  Value = this->fields.cinemascopeSideFrame;
  if ( !Value )
  {
    v31 = sub_1BCAA2C(CinemascopeSideFrame_TypeInfo, v27, v28, v29);
    *(_WORD *)(v31 + 16) = 257;
    System_Object___ctor((Il2CppObject *)v31, 0LL);
    *(_WORD *)(v31 + 16) = 257;
    *p_cinemascopeSideFrame = (struct CinemascopeSideFrame_o *)v31;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.cinemascopeSideFrame, v31, v32, v33, v34, v35, v36, v37);
    Value = *p_cinemascopeSideFrame;
    if ( !*p_cinemascopeSideFrame )
      goto LABEL_17;
  }
  v46 = CinemascopeSideFrame__Show(Value, name, v28);
  if ( v46.fields.hasValue )
  {
    texture = (UIWidget_o *)this->fields.texture;
    v47 = (System_Nullable_int__o)&v46;
    Value = (CinemascopeSideFrame_o *)System_Nullable_int___get_Value(
                                        v47,
                                        (const MethodInfo_36BEAB8 *)Method_System_Nullable_int__get_Value__);
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
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.callBack,
      (int64_t)callBack,
      (int64_t)v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
    if ( !Value )
      goto LABEL_17;
    CriMana_Player__SetVolume((CriMana_Player_o *)Value, volume, 0LL);
  }
  CRIMoviePlayer__DispTexture(this, 0, v40);
  Value = (CinemascopeSideFrame_o *)this->fields.busyAnim;
  if ( !Value
    || (Value = (CinemascopeSideFrame_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Value, 0LL)) == 0LL )
  {
LABEL_17:
    sub_1BCAA3C(Value, v38);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
      sub_1BCAA3C(frameInfo, v6);
    }
    v10 = CRIMoviePlayer__SeekSequence(this, *(_DWORD *)&frameInfo->fields.wasStopping * sec / 1000 + a, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  CRIMoviePlayer_o *v10; // x0
  const MethodInfo *v11; // x4
  __int64 v12; // x1
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *klass; // x20
  struct CriMana_Player_o *v15; // x8
  __int64 v16; // x1
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4B19F41 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&TouchEffectManager_TypeInfo, v6, v7);
    byte_4B19F41 = 1;
  }
  if ( this->fields.isLoadModeToDefaultWhenDestory )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    CommonUI__SetLoadMode(Instance, 0, 0LL);
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method);
  TouchEffectManager__SetBlock(0, 0LL);
  CRIMoviePlayer__SetPauseSound(v10, 0, 0, 0, v11);
  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    klass = (UnityEngine_Object_o *)player_k__BackingField[1].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v15 = this->fields._player_k__BackingField;
      if ( v15 )
      {
        Instance = (CommonUI_o *)v15[1].klass;
        if ( Instance )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
          UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_1BCAA3C(Instance, v9);
    }
  }
LABEL_17:
  CriManaMovieMaterial__OnDestroy((CriManaMovieMaterial_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__OnMaterialAvailableChanged(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  UnityEngine_Object_o *material; // x20
  __int64 v6; // x1
  UnityEngine_Object_o *texture; // x20
  __int64 v8; // x1
  struct UITexture_o *v9; // x0
  UnityEngine_Material_o *v10; // x19

  if ( (byte_4B19F43 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B19F43 = 1;
  }
  CriManaMovieController__OnMaterialAvailableChanged((CriManaMovieController_o *)this, 0LL);
  if ( this->fields._applyTargetAlpha )
  {
    material = (UnityEngine_Object_o *)this->fields._material;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( UnityEngine_Object__op_Inequality(material, 0LL, 0LL) )
    {
      texture = (UnityEngine_Object_o *)this->fields.texture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
      if ( UnityEngine_Object__op_Inequality(texture, 0LL, 0LL) )
      {
        v9 = this->fields.texture;
        if ( !v9
          || (v10 = this->fields._material,
              v9 = (struct UITexture_o *)((__int64 (__fastcall *)(struct UITexture_o *, Il2CppMethodPointer))v9->klass->vtable._26_get_mainTexture.method)(
                                           v9,
                                           v9->klass->vtable._27_set_mainTexture.methodPtr),
              !v10) )
        {
          sub_1BCAA3C(v9, v8);
        }
        UnityEngine_Material__set_mainTexture(v10, (UnityEngine_Texture_o *)v9, 0LL);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B19F3D & 1) == 0 )
  {
    sub_1BCA7E0(&CRIMoviePlayer__PlaySequence_d__23_TypeInfo, isBgmPause, isSePause);
    byte_4B19F3D = 1;
  }
  v9 = isVoicePause;
  v10 = sub_1BCAA2C(CRIMoviePlayer__PlaySequence_d__23_TypeInfo, isBgmPause, isSePause, isVoicePause);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
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
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B19F3F & 1) == 0 )
  {
    sub_1BCA7E0(&CRIMoviePlayer__SeekSequence_d__25_TypeInfo, *(_QWORD *)&frame, method);
    byte_4B19F3F = 1;
  }
  v6 = sub_1BCAA2C(CRIMoviePlayer__SeekSequence_d__25_TypeInfo, *(_QWORD *)&frame, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_DWORD *)(v6 + 32) = frame;
  return (System_Collections_IEnumerator_o *)v6;
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v9; // x2
  __int64 v10; // x1

  if ( (byte_4B19F42 & 1) == 0 )
  {
    sub_1BCA7E0(&BgmManager_TypeInfo, isVoicePause, isBgmPause);
    sub_1BCA7E0(&SeManager_TypeInfo, v8, v9);
    byte_4B19F42 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, isVoicePause);
  BgmManager__PauseBgm(isBgmPause, 0LL);
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v10);
  SeManager__PauseSe(isSePause, 0LL);
  SeManager__PauseVoice(isVoicePause, 0LL);
}


void __fastcall CRIMoviePlayer__SetVolume(CRIMoviePlayer_o *this, float volume, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1BCAA3C(0LL, method);
  CriMana_Player__SetVolume(player_k__BackingField, volume, 0LL);
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__StopSequence(
        CRIMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19F3E & 1) == 0 )
  {
    sub_1BCA7E0(&CRIMoviePlayer__StopSequence_d__24_TypeInfo, method, v2);
    byte_4B19F3E = 1;
  }
  v5 = sub_1BCAA2C(CRIMoviePlayer__StopSequence_d__24_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
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
      sub_1BCAA3C(v5, v4);
    }
  }
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__25_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1BCAA3C(0LL, method);
  return CriMana_Player__get_frameInfo(player_k__BackingField, 0LL) != 0LL;
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__25_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  CRIMoviePlayer__PlaySequence_d__23_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct CRIMoviePlayer_o *_4__this; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x1
  bool v20; // w21
  PartyOrganizationUtility_o *v21; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w8
  System_String_o *v29; // x4
  int64_t v30; // x2
  int32_t v31; // w3
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  PartyOrganizationUtility_o *v41; // x19
  int v42; // w8
  PartyOrganizationUtility_o *p__2__current; // x19

  v3 = this;
  if ( (byte_4B19F44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    this = (CRIMoviePlayer__PlaySequence_d__23_o *)sub_1BCA7E0(&TouchEffectManager_TypeInfo, v4, v5);
    byte_4B19F44 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        v3->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v7, v8, v9, v10, v11, v12);
        v20 = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return v20;
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
          j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v19);
        v20 = 1;
        TouchEffectManager__SetBlock(1, 0LL);
        v3->fields.__2__current = 0LL;
        v21 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(v21, 0LL, v22, v23, v24, v25, v26, v27);
        v28 = 3;
        goto LABEL_46;
      }
      v3->fields.__2__current = 0LL;
      v41 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
      sub_1BCA784(v41, 0LL, v13, v14, v15, v16, v17, v18);
      v42 = 2;
      goto LABEL_54;
    case 1:
      v3->fields.__1__state = -1;
      goto LABEL_7;
    case 2:
      v3->fields.__1__state = -1;
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
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_56;
      goto LABEL_34;
    case 4:
      v3->fields.__1__state = -1;
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
            v3->fields.__2__current = 0LL;
            v41 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
            sub_1BCA784(v41, 0LL, v30, v31, v29, v32, v33, v34);
            v42 = 4;
LABEL_54:
            *(_DWORD *)&v41[-1].fields._IsQuestStartMenuMode_k__BackingField = v42;
            return 1;
          }
        }
        CRIMoviePlayer__SetPauseSound(
          (CRIMoviePlayer_o *)this,
          v3->fields.isVoicePause,
          v3->fields.isBgmPause,
          v3->fields.isSePause,
          (const MethodInfo *)v29);
        if ( _4__this->fields.isCanSkip )
        {
          this = (CRIMoviePlayer__PlaySequence_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v20 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v3->fields.__2__current = 0LL;
              v21 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
              sub_1BCA784(v21, 0LL, v35, v36, v37, v38, v39, v40);
              v28 = 5;
LABEL_46:
              *(_DWORD *)&v21[-1].fields._IsQuestStartMenuMode_k__BackingField = v28;
              return v20;
            }
          }
        }
LABEL_56:
        sub_1BCAA3C(this, method);
      }
LABEL_32:
      CRIMoviePlayer__EndCallBack(_4__this, method);
      return 0;
    case 5:
      v3->fields.__1__state = -1;
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
      v20 = 0;
      _4__this->fields.isPlaying = 1;
      return v20;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_CRIMoviePlayer__PlaySequence_d__23_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CRIMoviePlayer__SeekSequence_d__25_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct CRIMoviePlayer_o *_4__this; // x20
  int frame; // w21
  int v19; // w8
  const MethodInfo *v20; // x2
  PartyOrganizationUtility_o *p__2__current; // x19
  int v22; // w8
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  UnityEngine_WaitForEndOfFrame_o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t waitForEOF_5__4; // x1
  bool result; // w0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  System_Func_bool__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  UnityEngine_WaitUntil_o *v50; // x20
  PartyOrganizationUtility_o *v51; // x19
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Func_bool__o *v58; // x21
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  UnityEngine_WaitUntil_o *v62; // x20
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7

  v8 = this;
  if ( (byte_4B19F45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CRIMoviePlayer__SeekSequence_b__25_0__, method, v2);
    sub_1BCA7E0(&Method_CRIMoviePlayer__SeekSequence_b__25_1__, v9, v10);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v13, v14);
    this = (CRIMoviePlayer__SeekSequence_d__25_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v15, v16);
    byte_4B19F45 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_40;
      frame = v8->fields.frame;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
      if ( !this )
        goto LABEL_40;
      v19 = *(_DWORD *)&this->fields._isPaused_5__2 - 1;
      if ( frame <= v19 )
        v19 = frame;
      if ( frame < 0 )
        v19 = 0;
      v8->fields.frame = v19;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_40;
      v8->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0LL);
      CRIMoviePlayer__DispTexture(_4__this, 0, v20);
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields.busyAnim;
      if ( !this )
        goto LABEL_40;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
      if ( !this )
        goto LABEL_40;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v8->fields._retry_5__3 = 0;
      goto LABEL_36;
    case 1:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_40;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_40;
      CriMana_Player__SetSeekPosition((CriMana_Player_o *)this, v8->fields.frame, 0LL);
      if ( v8->fields._isPaused_5__2 )
        CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)_4__this, 1, 0LL);
      CriManaMovieMaterial__Play((CriManaMovieMaterial_o *)_4__this, 0LL);
      v32 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v29, v30, v31);
      UnityEngine_WaitForEndOfFrame___ctor(v32, 0LL);
      v8->fields._waitForEOF_5__4 = v32;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v8->fields._waitForEOF_5__4,
        (int64_t)v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
      v8->fields._prevTime_5__5 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      goto LABEL_25;
    case 2:
      v8->fields.__1__state = -1;
      if ( (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - v8->fields._prevTime_5__5) >= 2.0 )
      {
        v8->fields._retry_5__3 = 1;
      }
      else
      {
        if ( !_4__this )
LABEL_40:
          sub_1BCAA3C(this, method);
LABEL_25:
        this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_40;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 5 )
        {
          waitForEOF_5__4 = (int64_t)v8->fields._waitForEOF_5__4;
          v8->fields.__2__current = (Il2CppObject *)waitForEOF_5__4;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1BCA784(p__2__current, waitForEOF_5__4, v23, v24, v25, v26, v27, v28);
          v22 = 2;
LABEL_38:
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v22;
          return 1;
        }
      }
      v8->fields._waitForEOF_5__4 = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields._waitForEOF_5__4, 0LL, v23, v24, v25, v26, v27, v28);
      if ( !v8->fields._retry_5__3 )
      {
        v58 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v41, v42);
        System_Func_bool____ctor(v58, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__25_0__, 0LL);
        v62 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v59, v60, v61);
        UnityEngine_WaitUntil___ctor(v62, v58, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v62;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, (int64_t)v62, v63, v64, v65, v66, v67, v68);
        v22 = 3;
        goto LABEL_38;
      }
      v8->fields._retry_5__3 = 0;
      if ( !_4__this )
        goto LABEL_40;
LABEL_36:
      CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0LL);
      v46 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v43, v44, v45);
      System_Func_bool____ctor(v46, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__25_1__, 0LL);
      v50 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v47, v48, v49);
      UnityEngine_WaitUntil___ctor(v50, v46, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v50;
      v51 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1BCA784(v51, (int64_t)v50, v52, v53, v54, v55, v56, v57);
      result = 1;
      *(_DWORD *)&v51[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 3:
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1BCA784(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v22 = 4;
      goto LABEL_38;
    case 4:
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1BCA784(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v22 = 5;
      goto LABEL_38;
    case 5:
      v8->fields.__1__state = -1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_CRIMoviePlayer__SeekSequence_d__25_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  bool result; // w0
  PartyOrganizationUtility_o *p__2__current; // x19

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
    sub_1BCAA3C(this, method);
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 6 )
    goto LABEL_7;
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, 0LL, v4, v5, v6, v7, v8, v9);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_CRIMoviePlayer__StopSequence_d__24_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
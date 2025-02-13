void __fastcall CRIMoviePlayer___ctor(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriManaMovieController___ctor((CriManaMovieController_o *)this, 0LL);
}


void __fastcall CRIMoviePlayer__CreateTexture(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  UIWidget_o *texture; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Texture2D_o *v5; // x20
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BE038C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    byte_4BE038C = 1;
  }
  texture = (UIWidget_o *)this->fields.texture;
  if ( !texture )
    goto LABEL_12;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UIWidget_o *, Il2CppMethodPointer))texture->klass->vtable._26_get_mainTexture.method)(
                                 texture,
                                 texture->klass->vtable._27_set_mainTexture.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0LL, 0LL) )
  {
    v5 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_70757788(v5, 128, 128, 1, 0, 0LL);
    texture = (UIWidget_o *)this->fields.texture;
    if ( texture )
    {
      ((void (__fastcall *)(UIWidget_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._27_set_mainTexture.method)(
        texture,
        v5,
        texture->klass->vtable._28_get_shader.methodPtr);
      texture = (UIWidget_o *)this->fields.texture;
      if ( texture )
      {
        v6.fields.r = 0.0;
        v6.fields.g = 0.0;
        v6.fields.b = 0.0;
        v6.fields.a = 1.0;
        UIWidget__set_color(texture, v6, 0LL);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1C22094(texture, method);
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
    sub_1C22094(texture, flag);
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
  if ( (byte_4BE0388 & 1) == 0 )
  {
    this = (CRIMoviePlayer_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE0388 = 1;
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
        UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
        goto LABEL_12;
      }
    }
LABEL_16:
    sub_1C22094(this, method);
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
  UnityEngine_Object__Destroy_70869612(v7, 0LL);
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
    sub_1C21DDC(p_callBack, 0LL, v7, v8, v9, v10, v11, v12);
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
  struct CinemascopeSideFrame_o **p_cinemascopeSideFrame; // x27
  const MethodInfo *v23; // x2
  CinemascopeSideFrame_o *Value; // x0
  int64_t v25; // x26
  int64_t v26; // x2
  char v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  UIWidget_o *texture; // x25
  const MethodInfo *v34; // x2
  char v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Nullable_int__o v40; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_int__o v41; // 0:x0.8

  if ( (byte_4BE0387 & 1) == 0 )
  {
    sub_1C21E38(&CinemascopeSideFrame_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_int__get_Value__);
    byte_4BE0387 = 1;
  }
  this->fields.cinemascopeSideFrame = cinemascopeSideFrame;
  p_cinemascopeSideFrame = &this->fields.cinemascopeSideFrame;
  this->fields.isLoadModeToDefaultWhenDestory = isLoadModeToDefaultWhenDestory;
  sub_1C21DDC(
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
    v25 = sub_1C22084(CinemascopeSideFrame_TypeInfo);
    *(_WORD *)(v25 + 16) = 257;
    System_Object___ctor((Il2CppObject *)v25, 0LL);
    *(_WORD *)(v25 + 16) = 257;
    *p_cinemascopeSideFrame = (struct CinemascopeSideFrame_o *)v25;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.cinemascopeSideFrame, v25, v26, v27, v28, v29, v30, v31);
    Value = *p_cinemascopeSideFrame;
    if ( !*p_cinemascopeSideFrame )
      goto LABEL_17;
  }
  v40 = CinemascopeSideFrame__Show(Value, name, v23);
  if ( v40.fields.hasValue )
  {
    texture = (UIWidget_o *)this->fields.texture;
    v41 = (System_Nullable_int__o)&v40;
    Value = (CinemascopeSideFrame_o *)System_Nullable_int___get_Value(
                                        v41,
                                        (const MethodInfo_376B7B8 *)Method_System_Nullable_int__get_Value__);
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
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.callBack,
      (int64_t)callBack,
      (int64_t)v34,
      v35,
      v36,
      v37,
      v38,
      v39);
    Value = (CinemascopeSideFrame_o *)this->fields._player_k__BackingField;
    if ( !Value )
      goto LABEL_17;
    CriMana_Player__SetVolume((CriMana_Player_o *)Value, volume, 0LL);
  }
  CRIMoviePlayer__DispTexture(this, 0, v34);
  Value = (CinemascopeSideFrame_o *)this->fields.busyAnim;
  if ( !Value
    || (Value = (CinemascopeSideFrame_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Value, 0LL)) == 0LL )
  {
LABEL_17:
    sub_1C22094(Value, v32);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
      sub_1C22094(frameInfo, v6);
    }
    v10 = CRIMoviePlayer__SeekSequence(this, *(_DWORD *)&frameInfo->fields.wasStopping * sec / 1000 + a, v9);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall CRIMoviePlayer__OnDestroy(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  CRIMoviePlayer_o *v5; // x0
  const MethodInfo *v6; // x4
  struct CriMana_Player_o *player_k__BackingField; // x8
  UnityEngine_Object_o *klass; // x20
  struct CriMana_Player_o *v9; // x8
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_4BE038D & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TouchEffectManager_TypeInfo);
    byte_4BE038D = 1;
  }
  if ( this->fields.isLoadModeToDefaultWhenDestory )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_18;
    CommonUI__SetLoadMode(Instance, 0, 0LL);
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(0, 0LL);
  CRIMoviePlayer__SetPauseSound(v5, 0, 0, 0, v6);
  player_k__BackingField = this->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    klass = (UnityEngine_Object_o *)player_k__BackingField[1].klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (CommonUI_o *)UnityEngine_Object__op_Inequality(klass, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v9 = this->fields._player_k__BackingField;
      if ( v9 )
      {
        Instance = (CommonUI_o *)v9[1].klass;
        if ( Instance )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Instance,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
          goto LABEL_17;
        }
      }
LABEL_18:
      sub_1C22094(Instance, v4);
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

  if ( (byte_4BE038F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE038F = 1;
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
          sub_1C22094(v6, v5);
        }
        UnityEngine_Material__set_mainTexture(v7, (UnityEngine_Texture_o *)v6, 0LL);
      }
    }
  }
}


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

  if ( (byte_4BE0389 & 1) == 0 )
  {
    sub_1C21E38(&CRIMoviePlayer__PlaySequence_d__23_TypeInfo);
    byte_4BE0389 = 1;
  }
  v9 = isVoicePause;
  v10 = sub_1C22084(CRIMoviePlayer__PlaySequence_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_BYTE *)(v10 + 41) = isBgmPause;
  *(_BYTE *)(v10 + 42) = isSePause;
  *(_BYTE *)(v10 + 40) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__SeekSequence(
        CRIMoviePlayer_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BE038B & 1) == 0 )
  {
    sub_1C21E38(&CRIMoviePlayer__SeekSequence_d__25_TypeInfo);
    byte_4BE038B = 1;
  }
  v5 = sub_1C22084(CRIMoviePlayer__SeekSequence_d__25_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
    sub_1C22094(0LL, method);
  UIWidget__set_color(background, color, 0LL);
}


void __fastcall CRIMoviePlayer__SetPauseSound(
        CRIMoviePlayer_o *this,
        bool isVoicePause,
        bool isBgmPause,
        bool isSePause,
        const MethodInfo *method)
{
  if ( (byte_4BE038E & 1) == 0 )
  {
    sub_1C21E38(&BgmManager_TypeInfo);
    sub_1C21E38(&SeManager_TypeInfo);
    byte_4BE038E = 1;
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
    sub_1C22094(0LL, method);
  CriMana_Player__SetVolume(player_k__BackingField, volume, 0LL);
}


System_Collections_IEnumerator_o *__fastcall CRIMoviePlayer__StopSequence(
        CRIMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE038A & 1) == 0 )
  {
    sub_1C21E38(&CRIMoviePlayer__StopSequence_d__24_TypeInfo);
    byte_4BE038A = 1;
  }
  v3 = sub_1C22084(CRIMoviePlayer__StopSequence_d__24_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
      sub_1C22094(v5, v4);
    }
  }
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__25_0(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1C22094(0LL, method);
  return CriMana_Player__get_frameInfo(player_k__BackingField, 0LL) != 0LL;
}


bool __fastcall CRIMoviePlayer___SeekSequence_b__25_1(CRIMoviePlayer_o *this, const MethodInfo *method)
{
  CriMana_Player_o *player_k__BackingField; // x0

  player_k__BackingField = this->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    sub_1C22094(0LL, method);
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
  struct CRIMoviePlayer_o *_4__this; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  bool v16; // w21
  PartyOrganizationUtility_o *v17; // x19
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int v24; // w8
  System_String_o *v25; // x4
  int64_t v26; // x2
  int32_t v27; // w3
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_o *v37; // x19
  int v38; // w8
  PartyOrganizationUtility_o *p__2__current; // x19

  v2 = this;
  if ( (byte_4BE0390 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (CRIMoviePlayer__PlaySequence_d__23_o *)sub_1C21E38(&TouchEffectManager_TypeInfo);
    byte_4BE0390 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      this = (CRIMoviePlayer__PlaySequence_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, 0LL, v4, v5, v6, v7, v8, v9);
        v16 = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return v16;
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
        v16 = 1;
        TouchEffectManager__SetBlock(1, 0LL);
        v2->fields.__2__current = 0LL;
        v17 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v17, 0LL, v18, v19, v20, v21, v22, v23);
        v24 = 3;
        goto LABEL_46;
      }
      v2->fields.__2__current = 0LL;
      v37 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v37, 0LL, v10, v11, v12, v13, v14, v15);
      v38 = 2;
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
            v37 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
            sub_1C21DDC(v37, 0LL, v26, v27, v25, v28, v29, v30);
            v38 = 4;
LABEL_54:
            *(_DWORD *)&v37[-1].fields._IsQuestStartMenuMode_k__BackingField = v38;
            return 1;
          }
        }
        CRIMoviePlayer__SetPauseSound(
          (CRIMoviePlayer_o *)this,
          v2->fields.isVoicePause,
          v2->fields.isBgmPause,
          v2->fields.isSePause,
          (const MethodInfo *)v25);
        if ( _4__this->fields.isCanSkip )
        {
          this = (CRIMoviePlayer__PlaySequence_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
              v16 = 1;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              v2->fields.__2__current = 0LL;
              v17 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
              sub_1C21DDC(v17, 0LL, v31, v32, v33, v34, v35, v36);
              v24 = 5;
LABEL_46:
              *(_DWORD *)&v17[-1].fields._IsQuestStartMenuMode_k__BackingField = v24;
              return v16;
            }
          }
        }
LABEL_56:
        sub_1C22094(this, method);
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
      v16 = 0;
      _4__this->fields.isPlaying = 1;
      return v16;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_CRIMoviePlayer__PlaySequence_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  struct CRIMoviePlayer_o *_4__this; // x20
  int frame; // w21
  int v11; // w8
  const MethodInfo *v12; // x2
  PartyOrganizationUtility_o *p__2__current; // x19
  int v14; // w8
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_WaitForEndOfFrame_o *v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t waitForEOF_5__4; // x1
  bool result; // w0
  System_Func_bool__o *v30; // x21
  UnityEngine_WaitUntil_o *v31; // x20
  PartyOrganizationUtility_o *v32; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Func_bool__o *v39; // x21
  UnityEngine_WaitUntil_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7

  v8 = this;
  if ( (byte_4BE0391 & 1) == 0 )
  {
    sub_1C21E38(&Method_CRIMoviePlayer__SeekSequence_b__25_0__);
    sub_1C21E38(&Method_CRIMoviePlayer__SeekSequence_b__25_1__);
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (CRIMoviePlayer__SeekSequence_d__25_o *)sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BE0391 = 1;
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
      v11 = *(_DWORD *)&this->fields._isPaused_5__2 - 1;
      if ( frame <= v11 )
        v11 = frame;
      if ( frame < 0 )
        v11 = 0;
      v8->fields.frame = v11;
      this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_40;
      v8->fields._isPaused_5__2 = CriMana_Player__IsPaused((CriMana_Player_o *)this, 0LL);
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
      v21 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v21, 0LL);
      v8->fields._waitForEOF_5__4 = v21;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._waitForEOF_5__4,
        (int64_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
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
          sub_1C22094(this, method);
LABEL_25:
        this = (CRIMoviePlayer__SeekSequence_d__25_o *)_4__this->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_40;
        if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) != 5 )
        {
          waitForEOF_5__4 = (int64_t)v8->fields._waitForEOF_5__4;
          v8->fields.__2__current = (Il2CppObject *)waitForEOF_5__4;
          p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(p__2__current, waitForEOF_5__4, v15, v16, v17, v18, v19, v20);
          v14 = 2;
LABEL_38:
          *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = v14;
          return 1;
        }
      }
      v8->fields._waitForEOF_5__4 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._waitForEOF_5__4, 0LL, v15, v16, v17, v18, v19, v20);
      if ( !v8->fields._retry_5__3 )
      {
        v39 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v39, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__25_0__, 0LL);
        v40 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v40, v39, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v40;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)v40, v41, v42, v43, v44, v45, v46);
        v14 = 3;
        goto LABEL_38;
      }
      v8->fields._retry_5__3 = 0;
      if ( !_4__this )
        goto LABEL_40;
LABEL_36:
      CriManaMovieMaterial__Stop((CriManaMovieMaterial_o *)_4__this, 0LL);
      v30 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
      System_Func_bool____ctor(v30, (Il2CppObject *)_4__this, Method_CRIMoviePlayer__SeekSequence_b__25_1__, 0LL);
      v31 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
      UnityEngine_WaitUntil___ctor(v31, v30, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v31;
      v32 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v32, (int64_t)v31, v33, v34, v35, v36, v37, v38);
      result = 1;
      *(_DWORD *)&v32[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 3:
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1C21DDC(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v14 = 4;
      goto LABEL_38;
    case 4:
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = -1;
      sub_1C21DDC(p__2__current, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
      v14 = 5;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_CRIMoviePlayer__SeekSequence_d__25_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
    sub_1C22094(this, method);
  if ( CriMana_Player__get_status((CriMana_Player_o *)this, 0LL) == 6 )
    goto LABEL_7;
  v3->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1C21DDC(p__2__current, 0LL, v4, v5, v6, v7, v8, v9);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_CRIMoviePlayer__StopSequence_d__24_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
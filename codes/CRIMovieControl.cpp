void CRIMovieControl___ctor(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CRIMovieControl__Awake(CRIMovieControl_o *this, const MethodInfo *method)
{
  UILabel_o *nowTime; // x0
  UnityEngine_Transform_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *window; // x20
  __int64 v8; // x2
  UnityEngine_Object_o *skipButton; // x20

  if ( (byte_5932363 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_948/*"--:--"*/);
    byte_5932363 = 1;
  }
  nowTime = this->fields.nowTime;
  if ( !nowTime )
    goto LABEL_22;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_948/*"--:--"*/, 0);
  nowTime = this->fields.endTime;
  if ( !nowTime )
    goto LABEL_22;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_948/*"--:--"*/, 0);
  nowTime = (UILabel_o *)this->fields.seekBar;
  if ( !nowTime )
    goto LABEL_22;
  UIProgressBar__set_value((UIProgressBar_o *)nowTime, 0.0, 0);
  nowTime = (UILabel_o *)this->fields.texture;
  if ( !nowTime )
    goto LABEL_22;
  nowTime = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)nowTime, 0);
  v4 = (UnityEngine_Transform_o *)nowTime;
  if ( !byte_5931945 )
  {
    nowTime = (UILabel_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931945 = 1;
  }
  if ( !v4 )
    goto LABEL_22;
  UnityEngine_Transform__set_localScale(v4, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  window = (UnityEngine_Object_o *)this->fields.window;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(window, 0, 0) )
  {
    nowTime = (UILabel_o *)this->fields.window;
    if ( !nowTime )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowTime, 0, 0);
  }
  skipButton = (UnityEngine_Object_o *)this->fields.skipButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v8);
  if ( UnityEngine_Object__op_Inequality(skipButton, 0, 0) )
  {
    nowTime = (UILabel_o *)this->fields.skipButton;
    if ( nowTime )
    {
      nowTime = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)nowTime, 0);
      if ( nowTime )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)nowTime, 0, 0);
        goto LABEL_21;
      }
    }
LABEL_22:
    sub_21FFECC(nowTime, method);
  }
LABEL_21:
  CRIMovieControl__Closed(this, method);
}


void CRIMovieControl__Close(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *skipButton; // x0
  const MethodInfo *v5; // x2

  if ( (byte_5932365 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_5932365 = 1;
  }
  this->fields.status = 3;
  if ( CRIMovieControl__IsEnableSkipButton(this, method) )
  {
    skipButton = (UnityEngine_Component_o *)this->fields.skipButton;
    if ( !skipButton
      || (skipButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(skipButton, 0)) == 0 )
    {
LABEL_6:
      sub_21FFECC(skipButton, v3);
    }
  }
  else
  {
    skipButton = (UnityEngine_Component_o *)this->fields.window;
    if ( !skipButton )
      goto LABEL_6;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipButton, 1, 0);
  CRIMovieControl__EnableControl(this, 0, v5);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.enableControlCallBack,
    0,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
}


void CRIMovieControl__Closed(CRIMovieControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *skipButton; // x0

  this->fields.status = 0;
  CRIMovieControl__EnableControl(this, 0, v2);
  if ( CRIMovieControl__IsEnableSkipButton(this, v4) )
  {
    skipButton = (UnityEngine_Component_o *)this->fields.skipButton;
    if ( !skipButton
      || (skipButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(skipButton, 0)) == 0 )
    {
LABEL_8:
      sub_21FFECC(skipButton, v5);
    }
  }
  else
  {
    skipButton = (UnityEngine_Component_o *)this->fields.window;
    if ( !skipButton )
      goto LABEL_8;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipButton, 0, 0);
  skipButton = (UnityEngine_Component_o *)this->fields.panel;
  if ( !skipButton )
    goto LABEL_8;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))skipButton->klass[1]._1.element_class)(
    skipButton,
    skipButton->klass[1]._1.castClass,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void CRIMovieControl__EnableControl(CRIMovieControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *foreground; // x0

  foreground = (UnityEngine_Component_o *)this->fields.foreground;
  if ( !foreground
    || (foreground = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(foreground, 0)) == 0 )
  {
    sub_21FFECC(foreground, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)foreground, !flag, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CRIMovieControl__FrameToTimeString(CRIMovieControl_o *this, int32_t frame, const MethodInfo *method)
{
  CRIMovieControl_o *v4; // x20
  struct CRIMoviePlayer_o *player; // x8
  unsigned __int64 v6; // x20
  Il2CppObject *v7; // x19
  Il2CppObject *v8; // x0
  int v10; // [xsp+8h] [xbp-38h] BYREF
  int v11; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_5932367 & 1) == 0 )
  {
    this = (CRIMovieControl_o *)sub_21FFC50(&StringLiteral_26520/*"{0}:{1:00}"*/);
    byte_5932367 = 1;
  }
  player = v4->fields.player;
  if ( !player
    || (this = (CRIMovieControl_o *)player->fields._player_k__BackingField) == 0
    || (this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0)) == 0 )
  {
    sub_21FFECC(this, *(_QWORD *)&frame);
  }
  v6 = 1000LL * frame / (unsigned __int64)this->fields.window;
  v11 = (int)v6 / 60;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v11);
  v10 = (int)v6 % 60;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10);
  return System_String__Format_75484576((System_String_o *)StringLiteral_26520/*"{0}:{1:00}"*/, v7, v8, 0);
}


bool CRIMovieControl__IsEnableSkipButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct CRIMoviePlayer_o *v8; // x8
  UnityEngine_Object_o *skipButton; // x19

  if ( (byte_5932375 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932375 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( !v5 )
    return 0;
  v8 = this->fields.player;
  if ( !v8 )
    sub_21FFECC(v5, v6);
  if ( !v8->fields._IsEnableSkipButton_k__BackingField )
    return 0;
  skipButton = (UnityEngine_Object_o *)this->fields.skipButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  return UnityEngine_Object__op_Inequality(skipButton, 0, 0);
}


void CRIMovieControl__OnClickEndButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v5; // x0
  const MethodInfo *v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  System_Action_o *endFullScreenAction; // x0

  if ( (byte_5932370 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932370 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_14;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v7->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v5 = this->fields.player;
      if ( v5 )
      {
        CRIMoviePlayer__MovieStop(v5, v6);
        goto LABEL_13;
      }
LABEL_14:
      sub_21FFECC(v5, v6);
    }
  }
LABEL_13:
  endFullScreenAction = this->fields.endFullScreenAction;
  this->fields.dispTime = 0.0;
  ActionExtensions__Call(endFullScreenAction, 0);
}


void CRIMovieControl__OnClickForwardButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v5; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v9; // x2

  if ( (byte_593236F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593236F = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_14;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v7->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v5 = this->fields.player;
      if ( v5 )
      {
        CRIMoviePlayer__MovieSeekByRelativeTime(v5, 10, v9);
        goto LABEL_13;
      }
LABEL_14:
      sub_21FFECC(v5, v6);
    }
  }
LABEL_13:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickPauseButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CriManaMovieMaterial_o *playButton; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0

  if ( (byte_593236E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593236E = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  playButton = (CriManaMovieMaterial_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)playButton & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_18;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v7->fields.isPlaying
      && !this->fields.isSeeking )
    {
      playButton = (CriManaMovieMaterial_o *)this->fields.player;
      if ( playButton )
      {
        CriManaMovieMaterial__Pause(playButton, 1, 0);
        playButton = (CriManaMovieMaterial_o *)this->fields.playButton;
        if ( playButton )
        {
          playButton = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)playButton,
                                                   0);
          if ( playButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playButton, 1, 0);
            playButton = (CriManaMovieMaterial_o *)this->fields.pauseButton;
            if ( playButton )
            {
              playButton = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)playButton,
                                                       0);
              if ( playButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playButton, 0, 0);
                goto LABEL_17;
              }
            }
          }
        }
      }
LABEL_18:
      sub_21FFECC(playButton, v6);
    }
  }
LABEL_17:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickPlayButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CriManaMovieMaterial_o *playButton; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0

  if ( (byte_593236D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593236D = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  playButton = (CriManaMovieMaterial_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)playButton & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_18;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v7->fields.isPlaying
      && !this->fields.isSeeking )
    {
      playButton = (CriManaMovieMaterial_o *)this->fields.player;
      if ( playButton )
      {
        CriManaMovieMaterial__Pause(playButton, 0, 0);
        playButton = (CriManaMovieMaterial_o *)this->fields.playButton;
        if ( playButton )
        {
          playButton = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)playButton,
                                                   0);
          if ( playButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playButton, 0, 0);
            playButton = (CriManaMovieMaterial_o *)this->fields.pauseButton;
            if ( playButton )
            {
              playButton = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)playButton,
                                                       0);
              if ( playButton )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playButton, 1, 0);
                goto LABEL_17;
              }
            }
          }
        }
      }
LABEL_18:
      sub_21FFECC(playButton, v6);
    }
  }
LABEL_17:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickRewindButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v5; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v9; // x2

  if ( (byte_593236C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593236C = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_14;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v7->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v5 = this->fields.player;
      if ( v5 )
      {
        CRIMoviePlayer__MovieSeekByRelativeTime(v5, -10, v9);
        goto LABEL_13;
      }
LABEL_14:
      sub_21FFECC(v5, v6);
    }
  }
LABEL_13:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickSkipButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v5; // x0
  const MethodInfo *v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  System_Action_o *endFullScreenAction; // x0

  if ( (byte_5932374 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932374 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_13;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField && CriMana_Player__get_status(player_k__BackingField, 0) == 5 && v7->fields.isPlaying )
    {
      v5 = this->fields.player;
      if ( v5 )
      {
        CRIMoviePlayer__MovieStop(v5, v6);
        goto LABEL_12;
      }
LABEL_13:
      sub_21FFECC(v5, v6);
    }
  }
LABEL_12:
  endFullScreenAction = this->fields.endFullScreenAction;
  this->fields.dispTime = 0.0;
  ActionExtensions__Call(endFullScreenAction, 0);
}


void CRIMovieControl__OnClickStartButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v5; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v9; // x2

  if ( (byte_593236B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593236B = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_14;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v7->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v5 = this->fields.player;
      if ( v5 )
      {
        CRIMoviePlayer__MovieSeekByFrame(v5, 0, v9);
        goto LABEL_13;
      }
LABEL_14:
      sub_21FFECC(v5, v6);
    }
  }
LABEL_13:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v5; // x0
  const MethodInfo *v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v9; // x1
  int32_t status; // w8

  if ( (byte_5932368 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932368 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( v7 )
    {
      if ( v7->fields._isCanControl_k__BackingField )
        return;
      player_k__BackingField = v7->fields._player_k__BackingField;
      if ( !player_k__BackingField
        || CriMana_Player__get_status(player_k__BackingField, 0) != 5
        || !v7->fields.isPlaying )
      {
        return;
      }
      if ( CRIMovieControl__IsEnableSkipButton(this, v9) )
      {
        status = this->fields.status;
        if ( status != 3 && status )
          CRIMovieControl__Close(this, v6);
        else
          CRIMovieControl__Open(this, v6);
        return;
      }
      v5 = this->fields.player;
      if ( v5 )
      {
        CRIMoviePlayer__MovieStop(v5, v6);
        return;
      }
    }
    sub_21FFECC(v5, v6);
  }
}


void CRIMovieControl__OnDoubleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x8
  CriMana_Player_o *player_k__BackingField; // x0

  if ( (byte_593236A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593236A = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      sub_21FFECC(v5, v6);
    if ( v7->fields._isCanControl_k__BackingField )
    {
      player_k__BackingField = v7->fields._player_k__BackingField;
      if ( player_k__BackingField )
        CriMana_Player__get_status(player_k__BackingField, 0);
    }
  }
}


void CRIMovieControl__OnPressDownSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  UnityEngine_Component_o *status; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  struct UISlider_o *seekBar; // x8
  struct CRIMoviePlayer_o *v10; // x8
  bool IsPaused; // w8

  if ( (byte_5932371 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932371 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  status = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)status & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_18;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField )
    {
      status = (UnityEngine_Component_o *)CriMana_Player__get_status(player_k__BackingField, 0);
      if ( (_DWORD)status == 5 && v7->fields.isPlaying )
      {
        seekBar = this->fields.seekBar;
        if ( seekBar )
        {
          status = (UnityEngine_Component_o *)seekBar->fields.thumb;
          if ( status )
          {
            status = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(status, 0);
            if ( status )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)status, 1, 0);
              v10 = this->fields.player;
              this->fields.isSeeking = 1;
              if ( v10 )
              {
                status = (UnityEngine_Component_o *)v10->fields._player_k__BackingField;
                if ( status )
                {
                  IsPaused = CriMana_Player__IsPaused((CriMana_Player_o *)status, 0);
                  status = (UnityEngine_Component_o *)this->fields.player;
                  this->fields.isPaused = IsPaused;
                  if ( status )
                  {
                    CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)status, 1, 0);
                    goto LABEL_17;
                  }
                }
              }
            }
          }
        }
LABEL_18:
        sub_21FFECC(status, v6);
      }
    }
  }
LABEL_17:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnPressUpSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  UnityEngine_Component_o *status; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  struct UISlider_o *seekBar; // x8
  float value; // s0
  struct CRIMoviePlayer_o *v11; // x8
  float v12; // s8
  const MethodInfo *v13; // x2
  UnityEngine_Component_o *v14; // x8
  float v15; // s0
  int32_t v16; // w1

  if ( (byte_5932372 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932372 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  status = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)status & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_24;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_23;
    status = (UnityEngine_Component_o *)CriMana_Player__get_status(player_k__BackingField, 0);
    if ( (_DWORD)status != 5 || !v7->fields.isPlaying )
      goto LABEL_23;
    seekBar = this->fields.seekBar;
    if ( !seekBar )
      goto LABEL_24;
    status = (UnityEngine_Component_o *)seekBar->fields.thumb;
    if ( !status )
      goto LABEL_24;
    status = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(status, 0);
    if ( !status )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)status, 0, 0);
    status = (UnityEngine_Component_o *)this->fields.player;
    this->fields.isSeeking = 0;
    if ( !status )
      goto LABEL_24;
    CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)status, this->fields.isPaused, 0);
    status = (UnityEngine_Component_o *)this->fields.seekBar;
    if ( !status
      || (value = UIProgressBar__get_value((UIProgressBar_o *)status, 0), (v11 = this->fields.player) == 0)
      || (status = (UnityEngine_Component_o *)v11->fields._player_k__BackingField) == 0
      || (v12 = value,
          (status = (UnityEngine_Component_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)status, 0)) == 0)
      || (v14 = status, (status = (UnityEngine_Component_o *)this->fields.player) == 0) )
    {
LABEL_24:
      sub_21FFECC(status, v6);
    }
    v15 = v12 * (float)LODWORD(v14[2].klass);
    if ( v15 == INFINITY )
      v16 = 0x80000000;
    else
      v16 = (int)v15;
    CRIMoviePlayer__MovieSeekByFrame((CRIMoviePlayer_o *)status, v16, v13);
  }
LABEL_23:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnSingleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v9; // x1
  int32_t status; // w8

  if ( (byte_5932369 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932369 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v5 = UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( v5 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      sub_21FFECC(v5, v6);
    if ( v7->fields._isCanControl_k__BackingField )
    {
      player_k__BackingField = v7->fields._player_k__BackingField;
      if ( player_k__BackingField )
      {
        if ( CriMana_Player__get_status(player_k__BackingField, 0) == 5
          && v7->fields.isPlaying
          && !this->fields.isSeeking )
        {
          status = this->fields.status;
          if ( status != 3 && status )
            CRIMovieControl__Close(this, v9);
          else
            CRIMovieControl__Open(this, v9);
        }
      }
    }
  }
}


void CRIMovieControl__OnValueChangeSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *player; // x20
  UIProgressBar_o *seekBar; // x0
  __int64 v6; // x1
  struct CRIMoviePlayer_o *v7; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  float value; // s0
  struct CRIMoviePlayer_o *v10; // x8
  float v11; // s8
  const MethodInfo *v12; // x2
  UILabel_o *nowTime; // x20
  float v14; // s0
  int32_t v15; // w1

  if ( (byte_5932373 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932373 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  seekBar = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)seekBar & 1) != 0 )
  {
    v7 = this->fields.player;
    if ( !v7 )
      goto LABEL_21;
    player_k__BackingField = v7->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v7->fields.isPlaying
      && this->fields.isSeeking )
    {
      seekBar = (UIProgressBar_o *)this->fields.seekBar;
      if ( seekBar )
      {
        value = UIProgressBar__get_value(seekBar, 0);
        v10 = this->fields.player;
        if ( v10 )
        {
          seekBar = (UIProgressBar_o *)v10->fields._player_k__BackingField;
          if ( seekBar )
          {
            v11 = value;
            seekBar = (UIProgressBar_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)seekBar, 0);
            if ( seekBar )
            {
              nowTime = this->fields.nowTime;
              v14 = v11 * (float)LODWORD(seekBar->fields.mBG);
              v15 = v14 == INFINITY ? 0x80000000 : (int)v14;
              seekBar = (UIProgressBar_o *)CRIMovieControl__FrameToTimeString(this, v15, v12);
              if ( nowTime )
              {
                UILabel__set_text(nowTime, (System_String_o *)seekBar, 0);
                return;
              }
            }
          }
        }
      }
LABEL_21:
      sub_21FFECC(seekBar, v6);
    }
  }
}


void CRIMovieControl__Open(CRIMovieControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_GameObject_o *window; // x0
  bool v7; // w1
  struct UISlider_o *seekBar; // x8

  if ( (byte_5932366 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    byte_5932366 = 1;
  }
  this->fields.status = 1;
  CRIMovieControl__EnableControl(this, 0, v2);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.enableControlCallBack,
    1,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  this->fields.dispTime = 0.0;
  this->fields.isSeeking = 0;
  if ( !CRIMovieControl__IsEnableSkipButton(this, v4) )
  {
    window = this->fields.window;
    if ( window )
    {
      UnityEngine_GameObject__SetActive(window, 1, 0);
      seekBar = this->fields.seekBar;
      if ( seekBar )
      {
        window = (UnityEngine_GameObject_o *)seekBar->fields.thumb;
        if ( window )
        {
          window = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)window, 0);
          if ( window )
          {
            v7 = 0;
            goto LABEL_12;
          }
        }
      }
    }
LABEL_13:
    sub_21FFECC(window, v5);
  }
  window = (UnityEngine_GameObject_o *)this->fields.skipButton;
  if ( !window )
    goto LABEL_13;
  window = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)window, 0);
  if ( !window )
    goto LABEL_13;
  v7 = 1;
LABEL_12:
  UnityEngine_GameObject__SetActive(window, v7, 0);
}


void CRIMovieControl__Opened(CRIMovieControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_Component_o *skipButton; // x0

  this->fields.status = 2;
  CRIMovieControl__EnableControl(this, 1, v2);
  if ( CRIMovieControl__IsEnableSkipButton(this, v4) )
  {
    skipButton = (UnityEngine_Component_o *)this->fields.skipButton;
    if ( !skipButton
      || (skipButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(skipButton, 0)) == 0 )
    {
LABEL_8:
      sub_21FFECC(skipButton, v5);
    }
  }
  else
  {
    skipButton = (UnityEngine_Component_o *)this->fields.window;
    if ( !skipButton )
      goto LABEL_8;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)skipButton, 1, 0);
  skipButton = (UnityEngine_Component_o *)this->fields.panel;
  if ( !skipButton )
    goto LABEL_8;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))skipButton->klass[1]._1.element_class)(
    skipButton,
    skipButton->klass[1]._1.castClass,
    1.0);
}


void CRIMovieControl__SetEnableControlCallBack(
        CRIMovieControl_o *this,
        System_Action_bool__o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.enableControlCallBack = action;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.enableControlCallBack,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CRIMovieControl__SetEndFullScreenAction(
        CRIMovieControl_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.endFullScreenAction = action;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endFullScreenAction,
    (int32_t)action,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CRIMovieControl__Update(CRIMovieControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  CRIMovieControl_o *v3; // x19
  int32_t status; // w8
  struct UIPanel_o *v5; // x20
  float v6; // s8
  float v7; // s0
  UnityEngine_Object_o *player; // x20
  struct CRIMoviePlayer_o *v9; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  struct CRIMoviePlayer_o *v11; // x8
  struct CRIMoviePlayer_o *v12; // x8
  CriMana_Player_o *v13; // x8
  int32_t m_CachedPtr; // w20
  const MethodInfo *v15; // x2
  struct CRIMoviePlayer_o *v16; // x22
  int32_t texture; // w21
  UILabel_o *nowTime; // x22
  UILabel_o *endTime; // x20
  float dispTime; // s8
  float v21; // s0
  struct UIPanel_o *panel; // x20
  float v23; // s8
  float deltaTime; // s0
  const MethodInfo *v25; // x1

  v3 = this;
  if ( (byte_5932364 & 1) == 0 )
  {
    this = (CRIMovieControl_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932364 = 1;
  }
  status = v3->fields.status;
  switch ( status )
  {
    case 3:
      if ( v3->fields.isSeeking )
      {
LABEL_14:
        CRIMovieControl__Opened(v3, method);
        break;
      }
      panel = v3->fields.panel;
      if ( !panel )
        goto LABEL_45;
      v23 = ((float (__fastcall *)(struct UIPanel_o *, const MethodInfo *))panel->klass->vtable._7_get_alpha.methodPtr)(
              v3->fields.panel,
              panel->klass->vtable._7_get_alpha.method);
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))panel->klass->vtable._8_set_alpha.methodPtr)(
        panel,
        panel->klass->vtable._8_set_alpha.method,
        v23 + (float)(deltaTime * -3.0));
      this = (CRIMovieControl_o *)v3->fields.panel;
      if ( !this )
        goto LABEL_45;
      if ( ((float (__fastcall *)(CRIMovieControl_o *, _QWORD))this->klass[1]._1.this_arg.data)(
             this,
             *(_QWORD *)&this->klass[1]._1.this_arg.bits) <= 0.01 )
      {
        this = (CRIMovieControl_o *)v3->fields.panel;
        if ( !this )
          goto LABEL_45;
        ((void (__fastcall *)(CRIMovieControl_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
          this,
          this->klass[1]._1.castClass,
          0.0);
        CRIMovieControl__Closed(v3, v25);
      }
      break;
    case 2:
      if ( v3->fields.isSeeking )
      {
        v3->fields.dispTime = 0.0;
      }
      else
      {
        dispTime = v3->fields.dispTime;
        v21 = dispTime + UnityEngine_Time__get_deltaTime(0);
        v3->fields.dispTime = v21;
        if ( v21 > 3.0 )
          CRIMovieControl__Close(v3, method);
      }
      break;
    case 1:
      v5 = v3->fields.panel;
      if ( !v5 )
        goto LABEL_45;
      v6 = ((float (__fastcall *)(struct UIPanel_o *, const MethodInfo *))v5->klass->vtable._7_get_alpha.methodPtr)(
             v3->fields.panel,
             v5->klass->vtable._7_get_alpha.method);
      v7 = UnityEngine_Time__get_deltaTime(0);
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v5->klass->vtable._8_set_alpha.methodPtr)(
        v5,
        v5->klass->vtable._8_set_alpha.method,
        v6 + (float)(v7 * 3.0));
      this = (CRIMovieControl_o *)v3->fields.panel;
      if ( !this )
        goto LABEL_45;
      if ( ((float (__fastcall *)(CRIMovieControl_o *, _QWORD))this->klass[1]._1.this_arg.data)(
             this,
             *(_QWORD *)&this->klass[1]._1.this_arg.bits) >= 0.99 )
      {
        this = (CRIMovieControl_o *)v3->fields.panel;
        if ( !this )
          goto LABEL_45;
        ((void (__fastcall *)(CRIMovieControl_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
          this,
          this->klass[1]._1.castClass,
          1.0);
        goto LABEL_14;
      }
      break;
  }
  player = (UnityEngine_Object_o *)v3->fields.player;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  this = (CRIMovieControl_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.player;
    if ( !v9 )
      goto LABEL_45;
    player_k__BackingField = v9->fields._player_k__BackingField;
    if ( player_k__BackingField )
    {
      this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo(player_k__BackingField, 0);
      if ( this )
      {
        v11 = v3->fields.player;
        if ( v11 )
        {
          this = (CRIMovieControl_o *)v11->fields._player_k__BackingField;
          if ( this )
          {
            this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0);
            if ( this )
            {
              v12 = v3->fields.player;
              if ( v12 )
              {
                v13 = v12->fields._player_k__BackingField;
                if ( v13 )
                {
                  m_CachedPtr = this->fields.m_CachedPtr;
                  this = (CRIMovieControl_o *)CriMana_Player__get_movieInfo(v13, 0);
                  if ( this )
                  {
                    v16 = v3->fields.player;
                    if ( v16 )
                    {
                      texture = (int32_t)this->fields.texture;
                      if ( v16->fields._player_k__BackingField
                        && CriMana_Player__get_status(v16->fields._player_k__BackingField, 0) == 5
                        && v16->fields.isPlaying
                        && !v3->fields.isSeeking )
                      {
                        nowTime = v3->fields.nowTime;
                        this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v3, m_CachedPtr, v15);
                        if ( !nowTime )
                          goto LABEL_45;
                        UILabel__set_text(nowTime, (System_String_o *)this, 0);
                        this = (CRIMovieControl_o *)v3->fields.seekBar;
                        if ( !this )
                          goto LABEL_45;
                        UIProgressBar__set_value((UIProgressBar_o *)this, (float)m_CachedPtr / (float)texture, 0);
                      }
                      endTime = v3->fields.endTime;
                      this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v3, texture, v15);
                      if ( endTime )
                      {
                        UILabel__set_text(endTime, (System_String_o *)this, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_45:
        sub_21FFECC(this, method);
      }
    }
  }
}


bool CRIMovieControl__get_IsClose(CRIMovieControl_o *this, const MethodInfo *method)
{
  int32_t status; // w8

  status = this->fields.status;
  return status == 3 || status == 0;
}


bool CRIMovieControl__get_IsOpen(CRIMovieControl_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.status - 1) < 2;
}
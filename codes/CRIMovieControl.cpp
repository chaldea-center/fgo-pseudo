void CRIMovieControl___ctor(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CRIMovieControl__Awake(CRIMovieControl_o *this, const MethodInfo *method)
{
  UILabel_o *nowTime; // x0
  UnityEngine_Transform_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4C50EC4 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_886/*"--:--"*/);
    byte_4C50EC4 = 1;
  }
  nowTime = this->fields.nowTime;
  if ( !nowTime )
    goto LABEL_11;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_886/*"--:--"*/, 0);
  nowTime = this->fields.endTime;
  if ( !nowTime )
    goto LABEL_11;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_886/*"--:--"*/, 0);
  nowTime = (UILabel_o *)this->fields.seekBar;
  if ( !nowTime )
    goto LABEL_11;
  UIProgressBar__set_value((UIProgressBar_o *)nowTime, 0.0, 0);
  nowTime = (UILabel_o *)this->fields.texture;
  if ( !nowTime )
    goto LABEL_11;
  nowTime = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)nowTime, 0);
  v4 = (UnityEngine_Transform_o *)nowTime;
  if ( !byte_4C506A6 )
  {
    nowTime = (UILabel_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  if ( !v4 )
LABEL_11:
    sub_1C3E7C0(nowTime, method);
  UnityEngine_Transform__set_localScale(v4, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  CRIMovieControl__Closed(this, v5);
}


void CRIMovieControl__Close(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4C50EC6 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_bool___);
    byte_4C50EC6 = 1;
  }
  window = this->fields.window;
  this->fields.status = 3;
  if ( !window )
    sub_1C3E7C0(0, method);
  UnityEngine_GameObject__SetActive(window, 1, 0);
  CRIMovieControl__EnableControl(this, 0, v4);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.enableControlCallBack,
    0,
    (const MethodInfo_3046270 *)Method_ActionExtensions_Call_bool___);
}


void CRIMovieControl__Closed(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  window = this->fields.window;
  this->fields.status = 0;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 0, 0),
        CRIMovieControl__EnableControl(this, 0, v4),
        (window = (UnityEngine_GameObject_o *)this->fields.panel) == 0) )
  {
    sub_1C3E7C0(window, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))window->klass[1]._1.element_class)(
    window,
    window->klass[1]._1.castClass,
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
    sub_1C3E7C0(foreground, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)foreground, !flag, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *CRIMovieControl__FrameToTimeString(CRIMovieControl_o *this, int32_t frame, const MethodInfo *method)
{
  CRIMovieControl_o *v4; // x20
  struct CRIMoviePlayer_o *player; // x8
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  unsigned __int64 v12; // x22
  Il2CppObject *v13; // x19
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x0
  int v22; // [xsp+8h] [xbp-38h] BYREF
  int v23; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C50EC8 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    this = (CRIMovieControl_o *)sub_1C3E564(&StringLiteral_25195/*"{0}:{1:00}"*/);
    byte_4C50EC8 = 1;
  }
  player = v4->fields.player;
  if ( !player
    || (this = (CRIMovieControl_o *)player->fields._player_k__BackingField) == 0
    || (this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0)) == 0 )
  {
    sub_1C3E7C0(this, *(_QWORD *)&frame);
  }
  v12 = 1000LL * frame / (unsigned __int64)this->fields.window;
  v23 = (int)v12 / 60;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v6, v7, v8, v9, v10, v11);
  v22 = (int)v12 % 60;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16, v17, v18, v19);
  return System_String__Format_63677760((System_String_o *)StringLiteral_25195/*"{0}:{1:00}"*/, v13, v20, 0);
}


void CRIMovieControl__OnClickEndButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v4; // x0
  const MethodInfo *v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  System_Action_o *endFullScreenAction; // x0

  if ( (byte_4C50ED1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ED1 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_14;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v6->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v4 = this->fields.player;
      if ( v4 )
      {
        CRIMoviePlayer__MovieStop(v4, v5);
        goto LABEL_13;
      }
LABEL_14:
      sub_1C3E7C0(v4, v5);
    }
  }
LABEL_13:
  endFullScreenAction = this->fields.endFullScreenAction;
  this->fields.dispTime = 0.0;
  ActionExtensions__Call(endFullScreenAction, 0);
}


void CRIMovieControl__OnClickForwardButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v4; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C50ED0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ED0 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_14;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v6->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v4 = this->fields.player;
      if ( v4 )
      {
        CRIMoviePlayer__MovieSeekByRelativeTime(v4, 10, v8);
        goto LABEL_13;
      }
LABEL_14:
      sub_1C3E7C0(v4, v5);
    }
  }
LABEL_13:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickPauseButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CriManaMovieMaterial_o *playButton; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0

  if ( (byte_4C50ECF & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ECF = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  playButton = (CriManaMovieMaterial_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)playButton & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_18;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v6->fields.isPlaying
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
      sub_1C3E7C0(playButton, v5);
    }
  }
LABEL_17:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickPlayButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CriManaMovieMaterial_o *playButton; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0

  if ( (byte_4C50ECE & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ECE = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  playButton = (CriManaMovieMaterial_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)playButton & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_18;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v6->fields.isPlaying
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
      sub_1C3E7C0(playButton, v5);
    }
  }
LABEL_17:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickRewindButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v4; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C50ECD & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ECD = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_14;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v6->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v4 = this->fields.player;
      if ( v4 )
      {
        CRIMoviePlayer__MovieSeekByRelativeTime(v4, -10, v8);
        goto LABEL_13;
      }
LABEL_14:
      sub_1C3E7C0(v4, v5);
    }
  }
LABEL_13:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickStartButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v4; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C50ECC & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ECC = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_14;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v6->fields.isPlaying
      && !this->fields.isSeeking )
    {
      v4 = this->fields.player;
      if ( v4 )
      {
        CRIMoviePlayer__MovieSeekByFrame(v4, 0, v8);
        goto LABEL_13;
      }
LABEL_14:
      sub_1C3E7C0(v4, v5);
    }
  }
LABEL_13:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  CRIMoviePlayer_o *v4; // x0
  const MethodInfo *v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0

  if ( (byte_4C50EC9 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50EC9 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (CRIMoviePlayer_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_14;
    if ( !v6->fields._isCanControl_k__BackingField )
    {
      player_k__BackingField = v6->fields._player_k__BackingField;
      if ( player_k__BackingField )
      {
        if ( CriMana_Player__get_status(player_k__BackingField, 0) == 5 && v6->fields.isPlaying )
        {
          v4 = this->fields.player;
          if ( v4 )
          {
            CRIMoviePlayer__MovieStop(v4, v5);
            return;
          }
LABEL_14:
          sub_1C3E7C0(v4, v5);
        }
      }
    }
  }
}


void CRIMovieControl__OnDoubleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x8
  CriMana_Player_o *player_k__BackingField; // x0

  if ( (byte_4C50ECB & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ECB = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      sub_1C3E7C0(v4, v5);
    if ( v6->fields._isCanControl_k__BackingField )
    {
      player_k__BackingField = v6->fields._player_k__BackingField;
      if ( player_k__BackingField )
        CriMana_Player__get_status(player_k__BackingField, 0);
    }
  }
}


void CRIMovieControl__OnPressDownSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  UnityEngine_Component_o *status; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  struct UISlider_o *seekBar; // x8
  struct CRIMoviePlayer_o *v9; // x8
  CriManaMovieMaterial_o *v10; // x8

  if ( (byte_4C50ED2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ED2 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  status = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)status & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_18;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField )
    {
      status = (UnityEngine_Component_o *)CriMana_Player__get_status(player_k__BackingField, 0);
      if ( (_DWORD)status == 5 && v6->fields.isPlaying )
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
              v9 = this->fields.player;
              this->fields.isSeeking = 1;
              if ( v9 )
              {
                status = (UnityEngine_Component_o *)v9->fields._player_k__BackingField;
                if ( status )
                {
                  status = (UnityEngine_Component_o *)CriMana_Player__IsPaused((CriMana_Player_o *)status, 0);
                  v10 = (CriManaMovieMaterial_o *)this->fields.player;
                  this->fields.isPaused = (unsigned __int8)status & 1;
                  if ( v10 )
                  {
                    CriManaMovieMaterial__Pause(v10, 1, 0);
                    goto LABEL_17;
                  }
                }
              }
            }
          }
        }
LABEL_18:
        sub_1C3E7C0(status, v5);
      }
    }
  }
LABEL_17:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnPressUpSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  UnityEngine_Component_o *status; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  struct UISlider_o *seekBar; // x8
  float value; // s0
  struct CRIMoviePlayer_o *v10; // x8
  float v11; // s8
  const MethodInfo *v12; // x2
  UnityEngine_Component_o *v13; // x8
  float v14; // s0
  int32_t v15; // w1

  if ( (byte_4C50ED3 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ED3 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  status = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)status & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_24;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_23;
    status = (UnityEngine_Component_o *)CriMana_Player__get_status(player_k__BackingField, 0);
    if ( (_DWORD)status != 5 || !v6->fields.isPlaying )
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
      || (value = UIProgressBar__get_value((UIProgressBar_o *)status, 0), (v10 = this->fields.player) == 0)
      || (status = (UnityEngine_Component_o *)v10->fields._player_k__BackingField) == 0
      || (v11 = value,
          (status = (UnityEngine_Component_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)status, 0)) == 0)
      || (v13 = status, (status = (UnityEngine_Component_o *)this->fields.player) == 0) )
    {
LABEL_24:
      sub_1C3E7C0(status, v5);
    }
    v14 = v11 * (float)LODWORD(v13[2].klass);
    if ( v14 == INFINITY )
      v15 = 0x80000000;
    else
      v15 = (int)v14;
    CRIMoviePlayer__MovieSeekByFrame((CRIMoviePlayer_o *)status, v15, v12);
  }
LABEL_23:
  this->fields.dispTime = 0.0;
}


void CRIMovieControl__OnSingleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v8; // x1
  int32_t status; // w8

  if ( (byte_4C50ECA & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ECA = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( v4 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      sub_1C3E7C0(v4, v5);
    if ( v6->fields._isCanControl_k__BackingField )
    {
      player_k__BackingField = v6->fields._player_k__BackingField;
      if ( player_k__BackingField )
      {
        if ( CriMana_Player__get_status(player_k__BackingField, 0) == 5
          && v6->fields.isPlaying
          && !this->fields.isSeeking )
        {
          status = this->fields.status;
          if ( status != 3 && status )
            CRIMovieControl__Close(this, v8);
          else
            CRIMovieControl__Open(this, v8);
        }
      }
    }
  }
}


void CRIMovieControl__OnValueChangeSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *player; // x20
  UIProgressBar_o *seekBar; // x0
  __int64 v5; // x1
  struct CRIMoviePlayer_o *v6; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  float value; // s0
  struct CRIMoviePlayer_o *v9; // x8
  float v10; // s8
  const MethodInfo *v11; // x2
  UILabel_o *nowTime; // x20
  float v13; // s0
  int32_t v14; // w1

  if ( (byte_4C50ED4 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50ED4 = 1;
  }
  player = (UnityEngine_Object_o *)this->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seekBar = (UIProgressBar_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)seekBar & 1) != 0 )
  {
    v6 = this->fields.player;
    if ( !v6 )
      goto LABEL_21;
    player_k__BackingField = v6->fields._player_k__BackingField;
    if ( player_k__BackingField
      && CriMana_Player__get_status(player_k__BackingField, 0) == 5
      && v6->fields.isPlaying
      && this->fields.isSeeking )
    {
      seekBar = (UIProgressBar_o *)this->fields.seekBar;
      if ( seekBar )
      {
        value = UIProgressBar__get_value(seekBar, 0);
        v9 = this->fields.player;
        if ( v9 )
        {
          seekBar = (UIProgressBar_o *)v9->fields._player_k__BackingField;
          if ( seekBar )
          {
            v10 = value;
            seekBar = (UIProgressBar_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)seekBar, 0);
            if ( seekBar )
            {
              nowTime = this->fields.nowTime;
              v13 = v10 * (float)LODWORD(seekBar->fields.mBG);
              v14 = v13 == INFINITY ? 0x80000000 : (int)v13;
              seekBar = (UIProgressBar_o *)CRIMovieControl__FrameToTimeString(this, v14, v11);
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
      sub_1C3E7C0(seekBar, v5);
    }
  }
}


void CRIMovieControl__Open(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2
  struct UISlider_o *seekBar; // x8

  if ( (byte_4C50EC7 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_bool___);
    byte_4C50EC7 = 1;
  }
  window = this->fields.window;
  this->fields.status = 1;
  if ( !window )
    goto LABEL_8;
  UnityEngine_GameObject__SetActive(window, 1, 0);
  CRIMovieControl__EnableControl(this, 0, v4);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.enableControlCallBack,
    1,
    (const MethodInfo_3046270 *)Method_ActionExtensions_Call_bool___);
  seekBar = this->fields.seekBar;
  this->fields.dispTime = 0.0;
  this->fields.isSeeking = 0;
  if ( !seekBar
    || (window = (UnityEngine_GameObject_o *)seekBar->fields.thumb) == 0
    || (window = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)window, 0)) == 0 )
  {
LABEL_8:
    sub_1C3E7C0(window, method);
  }
  UnityEngine_GameObject__SetActive(window, 0, 0);
}


void CRIMovieControl__Opened(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  window = this->fields.window;
  this->fields.status = 2;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 1, 0),
        CRIMovieControl__EnableControl(this, 1, v4),
        (window = (UnityEngine_GameObject_o *)this->fields.panel) == 0) )
  {
    sub_1C3E7C0(window, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))window->klass[1]._1.element_class)(
    window,
    window->klass[1]._1.castClass,
    1.0);
}


void CRIMovieControl__SetEnableControlCallBack(
        CRIMovieControl_o *this,
        System_Action_bool__o *action,
        const MethodInfo *method)
{
  this->fields.enableControlCallBack = action;
  sub_1C3E508(&this->fields.enableControlCallBack, action);
}


void CRIMovieControl__SetEndFullScreenAction(
        CRIMovieControl_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  this->fields.endFullScreenAction = action;
  sub_1C3E508(&this->fields.endFullScreenAction, action);
}


void CRIMovieControl__Update(CRIMovieControl_o *this, const MethodInfo *method)
{
  CRIMovieControl_o *v2; // x19
  int32_t status; // w8
  struct UIPanel_o *v4; // x20
  float v5; // s8
  float v6; // s0
  struct UIPanel_o *panel; // x20
  float v8; // s8
  float deltaTime; // s0
  const MethodInfo *v10; // x1
  float dispTime; // s8
  const MethodInfo *v12; // x1
  float v13; // s0
  UnityEngine_Object_o *player; // x20
  struct CRIMoviePlayer_o *v15; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  struct CRIMoviePlayer_o *v17; // x8
  struct CRIMoviePlayer_o *v18; // x8
  CriMana_Player_o *v19; // x8
  int32_t m_CachedPtr; // w20
  const MethodInfo *v21; // x2
  struct CRIMoviePlayer_o *v22; // x22
  int32_t texture; // w21
  UILabel_o *nowTime; // x22
  UILabel_o *endTime; // x20

  v2 = this;
  if ( (byte_4C50EC5 & 1) == 0 )
  {
    this = (CRIMovieControl_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C50EC5 = 1;
  }
  status = v2->fields.status;
  switch ( status )
  {
    case 3:
      if ( v2->fields.isSeeking )
      {
LABEL_12:
        CRIMovieControl__Opened(v2, method);
        break;
      }
      panel = v2->fields.panel;
      if ( !panel )
        goto LABEL_45;
      v8 = COERCE_FLOAT(
             COERCE_UNSIGNED_INT128(
               ((long double (__fastcall *)(struct UIPanel_o *, const MethodInfo *))panel->klass->vtable._7_get_alpha.methodPtr)(
                 v2->fields.panel,
                 panel->klass->vtable._7_get_alpha.method)));
      deltaTime = UnityEngine_Time__get_deltaTime(0);
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))panel->klass->vtable._8_set_alpha.methodPtr)(
        panel,
        panel->klass->vtable._8_set_alpha.method,
        v8 + (float)(deltaTime * -3.0));
      this = (CRIMovieControl_o *)v2->fields.panel;
      if ( !this )
        goto LABEL_45;
      if ( ((float (__fastcall *)(CRIMovieControl_o *, _QWORD))this->klass[1]._1.this_arg.data)(
             this,
             *(_QWORD *)&this->klass[1]._1.this_arg.bits) <= 0.01 )
      {
        this = (CRIMovieControl_o *)v2->fields.panel;
        if ( !this )
          goto LABEL_45;
        ((void (__fastcall *)(CRIMovieControl_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
          this,
          this->klass[1]._1.castClass,
          0.0);
        CRIMovieControl__Closed(v2, v10);
      }
      break;
    case 2:
      if ( v2->fields.isSeeking )
      {
        v2->fields.dispTime = 0.0;
      }
      else
      {
        dispTime = v2->fields.dispTime;
        v13 = dispTime + UnityEngine_Time__get_deltaTime(0);
        v2->fields.dispTime = v13;
        if ( v13 > 3.0 )
          CRIMovieControl__Close(v2, v12);
      }
      break;
    case 1:
      v4 = v2->fields.panel;
      if ( !v4 )
        goto LABEL_45;
      v5 = COERCE_FLOAT(
             COERCE_UNSIGNED_INT128(
               ((long double (__fastcall *)(struct UIPanel_o *, const MethodInfo *))v4->klass->vtable._7_get_alpha.methodPtr)(
                 v2->fields.panel,
                 v4->klass->vtable._7_get_alpha.method)));
      v6 = UnityEngine_Time__get_deltaTime(0);
      ((void (__fastcall *)(struct UIPanel_o *, const MethodInfo *, float))v4->klass->vtable._8_set_alpha.methodPtr)(
        v4,
        v4->klass->vtable._8_set_alpha.method,
        v5 + (float)(v6 * 3.0));
      this = (CRIMovieControl_o *)v2->fields.panel;
      if ( !this )
        goto LABEL_45;
      if ( ((float (__fastcall *)(CRIMovieControl_o *, _QWORD))this->klass[1]._1.this_arg.data)(
             this,
             *(_QWORD *)&this->klass[1]._1.this_arg.bits) >= 0.99 )
      {
        this = (CRIMovieControl_o *)v2->fields.panel;
        if ( !this )
          goto LABEL_45;
        ((void (__fastcall *)(CRIMovieControl_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
          this,
          this->klass[1]._1.castClass,
          1.0);
        goto LABEL_12;
      }
      break;
  }
  player = (UnityEngine_Object_o *)v2->fields.player;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (CRIMovieControl_o *)UnityEngine_Object__op_Inequality(player, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v15 = v2->fields.player;
    if ( !v15 )
      goto LABEL_45;
    player_k__BackingField = v15->fields._player_k__BackingField;
    if ( player_k__BackingField )
    {
      this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo(player_k__BackingField, 0);
      if ( this )
      {
        v17 = v2->fields.player;
        if ( v17 )
        {
          this = (CRIMovieControl_o *)v17->fields._player_k__BackingField;
          if ( this )
          {
            this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0);
            if ( this )
            {
              v18 = v2->fields.player;
              if ( v18 )
              {
                v19 = v18->fields._player_k__BackingField;
                if ( v19 )
                {
                  m_CachedPtr = this->fields.m_CachedPtr;
                  this = (CRIMovieControl_o *)CriMana_Player__get_movieInfo(v19, 0);
                  if ( this )
                  {
                    v22 = v2->fields.player;
                    if ( v22 )
                    {
                      texture = (int32_t)this->fields.texture;
                      if ( v22->fields._player_k__BackingField
                        && CriMana_Player__get_status(v22->fields._player_k__BackingField, 0) == 5
                        && v22->fields.isPlaying
                        && !v2->fields.isSeeking )
                      {
                        nowTime = v2->fields.nowTime;
                        this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v2, m_CachedPtr, v21);
                        if ( !nowTime )
                          goto LABEL_45;
                        UILabel__set_text(nowTime, (System_String_o *)this, 0);
                        this = (CRIMovieControl_o *)v2->fields.seekBar;
                        if ( !this )
                          goto LABEL_45;
                        UIProgressBar__set_value((UIProgressBar_o *)this, (float)m_CachedPtr / (float)texture, 0);
                      }
                      endTime = v2->fields.endTime;
                      this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v2, texture, v21);
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
        sub_1C3E7C0(this, method);
      }
    }
  }
}


bool CRIMovieControl__get_IsClose(CRIMovieControl_o *this, const MethodInfo *method)
{
  return this->fields.status == 3 || this->fields.status == 0;
}


bool CRIMovieControl__get_IsOpen(CRIMovieControl_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.status - 1) < 2;
}
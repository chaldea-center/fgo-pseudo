void __fastcall CRIMovieControl___ctor(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMovieControl__Awake(CRIMovieControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *nowTime; // x0
  UnityEngine_Transform_o *transform; // x20
  int v7; // s0
  const MethodInfo *v10; // x1

  if ( (byte_42EA63F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_781/*"--:--"*/, (_DWORD)method, v2, v3);
    byte_42EA63F = 1;
  }
  nowTime = this->fields.nowTime;
  if ( !nowTime )
    goto LABEL_9;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_781/*"--:--"*/, 0LL);
  nowTime = this->fields.endTime;
  if ( !nowTime
    || (UILabel__set_text(nowTime, (System_String_o *)StringLiteral_781/*"--:--"*/, 0LL),
        (nowTime = (UILabel_o *)this->fields.seekBar) == 0LL)
    || (UIProgressBar__set_value((UIProgressBar_o *)nowTime, 0.0, 0LL),
        (nowTime = (UILabel_o *)this->fields.texture) == 0LL)
    || (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)nowTime, 0LL),
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_one(0LL),
        !transform) )
  {
LABEL_9:
    sub_B5D69C(nowTime, method);
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v7, 0LL);
  CRIMovieControl__Closed(this, v10);
}


void __fastcall CRIMovieControl__Close(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  window = this->fields.window;
  this->fields.status = 3;
  if ( !window )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(window, 1, 0LL);
  CRIMovieControl__EnableControl(this, 0, v4);
}


void __fastcall CRIMovieControl__Closed(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  window = this->fields.window;
  this->fields.status = 0;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 0, 0LL),
        CRIMovieControl__EnableControl(this, 0, v4),
        (window = (UnityEngine_GameObject_o *)this->fields.panel) == 0LL) )
  {
    sub_B5D69C(window, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))window->klass[1]._1.castClass)(
    window,
    window->klass[1]._1.declaringType,
    0.0);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMovieControl__EnableControl(CRIMovieControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *foreground; // x0

  foreground = (UnityEngine_Component_o *)this->fields.foreground;
  if ( !foreground
    || (foreground = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(foreground, 0LL)) == 0LL )
  {
    sub_B5D69C(foreground, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)foreground, !flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CRIMovieControl__FrameToTimeString(
        CRIMovieControl_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CRIMovieControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct CRIMoviePlayer_o *player; // x8
  unsigned __int64 v10; // x21
  Il2CppObject *v11; // x19
  Il2CppObject *v12; // x0
  int v14; // [xsp+8h] [xbp-28h] BYREF
  int v15; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_42EA640 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, frame, (_DWORD)method, v3);
    this = (CRIMovieControl_o *)sub_B5D5C4(&StringLiteral_23937/*"{0}:{1:00}"*/, v6, v7, v8);
    byte_42EA640 = 1;
  }
  player = v5->fields.player;
  if ( !player
    || (this = *(CRIMovieControl_o **)&player->fields.renderMode) == 0LL
    || (this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0LL)) == 0LL )
  {
    sub_B5D69C(this, *(_QWORD *)&frame);
  }
  v10 = 1000LL * frame / (unsigned __int64)this->fields.nowTime;
  v15 = (int)v10 / 60;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  v14 = (int)v10 % 60;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format_44573324((System_String_o *)StringLiteral_23937/*"{0}:{1:00}"*/, v11, v12, 0LL);
}


void __fastcall CRIMovieControl__OnClickEndButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_7;
  if ( CRIMoviePlayer__IsPlaying(player, 0LL) && !this->fields.isSeeking )
  {
    player = this->fields.player;
    if ( player )
    {
      CRIMoviePlayer__MovieStop(player, 0LL);
      goto LABEL_6;
    }
LABEL_7:
    sub_B5D69C(player, method);
  }
LABEL_6:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickForwardButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_7;
  if ( CRIMoviePlayer__IsPlaying(player, 0LL) && !this->fields.isSeeking )
  {
    player = this->fields.player;
    if ( player )
    {
      CRIMoviePlayer__MovieSeekByRelativeTime(player, 10, 0LL);
      goto LABEL_6;
    }
LABEL_7:
    sub_B5D69C(player, method);
  }
LABEL_6:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickPauseButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  CriManaMovieMaterial_o *player; // x0

  player = (CriManaMovieMaterial_o *)this->fields.player;
  if ( !player )
    goto LABEL_11;
  if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)player, 0LL) && !this->fields.isSeeking )
  {
    player = (CriManaMovieMaterial_o *)this->fields.player;
    if ( player )
    {
      CriManaMovieMaterial__Pause(player, 1, 0LL);
      player = (CriManaMovieMaterial_o *)this->fields.playButton;
      if ( player )
      {
        player = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)player, 0LL);
        if ( player )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player, 1, 0LL);
          player = (CriManaMovieMaterial_o *)this->fields.pauseButton;
          if ( player )
          {
            player = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)player,
                                                 0LL);
            if ( player )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player, 0, 0LL);
              goto LABEL_10;
            }
          }
        }
      }
    }
LABEL_11:
    sub_B5D69C(player, method);
  }
LABEL_10:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickPlayButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  CriManaMovieMaterial_o *player; // x0

  player = (CriManaMovieMaterial_o *)this->fields.player;
  if ( !player )
    goto LABEL_11;
  if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)player, 0LL) && !this->fields.isSeeking )
  {
    player = (CriManaMovieMaterial_o *)this->fields.player;
    if ( player )
    {
      CriManaMovieMaterial__Pause(player, 0, 0LL);
      player = (CriManaMovieMaterial_o *)this->fields.playButton;
      if ( player )
      {
        player = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)player, 0LL);
        if ( player )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player, 0, 0LL);
          player = (CriManaMovieMaterial_o *)this->fields.pauseButton;
          if ( player )
          {
            player = (CriManaMovieMaterial_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)player,
                                                 0LL);
            if ( player )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player, 1, 0LL);
              goto LABEL_10;
            }
          }
        }
      }
    }
LABEL_11:
    sub_B5D69C(player, method);
  }
LABEL_10:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickRewindButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_7;
  if ( CRIMoviePlayer__IsPlaying(player, 0LL) && !this->fields.isSeeking )
  {
    player = this->fields.player;
    if ( player )
    {
      CRIMoviePlayer__MovieSeekByRelativeTime(player, -10, 0LL);
      goto LABEL_6;
    }
LABEL_7:
    sub_B5D69C(player, method);
  }
LABEL_6:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickStartButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_7;
  if ( CRIMoviePlayer__IsPlaying(player, 0LL) && !this->fields.isSeeking )
  {
    player = this->fields.player;
    if ( player )
    {
      CRIMoviePlayer__MovieSeekByFrame(player, 0, 0LL);
      goto LABEL_6;
    }
LABEL_7:
    sub_B5D69C(player, method);
  }
LABEL_6:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_7;
  if ( !BYTE1(player->fields.cinemascopeSideFrame) && CRIMoviePlayer__IsPlaying(player, 0LL) )
  {
    player = this->fields.player;
    if ( player )
    {
      CRIMoviePlayer__MovieStop(player, 0LL);
      return;
    }
LABEL_7:
    sub_B5D69C(player, method);
  }
}


void __fastcall CRIMovieControl__OnDoubleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_B5D69C(0LL, method);
  if ( BYTE1(player->fields.cinemascopeSideFrame) )
    CRIMoviePlayer__IsPlaying(player, 0LL);
}


void __fastcall CRIMovieControl__OnPressDownSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0
  struct UISlider_o *seekBar; // x8
  struct CRIMoviePlayer_o *v5; // x8
  CriManaMovieMaterial_o *v6; // x8

  player = this->fields.player;
  if ( !player )
    goto LABEL_11;
  player = (CRIMoviePlayer_o *)CRIMoviePlayer__IsPlaying(player, 0LL);
  if ( ((unsigned __int8)player & 1) != 0 )
  {
    seekBar = this->fields.seekBar;
    if ( seekBar )
    {
      player = (CRIMoviePlayer_o *)seekBar->fields.thumb;
      if ( player )
      {
        player = (CRIMoviePlayer_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)player, 0LL);
        if ( player )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player, 1, 0LL);
          v5 = this->fields.player;
          this->fields.isSeeking = 1;
          if ( v5 )
          {
            player = *(CRIMoviePlayer_o **)&v5->fields.renderMode;
            if ( player )
            {
              player = (CRIMoviePlayer_o *)CriMana_Player__IsPaused((CriMana_Player_o *)player, 0LL);
              v6 = (CriManaMovieMaterial_o *)this->fields.player;
              this->fields.isPaused = (unsigned __int8)player & 1;
              if ( v6 )
              {
                CriManaMovieMaterial__Pause(v6, 1, 0LL);
                goto LABEL_10;
              }
            }
          }
        }
      }
    }
LABEL_11:
    sub_B5D69C(player, method);
  }
LABEL_10:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnPressUpSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0
  struct UISlider_o *seekBar; // x8
  float value; // s0
  struct CRIMoviePlayer_o *v6; // x8
  float v7; // s8
  unsigned __int64 v8; // d0
  CRIMoviePlayer_o *v9; // x8
  float v10; // s0
  float v11; // s0
  double v12; // d0

  player = this->fields.player;
  if ( !player )
    goto LABEL_17;
  player = (CRIMoviePlayer_o *)CRIMoviePlayer__IsPlaying(player, 0LL);
  if ( ((unsigned __int8)player & 1) == 0 )
    goto LABEL_16;
  seekBar = this->fields.seekBar;
  if ( !seekBar )
    goto LABEL_17;
  player = (CRIMoviePlayer_o *)seekBar->fields.thumb;
  if ( !player )
    goto LABEL_17;
  player = (CRIMoviePlayer_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)player, 0LL);
  if ( !player )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)player, 0, 0LL);
  player = this->fields.player;
  this->fields.isSeeking = 0;
  if ( !player )
    goto LABEL_17;
  CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)player, this->fields.isPaused, 0LL);
  player = (CRIMoviePlayer_o *)this->fields.seekBar;
  if ( !player
    || (value = UIProgressBar__get_value((UIProgressBar_o *)player, 0LL), (v6 = this->fields.player) == 0LL)
    || (player = *(CRIMoviePlayer_o **)&v6->fields.renderMode) == 0LL
    || (v7 = value, (player = (CRIMoviePlayer_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)player, 0LL)) == 0LL)
    || (v9 = player, (player = this->fields.player) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(player, method);
  }
  LODWORD(v8) = v9->fields.renderMode;
  v10 = (float)v8;
  v11 = v7 * v10;
  if ( v11 == INFINITY )
    v12 = -v11;
  else
    v12 = v11;
  CRIMoviePlayer__MovieSeekByFrame(player, (int)v12, 0LL);
LABEL_16:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnSingleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x0
  const MethodInfo *v4; // x1
  int32_t status; // w8

  player = this->fields.player;
  if ( !player )
    sub_B5D69C(0LL, method);
  if ( BYTE1(player->fields.cinemascopeSideFrame) && CRIMoviePlayer__IsPlaying(player, 0LL) && !this->fields.isSeeking )
  {
    status = this->fields.status;
    if ( status != 3 && status )
      CRIMovieControl__Close(this, v4);
    else
      CRIMovieControl__Open(this, v4);
  }
}


void __fastcall CRIMovieControl__OnValueChangeSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  UIProgressBar_o *player; // x0
  float value; // s0
  struct CRIMoviePlayer_o *v5; // x8
  float v6; // s8
  const MethodInfo *v7; // x2
  unsigned __int64 v8; // d0
  UILabel_o *nowTime; // x20
  float v10; // s0
  float v11; // s0
  double v12; // d0

  player = (UIProgressBar_o *)this->fields.player;
  if ( !player )
    goto LABEL_14;
  if ( CRIMoviePlayer__IsPlaying((CRIMoviePlayer_o *)player, 0LL) && this->fields.isSeeking )
  {
    player = (UIProgressBar_o *)this->fields.seekBar;
    if ( player )
    {
      value = UIProgressBar__get_value(player, 0LL);
      v5 = this->fields.player;
      if ( v5 )
      {
        player = *(UIProgressBar_o **)&v5->fields.renderMode;
        if ( player )
        {
          v6 = value;
          player = (UIProgressBar_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)player, 0LL);
          if ( player )
          {
            LODWORD(v8) = player->fields.mFG;
            nowTime = this->fields.nowTime;
            v10 = (float)v8;
            v11 = v6 * v10;
            v12 = v11 == INFINITY ? -v11 : v11;
            player = (UIProgressBar_o *)CRIMovieControl__FrameToTimeString(this, (int)v12, v7);
            if ( nowTime )
            {
              UILabel__set_text(nowTime, (System_String_o *)player, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_14:
    sub_B5D69C(player, method);
  }
}


void __fastcall CRIMovieControl__Open(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2
  struct UISlider_o *seekBar; // x8

  window = this->fields.window;
  this->fields.status = 1;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 1, 0LL),
        CRIMovieControl__EnableControl(this, 0, v4),
        seekBar = this->fields.seekBar,
        this->fields.dispTime = 0.0,
        this->fields.isSeeking = 0,
        !seekBar)
    || (window = (UnityEngine_GameObject_o *)seekBar->fields.thumb) == 0LL
    || (window = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)window, 0LL)) == 0LL )
  {
    sub_B5D69C(window, method);
  }
  UnityEngine_GameObject__SetActive(window, 0, 0LL);
}


void __fastcall CRIMovieControl__Opened(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  window = this->fields.window;
  this->fields.status = 2;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 1, 0LL),
        CRIMovieControl__EnableControl(this, 1, v4),
        (window = (UnityEngine_GameObject_o *)this->fields.panel) == 0LL) )
  {
    sub_B5D69C(window, method);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))window->klass[1]._1.castClass)(
    window,
    window->klass[1]._1.declaringType,
    1.0);
}


void __fastcall CRIMovieControl__Update(CRIMovieControl_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  CRIMovieControl_o *v3; // x19
  struct UIPanel_o *v4; // x20
  float v5; // s8
  float v6; // s0
  struct UIPanel_o *panel; // x20
  float v8; // s8
  float deltaTime; // s0
  const MethodInfo *v10; // x1
  float dispTime; // s8
  float v12; // s0
  struct CRIMoviePlayer_o *player; // x8
  CriMana_Player_o *v14; // x0
  struct CRIMoviePlayer_o *v15; // x8
  struct CRIMoviePlayer_o *v16; // x8
  CriMana_Player_o *v17; // x8
  int32_t m_CachedPtr; // w20
  int32_t v19; // w21
  const MethodInfo *v20; // x2
  UILabel_o *nowTime; // x22
  UILabel_o *endTime; // x20

  status = this->fields.status;
  v3 = this;
  switch ( status )
  {
    case 3:
      if ( this->fields.isSeeking )
      {
LABEL_10:
        CRIMovieControl__Opened(v3, method);
        break;
      }
      panel = this->fields.panel;
      if ( !panel )
        goto LABEL_38;
      v8 = COERCE_FLOAT(
             COERCE_UNSIGNED_INT128(
               ((long double (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))panel->klass->vtable._7_get_alpha.method)(
                 this->fields.panel,
                 panel->klass->vtable._8_set_alpha.methodPtr)));
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))panel->klass->vtable._8_set_alpha.method)(
        panel,
        panel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        v8 + (float)(deltaTime * -3.0));
      this = (CRIMovieControl_o *)v3->fields.panel;
      if ( !this )
        goto LABEL_38;
      if ( (*(float (__fastcall **)(CRIMovieControl_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
             this,
             this->klass[1]._1.element_class) <= 0.01 )
      {
        this = (CRIMovieControl_o *)v3->fields.panel;
        if ( !this )
          goto LABEL_38;
        ((void (__fastcall *)(CRIMovieControl_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          0.0);
        CRIMovieControl__Closed(v3, v10);
      }
      break;
    case 2:
      if ( this->fields.isSeeking )
      {
        this->fields.dispTime = 0.0;
      }
      else
      {
        dispTime = this->fields.dispTime;
        v12 = dispTime + UnityEngine_Time__get_deltaTime(0LL);
        v3->fields.dispTime = v12;
        if ( v12 > 3.0 )
          CRIMovieControl__Close(v3, method);
      }
      break;
    case 1:
      v4 = this->fields.panel;
      if ( !v4 )
        goto LABEL_38;
      v5 = COERCE_FLOAT(
             COERCE_UNSIGNED_INT128(
               ((long double (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))v4->klass->vtable._7_get_alpha.method)(
                 this->fields.panel,
                 v4->klass->vtable._8_set_alpha.methodPtr)));
      v6 = UnityEngine_Time__get_deltaTime(0LL);
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v4->klass->vtable._8_set_alpha.method)(
        v4,
        v4->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        v5 + (float)(v6 * 3.0));
      this = (CRIMovieControl_o *)v3->fields.panel;
      if ( !this )
        goto LABEL_38;
      if ( (*(float (__fastcall **)(CRIMovieControl_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
             this,
             this->klass[1]._1.element_class) >= 0.99 )
      {
        this = (CRIMovieControl_o *)v3->fields.panel;
        if ( !this )
          goto LABEL_38;
        ((void (__fastcall *)(CRIMovieControl_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
          this,
          this->klass[1]._1.declaringType,
          1.0);
        goto LABEL_10;
      }
      break;
  }
  player = v3->fields.player;
  if ( !player )
    goto LABEL_38;
  v14 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v14 )
  {
    this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo(v14, 0LL);
    if ( this )
    {
      v15 = v3->fields.player;
      if ( v15 )
      {
        this = *(CRIMovieControl_o **)&v15->fields.renderMode;
        if ( this )
        {
          this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0LL);
          if ( this )
          {
            v16 = v3->fields.player;
            if ( v16 )
            {
              v17 = *(CriMana_Player_o **)&v16->fields.renderMode;
              if ( v17 )
              {
                m_CachedPtr = this->fields.m_CachedPtr;
                this = (CRIMovieControl_o *)CriMana_Player__get_movieInfo(v17, 0LL);
                if ( this )
                {
                  if ( v3->fields.player )
                  {
                    v19 = (int32_t)this->fields.panel;
                    if ( CRIMoviePlayer__IsPlaying(v3->fields.player, 0LL) && !v3->fields.isSeeking )
                    {
                      nowTime = v3->fields.nowTime;
                      this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v3, m_CachedPtr, v20);
                      if ( !nowTime )
                        goto LABEL_38;
                      UILabel__set_text(nowTime, (System_String_o *)this, 0LL);
                      this = (CRIMovieControl_o *)v3->fields.seekBar;
                      if ( !this )
                        goto LABEL_38;
                      UIProgressBar__set_value((UIProgressBar_o *)this, (float)m_CachedPtr / (float)v19, 0LL);
                    }
                    endTime = v3->fields.endTime;
                    this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v3, v19, v20);
                    if ( endTime )
                    {
                      UILabel__set_text(endTime, (System_String_o *)this, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_38:
      sub_B5D69C(this, method);
    }
  }
}


bool __fastcall CRIMovieControl__get_IsClose(CRIMovieControl_o *this, const MethodInfo *method)
{
  return this->fields.status == 3 || this->fields.status == 0;
}


bool __fastcall CRIMovieControl__get_IsOpen(CRIMovieControl_o *this, const MethodInfo *method)
{
  return (unsigned int)(this->fields.status - 1) < 2;
}
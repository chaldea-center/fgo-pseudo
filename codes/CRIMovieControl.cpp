void __fastcall CRIMovieControl___ctor(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CRIMovieControl__Awake(CRIMovieControl_o *this, const MethodInfo *method)
{
  UILabel_o *nowTime; // x0
  UILabel_o *endTime; // x0
  UIProgressBar_o *seekBar; // x0
  UnityEngine_Component_o *texture; // x0
  UnityEngine_Transform_o *transform; // x20
  int v8; // s0
  const MethodInfo *v11; // x1

  if ( (byte_40FB514 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_771, method);
    byte_40FB514 = 1;
  }
  nowTime = this->fields.nowTime;
  if ( !nowTime )
    goto LABEL_9;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_771, 0LL);
  endTime = this->fields.endTime;
  if ( !endTime
    || (UILabel__set_text(endTime, (System_String_o *)StringLiteral_771, 0LL),
        (seekBar = (UIProgressBar_o *)this->fields.seekBar) == 0LL)
    || (UIProgressBar__set_value(seekBar, 0.0, 0LL), (texture = (UnityEngine_Component_o *)this->fields.texture) == 0LL)
    || (transform = UnityEngine_Component__get_transform(texture, 0LL),
        *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_one(0LL),
        !transform) )
  {
LABEL_9:
    sub_B170D4();
  }
  UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&v8, 0LL);
  CRIMovieControl__Closed(this, v11);
}


void __fastcall CRIMovieControl__Close(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  window = this->fields.window;
  this->fields.status = 3;
  if ( !window )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(window, 1, 0LL);
  CRIMovieControl__EnableControl(this, 0, v4);
}


void __fastcall CRIMovieControl__Closed(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2
  struct UIPanel_o *panel; // x0

  window = this->fields.window;
  this->fields.status = 0;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 0, 0LL),
        CRIMovieControl__EnableControl(this, 0, v4),
        (panel = this->fields.panel) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))panel->klass->vtable._8_set_alpha.method)(
    panel,
    panel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    0.0);
}


void __fastcall CRIMovieControl__EnableControl(CRIMovieControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Component_o *foreground; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  foreground = (UnityEngine_Component_o *)this->fields.foreground;
  if ( !foreground || (gameObject = UnityEngine_Component__get_gameObject(foreground, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, !flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CRIMovieControl__FrameToTimeString(
        CRIMovieControl_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct CRIMoviePlayer_o *player; // x8
  CriMana_Player_o *v7; // x0
  CriMana_FrameInfo_o *frameInfo; // x0
  unsigned __int64 v9; // x21
  Il2CppObject *v10; // x19
  Il2CppObject *v11; // x0
  int v13; // [xsp+8h] [xbp-28h] BYREF
  int v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FB515 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&frame);
    sub_B16FFC(&StringLiteral_23531, v5);
    byte_40FB515 = 1;
  }
  player = this->fields.player;
  if ( !player
    || (v7 = *(CriMana_Player_o **)&player->fields.renderMode) == 0LL
    || (frameInfo = CriMana_Player__get_frameInfo(v7, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v9 = 1000LL * frame / frameInfo->fields.tunit;
  v14 = (int)v9 / 60;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v13 = (int)v9 % 60;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return System_String__Format_43739268((System_String_o *)StringLiteral_23531, v10, v11, 0LL);
}


void __fastcall CRIMovieControl__OnClickEndButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  const MethodInfo *v5; // x1
  CRIMoviePlayer_o *v6; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && !this->fields.isSeeking )
  {
    v6 = this->fields.player;
    if ( v6 )
    {
      CRIMoviePlayer__MovieStop(v6, v5);
      goto LABEL_8;
    }
LABEL_9:
    sub_B170D4();
  }
LABEL_8:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickForwardButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  const MethodInfo *v5; // x2
  CRIMoviePlayer_o *v6; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && !this->fields.isSeeking )
  {
    v6 = this->fields.player;
    if ( v6 )
    {
      CRIMoviePlayer__MovieSeekByRelativeTime(v6, 10, v5);
      goto LABEL_8;
    }
LABEL_9:
    sub_B170D4();
  }
LABEL_8:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickPauseButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  CriManaMovieMaterial_o *v5; // x0
  UnityEngine_Component_o *playButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *pauseButton; // x0
  UnityEngine_GameObject_o *v9; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_13;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && !this->fields.isSeeking )
  {
    v5 = (CriManaMovieMaterial_o *)this->fields.player;
    if ( v5 )
    {
      CriManaMovieMaterial__Pause(v5, 1, 0LL);
      playButton = (UnityEngine_Component_o *)this->fields.playButton;
      if ( playButton )
      {
        gameObject = UnityEngine_Component__get_gameObject(playButton, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          pauseButton = (UnityEngine_Component_o *)this->fields.pauseButton;
          if ( pauseButton )
          {
            v9 = UnityEngine_Component__get_gameObject(pauseButton, 0LL);
            if ( v9 )
            {
              UnityEngine_GameObject__SetActive(v9, 0, 0LL);
              goto LABEL_12;
            }
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_12:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickPlayButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  CriManaMovieMaterial_o *v5; // x0
  UnityEngine_Component_o *playButton; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *pauseButton; // x0
  UnityEngine_GameObject_o *v9; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_13;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && !this->fields.isSeeking )
  {
    v5 = (CriManaMovieMaterial_o *)this->fields.player;
    if ( v5 )
    {
      CriManaMovieMaterial__Pause(v5, 0, 0LL);
      playButton = (UnityEngine_Component_o *)this->fields.playButton;
      if ( playButton )
      {
        gameObject = UnityEngine_Component__get_gameObject(playButton, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          pauseButton = (UnityEngine_Component_o *)this->fields.pauseButton;
          if ( pauseButton )
          {
            v9 = UnityEngine_Component__get_gameObject(pauseButton, 0LL);
            if ( v9 )
            {
              UnityEngine_GameObject__SetActive(v9, 1, 0LL);
              goto LABEL_12;
            }
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_12:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickRewindButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  const MethodInfo *v5; // x2
  CRIMoviePlayer_o *v6; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && !this->fields.isSeeking )
  {
    v6 = this->fields.player;
    if ( v6 )
    {
      CRIMoviePlayer__MovieSeekByRelativeTime(v6, -10, v5);
      goto LABEL_8;
    }
LABEL_9:
    sub_B170D4();
  }
LABEL_8:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickStartButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  const MethodInfo *v5; // x2
  CRIMoviePlayer_o *v6; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && !this->fields.isSeeking )
  {
    v6 = this->fields.player;
    if ( v6 )
    {
      CRIMoviePlayer__MovieSeekByFrame(v6, 0, v5);
      goto LABEL_8;
    }
LABEL_9:
    sub_B170D4();
  }
LABEL_8:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  const MethodInfo *v5; // x1
  CRIMoviePlayer_o *v6; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  if ( !BYTE1(player->fields.cinemascopeSideFrame) )
  {
    v4 = *(CriMana_Player_o **)&player->fields.renderMode;
    if ( v4 )
    {
      if ( CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip )
      {
        v6 = this->fields.player;
        if ( v6 )
        {
          CRIMoviePlayer__MovieStop(v6, v5);
          return;
        }
LABEL_9:
        sub_B170D4();
      }
    }
  }
}


void __fastcall CRIMovieControl__OnDoubleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x8
  CriMana_Player_o *v3; // x0

  player = this->fields.player;
  if ( !player )
    sub_B170D4();
  if ( BYTE1(player->fields.cinemascopeSideFrame) )
  {
    v3 = *(CriMana_Player_o **)&player->fields.renderMode;
    if ( v3 )
      CriMana_Player__get_status(v3, 0LL);
  }
}


void __fastcall CRIMovieControl__OnPressDownSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  struct UISlider_o *seekBar; // x8
  UnityEngine_Component_o *thumb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct CRIMoviePlayer_o *v8; // x8
  CriMana_Player_o *v9; // x0
  bool IsPaused; // w0
  CriManaMovieMaterial_o *v11; // x8

  player = this->fields.player;
  if ( !player )
    goto LABEL_13;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip )
  {
    seekBar = this->fields.seekBar;
    if ( seekBar )
    {
      thumb = (UnityEngine_Component_o *)seekBar->fields.thumb;
      if ( thumb )
      {
        gameObject = UnityEngine_Component__get_gameObject(thumb, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          v8 = this->fields.player;
          this->fields.isSeeking = 1;
          if ( v8 )
          {
            v9 = *(CriMana_Player_o **)&v8->fields.renderMode;
            if ( v9 )
            {
              IsPaused = CriMana_Player__IsPaused(v9, 0LL);
              v11 = (CriManaMovieMaterial_o *)this->fields.player;
              this->fields.isPaused = IsPaused;
              if ( v11 )
              {
                CriManaMovieMaterial__Pause(v11, 1, 0LL);
                goto LABEL_12;
              }
            }
          }
        }
      }
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_12:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnPressUpSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  struct UISlider_o *seekBar; // x8
  UnityEngine_Component_o *thumb; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  CriManaMovieMaterial_o *v8; // x0
  UIProgressBar_o *v9; // x0
  float value; // s0
  struct CRIMoviePlayer_o *v11; // x8
  CriMana_Player_o *v12; // x0
  float v13; // s8
  CriMana_MovieInfo_o *movieInfo; // x0
  const MethodInfo *v15; // x2
  unsigned __int64 v16; // d0
  CriMana_MovieInfo_o *v17; // x8
  CRIMoviePlayer_o *v18; // x0
  float v19; // s0
  float v20; // s0
  double v21; // d0

  player = this->fields.player;
  if ( !player )
    goto LABEL_19;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( !v4 || CriMana_Player__get_status(v4, 0LL) != 5 || !player->fields.isCanSkip )
    goto LABEL_18;
  seekBar = this->fields.seekBar;
  if ( !seekBar )
    goto LABEL_19;
  thumb = (UnityEngine_Component_o *)seekBar->fields.thumb;
  if ( !thumb )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(thumb, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v8 = (CriManaMovieMaterial_o *)this->fields.player;
  this->fields.isSeeking = 0;
  if ( !v8 )
    goto LABEL_19;
  CriManaMovieMaterial__Pause(v8, this->fields.isPaused, 0LL);
  v9 = (UIProgressBar_o *)this->fields.seekBar;
  if ( !v9
    || (value = UIProgressBar__get_value(v9, 0LL), (v11 = this->fields.player) == 0LL)
    || (v12 = *(CriMana_Player_o **)&v11->fields.renderMode) == 0LL
    || (v13 = value, (movieInfo = CriMana_Player__get_movieInfo(v12, 0LL)) == 0LL)
    || (v17 = movieInfo, (v18 = this->fields.player) == 0LL) )
  {
LABEL_19:
    sub_B170D4();
  }
  LODWORD(v16) = v17->fields.totalFrames;
  v19 = (float)v16;
  v20 = v13 * v19;
  if ( v20 == INFINITY )
    v21 = -v20;
  else
    v21 = v20;
  CRIMoviePlayer__MovieSeekByFrame(v18, (int)v21, v15);
LABEL_18:
  this->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnSingleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  const MethodInfo *v5; // x1
  int32_t status; // w8

  player = this->fields.player;
  if ( !player )
    sub_B170D4();
  if ( BYTE1(player->fields.cinemascopeSideFrame) )
  {
    v4 = *(CriMana_Player_o **)&player->fields.renderMode;
    if ( v4 )
    {
      if ( CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && !this->fields.isSeeking )
      {
        status = this->fields.status;
        if ( status != 3 && status )
          CRIMovieControl__Close(this, v5);
        else
          CRIMovieControl__Open(this, v5);
      }
    }
  }
}


void __fastcall CRIMovieControl__OnValueChangeSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *v4; // x0
  UIProgressBar_o *seekBar; // x0
  float value; // s0
  struct CRIMoviePlayer_o *v7; // x8
  CriMana_Player_o *v8; // x0
  float v9; // s8
  CriMana_MovieInfo_o *movieInfo; // x0
  const MethodInfo *v11; // x2
  unsigned __int64 v12; // d0
  UILabel_o *nowTime; // x20
  float v14; // s0
  float v15; // s0
  double v16; // d0
  System_String_o *v17; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_16;
  v4 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v4 && CriMana_Player__get_status(v4, 0LL) == 5 && player->fields.isCanSkip && this->fields.isSeeking )
  {
    seekBar = (UIProgressBar_o *)this->fields.seekBar;
    if ( seekBar )
    {
      value = UIProgressBar__get_value(seekBar, 0LL);
      v7 = this->fields.player;
      if ( v7 )
      {
        v8 = *(CriMana_Player_o **)&v7->fields.renderMode;
        if ( v8 )
        {
          v9 = value;
          movieInfo = CriMana_Player__get_movieInfo(v8, 0LL);
          if ( movieInfo )
          {
            LODWORD(v12) = movieInfo->fields.totalFrames;
            nowTime = this->fields.nowTime;
            v14 = (float)v12;
            v15 = v9 * v14;
            v16 = v15 == INFINITY ? -v15 : v15;
            v17 = CRIMovieControl__FrameToTimeString(this, (int)v16, v11);
            if ( nowTime )
            {
              UILabel__set_text(nowTime, v17, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_B170D4();
  }
}


void __fastcall CRIMovieControl__Open(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2
  struct UISlider_o *seekBar; // x8
  UnityEngine_Component_o *thumb; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  window = this->fields.window;
  this->fields.status = 1;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 1, 0LL),
        CRIMovieControl__EnableControl(this, 0, v4),
        seekBar = this->fields.seekBar,
        this->fields.dispTime = 0.0,
        this->fields.isSeeking = 0,
        !seekBar)
    || (thumb = (UnityEngine_Component_o *)seekBar->fields.thumb) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject(thumb, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CRIMovieControl__Opened(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2
  struct UIPanel_o *panel; // x0

  window = this->fields.window;
  this->fields.status = 2;
  if ( !window
    || (UnityEngine_GameObject__SetActive(window, 1, 0LL),
        CRIMovieControl__EnableControl(this, 1, v4),
        (panel = this->fields.panel) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))panel->klass->vtable._8_set_alpha.method)(
    panel,
    panel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
}


void __fastcall CRIMovieControl__Update(CRIMovieControl_o *this, const MethodInfo *method)
{
  int32_t status; // w8
  struct UIPanel_o *v4; // x20
  float v5; // s8
  float v6; // s0
  struct UIPanel_o *v7; // x0
  struct UIPanel_o *v8; // x0
  float dispTime; // s8
  const MethodInfo *v10; // x1
  float v11; // s0
  struct UIPanel_o *panel; // x20
  float v13; // s8
  float deltaTime; // s0
  struct UIPanel_o *v15; // x0
  struct UIPanel_o *v16; // x0
  const MethodInfo *v17; // x1
  struct CRIMoviePlayer_o *player; // x8
  CriMana_Player_o *v19; // x0
  struct CRIMoviePlayer_o *v20; // x8
  CriMana_Player_o *v21; // x0
  CriMana_FrameInfo_o *frameInfo; // x0
  struct CRIMoviePlayer_o *v23; // x8
  CriMana_Player_o *v24; // x8
  int32_t frameNo; // w20
  CriMana_MovieInfo_o *movieInfo; // x0
  const MethodInfo *v27; // x2
  struct CRIMoviePlayer_o *v28; // x22
  int32_t totalFrames; // w21
  UILabel_o *nowTime; // x22
  System_String_o *v31; // x0
  UIProgressBar_o *seekBar; // x0
  UILabel_o *endTime; // x20
  System_String_o *v34; // x0

  status = this->fields.status;
  switch ( status )
  {
    case 3:
      if ( this->fields.isSeeking )
      {
LABEL_10:
        CRIMovieControl__Opened(this, method);
        break;
      }
      panel = this->fields.panel;
      if ( !panel )
        goto LABEL_40;
      v13 = COERCE_FLOAT(
              COERCE_UNSIGNED_INT128(
                ((long double (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))panel->klass->vtable._7_get_alpha.method)(
                  this->fields.panel,
                  panel->klass->vtable._8_set_alpha.methodPtr)));
      deltaTime = UnityEngine_Time__get_deltaTime(0LL);
      ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))panel->klass->vtable._8_set_alpha.method)(
        panel,
        panel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        v13 + (float)(deltaTime * -3.0));
      v15 = this->fields.panel;
      if ( !v15 )
        goto LABEL_40;
      if ( ((float (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))v15->klass->vtable._7_get_alpha.method)(
             v15,
             v15->klass->vtable._8_set_alpha.methodPtr) <= 0.01 )
      {
        v16 = this->fields.panel;
        if ( !v16 )
          goto LABEL_40;
        ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v16->klass->vtable._8_set_alpha.method)(
          v16,
          v16->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          0.0);
        CRIMovieControl__Closed(this, v17);
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
        v11 = dispTime + UnityEngine_Time__get_deltaTime(0LL);
        this->fields.dispTime = v11;
        if ( v11 > 3.0 )
          CRIMovieControl__Close(this, v10);
      }
      break;
    case 1:
      v4 = this->fields.panel;
      if ( !v4 )
        goto LABEL_40;
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
      v7 = this->fields.panel;
      if ( !v7 )
        goto LABEL_40;
      if ( ((float (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer))v7->klass->vtable._7_get_alpha.method)(
             v7,
             v7->klass->vtable._8_set_alpha.methodPtr) >= 0.99 )
      {
        v8 = this->fields.panel;
        if ( !v8 )
          goto LABEL_40;
        ((void (__fastcall *)(struct UIPanel_o *, Il2CppMethodPointer, float))v8->klass->vtable._8_set_alpha.method)(
          v8,
          v8->klass->vtable._9_CalculateFinalAlpha.methodPtr,
          1.0);
        goto LABEL_10;
      }
      break;
  }
  player = this->fields.player;
  if ( !player )
    goto LABEL_40;
  v19 = *(CriMana_Player_o **)&player->fields.renderMode;
  if ( v19 && CriMana_Player__get_frameInfo(v19, 0LL) )
  {
    v20 = this->fields.player;
    if ( v20 )
    {
      v21 = *(CriMana_Player_o **)&v20->fields.renderMode;
      if ( v21 )
      {
        frameInfo = CriMana_Player__get_frameInfo(v21, 0LL);
        if ( frameInfo )
        {
          v23 = this->fields.player;
          if ( v23 )
          {
            v24 = *(CriMana_Player_o **)&v23->fields.renderMode;
            if ( v24 )
            {
              frameNo = frameInfo->fields.frameNo;
              movieInfo = CriMana_Player__get_movieInfo(v24, 0LL);
              if ( movieInfo )
              {
                v28 = this->fields.player;
                if ( v28 )
                {
                  totalFrames = movieInfo->fields.totalFrames;
                  if ( *(_QWORD *)&v28->fields.renderMode
                    && CriMana_Player__get_status(*(CriMana_Player_o **)&v28->fields.renderMode, 0LL) == 5
                    && v28->fields.isCanSkip
                    && !this->fields.isSeeking )
                  {
                    nowTime = this->fields.nowTime;
                    v31 = CRIMovieControl__FrameToTimeString(this, frameNo, v27);
                    if ( !nowTime )
                      goto LABEL_40;
                    UILabel__set_text(nowTime, v31, 0LL);
                    seekBar = (UIProgressBar_o *)this->fields.seekBar;
                    if ( !seekBar )
                      goto LABEL_40;
                    UIProgressBar__set_value(seekBar, (float)frameNo / (float)totalFrames, 0LL);
                  }
                  endTime = this->fields.endTime;
                  v34 = CRIMovieControl__FrameToTimeString(this, totalFrames, v27);
                  if ( endTime )
                  {
                    UILabel__set_text(endTime, v34, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_40:
    sub_B170D4();
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
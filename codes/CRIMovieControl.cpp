void __fastcall CRIMovieControl___ctor(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CRIMovieControl__Awake(CRIMovieControl_o *this, const MethodInfo *method)
{
  UILabel_o *nowTime; // x0
  UnityEngine_Transform_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4BE0385 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_945/*"--:--"*/);
    byte_4BE0385 = 1;
  }
  nowTime = this->fields.nowTime;
  if ( !nowTime )
    goto LABEL_11;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_945/*"--:--"*/, 0LL);
  nowTime = this->fields.endTime;
  if ( !nowTime )
    goto LABEL_11;
  UILabel__set_text(nowTime, (System_String_o *)StringLiteral_945/*"--:--"*/, 0LL);
  nowTime = (UILabel_o *)this->fields.seekBar;
  if ( !nowTime )
    goto LABEL_11;
  UIProgressBar__set_value((UIProgressBar_o *)nowTime, 0.0, 0LL);
  nowTime = (UILabel_o *)this->fields.texture;
  if ( !nowTime )
    goto LABEL_11;
  nowTime = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)nowTime, 0LL);
  v4 = (UnityEngine_Transform_o *)nowTime;
  if ( !byte_4BD6BB6 )
  {
    nowTime = (UILabel_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v4 )
LABEL_11:
    sub_1C22094(nowTime, method);
  UnityEngine_Transform__set_localScale(v4, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  CRIMovieControl__Closed(this, v5);
}


void __fastcall CRIMovieControl__Close(CRIMovieControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *window; // x0
  const MethodInfo *v4; // x2

  window = this->fields.window;
  this->fields.status = 3;
  if ( !window )
    sub_1C22094(0LL, method);
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
    sub_1C22094(window, method);
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
    sub_1C22094(foreground, flag);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)foreground, !flag, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CRIMovieControl__FrameToTimeString(
        CRIMovieControl_o *this,
        int32_t frame,
        const MethodInfo *method)
{
  CRIMovieControl_o *v4; // x20
  struct CRIMoviePlayer_o *player; // x8
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  unsigned __int64 v9; // x22
  Il2CppObject *v10; // x19
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  int v16; // [xsp+8h] [xbp-38h] BYREF
  int v17; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4BE0386 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    this = (CRIMovieControl_o *)sub_1C21E38(&StringLiteral_25518/*"{0}:{1:00}"*/);
    byte_4BE0386 = 1;
  }
  player = v4->fields.player;
  if ( !player
    || (this = (CRIMovieControl_o *)player->fields._player_k__BackingField) == 0LL
    || (this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0LL)) == 0LL )
  {
    sub_1C22094(this, *(_QWORD *)&frame);
  }
  v9 = 1000LL * frame / (unsigned __int64)this->fields.window;
  v17 = (int)v9 / 60;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v6, v7, v8);
  v16 = (int)v9 % 60;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v11, v12, v13);
  return System_String__Format_63129848((System_String_o *)StringLiteral_25518/*"{0}:{1:00}"*/, v10, v14, 0LL);
}


void __fastcall CRIMovieControl__OnClickEndButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField
    && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
    && player->fields.isPlaying
    && !v3->fields.isSeeking )
  {
    this = (CRIMovieControl_o *)v3->fields.player;
    if ( this )
    {
      CRIMoviePlayer__MovieStop((CRIMoviePlayer_o *)this, method);
      goto LABEL_8;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
LABEL_8:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickForwardButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v5; // x2

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField
    && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
    && player->fields.isPlaying
    && !v3->fields.isSeeking )
  {
    this = (CRIMovieControl_o *)v3->fields.player;
    if ( this )
    {
      CRIMoviePlayer__MovieSeekByRelativeTime((CRIMoviePlayer_o *)this, 10, v5);
      goto LABEL_8;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
LABEL_8:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickPauseButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_13;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField
    && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
    && player->fields.isPlaying
    && !v3->fields.isSeeking )
  {
    this = (CRIMovieControl_o *)v3->fields.player;
    if ( this )
    {
      CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)this, 1, 0LL);
      this = (CRIMovieControl_o *)v3->fields.playButton;
      if ( this )
      {
        this = (CRIMovieControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (CRIMovieControl_o *)v3->fields.pauseButton;
          if ( this )
          {
            this = (CRIMovieControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
              goto LABEL_12;
            }
          }
        }
      }
    }
LABEL_13:
    sub_1C22094(this, method);
  }
LABEL_12:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickPlayButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_13;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField
    && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
    && player->fields.isPlaying
    && !v3->fields.isSeeking )
  {
    this = (CRIMovieControl_o *)v3->fields.player;
    if ( this )
    {
      CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)this, 0, 0LL);
      this = (CRIMovieControl_o *)v3->fields.playButton;
      if ( this )
      {
        this = (CRIMovieControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (CRIMovieControl_o *)v3->fields.pauseButton;
          if ( this )
          {
            this = (CRIMovieControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              goto LABEL_12;
            }
          }
        }
      }
    }
LABEL_13:
    sub_1C22094(this, method);
  }
LABEL_12:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickRewindButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v5; // x2

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField
    && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
    && player->fields.isPlaying
    && !v3->fields.isSeeking )
  {
    this = (CRIMovieControl_o *)v3->fields.player;
    if ( this )
    {
      CRIMoviePlayer__MovieSeekByRelativeTime((CRIMoviePlayer_o *)this, -10, v5);
      goto LABEL_8;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
LABEL_8:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickStartButton(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v5; // x2

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField
    && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
    && player->fields.isPlaying
    && !v3->fields.isSeeking )
  {
    this = (CRIMovieControl_o *)v3->fields.player;
    if ( this )
    {
      CRIMoviePlayer__MovieSeekByFrame((CRIMoviePlayer_o *)this, 0, v5);
      goto LABEL_8;
    }
LABEL_9:
    sub_1C22094(this, method);
  }
LABEL_8:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0

  player = this->fields.player;
  if ( !player )
    goto LABEL_9;
  if ( !player->fields._isCanControl_k__BackingField )
  {
    v3 = this;
    player_k__BackingField = player->fields._player_k__BackingField;
    if ( player_k__BackingField )
    {
      if ( CriMana_Player__get_status(player_k__BackingField, 0LL) == 5 && player->fields.isPlaying )
      {
        this = (CRIMovieControl_o *)v3->fields.player;
        if ( this )
        {
          CRIMoviePlayer__MovieStop((CRIMoviePlayer_o *)this, method);
          return;
        }
LABEL_9:
        sub_1C22094(this, method);
      }
    }
  }
}


void __fastcall CRIMovieControl__OnDoubleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x8
  CriMana_Player_o *player_k__BackingField; // x0

  player = this->fields.player;
  if ( !player )
    sub_1C22094(this, method);
  if ( player->fields._isCanControl_k__BackingField )
  {
    player_k__BackingField = player->fields._player_k__BackingField;
    if ( player_k__BackingField )
      CriMana_Player__get_status(player_k__BackingField, 0LL);
  }
}


void __fastcall CRIMovieControl__OnPressDownSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0
  struct UISlider_o *seekBar; // x8
  struct CRIMoviePlayer_o *v6; // x8
  CriManaMovieMaterial_o *v7; // x8

  player = this->fields.player;
  if ( !player )
    goto LABEL_13;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    this = (CRIMovieControl_o *)CriMana_Player__get_status(player_k__BackingField, 0LL);
    if ( (_DWORD)this == 5 && player->fields.isPlaying )
    {
      seekBar = v3->fields.seekBar;
      if ( seekBar )
      {
        this = (CRIMovieControl_o *)seekBar->fields.thumb;
        if ( this )
        {
          this = (CRIMovieControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            v6 = v3->fields.player;
            v3->fields.isSeeking = 1;
            if ( v6 )
            {
              this = (CRIMovieControl_o *)v6->fields._player_k__BackingField;
              if ( this )
              {
                this = (CRIMovieControl_o *)CriMana_Player__IsPaused((CriMana_Player_o *)this, 0LL);
                v7 = (CriManaMovieMaterial_o *)v3->fields.player;
                v3->fields.isPaused = (unsigned __int8)this & 1;
                if ( v7 )
                {
                  CriManaMovieMaterial__Pause(v7, 1, 0LL);
                  goto LABEL_12;
                }
              }
            }
          }
        }
      }
LABEL_13:
      sub_1C22094(this, method);
    }
  }
LABEL_12:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnPressUpSeekBar(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0
  struct UISlider_o *seekBar; // x8
  float value; // s0
  struct CRIMoviePlayer_o *v7; // x8
  float v8; // s8
  const MethodInfo *v9; // x2
  CRIMovieControl_o *v10; // x8
  float v11; // s0
  int32_t v12; // w1

  player = this->fields.player;
  if ( !player )
    goto LABEL_19;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( !player_k__BackingField )
    goto LABEL_18;
  this = (CRIMovieControl_o *)CriMana_Player__get_status(player_k__BackingField, 0LL);
  if ( (_DWORD)this != 5 || !player->fields.isPlaying )
    goto LABEL_18;
  seekBar = v3->fields.seekBar;
  if ( !seekBar )
    goto LABEL_19;
  this = (CRIMovieControl_o *)seekBar->fields.thumb;
  if ( !this )
    goto LABEL_19;
  this = (CRIMovieControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (CRIMovieControl_o *)v3->fields.player;
  v3->fields.isSeeking = 0;
  if ( !this )
    goto LABEL_19;
  CriManaMovieMaterial__Pause((CriManaMovieMaterial_o *)this, v3->fields.isPaused, 0LL);
  this = (CRIMovieControl_o *)v3->fields.seekBar;
  if ( !this
    || (value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL), (v7 = v3->fields.player) == 0LL)
    || (this = (CRIMovieControl_o *)v7->fields._player_k__BackingField) == 0LL
    || (v8 = value, (this = (CRIMovieControl_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL)) == 0LL)
    || (v10 = this, (this = (CRIMovieControl_o *)v3->fields.player) == 0LL) )
  {
LABEL_19:
    sub_1C22094(this, method);
  }
  v11 = v8 * (float)LODWORD(v10->fields.texture);
  if ( v11 == INFINITY )
    v12 = 0x80000000;
  else
    v12 = (int)v11;
  CRIMoviePlayer__MovieSeekByFrame((CRIMoviePlayer_o *)this, v12, v9);
LABEL_18:
  v3->fields.dispTime = 0.0;
}


void __fastcall CRIMovieControl__OnSingleClickTouch(CRIMovieControl_o *this, const MethodInfo *method)
{
  struct CRIMoviePlayer_o *player; // x20
  CriMana_Player_o *player_k__BackingField; // x0
  const MethodInfo *v5; // x1
  int32_t status; // w8

  player = this->fields.player;
  if ( !player )
    sub_1C22094(this, method);
  if ( player->fields._isCanControl_k__BackingField )
  {
    player_k__BackingField = player->fields._player_k__BackingField;
    if ( player_k__BackingField )
    {
      if ( CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
        && player->fields.isPlaying
        && !this->fields.isSeeking )
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
  CRIMovieControl_o *v3; // x19
  CriMana_Player_o *player_k__BackingField; // x0
  float value; // s0
  struct CRIMoviePlayer_o *v6; // x8
  float v7; // s8
  const MethodInfo *v8; // x2
  UILabel_o *nowTime; // x20
  float v10; // s0
  int32_t v11; // w1

  player = this->fields.player;
  if ( !player )
    goto LABEL_16;
  v3 = this;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField
    && CriMana_Player__get_status(player_k__BackingField, 0LL) == 5
    && player->fields.isPlaying
    && v3->fields.isSeeking )
  {
    this = (CRIMovieControl_o *)v3->fields.seekBar;
    if ( this )
    {
      value = UIProgressBar__get_value((UIProgressBar_o *)this, 0LL);
      v6 = v3->fields.player;
      if ( v6 )
      {
        this = (CRIMovieControl_o *)v6->fields._player_k__BackingField;
        if ( this )
        {
          v7 = value;
          this = (CRIMovieControl_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
          if ( this )
          {
            nowTime = v3->fields.nowTime;
            v10 = v7 * (float)LODWORD(this->fields.texture);
            v11 = v10 == INFINITY ? 0x80000000 : (int)v10;
            this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v3, v11, v8);
            if ( nowTime )
            {
              UILabel__set_text(nowTime, (System_String_o *)this, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_16:
    sub_1C22094(this, method);
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
    sub_1C22094(window, method);
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
    sub_1C22094(window, method);
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
  CriMana_Player_o *player_k__BackingField; // x0
  struct CRIMoviePlayer_o *v15; // x8
  struct CRIMoviePlayer_o *v16; // x8
  CriMana_Player_o *v17; // x8
  int32_t m_CachedPtr; // w20
  const MethodInfo *v19; // x2
  struct CRIMoviePlayer_o *v20; // x22
  int32_t texture; // w21
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
        goto LABEL_40;
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
        goto LABEL_40;
      if ( (*(float (__fastcall **)(CRIMovieControl_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
             this,
             this->klass[1]._1.element_class) <= 0.01 )
      {
        this = (CRIMovieControl_o *)v3->fields.panel;
        if ( !this )
          goto LABEL_40;
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
      this = (CRIMovieControl_o *)v3->fields.panel;
      if ( !this )
        goto LABEL_40;
      if ( (*(float (__fastcall **)(CRIMovieControl_o *, Il2CppClass *))&this->klass[1]._1.this_arg.bits)(
             this,
             this->klass[1]._1.element_class) >= 0.99 )
      {
        this = (CRIMovieControl_o *)v3->fields.panel;
        if ( !this )
          goto LABEL_40;
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
    goto LABEL_40;
  player_k__BackingField = player->fields._player_k__BackingField;
  if ( player_k__BackingField )
  {
    this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo(player_k__BackingField, 0LL);
    if ( this )
    {
      v15 = v3->fields.player;
      if ( v15 )
      {
        this = (CRIMovieControl_o *)v15->fields._player_k__BackingField;
        if ( this )
        {
          this = (CRIMovieControl_o *)CriMana_Player__get_frameInfo((CriMana_Player_o *)this, 0LL);
          if ( this )
          {
            v16 = v3->fields.player;
            if ( v16 )
            {
              v17 = v16->fields._player_k__BackingField;
              if ( v17 )
              {
                m_CachedPtr = this->fields.m_CachedPtr;
                this = (CRIMovieControl_o *)CriMana_Player__get_movieInfo(v17, 0LL);
                if ( this )
                {
                  v20 = v3->fields.player;
                  if ( v20 )
                  {
                    texture = (int32_t)this->fields.texture;
                    if ( v20->fields._player_k__BackingField
                      && CriMana_Player__get_status(v20->fields._player_k__BackingField, 0LL) == 5
                      && v20->fields.isPlaying
                      && !v3->fields.isSeeking )
                    {
                      nowTime = v3->fields.nowTime;
                      this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v3, m_CachedPtr, v19);
                      if ( !nowTime )
                        goto LABEL_40;
                      UILabel__set_text(nowTime, (System_String_o *)this, 0LL);
                      this = (CRIMovieControl_o *)v3->fields.seekBar;
                      if ( !this )
                        goto LABEL_40;
                      UIProgressBar__set_value((UIProgressBar_o *)this, (float)m_CachedPtr / (float)texture, 0LL);
                    }
                    endTime = v3->fields.endTime;
                    this = (CRIMovieControl_o *)CRIMovieControl__FrameToTimeString(v3, texture, v19);
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
LABEL_40:
      sub_1C22094(this, method);
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
void BattleMovieParam___ctor(BattleMovieParam_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.FadeOutBgmBeforeMovie = -1;
  this->fields.movieAfterCrossFadeTime = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Nullable_bool__o BattleMovieParam__get_HasMovieCrossFadeSetting(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t movieAfterCrossFadeTime; // w8
  System_Nullable_bool__o *v4; // x0
  System_Nullable_bool__o v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D3051D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_bool___ctor__);
    byte_4D3051D = 1;
  }
  movieAfterCrossFadeTime = this->fields.movieAfterCrossFadeTime;
  v5 = 0;
  if ( movieAfterCrossFadeTime < 0 )
    return 0;
  v4 = &v5;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v4,
    movieAfterCrossFadeTime != 0,
    (const MethodInfo_399C0AC *)Method_System_Nullable_bool___ctor__);
  return v5;
}


System_Nullable_bool__o BattleMovieParam__get_IsFadeOutBgmBeforeMovie(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t FadeOutBgmBeforeMovie; // w8
  System_Nullable_bool__o *v4; // x0
  System_Nullable_bool__o v5; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D3051A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_bool___ctor__);
    byte_4D3051A = 1;
  }
  FadeOutBgmBeforeMovie = this->fields.FadeOutBgmBeforeMovie;
  v5 = 0;
  if ( FadeOutBgmBeforeMovie < 0 )
    return 0;
  v4 = &v5;
  System_Nullable_bool____ctor(
    (System_Nullable_bool__o)v4,
    FadeOutBgmBeforeMovie != 0,
    (const MethodInfo_399C0AC *)Method_System_Nullable_bool___ctor__);
  return v5;
}


System_Nullable_int__o BattleMovieParam__get_MovieAfterCrossFadeStartFrame(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t movieAfterCrossFadeStartFrame; // w1
  System_Nullable_int__o v4; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D3051B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    byte_4D3051B = 1;
  }
  movieAfterCrossFadeStartFrame = this->fields.movieAfterCrossFadeStartFrame;
  v4 = 0;
  if ( movieAfterCrossFadeStartFrame < 0 )
    return 0;
  System_Nullable_int____ctor(
    (System_Nullable_int__o)&v4,
    movieAfterCrossFadeStartFrame,
    (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
  return v4;
}


System_Nullable_int__o BattleMovieParam__get_MovieAfterCrossFadeTime(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t movieAfterCrossFadeTime; // w1
  System_Nullable_int__o v4; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D3051C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_int___ctor__);
    byte_4D3051C = 1;
  }
  movieAfterCrossFadeTime = this->fields.movieAfterCrossFadeTime;
  v4 = 0;
  if ( movieAfterCrossFadeTime < 0 )
    return 0;
  System_Nullable_int____ctor(
    (System_Nullable_int__o)&v4,
    movieAfterCrossFadeTime,
    (const MethodInfo_399F80C *)Method_System_Nullable_int___ctor__);
  return v4;
}
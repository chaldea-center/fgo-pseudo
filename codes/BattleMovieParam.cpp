void BattleMovieParam___ctor(BattleMovieParam_o *this, const MethodInfo *method)
{
  this->fields.movieAfterCrossFadeTime = -1;
  *(_QWORD *)&this->fields.FadeOutBgmBeforeMovie = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Nullable_bool__o BattleMovieParam__get_HasMovieCrossFadeSetting(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t movieAfterCrossFadeTime; // w8
  System_Nullable_bool__o *v4; // x0
  System_Nullable_bool__o v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5938198 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    byte_5938198 = 1;
  }
  movieAfterCrossFadeTime = this->fields.movieAfterCrossFadeTime;
  v6 = 0;
  if ( movieAfterCrossFadeTime < 0 )
  {
    return (System_Nullable_bool__o)0;
  }
  else
  {
    v4 = &v6;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v4,
      movieAfterCrossFadeTime != 0,
      (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
    return v6;
  }
}


System_Nullable_bool__o BattleMovieParam__get_IsFadeOutBgmBeforeMovie(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t FadeOutBgmBeforeMovie; // w8
  System_Nullable_bool__o *v4; // x0
  System_Nullable_bool__o v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5938195 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    byte_5938195 = 1;
  }
  FadeOutBgmBeforeMovie = this->fields.FadeOutBgmBeforeMovie;
  v6 = 0;
  if ( FadeOutBgmBeforeMovie < 0 )
  {
    return (System_Nullable_bool__o)0;
  }
  else
  {
    v4 = &v6;
    System_Nullable_bool____ctor(
      (System_Nullable_bool__o)v4,
      FadeOutBgmBeforeMovie != 0,
      (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
    return v6;
  }
}


System_Nullable_int__o BattleMovieParam__get_MovieAfterCrossFadeStartFrame(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t movieAfterCrossFadeStartFrame; // w1
  System_Nullable_int__o v4; // x0
  System_Nullable_int__o v6; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5938196 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    byte_5938196 = 1;
  }
  movieAfterCrossFadeStartFrame = this->fields.movieAfterCrossFadeStartFrame;
  v6 = 0;
  if ( movieAfterCrossFadeStartFrame < 0 )
  {
    return (System_Nullable_int__o)0LL;
  }
  else
  {
    v4 = (System_Nullable_int__o)&v6;
    System_Nullable_int____ctor(
      v4,
      movieAfterCrossFadeStartFrame,
      (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    return v6;
  }
}


System_Nullable_int__o BattleMovieParam__get_MovieAfterCrossFadeTime(
        BattleMovieParam_o *this,
        const MethodInfo *method)
{
  int32_t movieAfterCrossFadeTime; // w1
  System_Nullable_int__o v4; // x0
  System_Nullable_int__o v6; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_5938197 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_int___ctor__);
    byte_5938197 = 1;
  }
  movieAfterCrossFadeTime = this->fields.movieAfterCrossFadeTime;
  v6 = 0;
  if ( movieAfterCrossFadeTime < 0 )
  {
    return (System_Nullable_int__o)0LL;
  }
  else
  {
    v4 = (System_Nullable_int__o)&v6;
    System_Nullable_int____ctor(
      v4,
      movieAfterCrossFadeTime,
      (const MethodInfo_45B01D4 *)Method_System_Nullable_int___ctor__);
    return v6;
  }
}
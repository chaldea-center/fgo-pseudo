void __fastcall ServantStatusQuestBoardManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  ServantStatusQuestBoardManager_c *v4; // x8

  if ( (byte_42EBEEF & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusQuestBoardManager_TypeInfo, v1, v2, v3);
    byte_42EBEEF = 1;
  }
  ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE = 0.5;
  ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_TIME_INTERVAL = 3.0;
  v4 = ServantStatusQuestBoardManager_TypeInfo;
  ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
  v4->static_fields->ALPHA_FADE_FRAME_NUM = 7;
}


void __fastcall ServantStatusQuestBoardManager___ctor(ServantStatusQuestBoardManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBEEC & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EBEEC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  this->fields.mListCreatedTime = NetworkManager__getTime(0LL);
}


AlphaTransitionCalculator_o *__fastcall ServantStatusQuestBoardManager__CreateAlphaCalculator(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ServantStatusQuestBoardManager_c *v7; // x0
  float v8; // s8
  System_Func_float__float__float__float__o *v9; // x19
  AlphaTransitionCalculator_o *v10; // x20

  if ( (byte_42EBEEE & 1) == 0 )
  {
    sub_B5D5C4(&AlphaTransitionCalculator_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ServantStatusQuestBoardManager_TypeInfo, v4, v5, v6);
    byte_42EBEEE = 1;
  }
  v7 = ServantStatusQuestBoardManager_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
    v7 = ServantStatusQuestBoardManager_TypeInfo;
  }
  v8 = ChangedFPSUtil__CovertFrameNumToSecond(v7->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v10 = (AlphaTransitionCalculator_o *)sub_B5D694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v10, v8, v9, 0LL);
  return v10;
}


int32_t __fastcall ServantStatusQuestBoardManager__GetAlphaAnimCnt(
        ServantStatusQuestBoardManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.mAlphaAnimCnt % length;
}


void __fastcall ServantStatusQuestBoardManager__ResetAlphaAnimTime(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0

  this->fields.mAlphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  this->fields.mAlphaAnimTimeOld = realtimeSinceStartup;
  if ( fadeUIAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
}


bool __fastcall ServantStatusQuestBoardManager__UpdateAlphaAnim(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  System_Int32_array **AlphaCalculator; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v23; // s8
  ServantStatusQuestBoardManager_c *v24; // x0
  float v25; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v27; // w22
  ServantStatusQuestBoardManager_c *v28; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v30; // w22

  if ( (byte_42EBEED & 1) == 0 )
  {
    sub_B5D5C4(&ServantStatusQuestBoardManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TransitionCalculator_float__Update__, v5, v6, v7);
    sub_B5D5C4(&Method_TransitionCalculator_float__get_Current__, v8, v9, v10);
    byte_42EBEED = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = (System_Int32_array **)ServantStatusQuestBoardManager__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = (struct AlphaTransitionCalculator_o *)AlphaCalculator;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fadeUIAlphaCalculator,
      AlphaCalculator,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_29;
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_29;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_264E3D0 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_29;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
    v23 = realtimeSinceStartup;
    v24 = ServantStatusQuestBoardManager_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v24 = ServantStatusQuestBoardManager_TypeInfo;
    }
    if ( (float)(v23 - mAlphaAnimTimeOld) >= v24->static_fields->ALPHA_ANIM_TIME_INTERVAL )
    {
      fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_29;
      AlphaTransitionCalculator__StartFadeOut(fadeUIAlphaCalculator, 0LL);
    }
  }
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_29;
  if ( AlphaTransitionCalculator__IsFadeOutFinished(fadeUIAlphaCalculator, 0LL) )
  {
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_29;
    AlphaTransitionCalculator__StartFadeIn(fadeUIAlphaCalculator, 0LL);
    v25 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
    this->fields.mAlphaAnimTimeOld = v25;
    v27 = mAlphaAnimCnt + 1;
    this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
    v28 = ServantStatusQuestBoardManager_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v28 = ServantStatusQuestBoardManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v28->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v27 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v30 = this->fields.mAlphaAnimCnt;
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        ALPHA_ANIM_COUNT_RESET_VAL = ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.mAlphaAnimCnt = v30 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)(&dword_0 + 1);
  }
  else
  {
    fadeUIAlphaCalculator = 0LL;
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_29:
    sub_B5D69C(fadeUIAlphaCalculator, v20);
  this->fields.mAlphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  return (char)fadeUIAlphaCalculator;
}


float __fastcall ServantStatusQuestBoardManager__get_AlphaAnimNow(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mAlphaAnimNow;
}


int64_t __fastcall ServantStatusQuestBoardManager__get_ListCreatedTime(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mListCreatedTime;
}
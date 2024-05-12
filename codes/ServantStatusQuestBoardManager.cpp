void __fastcall ServantStatusQuestBoardManager___cctor(const MethodInfo *method)
{
  ServantStatusQuestBoardManager_c *v1; // x8

  if ( (byte_438DC9D & 1) == 0 )
  {
    sub_B775C4(&ServantStatusQuestBoardManager_TypeInfo);
    byte_438DC9D = 1;
  }
  ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE = 0.5;
  ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_TIME_INTERVAL = 3.0;
  v1 = ServantStatusQuestBoardManager_TypeInfo;
  ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 232792560;
  v1->static_fields->ALPHA_FADE_FRAME_NUM = 7;
}


void __fastcall ServantStatusQuestBoardManager___ctor(ServantStatusQuestBoardManager_o *this, const MethodInfo *method)
{
  if ( (byte_438DC9A & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438DC9A = 1;
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
  ServantStatusQuestBoardManager_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_438DC9C & 1) == 0 )
  {
    sub_B775C4(&AlphaTransitionCalculator_TypeInfo);
    sub_B775C4(&ServantStatusQuestBoardManager_TypeInfo);
    byte_438DC9C = 1;
  }
  v2 = ServantStatusQuestBoardManager_TypeInfo;
  if ( (BYTE3(ServantStatusQuestBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
    v2 = ServantStatusQuestBoardManager_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v5 = (AlphaTransitionCalculator_o *)sub_B77694(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0LL);
  return v5;
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
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  System_Int32_array **AlphaCalculator; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x1
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v15; // s8
  ServantStatusQuestBoardManager_c *v16; // x0
  float v17; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v19; // w22
  ServantStatusQuestBoardManager_c *v20; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v22; // w22

  if ( (byte_438DC9B & 1) == 0 )
  {
    sub_B775C4(&ServantStatusQuestBoardManager_TypeInfo);
    sub_B775C4(&Method_TransitionCalculator_float__Update__);
    sub_B775C4(&Method_TransitionCalculator_float__get_Current__);
    byte_438DC9B = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = (System_Int32_array **)ServantStatusQuestBoardManager__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = (struct AlphaTransitionCalculator_o *)AlphaCalculator;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.fadeUIAlphaCalculator,
      AlphaCalculator,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
    (const MethodInfo_2A1A8DC *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_29;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
    v15 = realtimeSinceStartup;
    v16 = ServantStatusQuestBoardManager_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v16 = ServantStatusQuestBoardManager_TypeInfo;
    }
    if ( (float)(v15 - mAlphaAnimTimeOld) >= v16->static_fields->ALPHA_ANIM_TIME_INTERVAL )
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
    v17 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
    this->fields.mAlphaAnimTimeOld = v17;
    v19 = mAlphaAnimCnt + 1;
    this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
    v20 = ServantStatusQuestBoardManager_TypeInfo;
    if ( (BYTE3(ServantStatusQuestBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v20 = ServantStatusQuestBoardManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v20->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v19 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v22 = this->fields.mAlphaAnimCnt;
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        ALPHA_ANIM_COUNT_RESET_VAL = ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.mAlphaAnimCnt = v22 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)(&dword_0 + 1);
  }
  else
  {
    fadeUIAlphaCalculator = 0LL;
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_29:
    sub_B7769C(fadeUIAlphaCalculator, v12);
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
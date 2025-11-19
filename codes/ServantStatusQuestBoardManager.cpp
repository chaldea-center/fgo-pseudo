void ServantStatusQuestBoardManager___cctor(const MethodInfo *method)
{
  struct ServantStatusQuestBoardManager_StaticFields *static_fields; // x8

  if ( (byte_4CB3976 & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4CB3976 = 1;
  }
  static_fields = ServantStatusQuestBoardManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x70DE021F0LL;
}


void ServantStatusQuestBoardManager___ctor(ServantStatusQuestBoardManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CB3973 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3973 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.mListCreatedTime = NetworkManager__getTime(0);
}


AlphaTransitionCalculator_o *ServantStatusQuestBoardManager__CreateAlphaCalculator(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  ServantStatusQuestBoardManager_c *v2; // x0
  float v3; // s8
  System_Func_float__float__float__float__o *v4; // x19
  AlphaTransitionCalculator_o *v5; // x20

  if ( (byte_4CB3975 & 1) == 0 )
  {
    sub_1C6BA08(&AlphaTransitionCalculator_TypeInfo);
    sub_1C6BA08(&ServantStatusQuestBoardManager_TypeInfo);
    byte_4CB3975 = 1;
  }
  v2 = ServantStatusQuestBoardManager_TypeInfo;
  if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
    v2 = ServantStatusQuestBoardManager_TypeInfo;
  }
  v3 = ChangedFPSUtil__CovertFrameNumToSecond(v2->static_fields->ALPHA_FADE_FRAME_NUM, 0);
  v4 = ExtraEasing__AsymptoticSeriesFloat(
         ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0);
  v5 = (AlphaTransitionCalculator_o *)sub_1C6BC54(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v5, v3, v4, 0);
  return v5;
}


int32_t ServantStatusQuestBoardManager__GetAlphaAnimCnt(
        ServantStatusQuestBoardManager_o *this,
        int32_t length,
        const MethodInfo *method)
{
  return this->fields.mAlphaAnimCnt % length;
}


void ServantStatusQuestBoardManager__ResetAlphaAnimTime(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  float realtimeSinceStartup; // s0
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0

  this->fields.mAlphaAnimNow = 1.0;
  realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  this->fields.mAlphaAnimTimeOld = realtimeSinceStartup;
  if ( fadeUIAlphaCalculator )
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0);
}


bool ServantStatusQuestBoardManager__UpdateAlphaAnim(ServantStatusQuestBoardManager_o *this, const MethodInfo *method)
{
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v11; // s8
  ServantStatusQuestBoardManager_c *v12; // x0
  float v13; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v15; // w22
  ServantStatusQuestBoardManager_c *v16; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v18; // w22

  if ( (byte_4CB3974 & 1) == 0 )
  {
    sub_1C6BA08(&ServantStatusQuestBoardManager_TypeInfo);
    sub_1C6BA08(&Method_TransitionCalculator_float__Update__);
    sub_1C6BA08(&Method_TransitionCalculator_float__get_Current__);
    byte_4CB3974 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = ServantStatusQuestBoardManager__CreateAlphaCalculator(0, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.fadeUIAlphaCalculator, (int32_t)AlphaCalculator, v6, v7);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_26;
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_26;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_3AF12A0 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_26;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
    v11 = realtimeSinceStartup;
    v12 = ServantStatusQuestBoardManager_TypeInfo;
    if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v12 = ServantStatusQuestBoardManager_TypeInfo;
    }
    if ( (float)(v11 - mAlphaAnimTimeOld) >= v12->static_fields->ALPHA_ANIM_TIME_INTERVAL )
    {
      fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_26;
      AlphaTransitionCalculator__StartFadeOut(fadeUIAlphaCalculator, 0);
    }
  }
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_26;
  if ( AlphaTransitionCalculator__IsFadeOutFinished(fadeUIAlphaCalculator, 0) )
  {
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_26;
    AlphaTransitionCalculator__StartFadeIn(fadeUIAlphaCalculator, 0);
    v13 = UnityEngine_Time__get_realtimeSinceStartup(0);
    mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
    this->fields.mAlphaAnimTimeOld = v13;
    v15 = mAlphaAnimCnt + 1;
    this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
    v16 = ServantStatusQuestBoardManager_TypeInfo;
    if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v16 = ServantStatusQuestBoardManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v16->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v15 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v18 = this->fields.mAlphaAnimCnt;
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        ALPHA_ANIM_COUNT_RESET_VAL = ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.mAlphaAnimCnt = v18 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)(&dword_0 + 1);
  }
  else
  {
    fadeUIAlphaCalculator = 0;
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_26:
    sub_1C6BC60(fadeUIAlphaCalculator, v8);
  this->fields.mAlphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  return (char)fadeUIAlphaCalculator;
}


float ServantStatusQuestBoardManager__get_AlphaAnimNow(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mAlphaAnimNow;
}


int64_t ServantStatusQuestBoardManager__get_ListCreatedTime(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  return this->fields.mListCreatedTime;
}
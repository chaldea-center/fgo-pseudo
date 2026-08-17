void ServantStatusQuestBoardManager___cctor(const MethodInfo *method)
{
  struct ServantStatusQuestBoardManager_StaticFields *static_fields; // x8

  if ( (byte_596DFAE & 1) == 0 )
  {
    sub_2213A60(&ServantStatusQuestBoardManager_TypeInfo);
    byte_596DFAE = 1;
  }
  static_fields = ServantStatusQuestBoardManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x70DE021F0LL;
}


void ServantStatusQuestBoardManager___ctor(ServantStatusQuestBoardManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_596DFAB & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596DFAB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3, v4);
  this->fields.mListCreatedTime = NetworkManager__getTime(0);
}


AlphaTransitionCalculator_o *ServantStatusQuestBoardManager__CreateAlphaCalculator(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusQuestBoardManager_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  AlphaTransitionCalculator_o *v6; // x20

  if ( (byte_596DFAD & 1) == 0 )
  {
    sub_2213A60(&AlphaTransitionCalculator_TypeInfo);
    sub_2213A60(&ServantStatusQuestBoardManager_TypeInfo);
    byte_596DFAD = 1;
  }
  v3 = ServantStatusQuestBoardManager_TypeInfo;
  if ( !*(&ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo, method, v2);
    v3 = ServantStatusQuestBoardManager_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_FADE_FRAME_NUM, 0);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0);
  v6 = (AlphaTransitionCalculator_o *)sub_2213CCC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0);
  return v6;
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  float realtimeSinceStartup; // s8
  float mAlphaAnimTimeOld; // s9
  ServantStatusQuestBoardManager_c *v16; // x0
  char v17; // w21
  __int64 v18; // x2
  float v19; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v21; // w23
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v23; // w23
  bool result; // w0

  if ( (byte_596DFAC & 1) == 0 )
  {
    sub_2213A60(&ServantStatusQuestBoardManager_TypeInfo);
    sub_2213A60(&Method_TransitionCalculator_float__Update__);
    sub_2213A60(&Method_TransitionCalculator_float__get_Current__);
    byte_596DFAC = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = ServantStatusQuestBoardManager__CreateAlphaCalculator(0, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.fadeUIAlphaCalculator,
      (int32_t)AlphaCalculator,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_24;
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_24;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_3BE940C *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_24;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0);
    mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
    v16 = ServantStatusQuestBoardManager_TypeInfo;
    if ( !*(&ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo, v12, v13);
      v16 = ServantStatusQuestBoardManager_TypeInfo;
    }
    if ( (float)(realtimeSinceStartup - mAlphaAnimTimeOld) >= v16->static_fields->ALPHA_ANIM_TIME_INTERVAL )
    {
      fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_24;
      AlphaTransitionCalculator__StartFadeOut(fadeUIAlphaCalculator, 0);
    }
  }
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_24;
  fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(
                                                           fadeUIAlphaCalculator,
                                                           0);
  v17 = (char)fadeUIAlphaCalculator;
  if ( ((unsigned __int8)fadeUIAlphaCalculator & 1) != 0 )
  {
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_24;
    AlphaTransitionCalculator__StartFadeIn(fadeUIAlphaCalculator, 0);
    v19 = UnityEngine_Time__get_realtimeSinceStartup(0);
    mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
    this->fields.mAlphaAnimTimeOld = v19;
    fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)ServantStatusQuestBoardManager_TypeInfo;
    v21 = mAlphaAnimCnt + 1;
    this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
    if ( !HIDWORD(fadeUIAlphaCalculator[4].klass) )
    {
      j_il2cpp_runtime_class_init_0(fadeUIAlphaCalculator, v12, v18);
      fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)ServantStatusQuestBoardManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = *(_DWORD *)(*(_QWORD *)&fadeUIAlphaCalculator[3].fields.from + 8LL);
    if ( v21 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v23 = this->fields.mAlphaAnimCnt;
      if ( !HIDWORD(fadeUIAlphaCalculator[4].klass) )
      {
        j_il2cpp_runtime_class_init_0(fadeUIAlphaCalculator, v12, v18);
        ALPHA_ANIM_COUNT_RESET_VAL = ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.mAlphaAnimCnt = v23 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_24:
    sub_2213CDC(fadeUIAlphaCalculator, v12);
  result = v17 & 1;
  this->fields.mAlphaAnimNow = (*p_fadeUIAlphaCalculator)->fields._Current_k__BackingField;
  return result;
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
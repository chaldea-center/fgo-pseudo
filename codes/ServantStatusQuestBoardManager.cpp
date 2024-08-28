void __fastcall ServantStatusQuestBoardManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusQuestBoardManager_StaticFields *static_fields; // x8

  if ( (byte_4A063DE & 1) == 0 )
  {
    sub_1B686D4(&ServantStatusQuestBoardManager_TypeInfo, v1);
    byte_4A063DE = 1;
  }
  static_fields = ServantStatusQuestBoardManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x70DE021F0LL;
}


void __fastcall ServantStatusQuestBoardManager___ctor(ServantStatusQuestBoardManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A063DB & 1) == 0 )
  {
    sub_1B686D4(&NetworkManager_TypeInfo, method);
    byte_4A063DB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this->fields.mListCreatedTime = NetworkManager__getTime(0LL);
}


AlphaTransitionCalculator_o *__fastcall ServantStatusQuestBoardManager__CreateAlphaCalculator(
        ServantStatusQuestBoardManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  ServantStatusQuestBoardManager_c *v3; // x0
  float v4; // s8
  System_Func_float__float__float__float__o *v5; // x19
  AlphaTransitionCalculator_o *v6; // x20

  if ( (byte_4A063DD & 1) == 0 )
  {
    sub_1B686D4(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1B686D4(&ServantStatusQuestBoardManager_TypeInfo, v2);
    byte_4A063DD = 1;
  }
  v3 = ServantStatusQuestBoardManager_TypeInfo;
  if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
    v3 = ServantStatusQuestBoardManager_TypeInfo;
  }
  v4 = ChangedFPSUtil__CovertFrameNumToSecond(v3->static_fields->ALPHA_FADE_FRAME_NUM, 0LL);
  v5 = ExtraEasing__AsymptoticSeriesFloat(
         ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_SPD_RATE,
         (float)ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_FADE_FRAME_NUM,
         0LL);
  v6 = (AlphaTransitionCalculator_o *)sub_1B68920(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v6, v4, v5, 0LL);
  return v6;
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
  __int64 v3; // x1
  __int64 v4; // x1
  AlphaTransitionCalculator_o *fadeUIAlphaCalculator; // x0
  struct AlphaTransitionCalculator_o **p_fadeUIAlphaCalculator; // x20
  AlphaTransitionCalculator_o *AlphaCalculator; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v13; // s8
  ServantStatusQuestBoardManager_c *v14; // x0
  float v15; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v17; // w22
  ServantStatusQuestBoardManager_c *v18; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v20; // w22

  if ( (byte_4A063DC & 1) == 0 )
  {
    sub_1B686D4(&ServantStatusQuestBoardManager_TypeInfo, method);
    sub_1B686D4(&Method_TransitionCalculator_float__Update__, v3);
    sub_1B686D4(&Method_TransitionCalculator_float__get_Current__, v4);
    byte_4A063DC = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = ServantStatusQuestBoardManager__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1B68678(
      (ServantStatusBattleListViewItem_o *)&this->fields.fadeUIAlphaCalculator,
      (int32_t)AlphaCalculator,
      v8,
      v9);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_26;
    AlphaTransitionCalculator__MakeFadeInFinished(fadeUIAlphaCalculator, 0LL);
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_26;
  }
  TransitionCalculator_float___Update(
    (TransitionCalculator_float__o *)fadeUIAlphaCalculator,
    (const MethodInfo_3777700 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_26;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
    v13 = realtimeSinceStartup;
    v14 = ServantStatusQuestBoardManager_TypeInfo;
    if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v14 = ServantStatusQuestBoardManager_TypeInfo;
    }
    if ( (float)(v13 - mAlphaAnimTimeOld) >= v14->static_fields->ALPHA_ANIM_TIME_INTERVAL )
    {
      fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
      if ( !*p_fadeUIAlphaCalculator )
        goto LABEL_26;
      AlphaTransitionCalculator__StartFadeOut(fadeUIAlphaCalculator, 0LL);
    }
  }
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_26;
  if ( AlphaTransitionCalculator__IsFadeOutFinished(fadeUIAlphaCalculator, 0LL) )
  {
    fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
    if ( !*p_fadeUIAlphaCalculator )
      goto LABEL_26;
    AlphaTransitionCalculator__StartFadeIn(fadeUIAlphaCalculator, 0LL);
    v15 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
    this->fields.mAlphaAnimTimeOld = v15;
    v17 = mAlphaAnimCnt + 1;
    this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
    v18 = ServantStatusQuestBoardManager_TypeInfo;
    if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v18 = ServantStatusQuestBoardManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v18->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v17 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v20 = this->fields.mAlphaAnimCnt;
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        ALPHA_ANIM_COUNT_RESET_VAL = ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.mAlphaAnimCnt = v20 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)(&dword_0 + 1);
  }
  else
  {
    fadeUIAlphaCalculator = 0LL;
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_26:
    sub_1B68930(fadeUIAlphaCalculator, v10);
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
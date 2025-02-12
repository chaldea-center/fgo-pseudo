void __fastcall ServantStatusQuestBoardManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct ServantStatusQuestBoardManager_StaticFields *static_fields; // x8

  if ( (byte_4BC5535 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantStatusQuestBoardManager_TypeInfo, v1);
    byte_4BC5535 = 1;
  }
  static_fields = ServantStatusQuestBoardManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->ALPHA_ANIM_SPD_RATE = 0x404000003F000000LL;
  *(_QWORD *)&static_fields->ALPHA_ANIM_COUNT_RESET_VAL = 0x70DE021F0LL;
}


void __fastcall ServantStatusQuestBoardManager___ctor(ServantStatusQuestBoardManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BC5532 & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    byte_4BC5532 = 1;
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

  if ( (byte_4BC5534 & 1) == 0 )
  {
    sub_1C1ABD4(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1C1ABD4(&ServantStatusQuestBoardManager_TypeInfo, v2);
    byte_4BC5534 = 1;
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
  v6 = (AlphaTransitionCalculator_o *)sub_1C1AE20(AlphaTransitionCalculator_TypeInfo);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  float realtimeSinceStartup; // s0
  float mAlphaAnimTimeOld; // s9
  float v17; // s8
  ServantStatusQuestBoardManager_c *v18; // x0
  float v19; // s0
  int32_t mAlphaAnimCnt; // w8
  int32_t v21; // w22
  ServantStatusQuestBoardManager_c *v22; // x0
  int32_t ALPHA_ANIM_COUNT_RESET_VAL; // w8
  int32_t v24; // w22

  if ( (byte_4BC5533 & 1) == 0 )
  {
    sub_1C1ABD4(&ServantStatusQuestBoardManager_TypeInfo, method);
    sub_1C1ABD4(&Method_TransitionCalculator_float__Update__, v3);
    sub_1C1ABD4(&Method_TransitionCalculator_float__get_Current__, v4);
    byte_4BC5533 = 1;
  }
  p_fadeUIAlphaCalculator = &this->fields.fadeUIAlphaCalculator;
  fadeUIAlphaCalculator = this->fields.fadeUIAlphaCalculator;
  if ( !fadeUIAlphaCalculator )
  {
    AlphaCalculator = ServantStatusQuestBoardManager__CreateAlphaCalculator(0LL, method);
    *p_fadeUIAlphaCalculator = AlphaCalculator;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&this->fields.fadeUIAlphaCalculator,
      (int64_t)AlphaCalculator,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    (const MethodInfo_38FC8A8 *)Method_TransitionCalculator_float__Update__);
  fadeUIAlphaCalculator = *p_fadeUIAlphaCalculator;
  if ( !*p_fadeUIAlphaCalculator )
    goto LABEL_26;
  if ( AlphaTransitionCalculator__IsFadeInFinished(fadeUIAlphaCalculator, 0LL) )
  {
    realtimeSinceStartup = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimTimeOld = this->fields.mAlphaAnimTimeOld;
    v17 = realtimeSinceStartup;
    v18 = ServantStatusQuestBoardManager_TypeInfo;
    if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v18 = ServantStatusQuestBoardManager_TypeInfo;
    }
    if ( (float)(v17 - mAlphaAnimTimeOld) >= v18->static_fields->ALPHA_ANIM_TIME_INTERVAL )
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
    v19 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
    mAlphaAnimCnt = this->fields.mAlphaAnimCnt;
    this->fields.mAlphaAnimTimeOld = v19;
    v21 = mAlphaAnimCnt + 1;
    this->fields.mAlphaAnimCnt = mAlphaAnimCnt + 1;
    v22 = ServantStatusQuestBoardManager_TypeInfo;
    if ( !ServantStatusQuestBoardManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantStatusQuestBoardManager_TypeInfo);
      v22 = ServantStatusQuestBoardManager_TypeInfo;
    }
    ALPHA_ANIM_COUNT_RESET_VAL = v22->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
    if ( v21 >= ALPHA_ANIM_COUNT_RESET_VAL )
    {
      v24 = this->fields.mAlphaAnimCnt;
      if ( !v22->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v22);
        ALPHA_ANIM_COUNT_RESET_VAL = ServantStatusQuestBoardManager_TypeInfo->static_fields->ALPHA_ANIM_COUNT_RESET_VAL;
      }
      this->fields.mAlphaAnimCnt = v24 - ALPHA_ANIM_COUNT_RESET_VAL;
    }
    fadeUIAlphaCalculator = (AlphaTransitionCalculator_o *)(&dword_0 + 1);
  }
  else
  {
    fadeUIAlphaCalculator = 0LL;
  }
  if ( !*p_fadeUIAlphaCalculator )
LABEL_26:
    sub_1C1AE30(fadeUIAlphaCalculator, v14);
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
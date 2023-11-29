void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_40F6B00 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40F6B00 = 1;
  }
  this->fields.nextStepTime = 1.5;
  v3 = StringLiteral_1;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(&this->fields.baseAnimationName, v3);
  this->fields.maxPhase = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct SimpleAnimation_o *Component_WebViewObject; // x0
  struct UnityEngine_Animation_o *v6; // x0
  WebViewObject_o *v7; // x1

  if ( (byte_40F6AFB & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v3);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    byte_40F6AFB = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = Component_WebViewObject;
  sub_B16F98(&this->fields.simpleAnim, Component_WebViewObject);
  v6 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = v6;
  sub_B16F98(&this->fields.anim, v6);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v7;
  sub_B16F98(&this->fields.commonEff, v7);
}


void __fastcall BattleParamComponent__PlayStartEffect(
        BattleParamComponent_o *this,
        int32_t start,
        int32_t end,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v6; // x1

  v6 = BattleParamComponent__playingEffect(this, start, end, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *voicePath; // x0
  System_String_o *v5; // x19

  if ( (byte_40F6AFD & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_1, v3);
    byte_40F6AFD = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_B16F98(&this->fields.simpleAnim, 0LL);
  this->fields.anim = 0LL;
  sub_B16F98(&this->fields.anim, 0LL);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1, 0LL) )
  {
    v5 = this->fields.voicePath;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v5, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  struct CommonEffectComponent_o *v6; // x8

  if ( (byte_40F6AFF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flg);
    byte_40F6AFF = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(commonEff, 0LL, 0LL) )
  {
    v6 = this->fields.commonEff;
    if ( !v6 )
      sub_B170D4();
    *(&v6->fields.isStart + 5) = flg;
  }
}


void __fastcall BattleParamComponent__SetInfo(
        BattleParamComponent_o *this,
        System_Int32_array *animationIds,
        int32_t voiceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v12; // x0
  struct System_String_o *v13; // x0
  System_String_o *voicePath; // x20
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F6AFC & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, animationIds);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_23549, v10);
    byte_40F6AFC = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_B16F98(&this->fields.animationIds, animationIds);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_B170D4();
    System_Action__Invoke(callback, 0LL);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v15 = voiceId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    v13 = System_String__Format_43739268((System_String_o *)StringLiteral_23549, voiceDataStr, v12, 0LL);
    this->fields.voicePath = v13;
    sub_B16F98(&this->fields.voicePath, v13);
    voicePath = this->fields.voicePath;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voicePath, callback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleParamComponent__playingEffect(
        BattleParamComponent_o *this,
        int32_t start,
        int32_t end,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleParamComponent__playingEffect_d__17_o *v9; // x23

  if ( (byte_40F6AFE & 1) == 0 )
  {
    sub_B16FFC(&BattleParamComponent__playingEffect_d__17_TypeInfo, *(_QWORD *)&start);
    byte_40F6AFE = 1;
  }
  v9 = (BattleParamComponent__playingEffect_d__17_o *)sub_B170CC(
                                                        BattleParamComponent__playingEffect_d__17_TypeInfo,
                                                        *(_QWORD *)&start,
                                                        *(_QWORD *)&end,
                                                        callback,
                                                        method);
  BattleParamComponent__playingEffect_d__17___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  v9->fields.__4__this = this;
  sub_B16F98(&v9->fields.__4__this, this);
  v9->fields.start = start;
  v9->fields.end = end;
  v9->fields.callback = callback;
  sub_B16F98(&v9->fields.callback, callback);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleParamComponent__playingEffect_d__17___ctor(
        BattleParamComponent__playingEffect_d__17_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleParamComponent__playingEffect_d__17__MoveNext(
        BattleParamComponent__playingEffect_d__17_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  BattleParamComponent__playingEffect_d__17_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  struct System_Int32_array *animationIds; // x8
  __int64 v15; // x9
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  SimpleAnimation_o *v22; // x0
  SimpleAnimation_o *v23; // x0
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  System_Action_o *callback; // x0
  UnityEngine_Object_o *anim; // x21
  UnityEngine_Animation_o *v32; // x0
  UnityEngine_Animation_o *v33; // x0
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleServantConfConponent_o *v39; // x19
  int v41; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v42; // [xsp+18h] [xbp-28h] BYREF
  int v43; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_40F9DE3 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_23563, v5);
    this = (BattleParamComponent__playingEffect_d__17_o *)sub_B16FFC(&StringLiteral_23557, v6);
    byte_40F9DE3 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_35;
    goto LABEL_44;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_26;
    goto LABEL_44;
  }
  if ( _1__state )
    goto LABEL_41;
  v3->fields.__1__state = -1;
  if ( !_4__this )
LABEL_44:
    sub_B170D4();
  for ( i = v3->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    _4__this->fields.currentPhase = i;
    if ( i > v3->fields.end )
      break;
    switchPhase = _4__this->fields.switchPhase;
    if ( !switchPhase )
      goto LABEL_44;
    switchIndex = _4__this->fields.switchIndex;
    max_length = switchPhase->max_length;
    if ( (int)switchIndex >= max_length )
      goto LABEL_19;
    if ( (unsigned int)switchIndex >= max_length )
      goto LABEL_45;
    if ( i == switchPhase->m_Items[switchIndex + 1] )
    {
      baseAnimationName = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v43 = i;
      this = (BattleParamComponent__playingEffect_d__17_o *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_44;
      v15 = _4__this->fields.switchIndex;
      if ( (unsigned int)v15 >= animationIds->max_length )
      {
LABEL_45:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v16 = (Il2CppObject *)this;
      v42 = animationIds->m_Items[v15 + 1];
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
      v18 = System_String__Format_43744796((System_String_o *)StringLiteral_23563, baseAnimationName, v16, v17, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v19 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v41 = i;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      v18 = System_String__Format_43739268((System_String_o *)StringLiteral_23557, v19, v20, 0LL);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0LL, 0LL) )
    {
      v22 = _4__this->fields.simpleAnim;
      if ( !v22 )
        goto LABEL_44;
      SimpleAnimation__Play_16380456(v22, v18, 0LL);
LABEL_26:
      v23 = _4__this->fields.simpleAnim;
      if ( !v23 )
        goto LABEL_44;
      this = (BattleParamComponent__playingEffect_d__17_o *)SimpleAnimation__get_isPlaying(v23, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B16F98(p__2__current, 0LL, v2, v24, v25, v26, v27, v28);
        LOBYTE(callback) = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return (char)callback;
      }
    }
    else
    {
      anim = (UnityEngine_Object_o *)_4__this->fields.anim;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleParamComponent__playingEffect_d__17_o *)UnityEngine_Object__op_Inequality(anim, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = _4__this->fields.anim;
        if ( !v32 )
          goto LABEL_44;
        UnityEngine_Animation__Play_49744236(v32, v18, 0LL);
LABEL_35:
        v33 = _4__this->fields.anim;
        if ( !v33 )
          goto LABEL_44;
        this = (BattleParamComponent__playingEffect_d__17_o *)UnityEngine_Animation__get_isPlaying(v33, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v3->fields.__2__current = 0LL;
          v39 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
          sub_B16F98(v39, 0LL, v2, v34, v35, v36, v37, v38);
          *(_DWORD *)&v39[-1].fields.isOpenAfter = 2;
          LOBYTE(callback) = 1;
          return (char)callback;
        }
      }
    }
  }
  callback = v3->fields.callback;
  if ( !callback )
    return (char)callback;
  System_Action__Invoke(callback, 0LL);
LABEL_41:
  LOBYTE(callback) = 0;
  return (char)callback;
}


Il2CppObject *__fastcall BattleParamComponent__playingEffect_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleParamComponent__playingEffect_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleParamComponent__playingEffect_d__17__System_Collections_IEnumerator_Reset(
        BattleParamComponent__playingEffect_d__17_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleParamComponent__playingEffect_d__17_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleParamComponent__playingEffect_d__17__System_Collections_IEnumerator_get_Current(
        BattleParamComponent__playingEffect_d__17_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleParamComponent__playingEffect_d__17__System_IDisposable_Dispose(
        BattleParamComponent__playingEffect_d__17_o *this,
        const MethodInfo *method)
{
  ;
}
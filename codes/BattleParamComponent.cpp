void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  if ( (byte_434E170 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E170 = 1;
  }
  this->fields.nextStepTime = 1.5;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.baseAnimationName);
  this->fields.maxPhase = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  if ( (byte_434E16B & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_434E16B = 1;
  }
  this->fields.simpleAnim = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  sub_B70630(&this->fields.simpleAnim);
  this->fields.anim = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  sub_B70630(&this->fields.anim);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  this->fields.commonEff = (struct CommonEffectComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  sub_B70630(&this->fields.commonEff);
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
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  System_String_o *voicePath; // x0
  System_String_o *v4; // x19

  if ( (byte_434E16D & 1) == 0 )
  {
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434E16D = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_B70630(&this->fields.simpleAnim);
  this->fields.anim = 0LL;
  sub_B70630(&this->fields.anim);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v4 = this->fields.voicePath;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v4, 0LL);
  }
}


void __fastcall BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_434E16F & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E16F = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.commonEff;
    if ( !v8 )
      sub_B7076C(v6, v7);
    v8->fields.isEndless = flg;
  }
}


void __fastcall BattleParamComponent__SetInfo(
        BattleParamComponent_o *this,
        System_Int32_array *animationIds,
        int32_t voiceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v13; // x0
  System_String_o *voicePath; // x20
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434E16C & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_24027/*"{0}_{1}"*/);
    byte_434E16C = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  v9 = sub_B70630(&this->fields.animationIds);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_B7076C(v9, v10);
    System_Action__Invoke(callback, 0LL);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v15 = voiceId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v11);
    this->fields.voicePath = System_String__Format_44753704(
                               (System_String_o *)StringLiteral_24027/*"{0}_{1}"*/,
                               voiceDataStr,
                               v13,
                               0LL);
    sub_B70630(&this->fields.voicePath);
    voicePath = this->fields.voicePath;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__loadAudioAssetStorage(voicePath, callback, 1, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleParamComponent__playingEffect(
        BattleParamComponent_o *this,
        int32_t start,
        int32_t end,
        System_Action_o *callback,
        const MethodInfo *method)
{
  BattleParamComponent__playingEffect_d__17_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_434E16E & 1) == 0 )
  {
    sub_B70694(&BattleParamComponent__playingEffect_d__17_TypeInfo);
    byte_434E16E = 1;
  }
  v9 = (BattleParamComponent__playingEffect_d__17_o *)sub_B70764(BattleParamComponent__playingEffect_d__17_TypeInfo);
  BattleParamComponent__playingEffect_d__17___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  v9->fields.__4__this = this;
  sub_B70630(&v9->fields.__4__this);
  v9->fields.start = start;
  v9->fields.end = end;
  v9->fields.callback = callback;
  sub_B70630(&v9->fields.callback);
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
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  __int64 v11; // x2
  struct System_Int32_array *animationIds; // x8
  __int64 v13; // x9
  Il2CppObject *v14; // x21
  Il2CppObject *v15; // x0
  System_String_o *v16; // x20
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  System_Action_o *callback; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattleServantConfConponent_o *v33; // x19
  __int64 v34; // x0
  int v36; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v37; // [xsp+18h] [xbp-28h] BYREF
  int v38; // [xsp+1Ch] [xbp-24h] BYREF

  v3 = this;
  if ( (byte_4351435 & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_24041/*"{0}{1}_{2}"*/);
    this = (BattleParamComponent__playingEffect_d__17_o *)sub_B70694(&StringLiteral_24035/*"{0}{1}"*/);
    byte_4351435 = 1;
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
    sub_B7076C(this, method);
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
      v38 = i;
      this = (BattleParamComponent__playingEffect_d__17_o *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v2);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_44;
      v13 = _4__this->fields.switchIndex;
      if ( (unsigned int)v13 >= animationIds->max_length )
      {
LABEL_45:
        v34 = sub_B70798(this);
        sub_B70738(v34, 0LL);
      }
      v14 = (Il2CppObject *)this;
      v37 = animationIds->m_Items[v13 + 1];
      v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v37, v11);
      v16 = System_String__Format_44759232((System_String_o *)StringLiteral_24041/*"{0}{1}_{2}"*/, baseAnimationName, v14, v15, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v17 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v36 = i;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v2);
      v16 = System_String__Format_44753704((System_String_o *)StringLiteral_24035/*"{0}{1}"*/, v17, v18, 0LL);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0LL, 0LL) )
    {
      this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_44;
      SimpleAnimation__Play_16672920((SimpleAnimation_o *)this, v16, 0LL);
LABEL_26:
      this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_44;
      this = (BattleParamComponent__playingEffect_d__17_o *)SimpleAnimation__get_isPlaying(
                                                              (SimpleAnimation_o *)this,
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
        sub_B70630(p__2__current, 0LL, v2, v20, v21, v22, v23, v24);
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
        this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_44;
        UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)this, v16, 0LL);
LABEL_35:
        this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_44;
        this = (BattleParamComponent__playingEffect_d__17_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v3->fields.__2__current = 0LL;
          v33 = (BattleServantConfConponent_o *)&v3->fields.__2__current;
          sub_B70630(v33, 0LL, v2, v28, v29, v30, v31, v32);
          *(_DWORD *)&v33[-1].fields.isOpenAfter = 2;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BattleParamComponent__playingEffect_d__17_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
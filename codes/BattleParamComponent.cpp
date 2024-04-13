void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E508D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E508D = 1;
  }
  this->fields.nextStepTime = 1.5;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.baseAnimationName);
  this->fields.maxPhase = 1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3

  if ( (byte_42E5088 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Animation___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v8, v9, v10);
    byte_42E5088 = 1;
  }
  this->fields.simpleAnim = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  sub_B5D560(&this->fields.simpleAnim);
  this->fields.anim = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  sub_B5D560(&this->fields.anim);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  this->fields.commonEff = (struct CommonEffectComponent_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  sub_B5D560(&this->fields.commonEff);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *voicePath; // x0
  System_String_o *v9; // x19

  if ( (byte_42E508A & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E508A = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_B5D560(&this->fields.simpleAnim);
  this->fields.anim = 0LL;
  sub_B5D560(&this->fields.anim);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v9 = this->fields.voicePath;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(v9, 0LL);
  }
}


void __fastcall BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  struct CommonEffectComponent_o *v9; // x8

  if ( (byte_42E508C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, flg, (_DWORD)method, v3);
    byte_42E508C = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(commonEff, 0LL, 0LL);
  if ( v7 )
  {
    v9 = this->fields.commonEff;
    if ( !v9 )
      sub_B5D69C(v7, v8);
    v9->fields.isEndless = flg;
  }
}


void __fastcall BattleParamComponent__SetInfo(
        BattleParamComponent_o *this,
        System_Int32_array *animationIds,
        int32_t voiceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v18; // x0
  System_String_o *voicePath; // x20
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E5089 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)animationIds, voiceId, callback);
    sub_B5D5C4(&SoundManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23955/*"{0}_{1}"*/, v12, v13, v14);
    byte_42E5089 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_B5D560(&this->fields.animationIds);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_B5D69C(v15, v16);
    System_Action__Invoke(callback, 0LL);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v20 = voiceId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    this->fields.voicePath = System_String__Format_44573324(
                               (System_String_o *)StringLiteral_23955/*"{0}_{1}"*/,
                               voiceDataStr,
                               v18,
                               0LL);
    sub_B5D560(&this->fields.voicePath);
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

  if ( (byte_42E508B & 1) == 0 )
  {
    sub_B5D5C4(&BattleParamComponent__playingEffect_d__17_TypeInfo, start, end, callback);
    byte_42E508B = 1;
  }
  v9 = (BattleParamComponent__playingEffect_d__17_o *)sub_B5D694(BattleParamComponent__playingEffect_d__17_TypeInfo);
  BattleParamComponent__playingEffect_d__17___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  v9->fields.__4__this = this;
  sub_B5D560(&v9->fields.__4__this);
  v9->fields.start = start;
  v9->fields.end = end;
  v9->fields.callback = callback;
  sub_B5D560(&v9->fields.callback);
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
  int v2; // w2
  __int64 v3; // x3
  BattleParamComponent__playingEffect_d__17_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  struct System_Int32_array *animationIds; // x8
  __int64 v22; // x9
  Il2CppObject *v23; // x21
  Il2CppObject *v24; // x0
  System_String_o *v25; // x20
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  System_Action_o *callback; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleServantConfConponent_o *v44; // x19
  __int64 v45; // x0
  int v47; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v48; // [xsp+18h] [xbp-28h] BYREF
  int v49; // [xsp+1Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E7CC3 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23969/*"{0}{1}_{2}"*/, v8, v9, v10);
    this = (BattleParamComponent__playingEffect_d__17_o *)sub_B5D5C4(&StringLiteral_23963/*"{0}{1}"*/, v11, v12, v13);
    byte_42E7CC3 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_35;
    goto LABEL_44;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_26;
    goto LABEL_44;
  }
  if ( _1__state )
    goto LABEL_41;
  v4->fields.__1__state = -1;
  if ( !_4__this )
LABEL_44:
    sub_B5D69C(this, method);
  for ( i = v4->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    _4__this->fields.currentPhase = i;
    if ( i > v4->fields.end )
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
      v49 = i;
      this = (BattleParamComponent__playingEffect_d__17_o *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_44;
      v22 = _4__this->fields.switchIndex;
      if ( (unsigned int)v22 >= animationIds->max_length )
      {
LABEL_45:
        v45 = sub_B5D6C8(this);
        sub_B5D668(v45, 0LL);
      }
      v23 = (Il2CppObject *)this;
      v48 = animationIds->m_Items[v22 + 1];
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48);
      v25 = System_String__Format_44578852((System_String_o *)StringLiteral_23969/*"{0}{1}_{2}"*/, baseAnimationName, v23, v24, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v26 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v47 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47);
      v25 = System_String__Format_44573324((System_String_o *)StringLiteral_23963/*"{0}{1}"*/, v26, v27, 0LL);
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
      SimpleAnimation__Play_16676044((SimpleAnimation_o *)this, v25, 0LL);
LABEL_26:
      this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_44;
      this = (BattleParamComponent__playingEffect_d__17_o *)SimpleAnimation__get_isPlaying(
                                                              (SimpleAnimation_o *)this,
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, 0LL, v29, v30, v31, v32, v33, v34);
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
        UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)this, v25, 0LL);
LABEL_35:
        this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_44;
        this = (BattleParamComponent__playingEffect_d__17_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v4->fields.__2__current = 0LL;
          v44 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
          sub_B5D560(v44, 0LL, v38, v39, v40, v41, v42, v43);
          *(_DWORD *)&v44[-1].fields.isOpenAfter = 2;
          LOBYTE(callback) = 1;
          return (char)callback;
        }
      }
    }
  }
  callback = v4->fields.callback;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleParamComponent__playingEffect_d__17_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
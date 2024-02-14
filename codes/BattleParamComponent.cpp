void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  void *v3; // x1

  if ( (byte_42111AB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1/*""*/, method);
    byte_42111AB = 1;
  }
  this->fields.nextStepTime = 1.5;
  v3 = StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.baseAnimationName, v3);
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

  if ( (byte_42111A6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v3);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    byte_42111A6 = 1;
  }
  Component_WebViewObject = (struct SimpleAnimation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)this,
                                                          (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = Component_WebViewObject;
  sub_B0D840(&this->fields.simpleAnim, Component_WebViewObject);
  v6 = (struct UnityEngine_Animation_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                           (UnityEngine_Component_o *)this,
                                           (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = v6;
  sub_B0D840(&this->fields.anim, v6);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v7;
  sub_B0D840(&this->fields.commonEff, v7);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *voicePath; // x0
  System_String_o *v5; // x19

  if ( (byte_42111A8 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_1/*""*/, v3);
    byte_42111A8 = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_B0D840(&this->fields.simpleAnim, 0LL);
  this->fields.anim = 0LL;
  sub_B0D840(&this->fields.anim, 0LL);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
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
  _BOOL8 v6; // x0
  struct CommonEffectComponent_o *v7; // x8

  if ( (byte_42111AA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, flg);
    byte_42111AA = 1;
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
    v7 = this->fields.commonEff;
    if ( !v7 )
      sub_B0D97C(v6);
    v7->fields.isEndless = flg;
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
  __int64 v11; // x0
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v13; // x0
  struct System_String_o *v14; // x0
  System_String_o *voicePath; // x20
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42111A7 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, animationIds);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_23721/*"{0}_{1}"*/, v10);
    byte_42111A7 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_B0D840(&this->fields.animationIds, animationIds);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_B0D97C(v11);
    System_Action__Invoke(callback, 0LL);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v16 = voiceId;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v14 = System_String__Format_43845440((System_String_o *)StringLiteral_23721/*"{0}_{1}"*/, voiceDataStr, v13, 0LL);
    this->fields.voicePath = v14;
    sub_B0D840(&this->fields.voicePath, v14);
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
  __int64 v10; // x0

  if ( (byte_42111A9 & 1) == 0 )
  {
    sub_B0D8A4(&BattleParamComponent__playingEffect_d__17_TypeInfo, *(_QWORD *)&start);
    byte_42111A9 = 1;
  }
  v9 = (BattleParamComponent__playingEffect_d__17_o *)sub_B0D974(
                                                        BattleParamComponent__playingEffect_d__17_TypeInfo,
                                                        *(_QWORD *)&start,
                                                        *(_QWORD *)&end);
  BattleParamComponent__playingEffect_d__17___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.__4__this = this;
  sub_B0D840(&v9->fields.__4__this, this);
  v9->fields.start = start;
  v9->fields.end = end;
  v9->fields.callback = callback;
  sub_B0D840(&v9->fields.callback, callback);
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
  BattleParamComponent__playingEffect_d__17_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  struct System_Int32_array *animationIds; // x8
  __int64 v14; // x9
  Il2CppObject *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x20
  Il2CppObject *v18; // x20
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  BattleServantConfConponent_o *p__2__current; // x19
  System_Action_o *callback; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BattleServantConfConponent_o *v36; // x19
  __int64 v37; // x0
  int v39; // [xsp+Ch] [xbp-34h] BYREF
  int32_t v40; // [xsp+18h] [xbp-28h] BYREF
  int v41; // [xsp+1Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4213BEE & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&StringLiteral_23735/*"{0}{1}_{2}"*/, v4);
    this = (BattleParamComponent__playingEffect_d__17_o *)sub_B0D8A4(&StringLiteral_23729/*"{0}{1}"*/, v5);
    byte_4213BEE = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_35;
    goto LABEL_44;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_26;
    goto LABEL_44;
  }
  if ( _1__state )
    goto LABEL_41;
  v2->fields.__1__state = -1;
  if ( !_4__this )
LABEL_44:
    sub_B0D97C(this);
  for ( i = v2->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    _4__this->fields.currentPhase = i;
    if ( i > v2->fields.end )
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
      v41 = i;
      this = (BattleParamComponent__playingEffect_d__17_o *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_44;
      v14 = _4__this->fields.switchIndex;
      if ( (unsigned int)v14 >= animationIds->max_length )
      {
LABEL_45:
        v37 = sub_B0D9A8(this);
        sub_B0D948(v37, 0LL);
      }
      v15 = (Il2CppObject *)this;
      v40 = animationIds->m_Items[v14 + 1];
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      v17 = System_String__Format_43850968((System_String_o *)StringLiteral_23735/*"{0}{1}_{2}"*/, baseAnimationName, v15, v16, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v18 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v39 = i;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      v17 = System_String__Format_43845440((System_String_o *)StringLiteral_23729/*"{0}{1}"*/, v18, v19, 0LL);
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
      SimpleAnimation__Play_50482404((SimpleAnimation_o *)this, v17, 0LL);
LABEL_26:
      this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_44;
      this = (BattleParamComponent__playingEffect_d__17_o *)SimpleAnimation__get_isPlaying(
                                                              (SimpleAnimation_o *)this,
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B0D840(p__2__current, 0LL, v21, v22, v23, v24, v25, v26);
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
        UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)this, v17, 0LL);
LABEL_35:
        this = (BattleParamComponent__playingEffect_d__17_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_44;
        this = (BattleParamComponent__playingEffect_d__17_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v2->fields.__2__current = 0LL;
          v36 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B0D840(v36, 0LL, v30, v31, v32, v33, v34, v35);
          *(_DWORD *)&v36[-1].fields.isOpenAfter = 2;
          LOBYTE(callback) = 1;
          return (char)callback;
        }
      }
    }
  }
  callback = v2->fields.callback;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleParamComponent__playingEffect_d__17_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
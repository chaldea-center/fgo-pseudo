void BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v9; // x1

  if ( (byte_593B387 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B387 = 1;
  }
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.endtime = 1.5;
  this->fields.baseAnimationName = v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseAnimationName, (int32_t)v9, v2, v3, v4, v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo_37ED7E0 *v17; // x1
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593B382 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_593B382 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnim,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.anim, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___;
  *(_QWORD *)&this->fields.currentPhase = 1;
  v18 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)this, v17);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.commonEff, (int32_t)v18, v19, v20, v21, v22, v23, v24);
}


void BattleParamComponent__PlayStartEffect(
        BattleParamComponent_o *this,
        int32_t start,
        int32_t end,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v6; // x1

  v6 = BattleParamComponent__playingEffect(this, start, end, callback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


void BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *voicePath; // x0
  __int64 v16; // x1
  System_String_o *v17; // x19

  if ( (byte_593B384 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593B384 = 1;
  }
  this->fields.simpleAnim = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.simpleAnim, 0, v2, v3, v4, v5, v6, v7);
  this->fields.anim = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.anim, 0, v9, v10, v11, v12, v13, v14);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v17 = this->fields.voicePath;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v16);
    SoundManager__releaseAudioAssetStorage(v17, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_593B386 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B386 = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.commonEff;
    if ( !v8 )
      sub_21FFECC(v6, v7);
    v8->fields.isEndless = flg;
  }
}


void BattleParamComponent__SetInfo(
        BattleParamComponent_o *this,
        System_Int32_array *animationIds,
        int32_t voiceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v18; // x0
  struct System_String_o *v19; // x0
  struct System_String_o **p_voicePath; // x20
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  System_String_o *v28; // x20
  int32_t v29; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593B383 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    byte_593B383 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animationIds,
    (int32_t)animationIds,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_21FFECC(v15, v16);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v29 = voiceId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v29);
    v19 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, voiceDataStr, v18, 0);
    this->fields.voicePath = v19;
    p_voicePath = &this->fields.voicePath;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_voicePath, (int32_t)v19, v21, v22, v23, v24, v25, v26);
    v28 = *p_voicePath;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v27);
    SoundManager__loadAudioAssetStorage(v28, callback, 1, 0);
  }
}


System_Collections_IEnumerator_o *BattleParamComponent__playingEffect(
        BattleParamComponent_o *this,
        int32_t start,
        int32_t end,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7

  if ( (byte_593B385 & 1) == 0 )
  {
    sub_21FFC50(&BattleParamComponent__playingEffect_d__16_TypeInfo);
    byte_593B385 = 1;
  }
  v9 = sub_21FFEBC(BattleParamComponent__playingEffect_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)callback, v16, v17, v18, v19, v20, v21);
  return (System_Collections_IEnumerator_o *)v9;
}


void BattleParamComponent__playingEffect_d__16___ctor(
        BattleParamComponent__playingEffect_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleParamComponent__playingEffect_d__16__MoveNext(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  BattleParamComponent__playingEffect_d__16_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x25
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  struct System_Int32_array *animationIds; // x8
  __int64 v11; // x9
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x20
  Il2CppObject *v16; // x20
  Il2CppObject *v17; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t end; // w9
  struct System_Action_o *callback; // x8
  MissionNaviTransitionBoardItem_o *v36; // x19
  int v37; // [xsp+Ch] [xbp-54h] BYREF
  int32_t v38; // [xsp+18h] [xbp-48h] BYREF
  int v39; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_593B388 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26559/*"{0}{1}_{2}"*/);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_21FFC50(&StringLiteral_26556/*"{0}{1}"*/);
    byte_593B388 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_33;
    goto LABEL_41;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_25;
    goto LABEL_41;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
LABEL_41:
    sub_21FFECC(this, method);
  for ( i = v2->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    end = v2->fields.end;
    _4__this->fields.currentPhase = i;
    if ( i > end )
      break;
    switchPhase = _4__this->fields.switchPhase;
    if ( !switchPhase )
      goto LABEL_41;
    switchIndex = _4__this->fields.switchIndex;
    max_length = switchPhase->max_length;
    if ( (int)switchIndex >= max_length )
      goto LABEL_19;
    if ( (unsigned int)switchIndex >= max_length )
      goto LABEL_42;
    if ( i == switchPhase->m_Items[switchIndex] )
    {
      baseAnimationName = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v39 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(qword_594C070, &v39);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v11 = _4__this->fields.switchIndex;
      if ( (unsigned int)v11 >= LODWORD(animationIds->max_length) )
LABEL_42:
        sub_21FFED4(this);
      v12 = (Il2CppObject *)this;
      v38 = animationIds->m_Items[v11];
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v38);
      v15 = System_String__Format_75484644((System_String_o *)StringLiteral_26559/*"{0}{1}_{2}"*/, baseAnimationName, v12, v13, 0);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v16 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v37 = i;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v37);
      v15 = System_String__Format_75484576((System_String_o *)StringLiteral_26556/*"{0}{1}"*/, v16, v17, 0);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0, 0) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_78338864((SimpleAnimation_o *)this, v15, 0);
LABEL_25:
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      this = (BattleParamComponent__playingEffect_d__16_o *)SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_21FFBF4(p__2__current, 0, v19, v20, v21, v22, v23, v24);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
    }
    else
    {
      anim = (UnityEngine_Object_o *)_4__this->fields.anim;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Object__op_Inequality(anim, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)this, v15, 0);
LABEL_33:
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v2->fields.__2__current = 0;
          v36 = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
          sub_21FFBF4(v36, 0, v28, v29, v30, v31, v32, v33);
          result = 1;
          v36[-1].fields._BoardType_k__BackingField = 2;
          return result;
        }
      }
    }
  }
  callback = v2->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  return 0;
}


Il2CppObject *BattleParamComponent__playingEffect_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleParamComponent__playingEffect_d__16__System_Collections_IEnumerator_Reset(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *BattleParamComponent__playingEffect_d__16__System_Collections_IEnumerator_get_Current(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleParamComponent__playingEffect_d__16__System_IDisposable_Dispose(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  ;
}
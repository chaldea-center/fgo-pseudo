void BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4C3A501 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A501 = 1;
  }
  this->fields.endtime = 1.5;
  v5 = StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.baseAnimationName, v5, v2, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3A4FC & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_4C3A4FC = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.simpleAnim, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v6;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.anim, (int32_t)v6, v7, v8);
  *(_QWORD *)&this->fields.currentPhase = 1;
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.commonEff, (int32_t)v9, v10, v11);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


void BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *voicePath; // x0
  System_String_o *v8; // x19

  if ( (byte_4C3A4FE & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A4FE = 1;
  }
  this->fields.simpleAnim = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.simpleAnim, 0, v2, v3);
  this->fields.anim = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.anim, 0, v5, v6);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v8 = this->fields.voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v8, 0);
  }
}


void BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v6; // x0
  struct CommonEffectComponent_o *v7; // x8

  if ( (byte_4C3A500 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A500 = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0, 0);
  if ( v6 )
  {
    v7 = this->fields.commonEff;
    if ( !v7 )
      sub_1C32E7C(v6);
    v7->fields.isEndless = flg;
  }
}


void BattleParamComponent__SetInfo(
        BattleParamComponent_o *this,
        System_Int32_array *animationIds,
        int32_t voiceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v19; // x0
  struct System_String_o *v20; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x20
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3A4FD & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25192/*"{0}_{1}"*/);
    byte_4C3A4FD = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationIds, (int32_t)animationIds, v9, v10);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_1C32E7C(v11);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v25 = voiceId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14, v15, v16, v17);
    v20 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, voiceDataStr, v19, 0);
    this->fields.voicePath = v20;
    p_voicePath = &this->fields.voicePath;
    sub_1C32BC4((CGThumbnailListItem_o *)p_voicePath, (int32_t)v20, v22, v23);
    v24 = *p_voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v24, callback, 1, 0);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3A4FF & 1) == 0 )
  {
    sub_1C32C20(&BattleParamComponent__playingEffect_d__16_TypeInfo);
    byte_4C3A4FF = 1;
  }
  v9 = sub_1C32E6C(BattleParamComponent__playingEffect_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
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
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  BattleParamComponent__playingEffect_d__16_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  struct System_Int32_array *animationIds; // x8
  __int64 v23; // x9
  Il2CppObject *v24; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x20
  Il2CppObject *v27; // x20
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  struct System_Action_o *callback; // x8
  CGThumbnailListItem_o *v34; // x19
  int v35; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v36; // [xsp+8h] [xbp-38h] BYREF
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  v8 = this;
  if ( (byte_4C3A502 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25205/*"{0}{1}_{2}"*/);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_1C32C20(&StringLiteral_25203/*"{0}{1}"*/);
    byte_4C3A502 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_33;
    goto LABEL_41;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_25;
    goto LABEL_41;
  }
  if ( _1__state )
    return 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
LABEL_41:
    sub_1C32E7C(this);
  for ( i = v8->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    _4__this->fields.currentPhase = i;
    if ( i > v8->fields.end )
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
      v37 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(
                                                              int_TypeInfo,
                                                              &v37,
                                                              v2,
                                                              v3,
                                                              v4,
                                                              v5,
                                                              v6,
                                                              v7);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v23 = _4__this->fields.switchIndex;
      if ( (unsigned int)v23 >= LODWORD(animationIds->max_length) )
LABEL_42:
        sub_1C32E84(this);
      v24 = (Il2CppObject *)this;
      v36 = animationIds->m_Items[v23];
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36, v16, v17, v18, v19, v20, v21);
      v26 = System_String__Format_63559904((System_String_o *)StringLiteral_25205/*"{0}{1}_{2}"*/, baseAnimationName, v24, v25, 0);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v27 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v35 = i;
      v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v2, v3, v4, v5, v6, v7);
      v26 = System_String__Format_63559836((System_String_o *)StringLiteral_25203/*"{0}{1}"*/, v27, v28, 0);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0, 0) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_66464300((SimpleAnimation_o *)this, v26, 0);
LABEL_25:
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      this = (BattleParamComponent__playingEffect_d__16_o *)SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v8->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v8->fields.__2__current;
        sub_1C32BC4(p__2__current, 0, v2, v3);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
    }
    else
    {
      anim = (UnityEngine_Object_o *)_4__this->fields.anim;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Object__op_Inequality(anim, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)this, v26, 0);
LABEL_33:
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v8->fields.__2__current = 0;
          v34 = (CGThumbnailListItem_o *)&v8->fields.__2__current;
          sub_1C32BC4(v34, 0, v2, v3);
          LODWORD(v34[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
          return 1;
        }
      }
    }
  }
  callback = v8->fields.callback;
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
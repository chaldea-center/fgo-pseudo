void BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB8E9C & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB8E9C = 1;
  }
  this->fields.endtime = 1.5;
  v5 = StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.baseAnimationName, v5, v2, v3);
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

  if ( (byte_4CB8E97 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_4CB8E97 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.simpleAnim, (int32_t)Component_object, v4, v5);
  v6 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.anim, (int32_t)v6, v7, v8);
  *(_QWORD *)&this->fields.currentPhase = 1;
  v9 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.commonEff, (int32_t)v9, v10, v11);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


void BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_String_o *voicePath; // x0
  System_String_o *v8; // x19

  if ( (byte_4CB8E99 & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB8E99 = 1;
  }
  this->fields.simpleAnim = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.simpleAnim, 0, v2, v3);
  this->fields.anim = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.anim, 0, v5, v6);
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
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_4CB8E9B & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB8E9B = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.commonEff;
    if ( !v8 )
      sub_1C6BC60(v6, v7);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  __int64 v12; // x1
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v14; // x0
  struct System_String_o *v15; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_String_o *v19; // x20
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB8E98 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_25307/*"{0}_{1}"*/);
    byte_4CB8E98 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.animationIds, (int32_t)animationIds, v9, v10);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_1C6BC60(v11, v12);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v20 = voiceId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    v15 = System_String__Format_64008100((System_String_o *)StringLiteral_25307/*"{0}_{1}"*/, voiceDataStr, v14, 0);
    this->fields.voicePath = v15;
    p_voicePath = &this->fields.voicePath;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_voicePath, (int32_t)v15, v17, v18);
    v19 = *p_voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v19, callback, 1, 0);
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

  if ( (byte_4CB8E9A & 1) == 0 )
  {
    sub_1C6BA08(&BattleParamComponent__playingEffect_d__16_TypeInfo);
    byte_4CB8E9A = 1;
  }
  v9 = sub_1C6BC54(BattleParamComponent__playingEffect_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
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
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  struct System_Int32_array *animationIds; // x8
  __int64 v11; // x9
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  Il2CppObject *v15; // x20
  Il2CppObject *v16; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Action_o *callback; // x8
  CGThumbnailListItem_o *v26; // x19
  int v27; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v28; // [xsp+8h] [xbp-38h] BYREF
  int v29; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4CB8E9D & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_25320/*"{0}{1}_{2}"*/);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_1C6BA08(&StringLiteral_25318/*"{0}{1}"*/);
    byte_4CB8E9D = 1;
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
    sub_1C6BC60(this, method);
  for ( i = v2->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    _4__this->fields.currentPhase = i;
    if ( i > v2->fields.end )
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
      v29 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v11 = _4__this->fields.switchIndex;
      if ( (unsigned int)v11 >= LODWORD(animationIds->max_length) )
LABEL_42:
        sub_1C6BC68(this);
      v12 = (Il2CppObject *)this;
      v28 = animationIds->m_Items[v11];
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
      v14 = System_String__Format_64008168((System_String_o *)StringLiteral_25320/*"{0}{1}_{2}"*/, baseAnimationName, v12, v13, 0);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v15 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v27 = i;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v14 = System_String__Format_64008100((System_String_o *)StringLiteral_25318/*"{0}{1}"*/, v15, v16, 0);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0, 0) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_66911856((SimpleAnimation_o *)this, v14, 0);
LABEL_25:
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      this = (BattleParamComponent__playingEffect_d__16_o *)SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C6B9AC(p__2__current, 0, v18, v19);
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
        UnityEngine_Animation__Play_71403152((UnityEngine_Animation_o *)this, v14, 0);
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
          v26 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C6B9AC(v26, 0, v23, v24);
          LODWORD(v26[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
          return 1;
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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
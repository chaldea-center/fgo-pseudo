void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B473B4 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_1/*""*/, method);
    byte_4B473B4 = 1;
  }
  this->fields.endtime = 1.5;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.baseAnimationName, v5, v2, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B473AF & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v3);
    sub_1BDB878(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    byte_4B473AF = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.simpleAnim, (int32_t)Component_object, v6, v7);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.anim, (int32_t)v8, v9, v10);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.commonEff, (int32_t)v11, v12, v13);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *voicePath; // x0
  System_String_o *v9; // x19

  if ( (byte_4B473B1 & 1) == 0 )
  {
    sub_1BDB878(&SoundManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v5);
    byte_4B473B1 = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.simpleAnim, 0, v2, v3);
  this->fields.anim = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.anim, 0, v6, v7);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v9 = this->fields.voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v9, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_4B473B3 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, flg);
    byte_4B473B3 = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.commonEff;
    if ( !v8 )
      sub_1BDBAD4(v6, v7);
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
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v19; // x0
  struct System_String_o *v20; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *v24; // x20
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B473B0 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, animationIds);
    sub_1BDB878(&SoundManager_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_25286/*"{0}_{1}"*/, v10);
    byte_4B473B0 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.animationIds, (int32_t)animationIds, v11, v12);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_1BDBAD4(v13, v14);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v25 = voiceId;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v15, v16, v17);
    v20 = System_String__Format_62613552((System_String_o *)StringLiteral_25286/*"{0}_{1}"*/, voiceDataStr, v19, 0LL);
    this->fields.voicePath = v20;
    p_voicePath = &this->fields.voicePath;
    sub_1BDB81C((CGThumbnailListItem_o *)p_voicePath, (int32_t)v20, v22, v23);
    v24 = *p_voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v24, callback, 1, 0LL);
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
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B473B2 & 1) == 0 )
  {
    sub_1BDB878(&BattleParamComponent__playingEffect_d__16_TypeInfo, *(_QWORD *)&start);
    byte_4B473B2 = 1;
  }
  v9 = sub_1BDBAC4(BattleParamComponent__playingEffect_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleParamComponent__playingEffect_d__16___ctor(
        BattleParamComponent__playingEffect_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleParamComponent__playingEffect_d__16__MoveNext(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v4; // x4
  BattleParamComponent__playingEffect_d__16_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Int32_array *animationIds; // x8
  __int64 v19; // x9
  Il2CppObject *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x20
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  struct System_Action_o *callback; // x8
  CGThumbnailListItem_o *v30; // x19
  int v31; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v32; // [xsp+8h] [xbp-38h] BYREF
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_4B473B5 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_25299/*"{0}{1}_{2}"*/, v7);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_1BDB878(&StringLiteral_25296/*"{0}{1}"*/, v8);
    byte_4B473B5 = 1;
  }
  _1__state = v5->fields.__1__state;
  _4__this = v5->fields.__4__this;
  if ( _1__state == 2 )
  {
    v5->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_33;
    goto LABEL_41;
  }
  if ( _1__state == 1 )
  {
    v5->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_25;
    goto LABEL_41;
  }
  if ( _1__state )
    return 0;
  v5->fields.__1__state = -1;
  if ( !_4__this )
LABEL_41:
    sub_1BDBAD4(this, method);
  for ( i = v5->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    _4__this->fields.currentPhase = i;
    if ( i > v5->fields.end )
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
    if ( i == switchPhase->m_Items[switchIndex + 1] )
    {
      baseAnimationName = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v33 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v2, v3, v4);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v19 = _4__this->fields.switchIndex;
      if ( (unsigned int)v19 >= animationIds->max_length )
LABEL_42:
        sub_1BDBADC(this, method, v2);
      v20 = (Il2CppObject *)this;
      v32 = animationIds->m_Items[v19 + 1];
      v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v2, v16, v17);
      v22 = System_String__Format_62613620((System_String_o *)StringLiteral_25299/*"{0}{1}_{2}"*/, baseAnimationName, v20, v21, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v23 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v31 = i;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v2, v3, v4);
      v22 = System_String__Format_62613552((System_String_o *)StringLiteral_25296/*"{0}{1}"*/, v23, v24, 0LL);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0LL, 0LL) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_65523240((SimpleAnimation_o *)this, v22, 0LL);
LABEL_25:
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      this = (BattleParamComponent__playingEffect_d__16_o *)SimpleAnimation__get_isPlaying(
                                                              (SimpleAnimation_o *)this,
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v5->fields.__2__current = 0LL;
        p__2__current = (CGThumbnailListItem_o *)&v5->fields.__2__current;
        sub_1BDB81C(p__2__current, 0, v2, v3);
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
      this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Object__op_Inequality(anim, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        UnityEngine_Animation__Play_70027660((UnityEngine_Animation_o *)this, v22, 0LL);
LABEL_33:
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v5->fields.__2__current = 0LL;
          v30 = (CGThumbnailListItem_o *)&v5->fields.__2__current;
          sub_1BDB81C(v30, 0, v2, v3);
          LODWORD(v30[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
          return 1;
        }
      }
    }
  }
  callback = v5->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  return 0;
}


Il2CppObject *__fastcall BattleParamComponent__playingEffect_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleParamComponent__playingEffect_d__16__System_Collections_IEnumerator_Reset(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall BattleParamComponent__playingEffect_d__16__System_Collections_IEnumerator_get_Current(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleParamComponent__playingEffect_d__16__System_IDisposable_Dispose(
        BattleParamComponent__playingEffect_d__16_o *this,
        const MethodInfo *method)
{
  ;
}
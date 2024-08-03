void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_49FEA08 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, method);
    byte_49FEA08 = 1;
  }
  this->fields.endtime = 1.5;
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseAnimationName, v5, v2, v3);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FEA03 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v3);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    byte_49FEA03 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnim, (int32_t)Component_object, v6, v7);
  v8 = UnityEngine_Component__GetComponent_object_(
         (UnityEngine_Component_o *)this,
         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.anim, (int32_t)v8, v9, v10);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  v11 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v11;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.commonEff, (int32_t)v11, v12, v13);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *voicePath; // x0
  System_String_o *v9; // x19

  if ( (byte_49FEA05 & 1) == 0 )
  {
    sub_1B640C8(&SoundManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    byte_49FEA05 = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.simpleAnim, 0, v2, v3);
  this->fields.anim = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.anim, 0, v6, v7);
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
  struct CommonEffectComponent_o *v7; // x8

  if ( (byte_49FEA07 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, flg);
    byte_49FEA07 = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0LL, 0LL);
  if ( v6 )
  {
    v7 = this->fields.commonEff;
    if ( !v7 )
      sub_1B64324(v6);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x0
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v15; // x0
  struct System_String_o *v16; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x20
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FEA04 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, animationIds);
    sub_1B640C8(&SoundManager_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_24997/*"{0}_{1}"*/, v10);
    byte_49FEA04 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animationIds, (int32_t)animationIds, v11, v12);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_1B64324(v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v21 = voiceId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v16 = System_String__Format_61389768((System_String_o *)StringLiteral_24997/*"{0}_{1}"*/, voiceDataStr, v15, 0LL);
    this->fields.voicePath = v16;
    p_voicePath = &this->fields.voicePath;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_voicePath, (int32_t)v16, v18, v19);
    v20 = *p_voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v20, callback, 1, 0LL);
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
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FEA06 & 1) == 0 )
  {
    sub_1B640C8(&BattleParamComponent__playingEffect_d__16_TypeInfo, *(_QWORD *)&start);
    byte_49FEA06 = 1;
  }
  v9 = sub_1B64314(BattleParamComponent__playingEffect_d__16_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&end);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 48), (int32_t)callback, v12, v13);
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
  BattleParamComponent__playingEffect_d__16_o *v2; // x19
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
  int32_t v21; // w2
  int32_t v22; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Action_o *callback; // x8
  ServantStatusBattleListViewItem_o *v29; // x19
  int v30; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v31; // [xsp+8h] [xbp-38h] BYREF
  int v32; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_49FEA09 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_25009/*"{0}{1}_{2}"*/, v4);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_1B640C8(&StringLiteral_25005/*"{0}{1}"*/, v5);
    byte_49FEA09 = 1;
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
    sub_1B64324(this);
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
    if ( i == switchPhase->m_Items[switchIndex + 1] )
    {
      baseAnimationName = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v32 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v14 = _4__this->fields.switchIndex;
      if ( (unsigned int)v14 >= animationIds->max_length )
LABEL_42:
        sub_1B6432C(this, method);
      v15 = (Il2CppObject *)this;
      v31 = animationIds->m_Items[v14 + 1];
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
      v17 = System_String__Format_61389836((System_String_o *)StringLiteral_25009/*"{0}{1}_{2}"*/, baseAnimationName, v15, v16, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v18 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v30 = i;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      v17 = System_String__Format_61389768((System_String_o *)StringLiteral_25005/*"{0}{1}"*/, v18, v19, 0LL);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0LL, 0LL) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_63513060((SimpleAnimation_o *)this, v17, 0LL);
LABEL_25:
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      this = (BattleParamComponent__playingEffect_d__16_o *)SimpleAnimation__get_isPlaying(
                                                              (SimpleAnimation_o *)this,
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(p__2__current, 0, v21, v22);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
        UnityEngine_Animation__Play_68872828((UnityEngine_Animation_o *)this, v17, 0LL);
LABEL_33:
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v2->fields.__2__current = 0LL;
          v29 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B6406C(v29, 0, v26, v27);
          *(_DWORD *)&v29[-1].fields.isMine = 2;
          return 1;
        }
      }
    }
  }
  callback = v2->fields.callback;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
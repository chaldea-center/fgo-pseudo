void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B692DF & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B692DF = 1;
  }
  this->fields.endtime = 1.5;
  v9 = StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.baseAnimationName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Il2CppObject *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B692DA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_Animation___, method);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v3);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v4);
    byte_4B692DA = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnim,
    (int64_t)Component_object,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v12;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.anim, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  v19 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F4FBB4 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v19;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.commonEff, (int64_t)v19, v20, v21, v22, v23, v24, v25);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70437272((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *voicePath; // x0
  System_String_o *v17; // x19

  if ( (byte_4B692DC & 1) == 0 )
  {
    sub_1BE4ACC(&SoundManager_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v9);
    byte_4B692DC = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.simpleAnim, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.anim = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.anim, 0LL, v10, v11, v12, v13, v14, v15);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v17 = this->fields.voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v17, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_4B692DE & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, flg);
    byte_4B692DE = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.commonEff;
    if ( !v8 )
      sub_1BE4D28(v6, v7);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v23; // x0
  struct System_String_o *v24; // x0
  struct System_String_o **p_voicePath; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_String_o *v32; // x20
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B692DB & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, animationIds);
    sub_1BE4ACC(&SoundManager_TypeInfo, v9);
    sub_1BE4ACC(&StringLiteral_25443/*"{0}_{1}"*/, v10);
    byte_4B692DB = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.animationIds,
    (int64_t)animationIds,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_1BE4D28(v17, v18);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v33 = voiceId;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v19, v20, v21);
    v24 = System_String__Format_62713180((System_String_o *)StringLiteral_25443/*"{0}_{1}"*/, voiceDataStr, v23, 0LL);
    this->fields.voicePath = v24;
    p_voicePath = &this->fields.voicePath;
    sub_1BE4A70((PartyOrganizationUtility_o *)p_voicePath, (int64_t)v24, v26, v27, v28, v29, v30, v31);
    v32 = *p_voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v32, callback, 1, 0LL);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B692DD & 1) == 0 )
  {
    sub_1BE4ACC(&BattleParamComponent__playingEffect_d__16_TypeInfo, *(_QWORD *)&start);
    byte_4B692DD = 1;
  }
  v9 = sub_1BE4D18(BattleParamComponent__playingEffect_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)callback, v16, v17, v18, v19, v20, v21);
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
  int64_t v2; // x2
  __int64 v3; // x3
  System_String_o *v4; // x4
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
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct System_Int32_array *animationIds; // x8
  __int64 v20; // x9
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x0
  System_String_o *v23; // x20
  Il2CppObject *v24; // x20
  Il2CppObject *v25; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Action_o *callback; // x8
  PartyOrganizationUtility_o *v37; // x19
  int v38; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v39; // [xsp+8h] [xbp-38h] BYREF
  int v40; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_4B692E0 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    sub_1BE4ACC(&StringLiteral_25456/*"{0}{1}_{2}"*/, v7);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_1BE4ACC(&StringLiteral_25452/*"{0}{1}"*/, v8);
    byte_4B692E0 = 1;
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
    sub_1BE4D28(this, method);
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
      v40 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v2, v3, v4);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v20 = _4__this->fields.switchIndex;
      if ( (unsigned int)v20 >= animationIds->max_length )
LABEL_42:
        sub_1BE4D30(this, method);
      v21 = (Il2CppObject *)this;
      v39 = animationIds->m_Items[v20 + 1];
      v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39, v16, v17, v18);
      v23 = System_String__Format_62713248((System_String_o *)StringLiteral_25456/*"{0}{1}_{2}"*/, baseAnimationName, v21, v22, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v24 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v38 = i;
      v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38, v2, v3, v4);
      v23 = System_String__Format_62713180((System_String_o *)StringLiteral_25452/*"{0}{1}"*/, v24, v25, 0LL);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0LL, 0LL) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_64837092((SimpleAnimation_o *)this, v23, 0LL);
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
        p__2__current = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
        sub_1BE4A70(p__2__current, 0LL, v2, v3, v4, v27, v28, v29);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
        UnityEngine_Animation__Play_70197004((UnityEngine_Animation_o *)this, v23, 0LL);
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
          v37 = (PartyOrganizationUtility_o *)&v5->fields.__2__current;
          sub_1BE4A70(v37, 0LL, v2, v3, v4, v33, v34, v35);
          *(_DWORD *)&v37[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
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

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
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
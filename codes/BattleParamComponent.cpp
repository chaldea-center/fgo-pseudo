void __fastcall BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  void *v9; // x1

  if ( (byte_4B1889C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B1889C = 1;
  }
  this->fields.endtime = 1.5;
  v9 = StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.baseAnimationName, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  Il2CppObject *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  Il2CppObject *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B18897 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6, v7);
    byte_4B18897 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.simpleAnim,
    (int64_t)Component_object,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.anim, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)&this->fields.currentPhase = 1LL;
  v22 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.commonEff, (int64_t)v22, v23, v24, v25, v26, v27, v28);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  __int64 v10; // x2
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *voicePath; // x0
  __int64 v18; // x1
  System_String_o *v19; // x19

  if ( (byte_4B18899 & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B18899 = 1;
  }
  this->fields.simpleAnim = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.simpleAnim, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.anim = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.anim, 0LL, v11, v12, v13, v14, v15, v16);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
  {
    v19 = this->fields.voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v18);
    SoundManager__releaseAudioAssetStorage(v19, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_4B1889B & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, flg, method);
    byte_4B1889B = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0LL, 0LL);
  if ( v6 )
  {
    v8 = this->fields.commonEff;
    if ( !v8 )
      sub_1BCAA3C(v6, v7);
    v8->fields.isEndless = flg;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleParamComponent__SetInfo(
        BattleParamComponent_o *this,
        System_Int32_array *animationIds,
        int32_t voiceId,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x0
  __int64 v20; // x1
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v22; // x0
  struct System_String_o *v23; // x0
  struct System_String_o **p_voicePath; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  __int64 v31; // x1
  System_String_o *v32; // x20
  int32_t v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B18898 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, animationIds, *(_QWORD *)&voiceId);
    sub_1BCA7E0(&SoundManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v11, v12);
    byte_4B18898 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animationIds,
    (int64_t)animationIds,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( voiceId < 1 )
  {
    if ( !callback )
      sub_1BCAA3C(v19, v20);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v33 = voiceId;
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v23 = System_String__Format_62415592((System_String_o *)StringLiteral_25353/*"{0}_{1}"*/, voiceDataStr, v22, 0LL);
    this->fields.voicePath = v23;
    p_voicePath = &this->fields.voicePath;
    sub_1BCA784((PartyOrganizationUtility_o *)p_voicePath, (int64_t)v23, v25, v26, v27, v28, v29, v30);
    v32 = *p_voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v31);
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

  if ( (byte_4B1889A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleParamComponent__playingEffect_d__16_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&end);
    byte_4B1889A = 1;
  }
  v9 = sub_1BCAA2C(BattleParamComponent__playingEffect_d__16_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&end, callback);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v9 + 48), (int64_t)callback, v16, v17, v18, v19, v20, v21);
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
  BattleParamComponent__playingEffect_d__16_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct BattleParamComponent_o *_4__this; // x22
  int i; // w8
  struct System_Int32_array *switchPhase; // x9
  __int64 switchIndex; // x10
  int max_length; // w11
  Il2CppObject *baseAnimationName; // x20
  struct System_Int32_array *animationIds; // x8
  __int64 v18; // x9
  Il2CppObject *v19; // x21
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x20
  Il2CppObject *v23; // x20
  Il2CppObject *v24; // x0
  UnityEngine_Object_o *simpleAnim; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Action_o *callback; // x8
  PartyOrganizationUtility_o *v42; // x19
  int v43; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v44; // [xsp+8h] [xbp-38h] BYREF
  int v45; // [xsp+Ch] [xbp-34h] BYREF

  v3 = this;
  if ( (byte_4B1889D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_25365/*"{0}{1}_{2}"*/, v6, v7);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_1BCA7E0(&StringLiteral_25361/*"{0}{1}"*/, v8, v9);
    byte_4B1889D = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_33;
    goto LABEL_41;
  }
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( _4__this )
      goto LABEL_25;
    goto LABEL_41;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
LABEL_41:
    sub_1BCAA3C(this, method);
  for ( i = v3->fields.start; ; i = _4__this->fields.currentPhase + 1 )
  {
    _4__this->fields.currentPhase = i;
    if ( i > v3->fields.end )
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
      v45 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(int_TypeInfo, &v45);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v18 = _4__this->fields.switchIndex;
      if ( (unsigned int)v18 >= animationIds->max_length )
LABEL_42:
        sub_1BCAA44(this, method);
      v19 = (Il2CppObject *)this;
      v44 = animationIds->m_Items[v18 + 1];
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
      v22 = System_String__Format_62415660((System_String_o *)StringLiteral_25365/*"{0}{1}_{2}"*/, baseAnimationName, v19, v20, 0LL);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v23 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v43 = i;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
      v22 = System_String__Format_62415592((System_String_o *)StringLiteral_25361/*"{0}{1}"*/, v23, v24, 0LL);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0LL, 0LL) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_64539336((SimpleAnimation_o *)this, v22, 0LL);
LABEL_25:
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      this = (BattleParamComponent__playingEffect_d__16_o *)SimpleAnimation__get_isPlaying(
                                                              (SimpleAnimation_o *)this,
                                                              0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v3->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v26, v27, v28, v29, v30, v31);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
    }
    else
    {
      anim = (UnityEngine_Object_o *)_4__this->fields.anim;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Object__op_Inequality(anim, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)this, v22, 0LL);
LABEL_33:
        this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.anim;
        if ( !this )
          goto LABEL_41;
        this = (BattleParamComponent__playingEffect_d__16_o *)UnityEngine_Animation__get_isPlaying(
                                                                (UnityEngine_Animation_o *)this,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v3->fields.__2__current = 0LL;
          v42 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
          sub_1BCA784(v42, 0LL, v35, v36, v37, v38, v39, v40);
          *(_DWORD *)&v42[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
          return 1;
        }
      }
    }
  }
  callback = v3->fields.callback;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
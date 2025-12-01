void BattleParamComponent___ctor(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4CC9FD7 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9FD7 = 1;
  }
  this->fields.endtime = 1.5;
  v9 = StringLiteral_1/*""*/;
  this->fields.baseAnimationName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.baseAnimationName, v9, v2, v3, v4, v5, v6, v7);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleParamComponent__Init(BattleParamComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC9FD2 & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
    sub_1C713B0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    byte_4CC9FD2 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  this->fields.simpleAnim = (struct SimpleAnimation_o *)Component_object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.simpleAnim,
    (int32_t)Component_object,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_Animation___);
  this->fields.anim = (struct UnityEngine_Animation_o *)v10;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.anim, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&this->fields.currentPhase = 1;
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_31418DC *)Method_UnityEngine_Component_GetComponent_CommonEffectComponent___);
  this->fields.commonEff = (struct CommonEffectComponent_o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.commonEff, (int32_t)v17, v18, v19, v20, v21, v22, v23);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, v6, 0);
}


void BattleParamComponent__Release(BattleParamComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *voicePath; // x0
  System_String_o *v16; // x19

  if ( (byte_4CC9FD4 & 1) == 0 )
  {
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC9FD4 = 1;
  }
  this->fields.simpleAnim = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.simpleAnim, 0, v2, v3, v4, v5, v6, v7);
  this->fields.anim = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.anim, 0, v9, v10, v11, v12, v13, v14);
  voicePath = this->fields.voicePath;
  if ( voicePath && System_String__op_Inequality(voicePath, (System_String_o *)StringLiteral_1/*""*/, 0) )
  {
    v16 = this->fields.voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(v16, 0);
  }
}


void BattleParamComponent__SetEndressFlg(BattleParamComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *commonEff; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct CommonEffectComponent_o *v8; // x8

  if ( (byte_4CC9FD6 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC9FD6 = 1;
  }
  commonEff = (UnityEngine_Object_o *)this->fields.commonEff;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality(commonEff, 0, 0);
  if ( v6 )
  {
    v8 = this->fields.commonEff;
    if ( !v8 )
      sub_1C71608(v6, v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  Il2CppObject *voiceDataStr; // x22
  Il2CppObject *v18; // x0
  struct System_String_o *v19; // x0
  struct System_String_o **p_voicePath; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_String_o *v27; // x20
  int32_t v28; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC9FD3 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&SoundManager_TypeInfo);
    sub_1C713B0(&StringLiteral_25327/*"{0}_{1}"*/);
    byte_4CC9FD3 = 1;
  }
  BattleParamComponent__Init(this, (const MethodInfo *)animationIds);
  this->fields.animationIds = animationIds;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.animationIds,
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
      sub_1C71608(v15, v16);
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else
  {
    voiceDataStr = (Il2CppObject *)this->fields.voiceDataStr;
    v28 = voiceId;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v19 = System_String__Format_64073032((System_String_o *)StringLiteral_25327/*"{0}_{1}"*/, voiceDataStr, v18, 0);
    this->fields.voicePath = v19;
    p_voicePath = &this->fields.voicePath;
    sub_1C71354((GrandQuestFolderBoardItem_o *)p_voicePath, (int32_t)v19, v21, v22, v23, v24, v25, v26);
    v27 = *p_voicePath;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(v27, callback, 1, 0);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4CC9FD5 & 1) == 0 )
  {
    sub_1C713B0(&BattleParamComponent__playingEffect_d__16_TypeInfo);
    byte_4CC9FD5 = 1;
  }
  v9 = sub_1C715FC(BattleParamComponent__playingEffect_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v9 + 40) = start;
  *(_DWORD *)(v9 + 44) = end;
  *(_QWORD *)(v9 + 48) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)callback, v16, v17, v18, v19, v20, v21);
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *anim; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Action_o *callback; // x8
  GrandQuestFolderBoardItem_o *v34; // x19
  int v35; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v36; // [xsp+8h] [xbp-38h] BYREF
  int v37; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_4CC9FD8 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&StringLiteral_25340/*"{0}{1}_{2}"*/);
    this = (BattleParamComponent__playingEffect_d__16_o *)sub_1C713B0(&StringLiteral_25338/*"{0}{1}"*/);
    byte_4CC9FD8 = 1;
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
    sub_1C71608(this, method);
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
      v37 = i;
      this = (BattleParamComponent__playingEffect_d__16_o *)j_il2cpp_value_box_0(int_TypeInfo, &v37);
      animationIds = _4__this->fields.animationIds;
      if ( !animationIds )
        goto LABEL_41;
      v11 = _4__this->fields.switchIndex;
      if ( (unsigned int)v11 >= LODWORD(animationIds->max_length) )
LABEL_42:
        sub_1C71610(this);
      v12 = (Il2CppObject *)this;
      v36 = animationIds->m_Items[v11];
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
      v14 = System_String__Format_64073100((System_String_o *)StringLiteral_25340/*"{0}{1}_{2}"*/, baseAnimationName, v12, v13, 0);
      ++_4__this->fields.switchIndex;
    }
    else
    {
LABEL_19:
      v15 = (Il2CppObject *)_4__this->fields.baseAnimationName;
      v35 = i;
      v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35);
      v14 = System_String__Format_64073032((System_String_o *)StringLiteral_25338/*"{0}{1}"*/, v15, v16, 0);
    }
    simpleAnim = (UnityEngine_Object_o *)_4__this->fields.simpleAnim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(simpleAnim, 0, 0) )
    {
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      SimpleAnimation__Play_66976788((SimpleAnimation_o *)this, v14, 0);
LABEL_25:
      this = (BattleParamComponent__playingEffect_d__16_o *)_4__this->fields.simpleAnim;
      if ( !this )
        goto LABEL_41;
      this = (BattleParamComponent__playingEffect_d__16_o *)SimpleAnimation__get_isPlaying((SimpleAnimation_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C71354(p__2__current, 0, v18, v19, v20, v21, v22, v23);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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
        UnityEngine_Animation__Play_71468084((UnityEngine_Animation_o *)this, v14, 0);
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
          v34 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
          sub_1C71354(v34, 0, v27, v28, v29, v30, v31, v32);
          LODWORD(v34[-1].fields._ClosedMessage_k__BackingField) = 2;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_BattleParamComponent__playingEffect_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
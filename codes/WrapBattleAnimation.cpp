void WrapBattleAnimation___ctor(
        WrapBattleAnimation_o *this,
        UnityEngine_Animation_o *normalAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.animation = normalAnim;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_AnimationState_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_AnimationState_o *v16; // x20
  System_String_o *name; // x22
  float time; // s8
  __int64 v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x19
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0

  if ( (byte_4D30150 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_AnimationState_TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    byte_4D30150 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
LABEL_34:
    sub_1C942F0(animation, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0);
  if ( !Enumerator )
    sub_1C942F0(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_16:
      v13 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                            Enumerator,
                                            *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( !v14 )
      sub_1C942F0(0, v15);
    if ( v14->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C9468C(v14);
      goto LABEL_34;
    }
    if ( UnityEngine_AnimationState__get_enabled(v14, 0) )
    {
      name = UnityEngine_AnimationState__get_name(v16, 0);
      time = UnityEngine_AnimationState__get_time(v16, 0);
      v19 = sub_1C942E4(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v19, 0);
      *(_QWORD *)(v19 + 16) = name;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 16), (int32_t)name, v20, v21, v22, v23, v24, v25);
      *(float *)(v19 + 24) = time;
      goto LABEL_23;
    }
  }
  v19 = 0;
LABEL_23:
  v26 = sub_1C941D4(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v27 = *(_QWORD *)v26;
    v28 = v26;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = v27 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_1C6A420(v26, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  }
  return (WrapBattleBaseAnimation_SimpleData_o *)v19;
}


void WrapBattleAnimation__PlayAnimation(
        WrapBattleAnimation_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation
    || (animation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(animation, animName, 0)) == 0
    || (UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)animation, timeline, 0),
        (animation = this->fields.animation) == 0)
    || (UnityEngine_Animation__Sample(animation, 0), (animation = this->fields.animation) == 0) )
  {
    sub_1C942F0(animation, animName);
  }
  UnityEngine_Animation__Play_71854448(animation, animName, 0);
}
void WrapBattleAnimation___ctor(
        WrapBattleAnimation_o *this,
        UnityEngine_Animation_o *normalAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.animation = normalAnim;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)normalAnim, v5, v6);
}


WrapBattleBaseAnimation_SimpleData_o *WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_AnimationState_o *v13; // x0
  UnityEngine_AnimationState_o *v14; // x20
  System_String_o *name; // x22
  float time; // s8
  __int64 v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C46768 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_AnimationState_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    byte_4C46768 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
LABEL_34:
    sub_1C372B4(animation);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_9;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v8)(Enumerator, *(_QWORD *)(v8 + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 2;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1];
    }
    else
    {
LABEL_16:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v13 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                            Enumerator,
                                            *(_QWORD *)(v12 + 8));
    v14 = v13;
    if ( !v13 )
      sub_1C372B4(0);
    if ( v13->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C37574(v13);
      goto LABEL_34;
    }
    if ( UnityEngine_AnimationState__get_enabled(v13, 0) )
    {
      name = UnityEngine_AnimationState__get_name(v14, 0);
      time = UnityEngine_AnimationState__get_time(v14, 0);
      v17 = sub_1C372A4(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v17, 0);
      *(_QWORD *)(v17 + 16) = name;
      sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 16), (int32_t)name, v18, v19);
      *(float *)(v17 + 24) = time;
      goto LABEL_23;
    }
  }
  v17 = 0;
LABEL_23:
  v20 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C87870(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
  return (WrapBattleBaseAnimation_SimpleData_o *)v17;
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
    sub_1C372B4(animation);
  }
  UnityEngine_Animation__Play_71012036(animation, animName, 0);
}
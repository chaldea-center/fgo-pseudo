void __fastcall WrapBattleAnimation___ctor(
        WrapBattleAnimation_o *this,
        UnityEngine_Animation_o *normalAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = normalAnim;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)normalAnim, v5, v6);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x19
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0

  if ( (byte_4A5E273 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_AnimationState_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    byte_4A5E273 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
LABEL_34:
    sub_1B8880C(animation, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_16:
      v13 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                            Enumerator,
                                            *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( !v14 )
      sub_1B8880C(0LL, v15);
    if ( v14->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B88ACC(v14);
      goto LABEL_34;
    }
    if ( UnityEngine_AnimationState__get_enabled(v14, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v16, 0LL);
      time = UnityEngine_AnimationState__get_time(v16, 0LL);
      v19 = sub_1B887FC(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v19, 0LL);
      *(_QWORD *)(v19 + 16) = name;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)name, v20, v21);
      *(float *)(v19 + 24) = time;
      goto LABEL_23;
    }
  }
  v19 = 0LL;
LABEL_23:
  v22 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v22 )
  {
    v23 = *(_QWORD *)v22;
    v24 = v22;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_28;
      }
      v27 = v23 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_28:
      v27 = sub_1BDA590(v22, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  }
  return (WrapBattleBaseAnimation_SimpleData_o *)v19;
}


void __fastcall WrapBattleAnimation__PlayAnimation(
        WrapBattleAnimation_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0

  animation = this->fields.animation;
  if ( !animation
    || (animation = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(animation, animName, 0LL)) == 0LL
    || (UnityEngine_AnimationState__set_time((UnityEngine_AnimationState_o *)animation, timeline, 0LL),
        (animation = this->fields.animation) == 0LL)
    || (UnityEngine_Animation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
  {
    sub_1B8880C(animation, animName);
  }
  UnityEngine_Animation__Play_69204472(animation, animName, 0LL);
}
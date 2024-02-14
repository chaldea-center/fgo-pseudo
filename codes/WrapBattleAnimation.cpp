void __fastcall WrapBattleAnimation___ctor(
        WrapBattleAnimation_o *this,
        UnityEngine_Animation_o *normalAnim,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = normalAnim;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Animation_o *animation; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v9; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_AnimationState_o *v16; // x0
  UnityEngine_AnimationState_o *v17; // x20
  System_String_o *name; // x21
  float time; // s8
  __int64 v20; // x1
  __int64 v21; // x2
  WrapBattleBaseAnimation_SimpleData_o *v22; // x20
  int v23; // w8
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x19
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-40h]

  if ( (byte_4213FB5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v3);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_B0D8A4(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v5);
    byte_4213FB5 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    sub_B0D97C(0LL);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v9 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v9;
        p_offset += 4;
        if ( v9 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v13 = 0LL;
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_16:
      v15 = sub_AA67A0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                            Enumerator,
                                            *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( !v16 )
      goto LABEL_35;
    if ( v16->klass != UnityEngine_AnimationState_TypeInfo )
    {
      v16 = (UnityEngine_AnimationState_o *)sub_B0DC70(v16);
LABEL_35:
      sub_B0D97C(v16);
    }
    if ( UnityEngine_AnimationState__get_enabled(v16, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v17, 0LL);
      time = UnityEngine_AnimationState__get_time(v17, 0LL);
      v22 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B0D974(WrapBattleBaseAnimation_SimpleData_TypeInfo, v20, v21);
      WrapBattleBaseAnimation_SimpleData___ctor(v22, name, time, 0LL);
      v23 = 83;
      goto LABEL_23;
    }
  }
  v22 = 0LL;
  v23 = 81;
LABEL_23:
  v31 = v23;
  v24 = sub_B0D964(Enumerator, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
          goto LABEL_28;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_AA67A0(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  if ( v31 == 81 )
    return 0LL;
  return v22;
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
    sub_B0D97C(animation);
  }
  UnityEngine_Animation__Play_50564840(animation, animName, 0LL);
}
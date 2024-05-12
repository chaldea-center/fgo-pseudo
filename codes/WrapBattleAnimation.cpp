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
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0
  __int64 v4; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v10; // x8
  unsigned __int64 v11; // x10
  System_Collections_IEnumerator_c **v12; // x11
  __int64 v13; // x0
  UnityEngine_AnimationState_o *v14; // x0
  __int64 v15; // x1
  UnityEngine_AnimationState_o *v16; // x20
  System_String_o *name; // x21
  float time; // s8
  WrapBattleBaseAnimation_SimpleData_o *v19; // x20
  int v20; // w8
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x19
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  int v28; // [xsp+0h] [xbp-40h]

  if ( (byte_4389527 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_AnimationState_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    byte_4389527 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    sub_B7769C(0LL, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_B7769C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        v12 += 2;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1].method;
    }
    else
    {
LABEL_16:
      v13 = sub_B0F4C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v14 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                            Enumerator,
                                            *(_QWORD *)(v13 + 8));
    v16 = v14;
    if ( !v14 )
      goto LABEL_35;
    if ( v14->klass != UnityEngine_AnimationState_TypeInfo )
    {
      v14 = (UnityEngine_AnimationState_o *)sub_B77990(v14);
LABEL_35:
      sub_B7769C(v14, v15);
    }
    if ( UnityEngine_AnimationState__get_enabled(v14, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v16, 0LL);
      time = UnityEngine_AnimationState__get_time(v16, 0LL);
      v19 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B77694(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      WrapBattleBaseAnimation_SimpleData___ctor(v19, name, time, 0LL);
      v20 = 83;
      goto LABEL_23;
    }
  }
  v19 = 0LL;
  v20 = 81;
LABEL_23:
  v28 = v20;
  v21 = sub_B77684(Enumerator, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
          goto LABEL_28;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_28:
      v26 = sub_B0F4C0(v21, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
  if ( v28 == 81 )
    return 0LL;
  return v19;
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
    sub_B7769C(animation, animName);
  }
  UnityEngine_Animation__Play_51745976(animation, animName, 0LL);
}
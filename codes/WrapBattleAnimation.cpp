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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UnityEngine_Animation_o *animation; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v19; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v22; // x3
  System_Collections_IEnumerator_c *v23; // x8
  unsigned __int64 v24; // x10
  System_Collections_IEnumerator_c **v25; // x11
  __int64 v26; // x0
  UnityEngine_AnimationState_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_AnimationState_o *v29; // x20
  System_String_o *name; // x21
  float time; // s8
  WrapBattleBaseAnimation_SimpleData_o *v32; // x20
  int v33; // w8
  __int64 v34; // x0
  __int64 v35; // x3
  __int64 v36; // x8
  __int64 v37; // x19
  unsigned __int64 v38; // x10
  int *v39; // x11
  __int64 v40; // x0
  int v42; // [xsp+0h] [xbp-40h]

  if ( (byte_42E73B7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_AnimationState_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v11, v12, v13);
    byte_42E73B7 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    sub_B5D69C(0LL, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v19 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        p_offset += 4;
        if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v24 = 0LL;
      v25 = (System_Collections_IEnumerator_c **)&v23->_1.interfaceOffsets->offset;
      while ( *(v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v24;
        v25 += 2;
        if ( v24 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*(_DWORD *)v25 + 1].method;
    }
    else
    {
LABEL_16:
      v26 = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v22);
    }
    v27 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v26)(
                                            Enumerator,
                                            *(_QWORD *)(v26 + 8));
    v29 = v27;
    if ( !v27 )
      goto LABEL_35;
    if ( v27->klass != UnityEngine_AnimationState_TypeInfo )
    {
      v27 = (UnityEngine_AnimationState_o *)sub_B5D990(v27);
LABEL_35:
      sub_B5D69C(v27, v28);
    }
    if ( UnityEngine_AnimationState__get_enabled(v27, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v29, 0LL);
      time = UnityEngine_AnimationState__get_time(v29, 0LL);
      v32 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B5D694(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      WrapBattleBaseAnimation_SimpleData___ctor(v32, name, time, 0LL);
      v33 = 83;
      goto LABEL_23;
    }
  }
  v32 = 0LL;
  v33 = 81;
LABEL_23:
  v42 = v33;
  v34 = sub_B5D684(Enumerator, System_IDisposable_TypeInfo);
  if ( v34 )
  {
    v36 = *(_QWORD *)v34;
    v37 = v34;
    if ( *(_WORD *)(*(_QWORD *)v34 + 298LL) )
    {
      v38 = 0LL;
      v39 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        ++v38;
        v39 += 4;
        if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v34 + 298LL) )
          goto LABEL_28;
      }
      v40 = v36 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_28:
      v40 = sub_AF54C0(v34, System_IDisposable_TypeInfo, 0LL, v35);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v37, *(_QWORD *)(v40 + 8));
  }
  if ( v42 == 81 )
    return 0LL;
  return v32;
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
    sub_B5D69C(animation, animName);
  }
  UnityEngine_Animation__Play_51249124(animation, animName, 0LL);
}
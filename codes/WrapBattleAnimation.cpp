void __fastcall WrapBattleAnimation___ctor(
        WrapBattleAnimation_o *this,
        UnityEngine_Animation_o *normalAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = normalAnim;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)normalAnim, v5, v6);
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
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_AnimationState_o *v16; // x0
  UnityEngine_AnimationState_o *v17; // x20
  System_String_o *name; // x22
  float time; // s8
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_49FF4A2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_1B640C8(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v5);
    byte_49FF4A2 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
LABEL_34:
    sub_1B64324(animation);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                            Enumerator,
                                            *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( !v16 )
      sub_1B64324(0LL);
    if ( v16->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1B645E4(v16);
      goto LABEL_34;
    }
    if ( UnityEngine_AnimationState__get_enabled(v16, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v17, 0LL);
      time = UnityEngine_AnimationState__get_time(v17, 0LL);
      v22 = sub_1B64314(WrapBattleBaseAnimation_SimpleData_TypeInfo, v20, v21);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      *(_QWORD *)(v22 + 16) = name;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 16), (int32_t)name, v23, v24);
      *(float *)(v22 + 24) = time;
      goto LABEL_23;
    }
  }
  v22 = 0LL;
LABEL_23:
  v25 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_28;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_28:
      v30 = sub_1BB60A8(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
  return (WrapBattleBaseAnimation_SimpleData_o *)v22;
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
    sub_1B64324(animation);
  }
  UnityEngine_Animation__Play_68872828(animation, animName, 0LL);
}
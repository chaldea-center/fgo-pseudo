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
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v8; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v11; // x3
  System_Collections_IEnumerator_c *v12; // x8
  unsigned __int64 v13; // x10
  System_Collections_IEnumerator_c **v14; // x11
  __int64 v15; // x0
  UnityEngine_AnimationState_o *v16; // x0
  __int64 v17; // x1
  UnityEngine_AnimationState_o *v18; // x20
  System_String_o *name; // x21
  float time; // s8
  WrapBattleBaseAnimation_SimpleData_o *v21; // x20
  int v22; // w8
  __int64 v23; // x0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x19
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  int v31; // [xsp+0h] [xbp-40h]

  if ( (byte_42AF99B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_AnimationState_TypeInfo);
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    byte_42AF99B = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    sub_B52A5C(0LL, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
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
      v15 = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v11);
    }
    v16 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                            Enumerator,
                                            *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( !v16 )
      goto LABEL_35;
    if ( v16->klass != UnityEngine_AnimationState_TypeInfo )
    {
      v16 = (UnityEngine_AnimationState_o *)sub_B52D50(v16);
LABEL_35:
      sub_B52A5C(v16, v17);
    }
    if ( UnityEngine_AnimationState__get_enabled(v16, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v18, 0LL);
      time = UnityEngine_AnimationState__get_time(v18, 0LL);
      v21 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B52A54(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      WrapBattleBaseAnimation_SimpleData___ctor(v21, name, time, 0LL);
      v22 = 83;
      goto LABEL_23;
    }
  }
  v21 = 0LL;
  v22 = 81;
LABEL_23:
  v31 = v22;
  v23 = sub_B52A44(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v25 = *(_QWORD *)v23;
    v26 = v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_28;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_AEB880(v23, System_IDisposable_TypeInfo, 0LL, v24);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
  if ( v31 == 81 )
    return 0LL;
  return v21;
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
    sub_B52A5C(animation, animName);
  }
  UnityEngine_Animation__Play_51067744(animation, animName, 0LL);
}
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Animation_o *animation; // x0
  __int64 v7; // x1
  __int64 v8; // x3
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v14; // x3
  System_Collections_IEnumerator_c *v15; // x8
  unsigned __int64 v16; // x10
  System_Collections_IEnumerator_c **v17; // x11
  __int64 v18; // x0
  UnityEngine_AnimationState_o *v19; // x0
  __int64 v20; // x1
  UnityEngine_AnimationState_o *v21; // x20
  System_String_o *name; // x21
  float time; // s8
  WrapBattleBaseAnimation_SimpleData_o *v24; // x20
  int v25; // w8
  __int64 v26; // x0
  __int64 v27; // x3
  __int64 v28; // x8
  __int64 v29; // x19
  unsigned __int64 v30; // x10
  int *v31; // x11
  __int64 v32; // x0
  int v34; // [xsp+0h] [xbp-40h]

  if ( (byte_4187431 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_AnimationState_TypeInfo, method);
    sub_B2C35C(&System_IDisposable_TypeInfo, v3);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_B2C35C(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v5);
    byte_4187431 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    sub_B2C434(0LL, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v11 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v11;
        p_offset += 4;
        if ( v11 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v8);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 2;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1].method;
    }
    else
    {
LABEL_16:
      v18 = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL, v14);
    }
    v19 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                            Enumerator,
                                            *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      goto LABEL_35;
    if ( v19->klass != UnityEngine_AnimationState_TypeInfo )
    {
      v19 = (UnityEngine_AnimationState_o *)sub_B2C728(v19);
LABEL_35:
      sub_B2C434(v19, v20);
    }
    if ( UnityEngine_AnimationState__get_enabled(v19, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v21, 0LL);
      time = UnityEngine_AnimationState__get_time(v21, 0LL);
      v24 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B2C42C(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      WrapBattleBaseAnimation_SimpleData___ctor(v24, name, time, 0LL);
      v25 = 83;
      goto LABEL_23;
    }
  }
  v24 = 0LL;
  v25 = 81;
LABEL_23:
  v34 = v25;
  v26 = sub_B2C41C(Enumerator, System_IDisposable_TypeInfo);
  if ( v26 )
  {
    v28 = *(_QWORD *)v26;
    v29 = v26;
    if ( *(_WORD *)(*(_QWORD *)v26 + 298LL) )
    {
      v30 = 0LL;
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        ++v30;
        v31 += 4;
        if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v26 + 298LL) )
          goto LABEL_28;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_28:
      v32 = sub_AC5258(v26, System_IDisposable_TypeInfo, 0LL, v27);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  }
  if ( v34 == 81 )
    return 0LL;
  return v24;
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
    sub_B2C434(animation, animName);
  }
  UnityEngine_Animation__Play_50201580(animation, animName, 0LL);
}
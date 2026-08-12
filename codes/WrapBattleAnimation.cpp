void WrapBattleAnimation___ctor(
        WrapBattleAnimation_o *this,
        UnityEngine_Animation_o *normalAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.animation = normalAnim;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  UnityEngine_Animation_o *animation; // x0
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_AnimationState_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_AnimationState_o *v17; // x19
  System_String_o *name; // x20
  float time; // s8
  __int64 v20; // x19
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x21
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  System_Collections_IEnumerator_o *v34; // [xsp+28h] [xbp-38h]

  if ( (byte_5974310 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_AnimationState_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    byte_5974310 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
LABEL_36:
    sub_2213CDC(animation, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0);
  v34 = Enumerator;
  while ( 1 )
  {
    if ( !v34 )
      sub_2213CDC(Enumerator, v5);
    klass = v34->klass;
    v7 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(v34, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = v34->klass;
    v11 = *(unsigned __int16 *)&v34->klass->_2.rank;
    if ( *(_WORD *)&v34->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_17;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_17:
      v13 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                            v34,
                                            *(_QWORD *)(v13 + 8));
    v17 = v14;
    if ( !v14 )
      sub_2213CDC(0, v15);
    if ( v14->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_221405C(v14, UnityEngine_AnimationState_TypeInfo, v16);
      goto LABEL_36;
    }
    Enumerator = (System_Collections_IEnumerator_o *)UnityEngine_AnimationState__get_enabled(v14, 0);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      name = UnityEngine_AnimationState__get_name(v17, 0);
      time = UnityEngine_AnimationState__get_time(v17, 0);
      v20 = sub_2213CCC(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v20, 0);
      *(_QWORD *)(v20 + 16) = name;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 16), (int32_t)name, v21, v22, v23, v24, v25, v26);
      *(float *)(v20 + 24) = time;
      goto LABEL_24;
    }
  }
  v20 = 0;
LABEL_24:
  v27 = sub_2213BB4(v34, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v28 = *(_QWORD *)v27;
    v29 = v27;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_29;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_29:
      v32 = sub_224BC3C(v27, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
  }
  return (WrapBattleBaseAnimation_SimpleData_o *)v20;
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
    sub_2213CDC(animation, animName);
  }
  UnityEngine_Animation__Play_83078544(animation, animName, 0);
}
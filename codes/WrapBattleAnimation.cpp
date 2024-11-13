void __fastcall WrapBattleAnimation___ctor(
        WrapBattleAnimation_o *this,
        UnityEngine_Animation_o *normalAnim,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = normalAnim;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)normalAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleAnimation__GetPlayingSimpleAnimData(
        WrapBattleAnimation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Animation_o *animation; // x0
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v17; // x8
  __int64 v18; // x9
  System_Collections_IEnumerator_c **v19; // x10
  __int64 v20; // x0
  UnityEngine_AnimationState_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_AnimationState_o *v23; // x20
  System_String_o *name; // x22
  float time; // s8
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x19
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4B19477 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_AnimationState_TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v6, v7);
    sub_1BCA7E0(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v8, v9);
    byte_4B19477 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
LABEL_34:
    sub_1BCAA3C(animation, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v19 = (System_Collections_IEnumerator_c **)&v17->_1.interfaceOffsets->offset;
      while ( *(v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 2;
        if ( !v18 )
          goto LABEL_16;
      }
      v20 = (__int64)&v17->vtable[*(_DWORD *)v19 + 1].method;
    }
    else
    {
LABEL_16:
      v20 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v21 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v20)(
                                            Enumerator,
                                            *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( !v21 )
      sub_1BCAA3C(0LL, v22);
    if ( v21->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1BCACFC(v21);
      goto LABEL_34;
    }
    if ( UnityEngine_AnimationState__get_enabled(v21, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v23, 0LL);
      time = UnityEngine_AnimationState__get_time(v23, 0LL);
      v29 = sub_1BCAA2C(WrapBattleBaseAnimation_SimpleData_TypeInfo, v26, v27, v28);
      System_Object___ctor((Il2CppObject *)v29, 0LL);
      *(_QWORD *)(v29 + 16) = name;
      sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 16), (int64_t)name, v30, v31, v32, v33, v34, v35);
      *(float *)(v29 + 24) = time;
      goto LABEL_23;
    }
  }
  v29 = 0LL;
LABEL_23:
  v36 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v36 )
  {
    v37 = *(_QWORD *)v36;
    v38 = v36;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_28;
      }
      v41 = v37 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_28:
      v41 = sub_1C1C7C0(v36, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v41)(v38, *(_QWORD *)(v41 + 8));
  }
  return (WrapBattleBaseAnimation_SimpleData_o *)v29;
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
    sub_1BCAA3C(animation, animName);
  }
  UnityEngine_Animation__Play_69899248(animation, animName, 0LL);
}
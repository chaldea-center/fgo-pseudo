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
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)normalAnim, v5, v6, v7, v8, v9, v10);
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
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_AnimationState_o *v17; // x0
  __int64 v18; // x1
  UnityEngine_AnimationState_o *v19; // x20
  System_String_o *name; // x22
  float time; // s8
  __int64 v22; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x19
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0

  if ( (byte_4B69EE9 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_AnimationState_TypeInfo, method);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v3);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_1BE4ACC(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v5);
    byte_4B69EE9 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
LABEL_34:
    sub_1BE4D28(animation, method);
  Enumerator = UnityEngine_Animation__GetEnumerator(animation, 0LL);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v17 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                            Enumerator,
                                            *(_QWORD *)(v16 + 8));
    v19 = v17;
    if ( !v17 )
      sub_1BE4D28(0LL, v18);
    if ( v17->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1BE4FE8(v17);
      goto LABEL_34;
    }
    if ( UnityEngine_AnimationState__get_enabled(v17, 0LL) )
    {
      name = UnityEngine_AnimationState__get_name(v19, 0LL);
      time = UnityEngine_AnimationState__get_time(v19, 0LL);
      v22 = sub_1BE4D18(WrapBattleBaseAnimation_SimpleData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v22, 0LL);
      *(_QWORD *)(v22 + 16) = name;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v22 + 16), (int64_t)name, v23, v24, v25, v26, v27, v28);
      *(float *)(v22 + 24) = time;
      goto LABEL_23;
    }
  }
  v22 = 0LL;
LABEL_23:
  v29 = sub_1BE4C08(Enumerator, System_IDisposable_TypeInfo);
  if ( v29 )
  {
    v30 = *(_QWORD *)v29;
    v31 = v29;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_28;
      }
      v34 = v30 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_28:
      v34 = sub_1C36AAC(v29, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v34)(v31, *(_QWORD *)(v34 + 8));
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
    sub_1BE4D28(animation, animName);
  }
  UnityEngine_Animation__Play_70197004(animation, animName, 0LL);
}
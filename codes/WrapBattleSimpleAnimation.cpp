void WrapBattleSimpleAnimation___ctor(
        WrapBattleSimpleAnimation_o *this,
        SimpleAnimation_o *simpleAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.animation = simpleAnim;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)simpleAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *WrapBattleSimpleAnimation__GetPlayingSimpleAnimData(
        WrapBattleSimpleAnimation_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *animation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  __int64 v30; // x19
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x20
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  float v37; // s8
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v49; // [xsp+18h] [xbp-38h]

  if ( (byte_593C1B7 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593C1B7 = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0)) == 0 )
    sub_21FFECC(animation, method);
  klass = animation->klass;
  v5 = animation;
  v6 = *(unsigned __int16 *)&animation->klass->_2.rank;
  if ( *(_WORD *)&animation->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_2237E2C(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v9 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  v49 = v9;
  do
  {
    if ( !v49 )
      sub_21FFECC(v9, v10);
    v11 = *(_QWORD *)v49;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_17;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_17:
      v14 = sub_2237E2C(v49, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v49, *(_QWORD *)(v14 + 8)) & 1) == 0 )
    {
      v30 = 0;
      goto LABEL_48;
    }
    v15 = *(_QWORD *)v49;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v17 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_24;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_24:
      v18 = sub_2237E2C(v49, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v49, *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_21FFECC(0, v20);
    v22 = *(_QWORD *)v19;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v24 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_31;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_31:
      v25 = sub_2237E2C(v19, SimpleAnimation_State_TypeInfo, 0);
    }
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
  }
  while ( (v9 & 1) == 0 );
  v26 = *(_QWORD *)v21;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v28 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v27;
      v28 += 2;
      if ( !v27 )
        goto LABEL_38;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 9) + 312;
  }
  else
  {
LABEL_38:
    v29 = sub_2237E2C(v21, SimpleAnimation_State_TypeInfo, 9);
  }
  v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
  v32 = *(_QWORD *)v21;
  v33 = v31;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v35 = (SimpleAnimation_State_c **)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *(v35 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v34;
      v35 += 2;
      if ( !v34 )
        goto LABEL_45;
    }
    v36 = v32 + 16LL * (*(_DWORD *)v35 + 3) + 312;
  }
  else
  {
LABEL_45:
    v36 = sub_2237E2C(v21, SimpleAnimation_State_TypeInfo, 3);
  }
  v37 = (*(float (__fastcall **)(__int64, _QWORD))v36)(v21, *(_QWORD *)(v36 + 8));
  v30 = sub_21FFEBC(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  *(_QWORD *)(v30 + 16) = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 16), v33, v38, v39, v40, v41, v42, v43);
  *(float *)(v30 + 24) = v37;
LABEL_48:
  v44 = *(_QWORD *)v49;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_52;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_52:
    v47 = sub_2237E2C(v49, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v49, *(_QWORD *)(v47 + 8));
  return (WrapBattleBaseAnimation_SimpleData_o *)v30;
}


void WrapBattleSimpleAnimation__PlayAnimation(
        WrapBattleSimpleAnimation_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  SimpleAnimation_o *animation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v9; // x21
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v12; // x0

  if ( (byte_593C1B6 & 1) == 0 )
  {
    sub_21FFC50(&SimpleAnimation_State_TypeInfo);
    byte_593C1B6 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    goto LABEL_14;
  animation = (SimpleAnimation_o *)SimpleAnimation__get_Item(animation, animName, 0);
  if ( !animation )
    goto LABEL_14;
  klass = animation->klass;
  v9 = animation;
  v10 = *(unsigned __int16 *)&animation->klass->_2.rank;
  if ( *(_WORD *)&animation->klass->_2.rank )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_9;
    }
    v12 = (__int64)(&klass->vtable._4_ApplyUpdateMode + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v12 = sub_2237E2C(animation, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, float))v12)(v9, *(_QWORD *)(v12 + 8), timeline);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0), (animation = this->fields.animation) == 0) )
LABEL_14:
    sub_21FFECC(animation, animName);
  SimpleAnimation__Play_78338864(animation, animName, 0);
}
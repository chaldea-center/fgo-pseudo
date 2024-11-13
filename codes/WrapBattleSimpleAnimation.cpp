void __fastcall WrapBattleSimpleAnimation___ctor(
        WrapBattleSimpleAnimation_o *this,
        SimpleAnimation_o *simpleAnim,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = simpleAnim;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)simpleAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleSimpleAnimation__GetPlayingSimpleAnimData(
        WrapBattleSimpleAnimation_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  SimpleAnimation_o *animation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x20
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  SimpleAnimation_State_c **v39; // x10
  __int64 v40; // x0
  __int64 v41; // x21
  __int64 v42; // x0
  __int64 v43; // x8
  int64_t v44; // x22
  __int64 v45; // x9
  SimpleAnimation_State_c **v46; // x10
  __int64 v47; // x0
  int v48; // s8
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0

  if ( (byte_4B19476 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    sub_1BCA7E0(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v10, v11);
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, v12, v13);
    byte_4B19476 = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_1BCAA3C(animation, method);
  klass = animation->klass;
  v16 = animation;
  v17 = *(unsigned __int16 *)(&animation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&animation->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_9;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v19 = sub_1C1C7C0(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1BCAA3C(0LL, v20);
  do
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_16:
      v25 = sub_1C1C7C0(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
    {
      v41 = 0LL;
      goto LABEL_47;
    }
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v28 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_23;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_23:
      v29 = sub_1C1C7C0(v21, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      sub_1BCAA3C(0LL, v31);
    v33 = *(_QWORD *)v30;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v35 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_30;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_30:
      v36 = sub_1C1C7C0(v30, SimpleAnimation_State_TypeInfo, 0LL);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 );
  v37 = *(_QWORD *)v32;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v38;
      v39 += 2;
      if ( !v38 )
        goto LABEL_37;
    }
    v40 = v37 + 16LL * (*(_DWORD *)v39 + 9) + 312;
  }
  else
  {
LABEL_37:
    v40 = sub_1C1C7C0(v32, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
  v43 = *(_QWORD *)v32;
  v44 = v42;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v45;
      v46 += 2;
      if ( !v45 )
        goto LABEL_44;
    }
    v47 = v43 + 16LL * (*(_DWORD *)v46 + 3) + 312;
  }
  else
  {
LABEL_44:
    v47 = sub_1C1C7C0(v32, SimpleAnimation_State_TypeInfo, 3LL);
  }
  v48 = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v47)(v32, *(_QWORD *)(v47 + 8)));
  v41 = sub_1BCAA2C(WrapBattleBaseAnimation_SimpleData_TypeInfo, v49, v50, v51);
  System_Object___ctor((Il2CppObject *)v41, 0LL);
  *(_QWORD *)(v41 + 16) = v44;
  sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 16), v44, v52, v53, v54, v55, v56, v57);
  *(_DWORD *)(v41 + 24) = v48;
LABEL_47:
  v58 = *(_QWORD *)v21;
  v59 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_51;
    }
    v61 = v58 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_51:
    v61 = sub_1C1C7C0(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v61)(v21, *(_QWORD *)(v61 + 8));
  return (WrapBattleBaseAnimation_SimpleData_o *)v41;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WrapBattleSimpleAnimation__PlayAnimation(
        WrapBattleSimpleAnimation_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  long double v4; // q8
  SimpleAnimation_o *animation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v9; // x21
  __int64 v10; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v12; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4B19475 & 1) == 0 )
  {
    sub_1BCA7E0(&SimpleAnimation_State_TypeInfo, animName, method);
    byte_4B19475 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    goto LABEL_14;
  animation = (SimpleAnimation_o *)SimpleAnimation__get_Item(animation, animName, 0LL);
  if ( !animation )
    goto LABEL_14;
  klass = animation->klass;
  v9 = animation;
  v10 = *(unsigned __int16 *)(&animation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&animation->klass->_2.bitflags2 + 3) )
  {
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v10;
      p_offset += 2;
      if ( !v10 )
        goto LABEL_9;
    }
    v12 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v12 = sub_1C1C7C0(animation, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v12)(v9, *(_QWORD *)(v12 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_1BCAA3C(animation, animName);
  SimpleAnimation__Play_64539336(animation, animName, 0LL);
}
void __fastcall WrapBattleSimpleAnimation___ctor(
        WrapBattleSimpleAnimation_o *this,
        SimpleAnimation_o *simpleAnim,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = simpleAnim;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)simpleAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleSimpleAnimation__GetPlayingSimpleAnimData(
        WrapBattleSimpleAnimation_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *animation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v5; // x19
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  int *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x20
  __int64 v22; // x8
  unsigned __int64 v23; // x10
  int *v24; // x11
  __int64 v25; // x0
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  SimpleAnimation_State_c **v28; // x11
  __int64 v29; // x0
  WrapBattleBaseAnimation_SimpleData_o *v30; // x20
  int v31; // w8
  __int64 v32; // x0
  __int64 v33; // x8
  System_String_o *v34; // x21
  unsigned __int64 v35; // x10
  SimpleAnimation_State_c **v36; // x11
  __int64 v37; // x0
  float v38; // s8
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  int v44; // [xsp+0h] [xbp-40h]

  if ( (byte_438952A & 1) == 0 )
  {
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_438952A = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B7769C(animation, method);
  klass = animation->klass;
  v5 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v8 = sub_B0F4C0(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v10 )
    sub_B7769C(0LL, v9);
  do
  {
    v11 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
    {
      v12 = 0LL;
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
          goto LABEL_16;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_16:
      v14 = sub_B0F4C0(v10, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
    {
      v30 = 0LL;
      v31 = 74;
      goto LABEL_47;
    }
    v15 = *(_QWORD *)v10;
    if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v17 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
          goto LABEL_23;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_23:
      v18 = sub_B0F4C0(v10, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_B7769C(0LL, v20);
    v22 = *(_QWORD *)v19;
    if ( *(_WORD *)(*(_QWORD *)v19 + 298LL) )
    {
      v23 = 0LL;
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v24 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v23;
        v24 += 4;
        if ( v23 >= *(unsigned __int16 *)(*(_QWORD *)v19 + 298LL) )
          goto LABEL_30;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_30:
      v25 = sub_B0F4C0(v19, SimpleAnimation_State_TypeInfo, 0LL);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 );
  v26 = *(_QWORD *)v21;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v27 = 0LL;
    v28 = (SimpleAnimation_State_c **)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *(v28 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v27;
      v28 += 2;
      if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_37;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 9) + 312;
  }
  else
  {
LABEL_37:
    v29 = sub_B0F4C0(v21, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
  v33 = *(_QWORD *)v21;
  v34 = (System_String_o *)v32;
  if ( *(_WORD *)(*(_QWORD *)v21 + 298LL) )
  {
    v35 = 0LL;
    v36 = (SimpleAnimation_State_c **)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *(v36 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v35;
      v36 += 2;
      if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v21 + 298LL) )
        goto LABEL_44;
    }
    v37 = v33 + 16LL * (*(_DWORD *)v36 + 3) + 312;
  }
  else
  {
LABEL_44:
    v37 = sub_B0F4C0(v21, SimpleAnimation_State_TypeInfo, 3LL);
  }
  LODWORD(v38) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v37)(v21, *(_QWORD *)(v37 + 8)));
  v30 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B77694(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  WrapBattleBaseAnimation_SimpleData___ctor(v30, v34, v38, 0LL);
  v31 = 76;
LABEL_47:
  v44 = v31;
  v39 = *(_QWORD *)v10;
  if ( *(_WORD *)(*(_QWORD *)v10 + 298LL) )
  {
    v40 = 0LL;
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      ++v40;
      v41 += 4;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v10 + 298LL) )
        goto LABEL_51;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_51:
    v42 = sub_B0F4C0(v10, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v10, *(_QWORD *)(v42 + 8));
  if ( v44 == 74 )
    return 0LL;
  return v30;
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
  unsigned __int64 v10; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v12; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4389529 & 1) == 0 )
  {
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    byte_4389529 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    goto LABEL_14;
  animation = (SimpleAnimation_o *)SimpleAnimation__get_Item(animation, animName, 0LL);
  if ( !animation )
    goto LABEL_14;
  klass = animation->klass;
  v9 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v10 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v10;
      p_offset += 2;
      if ( v10 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v12 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v12 = sub_B0F4C0(animation, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v12)(v9, *(_QWORD *)(v12 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_B7769C(animation, animName);
  SimpleAnimation__Play_16815192(animation, animName, 0LL);
}
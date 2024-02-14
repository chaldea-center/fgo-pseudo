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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)simpleAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleSimpleAnimation__GetPlayingSimpleAnimData(
        WrapBattleSimpleAnimation_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SimpleAnimation_o *animation; // x0
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x19
  unsigned __int64 v11; // x10
  int32_t *p_offset; // x11
  __int64 v13; // x0
  __int64 v14; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x10
  int *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x20
  __int64 v25; // x8
  unsigned __int64 v26; // x10
  int *v27; // x11
  __int64 v28; // x0
  __int64 v29; // x8
  unsigned __int64 v30; // x10
  SimpleAnimation_State_c **v31; // x11
  __int64 v32; // x0
  WrapBattleBaseAnimation_SimpleData_o *v33; // x20
  int v34; // w8
  __int64 v35; // x0
  __int64 v36; // x8
  System_String_o *v37; // x21
  unsigned __int64 v38; // x10
  SimpleAnimation_State_c **v39; // x11
  __int64 v40; // x0
  float v41; // s8
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  int v49; // [xsp+0h] [xbp-40h]

  if ( (byte_4213FB8 & 1) == 0 )
  {
    sub_B0D8A4(&System_IDisposable_TypeInfo, method);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v3);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v4);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B0D8A4(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v6);
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, v7);
    byte_4213FB8 = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B0D97C(animation);
  klass = animation->klass;
  v10 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v11;
      p_offset += 4;
      if ( v11 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_AA67A0(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v14 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  if ( !v14 )
    sub_B0D97C(0LL);
  do
  {
    v15 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v16 = 0LL;
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        v17 += 4;
        if ( v16 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_16;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_16:
      v18 = sub_AA67A0(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
    {
      v33 = 0LL;
      v34 = 74;
      goto LABEL_47;
    }
    v19 = *(_QWORD *)v14;
    if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
    {
      v20 = 0LL;
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
          goto LABEL_23;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_23:
      v22 = sub_AA67A0(v14, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    v24 = v23;
    if ( !v23 )
      sub_B0D97C(0LL);
    v25 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v26 = 0LL;
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v27 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v26;
        v27 += 4;
        if ( v26 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_30;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_30:
      v28 = sub_AA67A0(v23, SimpleAnimation_State_TypeInfo, 0LL);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 );
  v29 = *(_QWORD *)v24;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v30 = 0LL;
    v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v30;
      v31 += 2;
      if ( v30 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_37;
    }
    v32 = v29 + 16LL * (*(_DWORD *)v31 + 9) + 312;
  }
  else
  {
LABEL_37:
    v32 = sub_AA67A0(v24, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
  v36 = *(_QWORD *)v24;
  v37 = (System_String_o *)v35;
  if ( *(_WORD *)(*(_QWORD *)v24 + 298LL) )
  {
    v38 = 0LL;
    v39 = (SimpleAnimation_State_c **)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *(v39 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v38;
      v39 += 2;
      if ( v38 >= *(unsigned __int16 *)(*(_QWORD *)v24 + 298LL) )
        goto LABEL_44;
    }
    v40 = v36 + 16LL * (*(_DWORD *)v39 + 3) + 312;
  }
  else
  {
LABEL_44:
    v40 = sub_AA67A0(v24, SimpleAnimation_State_TypeInfo, 3LL);
  }
  LODWORD(v41) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v40)(v24, *(_QWORD *)(v40 + 8)));
  v33 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B0D974(WrapBattleBaseAnimation_SimpleData_TypeInfo, v42, v43);
  WrapBattleBaseAnimation_SimpleData___ctor(v33, v37, v41, 0LL);
  v34 = 76;
LABEL_47:
  v49 = v34;
  v44 = *(_QWORD *)v14;
  if ( *(_WORD *)(*(_QWORD *)v14 + 298LL) )
  {
    v45 = 0LL;
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v14 + 298LL) )
        goto LABEL_51;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_51:
    v47 = sub_AA67A0(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v14, *(_QWORD *)(v47 + 8));
  if ( v49 == 74 )
    return 0LL;
  return v33;
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
  if ( (byte_4213FB7 & 1) == 0 )
  {
    sub_B0D8A4(&SimpleAnimation_State_TypeInfo, animName);
    byte_4213FB7 = 1;
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
    v12 = sub_AA67A0(animation, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v12)(v9, *(_QWORD *)(v12 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_B0D97C(animation);
  SimpleAnimation__Play_50482404(animation, animName, 0LL);
}
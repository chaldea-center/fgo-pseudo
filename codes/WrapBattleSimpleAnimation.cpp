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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)simpleAnim, v5, v6, v7, v8, v9, v10);
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
  __int64 v9; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v11; // x19
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x3
  __int64 v17; // x19
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x3
  __int64 v23; // x8
  unsigned __int64 v24; // x10
  int *v25; // x11
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x3
  __int64 v30; // x20
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **v37; // x11
  __int64 v38; // x0
  WrapBattleBaseAnimation_SimpleData_o *v39; // x20
  int v40; // w8
  __int64 v41; // x0
  __int64 v42; // x3
  __int64 v43; // x8
  System_String_o *v44; // x21
  unsigned __int64 v45; // x10
  SimpleAnimation_State_c **v46; // x11
  __int64 v47; // x0
  float v48; // s8
  __int64 v49; // x8
  unsigned __int64 v50; // x10
  int *v51; // x11
  __int64 v52; // x0
  int v54; // [xsp+0h] [xbp-40h]

  if ( (byte_4187434 & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v3);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v4);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_B2C35C(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v6);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v7);
    byte_4187434 = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B2C434(animation, method);
  klass = animation->klass;
  v11 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v14 = sub_AC5258(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v9);
  }
  v17 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v14)(v11, *(_QWORD *)(v14 + 8));
  if ( !v17 )
    sub_B2C434(0LL, v15);
  do
  {
    v18 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v19 = 0LL;
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_16;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_16:
      v21 = sub_AC5258(v17, System_Collections_IEnumerator_TypeInfo, 0LL, v16);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
    {
      v39 = 0LL;
      v40 = 74;
      goto LABEL_47;
    }
    v23 = *(_QWORD *)v17;
    if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
    {
      v24 = 0LL;
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v25 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v24;
        v25 += 4;
        if ( v24 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
          goto LABEL_23;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_23:
      v26 = sub_AC5258(v17, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v22);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v17, *(_QWORD *)(v26 + 8));
    v30 = v27;
    if ( !v27 )
      sub_B2C434(0LL, v28);
    v31 = *(_QWORD *)v27;
    if ( *(_WORD *)(*(_QWORD *)v27 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v33 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v27 + 298LL) )
          goto LABEL_30;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_30:
      v34 = sub_AC5258(v27, SimpleAnimation_State_TypeInfo, 0LL, v29);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 );
  v35 = *(_QWORD *)v30;
  if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
  {
    v36 = 0LL;
    v37 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *(v37 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v36;
      v37 += 2;
      if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
        goto LABEL_37;
    }
    v38 = v35 + 16LL * (*(_DWORD *)v37 + 9) + 312;
  }
  else
  {
LABEL_37:
    v38 = sub_AC5258(v30, SimpleAnimation_State_TypeInfo, 9LL, v16);
  }
  v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
  v43 = *(_QWORD *)v30;
  v44 = (System_String_o *)v41;
  if ( *(_WORD *)(*(_QWORD *)v30 + 298LL) )
  {
    v45 = 0LL;
    v46 = (SimpleAnimation_State_c **)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *(v46 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v45;
      v46 += 2;
      if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v30 + 298LL) )
        goto LABEL_44;
    }
    v47 = v43 + 16LL * (*(_DWORD *)v46 + 3) + 312;
  }
  else
  {
LABEL_44:
    v47 = sub_AC5258(v30, SimpleAnimation_State_TypeInfo, 3LL, v42);
  }
  LODWORD(v48) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v47)(v30, *(_QWORD *)(v47 + 8)));
  v39 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B2C42C(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  WrapBattleBaseAnimation_SimpleData___ctor(v39, v44, v48, 0LL);
  v40 = 76;
LABEL_47:
  v54 = v40;
  v49 = *(_QWORD *)v17;
  if ( *(_WORD *)(*(_QWORD *)v17 + 298LL) )
  {
    v50 = 0LL;
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      ++v50;
      v51 += 4;
      if ( v50 >= *(unsigned __int16 *)(*(_QWORD *)v17 + 298LL) )
        goto LABEL_51;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_51:
    v52 = sub_AC5258(v17, System_IDisposable_TypeInfo, 0LL, v22);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v17, *(_QWORD *)(v52 + 8));
  if ( v54 == 74 )
    return 0LL;
  return v39;
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
  __int64 v8; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v10; // x21
  unsigned __int64 v11; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v13; // x0

  v4 = *(long double *)&timeline;
  if ( (byte_4187433 & 1) == 0 )
  {
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, animName);
    byte_4187433 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    goto LABEL_14;
  animation = (SimpleAnimation_o *)SimpleAnimation__get_Item(animation, animName, 0LL);
  if ( !animation )
    goto LABEL_14;
  klass = animation->klass;
  v10 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v11 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v11;
      p_offset += 2;
      if ( v11 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_AC5258(animation, SimpleAnimation_State_TypeInfo, 4LL, v8);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v13)(v10, *(_QWORD *)(v13 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_B2C434(animation, animName);
  SimpleAnimation__Play_16486620(animation, animName, 0LL);
}
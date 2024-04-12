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
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)simpleAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleSimpleAnimation__GetPlayingSimpleAnimData(
        WrapBattleSimpleAnimation_o *this,
        const MethodInfo *method)
{
  SimpleAnimation_o *animation; // x0
  __int64 v4; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v6; // x19
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x3
  __int64 v12; // x19
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x3
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  int *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x3
  __int64 v25; // x20
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  SimpleAnimation_State_c **v32; // x11
  __int64 v33; // x0
  WrapBattleBaseAnimation_SimpleData_o *v34; // x20
  int v35; // w8
  __int64 v36; // x0
  __int64 v37; // x3
  __int64 v38; // x8
  System_String_o *v39; // x21
  unsigned __int64 v40; // x10
  SimpleAnimation_State_c **v41; // x11
  __int64 v42; // x0
  float v43; // s8
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  int v49; // [xsp+0h] [xbp-40h]

  if ( (byte_42AF99E & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AF99E = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B52A5C(animation, method);
  klass = animation->klass;
  v6 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v7 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v7;
      p_offset += 4;
      if ( v7 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v9 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v9 = sub_AEB880(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v4);
  }
  v12 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v9)(v6, *(_QWORD *)(v9 + 8));
  if ( !v12 )
    sub_B52A5C(0LL, v10);
  do
  {
    v13 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v14 = 0LL;
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_16;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_16:
      v16 = sub_AEB880(v12, System_Collections_IEnumerator_TypeInfo, 0LL, v11);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
    {
      v34 = 0LL;
      v35 = 74;
      goto LABEL_47;
    }
    v18 = *(_QWORD *)v12;
    if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
    {
      v19 = 0LL;
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v20 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v19;
        v20 += 4;
        if ( v19 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
          goto LABEL_23;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_23:
      v21 = sub_AEB880(v12, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v17);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v12, *(_QWORD *)(v21 + 8));
    v25 = v22;
    if ( !v22 )
      sub_B52A5C(0LL, v23);
    v26 = *(_QWORD *)v22;
    if ( *(_WORD *)(*(_QWORD *)v22 + 298LL) )
    {
      v27 = 0LL;
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v28 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v22 + 298LL) )
          goto LABEL_30;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_30:
      v29 = sub_AEB880(v22, SimpleAnimation_State_TypeInfo, 0LL, v24);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 );
  v30 = *(_QWORD *)v25;
  if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
  {
    v31 = 0LL;
    v32 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *(v32 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v31;
      v32 += 2;
      if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
        goto LABEL_37;
    }
    v33 = v30 + 16LL * (*(_DWORD *)v32 + 9) + 312;
  }
  else
  {
LABEL_37:
    v33 = sub_AEB880(v25, SimpleAnimation_State_TypeInfo, 9LL, v11);
  }
  v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
  v38 = *(_QWORD *)v25;
  v39 = (System_String_o *)v36;
  if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
  {
    v40 = 0LL;
    v41 = (SimpleAnimation_State_c **)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *(v41 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v40;
      v41 += 2;
      if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
        goto LABEL_44;
    }
    v42 = v38 + 16LL * (*(_DWORD *)v41 + 3) + 312;
  }
  else
  {
LABEL_44:
    v42 = sub_AEB880(v25, SimpleAnimation_State_TypeInfo, 3LL, v37);
  }
  LODWORD(v43) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v42)(v25, *(_QWORD *)(v42 + 8)));
  v34 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B52A54(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  WrapBattleBaseAnimation_SimpleData___ctor(v34, v39, v43, 0LL);
  v35 = 76;
LABEL_47:
  v49 = v35;
  v44 = *(_QWORD *)v12;
  if ( *(_WORD *)(*(_QWORD *)v12 + 298LL) )
  {
    v45 = 0LL;
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      ++v45;
      v46 += 4;
      if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v12 + 298LL) )
        goto LABEL_51;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_51:
    v47 = sub_AEB880(v12, System_IDisposable_TypeInfo, 0LL, v17);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v12, *(_QWORD *)(v47 + 8));
  if ( v49 == 74 )
    return 0LL;
  return v34;
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
  if ( (byte_42AF99D & 1) == 0 )
  {
    sub_B52984(&SimpleAnimation_State_TypeInfo);
    byte_42AF99D = 1;
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
    v13 = sub_AEB880(animation, SimpleAnimation_State_TypeInfo, 4LL, v8);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v13)(v10, *(_QWORD *)(v13 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_B52A5C(animation, animName);
  SimpleAnimation__Play_16625408(animation, animName, 0LL);
}
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)simpleAnim, v5, v6, v7, v8, v9, v10);
}


WrapBattleBaseAnimation_SimpleData_o *__fastcall WrapBattleSimpleAnimation__GetPlayingSimpleAnimData(
        WrapBattleSimpleAnimation_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  SimpleAnimation_o *animation; // x0
  __int64 v21; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v23; // x19
  unsigned __int64 v24; // x10
  int32_t *p_offset; // x11
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x3
  __int64 v29; // x19
  __int64 v30; // x8
  unsigned __int64 v31; // x10
  int *v32; // x11
  __int64 v33; // x0
  __int64 v34; // x3
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x3
  __int64 v42; // x20
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  SimpleAnimation_State_c **v49; // x11
  __int64 v50; // x0
  WrapBattleBaseAnimation_SimpleData_o *v51; // x20
  int v52; // w8
  __int64 v53; // x0
  __int64 v54; // x3
  __int64 v55; // x8
  System_String_o *v56; // x21
  unsigned __int64 v57; // x10
  SimpleAnimation_State_c **v58; // x11
  __int64 v59; // x0
  float v60; // s8
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  int v66; // [xsp+0h] [xbp-40h]

  if ( (byte_42E73BA & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v17, v18, v19);
    byte_42E73BA = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_B5D69C(animation, method);
  klass = animation->klass;
  v23 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v24 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      ++v24;
      p_offset += 4;
      if ( v24 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v26 = sub_AF54C0(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL, v21);
  }
  v29 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  if ( !v29 )
    sub_B5D69C(0LL, v27);
  do
  {
    v30 = *(_QWORD *)v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v31 = 0LL;
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v31;
        v32 += 4;
        if ( v31 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_16;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_16:
      v33 = sub_AF54C0(v29, System_Collections_IEnumerator_TypeInfo, 0LL, v28);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
    {
      v51 = 0LL;
      v52 = 74;
      goto LABEL_47;
    }
    v35 = *(_QWORD *)v29;
    if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v37 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
          goto LABEL_23;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_23:
      v38 = sub_AF54C0(v29, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL, v34);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
    v42 = v39;
    if ( !v39 )
      sub_B5D69C(0LL, v40);
    v43 = *(_QWORD *)v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v45 - 1) != SimpleAnimation_State_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_30;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_30:
      v46 = sub_AF54C0(v39, SimpleAnimation_State_TypeInfo, 0LL, v41);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 );
  v47 = *(_QWORD *)v42;
  if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
  {
    v48 = 0LL;
    v49 = (SimpleAnimation_State_c **)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *(v49 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v48;
      v49 += 2;
      if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
        goto LABEL_37;
    }
    v50 = v47 + 16LL * (*(_DWORD *)v49 + 9) + 312;
  }
  else
  {
LABEL_37:
    v50 = sub_AF54C0(v42, SimpleAnimation_State_TypeInfo, 9LL, v28);
  }
  v53 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
  v55 = *(_QWORD *)v42;
  v56 = (System_String_o *)v53;
  if ( *(_WORD *)(*(_QWORD *)v42 + 298LL) )
  {
    v57 = 0LL;
    v58 = (SimpleAnimation_State_c **)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *(v58 - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v57;
      v58 += 2;
      if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v42 + 298LL) )
        goto LABEL_44;
    }
    v59 = v55 + 16LL * (*(_DWORD *)v58 + 3) + 312;
  }
  else
  {
LABEL_44:
    v59 = sub_AF54C0(v42, SimpleAnimation_State_TypeInfo, 3LL, v54);
  }
  LODWORD(v60) = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v59)(v42, *(_QWORD *)(v59 + 8)));
  v51 = (WrapBattleBaseAnimation_SimpleData_o *)sub_B5D694(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  WrapBattleBaseAnimation_SimpleData___ctor(v51, v56, v60, 0LL);
  v52 = 76;
LABEL_47:
  v66 = v52;
  v61 = *(_QWORD *)v29;
  if ( *(_WORD *)(*(_QWORD *)v29 + 298LL) )
  {
    v62 = 0LL;
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      ++v62;
      v63 += 4;
      if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v29 + 298LL) )
        goto LABEL_51;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_51:
    v64 = sub_AF54C0(v29, System_IDisposable_TypeInfo, 0LL, v34);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v29, *(_QWORD *)(v64 + 8));
  if ( v66 == 74 )
    return 0LL;
  return v51;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WrapBattleSimpleAnimation__PlayAnimation(
        WrapBattleSimpleAnimation_o *this,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  __int64 v4; // x3
  long double v5; // q8
  SimpleAnimation_o *animation; // x0
  __int64 v9; // x3
  SimpleAnimation_c *klass; // x8
  SimpleAnimation_o *v11; // x21
  unsigned __int64 v12; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v14; // x0

  v5 = *(long double *)&timeline;
  if ( (byte_42E73B9 & 1) == 0 )
  {
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, (_DWORD)animName, (_DWORD)method, v4);
    byte_42E73B9 = 1;
  }
  animation = this->fields.animation;
  if ( !animation )
    goto LABEL_14;
  animation = (SimpleAnimation_o *)SimpleAnimation__get_Item(animation, animName, 0LL);
  if ( !animation )
    goto LABEL_14;
  klass = animation->klass;
  v11 = animation;
  if ( *(_WORD *)&animation->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
    while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
    {
      ++v12;
      p_offset += 2;
      if ( v12 >= *(unsigned __int16 *)&animation->klass->_2.bitflags1 )
        goto LABEL_9;
    }
    v14 = (__int64)(&klass->vtable._4_OnEnable.method + 2 * *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v14 = sub_AF54C0(animation, SimpleAnimation_State_TypeInfo, 4LL, v9);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v14)(v11, *(_QWORD *)(v14 + 8), v5);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_B5D69C(animation, animName);
  SimpleAnimation__Play_16676044(animation, animName, 0LL);
}
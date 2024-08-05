void __fastcall WrapBattleSimpleAnimation___ctor(
        WrapBattleSimpleAnimation_o *this,
        SimpleAnimation_o *simpleAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = simpleAnim;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)simpleAnim, v5, v6);
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
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x19
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x20
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  __int64 v35; // x21
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x22
  __int64 v39; // x9
  SimpleAnimation_State_c **v40; // x10
  __int64 v41; // x0
  int v42; // s8
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  if ( (byte_4A0159F & 1) == 0 )
  {
    sub_1B64870(&System_IDisposable_TypeInfo, method);
    sub_1B64870(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v3);
    sub_1B64870(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v4);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B64870(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v6);
    sub_1B64870(&SimpleAnimation_State_TypeInfo, v7);
    byte_4A0159F = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_1B64ACC(animation, method);
  klass = animation->klass;
  v10 = animation;
  v11 = *(unsigned __int16 *)(&animation->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&animation->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_SimpleAnimation_State__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_9;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v13 = sub_1BB6850(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v15 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  if ( !v15 )
    sub_1B64ACC(0LL, v14);
  do
  {
    v16 = *(_QWORD *)v15;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_16:
      v19 = sub_1BB6850(v15, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v15, *(_QWORD *)(v19 + 8)) & 1) == 0 )
    {
      v35 = 0LL;
      goto LABEL_47;
    }
    v20 = *(_QWORD *)v15;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v22 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_23;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_23:
      v23 = sub_1BB6850(v15, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v15, *(_QWORD *)(v23 + 8));
    v26 = v24;
    if ( !v24 )
      sub_1B64ACC(0LL, v25);
    v27 = *(_QWORD *)v24;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v29 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_30;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_30:
      v30 = sub_1BB6850(v24, SimpleAnimation_State_TypeInfo, 0LL);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 );
  v31 = *(_QWORD *)v26;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_37;
    }
    v34 = v31 + 16LL * (*(_DWORD *)v33 + 9) + 312;
  }
  else
  {
LABEL_37:
    v34 = sub_1BB6850(v26, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
  v37 = *(_QWORD *)v26;
  v38 = v36;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v40 = (SimpleAnimation_State_c **)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *(v40 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v39;
      v40 += 2;
      if ( !v39 )
        goto LABEL_44;
    }
    v41 = v37 + 16LL * (*(_DWORD *)v40 + 3) + 312;
  }
  else
  {
LABEL_44:
    v41 = sub_1BB6850(v26, SimpleAnimation_State_TypeInfo, 3LL);
  }
  v42 = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v41)(v26, *(_QWORD *)(v41 + 8)));
  v35 = sub_1B64ABC(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v35, 0LL);
  *(_QWORD *)(v35 + 16) = v38;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v35 + 16), v38, v43, v44);
  *(_DWORD *)(v35 + 24) = v42;
LABEL_47:
  v45 = *(_QWORD *)v15;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v15 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v15 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_51;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_51:
    v48 = sub_1BB6850(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v15, *(_QWORD *)(v48 + 8));
  return (WrapBattleBaseAnimation_SimpleData_o *)v35;
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
  if ( (byte_4A0159E & 1) == 0 )
  {
    sub_1B64870(&SimpleAnimation_State_TypeInfo, animName);
    byte_4A0159E = 1;
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
    v12 = sub_1BB6850(animation, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v12)(v9, *(_QWORD *)(v12 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_1B64ACC(animation, animName);
  SimpleAnimation__Play_63521240(animation, animName, 0LL);
}
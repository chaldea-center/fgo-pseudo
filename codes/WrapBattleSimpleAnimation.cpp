void __fastcall WrapBattleSimpleAnimation___ctor(
        WrapBattleSimpleAnimation_o *this,
        SimpleAnimation_o *simpleAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.animation = simpleAnim;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)simpleAnim, v5, v6);
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
  __int64 v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  SimpleAnimation_State_c **v31; // x10
  __int64 v32; // x0
  __int64 v33; // x21
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x22
  __int64 v37; // x9
  SimpleAnimation_State_c **v38; // x10
  __int64 v39; // x0
  int v40; // s8
  __int64 v41; // x1
  __int64 v42; // x2
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  if ( (byte_49FF4A1 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, v3);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&WrapBattleBaseAnimation_SimpleData_TypeInfo, v6);
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, v7);
    byte_49FF4A1 = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0LL)) == 0LL )
    sub_1B64324(animation);
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
    v13 = sub_1BB60A8(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0LL);
  }
  v14 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v13)(v10, *(_QWORD *)(v13 + 8));
  if ( !v14 )
    sub_1B64324(0LL);
  do
  {
    v15 = *(_QWORD *)v14;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_16:
      v18 = sub_1BB60A8(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
    {
      v33 = 0LL;
      goto LABEL_47;
    }
    v19 = *(_QWORD *)v14;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_23;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_23:
      v22 = sub_1BB60A8(v14, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    v24 = v23;
    if ( !v23 )
      sub_1B64324(0LL);
    v25 = *(_QWORD *)v23;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v27 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_30;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_30:
      v28 = sub_1BB60A8(v23, SimpleAnimation_State_TypeInfo, 0LL);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 );
  v29 = *(_QWORD *)v24;
  v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v31 = (SimpleAnimation_State_c **)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *(v31 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v30;
      v31 += 2;
      if ( !v30 )
        goto LABEL_37;
    }
    v32 = v29 + 16LL * (*(_DWORD *)v31 + 9) + 312;
  }
  else
  {
LABEL_37:
    v32 = sub_1BB60A8(v24, SimpleAnimation_State_TypeInfo, 9LL);
  }
  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
  v35 = *(_QWORD *)v24;
  v36 = v34;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v38 = (SimpleAnimation_State_c **)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *(v38 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v37;
      v38 += 2;
      if ( !v37 )
        goto LABEL_44;
    }
    v39 = v35 + 16LL * (*(_DWORD *)v38 + 3) + 312;
  }
  else
  {
LABEL_44:
    v39 = sub_1BB60A8(v24, SimpleAnimation_State_TypeInfo, 3LL);
  }
  v40 = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v39)(v24, *(_QWORD *)(v39 + 8)));
  v33 = sub_1B64314(WrapBattleBaseAnimation_SimpleData_TypeInfo, v41, v42);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  *(_QWORD *)(v33 + 16) = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 16), v36, v43, v44);
  *(_DWORD *)(v33 + 24) = v40;
LABEL_47:
  v45 = *(_QWORD *)v14;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
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
    v48 = sub_1BB60A8(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v14, *(_QWORD *)(v48 + 8));
  return (WrapBattleBaseAnimation_SimpleData_o *)v33;
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
  if ( (byte_49FF4A0 & 1) == 0 )
  {
    sub_1B640C8(&SimpleAnimation_State_TypeInfo, animName);
    byte_49FF4A0 = 1;
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
    v12 = sub_1BB60A8(animation, SimpleAnimation_State_TypeInfo, 4LL);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v12)(v9, *(_QWORD *)(v12 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0LL), (animation = this->fields.animation) == 0LL) )
LABEL_14:
    sub_1B64324(animation);
  SimpleAnimation__Play_63513060(animation, animName, 0LL);
}
void WrapBattleSimpleAnimation___ctor(
        WrapBattleSimpleAnimation_o *this,
        SimpleAnimation_o *simpleAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.animation = simpleAnim;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)simpleAnim, v5, v6);
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
  __int64 v9; // x19
  __int64 v10; // x8
  __int64 v11; // x9
  int *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x8
  __int64 v15; // x9
  int *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  SimpleAnimation_State_c **v26; // x10
  __int64 v27; // x0
  __int64 v28; // x21
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x22
  __int64 v32; // x9
  SimpleAnimation_State_c **v33; // x10
  __int64 v34; // x0
  int v35; // s8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4C3B154 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3B154 = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0)) == 0 )
    sub_1C32E7C(animation);
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
    v8 = sub_1C83438(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v9 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v9 )
    sub_1C32E7C(0);
  do
  {
    v10 = *(_QWORD *)v9;
    v11 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
    {
      v12 = (int *)(*(_QWORD *)(v10 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = v10 + 16LL * *v12 + 312;
    }
    else
    {
LABEL_16:
      v13 = sub_1C83438(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8)) & 1) == 0 )
    {
      v28 = 0;
      goto LABEL_47;
    }
    v14 = *(_QWORD *)v9;
    v15 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
    {
      v16 = (int *)(*(_QWORD *)(v14 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v16 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_23;
      }
      v17 = v14 + 16LL * *v16 + 312;
    }
    else
    {
LABEL_23:
      v17 = sub_1C83438(v9, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))v17)(v9, *(_QWORD *)(v17 + 8));
    v19 = v18;
    if ( !v18 )
      sub_1C32E7C(0);
    v20 = *(_QWORD *)v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((SimpleAnimation_State_c **)v22 - 1) != SimpleAnimation_State_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_30;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_30:
      v23 = sub_1C83438(v18, SimpleAnimation_State_TypeInfo, 0);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 );
  v24 = *(_QWORD *)v19;
  v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v26 = (SimpleAnimation_State_c **)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *(v26 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_37;
    }
    v27 = v24 + 16LL * (*(_DWORD *)v26 + 9) + 312;
  }
  else
  {
LABEL_37:
    v27 = sub_1C83438(v19, SimpleAnimation_State_TypeInfo, 9);
  }
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
  v30 = *(_QWORD *)v19;
  v31 = v29;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v33 = (SimpleAnimation_State_c **)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *(v33 - 1) != SimpleAnimation_State_TypeInfo )
    {
      --v32;
      v33 += 2;
      if ( !v32 )
        goto LABEL_44;
    }
    v34 = v30 + 16LL * (*(_DWORD *)v33 + 3) + 312;
  }
  else
  {
LABEL_44:
    v34 = sub_1C83438(v19, SimpleAnimation_State_TypeInfo, 3);
  }
  v35 = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v34)(v19, *(_QWORD *)(v34 + 8)));
  v28 = sub_1C32E6C(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v28, 0);
  *(_QWORD *)(v28 + 16) = v31;
  sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 16), v31, v36, v37);
  *(_DWORD *)(v28 + 24) = v35;
LABEL_47:
  v38 = *(_QWORD *)v9;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v9 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v9 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_51;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_51:
    v41 = sub_1C83438(v9, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v9, *(_QWORD *)(v41 + 8));
  return (WrapBattleBaseAnimation_SimpleData_o *)v28;
}


// local variable allocation has failed, the output may be wrong!
void WrapBattleSimpleAnimation__PlayAnimation(
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
  if ( (byte_4C3B153 & 1) == 0 )
  {
    sub_1C32C20(&SimpleAnimation_State_TypeInfo);
    byte_4C3B153 = 1;
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
    v12 = (__int64)(&klass->vtable._4_OnEnable + *(_DWORD *)p_offset);
  }
  else
  {
LABEL_9:
    v12 = sub_1C83438(animation, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v12)(v9, *(_QWORD *)(v12 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0), (animation = this->fields.animation) == 0) )
LABEL_14:
    sub_1C32E7C(animation);
  SimpleAnimation__Play_66464300(animation, animName, 0);
}
void WrapBattleSimpleAnimation___ctor(
        WrapBattleSimpleAnimation_o *this,
        SimpleAnimation_o *simpleAnim,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.animation = simpleAnim;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)simpleAnim, v5, v6, v7, v8, v9, v10);
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
  __int64 v9; // x1
  __int64 v10; // x19
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
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  SimpleAnimation_State_c **v28; // x10
  __int64 v29; // x0
  __int64 v30; // x21
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x22
  __int64 v34; // x9
  SimpleAnimation_State_c **v35; // x10
  __int64 v36; // x0
  int v37; // s8
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0

  if ( (byte_4D3014F & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&WrapBattleBaseAnimation_SimpleData_TypeInfo);
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D3014F = 1;
  }
  animation = this->fields.animation;
  if ( !animation || (animation = (SimpleAnimation_o *)SimpleAnimation__GetStates(animation, 0)) == 0 )
    sub_1C942F0(animation, method);
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
    v8 = sub_1C6A420(animation, System_Collections_Generic_IEnumerable_SimpleAnimation_State__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(SimpleAnimation_o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  if ( !v10 )
    sub_1C942F0(0, v9);
  do
  {
    v11 = *(_QWORD *)v10;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_16:
      v14 = sub_1C6A420(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
    {
      v30 = 0;
      goto LABEL_47;
    }
    v15 = *(_QWORD *)v10;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_SimpleAnimation_State__c **)v17 - 1) != System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_23;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_23:
      v18 = sub_1C6A420(v10, System_Collections_Generic_IEnumerator_SimpleAnimation_State__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_1C942F0(0, v20);
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
          goto LABEL_30;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_30:
      v25 = sub_1C6A420(v19, SimpleAnimation_State_TypeInfo, 0);
    }
  }
  while ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 );
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
        goto LABEL_37;
    }
    v29 = v26 + 16LL * (*(_DWORD *)v28 + 9) + 312;
  }
  else
  {
LABEL_37:
    v29 = sub_1C6A420(v21, SimpleAnimation_State_TypeInfo, 9);
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
        goto LABEL_44;
    }
    v36 = v32 + 16LL * (*(_DWORD *)v35 + 3) + 312;
  }
  else
  {
LABEL_44:
    v36 = sub_1C6A420(v21, SimpleAnimation_State_TypeInfo, 3);
  }
  v37 = COERCE_UNSIGNED_INT128(((long double (__fastcall *)(__int64, _QWORD))*(_QWORD *)v36)(v21, *(_QWORD *)(v36 + 8)));
  v30 = sub_1C942E4(WrapBattleBaseAnimation_SimpleData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v30, 0);
  *(_QWORD *)(v30 + 16) = v33;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 16), v33, v38, v39, v40, v41, v42, v43);
  *(_DWORD *)(v30 + 24) = v37;
LABEL_47:
  v44 = *(_QWORD *)v10;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_51;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_51:
    v47 = sub_1C6A420(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v10, *(_QWORD *)(v47 + 8));
  return (WrapBattleBaseAnimation_SimpleData_o *)v30;
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
  if ( (byte_4D3014E & 1) == 0 )
  {
    sub_1C94098(&SimpleAnimation_State_TypeInfo);
    byte_4D3014E = 1;
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
    v12 = sub_1C6A420(animation, SimpleAnimation_State_TypeInfo, 4);
  }
  (*(void (__fastcall **)(SimpleAnimation_o *, _QWORD, long double))v12)(v9, *(_QWORD *)(v12 + 8), v4);
  animation = this->fields.animation;
  if ( !animation || (SimpleAnimation__Sample(animation, 0), (animation = this->fields.animation) == 0) )
LABEL_14:
    sub_1C942F0(animation, animName);
  SimpleAnimation__Play_67362784(animation, animName, 0);
}
void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  AssetPathLoadCounter_o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B152E8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetPathLoadCounter_TypeInfo, method, v2);
    byte_4B152E8 = 1;
  }
  v5 = (AssetPathLoadCounter_o *)sub_1BCAA2C(AssetPathLoadCounter_TypeInfo, method, v2, v3);
  AssetPathLoadCounter___ctor(v5, v6);
  this->fields.pathCounter = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetLoadWrapperBase__AddLoadCount(
        AssetLoadWrapperBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1BCAA3C(0LL, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, method);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
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
  AssetPathLoadCounter_o *pathCounter; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  int v24; // w1
  __int64 v25; // x21
  int v26; // w25
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B152E7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v10, v11);
    byte_4B152E7 = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, method);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v21 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( v24 >= 1 )
    {
      v25 = v23;
      v26 = v24 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v25,
          this->klass[1]._1.name);
        --v26;
      }
      while ( v26 > 1 );
    }
  }
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_26;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_26:
    v30 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v30)(
    Enumerator,
    *(_QWORD *)(v30 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_1BCAA3C(pathCounter, method);
  AssetPathLoadCounter__Clear(pathCounter, method);
}


void __fastcall AssetLoadWrapperBase__SubLoadCount(
        AssetLoadWrapperBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1BCAA3C(0LL, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, method);
}
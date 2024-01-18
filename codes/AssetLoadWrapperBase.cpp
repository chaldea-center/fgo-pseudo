void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_418A6D0 & 1) == 0 )
  {
    sub_B2C35C(&AssetPathLoadCounter_TypeInfo, method);
    byte_418A6D0 = 1;
  }
  v3 = (AssetPathLoadCounter_o *)sub_B2C42C(AssetPathLoadCounter_TypeInfo);
  AssetPathLoadCounter___ctor(v3, 0LL);
  this->fields.pathCounter = v3;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(0LL, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, 0LL);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetPathLoadCounter_o *pathCounter; // x0
  __int64 v8; // x1
  __int64 v9; // x3
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  int v16; // w1
  __int64 v17; // x21
  int v18; // w24
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  unsigned __int64 v20; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v23; // x3
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v24; // x8
  unsigned __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // x0

  if ( (byte_418A6CF & 1) == 0 )
  {
    sub_B2C35C(&System_IDisposable_TypeInfo, method);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, v3);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v6);
    byte_418A6CF = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, 0LL);
  if ( !Enumerator )
    sub_B2C434(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v20 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        p_offset += 4;
        if ( v20 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_AC5258(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v9);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v12 = 0LL;
      v13 = &v11->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v13 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        ++v12;
        v13 += 4;
        if ( v12 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v14 = (__int64)&v11->vtable[*v13].method;
    }
    else
    {
LABEL_10:
      v14 = sub_AC5258(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL, v23);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8));
    if ( v16 >= 1 )
    {
      v17 = v15;
      v18 = v16 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v17,
          this->klass[1]._1.name);
        --v18;
      }
      while ( v18 >= 2 );
    }
  }
  v24 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v25 = 0LL;
    v26 = &v24->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v26 - 1) != System_IDisposable_TypeInfo )
    {
      ++v25;
      v26 += 4;
      if ( v25 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v27 = (__int64)&v24->vtable[*v26].method;
  }
  else
  {
LABEL_26:
    v27 = sub_AC5258(Enumerator, System_IDisposable_TypeInfo, 0LL, v23);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v27)(
    Enumerator,
    *(_QWORD *)(v27 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_B2C434(pathCounter, method);
  AssetPathLoadCounter__Clear(pathCounter, 0LL);
}


void __fastcall AssetLoadWrapperBase__SubLoadCount(
        AssetLoadWrapperBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_B2C434(0LL, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, 0LL);
}
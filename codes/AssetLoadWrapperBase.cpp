void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4354F43 & 1) == 0 )
  {
    sub_B70694(&AssetPathLoadCounter_TypeInfo);
    byte_4354F43 = 1;
  }
  v3 = (AssetPathLoadCounter_o *)sub_B70764(AssetPathLoadCounter_TypeInfo);
  AssetPathLoadCounter___ctor(v3, 0LL);
  this->fields.pathCounter = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
    sub_B7076C(0LL, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, 0LL);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v6; // x8
  unsigned __int64 v7; // x10
  int32_t *v8; // x11
  __int64 v9; // x0
  __int64 v10; // x0
  int v11; // w1
  __int64 v12; // x21
  int v13; // w24
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  unsigned __int64 v15; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v18; // x8
  unsigned __int64 v19; // x10
  int32_t *v20; // x11
  __int64 v21; // x0

  if ( (byte_4354F42 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_4354F42 = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, 0LL);
  if ( !Enumerator )
    sub_B7076C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_B08590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v6 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      v8 = &v6->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v8 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        ++v7;
        v8 += 4;
        if ( v7 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v9 = (__int64)&v6->vtable[*v8].method;
    }
    else
    {
LABEL_10:
      v9 = sub_B08590(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL);
    }
    v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8));
    if ( v11 >= 1 )
    {
      v12 = v10;
      v13 = v11 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v12,
          this->klass[1]._1.name);
        --v13;
      }
      while ( v13 >= 2 );
    }
  }
  v18 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v19 = 0LL;
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      ++v19;
      v20 += 4;
      if ( v19 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20].method;
  }
  else
  {
LABEL_26:
    v21 = sub_B08590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v21)(
    Enumerator,
    *(_QWORD *)(v21 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_B7076C(pathCounter, method);
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
    sub_B7076C(0LL, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, 0LL);
}
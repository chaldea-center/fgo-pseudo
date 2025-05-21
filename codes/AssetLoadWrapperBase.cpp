void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B43AED & 1) == 0 )
  {
    sub_1BDB878(&AssetPathLoadCounter_TypeInfo, method);
    byte_4B43AED = 1;
  }
  v3 = (AssetPathLoadCounter_o *)sub_1BDBAC4(AssetPathLoadCounter_TypeInfo);
  AssetPathLoadCounter___ctor(v3, v4);
  this->fields.pathCounter = v3;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v5, v6);
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
    sub_1BDBAD4(0LL, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, method);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetPathLoadCounter_o *pathCounter; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  int v19; // w1
  __int64 v20; // x21
  int v21; // w25
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4B43AEC & 1) == 0 )
  {
    sub_1BDB878(&System_IDisposable_TypeInfo, method);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, v3);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v6);
    byte_4B43AEC = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, method);
  if ( !Enumerator )
    sub_1BDBAD4(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C2C00C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v16 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1C2C00C(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( v19 >= 1 )
    {
      v20 = v18;
      v21 = v19 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v20,
          this->klass[1]._1.name);
        --v21;
      }
      while ( v21 > 1 );
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_26;
    }
    v25 = (__int64)&v22->vtable[*v24].method;
  }
  else
  {
LABEL_26:
    v25 = sub_1C2C00C(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v25)(
    Enumerator,
    *(_QWORD *)(v25 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_1BDBAD4(pathCounter, method);
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
    sub_1BDBAD4(0LL, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, method);
}
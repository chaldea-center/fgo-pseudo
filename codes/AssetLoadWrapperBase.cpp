void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetPathLoadCounter_o *v4; // x20
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB545 & 1) == 0 )
  {
    sub_1B640C8(&AssetPathLoadCounter_TypeInfo, method);
    byte_49FB545 = 1;
  }
  v4 = (AssetPathLoadCounter_o *)sub_1B64314(AssetPathLoadCounter_TypeInfo, method, v2);
  AssetPathLoadCounter___ctor(v4, v5);
  this->fields.pathCounter = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v6, v7);
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
    sub_1B64324(0LL);
  AssetPathLoadCounter__AddCount(pathCounter, path, method);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetPathLoadCounter_o *pathCounter; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  int v18; // w1
  __int64 v19; // x21
  int v20; // w25
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_49FB544 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, v3);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v6);
    byte_49FB544 = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, method);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v15 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_16;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_16:
      v16 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8));
    if ( v18 >= 1 )
    {
      v19 = v17;
      v20 = v18 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v19,
          this->klass[1]._1.name);
        --v20;
      }
      while ( v20 > 1 );
    }
  }
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_26;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_26:
    v24 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v24)(
    Enumerator,
    *(_QWORD *)(v24 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_1B64324(pathCounter);
  AssetPathLoadCounter__Clear(pathCounter, v25);
}


void __fastcall AssetLoadWrapperBase__SubLoadCount(
        AssetLoadWrapperBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1B64324(0LL);
  AssetPathLoadCounter__SubCount(pathCounter, path, method);
}
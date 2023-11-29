void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AssetPathLoadCounter_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FCA09 & 1) == 0 )
  {
    sub_B16FFC(&AssetPathLoadCounter_TypeInfo, method);
    byte_40FCA09 = 1;
  }
  v6 = (AssetPathLoadCounter_o *)sub_B170CC(AssetPathLoadCounter_TypeInfo, method, v2, v3, v4);
  AssetPathLoadCounter___ctor(v6, 0LL);
  this->fields.pathCounter = v6;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  AssetPathLoadCounter__AddCount(pathCounter, path, 0LL);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  AssetPathLoadCounter_o *pathCounter; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v9; // x8
  unsigned __int64 v10; // x10
  int32_t *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  int v14; // w1
  __int64 v15; // x21
  int v16; // w24
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  AssetPathLoadCounter_o *v25; // x0

  if ( (byte_40FCA08 & 1) == 0 )
  {
    sub_B16FFC(&System_IDisposable_TypeInfo, method);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, v3);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v4);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v6);
    byte_40FCA08 = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, 0LL);
  if ( !Enumerator )
    sub_B170D4();
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v18 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v18;
        p_offset += 4;
        if ( v18 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v10 = 0LL;
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v11 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        ++v10;
        v11 += 4;
        if ( v10 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v12 = (__int64)&v9->vtable[*v11].method;
    }
    else
    {
LABEL_10:
      v12 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v12)(
            Enumerator,
            *(_QWORD *)(v12 + 8));
    if ( v14 >= 1 )
    {
      v15 = v13;
      v16 = v14 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v15,
          this->klass[1]._1.name);
        --v16;
      }
      while ( v16 >= 2 );
    }
  }
  v21 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      ++v22;
      v23 += 4;
      if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v24 = (__int64)&v21->vtable[*v23].method;
  }
  else
  {
LABEL_26:
    v24 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v24)(
    Enumerator,
    *(_QWORD *)(v24 + 8));
  v25 = this->fields.pathCounter;
  if ( !v25 )
LABEL_30:
    sub_B170D4();
  AssetPathLoadCounter__Clear(v25, 0LL);
}


void __fastcall AssetLoadWrapperBase__SubLoadCount(
        AssetLoadWrapperBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_B170D4();
  AssetPathLoadCounter__SubCount(pathCounter, path, 0LL);
}
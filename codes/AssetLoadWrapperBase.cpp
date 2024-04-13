void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetPathLoadCounter_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42EB78E & 1) == 0 )
  {
    sub_B5D5C4(&AssetPathLoadCounter_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB78E = 1;
  }
  v5 = (AssetPathLoadCounter_o *)sub_B5D694(AssetPathLoadCounter_TypeInfo);
  AssetPathLoadCounter___ctor(v5, 0LL);
  this->fields.pathCounter = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(0LL, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, 0LL);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  AssetPathLoadCounter_o *pathCounter; // x0
  __int64 v18; // x1
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v21; // x8
  unsigned __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  int v26; // w1
  __int64 v27; // x21
  int v28; // w24
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x3
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v34; // x8
  unsigned __int64 v35; // x10
  int32_t *v36; // x11
  __int64 v37; // x0

  if ( (byte_42EB78D & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__, v14, v15, v16);
    byte_42EB78D = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, 0LL);
  if ( !Enumerator )
    sub_B5D69C(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v30 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v30;
        p_offset += 4;
        if ( v30 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_AF54C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v19);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v23 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_10:
      v24 = sub_AF54C0(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL, v33);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( v26 >= 1 )
    {
      v27 = v25;
      v28 = v26 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v27,
          this->klass[1]._1.name);
        --v28;
      }
      while ( v28 >= 2 );
    }
  }
  v34 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v35 = 0LL;
    v36 = &v34->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      ++v35;
      v36 += 4;
      if ( v35 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v37 = (__int64)&v34->vtable[*v36].method;
  }
  else
  {
LABEL_26:
    v37 = sub_AF54C0(Enumerator, System_IDisposable_TypeInfo, 0LL, v33);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v37)(
    Enumerator,
    *(_QWORD *)(v37 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_B5D69C(pathCounter, method);
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
    sub_B5D69C(0LL, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, 0LL);
}
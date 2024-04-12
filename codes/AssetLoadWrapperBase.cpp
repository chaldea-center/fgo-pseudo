void __fastcall AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B2DAC & 1) == 0 )
  {
    sub_B52984(&AssetPathLoadCounter_TypeInfo);
    byte_42B2DAC = 1;
  }
  v3 = (AssetPathLoadCounter_o *)sub_B52A54(AssetPathLoadCounter_TypeInfo);
  AssetPathLoadCounter___ctor(v3, 0LL);
  this->fields.pathCounter = v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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
    sub_B52A5C(0LL, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, 0LL);
}


void __fastcall AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0
  __int64 v4; // x1
  __int64 v5; // x3
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v7; // x8
  unsigned __int64 v8; // x10
  int32_t *v9; // x11
  __int64 v10; // x0
  __int64 v11; // x0
  int v12; // w1
  __int64 v13; // x21
  int v14; // w24
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  unsigned __int64 v16; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v19; // x3
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v20; // x8
  unsigned __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // x0

  if ( (byte_42B2DAB & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo);
    sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_42B2DAB = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, 0LL);
  if ( !Enumerator )
    sub_B52A5C(0LL, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v16 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v16;
        p_offset += 4;
        if ( v16 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_19:
      p_method = sub_AEB880(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL, v5);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v7 = Enumerator->klass;
    if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      v9 = &v7->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v9 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        ++v8;
        v9 += 4;
        if ( v8 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      v10 = (__int64)&v7->vtable[*v9].method;
    }
    else
    {
LABEL_10:
      v10 = sub_AEB880(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0LL, v19);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v10)(
            Enumerator,
            *(_QWORD *)(v10 + 8));
    if ( v12 >= 1 )
    {
      v13 = v11;
      v14 = v12 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, const char *))this->klass[1]._1.gc_desc)(
          this,
          v13,
          this->klass[1]._1.name);
        --v14;
      }
      while ( v14 >= 2 );
    }
  }
  v20 = Enumerator->klass;
  if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
  {
    v21 = 0LL;
    v22 = &v20->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
    {
      ++v21;
      v22 += 4;
      if ( v21 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
        goto LABEL_26;
    }
    v23 = (__int64)&v20->vtable[*v22].method;
  }
  else
  {
LABEL_26:
    v23 = sub_AEB880(Enumerator, System_IDisposable_TypeInfo, 0LL, v19);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v23)(
    Enumerator,
    *(_QWORD *)(v23 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_B52A5C(pathCounter, method);
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
    sub_B52A5C(0LL, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, 0LL);
}
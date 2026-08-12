void AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_596F7C7 & 1) == 0 )
  {
    sub_2213A60(&AssetPathLoadCounter_TypeInfo);
    byte_596F7C7 = 1;
  }
  v3 = (AssetPathLoadCounter_o *)sub_2213CCC(AssetPathLoadCounter_TypeInfo);
  AssetPathLoadCounter___ctor(v3, v4);
  this->fields.pathCounter = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetLoadWrapperBase__AddLoadCount(AssetLoadWrapperBase_o *this, System_String_o *path, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_2213CDC(0, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, method);
}


void AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *i; // x20
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  int v17; // w1
  __int64 v18; // x20
  int v19; // w23
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *v24; // [xsp+18h] [xbp-38h]

  if ( (byte_596F7C6 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_596F7C6 = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_36;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, method);
  v24 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v5);
  for ( i = Enumerator; ; i = v24 )
  {
    klass = i->klass;
    v8 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_10;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v10 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v11 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v10)(
            i,
            *(_QWORD *)(v10 + 8));
    if ( (v11 & 1) == 0 )
      break;
    if ( !v24 )
      sub_2213CDC(v11, method);
    v12 = v24->klass;
    v13 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v14 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_18;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_18:
      v15 = sub_224BC3C(v24, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v15)(
            v24,
            *(_QWORD *)(v15 + 8));
    if ( v17 >= 1 )
    {
      v18 = v16;
      v19 = v17 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, void *))this->klass[1]._1.image)(
          this,
          v18,
          this->klass[1]._1.gc_desc);
        --v19;
      }
      while ( v19 > 1 );
    }
  }
  if ( v24 )
  {
    v20 = v24->klass;
    v21 = *(unsigned __int16 *)&v24->klass->_2.rank;
    if ( *(_WORD *)&v24->klass->_2.rank )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_30;
      }
      v23 = (__int64)&v20->vtable[*v22];
    }
    else
    {
LABEL_30:
      v23 = sub_224BC3C(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v23)(
      v24,
      *(_QWORD *)(v23 + 8));
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_36:
    sub_2213CDC(pathCounter, method);
  AssetPathLoadCounter__Clear(pathCounter, method);
}


void AssetLoadWrapperBase__SubLoadCount(AssetLoadWrapperBase_o *this, System_String_o *path, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_2213CDC(0, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, method);
}
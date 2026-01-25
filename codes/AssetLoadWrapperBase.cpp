void AssetLoadWrapperBase___ctor(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CED6A5 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetPathLoadCounter_TypeInfo);
    byte_4CED6A5 = 1;
  }
  v3 = (AssetPathLoadCounter_o *)sub_1C7BD34(AssetPathLoadCounter_TypeInfo);
  AssetPathLoadCounter___ctor(v3, v4);
  this->fields.pathCounter = v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetLoadWrapperBase__AddLoadCount(AssetLoadWrapperBase_o *this, System_String_o *path, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1C7BD40(0, path);
  AssetPathLoadCounter__AddCount(pathCounter, path, method);
}


void AssetLoadWrapperBase__ReleaseAll(AssetLoadWrapperBase_o *this, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  int v15; // w1
  __int64 v16; // x21
  int v17; // w25
  System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0

  if ( (byte_4CED6A4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Key__);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__int__get_Value__);
    byte_4CED6A4 = 1;
  }
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    goto LABEL_30;
  Enumerator = AssetPathLoadCounter__GetEnumerator(pathCounter, method);
  if ( !Enumerator )
    sub_1C7BD40(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C51E70(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__int___c **)v12 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C51E70(Enumerator, System_Collections_Generic_IEnumerator_KeyValuePair_string__int___TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( v15 >= 1 )
    {
      v16 = v14;
      v17 = v15 + 1;
      do
      {
        ((void (__fastcall *)(AssetLoadWrapperBase_o *, __int64, void *))this->klass[1]._1.image)(
          this,
          v16,
          this->klass[1]._1.gc_desc);
        --v17;
      }
      while ( v17 > 1 );
    }
  }
  v18 = Enumerator->klass;
  v19 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v20 = &v18->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v20 - 1) != System_IDisposable_TypeInfo )
    {
      --v19;
      v20 += 4;
      if ( !v19 )
        goto LABEL_26;
    }
    v21 = (__int64)&v18->vtable[*v20];
  }
  else
  {
LABEL_26:
    v21 = sub_1C51E70(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *, _QWORD))v21)(
    Enumerator,
    *(_QWORD *)(v21 + 8));
  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
LABEL_30:
    sub_1C7BD40(pathCounter, method);
  AssetPathLoadCounter__Clear(pathCounter, method);
}


void AssetLoadWrapperBase__SubLoadCount(AssetLoadWrapperBase_o *this, System_String_o *path, const MethodInfo *method)
{
  AssetPathLoadCounter_o *pathCounter; // x0

  pathCounter = this->fields.pathCounter;
  if ( !pathCounter )
    sub_1C7BD40(0, path);
  AssetPathLoadCounter__SubCount(pathCounter, path, method);
}
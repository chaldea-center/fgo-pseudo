void __fastcall AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__int__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A07D8A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method);
    sub_1B686D4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v3);
    byte_4A07D8A = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B68920(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v4,
    (const MethodInfo_318046C *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v4;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetPathLoadCounter__AddCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v8; // x20
  int32_t v9; // w2

  if ( (byte_4A07D87 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    byte_4A07D87 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                    (Il2CppObject *)path,
                                                                                    (const MethodInfo_3181014 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
      (Il2CppObject *)path,
      0,
      (const MethodInfo_3180E0C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v8 = this->fields.pathToCountMap;
  if ( !v8 )
LABEL_9:
    sub_1B68930(pathToCountMap, path);
  v9 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)v8,
         (Il2CppObject *)path,
         (const MethodInfo_3180DA0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v8,
    (Il2CppObject *)path,
    v9,
    (const MethodInfo_3180E0C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_4A07D89 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    byte_4A07D89 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_1B68930(0LL, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_3180FA8 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *__fastcall AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v9; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A07D86 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_1B686D4(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo, v3);
    byte_4A07D86 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_1B68930(0LL, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_3181210 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v9 = v10;
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *)j_il2cpp_value_box_0(
                                                                                  System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo,
                                                                                  &v9,
                                                                                  v5,
                                                                                  v6,
                                                                                  v7);
}


void __fastcall AssetPathLoadCounter__SubCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v8; // x20
  int32_t v9; // w2

  if ( (byte_4A07D88 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    byte_4A07D88 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
         (Il2CppObject *)path,
         (const MethodInfo_3181014 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                      (Il2CppObject *)path,
                                                                                      (const MethodInfo_3180DA0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v8 = this->fields.pathToCountMap;
      if ( v8 )
      {
        v9 = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)v8,
               (Il2CppObject *)path,
               (const MethodInfo_3180DA0 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
           - 1;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v8,
          (Il2CppObject *)path,
          v9,
          (const MethodInfo_3180E0C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_1B68930(pathToCountMap, path);
    }
  }
}


// attributes: thunk
System_Collections_IEnumerator_o *__fastcall AssetPathLoadCounter__System_Collections_IEnumerable_GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  return (System_Collections_IEnumerator_o *)AssetPathLoadCounter__GetEnumerator(this, method);
}
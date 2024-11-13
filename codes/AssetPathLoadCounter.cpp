void __fastcall AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__int__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B152E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5, v6);
    byte_4B152E6 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                 System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                 method,
                                                                 v2,
                                                                 v3);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v7,
    (const MethodInfo_325BB64 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetPathLoadCounter__AddCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v10; // x20
  int32_t v11; // w2

  if ( (byte_4B152E3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v7, v8);
    byte_4B152E3 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                    (Il2CppObject *)path,
                                                                                    (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
      (Il2CppObject *)path,
      0,
      (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v10 = this->fields.pathToCountMap;
  if ( !v10 )
LABEL_9:
    sub_1BCAA3C(pathToCountMap, path);
  v11 = System_Collections_Generic_Dictionary_object__int___get_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v10,
          (Il2CppObject *)path,
          (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
      + 1;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v10,
    (Il2CppObject *)path,
    v11,
    (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_4B152E5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method, v2);
    byte_4B152E5 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_325C6A0 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *__fastcall AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v8; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v9; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B152E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo, v4, v5);
    byte_4B152E2 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_325C908 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v8 = v9;
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *)j_il2cpp_value_box_0(
                                                                                  System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo,
                                                                                  &v8);
}


void __fastcall AssetPathLoadCounter__SubCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v10; // x20
  int32_t v11; // w2

  if ( (byte_4B152E4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v7, v8);
    byte_4B152E4 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
         (Il2CppObject *)path,
         (const MethodInfo_325C70C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                      (Il2CppObject *)path,
                                                                                      (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v10 = this->fields.pathToCountMap;
      if ( v10 )
      {
        v11 = System_Collections_Generic_Dictionary_object__int___get_Item(
                (System_Collections_Generic_Dictionary_object__int__o *)v10,
                (Il2CppObject *)path,
                (const MethodInfo_325C498 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
            - 1;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v10,
          (Il2CppObject *)path,
          v11,
          (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_1BCAA3C(pathToCountMap, path);
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
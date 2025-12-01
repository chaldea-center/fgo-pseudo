void AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC63F2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_4CC63F2 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_34C1FFC *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetPathLoadCounter__AddCount(AssetPathLoadCounter_o *this, System_String_o *path, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v6; // x20
  int32_t v7; // w2

  if ( (byte_4CC63EF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CC63EF = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                    (Il2CppObject *)path,
                                                                                    (const MethodInfo_34C2BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
      (Il2CppObject *)path,
      0,
      (const MethodInfo_34C299C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v6 = this->fields.pathToCountMap;
  if ( !v6 )
LABEL_9:
    sub_1C71608(pathToCountMap, path);
  v7 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)v6,
         (Il2CppObject *)path,
         (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v6,
    (Il2CppObject *)path,
    v7,
    (const MethodInfo_34C299C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_4CC63F1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_4CC63F1 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_1C71608(0, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_34C2B38 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v5; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4CC63EE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo);
    byte_4CC63EE = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_1C71608(0, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_34C2DA0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v5 = v6;
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *)j_il2cpp_value_box_0(
                                                                                  System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo,
                                                                                  &v5);
}


void AssetPathLoadCounter__SubCount(AssetPathLoadCounter_o *this, System_String_o *path, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v6; // x20
  int32_t v7; // w2

  if ( (byte_4CC63F0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CC63F0 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
         (Il2CppObject *)path,
         (const MethodInfo_34C2BA4 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                      (Il2CppObject *)path,
                                                                                      (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v6 = this->fields.pathToCountMap;
      if ( v6 )
      {
        v7 = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)v6,
               (Il2CppObject *)path,
               (const MethodInfo_34C2930 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
           - 1;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v6,
          (Il2CppObject *)path,
          v7,
          (const MethodInfo_34C299C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_1C71608(pathToCountMap, path);
    }
  }
}


// attributes: thunk
System_Collections_IEnumerator_o *AssetPathLoadCounter__System_Collections_IEnumerable_GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  return (System_Collections_IEnumerator_o *)AssetPathLoadCounter__GetEnumerator(this, method);
}
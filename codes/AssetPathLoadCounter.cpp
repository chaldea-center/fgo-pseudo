void AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5937664 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_5937664 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetPathLoadCounter__AddCount(AssetPathLoadCounter_o *this, System_String_o *path, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v6; // x20
  int32_t v7; // w2

  if ( (byte_5937661 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_5937661 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                    (Il2CppObject *)path,
                                                                                    (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
      (Il2CppObject *)path,
      0,
      (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v6 = this->fields.pathToCountMap;
  if ( !v6 )
LABEL_9:
    sub_21FFECC(pathToCountMap, path);
  v7 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)v6,
         (Il2CppObject *)path,
         (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v6,
    (Il2CppObject *)path,
    v7,
    (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_5937663 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_5937663 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_21FFECC(0, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_3FC0A7C *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v5; // [xsp+0h] [xbp-70h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_5937660 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo);
    byte_5937660 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_21FFECC(0, method);
  System_Collections_Generic_Dictionary_object__int___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
    (const MethodInfo_3FC0CF0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
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

  if ( (byte_5937662 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_5937662 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
         (Il2CppObject *)path,
         (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___get_Item(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)pathToCountMap,
                                                                                      (Il2CppObject *)path,
                                                                                      (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v6 = this->fields.pathToCountMap;
      if ( v6 )
      {
        v7 = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)v6,
               (Il2CppObject *)path,
               (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
           - 1;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v6,
          (Il2CppObject *)path,
          v7,
          (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_21FFECC(pathToCountMap, path);
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
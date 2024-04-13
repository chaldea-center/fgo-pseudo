void __fastcall AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EBC4E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v5, v6, v7);
    byte_42EBC4E = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v8,
    (const MethodInfo_2F1A890 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetPathLoadCounter__AddCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_string__int__o *v13; // x20
  int32_t v14; // w2

  if ( (byte_42EBC4B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      (_DWORD)path,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v9, v10, v11);
    byte_42EBC4B = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
                                                                                    (System_Xml_XmlQualifiedName_o *)path,
                                                                                    (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
      (System_Xml_XmlQualifiedName_o *)path,
      0,
      (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v13 = this->fields.pathToCountMap;
  if ( !v13 )
LABEL_9:
    sub_B5D69C(pathToCountMap, path);
  v14 = System_Collections_Generic_Dictionary_string__int___get_Item(
          v13,
          path,
          (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
      + 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v13,
    (System_Xml_XmlQualifiedName_o *)path,
    v14,
    (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_42EBC4D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, (_DWORD)method, v2, v3);
    byte_42EBC4D = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)pathToCountMap,
    (const MethodInfo_2F1B620 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *__fastcall AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v10; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42EBC4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo, v5, v6, v7);
    byte_42EBC4A = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v11,
    pathToCountMap,
    (const MethodInfo_2F1B9D8 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v10 = v11;
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *)j_il2cpp_value_box_0(
                                                                                  System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo,
                                                                                  &v10);
}


void __fastcall AssetPathLoadCounter__SubCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_string__int__o *v13; // x20
  int32_t v14; // w2

  if ( (byte_42EBC4C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__,
      (_DWORD)path,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v9, v10, v11);
    byte_42EBC4C = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
         (System_Xml_XmlQualifiedName_o *)path,
         (const MethodInfo_2F1B6B8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                               pathToCountMap,
                                                                               path,
                                                                               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v13 = this->fields.pathToCountMap;
      if ( v13 )
      {
        v14 = System_Collections_Generic_Dictionary_string__int___get_Item(
                v13,
                path,
                (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
            - 1;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v13,
          (System_Xml_XmlQualifiedName_o *)path,
          v14,
          (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_B5D69C(pathToCountMap, path);
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
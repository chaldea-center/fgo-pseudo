void __fastcall AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_421662B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v4);
    byte_421662B = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           method,
                                                                           v2);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v5,
    (const MethodInfo_2E42658 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
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
  System_Collections_Generic_Dictionary_string__int__o *v8; // x20
  int32_t v9; // w2

  if ( (byte_4216628 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    byte_4216628 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
                                                                                    (System_Xml_XmlQualifiedName_o *)path,
                                                                                    (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
      (System_Xml_XmlQualifiedName_o *)path,
      0,
      (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v8 = this->fields.pathToCountMap;
  if ( !v8 )
LABEL_9:
    sub_B0D97C(pathToCountMap);
  v9 = System_Collections_Generic_Dictionary_string__int___get_Item(
         v8,
         path,
         (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v8,
    (System_Xml_XmlQualifiedName_o *)path,
    v9,
    (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_421662A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    byte_421662A = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)pathToCountMap,
    (const MethodInfo_2E433E8 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *__fastcall AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4216627 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo, v3);
    byte_4216627 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v7,
    pathToCountMap,
    (const MethodInfo_2E437A0 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *)j_il2cpp_value_box_0(
                                                                                  System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo,
                                                                                  &v6);
}


void __fastcall AssetPathLoadCounter__SubCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_string__int__o *v8; // x20
  int32_t v9; // w2

  if ( (byte_4216629 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    byte_4216629 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
         (System_Xml_XmlQualifiedName_o *)path,
         (const MethodInfo_2E43480 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                               pathToCountMap,
                                                                               path,
                                                                               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v8 = this->fields.pathToCountMap;
      if ( v8 )
      {
        v9 = System_Collections_Generic_Dictionary_string__int___get_Item(
               v8,
               path,
               (const MethodInfo_2E43148 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
           - 1;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v8,
          (System_Xml_XmlQualifiedName_o *)path,
          v9,
          (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_B0D97C(pathToCountMap);
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
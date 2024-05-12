void __fastcall AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438AA34 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_438AA34 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B77694(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v3,
    (const MethodInfo_2FDCA14 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssetPathLoadCounter__AddCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_string__int__o *v6; // x20
  int32_t v7; // w2

  if ( (byte_438AA31 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_438AA31 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
                                                                                    (System_Xml_XmlQualifiedName_o *)path,
                                                                                    (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
      (System_Xml_XmlQualifiedName_o *)path,
      0,
      (const MethodInfo_2FDD5A0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v6 = this->fields.pathToCountMap;
  if ( !v6 )
LABEL_9:
    sub_B7769C(pathToCountMap, path);
  v7 = System_Collections_Generic_Dictionary_string__int___get_Item(
         v6,
         path,
         (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6,
    (System_Xml_XmlQualifiedName_o *)path,
    v7,
    (const MethodInfo_2FDD5A0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_438AA33 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_438AA33 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B7769C(0LL, method);
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)pathToCountMap,
    (const MethodInfo_2FDD7A4 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *__fastcall AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  __int64 v4; // x2
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_438AA30 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_B775C4(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo);
    byte_438AA30 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B7769C(0LL, method);
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v7,
    pathToCountMap,
    (const MethodInfo_2FDDB5C *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v6 = v7;
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *)j_il2cpp_value_box_0(
                                                                                  System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo,
                                                                                  &v6,
                                                                                  v4);
}


void __fastcall AssetPathLoadCounter__SubCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_string__int__o *v6; // x20
  int32_t v7; // w2

  if ( (byte_438AA32 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_438AA32 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
         (System_Xml_XmlQualifiedName_o *)path,
         (const MethodInfo_2FDD83C *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                               pathToCountMap,
                                                                               path,
                                                                               (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v6 = this->fields.pathToCountMap;
      if ( v6 )
      {
        v7 = System_Collections_Generic_Dictionary_string__int___get_Item(
               v6,
               path,
               (const MethodInfo_2FDD504 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
           - 1;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6,
          (System_Xml_XmlQualifiedName_o *)path,
          v7,
          (const MethodInfo_2FDD5A0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_B7769C(pathToCountMap, path);
    }
  }
}
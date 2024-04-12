void __fastcall AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B1C18 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    byte_42B1C18 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v3,
    (const MethodInfo_2F0F4D4 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_42B1C15 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_42B1C15 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
                                                                                    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
                                                                                    (System_Xml_XmlQualifiedName_o *)path,
                                                                                    (const MethodInfo_2F102FC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)pathToCountMap & 1) == 0 )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
      (System_Xml_XmlQualifiedName_o *)path,
      0,
      (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v6 = this->fields.pathToCountMap;
  if ( !v6 )
LABEL_9:
    sub_B52A5C(pathToCountMap, path);
  v7 = System_Collections_Generic_Dictionary_string__int___get_Item(
         v6,
         path,
         (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6,
    (System_Xml_XmlQualifiedName_o *)path,
    v7,
    (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_42B1C17 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_42B1C17 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)pathToCountMap,
    (const MethodInfo_2F10264 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *__fastcall AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v5; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_42B1C14 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
    sub_B52984(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo);
    byte_42B1C14 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v6,
    pathToCountMap,
    (const MethodInfo_2F1061C *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
  v5 = v6;
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *)j_il2cpp_value_box_0(
                                                                                  System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo,
                                                                                  &v5);
}


void __fastcall AssetPathLoadCounter__SubCount(
        AssetPathLoadCounter_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_string__int__o *v6; // x20
  int32_t v7; // w2

  if ( (byte_42B1C16 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_42B1C16 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
         (System_Xml_XmlQualifiedName_o *)path,
         (const MethodInfo_2F102FC *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    pathToCountMap = this->fields.pathToCountMap;
    if ( !pathToCountMap )
      goto LABEL_10;
    pathToCountMap = (System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_string__int___get_Item(
                                                                               pathToCountMap,
                                                                               path,
                                                                               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    if ( (int)pathToCountMap >= 1 )
    {
      v6 = this->fields.pathToCountMap;
      if ( v6 )
      {
        v7 = System_Collections_Generic_Dictionary_string__int___get_Item(
               v6,
               path,
               (const MethodInfo_2F0FFC4 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
           - 1;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v6,
          (System_Xml_XmlQualifiedName_o *)path,
          v7,
          (const MethodInfo_2F10060 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_B52A5C(pathToCountMap, path);
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
void __fastcall AssetPathLoadCounter___ctor(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FBE05 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    byte_40FBE05 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_string__int__TypeInfo,
                                                                           method,
                                                                           v2,
                                                                           v3,
                                                                           v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__int____ctor(
    v7,
    (const MethodInfo_2D9B608 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.pathToCountMap = (struct System_Collections_Generic_Dictionary_string__int__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
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
  struct System_Collections_Generic_Dictionary_string__int__o *v8; // x0
  System_Collections_Generic_Dictionary_string__int__o *v9; // x20
  int32_t v10; // w2

  if ( (byte_40FBE02 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    byte_40FBE02 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
          (System_Xml_XmlQualifiedName_o *)path,
          (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    v8 = this->fields.pathToCountMap;
    if ( !v8 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v8,
      (System_Xml_XmlQualifiedName_o *)path,
      0,
      (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  v9 = this->fields.pathToCountMap;
  if ( !v9 )
LABEL_9:
    sub_B170D4();
  v10 = System_Collections_Generic_Dictionary_string__int___get_Item(
          v9,
          path,
          (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
      + 1;
  System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v9,
    (System_Xml_XmlQualifiedName_o *)path,
    v10,
    (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void __fastcall AssetPathLoadCounter__Clear(AssetPathLoadCounter_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0

  if ( (byte_40FBE04 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__Clear__, method);
    byte_40FBE04 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B170D4();
  System_Collections_Generic_Dictionary_UIPanel__int___Clear(
    (System_Collections_Generic_Dictionary_UIPanel__int__o *)pathToCountMap,
    (const MethodInfo_2D9C398 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__int___o *__fastcall AssetPathLoadCounter__GetEnumerator(
        AssetPathLoadCounter_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_40FBE01 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_Enumerator_string__int__TypeInfo, v3);
    byte_40FBE01 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    sub_B170D4();
  System_Collections_Generic_Dictionary_string__int___GetEnumerator(
    &v7,
    pathToCountMap,
    (const MethodInfo_2D9C750 *)Method_System_Collections_Generic_Dictionary_string__int__GetEnumerator__);
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
  struct System_Collections_Generic_Dictionary_string__int__o *pathToCountMap; // x0
  System_Collections_Generic_Dictionary_string__int__o *v8; // x0
  System_Collections_Generic_Dictionary_string__int__o *v9; // x20
  int32_t v10; // w2

  if ( (byte_40FBE03 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__, path);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__, v6);
    byte_40FBE03 = 1;
  }
  pathToCountMap = this->fields.pathToCountMap;
  if ( !pathToCountMap )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__int___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)pathToCountMap,
         (System_Xml_XmlQualifiedName_o *)path,
         (const MethodInfo_2D9C430 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    v8 = this->fields.pathToCountMap;
    if ( !v8 )
      goto LABEL_10;
    if ( System_Collections_Generic_Dictionary_string__int___get_Item(
           v8,
           path,
           (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) >= 1 )
    {
      v9 = this->fields.pathToCountMap;
      if ( v9 )
      {
        v10 = System_Collections_Generic_Dictionary_string__int___get_Item(
                v9,
                path,
                (const MethodInfo_2D9C0F8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
            - 1;
        System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)v9,
          (System_Xml_XmlQualifiedName_o *)path,
          v10,
          (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
        return;
      }
LABEL_10:
      sub_B170D4();
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
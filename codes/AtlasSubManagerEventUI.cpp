void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EBD75 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo, v5, v6, v7);
    byte_42EBD75 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
}


System_String_o *__fastcall AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EBD76 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v5, v6, v7);
    byte_42EBD76 = 1;
  }
  v10 = eventId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format((System_String_o *)StringLiteral_6286/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
}


AtlasManagerUnit_o *__fastcall AtlasSubManagerEventUI__GetOrCreateAtlasManagerUnit(
        AtlasSubManagerEventUI_o *this,
        System_String_o *assetPath,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *assetLoadDict; // x0
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v16; // x21
  AtlasManagerUnit_o *v17; // x22
  const MethodInfo *v18; // x3

  if ( (byte_42EBD77 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManagerUnit_TypeInfo, (_DWORD)assetPath, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__, v12, v13, v14);
    byte_42EBD77 = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetLoadDict,
          (System_Xml_XmlQualifiedName_o *)assetPath,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v16 = this->fields.assetLoadDict;
    v17 = (AtlasManagerUnit_o *)sub_B5D694(AtlasManagerUnit_TypeInfo);
    AtlasManagerUnit___ctor(v17, assetPath, 0LL, v18);
    if ( !v16 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16,
      (System_Xml_XmlQualifiedName_o *)assetPath,
      (System_Xml_Schema_XmlSchemaObject_o *)v17,
      (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_B5D69C(assetLoadDict, assetPath);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)assetLoadDict,
                                 (System_Type_o *)assetPath,
                                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
}


void __fastcall AtlasSubManagerEventUI__Load(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        System_Action_o *finishCallback,
        int32_t loadParallelMax,
        const MethodInfo *method)
{
  System_String_o *AssetPath; // x0
  const MethodInfo *v9; // x2
  AtlasManagerUnit_o *AtlasManagerUnit; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  AssetPath = AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)finishCallback);
  AtlasManagerUnit = AtlasSubManagerEventUI__GetOrCreateAtlasManagerUnit(this, AssetPath, v9);
  if ( !AtlasManagerUnit )
    sub_B5D69C(0LL, v11);
  AtlasManagerUnit__Load(AtlasManagerUnit, finishCallback, loadParallelMax, v12);
}


void __fastcall AtlasSubManagerEventUI__Release(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  AtlasSubManagerEventUI_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *AssetPath; // x0
  const MethodInfo *v13; // x1
  System_Type_o *v14; // x20

  v5 = this;
  if ( (byte_42EBD73 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      eventId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__, v6, v7, v8);
    this = (AtlasSubManagerEventUI_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v9,
                                         v10,
                                         v11);
    byte_42EBD73 = 1;
  }
  AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AtlasSubManagerEventUI__GetAssetPath(
                                                                                  this,
                                                                                  eventId,
                                                                                  method);
  if ( !v5->fields.assetLoadDict )
    goto LABEL_10;
  v14 = (System_Type_o *)AssetPath;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v5->fields.assetLoadDict,
         (System_Xml_XmlQualifiedName_o *)AssetPath,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                      AssetPath,
                                                                                      v14,
                                                                                      (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v13);
        AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)AssetPath,
            (System_Xml_XmlQualifiedName_o *)v14,
            (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_B5D69C(AssetPath, v13);
  }
}


bool __fastcall AtlasSubManagerEventUI__SetUI(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *v8; // x21
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Type_o *AssetPath; // x0
  __int64 v13; // x1
  System_Type_o *v14; // x22
  const MethodInfo *v15; // x3

  v8 = this;
  if ( (byte_42EBD74 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      eventId,
      (_DWORD)sprite,
      spriteName);
    this = (AtlasSubManagerEventUI_o *)sub_B5D5C4(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v9,
                                         v10,
                                         v11);
    byte_42EBD74 = 1;
  }
  AssetPath = (System_Type_o *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v14 = AssetPath;
  AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetLoadDict,
                                 (System_Xml_XmlQualifiedName_o *)AssetPath,
                                 (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (System_Type_o *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AssetPath,
                                     v14,
                                     (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v15);
    }
LABEL_10:
    sub_B5D69C(AssetPath, v13);
  }
  if ( !sprite )
    goto LABEL_10;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


AtlasSubManagerEventUI_o *__fastcall AtlasSubManagerEventUI__get_Instance(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  AtlasSubManagerEventUI_o *instance; // x8
  AtlasSubManagerEventUI_o *v5; // x19
  const MethodInfo *v6; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EBD72 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasSubManagerEventUI_TypeInfo, v1, v2, v3);
    byte_42EBD72 = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v5 = (AtlasSubManagerEventUI_o *)sub_B5D694(AtlasSubManagerEventUI_TypeInfo);
    AtlasSubManagerEventUI___ctor(v5, v6);
    static_fields = (BattleServantConfConponent_o *)AtlasSubManagerEventUI_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v5;
    sub_B5D560(static_fields, (System_Int32_array **)v5, v8, v9, v10, v11, v12, v13);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
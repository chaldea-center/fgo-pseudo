void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_435532C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
    byte_435532C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
}


System_String_o *__fastcall AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_435532D & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_6299/*"EventUI/Prefabs/{0}"*/);
    byte_435532D = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, method);
  return System_String__Format((System_String_o *)StringLiteral_6299/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
}


AtlasManagerUnit_o *__fastcall AtlasSubManagerEventUI__GetOrCreateAtlasManagerUnit(
        AtlasSubManagerEventUI_o *this,
        System_String_o *assetPath,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *assetLoadDict; // x0
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v6; // x21
  AtlasManagerUnit_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_435532E & 1) == 0 )
  {
    sub_B70694(&AtlasManagerUnit_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
    byte_435532E = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetLoadDict,
          (System_Xml_XmlQualifiedName_o *)assetPath,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v6 = this->fields.assetLoadDict;
    v7 = (AtlasManagerUnit_o *)sub_B70764(AtlasManagerUnit_TypeInfo);
    AtlasManagerUnit___ctor(v7, assetPath, 0LL, v8);
    if ( !v6 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6,
      (System_Xml_XmlQualifiedName_o *)assetPath,
      (System_Xml_Schema_XmlSchemaObject_o *)v7,
      (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_B7076C(assetLoadDict, assetPath);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)assetLoadDict,
                                 (System_Type_o *)assetPath,
                                 (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
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
    sub_B7076C(0LL, v11);
  AtlasManagerUnit__Load(AtlasManagerUnit, finishCallback, loadParallelMax, v12);
}


void __fastcall AtlasSubManagerEventUI__Release(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *v4; // x19
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *AssetPath; // x0
  const MethodInfo *v6; // x1
  System_Type_o *v7; // x20

  v4 = this;
  if ( (byte_435532A & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
    this = (AtlasSubManagerEventUI_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_435532A = 1;
  }
  AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AtlasSubManagerEventUI__GetAssetPath(
                                                                                  this,
                                                                                  eventId,
                                                                                  method);
  if ( !v4->fields.assetLoadDict )
    goto LABEL_10;
  v7 = (System_Type_o *)AssetPath;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.assetLoadDict,
         (System_Xml_XmlQualifiedName_o *)AssetPath,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                      AssetPath,
                                                                                      v7,
                                                                                      (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v6);
        AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)AssetPath,
            (System_Xml_XmlQualifiedName_o *)v7,
            (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_B7076C(AssetPath, v6);
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
  System_Type_o *AssetPath; // x0
  __int64 v10; // x1
  System_Type_o *v11; // x22
  const MethodInfo *v12; // x3

  v8 = this;
  if ( (byte_435532B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    this = (AtlasSubManagerEventUI_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_435532B = 1;
  }
  AssetPath = (System_Type_o *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v11 = AssetPath;
  AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetLoadDict,
                                 (System_Xml_XmlQualifiedName_o *)AssetPath,
                                 (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (System_Type_o *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AssetPath,
                                     v11,
                                     (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v12);
    }
LABEL_10:
    sub_B7076C(AssetPath, v10);
  }
  if ( !sprite )
    goto LABEL_10;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


AtlasSubManagerEventUI_o *__fastcall AtlasSubManagerEventUI__get_Instance(const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *instance; // x8
  AtlasSubManagerEventUI_o *v2; // x19
  const MethodInfo *v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4355329 & 1) == 0 )
  {
    sub_B70694(&AtlasSubManagerEventUI_TypeInfo);
    byte_4355329 = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v2 = (AtlasSubManagerEventUI_o *)sub_B70764(AtlasSubManagerEventUI_TypeInfo);
    AtlasSubManagerEventUI___ctor(v2, v3);
    static_fields = (BattleServantConfConponent_o *)AtlasSubManagerEventUI_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v2;
    sub_B70630(static_fields, (System_Int32_array **)v2, v5, v6, v7, v8, v9, v10);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
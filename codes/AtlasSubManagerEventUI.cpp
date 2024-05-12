void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20

  if ( (byte_4388BC9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
    byte_4388BC9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v3;
  sub_B77560(&this->fields);
}


System_String_o *__fastcall AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4388BCA & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/);
    byte_4388BCA = 1;
  }
  v6 = eventId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, method);
  return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v4, 0LL);
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

  if ( (byte_4388BCB & 1) == 0 )
  {
    sub_B775C4(&AtlasManagerUnit_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
    byte_4388BCB = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetLoadDict,
          (System_Xml_XmlQualifiedName_o *)assetPath,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v6 = this->fields.assetLoadDict;
    v7 = (AtlasManagerUnit_o *)sub_B77694(AtlasManagerUnit_TypeInfo);
    AtlasManagerUnit___ctor(v7, assetPath, 0LL, v8);
    if ( !v6 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6,
      (System_Xml_XmlQualifiedName_o *)assetPath,
      (System_Xml_Schema_XmlSchemaObject_o *)v7,
      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_B7769C(assetLoadDict, assetPath);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)assetLoadDict,
                                 (System_Type_o *)assetPath,
                                 (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
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
    sub_B7769C(0LL, v11);
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
  if ( (byte_4388BC7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
    this = (AtlasSubManagerEventUI_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_4388BC7 = 1;
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
         (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                      AssetPath,
                                                                                      v7,
                                                                                      (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v6);
        AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)AssetPath,
            (System_Xml_XmlQualifiedName_o *)v7,
            (const MethodInfo_2F7F064 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_B7769C(AssetPath, v6);
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
  if ( (byte_4388BC8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    this = (AtlasSubManagerEventUI_o *)sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_4388BC8 = 1;
  }
  AssetPath = (System_Type_o *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v11 = AssetPath;
  AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetLoadDict,
                                 (System_Xml_XmlQualifiedName_o *)AssetPath,
                                 (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (System_Type_o *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AssetPath,
                                     v11,
                                     (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v12);
    }
LABEL_10:
    sub_B7769C(AssetPath, v10);
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
  struct AtlasSubManagerEventUI_StaticFields *static_fields; // x0

  if ( (byte_4388BC6 & 1) == 0 )
  {
    sub_B775C4(&AtlasSubManagerEventUI_TypeInfo);
    byte_4388BC6 = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v2 = (AtlasSubManagerEventUI_o *)sub_B77694(AtlasSubManagerEventUI_TypeInfo);
    AtlasSubManagerEventUI___ctor(v2, v3);
    static_fields = AtlasSubManagerEventUI_TypeInfo->static_fields;
    static_fields->instance = v2;
    sub_B77560(static_fields);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
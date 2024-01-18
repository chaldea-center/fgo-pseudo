void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_41898E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo, v3);
    byte_41898E6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41898E7 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_B2C35C(&StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v4);
    byte_41898E7 = 1;
  }
  v7 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_6207/*"EventUI/Prefabs/{0}"*/, v5, 0LL);
}


AtlasManagerUnit_o *__fastcall AtlasSubManagerEventUI__GetOrCreateAtlasManagerUnit(
        AtlasSubManagerEventUI_o *this,
        System_String_o *assetPath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *assetLoadDict; // x0
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v9; // x21
  AtlasManagerUnit_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_41898E8 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManagerUnit_TypeInfo, assetPath);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__, v7);
    byte_41898E8 = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetLoadDict,
          (System_Xml_XmlQualifiedName_o *)assetPath,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v9 = this->fields.assetLoadDict;
    v10 = (AtlasManagerUnit_o *)sub_B2C42C(AtlasManagerUnit_TypeInfo);
    AtlasManagerUnit___ctor(v10, assetPath, 0LL, v11);
    if ( !v9 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
      (System_Xml_XmlQualifiedName_o *)assetPath,
      (System_Xml_Schema_XmlSchemaObject_o *)v10,
      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_B2C434(assetLoadDict, assetPath);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)assetLoadDict,
                                 (System_Type_o *)assetPath,
                                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
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
    sub_B2C434(0LL, v11);
  AtlasManagerUnit__Load(AtlasManagerUnit, finishCallback, loadParallelMax, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AtlasSubManagerEventUI__Release(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *AssetPath; // x0
  const MethodInfo *v8; // x1
  System_Type_o *v9; // x20

  v4 = this;
  if ( (byte_41898E4 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__, v5);
    this = (AtlasSubManagerEventUI_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v6);
    byte_41898E4 = 1;
  }
  AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AtlasSubManagerEventUI__GetAssetPath(
                                                                                  this,
                                                                                  eventId,
                                                                                  method);
  if ( !v4->fields.assetLoadDict )
    goto LABEL_10;
  v9 = (System_Type_o *)AssetPath;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.assetLoadDict,
         (System_Xml_XmlQualifiedName_o *)AssetPath,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                      AssetPath,
                                                                                      v9,
                                                                                      (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v8);
        AssetPath = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)AssetPath,
            (System_Xml_XmlQualifiedName_o *)v9,
            (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_B2C434(AssetPath, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AtlasSubManagerEventUI__SetUI(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *v8; // x21
  __int64 v9; // x1
  System_Type_o *AssetPath; // x0
  __int64 v11; // x1
  System_Type_o *v12; // x22
  const MethodInfo *v13; // x3

  v8 = this;
  if ( (byte_41898E5 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId);
    this = (AtlasSubManagerEventUI_o *)sub_B2C35C(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v9);
    byte_41898E5 = 1;
  }
  AssetPath = (System_Type_o *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v12 = AssetPath;
  AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetLoadDict,
                                 (System_Xml_XmlQualifiedName_o *)AssetPath,
                                 (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (System_Type_o *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Type_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                     (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)AssetPath,
                                     v12,
                                     (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v13);
    }
LABEL_10:
    sub_B2C434(AssetPath, v11);
  }
  if ( !sprite )
    goto LABEL_10;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


AtlasSubManagerEventUI_o *__fastcall AtlasSubManagerEventUI__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  AtlasSubManagerEventUI_o *instance; // x8
  AtlasSubManagerEventUI_o *v3; // x19
  const MethodInfo *v4; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41898E3 & 1) == 0 )
  {
    sub_B2C35C(&AtlasSubManagerEventUI_TypeInfo, v1);
    byte_41898E3 = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v3 = (AtlasSubManagerEventUI_o *)sub_B2C42C(AtlasSubManagerEventUI_TypeInfo);
    AtlasSubManagerEventUI___ctor(v3, v4);
    static_fields = (BattleServantConfConponent_o *)AtlasSubManagerEventUI_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v3;
    sub_B2C2F8(static_fields, (System_Int32_array **)v3, v6, v7, v8, v9, v10, v11);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
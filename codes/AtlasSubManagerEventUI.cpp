void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FBF26 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo, v3);
    byte_40FBF26 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo,
                                                                                       v4,
                                                                                       v5,
                                                                                       v6,
                                                                                       v7);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v8;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
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

  if ( (byte_40FBF27 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_B16FFC(&StringLiteral_6189/*"EventUI/Prefabs/{0}"*/, v4);
    byte_40FBF27 = 1;
  }
  v7 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_6189/*"EventUI/Prefabs/{0}"*/, v5, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v13; // x21
  AtlasManagerUnit_o *v14; // x22
  const MethodInfo *v15; // x3
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v16; // x0

  if ( (byte_40FBF28 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManagerUnit_TypeInfo, assetPath);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__, v7);
    byte_40FBF28 = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)assetLoadDict,
          (System_Xml_XmlQualifiedName_o *)assetPath,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v13 = this->fields.assetLoadDict;
    v14 = (AtlasManagerUnit_o *)sub_B170CC(AtlasManagerUnit_TypeInfo, v9, v10, v11, v12);
    AtlasManagerUnit___ctor(v14, assetPath, 0LL, v15);
    if ( !v13 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v13,
      (System_Xml_XmlQualifiedName_o *)assetPath,
      (System_Xml_Schema_XmlSchemaObject_o *)v14,
      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  v16 = this->fields.assetLoadDict;
  if ( !v16 )
LABEL_9:
    sub_B170D4();
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
                                 (System_Type_o *)assetPath,
                                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
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
  const MethodInfo *v11; // x3

  AssetPath = AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)finishCallback);
  AtlasManagerUnit = AtlasSubManagerEventUI__GetOrCreateAtlasManagerUnit(this, AssetPath, v9);
  if ( !AtlasManagerUnit )
    sub_B170D4();
  AtlasManagerUnit__Load(AtlasManagerUnit, finishCallback, loadParallelMax, v11);
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
  System_String_o *AssetPath; // x0
  System_Type_o *v8; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *assetLoadDict; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v12; // x0

  v4 = this;
  if ( (byte_40FBF24 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__, v5);
    this = (AtlasSubManagerEventUI_o *)sub_B16FFC(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v6);
    byte_40FBF24 = 1;
  }
  AssetPath = AtlasSubManagerEventUI__GetAssetPath(this, eventId, method);
  if ( !v4->fields.assetLoadDict )
    goto LABEL_10;
  v8 = (System_Type_o *)AssetPath;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.assetLoadDict,
         (System_Xml_XmlQualifiedName_o *)AssetPath,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    assetLoadDict = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.assetLoadDict;
    if ( assetLoadDict )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               assetLoadDict,
               v8,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( Item )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)Item, v11);
        v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4->fields.assetLoadDict;
        if ( v12 )
        {
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
            v12,
            (System_Xml_XmlQualifiedName_o *)v8,
            (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_B170D4();
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
  System_String_o *AssetPath; // x0
  System_Type_o *v11; // x22
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *assetLoadDict; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_40FBF25 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId);
    this = (AtlasSubManagerEventUI_o *)sub_B16FFC(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v9);
    byte_40FBF25 = 1;
  }
  AssetPath = AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v11 = (System_Type_o *)AssetPath;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v8->fields.assetLoadDict,
         (System_Xml_XmlQualifiedName_o *)AssetPath,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    assetLoadDict = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8->fields.assetLoadDict;
    if ( assetLoadDict )
    {
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               assetLoadDict,
               v11,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( Item )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)Item, sprite, spriteName, v14);
    }
LABEL_10:
    sub_B170D4();
  }
  if ( !sprite )
    goto LABEL_10;
  UISprite__set_spriteName(sprite, 0LL, 0LL);
  return 0;
}


AtlasSubManagerEventUI_o *__fastcall AtlasSubManagerEventUI__get_Instance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  AtlasSubManagerEventUI_o *instance; // x8
  AtlasSubManagerEventUI_o *v6; // x19
  const MethodInfo *v7; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FBF23 & 1) == 0 )
  {
    sub_B16FFC(&AtlasSubManagerEventUI_TypeInfo, v1);
    byte_40FBF23 = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v6 = (AtlasSubManagerEventUI_o *)sub_B170CC(AtlasSubManagerEventUI_TypeInfo, v1, v2, v3, v4);
    AtlasSubManagerEventUI___ctor(v6, v7);
    static_fields = (BattleServantConfConponent_o *)AtlasSubManagerEventUI_TypeInfo->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v6;
    sub_B16F98(static_fields, (System_Int32_array **)v6, v9, v10, v11, v12, v13, v14);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
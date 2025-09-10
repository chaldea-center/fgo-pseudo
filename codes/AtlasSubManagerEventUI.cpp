void AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2640C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
    byte_4C2640C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


System_String_o *AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2640D & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_6265/*"EventUI/Prefabs/{0}"*/);
    byte_4C2640D = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6265/*"EventUI/Prefabs/{0}"*/, v6, 0);
}


AtlasManagerUnit_o *AtlasSubManagerEventUI__GetOrCreateAtlasManagerUnit(
        AtlasSubManagerEventUI_o *this,
        System_String_o *assetPath,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *assetLoadDict; // x0
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v6; // x21
  AtlasManagerUnit_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4C2640E & 1) == 0 )
  {
    sub_1C2D490(&AtlasManagerUnit_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
    byte_4C2640E = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
          (Il2CppObject *)assetPath,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v6 = this->fields.assetLoadDict;
    v7 = (AtlasManagerUnit_o *)sub_1C2D6DC(AtlasManagerUnit_TypeInfo);
    AtlasManagerUnit___ctor(v7, assetPath, 0, v8);
    if ( !v6 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v6,
      (Il2CppObject *)assetPath,
      (Il2CppObject *)v7,
      (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_1C2D6EC(assetLoadDict, assetPath);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                 (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
                                 (Il2CppObject *)assetPath,
                                 (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
}


void AtlasSubManagerEventUI__Load(
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
    sub_1C2D6EC(0, v11);
  AtlasManagerUnit__Load(AtlasManagerUnit, finishCallback, loadParallelMax, v12);
}


void AtlasSubManagerEventUI__Release(AtlasSubManagerEventUI_o *this, int32_t eventId, const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *v4; // x19
  System_Collections_Generic_Dictionary_object__object__o *AssetPath; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *v7; // x20

  v4 = this;
  if ( (byte_4C2640A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
    this = (AtlasSubManagerEventUI_o *)sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_4C2640A = 1;
  }
  AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)AtlasSubManagerEventUI__GetAssetPath(
                                                                           this,
                                                                           eventId,
                                                                           method);
  if ( !v4->fields.assetLoadDict )
    goto LABEL_10;
  v7 = (Il2CppObject *)AssetPath;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict,
         (Il2CppObject *)AssetPath,
         (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                               AssetPath,
                                                                               v7,
                                                                               (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v6);
        AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_object__object___Remove(
            AssetPath,
            v7,
            (const MethodInfo_344B824 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_1C2D6EC(AssetPath, v6);
  }
}


bool AtlasSubManagerEventUI__SetUI(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *v8; // x21
  Il2CppObject *AssetPath; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  const MethodInfo *v12; // x3

  v8 = this;
  if ( (byte_4C2640B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    this = (AtlasSubManagerEventUI_o *)sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_4C2640B = 1;
  }
  AssetPath = (Il2CppObject *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v11 = AssetPath;
  AssetPath = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.assetLoadDict,
                                AssetPath,
                                (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (Il2CppObject *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = System_Collections_Generic_Dictionary_object__object___get_Item(
                    (System_Collections_Generic_Dictionary_object__object__o *)AssetPath,
                    v11,
                    (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v12);
    }
LABEL_10:
    sub_1C2D6EC(AssetPath, v10);
  }
  if ( !sprite )
    goto LABEL_10;
  UISprite__set_spriteName(sprite, 0, 0);
  return 0;
}


AtlasSubManagerEventUI_o *AtlasSubManagerEventUI__get_Instance(const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *instance; // x8
  AtlasSubManagerEventUI_o *v2; // x19
  const MethodInfo *v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C26409 & 1) == 0 )
  {
    sub_1C2D490(&AtlasSubManagerEventUI_TypeInfo);
    byte_4C26409 = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v2 = (AtlasSubManagerEventUI_o *)sub_1C2D6DC(AtlasSubManagerEventUI_TypeInfo);
    AtlasSubManagerEventUI___ctor(v2, v3);
    AtlasSubManagerEventUI_TypeInfo->static_fields->instance = v2;
    sub_1C2D434((CGThumbnailListItem_o *)AtlasSubManagerEventUI_TypeInfo->static_fields, (int32_t)v2, v4, v5);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
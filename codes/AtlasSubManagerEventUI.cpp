void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_Dictionary_object__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FB63F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo, v3);
    byte_49FB63F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                    System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo,
                                                                    v4,
                                                                    v5);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v6,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v6, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *v5; // x0
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FB640 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&eventId);
    sub_1B640C8(&StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v4);
    byte_49FB640 = 1;
  }
  v7 = eventId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v7);
  return System_String__Format((System_String_o *)StringLiteral_6206/*"EventUI/Prefabs/{0}"*/, v5, 0LL);
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
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v11; // x21
  AtlasManagerUnit_o *v12; // x22
  const MethodInfo *v13; // x3

  if ( (byte_49FB641 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManagerUnit_TypeInfo, assetPath);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__, v7);
    byte_49FB641 = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
          (Il2CppObject *)assetPath,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v11 = this->fields.assetLoadDict;
    v12 = (AtlasManagerUnit_o *)sub_1B64314(AtlasManagerUnit_TypeInfo, v9, v10);
    AtlasManagerUnit___ctor(v12, assetPath, 0LL, v13);
    if ( !v11 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v11,
      (Il2CppObject *)assetPath,
      (Il2CppObject *)v12,
      (const MethodInfo_31793E4 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_1B64324(assetLoadDict);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                 (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
                                 (Il2CppObject *)assetPath,
                                 (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
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
    sub_1B64324(0LL);
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
  System_Collections_Generic_Dictionary_object__object__o *AssetPath; // x0
  Il2CppObject *v8; // x20
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_49FB63D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__, v5);
    this = (AtlasSubManagerEventUI_o *)sub_1B640C8(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v6);
    byte_49FB63D = 1;
  }
  AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)AtlasSubManagerEventUI__GetAssetPath(
                                                                           this,
                                                                           eventId,
                                                                           method);
  if ( !v4->fields.assetLoadDict )
    goto LABEL_10;
  v8 = (Il2CppObject *)AssetPath;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict,
         (Il2CppObject *)AssetPath,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                               AssetPath,
                                                                               v8,
                                                                               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v9);
        AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_object__object___Remove(
            AssetPath,
            v8,
            (const MethodInfo_317A8F4 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_1B64324(AssetPath);
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
  Il2CppObject *AssetPath; // x0
  Il2CppObject *v11; // x22
  const MethodInfo *v12; // x3

  v8 = this;
  if ( (byte_49FB63E & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId);
    this = (AtlasSubManagerEventUI_o *)sub_1B640C8(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v9);
    byte_49FB63E = 1;
  }
  AssetPath = (Il2CppObject *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v11 = AssetPath;
  AssetPath = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.assetLoadDict,
                                AssetPath,
                                (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (Il2CppObject *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = System_Collections_Generic_Dictionary_object__object___get_Item(
                    (System_Collections_Generic_Dictionary_object__object__o *)AssetPath,
                    v11,
                    (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v12);
    }
LABEL_10:
    sub_1B64324(AssetPath);
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
  AtlasSubManagerEventUI_o *instance; // x8
  AtlasSubManagerEventUI_o *v4; // x19
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FB63C & 1) == 0 )
  {
    sub_1B640C8(&AtlasSubManagerEventUI_TypeInfo, v1);
    byte_49FB63C = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v4 = (AtlasSubManagerEventUI_o *)sub_1B64314(AtlasSubManagerEventUI_TypeInfo, v1, v2);
    AtlasSubManagerEventUI___ctor(v4, v5);
    AtlasSubManagerEventUI_TypeInfo->static_fields->instance = v4;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)AtlasSubManagerEventUI_TypeInfo->static_fields,
      (int32_t)v4,
      v6,
      v7);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
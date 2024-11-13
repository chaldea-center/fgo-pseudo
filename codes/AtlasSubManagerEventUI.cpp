void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_object__object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B153E0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo, v4, v5);
    byte_4B153E0 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo,
                                                                    v6,
                                                                    v7,
                                                                    v8);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v9,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B153E1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v4, v5);
    byte_4B153E1 = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
}


AtlasManagerUnit_o *__fastcall AtlasSubManagerEventUI__GetOrCreateAtlasManagerUnit(
        AtlasSubManagerEventUI_o *this,
        System_String_o *assetPath,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *assetLoadDict; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *v14; // x21
  AtlasManagerUnit_o *v15; // x22
  const MethodInfo *v16; // x3

  if ( (byte_4B153E2 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManagerUnit_TypeInfo, assetPath, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__, v9, v10);
    byte_4B153E2 = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
          (Il2CppObject *)assetPath,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v14 = this->fields.assetLoadDict;
    v15 = (AtlasManagerUnit_o *)sub_1BCAA2C(AtlasManagerUnit_TypeInfo, assetPath, v12, v13);
    AtlasManagerUnit___ctor(v15, assetPath, 0LL, v16);
    if ( !v14 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v14,
      (Il2CppObject *)assetPath,
      (Il2CppObject *)v15,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_1BCAA3C(assetLoadDict, assetPath);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                 (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
                                 (Il2CppObject *)assetPath,
                                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
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
    sub_1BCAA3C(0LL, v11);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_object__object__o *AssetPath; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x20

  v4 = this;
  if ( (byte_4B153DE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__, v5, v6);
    this = (AtlasSubManagerEventUI_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v7,
                                         v8);
    byte_4B153DE = 1;
  }
  AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)AtlasSubManagerEventUI__GetAssetPath(
                                                                           this,
                                                                           eventId,
                                                                           method);
  if ( !v4->fields.assetLoadDict )
    goto LABEL_10;
  v11 = (Il2CppObject *)AssetPath;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict,
         (Il2CppObject *)AssetPath,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                               AssetPath,
                                                                               v11,
                                                                               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v10);
        AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_object__object___Remove(
            AssetPath,
            v11,
            (const MethodInfo_326675C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_1BCAA3C(AssetPath, v10);
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
  __int64 v10; // x2
  Il2CppObject *AssetPath; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x22
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_4B153DF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__,
      *(_QWORD *)&eventId,
      sprite);
    this = (AtlasSubManagerEventUI_o *)sub_1BCA7E0(
                                         &Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__,
                                         v9,
                                         v10);
    byte_4B153DF = 1;
  }
  AssetPath = (Il2CppObject *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v13 = AssetPath;
  AssetPath = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.assetLoadDict,
                                AssetPath,
                                (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (Il2CppObject *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = System_Collections_Generic_Dictionary_object__object___get_Item(
                    (System_Collections_Generic_Dictionary_object__object__o *)AssetPath,
                    v13,
                    (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v14);
    }
LABEL_10:
    sub_1BCAA3C(AssetPath, v12);
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
  AtlasSubManagerEventUI_o *instance; // x8
  AtlasSubManagerEventUI_o *v5; // x19
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B153DD & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasSubManagerEventUI_TypeInfo, v1, v2);
    byte_4B153DD = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v5 = (AtlasSubManagerEventUI_o *)sub_1BCAA2C(AtlasSubManagerEventUI_TypeInfo, v1, v2, v3);
    AtlasSubManagerEventUI___ctor(v5, v6);
    AtlasSubManagerEventUI_TypeInfo->static_fields->instance = v5;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)AtlasSubManagerEventUI_TypeInfo->static_fields,
      (int64_t)v5,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
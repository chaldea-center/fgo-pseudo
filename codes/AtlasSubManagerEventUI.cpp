void __fastcall AtlasSubManagerEventUI___ctor(AtlasSubManagerEventUI_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB719 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
    byte_4BDB719 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__AtlasManagerUnit__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit___ctor__);
  this->fields.assetLoadDict = (struct System_Collections_Generic_Dictionary_string__AtlasManagerUnit__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


System_String_o *__fastcall AtlasSubManagerEventUI__GetAssetPath(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDB71A & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_6402/*"EventUI/Prefabs/{0}"*/);
    byte_4BDB71A = 1;
  }
  v8 = eventId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, method, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_6402/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
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

  if ( (byte_4BDB71B & 1) == 0 )
  {
    sub_1C21E38(&AtlasManagerUnit_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
    byte_4BDB71B = 1;
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
          (Il2CppObject *)assetPath,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    v6 = this->fields.assetLoadDict;
    v7 = (AtlasManagerUnit_o *)sub_1C22084(AtlasManagerUnit_TypeInfo);
    AtlasManagerUnit___ctor(v7, assetPath, 0LL, v8);
    if ( !v6 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v6,
      (Il2CppObject *)assetPath,
      (Il2CppObject *)v7,
      (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__set_Item__);
  }
  assetLoadDict = this->fields.assetLoadDict;
  if ( !assetLoadDict )
LABEL_9:
    sub_1C22094(assetLoadDict, assetPath);
  return (AtlasManagerUnit_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                 (System_Collections_Generic_Dictionary_object__object__o *)assetLoadDict,
                                 (Il2CppObject *)assetPath,
                                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
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
    sub_1C22094(0LL, v11);
  AtlasManagerUnit__Load(AtlasManagerUnit, finishCallback, loadParallelMax, v12);
}


void __fastcall AtlasSubManagerEventUI__Release(
        AtlasSubManagerEventUI_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  AtlasSubManagerEventUI_o *v4; // x19
  System_Collections_Generic_Dictionary_object__object__o *AssetPath; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *v7; // x20

  v4 = this;
  if ( (byte_4BDB717 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
    this = (AtlasSubManagerEventUI_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_4BDB717 = 1;
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
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__) )
  {
    AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                               AssetPath,
                                                                               v7,
                                                                               (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
      {
        AtlasManagerUnit__Release((AtlasManagerUnit_o *)AssetPath, v6);
        AssetPath = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields.assetLoadDict;
        if ( AssetPath )
        {
          System_Collections_Generic_Dictionary_object__object___Remove(
            AssetPath,
            v7,
            (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__Remove__);
          return;
        }
      }
    }
LABEL_10:
    sub_1C22094(AssetPath, v6);
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
  Il2CppObject *AssetPath; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  const MethodInfo *v12; // x3

  v8 = this;
  if ( (byte_4BDB718 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
    this = (AtlasSubManagerEventUI_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
    byte_4BDB718 = 1;
  }
  AssetPath = (Il2CppObject *)AtlasSubManagerEventUI__GetAssetPath(this, eventId, (const MethodInfo *)sprite);
  if ( !v8->fields.assetLoadDict )
    goto LABEL_10;
  v11 = AssetPath;
  AssetPath = (Il2CppObject *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v8->fields.assetLoadDict,
                                AssetPath,
                                (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__ContainsKey__);
  if ( ((unsigned __int8)AssetPath & 1) != 0 )
  {
    AssetPath = (Il2CppObject *)v8->fields.assetLoadDict;
    if ( AssetPath )
    {
      AssetPath = System_Collections_Generic_Dictionary_object__object___get_Item(
                    (System_Collections_Generic_Dictionary_object__object__o *)AssetPath,
                    v11,
                    (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__AtlasManagerUnit__get_Item__);
      if ( AssetPath )
        return AtlasManagerUnit__SetUI((AtlasManagerUnit_o *)AssetPath, sprite, spriteName, v12);
    }
LABEL_10:
    sub_1C22094(AssetPath, v10);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB716 & 1) == 0 )
  {
    sub_1C21E38(&AtlasSubManagerEventUI_TypeInfo);
    byte_4BDB716 = 1;
  }
  instance = AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  if ( !instance )
  {
    v2 = (AtlasSubManagerEventUI_o *)sub_1C22084(AtlasSubManagerEventUI_TypeInfo);
    AtlasSubManagerEventUI___ctor(v2, v3);
    AtlasSubManagerEventUI_TypeInfo->static_fields->instance = v2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)AtlasSubManagerEventUI_TypeInfo->static_fields,
      (int64_t)v2,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    return AtlasSubManagerEventUI_TypeInfo->static_fields->instance;
  }
  return instance;
}
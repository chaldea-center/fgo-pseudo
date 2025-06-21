void __fastcall GrandServantAssetSetting___ctor(GrandServantAssetSetting_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


System_String_o *__fastcall GrandServantAssetSetting__GetImageName(
        GrandServantAssetSetting_o *this,
        GrandServantAssetSetting_FrameTypeData_array *list,
        int32_t frameType,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Func_object__bool__o *v13; // x20
  Il2CppObject *object; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_4B173B4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Find_GrandServantAssetSetting_FrameTypeData___, list);
    sub_1BCAFF8(&System_Func_GrandServantAssetSetting_FrameTypeData__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_GrandServantAssetSetting___c__DisplayClass8_0__GetImageName_b__0__, v7);
    sub_1BCAFF8(&GrandServantAssetSetting___c__DisplayClass8_0_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v9);
    byte_4B173B4 = 1;
  }
  v10 = sub_1BCB244(GrandServantAssetSetting___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  *(_DWORD *)(v10 + 16) = frameType;
  v13 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_GrandServantAssetSetting_FrameTypeData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_GrandServantAssetSetting___c__DisplayClass8_0__GetImageName_b__0__,
    0LL);
  object = BasicHelper__Find_object_(
             (System_Object_array *)list,
             (System_Func_T__bool__o *)v13,
             (const MethodInfo_3004AE8 *)Method_BasicHelper_Find_GrandServantAssetSetting_FrameTypeData___);
  p_monitor = (System_String_o **)&object[1].monitor;
  if ( !object )
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


GrandServantAssetSetting_o *__fastcall GrandServantAssetSetting__GetInstance(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  GrandServantAssetSetting_o *result; // x0

  if ( (byte_4B173B1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_AssetData_GetObject_GrandServantAssetSetting___, v1);
    sub_1BCAFF8(&AssetManager_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_7094/*"GrandServantList"*/, v3);
    sub_1BCAFF8(&StringLiteral_7093/*"GrandServantAssetSetting"*/, v4);
    byte_4B173B1 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (GrandServantAssetSetting_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_7094/*"GrandServantList"*/, 0LL);
  if ( result )
    return (GrandServantAssetSetting_o *)AssetData__GetObject_object__50315216(
                                           (AssetData_o *)result,
                                           (System_String_o *)StringLiteral_7093/*"GrandServantAssetSetting"*/,
                                           (const MethodInfo_2FFBFD0 *)Method_AssetData_GetObject_GrandServantAssetSetting___);
  return result;
}


void __fastcall GrandServantAssetSetting__SetGrandServantListBackgroundSprite(
        GrandServantAssetSetting_o *this,
        UISprite_o *sprite,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  GrandServantAssetSetting_o *FrameId; // x0
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  __int64 v13; // x4
  System_String_o *grandServantListBackgroundSpriteNameBase; // x20
  Il2CppObject *v15; // x0
  System_String_o *ImageName; // x0
  System_String_o *v17; // x20
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B173B2 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, sprite);
    sub_1BCAFF8(&int_TypeInfo, v9);
    byte_4B173B2 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = (GrandServantAssetSetting_o *)AtlasManager__GetFrameId(classId, 0LL);
  if ( (int)FrameId <= 0 )
  {
    ImageName = GrandServantAssetSetting__GetImageName(
                  FrameId,
                  this->fields.grandServantListBackgroundSpriteNameList,
                  frameType,
                  v12);
  }
  else
  {
    grandServantListBackgroundSpriteNameBase = this->fields.grandServantListBackgroundSpriteNameBase;
    v18 = (int)FrameId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
    ImageName = System_String__Format(grandServantListBackgroundSpriteNameBase, v15, 0LL);
  }
  v17 = ImageName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(sprite, v17, 0LL);
}


void __fastcall GrandServantAssetSetting__SetGrandServantListFrameSprite(
        GrandServantAssetSetting_o *this,
        UISprite_o *sprite,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  GrandServantAssetSetting_o *FrameId; // x0
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  __int64 v13; // x4
  System_String_o *grandServantListFrameSpriteNameBase; // x20
  Il2CppObject *v15; // x0
  System_String_o *ImageName; // x0
  System_String_o *v17; // x20
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B173B3 & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, sprite);
    sub_1BCAFF8(&int_TypeInfo, v9);
    byte_4B173B3 = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = (GrandServantAssetSetting_o *)AtlasManager__GetFrameId(classId, 0LL);
  if ( (int)FrameId <= 0 )
  {
    ImageName = GrandServantAssetSetting__GetImageName(
                  FrameId,
                  this->fields.grandServantListFrameSpriteNameList,
                  frameType,
                  v12);
  }
  else
  {
    grandServantListFrameSpriteNameBase = this->fields.grandServantListFrameSpriteNameBase;
    v18 = (int)FrameId;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v11, v12, v13);
    ImageName = System_String__Format(grandServantListFrameSpriteNameBase, v15, 0LL);
  }
  v17 = ImageName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(sprite, v17, 0LL);
}


void __fastcall GrandServantAssetSetting_FrameTypeData___ctor(
        GrandServantAssetSetting_FrameTypeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GrandServantAssetSetting_FrameTypeData__get_FrameType(
        GrandServantAssetSetting_FrameTypeData_o *this,
        const MethodInfo *method)
{
  return this->fields.frameType;
}


System_String_o *__fastcall GrandServantAssetSetting_FrameTypeData__get_ImageName(
        GrandServantAssetSetting_FrameTypeData_o *this,
        const MethodInfo *method)
{
  return this->fields.imageName;
}


void __fastcall GrandServantAssetSetting___c__DisplayClass8_0___ctor(
        GrandServantAssetSetting___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandServantAssetSetting___c__DisplayClass8_0___GetImageName_b__0(
        GrandServantAssetSetting___c__DisplayClass8_0_o *this,
        GrandServantAssetSetting_FrameTypeData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1BCB254(this, 0LL);
  return data->fields.frameType == this->fields.frameType;
}
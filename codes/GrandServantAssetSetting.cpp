void GrandServantAssetSetting___ctor(GrandServantAssetSetting_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0);
}


System_String_o *GrandServantAssetSetting__GetImageName(
        GrandServantAssetSetting_o *this,
        GrandServantAssetSetting_FrameTypeData_array *list,
        int32_t frameType,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_Func_object__bool__o *v9; // x20
  Il2CppObject *object; // x0
  System_String_o **p_monitor; // x8

  if ( (byte_4CE931E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Find_GrandServantAssetSetting_FrameTypeData___);
    sub_1C7BAE8(&System_Func_GrandServantAssetSetting_FrameTypeData__bool__TypeInfo);
    sub_1C7BAE8(&Method_GrandServantAssetSetting___c__DisplayClass8_0__GetImageName_b__0__);
    sub_1C7BAE8(&GrandServantAssetSetting___c__DisplayClass8_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE931E = 1;
  }
  v6 = sub_1C7BD34(GrandServantAssetSetting___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C7BD40(v7, v8);
  *(_DWORD *)(v6 + 16) = frameType;
  v9 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_GrandServantAssetSetting_FrameTypeData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v6,
    Method_GrandServantAssetSetting___c__DisplayClass8_0__GetImageName_b__0__,
    0);
  object = BasicHelper__Find_object_(
             (System_Object_array *)list,
             (System_Func_T__bool__o *)v9,
             (const MethodInfo_315A2F4 *)Method_BasicHelper_Find_GrandServantAssetSetting_FrameTypeData___);
  p_monitor = (System_String_o **)&object[1].monitor;
  if ( !object )
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


GrandServantAssetSetting_o *GrandServantAssetSetting__GetInstance(const MethodInfo *method)
{
  GrandServantAssetSetting_o *result; // x0

  if ( (byte_4CE931B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData_GetObject_GrandServantAssetSetting___);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7175/*"GrandServantList"*/);
    sub_1C7BAE8(&StringLiteral_7173/*"GrandServantAssetSetting"*/);
    byte_4CE931B = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (GrandServantAssetSetting_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_7175/*"GrandServantList"*/, 0);
  if ( result )
    return (GrandServantAssetSetting_o *)AssetData__GetObject_object__51713432(
                                           (AssetData_o *)result,
                                           (System_String_o *)StringLiteral_7173/*"GrandServantAssetSetting"*/,
                                           (const MethodInfo_3151598 *)Method_AssetData_GetObject_GrandServantAssetSetting___);
  return result;
}


void GrandServantAssetSetting__SetGrandServantListBackgroundSprite(
        GrandServantAssetSetting_o *this,
        UISprite_o *sprite,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  GrandServantAssetSetting_o *FrameId; // x0
  const MethodInfo *v10; // x3
  System_String_o *grandServantListBackgroundSpriteNameBase; // x20
  Il2CppObject *v12; // x0
  System_String_o *ImageName; // x0
  System_String_o *v14; // x20
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CE931C & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CE931C = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = (GrandServantAssetSetting_o *)AtlasManager__GetFrameId(classId, 0);
  if ( (int)FrameId <= 0 )
  {
    ImageName = GrandServantAssetSetting__GetImageName(
                  FrameId,
                  this->fields.grandServantListBackgroundSpriteNameList,
                  frameType,
                  v10);
  }
  else
  {
    grandServantListBackgroundSpriteNameBase = this->fields.grandServantListBackgroundSpriteNameBase;
    v15 = (int)FrameId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    ImageName = System_String__Format(grandServantListBackgroundSpriteNameBase, v12, 0);
  }
  v14 = ImageName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(sprite, v14, 0);
}


void GrandServantAssetSetting__SetGrandServantListFrameSprite(
        GrandServantAssetSetting_o *this,
        UISprite_o *sprite,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  GrandServantAssetSetting_o *FrameId; // x0
  const MethodInfo *v10; // x3
  System_String_o *grandServantListFrameSpriteNameBase; // x20
  Il2CppObject *v12; // x0
  System_String_o *ImageName; // x0
  System_String_o *v14; // x20
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CE931D & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    byte_4CE931D = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  FrameId = (GrandServantAssetSetting_o *)AtlasManager__GetFrameId(classId, 0);
  if ( (int)FrameId <= 0 )
  {
    ImageName = GrandServantAssetSetting__GetImageName(
                  FrameId,
                  this->fields.grandServantListFrameSpriteNameList,
                  frameType,
                  v10);
  }
  else
  {
    grandServantListFrameSpriteNameBase = this->fields.grandServantListFrameSpriteNameBase;
    v15 = (int)FrameId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    ImageName = System_String__Format(grandServantListFrameSpriteNameBase, v12, 0);
  }
  v14 = ImageName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(sprite, v14, 0);
}


void GrandServantAssetSetting_FrameTypeData___ctor(
        GrandServantAssetSetting_FrameTypeData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t GrandServantAssetSetting_FrameTypeData__get_FrameType(
        GrandServantAssetSetting_FrameTypeData_o *this,
        const MethodInfo *method)
{
  return this->fields.frameType;
}


System_String_o *GrandServantAssetSetting_FrameTypeData__get_ImageName(
        GrandServantAssetSetting_FrameTypeData_o *this,
        const MethodInfo *method)
{
  return this->fields.imageName;
}


void GrandServantAssetSetting___c__DisplayClass8_0___ctor(
        GrandServantAssetSetting___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandServantAssetSetting___c__DisplayClass8_0___GetImageName_b__0(
        GrandServantAssetSetting___c__DisplayClass8_0_o *this,
        GrandServantAssetSetting_FrameTypeData_o *data,
        const MethodInfo *method)
{
  if ( !data )
    sub_1C7BD40(this, 0);
  return data->fields.frameType == this->fields.frameType;
}
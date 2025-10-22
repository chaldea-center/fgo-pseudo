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

  if ( (byte_4C51AF5 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_Find_GrandServantAssetSetting_FrameTypeData___);
    sub_1C3E564(&System_Func_GrandServantAssetSetting_FrameTypeData__bool__TypeInfo);
    sub_1C3E564(&Method_GrandServantAssetSetting___c__DisplayClass8_0__GetImageName_b__0__);
    sub_1C3E564(&GrandServantAssetSetting___c__DisplayClass8_0_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C51AF5 = 1;
  }
  v6 = sub_1C3E7B0(GrandServantAssetSetting___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    sub_1C3E7C0(v7, v8);
  *(_DWORD *)(v6 + 16) = frameType;
  v9 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_GrandServantAssetSetting_FrameTypeData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v6,
    Method_GrandServantAssetSetting___c__DisplayClass8_0__GetImageName_b__0__,
    0);
  object = BasicHelper__Find_object_(
             (System_Object_array *)list,
             (System_Func_T__bool__o *)v9,
             (const MethodInfo_30E39DC *)Method_BasicHelper_Find_GrandServantAssetSetting_FrameTypeData___);
  p_monitor = (System_String_o **)&object[1].monitor;
  if ( !object )
    p_monitor = (System_String_o **)&StringLiteral_1/*""*/;
  return *p_monitor;
}


GrandServantAssetSetting_o *GrandServantAssetSetting__GetInstance(const MethodInfo *method)
{
  GrandServantAssetSetting_o *result; // x0

  if ( (byte_4C51AF2 & 1) == 0 )
  {
    sub_1C3E564(&Method_AssetData_GetObject_GrandServantAssetSetting___);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&StringLiteral_7160/*"GrandServantList"*/);
    sub_1C3E564(&StringLiteral_7158/*"GrandServantAssetSetting"*/);
    byte_4C51AF2 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  result = (GrandServantAssetSetting_o *)AssetManager__getAssetStorage((System_String_o *)StringLiteral_7160/*"GrandServantList"*/, 0);
  if ( result )
    return (GrandServantAssetSetting_o *)AssetData__GetObject_object__51228128(
                                           (AssetData_o *)result,
                                           (System_String_o *)StringLiteral_7158/*"GrandServantAssetSetting"*/,
                                           (const MethodInfo_30DADE0 *)Method_AssetData_GetObject_GrandServantAssetSetting___);
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
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  System_String_o *grandServantListBackgroundSpriteNameBase; // x20
  Il2CppObject *v17; // x0
  System_String_o *ImageName; // x0
  System_String_o *v19; // x20
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C51AF3 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    byte_4C51AF3 = 1;
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
                  v11);
  }
  else
  {
    grandServantListBackgroundSpriteNameBase = this->fields.grandServantListBackgroundSpriteNameBase;
    v20 = (int)FrameId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12, v13, v14, v15);
    ImageName = System_String__Format(grandServantListBackgroundSpriteNameBase, v17, 0);
  }
  v19 = ImageName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(sprite, v19, 0);
}


void GrandServantAssetSetting__SetGrandServantListFrameSprite(
        GrandServantAssetSetting_o *this,
        UISprite_o *sprite,
        int32_t frameType,
        int32_t classId,
        const MethodInfo *method)
{
  GrandServantAssetSetting_o *FrameId; // x0
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  System_String_o *grandServantListFrameSpriteNameBase; // x20
  Il2CppObject *v17; // x0
  System_String_o *ImageName; // x0
  System_String_o *v19; // x20
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C51AF4 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    byte_4C51AF4 = 1;
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
                  v11);
  }
  else
  {
    grandServantListFrameSpriteNameBase = this->fields.grandServantListFrameSpriteNameBase;
    v20 = (int)FrameId;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v10, v11, v12, v13, v14, v15);
    ImageName = System_String__Format(grandServantListFrameSpriteNameBase, v17, 0);
  }
  v19 = ImageName;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(sprite, v19, 0);
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
    sub_1C3E7C0(this, 0);
  return data->fields.frameType == this->fields.frameType;
}
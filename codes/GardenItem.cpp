void GardenItem___ctor(
        GardenItem_o *this,
        UIAtlas_o *atlas,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_String_o *imageName,
        UnityEngine_Texture_o *maskTexture,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.atlas = atlas;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)atlas, v11, v12, v13, v14, v15, v16);
  this->fields.imagePartsGroupEntity = imagePartsGroupEntity;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imagePartsGroupEntity,
    (int32_t)imagePartsGroupEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.imageName = imageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageName,
    (int32_t)imageName,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.maskTexture = maskTexture;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.maskTexture,
    (int32_t)maskTexture,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


UIAtlas_o *GardenItem__get_Atlas(GardenItem_o *this, const MethodInfo *method)
{
  return this->fields.atlas;
}


System_String_o *GardenItem__get_ImageName(GardenItem_o *this, const MethodInfo *method)
{
  return this->fields.imageName;
}


ImagePartsGroupEntity_o *GardenItem__get_ImagePartsGroupEntity(GardenItem_o *this, const MethodInfo *method)
{
  return this->fields.imagePartsGroupEntity;
}


UnityEngine_Texture_o *GardenItem__get_MaskTexture(GardenItem_o *this, const MethodInfo *method)
{
  return this->fields.maskTexture;
}
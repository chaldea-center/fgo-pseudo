void GardenItem___ctor(
        GardenItem_o *this,
        UIAtlas_o *atlas,
        ImagePartsGroupEntity_o *imagePartsGroupEntity,
        System_String_o *imageName,
        UnityEngine_Texture_o *maskTexture,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.atlas = atlas;
  sub_1C93A78(&this->fields, atlas);
  this->fields.imagePartsGroupEntity = imagePartsGroupEntity;
  sub_1C93A78(&this->fields.imagePartsGroupEntity, imagePartsGroupEntity);
  this->fields.imageName = imageName;
  sub_1C93A78(&this->fields.imageName, imageName);
  this->fields.maskTexture = maskTexture;
  sub_1C93A78(&this->fields.maskTexture, maskTexture);
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
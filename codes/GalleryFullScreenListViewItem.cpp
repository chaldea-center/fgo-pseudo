void __fastcall GalleryFullScreenListViewItem___ctor(
        GalleryFullScreenListViewItem_o *this,
        int32_t index,
        GalleryResourceEntity_o *galleryResourceEntity,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  __int64 v9; // x1

  ListViewItem___ctor_41325876((ListViewItem_o *)this, index, 0LL);
  this->fields._GalleryResourceEntity_k__BackingField = galleryResourceEntity;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields._GalleryResourceEntity_k__BackingField,
    (int32_t)galleryResourceEntity,
    v6,
    v7);
  if ( !galleryResourceEntity )
    sub_1B4D1EC(v8, v9);
  this->fields._CurrentGalleryType_k__BackingField = galleryResourceEntity->fields.galleryType;
}


int32_t __fastcall GalleryFullScreenListViewItem__GetWarId(
        GalleryFullScreenListViewItem_o *this,
        const MethodInfo *method)
{
  GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x0

  GalleryResourceEntity_k__BackingField = this->fields._GalleryResourceEntity_k__BackingField;
  if ( GalleryResourceEntity_k__BackingField )
    LODWORD(GalleryResourceEntity_k__BackingField) = GalleryResourceEntity__GetWarId(
                                                       GalleryResourceEntity_k__BackingField,
                                                       0LL);
  return (int)GalleryResourceEntity_k__BackingField;
}


int32_t __fastcall GalleryFullScreenListViewItem__get_CurrentGalleryType(
        GalleryFullScreenListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentGalleryType_k__BackingField;
}


GalleryResourceEntity_o *__fastcall GalleryFullScreenListViewItem__get_GalleryResourceEntity(
        GalleryFullScreenListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._GalleryResourceEntity_k__BackingField;
}
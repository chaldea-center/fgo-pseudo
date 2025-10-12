void GalleryFullScreenListViewItem___ctor(
        GalleryFullScreenListViewItem_o *this,
        int32_t index,
        GalleryResourceEntity_o *galleryResourceEntity,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0

  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields._GalleryResourceEntity_k__BackingField = galleryResourceEntity;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._GalleryResourceEntity_k__BackingField,
    (int32_t)galleryResourceEntity,
    v6,
    v7);
  if ( !galleryResourceEntity )
    sub_1C32E7C(v8);
  this->fields._CurrentGalleryType_k__BackingField = galleryResourceEntity->fields.galleryType;
}


int32_t GalleryFullScreenListViewItem__GetWarId(GalleryFullScreenListViewItem_o *this, const MethodInfo *method)
{
  GalleryResourceEntity_o *GalleryResourceEntity_k__BackingField; // x0

  GalleryResourceEntity_k__BackingField = this->fields._GalleryResourceEntity_k__BackingField;
  if ( GalleryResourceEntity_k__BackingField )
    LODWORD(GalleryResourceEntity_k__BackingField) = GalleryResourceEntity__GetWarId(
                                                       GalleryResourceEntity_k__BackingField,
                                                       0);
  return (int)GalleryResourceEntity_k__BackingField;
}


bool GalleryFullScreenListViewItem__IsCenterItem(GalleryFullScreenListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isCenterItem;
}


void GalleryFullScreenListViewItem__SetIsCenterItem(
        GalleryFullScreenListViewItem_o *this,
        bool isCenter,
        const MethodInfo *method)
{
  this->fields.isCenterItem = isCenter;
}


int32_t GalleryFullScreenListViewItem__get_CurrentGalleryType(
        GalleryFullScreenListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentGalleryType_k__BackingField;
}


GalleryResourceEntity_o *GalleryFullScreenListViewItem__get_GalleryResourceEntity(
        GalleryFullScreenListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._GalleryResourceEntity_k__BackingField;
}
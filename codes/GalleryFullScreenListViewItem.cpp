void GalleryFullScreenListViewItem___ctor(
        GalleryFullScreenListViewItem_o *this,
        int32_t index,
        GalleryResourceEntity_o *galleryResourceEntity,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  __int64 v13; // x1

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields._GalleryResourceEntity_k__BackingField = galleryResourceEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._GalleryResourceEntity_k__BackingField,
    (int32_t)galleryResourceEntity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !galleryResourceEntity )
    sub_21FFECC(v12, v13);
  this->fields._CurrentGalleryType_k__BackingField = galleryResourceEntity->fields.galleryType;
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
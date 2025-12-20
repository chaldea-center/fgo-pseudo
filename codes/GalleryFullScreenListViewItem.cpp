void GalleryFullScreenListViewItem___ctor(
        GalleryFullScreenListViewItem_o *this,
        int32_t index,
        GalleryResourceEntity_o *galleryResourceEntity,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1

  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  this->fields._GalleryResourceEntity_k__BackingField = galleryResourceEntity;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._GalleryResourceEntity_k__BackingField,
    (int32_t)galleryResourceEntity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  if ( !galleryResourceEntity )
    sub_1C942F0(v12, v13);
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
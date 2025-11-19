void SupportSelectUIDragDropListViewSurface___ctor(
        SupportSelectUIDragDropListViewSurface_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewSurface___ctor((UIDragDropListViewSurface_o *)this, 0);
}


SupportSelectListViewDropObject_o *SupportSelectUIDragDropListViewSurface__get_DropObject(
        SupportSelectUIDragDropListViewSurface_o *this,
        const MethodInfo *method)
{
  return this->fields.dropObject;
}


void SupportSelectUIDragDropListViewSurface__set_DropObject(
        SupportSelectUIDragDropListViewSurface_o *this,
        SupportSelectListViewDropObject_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.dropObject = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dropObject, (int32_t)value, (int32_t)method, v3);
}
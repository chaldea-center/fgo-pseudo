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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.dropObject = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.dropObject,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
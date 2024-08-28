void __fastcall SupportSelectUIDragDropListViewSurface___ctor(
        SupportSelectUIDragDropListViewSurface_o *this,
        const MethodInfo *method)
{
  UIDragDropListViewSurface___ctor((UIDragDropListViewSurface_o *)this, 0LL);
}


SupportSelectListViewDropObject_o *__fastcall SupportSelectUIDragDropListViewSurface__get_DropObject(
        SupportSelectUIDragDropListViewSurface_o *this,
        const MethodInfo *method)
{
  return this->fields.dropObject;
}


void __fastcall SupportSelectUIDragDropListViewSurface__set_DropObject(
        SupportSelectUIDragDropListViewSurface_o *this,
        SupportSelectListViewDropObject_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.dropObject = value;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dropObject, (int32_t)value, (int32_t)method, v3);
}
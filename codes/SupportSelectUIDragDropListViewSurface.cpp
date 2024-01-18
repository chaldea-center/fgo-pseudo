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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.dropObject = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.dropObject,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
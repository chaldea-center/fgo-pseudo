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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.dropObject = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.dropObject,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
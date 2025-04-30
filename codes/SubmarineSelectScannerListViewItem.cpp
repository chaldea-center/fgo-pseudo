void __fastcall SubmarineSelectScannerListViewItem___ctor(
        SubmarineSelectScannerListViewItem_o *this,
        int32_t index,
        int32_t eventId,
        int32_t scanId,
        int32_t iconImageId,
        System_String_o *name,
        bool enabled,
        const MethodInfo *method)
{
  SubmarineSelectScannerListViewItem_o *v13; // x24
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v13 = this;
  ListViewItem___ctor_41775716((ListViewItem_o *)this, index, 0LL);
  v13->fields._name_k__BackingField = name;
  v13 = (SubmarineSelectScannerListViewItem_o *)((char *)v13 + 128);
  LODWORD(v13[-1].fields._consumeItemDetail_k__BackingField) = eventId;
  HIDWORD(v13[-1].fields._consumeItemDetail_k__BackingField) = scanId;
  *(_DWORD *)&v13[-1].fields._enabled_k__BackingField = iconImageId;
  sub_1B8635C((CGThumbnailListItem_o *)v13, (int32_t)name, v14, v15);
  LOBYTE(v13->fields.selectNum) = enabled;
}


System_String_o *__fastcall SubmarineSelectScannerListViewItem__get_consumeItemDetail(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._consumeItemDetail_k__BackingField;
}


bool __fastcall SubmarineSelectScannerListViewItem__get_enabled(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._enabled_k__BackingField;
}


int32_t __fastcall SubmarineSelectScannerListViewItem__get_eventId(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._eventId_k__BackingField;
}


int32_t __fastcall SubmarineSelectScannerListViewItem__get_iconImageId(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._iconImageId_k__BackingField;
}


System_String_o *__fastcall SubmarineSelectScannerListViewItem__get_name(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._name_k__BackingField;
}


int32_t __fastcall SubmarineSelectScannerListViewItem__get_scanId(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._scanId_k__BackingField;
}


void __fastcall SubmarineSelectScannerListViewItem__set_consumeItemDetail(
        SubmarineSelectScannerListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._consumeItemDetail_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._consumeItemDetail_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall SubmarineSelectScannerListViewItem__set_enabled(
        SubmarineSelectScannerListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._enabled_k__BackingField = value;
}


void __fastcall SubmarineSelectScannerListViewItem__set_eventId(
        SubmarineSelectScannerListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._eventId_k__BackingField = value;
}


void __fastcall SubmarineSelectScannerListViewItem__set_iconImageId(
        SubmarineSelectScannerListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._iconImageId_k__BackingField = value;
}


void __fastcall SubmarineSelectScannerListViewItem__set_name(
        SubmarineSelectScannerListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._name_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._name_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall SubmarineSelectScannerListViewItem__set_scanId(
        SubmarineSelectScannerListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._scanId_k__BackingField = value;
}
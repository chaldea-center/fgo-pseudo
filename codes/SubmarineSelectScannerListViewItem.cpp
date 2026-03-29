void SubmarineSelectScannerListViewItem___ctor(
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  v13 = this;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  v13->fields._name_k__BackingField = name;
  v13 = (SubmarineSelectScannerListViewItem_o *)((char *)v13 + 136);
  LODWORD(v13[-1].fields._name_k__BackingField) = eventId;
  HIDWORD(v13[-1].fields._name_k__BackingField) = scanId;
  *(_DWORD *)&v13[-1].fields._enabled_k__BackingField = iconImageId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v13, (int32_t)name, v14, v15, v16, v17, v18, v19);
  LOBYTE(v13->monitor) = enabled;
}


bool SubmarineSelectScannerListViewItem__get_enabled(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._enabled_k__BackingField;
}


int32_t SubmarineSelectScannerListViewItem__get_eventId(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._eventId_k__BackingField;
}


int32_t SubmarineSelectScannerListViewItem__get_iconImageId(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._iconImageId_k__BackingField;
}


System_String_o *SubmarineSelectScannerListViewItem__get_name(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._name_k__BackingField;
}


int32_t SubmarineSelectScannerListViewItem__get_scanId(
        SubmarineSelectScannerListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._scanId_k__BackingField;
}


void SubmarineSelectScannerListViewItem__set_enabled(
        SubmarineSelectScannerListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._enabled_k__BackingField = value;
}


void SubmarineSelectScannerListViewItem__set_eventId(
        SubmarineSelectScannerListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._eventId_k__BackingField = value;
}


void SubmarineSelectScannerListViewItem__set_iconImageId(
        SubmarineSelectScannerListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._iconImageId_k__BackingField = value;
}


void SubmarineSelectScannerListViewItem__set_name(
        SubmarineSelectScannerListViewItem_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._name_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._name_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineSelectScannerListViewItem__set_scanId(
        SubmarineSelectScannerListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._scanId_k__BackingField = value;
}
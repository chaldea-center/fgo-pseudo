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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  v13 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v13->fields._name_k__BackingField = name;
  v13 = (SubmarineSelectScannerListViewItem_o *)((char *)v13 + 136);
  LODWORD(v13[-1].fields._name_k__BackingField) = eventId;
  HIDWORD(v13[-1].fields._name_k__BackingField) = scanId;
  *(_DWORD *)&v13[-1].fields._enabled_k__BackingField = iconImageId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v13, (int32_t)name, v14, v15, v16, v17, v18, v19);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._name_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._name_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
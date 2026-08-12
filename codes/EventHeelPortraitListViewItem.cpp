void EventHeelPortraitListViewItem___ctor(
        EventHeelPortraitListViewItem_o *this,
        int32_t index,
        HeelPortraitEntity_o *heelPortraitEntity,
        bool isHavePortrait,
        bool isDispDetailDialog,
        const MethodInfo *method)
{
  EventHeelPortraitListViewItem_o *v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  v9 = this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v9->fields._Entity_k__BackingField = heelPortraitEntity;
  v9 = (EventHeelPortraitListViewItem_o *)((char *)v9 + 120);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v9, (int32_t)heelPortraitEntity, v10, v11, v12, v13, v14, v15);
  LOBYTE(v9->monitor) = isHavePortrait;
  BYTE1(v9->monitor) = isDispDetailDialog;
}


void EventHeelPortraitListViewItem__SetIsDispDetailDialog(
        EventHeelPortraitListViewItem_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  this->fields._isDispDetailDialog_k__BackingField = isDisp;
}


HeelPortraitEntity_o *EventHeelPortraitListViewItem__get_Entity(
        EventHeelPortraitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Entity_k__BackingField;
}


bool EventHeelPortraitListViewItem__get_isDispDetailDialog(
        EventHeelPortraitListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._isDispDetailDialog_k__BackingField;
}


bool EventHeelPortraitListViewItem__get_isHavePortrait(EventHeelPortraitListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._isHavePortrait_k__BackingField;
}


void EventHeelPortraitListViewItem__set_Entity(
        EventHeelPortraitListViewItem_o *this,
        HeelPortraitEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Entity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Entity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventHeelPortraitListViewItem__set_isDispDetailDialog(
        EventHeelPortraitListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDispDetailDialog_k__BackingField = value;
}


void EventHeelPortraitListViewItem__set_isHavePortrait(
        EventHeelPortraitListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isHavePortrait_k__BackingField = value;
}
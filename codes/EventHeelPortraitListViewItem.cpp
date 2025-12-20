void EventHeelPortraitListViewItem___ctor(
        EventHeelPortraitListViewItem_o *this,
        int32_t index,
        HeelPortraitEntity_o *heelPortraitEntity,
        bool isHavePortrait,
        bool isDispDetailDialog,
        const MethodInfo *method)
{
  EventHeelPortraitListViewItem_o *v9; // x22

  v9 = this;
  ListViewItem___ctor_44594388((ListViewItem_o *)this, index, 0);
  v9->fields._Entity_k__BackingField = heelPortraitEntity;
  v9 = (EventHeelPortraitListViewItem_o *)((char *)v9 + 120);
  sub_1C9403C(v9, heelPortraitEntity);
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
  this->fields._Entity_k__BackingField = value;
  sub_1C9403C(&this->fields._Entity_k__BackingField, value);
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
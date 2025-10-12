void DebugListViewItem___ctor(
        DebugListViewItem_o *this,
        int32_t index,
        FsmEventData_o *eventData,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct FsmEventData_o *v11; // x8
  struct System_String_o *title; // x1

  ListViewItem___ctor_43702564((ListViewItem_o *)this, index, 0);
  this->fields.eventData = eventData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventData, (int32_t)eventData, v6, v7);
  v11 = this->fields.eventData;
  if ( !v11 )
    sub_1C32E7C(v8);
  title = v11->fields.title;
  this->fields.titleText = title;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.titleText, (int32_t)title, v9, v10);
}


void DebugListViewItem__Finalize(DebugListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void DebugListViewItem__SetIndex(DebugListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.index = value;
}


System_String_o *DebugListViewItem__ToString(DebugListViewItem_o *this, const MethodInfo *method)
{
  if ( (byte_4C34E63 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_19155/*"eventType "*/);
    byte_4C34E63 = 1;
  }
  return System_String__Concat_63518544((System_String_o *)StringLiteral_19155/*"eventType "*/, this->fields.titleText, 0);
}


DebugListViewObject_o *DebugListViewItem__getDebugListViewObject(DebugListViewItem_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x20
  bool v4; // w8
  DebugListViewObject_o *result; // x0
  __int64 naturalAligment; // x9
  DebugListViewItem_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C34E62 & 1) == 0 )
  {
    sub_1C32C20(&DebugListViewObject_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C34E62 = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(viewObject, 0, 0);
  result = 0;
  if ( v4 )
  {
    result = (DebugListViewObject_o *)this->fields.viewObject;
    if ( result )
    {
      naturalAligment = DebugListViewObject_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (DebugListViewObject_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != DebugListViewObject_TypeInfo )
      {
        sub_1C3313C(result);
        return (DebugListViewObject_o *)DebugListViewItem__ToString(v7, v8);
      }
    }
  }
  return result;
}


System_String_o *DebugListViewItem__get_EventName(DebugListViewItem_o *this, const MethodInfo *method)
{
  struct FsmEventData_o *eventData; // x8

  eventData = this->fields.eventData;
  if ( !eventData )
    sub_1C32E7C(this);
  return eventData->fields.eventData;
}


System_String_o *DebugListViewItem__get_TitleText(DebugListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.titleText;
}


void DebugListViewItem__set_TitleText(DebugListViewItem_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.titleText = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.titleText, (int32_t)value, (int32_t)method, v3);
}
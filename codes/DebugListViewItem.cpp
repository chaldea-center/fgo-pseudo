void DebugListViewItem___ctor(
        DebugListViewItem_o *this,
        int32_t index,
        FsmEventData_o *eventData,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct FsmEventData_o *v20; // x8
  struct System_String_o *title; // x1

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields.eventData = eventData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.eventData, (int32_t)eventData, v6, v7, v8, v9, v10, v11);
  v20 = this->fields.eventData;
  if ( !v20 )
    sub_21FFECC(v12, v13);
  title = v20->fields.title;
  this->fields.titleText = title;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.titleText, (int32_t)title, v14, v15, v16, v17, v18, v19);
}


void DebugListViewItem__Finalize(DebugListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem__Finalize((ListViewItem_o *)this, 0);
}


void DebugListViewItem__SetIndex(DebugListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.index = value;
}


DebugListViewObject_o *DebugListViewItem__getDebugListViewObject(DebugListViewItem_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *viewObject; // x20
  __int64 v5; // x2
  __int64 v6; // x3
  bool v7; // w8
  DebugListViewObject_o *result; // x0
  __int64 naturalAligment; // x9
  DebugListViewItem_o *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x2

  if ( (byte_5935A6E & 1) == 0 )
  {
    sub_21FFC50(&DebugListViewObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935A6E = 1;
  }
  viewObject = (UnityEngine_Object_o *)this->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v7 = UnityEngine_Object__op_Inequality(viewObject, 0, 0);
  result = 0;
  if ( v7 )
  {
    result = (DebugListViewObject_o *)this->fields.viewObject;
    if ( result )
    {
      naturalAligment = DebugListViewObject_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (DebugListViewObject_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != DebugListViewObject_TypeInfo )
      {
        sub_220024C(result, DebugListViewObject_TypeInfo, v5, v6);
        DebugListViewItem__SetIndex(v10, v11, v12);
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
    sub_21FFECC(this, method);
  return eventData->fields.eventData;
}


System_String_o *DebugListViewItem__get_TitleText(DebugListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.titleText;
}


void DebugListViewItem__set_TitleText(DebugListViewItem_o *this, System_String_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.titleText = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.titleText,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
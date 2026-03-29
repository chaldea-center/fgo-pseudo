void DebugListViewItem___ctor(
        DebugListViewItem_o *this,
        int32_t index,
        FsmEventData_o *eventData,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct FsmEventData_o *v20; // x8
  struct System_String_o *title; // x1

  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  this->fields.eventData = eventData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventData, (int32_t)eventData, v6, v7, v8, v9, v10, v11);
  v20 = this->fields.eventData;
  if ( !v20 )
    sub_1C93D2C(v12, v13);
  title = v20->fields.title;
  this->fields.titleText = title;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.titleText, (int32_t)title, v14, v15, v16, v17, v18, v19);
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
  UnityEngine_Object_o *viewObject; // x20
  bool v4; // w8
  DebugListViewObject_o *result; // x0
  __int64 naturalAligment; // x9
  DebugListViewItem_o *v7; // x0
  int32_t v8; // w1
  const MethodInfo *v9; // x2

  if ( (byte_4D2DE4B & 1) == 0 )
  {
    sub_1C93AD4(&DebugListViewObject_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2DE4B = 1;
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
        sub_1C940C8(result);
        DebugListViewItem__SetIndex(v7, v8, v9);
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
    sub_1C93D2C(this, method);
  return eventData->fields.eventData;
}


System_String_o *DebugListViewItem__get_TitleText(DebugListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.titleText;
}


void DebugListViewItem__set_TitleText(DebugListViewItem_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.titleText = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.titleText,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
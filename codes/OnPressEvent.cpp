void OnPressEvent___ctor(OnPressEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_596A486 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_596A486 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressDown = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onPressDown, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressUp = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.onPressUp, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void OnPressEvent__OnPress(OnPressEvent_o *this, bool isPressed, const MethodInfo *method)
{
  int v5; // w8
  System_Collections_Generic_List_EventDelegate__o *onPressDown; // x19

  if ( (byte_596A485 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_TypeInfo);
    byte_596A485 = 1;
  }
  v5 = *(&EventDelegate_TypeInfo->_2.cctor_finished + 1);
  if ( isPressed )
  {
    onPressDown = this->fields.onPressDown;
    if ( !v5 )
      goto LABEL_7;
  }
  else
  {
    onPressDown = this->fields.onPressUp;
    if ( !v5 )
LABEL_7:
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, isPressed, method);
  }
  EventDelegate__Execute_56285144(onPressDown, 0);
}
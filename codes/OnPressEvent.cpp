void OnPressEvent___ctor(OnPressEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4C214AD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4C214AD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressDown = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C2D434(&this->fields.onPressDown);
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressUp = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_1C2D434(&this->fields.onPressUp);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OnPressEvent__OnPress(OnPressEvent_o *this, bool isPressed, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onPressDown; // x19

  if ( (byte_4C214AC & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_TypeInfo);
    byte_4C214AC = 1;
  }
  if ( isPressed )
    onPressDown = this->fields.onPressDown;
  else
    onPressDown = this->fields.onPressUp;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Execute_49117324(onPressDown, 0);
}
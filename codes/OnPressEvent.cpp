void __fastcall OnPressEvent___ctor(OnPressEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_4185128 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EventDelegate__TypeInfo, v3);
    byte_4185128 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressDown = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_B2C2F8(&this->fields.onPressDown, v4);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressUp = (struct System_Collections_Generic_List_EventDelegate__o *)v5;
  sub_B2C2F8(&this->fields.onPressUp, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OnPressEvent__OnPress(OnPressEvent_o *this, bool isPressed, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onPressDown; // x19

  if ( (byte_4185127 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, isPressed);
    byte_4185127 = 1;
  }
  if ( isPressed )
    onPressDown = this->fields.onPressDown;
  else
    onPressDown = this->fields.onPressUp;
  if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventDelegate_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  }
  EventDelegate__Execute_29726908(onPressDown, 0LL);
}
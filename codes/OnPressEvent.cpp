void __fastcall OnPressEvent___ctor(OnPressEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20

  if ( (byte_42ADB18 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_42ADB18 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressDown = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_B52920(&this->fields.onPressDown);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressUp = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_B52920(&this->fields.onPressUp);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OnPressEvent__OnPress(OnPressEvent_o *this, bool isPressed, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onPressDown; // x19

  if ( (byte_42ADB17 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_TypeInfo);
    byte_42ADB17 = 1;
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
  EventDelegate__Execute_29653144(onPressDown, 0LL);
}
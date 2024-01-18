void __fastcall OnClickEvent___ctor(OnClickEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20

  if ( (byte_4185126 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDelegate___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EventDelegate__TypeInfo, v3);
    byte_4185126 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSingleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_B2C2F8(&this->fields.onSingleClick, v4);
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v5;
  sub_B2C2F8(&this->fields.onDoubleClick, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OnClickEvent__OnClick(OnClickEvent_o *this, const MethodInfo *method)
{
  if ( !this->fields.clickFlag )
  {
    this->fields.clickFlag = 1;
    this->fields.clickTime = UnityEngine_Time__get_time(0LL);
  }
}


void __fastcall OnClickEvent__OnDoubleClick(OnClickEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onDoubleClick; // x19

  if ( (byte_4185125 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, method);
    byte_4185125 = 1;
  }
  if ( this->fields.clickFlag )
  {
    this->fields.clickFlag = 0;
    this->fields.clickTime = 0.0;
    onDoubleClick = this->fields.onDoubleClick;
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Execute_29726908(onDoubleClick, 0LL);
  }
}


void __fastcall OnClickEvent__OnEnable(OnClickEvent_o *this, const MethodInfo *method)
{
  this->fields.clickFlag = 0;
  this->fields.clickTime = 0.0;
}


void __fastcall OnClickEvent__Update(OnClickEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onSingleClick; // x20

  if ( (byte_4185124 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_TypeInfo, method);
    byte_4185124 = 1;
  }
  if ( this->fields.clickFlag && UnityEngine_Time__get_time(0LL) > (float)(this->fields.clickTime + 0.36) )
  {
    onSingleClick = this->fields.onSingleClick;
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Execute_29726908(onSingleClick, 0LL);
    this->fields.clickFlag = 0;
    this->fields.clickTime = -1.0;
  }
}
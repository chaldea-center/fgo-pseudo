void __fastcall OnClickEvent___ctor(OnClickEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20

  if ( (byte_42E62AD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDelegate___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventDelegate__TypeInfo, v5, v6, v7);
    byte_42E62AD = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSingleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v8;
  sub_B5D560(&this->fields.onSingleClick);
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v9;
  sub_B5D560(&this->fields.onDoubleClick);
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
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_EventDelegate__o *onDoubleClick; // x19

  if ( (byte_42E62AC & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62AC = 1;
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
    EventDelegate__Execute_29825792(onDoubleClick, 0LL);
  }
}


void __fastcall OnClickEvent__OnEnable(OnClickEvent_o *this, const MethodInfo *method)
{
  this->fields.clickFlag = 0;
  this->fields.clickTime = 0.0;
}


void __fastcall OnClickEvent__Update(OnClickEvent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_EventDelegate__o *onSingleClick; // x20

  if ( (byte_42E62AB & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E62AB = 1;
  }
  if ( this->fields.clickFlag && UnityEngine_Time__get_time(0LL) > (float)(this->fields.clickTime + 0.36) )
  {
    onSingleClick = this->fields.onSingleClick;
    if ( (BYTE3(EventDelegate_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDelegate_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    }
    EventDelegate__Execute_29825792(onSingleClick, 0LL);
    this->fields.clickFlag = 0;
    this->fields.clickTime = -1.0;
  }
}
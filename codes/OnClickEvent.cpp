void OnClickEvent___ctor(OnClickEvent_o *this, const MethodInfo *method)
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

  if ( (byte_5932385 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_5932385 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSingleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onSingleClick, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDoubleClick,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void OnClickEvent__OnClick(OnClickEvent_o *this, const MethodInfo *method)
{
  if ( !this->fields.clickFlag )
  {
    this->fields.clickFlag = 1;
    this->fields.clickTime = UnityEngine_Time__get_time(0);
  }
}


void OnClickEvent__OnDoubleClick(OnClickEvent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_List_EventDelegate__o *onDoubleClick; // x20

  if ( (byte_5932384 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    byte_5932384 = 1;
  }
  if ( this->fields.clickFlag )
  {
    onDoubleClick = this->fields.onDoubleClick;
    this->fields.clickFlag = 0;
    this->fields.clickTime = 0.0;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, method, v2);
    EventDelegate__Execute_56080488(onDoubleClick, 0);
  }
}


void OnClickEvent__OnEnable(OnClickEvent_o *this, const MethodInfo *method)
{
  this->fields.clickFlag = 0;
  this->fields.clickTime = 0.0;
}


void OnClickEvent__Update(OnClickEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_Collections_Generic_List_EventDelegate__o *onSingleClick; // x20

  if ( (byte_5932383 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_TypeInfo);
    byte_5932383 = 1;
  }
  if ( this->fields.clickFlag && UnityEngine_Time__get_time(0) > (float)(this->fields.clickTime + 0.36) )
  {
    onSingleClick = this->fields.onSingleClick;
    if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v3, v4);
    EventDelegate__Execute_56080488(onSingleClick, 0);
    this->fields.clickFlag = 0;
    this->fields.clickTime = -1.0;
  }
}
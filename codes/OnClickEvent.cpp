void __fastcall OnClickEvent___ctor(OnClickEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A73AF1 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_EventDelegate___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_EventDelegate__TypeInfo, v3);
    byte_4A73AF1 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSingleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onSingleClick, (int32_t)v4, v5, v6);
  v7 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.onDoubleClick, (int32_t)v7, v8, v9);
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

  if ( (byte_4A73AF0 & 1) == 0 )
  {
    sub_1B90010(&EventDelegate_TypeInfo, method);
    byte_4A73AF0 = 1;
  }
  if ( this->fields.clickFlag )
  {
    this->fields.clickFlag = 0;
    this->fields.clickTime = 0.0;
    onDoubleClick = this->fields.onDoubleClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_46818200(onDoubleClick, 0LL);
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

  if ( (byte_4A73AEF & 1) == 0 )
  {
    sub_1B90010(&EventDelegate_TypeInfo, method);
    byte_4A73AEF = 1;
  }
  if ( this->fields.clickFlag && UnityEngine_Time__get_time(0LL) > (float)(this->fields.clickTime + 0.36) )
  {
    onSingleClick = this->fields.onSingleClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_46818200(onSingleClick, 0LL);
    this->fields.clickFlag = 0;
    this->fields.clickTime = -1.0;
  }
}
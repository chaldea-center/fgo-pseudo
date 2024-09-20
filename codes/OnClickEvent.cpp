void __fastcall OnClickEvent___ctor(OnClickEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EDD8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4A5EDD8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onSingleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onSingleClick, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onDoubleClick = (struct System_Collections_Generic_List_EventDelegate__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onDoubleClick, (int32_t)v6, v7, v8);
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

  if ( (byte_4A5EDD7 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    byte_4A5EDD7 = 1;
  }
  if ( this->fields.clickFlag )
  {
    this->fields.clickFlag = 0;
    this->fields.clickTime = 0.0;
    onDoubleClick = this->fields.onDoubleClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_46761624(onDoubleClick, 0LL);
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

  if ( (byte_4A5EDD6 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    byte_4A5EDD6 = 1;
  }
  if ( this->fields.clickFlag && UnityEngine_Time__get_time(0LL) > (float)(this->fields.clickTime + 0.36) )
  {
    onSingleClick = this->fields.onSingleClick;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    EventDelegate__Execute_46761624(onSingleClick, 0LL);
    this->fields.clickFlag = 0;
    this->fields.clickTime = -1.0;
  }
}
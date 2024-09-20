void __fastcall OnPressEvent___ctor(OnPressEvent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5EDDA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    byte_4A5EDDA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressDown = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onPressDown, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressUp = (struct System_Collections_Generic_List_EventDelegate__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onPressUp, (int32_t)v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall OnPressEvent__OnPress(OnPressEvent_o *this, bool isPressed, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onPressDown; // x19

  if ( (byte_4A5EDD9 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_TypeInfo);
    byte_4A5EDD9 = 1;
  }
  if ( isPressed )
    onPressDown = this->fields.onPressDown;
  else
    onPressDown = this->fields.onPressUp;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Execute_46761624(onPressDown, 0LL);
}
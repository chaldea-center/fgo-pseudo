void __fastcall OnPressEvent___ctor(OnPressEvent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B6A9D3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventDelegate___ctor__, method);
    sub_1BE4ACC(&System_Collections_Generic_List_EventDelegate__TypeInfo, v3);
    byte_4B6A9D3 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressDown = (struct System_Collections_Generic_List_EventDelegate__o *)v4;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.onPressDown, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onPressUp = (struct System_Collections_Generic_List_EventDelegate__o *)v11;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.onPressUp, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OnPressEvent__OnPress(OnPressEvent_o *this, bool isPressed, const MethodInfo *method)
{
  System_Collections_Generic_List_EventDelegate__o *onPressDown; // x19

  if ( (byte_4B6A9D2 & 1) == 0 )
  {
    sub_1BE4ACC(&EventDelegate_TypeInfo, isPressed);
    byte_4B6A9D2 = 1;
  }
  if ( isPressed )
    onPressDown = this->fields.onPressDown;
  else
    onPressDown = this->fields.onPressUp;
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Execute_47611192(onPressDown, 0LL);
}
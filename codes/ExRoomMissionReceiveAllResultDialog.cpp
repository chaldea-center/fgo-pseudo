void ExRoomMissionReceiveAllResultDialog___ctor(
        ExRoomMissionReceiveAllResultDialog_o *this,
        ExRoomMissionReceiveOutput_o *receiveOutput,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.exRoomMissionReceiveOutput = receiveOutput;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)receiveOutput, v5, v6, v7, v8, v9, v10);
}


System_Int32_array *ExRoomMissionReceiveAllResultDialog__get_ReceivedMissionIds(
        ExRoomMissionReceiveAllResultDialog_o *this,
        const MethodInfo *method)
{
  struct ExRoomMissionReceiveOutput_o *exRoomMissionReceiveOutput; // x8

  exRoomMissionReceiveOutput = this->fields.exRoomMissionReceiveOutput;
  if ( exRoomMissionReceiveOutput )
    return exRoomMissionReceiveOutput->fields._ReceivedMissionIds_k__BackingField;
  else
    return 0;
}
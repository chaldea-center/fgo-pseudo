void __fastcall VoiceClosedMessageMaster___ctor(VoiceClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B5E9B & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
    byte_42B5E9B = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    302,
    (const MethodInfo_23E223C *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
}


System_String_o *__fastcall VoiceClosedMessageMaster__GetClosedMessage(
        VoiceClosedMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B5E9C & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
    byte_42B5E9C = 1;
  }
  entity = 0LL;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    id,
    (const MethodInfo_23E2334 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
  if ( entity )
    return entity->fields.age;
  else
    return 0LL;
}
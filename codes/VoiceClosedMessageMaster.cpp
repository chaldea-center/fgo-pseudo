void __fastcall VoiceClosedMessageMaster___ctor(VoiceClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_418D2C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__, method);
    byte_418D2C9 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    301,
    (const MethodInfo_24E4034 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoiceClosedMessageMaster__GetClosedMessage(
        VoiceClosedMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D2CA & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__,
      *(_QWORD *)&id);
    byte_418D2CA = 1;
  }
  entity = 0LL;
  DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    &entity,
    id,
    (const MethodInfo_24E412C *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
  if ( entity )
    return entity->fields.age;
  else
    return 0LL;
}
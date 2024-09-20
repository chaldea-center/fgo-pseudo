void __fastcall VoiceClosedMessageMaster___ctor(VoiceClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C06C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
    byte_4A5C06C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    303,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
}


System_String_o *__fastcall VoiceClosedMessageMaster__GetClosedMessage(
        VoiceClosedMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5C06D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
    byte_4A5C06D = 1;
  }
  entity = 0LL;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    id,
    (const MethodInfo_311D988 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
  if ( entity )
    return (System_String_o *)entity[1].monitor;
  else
    return 0LL;
}
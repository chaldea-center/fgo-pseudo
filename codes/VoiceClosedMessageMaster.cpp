void __fastcall VoiceClosedMessageMaster___ctor(VoiceClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B67B21 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__, method);
    byte_4B67B21 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    307,
    (const MethodInfo_31FD784 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall VoiceClosedMessageMaster__GetClosedMessage(
        VoiceClosedMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B67B22 & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__,
      *(_QWORD *)&id);
    byte_4B67B22 = 1;
  }
  entity = 0LL;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    id,
    (const MethodInfo_31FD818 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
  if ( entity )
    return (System_String_o *)entity[1].monitor;
  else
    return 0LL;
}
void VoiceClosedMessageMaster___ctor(VoiceClosedMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59397EF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
    byte_59397EF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    311,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int___ctor__);
}


System_String_o *VoiceClosedMessageMaster__GetClosedMessage(
        VoiceClosedMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59397F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
    byte_59397F0 = 1;
  }
  entity = 0;
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    &entity,
    id,
    (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_VoiceClosedMessageMaster__VoiceClosedMessageEntity__int__TryGetEntity__);
  if ( entity )
    return *(System_String_o **)((char *)off_18 + (_QWORD)entity);
  else
    return 0;
}
void ServantVoicePatternMaster___ctor(ServantVoicePatternMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59391D1 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
    byte_59391D1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    488,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string___ctor__);
}


ServantVoicePatternEntity_o *ServantVoicePatternMaster__GetEntity(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59391CF & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
    byte_59391CF = 1;
  }
  PK = (Il2CppObject *)ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, (const MethodInfo *)voiceId);
  return (ServantVoicePatternEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3EE2044 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoicePatternMaster__IsSatisfyPlayCondition(
        ServantVoicePatternMaster_o *this,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        int32_t limitCount,
        int32_t targetValue,
        const MethodInfo *method)
{
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  int v11; // w8
  ServantVoicePatternEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  if ( !ServantVoicePatternMaster__TryGetEntity(this, &entity, id, svtId, voiceId, *(const MethodInfo **)&targetValue) )
    return 1;
  if ( !entity )
    sub_21FFECC(0, v9);
  v11 = *(_DWORD *)((char *)&qword_20 + (_QWORD)entity);
  if ( !v11 )
    return 0;
  return v11 != 1 || ServantVoicePatternEntity__CheckAddCond(entity, limitCount, targetValue, v10);
}


// local variable allocation has failed, the output may be wrong!
bool ServantVoicePatternMaster__TryGetEntity(
        ServantVoicePatternMaster_o *this,
        ServantVoicePatternEntity_o **entity,
        int32_t id,
        int32_t svtId,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59391D0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
    byte_59391D0 = 1;
  }
  PK = (Il2CppObject *)ServantVoicePatternEntity__CreatePK(id, svtId, voiceId, *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ServantVoicePatternMaster__ServantVoicePatternEntity__string__TryGetEntity__);
}
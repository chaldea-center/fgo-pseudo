void __fastcall CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A6FC78 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__,
      method);
    byte_4A6FC78 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    256,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommandCodeSkillReleaseEntity_o *__fastcall CommandCodeSkillReleaseMaster__GetEntity(
        CommandCodeSkillReleaseMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A6FC76 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId);
    byte_4A6FC76 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillReleaseEntity__CreatePK(
                         commandCodeId,
                         num,
                         priority,
                         idx,
                         *(const MethodInfo **)&idx);
  return (CommandCodeSkillReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                              PK,
                                              (const MethodInfo_312C900 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCodeSkillReleaseMaster__TryGetEntity(
        CommandCodeSkillReleaseMaster_o *this,
        CommandCodeSkillReleaseEntity_o **entity,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A6FC77 & 1) == 0 )
  {
    sub_1B90010(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__,
      entity);
    byte_4A6FC77 = 1;
  }
  PK = (Il2CppObject *)CommandCodeSkillReleaseEntity__CreatePK(
                         commandCodeId,
                         num,
                         priority,
                         idx,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommandCodeSkillReleaseMaster__isUse(
        CommandCodeSkillReleaseMaster_o *this,
        int32_t commandCodeId,
        int32_t num,
        int32_t priority,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v10; // x1
  int32_t condGroup; // w29
  bool isUse; // w8
  int32_t v13; // w24
  bool v14; // w19
  System_String_o *Primarykey; // x25
  __int64 *lookup; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  void *v19; // x26
  __int64 v20; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v21; // x10
  __int64 v22; // x0
  const MethodInfo *v23; // x2
  __int64 methodPtr_low; // x9
  bool result; // w0
  CommandCodeSkillEntity_o *v26; // x0
  System_String_o **v27; // x1
  System_String_o **v28; // x2
  int32_t v29; // w3
  const MethodInfo *v30; // x4
  CommandCodeSkillReleaseEntity_o *v32; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A6FC79 & 1) == 0 )
  {
    sub_1B90010(&CommandCodeSkillReleaseEntity_TypeInfo, *(_QWORD *)&commandCodeId);
    sub_1B90010(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10);
    byte_4A6FC79 = 1;
  }
  condGroup = 0;
  isUse = 1;
  v13 = 1;
  v32 = 0LL;
  while ( 1 )
  {
    v14 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(
                   commandCodeId,
                   num,
                   priority,
                   v13,
                   *(const MethodInfo **)&beforeClearQuestId);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1B9026C(lookup, v17);
    v18 = *lookup;
    v19 = lookup;
    v20 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v21 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *(v21 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 2;
        if ( !v20 )
          goto LABEL_9;
      }
      v22 = v18 + 16LL * (*(_DWORD *)v21 + 1) + 312;
    }
    else
    {
LABEL_9:
      v22 = sub_1BE1FF0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v22)(
            v19,
            Primarykey,
            &v32,
            *(_QWORD *)(v22 + 8)) & 1) == 0 )
      return v14;
    lookup = (__int64 *)v32;
    if ( !v32 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(CommandCodeSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v32->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandCodeSkillReleaseEntity_c *)v32->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandCodeSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v13;
    if ( condGroup == v32->fields.condGroup )
    {
      isUse = 0;
      if ( v14 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v32->fields.condGroup;
      if ( v14 )
        return v14;
LABEL_19:
      isUse = CommandCodeSkillReleaseEntity__isUse(v32, beforeClearQuestId, v23);
    }
  }
  sub_1B9052C(v32);
  CommandCodeSkillEntity__getEffectExplanation(v26, v27, v28, v29, v30);
  return result;
}
void __fastcall CommandCodeSkillReleaseMaster___ctor(CommandCodeSkillReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15FFD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__,
      method,
      v2);
    byte_4B15FFD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    256,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string___ctor__);
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

  if ( (byte_4B15FFB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__,
      *(_QWORD *)&commandCodeId,
      *(_QWORD *)&num);
    byte_4B15FFB = 1;
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
                                              (const MethodInfo_31B3198 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__GetEntity__);
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

  if ( (byte_4B15FFC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&commandCodeId);
    byte_4B15FFC = 1;
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
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_CommandCodeSkillReleaseMaster__CommandCodeSkillReleaseEntity__string__TryGetEntity__);
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
  __int64 v11; // x2
  int32_t condGroup; // w29
  bool isUse; // w8
  int32_t v14; // w24
  bool v15; // w19
  System_String_o *Primarykey; // x25
  __int64 *lookup; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  void *v20; // x26
  __int64 v21; // x9
  System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **v22; // x10
  __int64 v23; // x0
  const MethodInfo *v24; // x2
  __int64 methodPtr_low; // x9
  bool result; // w0
  CommandCodeSkillEntity_o *v27; // x0
  System_String_o **v28; // x1
  System_String_o **v29; // x2
  int32_t v30; // w3
  const MethodInfo *v31; // x4
  CommandCodeSkillReleaseEntity_o *v33; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B15FFE & 1) == 0 )
  {
    sub_1BCA7E0(&CommandCodeSkillReleaseEntity_TypeInfo, *(_QWORD *)&commandCodeId, *(_QWORD *)&num);
    sub_1BCA7E0(&System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, v10, v11);
    byte_4B15FFE = 1;
  }
  condGroup = 0;
  isUse = 1;
  v14 = 1;
  v33 = 0LL;
  while ( 1 )
  {
    v15 = isUse;
    Primarykey = CommandCodeSkillReleaseEntity__getCreatePrimarykey(
                   commandCodeId,
                   num,
                   priority,
                   v14,
                   *(const MethodInfo **)&beforeClearQuestId);
    lookup = (__int64 *)DataMasterBase__get_lookup((DataMasterBase_o *)this, 0LL);
    if ( !lookup )
LABEL_21:
      sub_1BCAA3C(lookup, v18);
    v19 = *lookup;
    v20 = lookup;
    v21 = *(unsigned __int16 *)(*lookup + 302);
    if ( *(_WORD *)(*lookup + 302) )
    {
      v22 = (System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__c **)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *(v22 - 1) != System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 2;
        if ( !v21 )
          goto LABEL_9;
      }
      v23 = v19 + 16LL * (*(_DWORD *)v22 + 1) + 312;
    }
    else
    {
LABEL_9:
      v23 = sub_1C1C7C0(lookup, System_Collections_Generic_IReadOnlyDictionary_string__DataEntityBase__TypeInfo, 1LL);
    }
    if ( ((*(__int64 (__fastcall **)(void *, System_String_o *, CommandCodeSkillReleaseEntity_o **, _QWORD))v23)(
            v20,
            Primarykey,
            &v33,
            *(_QWORD *)(v23 + 8)) & 1) == 0 )
      return v15;
    lookup = (__int64 *)v33;
    if ( !v33 )
      goto LABEL_21;
    methodPtr_low = LOBYTE(CommandCodeSkillReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v33->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (CommandCodeSkillReleaseEntity_c *)v33->klass->_2.typeHierarchy[methodPtr_low - 1] != CommandCodeSkillReleaseEntity_TypeInfo )
    {
      break;
    }
    ++v14;
    if ( condGroup == v33->fields.condGroup )
    {
      isUse = 0;
      if ( v15 )
        goto LABEL_19;
    }
    else
    {
      condGroup = v33->fields.condGroup;
      if ( v15 )
        return v15;
LABEL_19:
      isUse = CommandCodeSkillReleaseEntity__isUse(v33, beforeClearQuestId, v24);
    }
  }
  sub_1BCACFC(v33);
  CommandCodeSkillEntity__getEffectExplanation(v27, v28, v29, v30, v31);
  return result;
}
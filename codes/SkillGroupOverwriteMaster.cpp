void SkillGroupOverwriteMaster___ctor(SkillGroupOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971474 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
    byte_5971474 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    451,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string___ctor__);
}


SkillGroupOverwriteEntity_o *SkillGroupOverwriteMaster__GetEntity(
        SkillGroupOverwriteMaster_o *this,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5971475 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
    byte_5971475 = 1;
  }
  PK = (Il2CppObject *)SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, 0);
  return (SkillGroupOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          PK,
                                          (const MethodInfo_3F157EC *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__GetEntity__);
}


bool SkillGroupOverwriteMaster__TryGetEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t startedAt,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_5971476 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
    byte_5971476 = 1;
  }
  PK = (Il2CppObject *)SkillGroupOverwriteEntity__CreatePK(skillGroupId, startedAt, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_SkillGroupOverwriteMaster__SkillGroupOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
        SkillGroupOverwriteMaster_o *this,
        SkillGroupOverwriteEntity_o **entity,
        int32_t skillGroupId,
        int64_t time,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  SkillGroupOverwriteEntity_o *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  bool v34; // w20
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Collections_Generic_IEnumerator_T__o *v40; // [xsp+18h] [xbp-38h]

  if ( (byte_5971473 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SkillGroupOverwriteEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SkillGroupOverwriteEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_5971473 = 1;
  }
  *entity = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)entity,
    0,
    *(System_String_o **)&skillGroupId,
    (System_String_o *)time,
    (int32_t)method,
    v5,
    v6,
    v7);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_SkillGroupOverwriteEntity__GetEnumerator__);
  v40 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(0, v15);
  for ( i = Enumerator; ; i = v40 )
  {
    klass = i->klass;
    v18 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_10;
      }
      v20 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v20 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            i,
            *(_QWORD *)(v20 + 8));
    if ( (v21 & 1) == 0 )
    {
      v34 = 0;
      goto LABEL_27;
    }
    if ( !v40 )
      sub_2213CDC(v21, v22);
    v23 = v40->klass;
    v24 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SkillGroupOverwriteEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_SkillGroupOverwriteEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_224BC3C(v40, System_Collections_Generic_IEnumerator_SkillGroupOverwriteEntity__TypeInfo, 0);
    }
    v27 = (SkillGroupOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                           v40,
                                           *(_QWORD *)(v26 + 8));
    if ( v27 )
    {
      if ( v27->fields.skillGroupId == skillGroupId && v27->fields.startedAt <= time && v27->fields.endedAt >= time )
        break;
    }
  }
  *entity = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)entity, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = 1;
LABEL_27:
  if ( v40 )
  {
    v35 = v40->klass;
    v36 = *(unsigned __int16 *)&v40->klass->_2.rank;
    if ( *(_WORD *)&v40->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_32;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_32:
      v38 = sub_224BC3C(v40, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v40, *(_QWORD *)(v38 + 8));
  }
  return v34;
}
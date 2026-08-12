void EquipSkillMaster___ctor(EquipSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59706B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_59706B7 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.skillIdHashSet = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillIdHashSet, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    53,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool EquipSkillMaster__ContainsSkillId(EquipSkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *skillIdHashSet; // x0

  if ( (byte_59706B8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_59706B8 = 1;
  }
  skillIdHashSet = this->fields.skillIdHashSet;
  if ( !skillIdHashSet )
    sub_2213CDC(0, *(_QWORD *)&skillId);
  return System_Collections_Generic_HashSet_int___Contains(
           skillIdHashSet,
           skillId,
           (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


// local variable allocation has failed, the output may be wrong!
EquipSkillEntity_o *EquipSkillMaster__GetEntity(
        EquipSkillMaster_o *this,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_59706B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
    byte_59706B5 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&num);
  return (EquipSkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3F157EC *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool EquipSkillMaster__TryGetEntity(
        EquipSkillMaster_o *this,
        EquipSkillEntity_o **entity,
        int32_t equipId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_59706B6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
    byte_59706B6 = 1;
  }
  PK = (Il2CppObject *)EquipSkillEntity__CreatePK(equipId, num, *(const MethodInfo **)&equipId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_EquipSkillMaster__EquipSkillEntity__string__TryGetEntity__);
}


bool EquipSkillMaster__preProcess(EquipSkillMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *skillIdHashSet; // x0
  System_Collections_Generic_HashSet_int__c *klass; // x8
  System_Collections_Generic_HashSet_int__o *v5; // x20
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 i; // x20
  __int64 v12; // x8
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_HashSet_int__o *v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v31; // [xsp+18h] [xbp-38h]

  if ( (byte_59706B9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_EquipSkillEntity___);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Clear__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_EquipSkillEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_EquipSkillEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    byte_59706B9 = 1;
  }
  skillIdHashSet = this->fields.skillIdHashSet;
  if ( !skillIdHashSet
    || (System_Collections_Generic_HashSet_int___Clear(
          skillIdHashSet,
          (const MethodInfo_42B4494 *)Method_System_Collections_Generic_HashSet_int__Clear__),
        (skillIdHashSet = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__Cast_object_(
                                                                         (System_Collections_IEnumerable_o *)this->fields.list,
                                                                         (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_EquipSkillEntity___)) == 0) )
  {
    sub_2213CDC(skillIdHashSet, method);
  }
  klass = skillIdHashSet->klass;
  v5 = skillIdHashSet;
  v6 = *(unsigned __int16 *)&skillIdHashSet->klass->_2.rank;
  if ( *(_WORD *)&skillIdHashSet->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_EquipSkillEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_EquipSkillEntity__TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_9;
    }
    v8 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_9:
    v8 = sub_224BC3C(skillIdHashSet, System_Collections_Generic_IEnumerable_EquipSkillEntity__TypeInfo, 0);
  }
  v9 = (*(__int64 (__fastcall **)(System_Collections_Generic_HashSet_int__o *, _QWORD))v8)(v5, *(_QWORD *)(v8 + 8));
  v31 = v9;
  if ( !v9 )
    sub_2213CDC(0, v10);
  for ( i = v9; ; i = v31 )
  {
    v12 = *(_QWORD *)i;
    v13 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v14 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_17;
      }
      v15 = v12 + 16LL * *v14 + 312;
    }
    else
    {
LABEL_17:
      v15 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))v15)(i, *(_QWORD *)(v15 + 8));
    if ( (v16 & 1) == 0 )
      break;
    if ( !v31 )
      sub_2213CDC(v16, v17);
    v18 = *(_QWORD *)v31;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_EquipSkillEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_EquipSkillEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_25;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_25:
      v21 = sub_224BC3C(v31, System_Collections_Generic_IEnumerator_EquipSkillEntity__TypeInfo, 0);
    }
    v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v31, *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_2213CDC(0, v23);
    v24 = *(unsigned int *)(v22 + 24);
    if ( (int)v24 > 0 )
    {
      v25 = this->fields.skillIdHashSet;
      if ( !v25 )
        sub_2213CDC(0, v24);
      System_Collections_Generic_HashSet_int___Add(
        v25,
        v24,
        (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
  }
  if ( v31 )
  {
    v26 = *(_QWORD *)v31;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_38;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_38:
      v29 = sub_224BC3C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v31, *(_QWORD *)(v29 + 8));
  }
  return 1;
}
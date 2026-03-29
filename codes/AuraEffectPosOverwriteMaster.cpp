void AuraEffectPosOverwriteMaster___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int v4; // w8
  int v5; // w8
  int v6; // w8
  int v7; // w8
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D305F2 & 1) == 0 )
  {
    sub_1C93AD4(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int____Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__int____TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D305F2 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__int____TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v1,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__int_____ctor__);
  v2 = sub_1C93B7C(int___TypeInfo, 1);
  if ( !v1 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_int__object___Add(
    v1,
    0,
    (Il2CppObject *)v2,
    (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  v2 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_18;
  v4 = *(_DWORD *)(v2 + 24);
  if ( !v4 )
    goto LABEL_17;
  *(_DWORD *)(v2 + 32) = 1;
  if ( v4 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v2 + 36) = 2;
  System_Collections_Generic_Dictionary_int__object___Add(
    v1,
    1,
    (Il2CppObject *)v2,
    (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  v2 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_18;
  v5 = *(_DWORD *)(v2 + 24);
  if ( !v5 )
    goto LABEL_17;
  *(_DWORD *)(v2 + 32) = 1;
  if ( v5 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v2 + 36) = 2;
  System_Collections_Generic_Dictionary_int__object___Add(
    v1,
    2,
    (Il2CppObject *)v2,
    (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  v2 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v2 )
    goto LABEL_18;
  v6 = *(_DWORD *)(v2 + 24);
  if ( !v6 || (*(_DWORD *)(v2 + 32) = 3, v6 == 1) )
LABEL_17:
    sub_1C93D34(v2);
  *(_DWORD *)(v2 + 36) = 4;
  System_Collections_Generic_Dictionary_int__object___Add(
    v1,
    3,
    (Il2CppObject *)v2,
    (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  v2 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v2 )
LABEL_18:
    sub_1C93D2C(v2, v3);
  v7 = *(_DWORD *)(v2 + 24);
  if ( !v7 )
    goto LABEL_17;
  *(_DWORD *)(v2 + 32) = 3;
  if ( v7 == 1 )
    goto LABEL_17;
  *(_DWORD *)(v2 + 36) = 4;
  System_Collections_Generic_Dictionary_int__object___Add(
    v1,
    4,
    (Il2CppObject *)v2,
    (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__int____Add__);
  AuraEffectPosOverwriteMaster_TypeInfo->static_fields->SvtLimitCountTable = (struct System_Collections_Generic_IDictionary_int__int____o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)AuraEffectPosOverwriteMaster_TypeInfo->static_fields,
    (int32_t)v1,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void AuraEffectPosOverwriteMaster___ctor(AuraEffectPosOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D305EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string___ctor__);
    byte_4D305EF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    247,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AuraEffectPosOverwriteEntity_o *AuraEffectPosOverwriteMaster__GetEntity(
        AuraEffectPosOverwriteMaster_o *this,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D305F0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__GetEntity__);
    byte_4D305F0 = 1;
  }
  PK = (Il2CppObject *)AuraEffectPosOverwriteEntity__CreatePK(
                         auraEffectId,
                         svtId,
                         svtLimitCount,
                         *(const MethodInfo **)&svtLimitCount);
  return (AuraEffectPosOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_34681D4 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *AuraEffectPosOverwriteMaster__GetMasterLimitCounts(
        AuraEffectPosOverwriteMaster_o *this,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x9
  System_Collections_Generic_IDictionary_int__int____c **v8; // x10
  __int64 v9; // x0
  System_Int32_array *v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D305EE & 1) == 0 )
  {
    sub_1C93AD4(&AuraEffectPosOverwriteMaster_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IDictionary_int__int____TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    byte_4D305EE = 1;
  }
  result = (System_Int32_array *)AuraEffectPosOverwriteMaster_TypeInfo;
  v10 = 0;
  if ( !AuraEffectPosOverwriteMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AuraEffectPosOverwriteMaster_TypeInfo);
    result = (System_Int32_array *)AuraEffectPosOverwriteMaster_TypeInfo;
  }
  v5 = **(__int64 ***)&result->m_Items[38];
  if ( !v5 )
    goto LABEL_17;
  v6 = *v5;
  v7 = *(unsigned __int16 *)(*v5 + 302);
  if ( *(_WORD *)(*v5 + 302) )
  {
    v8 = (System_Collections_Generic_IDictionary_int__int____c **)(*(_QWORD *)(v6 + 176) + 8LL);
    while ( *(v8 - 1) != System_Collections_Generic_IDictionary_int__int____TypeInfo )
    {
      --v7;
      v8 += 2;
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = v6 + 16LL * (*(_DWORD *)v8 + 7) + 312;
  }
  else
  {
LABEL_10:
    v9 = sub_1C69E5C(v5, System_Collections_Generic_IDictionary_int__int____TypeInfo, 7);
  }
  if ( ((*(__int64 (__fastcall **)(__int64 *, _QWORD, System_Int32_array **, _QWORD))v9)(
          v5,
          (unsigned int)svtLimitCount,
          &v10,
          *(_QWORD *)(v9 + 8))
      & 1) != 0 )
    return v10;
  result = (System_Int32_array *)sub_1C93B7C(int___TypeInfo, 1);
  if ( !result )
LABEL_17:
    sub_1C93D2C(result, *(_QWORD *)&svtLimitCount);
  if ( !LODWORD(result->max_length) )
    sub_1C93D34(result);
  result->m_Items[0] = svtLimitCount;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool AuraEffectPosOverwriteMaster__TryGetEntity(
        AuraEffectPosOverwriteMaster_o *this,
        AuraEffectPosOverwriteEntity_o **entity,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D305F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__TryGetEntity__);
    byte_4D305F1 = 1;
  }
  PK = (Il2CppObject *)AuraEffectPosOverwriteEntity__CreatePK(
                         auraEffectId,
                         svtId,
                         svtLimitCount,
                         *(const MethodInfo **)&svtId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AuraEffectPosOverwriteMaster__TryGetEntityFromLimitCount(
        AuraEffectPosOverwriteMaster_o *this,
        AuraEffectPosOverwriteEntity_o **entity,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t svtLimitCount,
        const MethodInfo *method)
{
  System_Int32_array *MasterLimitCounts; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  const MethodInfo *v15; // x5
  int64_t v16; // x6
  System_String_o *v17; // x7
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v19; // x23
  bool v20; // w24
  unsigned __int64 v21; // x25

  MasterLimitCounts = AuraEffectPosOverwriteMaster__GetMasterLimitCounts(
                        this,
                        svtLimitCount,
                        *(const MethodInfo **)&auraEffectId);
  if ( !MasterLimitCounts )
    sub_1C93D2C(0, v11);
  max_length = MasterLimitCounts->max_length;
  v19 = MasterLimitCounts;
  v20 = (int)max_length > 0;
  if ( (int)max_length < 1 )
  {
LABEL_7:
    *entity = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)entity, 0, v12, v13, v14, (int32_t)v15, v16, v17);
  }
  else
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        sub_1C93D34(MasterLimitCounts);
      MasterLimitCounts = (System_Int32_array *)AuraEffectPosOverwriteMaster__TryGetEntity(
                                                  this,
                                                  entity,
                                                  auraEffectId,
                                                  svtId,
                                                  v19->m_Items[v21],
                                                  v15);
      if ( ((unsigned __int8)MasterLimitCounts & 1) != 0 )
        break;
      LODWORD(max_length) = v19->max_length;
      v20 = (__int64)++v21 < (int)max_length;
      if ( (__int64)v21 >= (int)max_length )
        goto LABEL_7;
    }
  }
  return v20;
}
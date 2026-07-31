void SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59392ED & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
    byte_59392ED = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    57,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
}


void SkillLvMaster__AssertionSkillOverwriteByFixedTime(const MethodInfo *method)
{
  ;
}


SkillLvEntity_o *SkillLvMaster__GetAddInvokeSkillLvEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillLvEnt,
        const MethodInfo *method)
{
  int32_t v5; // w21
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  const MethodInfo *v8; // x4
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0;
  if ( !skillLvEnt )
    sub_21FFECC(this, 0);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, (const MethodInfo *)skillLvEnt);
  v7 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, v6);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v7, v8);
  return entity;
}


int64_t SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t result; // x0

  if ( (byte_59392F0 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&SkillLvMaster_TypeInfo);
    byte_59392F0 = 1;
  }
  result = SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime;
  if ( !result )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
    return NetworkManager__getTime(0);
  }
  return result;
}


System_Int32_array *SkillLvMaster__GetDispValFromSkill(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  const MethodInfo *v10; // x2
  SkillLvEntity_o *v11; // x1
  __int64 v12; // x23
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v14; // x21
  __int64 v15; // x1
  FunctionMaster_o *v16; // x22
  unsigned __int64 v17; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59392F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_59392F2 = 1;
  }
  entity = 0;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, method);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_21FFD10(int___TypeInfo, 1);
  v11 = entity;
  if ( !entity )
    goto LABEL_22;
  v12 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v10);
  v14 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !v12 )
    goto LABEL_22;
  if ( *(int *)(v12 + 24) >= 1 )
  {
    v16 = (FunctionMaster_o *)Master_object;
    v17 = 0;
    while ( SetTypeDataValArray )
    {
      if ( v17 >= LODWORD(SetTypeDataValArray->max_length) )
        sub_21FFED4(Master_object);
      if ( !v16 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v16,
                                        SetTypeDataValArray->m_Items[v17],
                                        3,
                                        classStatisticsInfos,
                                        0);
      if ( !v14 )
        break;
      items = v14->fields._items;
      v19 = Method_System_Collections_Generic_List_int__Add__;
      ++v14->fields._version;
      if ( !items )
        break;
      size = v14->fields._size;
      v11 = (SkillLvEntity_o *)(unsigned int)Master_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v14,
          (int32_t)Master_object,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = size + 1;
        items->m_Items[size] = (int)Master_object;
      }
      if ( (__int64)++v17 >= *(int *)(v12 + 24) )
        goto LABEL_19;
    }
LABEL_22:
    sub_21FFECC(Master_object, v11);
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *SkillLvMaster__GetEntity(SkillLvMaster_o *this, int32_t skillId, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_59392EA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    sub_21FFC50(&SkillLvMaster_TypeInfo);
    byte_59392EA = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_3EE2044 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
  return SkillLvMaster__GetOverwriteEntity(
           (SkillLvMaster_o *)Entity,
           (SkillLvEntity_o *)Entity,
           SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
           v9);
}


SkillLvEntity_o *SkillLvMaster__GetOverwriteEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o *entity,
        int64_t time,
        const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  System_Int32_array *v7; // x1
  const MethodInfo *v8; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x24
  int32_t v12; // w22
  const MethodInfo *v13; // x4
  __int64 v14; // x20
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Int32_array *v22; // x19
  Il2CppClass *v23; // x21
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Array_o *svals; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59392EC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&SkillLvEntity_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    byte_59392EC = 1;
  }
  entitya = 0;
  if ( !entity )
    return 0;
  if ( !time )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entity);
    time = NetworkManager__getTime(0);
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillGroupMaster___);
  if ( !Master_object )
    goto LABEL_38;
  Master_object = SkillGroupMaster__GetSkillGroupIdArray(
                    (SkillGroupMaster_o *)Master_object,
                    entity->fields.skillId,
                    entity->fields.lv,
                    v8);
  if ( !Master_object )
    goto LABEL_38;
  max_length = Master_object->max_length;
  v10 = Master_object;
  if ( (int)max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_21FFED4(Master_object);
      v12 = v10->m_Items[v11];
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
      Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
      if ( !Master_object )
        goto LABEL_38;
      Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                              (SkillGroupOverwriteMaster_o *)Master_object,
                                              &entitya,
                                              v12,
                                              time,
                                              v13);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
      LODWORD(max_length) = v10->max_length;
      if ( (__int64)++v11 >= (int)max_length )
        return entity;
    }
    v14 = sub_21FFEBC(SkillLvEntity_TypeInfo);
    SkillLvEntity___ctor_49850652((SkillLvEntity_o *)v14, entity, v15);
    if ( !entitya )
      goto LABEL_38;
    Master_object = entitya->fields.funcId;
    if ( Master_object
      && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0)) != 0 )
    {
      v22 = Master_object;
      v23 = int___TypeInfo;
      Master_object = (System_Int32_array *)sub_21FFDA4(Master_object, int___TypeInfo);
      v7 = Master_object;
      if ( !Master_object )
        goto LABEL_33;
    }
    else
    {
      v7 = 0;
    }
    if ( !v14 )
      goto LABEL_38;
    *(_QWORD *)(v14 + 32) = v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 32), (int32_t)v7, v16, v17, v18, v19, v20, v21);
    if ( !entitya )
      goto LABEL_38;
    svals = (System_Array_o *)entitya->fields.svals;
    if ( !svals )
      goto LABEL_34;
    v30 = System_Array__Clone(svals, 0);
    if ( !v30 )
      goto LABEL_34;
    v22 = (System_Int32_array *)v30;
    v23 = string___TypeInfo;
    v31 = sub_21FFDA4(v30, string___TypeInfo);
    if ( v31 )
      goto LABEL_35;
LABEL_33:
    sub_220024C(v22, v23, v16);
LABEL_34:
    v31 = 0;
LABEL_35:
    *(_QWORD *)(v14 + 40) = v31;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v14 + 40), v31, v16, v24, v25, v26, v27, v28);
    if ( entitya )
    {
      *(_DWORD *)(v14 + 48) = entitya->fields.skillDetailId;
      return (SkillLvEntity_o *)v14;
    }
LABEL_38:
    sub_21FFECC(Master_object, v7);
  }
  return entity;
}


System_Collections_Generic_Dictionary_string__object__o *SkillLvMaster__GetSelectAddFuncInfo(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  bool v9; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59392EE & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_21FFC50(&StringLiteral_13176/*"SelectAddInfo"*/);
    byte_59392EE = 1;
  }
  entity = 0;
  v9 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_21FFECC(0, v8);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        *(System_Collections_Generic_Dictionary_string__object__o **)((char *)&word_38 + (_QWORD)entity),
                                                                        (System_String_o *)StringLiteral_13176/*"SelectAddInfo"*/,
                                                                        0,
                                                                        (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  DataVals_array *Master_object; // x0
  const MethodInfo *v5; // x1
  FunctionMaster_o *v6; // x20
  System_Int32_array *funcId; // x21

  if ( (byte_59392F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_59392F3 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillEnity);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (v6 = (FunctionMaster_o *)Master_object,
        funcId = skillEnity->fields.funcId,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v5),
        !v6) )
  {
    sub_21FFECC(Master_object, v5);
  }
  return FunctionMaster__GetSetTypeDataValArray(v6, funcId, Master_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void SkillLvMaster__GetUniqueFuncIdsFromSkill(
        SkillLvMaster_o *this,
        System_Collections_Generic_HashSet_int__o **ret,
        int32_t skillId,
        int32_t skillLv,
        bool includeBeforeOverwrite,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v13; // x2
  SkillLvEntity_o *v14; // x0
  const MethodInfo *v15; // x2

  if ( (byte_59392F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    byte_59392F4 = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_3EE2044 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds((SkillLvEntity_o *)Entity, ret, v13);
  }
  v14 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v14 )
    SkillLvEntity__GetUniqueFuncIds(v14, ret, v15);
}


void SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  if ( (byte_59392F1 & 1) == 0 )
  {
    sub_21FFC50(&SkillLvMaster_TypeInfo);
    byte_59392F1 = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0;
}


void SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_59392EF & 1) == 0 )
  {
    sub_21FFC50(&SkillLvMaster_TypeInfo);
    byte_59392EF = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = value;
}


// local variable allocation has failed, the output may be wrong!
bool SkillLvMaster__TryGetEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o **entity,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  bool v12; // w20
  SkillLvEntity_o *OverwriteEntity; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_59392EB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
    sub_21FFC50(&SkillLvMaster_TypeInfo);
    byte_59392EB = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v10 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_3EE2090 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v12 = v10;
  if ( v10 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v10,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v11);
    *entity = OverwriteEntity;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entity, (int32_t)OverwriteEntity, v14, v15, v16, v17, v18, v19);
  }
  return v12;
}
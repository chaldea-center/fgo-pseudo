void SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C385A9 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
    byte_4C385A9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    57,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
}


void SkillLvMaster__AssertionSkillOverwriteByFixedTime(const MethodInfo *method)
{
  ;
}


void SkillLvMaster__AssertionSkillOverwriteByNowTime(const MethodInfo *method)
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
    sub_1C32E7C(this);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, (const MethodInfo *)skillLvEnt);
  v7 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, v6);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v7, v8);
  return entity;
}


int64_t SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_4C385AC & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&SkillLvMaster_TypeInfo);
    byte_4C385AC = 1;
  }
  result = SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime;
  if ( !result )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  __int64 v11; // x23
  DataVals_array *SetTypeDataValArray; // x21
  System_Collections_Generic_List_int__o *v13; // x20
  FunctionMaster_o *v14; // x22
  unsigned __int64 v15; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C385AE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C385AE = 1;
  }
  entity = 0;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, method);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_1C32CC8(int___TypeInfo, 1);
  if ( !entity )
    goto LABEL_22;
  v11 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v10);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !v11 )
    goto LABEL_22;
  if ( *(int *)(v11 + 24) >= 1 )
  {
    v14 = (FunctionMaster_o *)Master_object;
    v15 = 0;
    while ( SetTypeDataValArray )
    {
      if ( v15 >= LODWORD(SetTypeDataValArray->max_length) )
        sub_1C32E84(Master_object);
      if ( !v14 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v14,
                                        SetTypeDataValArray->m_Items[v15],
                                        3,
                                        classStatisticsInfos,
                                        0);
      if ( !v13 )
        break;
      items = v13->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v13->fields._version;
      if ( !items )
        break;
      size = v13->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v13,
          (int32_t)Master_object,
          *(const MethodInfo_377B798 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size] = (int)Master_object;
      }
      if ( (__int64)++v15 >= *(int *)(v11 + 24) )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C32E7C(Master_object);
  }
LABEL_19:
  if ( !v13 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *SkillLvMaster__GetEntity(SkillLvMaster_o *this, int32_t skillId, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C385A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    sub_1C32C20(&SkillLvMaster_TypeInfo);
    byte_4C385A6 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_339B2F0 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
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
  const MethodInfo *v7; // x3
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v9; // x21
  unsigned __int64 v10; // x24
  int32_t v11; // w22
  const MethodInfo *v12; // x4
  __int64 v13; // x20
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Int32_array *v17; // x19
  System_Int32_array *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Array_o *svals; // x0
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C385A8 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&SkillLvEntity_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    byte_4C385A8 = 1;
  }
  entitya = 0;
  if ( entity )
  {
    if ( !time )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      time = NetworkManager__getTime(0);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_object )
      goto LABEL_37;
    Master_object = SkillGroupMaster__GetSkillGroupIdArray(
                      (SkillGroupMaster_o *)Master_object,
                      entity->fields.skillId,
                      entity->fields.lv,
                      v7);
    if ( !Master_object )
      goto LABEL_37;
    max_length = Master_object->max_length;
    v9 = Master_object;
    if ( (int)max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)max_length )
          sub_1C32E84(Master_object);
        v11 = v9->m_Items[v10];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                (SkillGroupOverwriteMaster_o *)Master_object,
                                                &entitya,
                                                v11,
                                                time,
                                                v12);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        LODWORD(max_length) = v9->max_length;
        if ( (__int64)++v10 >= (int)max_length )
          return entity;
      }
      v13 = sub_1C32E6C(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_42791708((SkillLvEntity_o *)v13, entity, v14);
      if ( !entitya )
        goto LABEL_37;
      Master_object = entitya->fields.funcId;
      if ( Master_object
        && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0)) != 0 )
      {
        v17 = Master_object;
        Master_object = (System_Int32_array *)sub_1C32D5C(Master_object, int___TypeInfo);
        v18 = Master_object;
        if ( !Master_object )
          goto LABEL_32;
      }
      else
      {
        v18 = 0;
      }
      if ( !v13 )
        goto LABEL_37;
      *(_QWORD *)(v13 + 32) = v18;
      sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 32), (int32_t)v18, v15, v16);
      if ( !entitya )
        goto LABEL_37;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_33;
      v22 = System_Array__Clone(svals, 0);
      if ( !v22 )
        goto LABEL_33;
      v17 = (System_Int32_array *)v22;
      v23 = sub_1C32D5C(v22, string___TypeInfo);
      if ( v23 )
        goto LABEL_34;
LABEL_32:
      sub_1C3313C(v17);
LABEL_33:
      v23 = 0;
LABEL_34:
      *(_QWORD *)(v13 + 40) = v23;
      sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 40), v23, v19, v20);
      if ( entitya )
      {
        entity = (SkillLvEntity_o *)v13;
        *(_DWORD *)(v13 + 48) = entitya->fields.skillDetailId;
        return entity;
      }
LABEL_37:
      sub_1C32E7C(Master_object);
    }
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
  bool v8; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C385AA & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_1C32C20(&StringLiteral_12667/*"SelectAddInfo"*/);
    byte_4C385AA = 1;
  }
  entity = 0;
  v8 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0;
  if ( v8 )
  {
    if ( !entity )
      sub_1C32E7C(0);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        *(System_Collections_Generic_Dictionary_string__object__o **)((char *)&word_38 + (_QWORD)entity),
                                                                        (System_String_o *)StringLiteral_12667/*"SelectAddInfo"*/,
                                                                        0,
                                                                        (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
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
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v7; // x20

  if ( (byte_4C385AF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C385AF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v7 = (FunctionMaster_o *)Master_object,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v5),
        !v7) )
  {
    sub_1C32E7C(Master_object);
  }
  return FunctionMaster__GetSetTypeDataValArray(v7, funcId, Master_object, 0);
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

  if ( (byte_4C385B0 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    byte_4C385B0 = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_339B2F0 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds((SkillLvEntity_o *)Entity, ret, v13);
  }
  v14 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v14 )
    SkillLvEntity__GetUniqueFuncIds(v14, ret, v15);
}


void SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  if ( (byte_4C385AD & 1) == 0 )
  {
    sub_1C32C20(&SkillLvMaster_TypeInfo);
    byte_4C385AD = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0;
}


void SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_4C385AB & 1) == 0 )
  {
    sub_1C32C20(&SkillLvMaster_TypeInfo);
    byte_4C385AB = 1;
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C385A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
    sub_1C32C20(&SkillLvMaster_TypeInfo);
    byte_4C385A7 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v10 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_339B33C *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v12 = v10;
  if ( v10 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v10,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v11);
    *entity = OverwriteEntity;
    sub_1C32BC4((CGThumbnailListItem_o *)entity, (int32_t)OverwriteEntity, v14, v15);
  }
  return v12;
}
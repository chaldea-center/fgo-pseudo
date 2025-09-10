void SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27EA6 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
    byte_4C27EA6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    57,
    (const MethodInfo_338A52C *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
    sub_1C2D6EC(this, 0);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, (const MethodInfo *)skillLvEnt);
  v7 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, v6);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v7, v8);
  return entity;
}


int64_t SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_4C27EA9 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&SkillLvMaster_TypeInfo);
    byte_4C27EA9 = 1;
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
  SkillLvEntity_o *v11; // x1
  __int64 v12; // x23
  DataVals_array *SetTypeDataValArray; // x21
  System_Collections_Generic_List_int__o *v14; // x20
  __int64 v15; // x2
  FunctionMaster_o *v16; // x22
  unsigned __int64 v17; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27EAB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C27EAB = 1;
  }
  entity = 0;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, method);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_1C2D538(int___TypeInfo, 1);
  v11 = entity;
  if ( !entity )
    goto LABEL_22;
  v12 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v10);
  v14 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !v12 )
    goto LABEL_22;
  if ( *(int *)(v12 + 24) >= 1 )
  {
    v16 = (FunctionMaster_o *)Master_object;
    v17 = 0;
    while ( SetTypeDataValArray )
    {
      if ( v17 >= LODWORD(SetTypeDataValArray->max_length) )
        sub_1C2D6F4(Master_object, v11, v15);
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
          *(const MethodInfo_376CB60 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
    sub_1C2D6EC(Master_object, v11);
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *SkillLvMaster__GetEntity(SkillLvMaster_o *this, int32_t skillId, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4C27EA3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    sub_1C2D490(&SkillLvMaster_TypeInfo);
    byte_4C27EA3 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_338C850 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
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
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v11; // x21
  unsigned __int64 v12; // x24
  int32_t v13; // w22
  const MethodInfo *v14; // x4
  __int64 v15; // x20
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Int32_array *v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Array_o *svals; // x0
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C27EA5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&SkillLvEntity_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    byte_4C27EA5 = 1;
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
    Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_object )
      goto LABEL_37;
    Master_object = SkillGroupMaster__GetSkillGroupIdArray(
                      (SkillGroupMaster_o *)Master_object,
                      entity->fields.skillId,
                      entity->fields.lv,
                      v8);
    if ( !Master_object )
      goto LABEL_37;
    max_length = Master_object->max_length;
    v11 = Master_object;
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)max_length )
          sub_1C2D6F4(Master_object, v7, v9);
        v13 = v11->m_Items[v12];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                (SkillGroupOverwriteMaster_o *)Master_object,
                                                &entitya,
                                                v13,
                                                time,
                                                v14);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        LODWORD(max_length) = v11->max_length;
        if ( (__int64)++v12 >= (int)max_length )
          return entity;
      }
      v15 = sub_1C2D6DC(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_42658988((SkillLvEntity_o *)v15, entity, v16);
      if ( !entitya )
        goto LABEL_37;
      Master_object = entitya->fields.funcId;
      if ( Master_object
        && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0)) != 0 )
      {
        v19 = Master_object;
        Master_object = (System_Int32_array *)sub_1C2D5CC(Master_object, int___TypeInfo);
        v7 = Master_object;
        if ( !Master_object )
          goto LABEL_32;
      }
      else
      {
        v7 = 0;
      }
      if ( !v15 )
        goto LABEL_37;
      *(_QWORD *)(v15 + 32) = v7;
      sub_1C2D434((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v7, v17, v18);
      if ( !entitya )
        goto LABEL_37;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_33;
      v23 = System_Array__Clone(svals, 0);
      if ( !v23 )
        goto LABEL_33;
      v19 = (System_Int32_array *)v23;
      v24 = sub_1C2D5CC(v23, string___TypeInfo);
      if ( v24 )
        goto LABEL_34;
LABEL_32:
      sub_1C2D9AC(v19);
LABEL_33:
      v24 = 0;
LABEL_34:
      *(_QWORD *)(v15 + 40) = v24;
      sub_1C2D434((CGThumbnailListItem_o *)(v15 + 40), v24, v20, v21);
      if ( entitya )
      {
        entity = (SkillLvEntity_o *)v15;
        *(_DWORD *)(v15 + 48) = entitya->fields.skillDetailId;
        return entity;
      }
LABEL_37:
      sub_1C2D6EC(Master_object, v7);
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
  __int64 v8; // x1
  bool v9; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27EA7 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_1C2D490(&StringLiteral_12663/*"SelectAddInfo"*/);
    byte_4C27EA7 = 1;
  }
  entity = 0;
  v9 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_1C2D6EC(0, v8);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        *(System_Collections_Generic_Dictionary_string__object__o **)((char *)&word_38 + (_QWORD)entity),
                                                                        (System_String_o *)StringLiteral_12663/*"SelectAddInfo"*/,
                                                                        0,
                                                                        (const MethodInfo_30BC2C4 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
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

  if ( (byte_4C27EAC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27EAC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v7 = (FunctionMaster_o *)Master_object,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v5),
        !v7) )
  {
    sub_1C2D6EC(Master_object, v5);
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

  if ( (byte_4C27EAD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    byte_4C27EAD = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_338C850 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds((SkillLvEntity_o *)Entity, ret, v13);
  }
  v14 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v14 )
    SkillLvEntity__GetUniqueFuncIds(v14, ret, v15);
}


void SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  if ( (byte_4C27EAA & 1) == 0 )
  {
    sub_1C2D490(&SkillLvMaster_TypeInfo);
    byte_4C27EAA = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0;
}


void SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_4C27EA8 & 1) == 0 )
  {
    sub_1C2D490(&SkillLvMaster_TypeInfo);
    byte_4C27EA8 = 1;
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

  if ( (byte_4C27EA4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
    sub_1C2D490(&SkillLvMaster_TypeInfo);
    byte_4C27EA4 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v10 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_338C89C *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v12 = v10;
  if ( v10 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v10,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v11);
    *entity = OverwriteEntity;
    sub_1C2D434((CGThumbnailListItem_o *)entity, (int32_t)OverwriteEntity, v14, v15);
  }
  return v12;
}
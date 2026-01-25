void SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF24B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
    byte_4CEF24B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    57,
    (const MethodInfo_3430A90 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
    sub_1C7BD40(this, 0);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, (const MethodInfo *)skillLvEnt);
  v7 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, v6);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v7, v8);
  return entity;
}


int64_t SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_4CEF24E & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&SkillLvMaster_TypeInfo);
    byte_4CEF24E = 1;
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
  FunctionMaster_o *v15; // x22
  unsigned __int64 v16; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEF250 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CEF250 = 1;
  }
  entity = 0;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, method);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 1);
  v11 = entity;
  if ( !entity )
    goto LABEL_22;
  v12 = *(__int64 *)((char *)&qword_20 + (_QWORD)entity);
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v10);
  v14 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !v12 )
    goto LABEL_22;
  if ( *(int *)(v12 + 24) >= 1 )
  {
    v15 = (FunctionMaster_o *)Master_object;
    v16 = 0;
    while ( SetTypeDataValArray )
    {
      if ( v16 >= LODWORD(SetTypeDataValArray->max_length) )
        sub_1C7BD48(Master_object);
      if ( !v15 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v15,
                                        SetTypeDataValArray->m_Items[v16],
                                        3,
                                        classStatisticsInfos,
                                        0);
      if ( !v14 )
        break;
      items = v14->fields._items;
      v18 = Method_System_Collections_Generic_List_int__Add__;
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
          *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v14->fields._size = size + 1;
        items->m_Items[size] = (int)Master_object;
      }
      if ( (__int64)++v16 >= *(int *)(v12 + 24) )
        goto LABEL_19;
    }
LABEL_22:
    sub_1C7BD40(Master_object, v11);
  }
LABEL_19:
  if ( !v14 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *SkillLvMaster__GetEntity(SkillLvMaster_o *this, int32_t skillId, int32_t lv, const MethodInfo *method)
{
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4CEF248 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    sub_1C7BAE8(&SkillLvMaster_TypeInfo);
    byte_4CEF248 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_3432DB4 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Int32_array *v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CEF24A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&SkillLvEntity_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    byte_4CEF24A = 1;
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
    Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillGroupMaster___);
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
    v10 = Master_object;
    if ( (int)max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)max_length )
          sub_1C7BD48(Master_object);
        v12 = v10->m_Items[v11];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_object )
          goto LABEL_37;
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
      v14 = sub_1C7BD34(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_43438772((SkillLvEntity_o *)v14, entity, v15);
      if ( !entitya )
        goto LABEL_37;
      Master_object = entitya->fields.funcId;
      if ( Master_object
        && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0)) != 0 )
      {
        v22 = Master_object;
        Master_object = (System_Int32_array *)sub_1C7BC24(Master_object, int___TypeInfo);
        v7 = Master_object;
        if ( !Master_object )
          goto LABEL_32;
      }
      else
      {
        v7 = 0;
      }
      if ( !v14 )
        goto LABEL_37;
      *(_QWORD *)(v14 + 32) = v7;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)v7, v16, v17, v18, v19, v20, v21);
      if ( !entitya )
        goto LABEL_37;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_33;
      v30 = System_Array__Clone(svals, 0);
      if ( !v30 )
        goto LABEL_33;
      v22 = (System_Int32_array *)v30;
      v31 = sub_1C7BC24(v30, string___TypeInfo);
      if ( v31 )
        goto LABEL_34;
LABEL_32:
      sub_1C7C0DC(v22);
LABEL_33:
      v31 = 0;
LABEL_34:
      *(_QWORD *)(v14 + 40) = v31;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v14 + 40), v31, v23, v24, v25, v26, v27, v28);
      if ( entitya )
      {
        entity = (SkillLvEntity_o *)v14;
        *(_DWORD *)(v14 + 48) = entitya->fields.skillDetailId;
        return entity;
      }
LABEL_37:
      sub_1C7BD40(Master_object, v7);
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

  if ( (byte_4CEF24C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_1C7BAE8(&StringLiteral_12725/*"SelectAddInfo"*/);
    byte_4CEF24C = 1;
  }
  entity = 0;
  v9 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0;
  if ( v9 )
  {
    if ( !entity )
      sub_1C7BD40(0, v8);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        *(System_Collections_Generic_Dictionary_string__object__o **)((char *)&word_38 + (_QWORD)entity),
                                                                        (System_String_o *)StringLiteral_12725/*"SelectAddInfo"*/,
                                                                        0,
                                                                        (const MethodInfo_315DCFC *)Method_BasicHelper_GetValue_Dictionary_string__object____);
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

  if ( (byte_4CEF251 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CEF251 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v7 = (FunctionMaster_o *)Master_object,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v5),
        !v7) )
  {
    sub_1C7BD40(Master_object, v5);
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

  if ( (byte_4CEF252 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    byte_4CEF252 = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_3432DB4 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds((SkillLvEntity_o *)Entity, ret, v13);
  }
  v14 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v14 )
    SkillLvEntity__GetUniqueFuncIds(v14, ret, v15);
}


void SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  if ( (byte_4CEF24F & 1) == 0 )
  {
    sub_1C7BAE8(&SkillLvMaster_TypeInfo);
    byte_4CEF24F = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0;
}


void SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_4CEF24D & 1) == 0 )
  {
    sub_1C7BAE8(&SkillLvMaster_TypeInfo);
    byte_4CEF24D = 1;
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4CEF249 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
    sub_1C7BAE8(&SkillLvMaster_TypeInfo);
    byte_4CEF249 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v10 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_3432E00 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v12 = v10;
  if ( v10 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v10,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v11);
    *entity = OverwriteEntity;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)entity, (int32_t)OverwriteEntity, v14, v15, v16, v17, v18, v19);
  }
  return v12;
}
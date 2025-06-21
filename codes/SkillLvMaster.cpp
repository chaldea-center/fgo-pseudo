void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1D0B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__, method);
    byte_4B1D0B7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    57,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
}


void __fastcall SkillLvMaster__AssertionSkillOverwriteByFixedTime(const MethodInfo *method)
{
  ;
}


void __fastcall SkillLvMaster__AssertionSkillOverwriteByNowTime(const MethodInfo *method)
{
  ;
}


SkillLvEntity_o *__fastcall SkillLvMaster__GetAddInvokeSkillLvEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillLvEnt,
        const MethodInfo *method)
{
  int32_t v5; // w21
  const MethodInfo *v6; // x1
  int32_t v7; // w0
  const MethodInfo *v8; // x4
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  entity = 0LL;
  if ( !skillLvEnt )
    sub_1BCB254(this, 0LL);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, (const MethodInfo *)skillLvEnt);
  v7 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, v6);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v7, v8);
  return entity;
}


int64_t __fastcall SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  int64_t result; // x0

  if ( (byte_4B1D0BA & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, v1);
    sub_1BCAFF8(&SkillLvMaster_TypeInfo, v2);
    byte_4B1D0BA = 1;
  }
  result = SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime;
  if ( !result )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    return NetworkManager__getTime(0LL);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall SkillLvMaster__GetDispValFromSkill(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v16; // x2
  SkillLvEntity_o *v17; // x1
  struct System_Int32_array *funcId; // x23
  DataVals_array *SetTypeDataValArray; // x21
  System_Collections_Generic_List_int__o *v20; // x20
  __int64 v21; // x2
  FunctionMaster_o *v22; // x22
  unsigned __int64 v23; // x24
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1D0BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&skillId);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&int___TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4B1D0BC = 1;
  }
  entity = 0LL;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, method);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_1BCB0A0(int___TypeInfo, 1LL);
  v17 = entity;
  if ( !entity )
    goto LABEL_22;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v16);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_22;
  if ( (int)funcId->max_length >= 1 )
  {
    v22 = (FunctionMaster_o *)Master_object;
    v23 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v23 >= SetTypeDataValArray->max_length )
        sub_1BCB25C(Master_object, v17, v21);
      if ( !v22 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(
                                        v22,
                                        SetTypeDataValArray->m_Items[v23],
                                        3,
                                        classStatisticsInfos,
                                        0LL);
      if ( !v20 )
        break;
      items = v20->fields._items;
      v25 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !items )
        break;
      size = v20->fields._size;
      v17 = (SkillLvEntity_o *)(unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          (int32_t)Master_object,
          *(const MethodInfo_369CBAC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v23 >= (int)funcId->max_length )
        goto LABEL_19;
    }
LABEL_22:
    sub_1BCB254(Master_object, v17);
  }
LABEL_19:
  if ( !v20 )
    goto LABEL_22;
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *__fastcall SkillLvMaster__GetEntity(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4B1D0B4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, *(_QWORD *)&skillId);
    sub_1BCAFF8(&SkillLvMaster_TypeInfo, v7);
    byte_4B1D0B4 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_32CC8B8 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
  return SkillLvMaster__GetOverwriteEntity(
           (SkillLvMaster_o *)Entity,
           (SkillLvEntity_o *)Entity,
           SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
           v10);
}


SkillLvEntity_o *__fastcall SkillLvMaster__GetOverwriteEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o *entity,
        int64_t time,
        const MethodInfo *method)
{
  SkillLvEntity_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Int32_array *Master_object; // x0
  System_Int32_array *v13; // x1
  const MethodInfo *v14; // x3
  __int64 v15; // x2
  __int64 v16; // x8
  System_Int32_array *v17; // x21
  unsigned __int64 v18; // x24
  int32_t v19; // w22
  const MethodInfo *v20; // x4
  __int64 v21; // x20
  const MethodInfo *v22; // x2
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Int32_array *v25; // x19
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Array_o *svals; // x0
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  v5 = entity;
  if ( (byte_4B1D0B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillGroupMaster___, entity);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v6);
    sub_1BCAFF8(&DataManager_TypeInfo, v7);
    sub_1BCAFF8(&int___TypeInfo, v8);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v9);
    sub_1BCAFF8(&SkillLvEntity_TypeInfo, v10);
    sub_1BCAFF8(&string___TypeInfo, v11);
    byte_4B1D0B6 = 1;
  }
  entitya = 0LL;
  if ( v5 )
  {
    if ( !time )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      time = NetworkManager__getTime(0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_object )
      goto LABEL_37;
    Master_object = SkillGroupMaster__GetSkillGroupIdArray(
                      (SkillGroupMaster_o *)Master_object,
                      v5->fields.skillId,
                      v5->fields.lv,
                      v14);
    if ( !Master_object )
      goto LABEL_37;
    v16 = *(_QWORD *)&Master_object->max_length;
    v17 = Master_object;
    if ( (int)v16 >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v16 )
          sub_1BCB25C(Master_object, v13, v15);
        v19 = v17->m_Items[v18 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                (SkillGroupOverwriteMaster_o *)Master_object,
                                                &entitya,
                                                v19,
                                                time,
                                                v20);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        LODWORD(v16) = v17->max_length;
        if ( (__int64)++v18 >= (int)v16 )
          return v5;
      }
      v21 = sub_1BCB244(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_42034740((SkillLvEntity_o *)v21, v5, v22);
      if ( !entitya )
        goto LABEL_37;
      Master_object = entitya->fields.funcId;
      if ( Master_object
        && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0LL)) != 0LL )
      {
        v25 = Master_object;
        Master_object = (System_Int32_array *)sub_1BCB134(Master_object, int___TypeInfo);
        v13 = Master_object;
        if ( !Master_object )
          goto LABEL_32;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v21 )
        goto LABEL_37;
      *(_QWORD *)(v21 + 32) = v13;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v13, v23, v24);
      if ( !entitya )
        goto LABEL_37;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_33;
      v29 = System_Array__Clone(svals, 0LL);
      if ( !v29 )
        goto LABEL_33;
      v25 = (System_Int32_array *)v29;
      v30 = sub_1BCB134(v29, string___TypeInfo);
      if ( v30 )
        goto LABEL_34;
LABEL_32:
      sub_1BCB514(v25);
LABEL_33:
      v30 = 0LL;
LABEL_34:
      *(_QWORD *)(v21 + 40) = v30;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 40), v30, v26, v27);
      if ( entitya )
      {
        v5 = (SkillLvEntity_o *)v21;
        *(_DWORD *)(v21 + 48) = entitya->fields.skillDetailId;
        return v5;
      }
LABEL_37:
      sub_1BCB254(Master_object, v13);
    }
  }
  return v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_Dictionary_string__object__o *__fastcall SkillLvMaster__GetSelectAddFuncInfo(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  bool v10; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1D0B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_Dictionary_string__object____, *(_QWORD *)&skillId);
    sub_1BCAFF8(&StringLiteral_12555/*"SelectAddInfo"*/, v8);
    byte_4B1D0B8 = 1;
  }
  entity = 0LL;
  v10 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v10 )
  {
    if ( !entity )
      sub_1BCB254(0LL, v9);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12555/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_30084F0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *__fastcall SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  DataVals_array *Master_object; // x0
  const MethodInfo *v6; // x1
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v8; // x20

  if ( (byte_4B1D0BD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, skillEnity);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    byte_4B1D0BD = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v8 = (FunctionMaster_o *)Master_object,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v6),
        !v8) )
  {
    sub_1BCB254(Master_object, v6);
  }
  return FunctionMaster__GetSetTypeDataValArray(v8, funcId, Master_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SkillLvMaster__GetUniqueFuncIdsFromSkill(
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

  if ( (byte_4B1D0BE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, ret);
    byte_4B1D0BE = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_32CC8B8 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds((SkillLvEntity_o *)Entity, ret, v13);
  }
  v14 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v14 )
    SkillLvEntity__GetUniqueFuncIds(v14, ret, v15);
}


void __fastcall SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1D0BB & 1) == 0 )
  {
    sub_1BCAFF8(&SkillLvMaster_TypeInfo, v1);
    byte_4B1D0BB = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_4B1D0B9 & 1) == 0 )
  {
    sub_1BCAFF8(&SkillLvMaster_TypeInfo, method);
    byte_4B1D0B9 = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SkillLvMaster__TryGetEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o **entity,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  Il2CppObject *PK; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  bool v13; // w20
  SkillLvEntity_o *OverwriteEntity; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B1D0B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__, entity);
    sub_1BCAFF8(&SkillLvMaster_TypeInfo, v9);
    byte_4B1D0B5 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v11 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_32CC904 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v13 = v11;
  if ( v11 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v11,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v12);
    *entity = OverwriteEntity;
    sub_1BCAF9C((CGThumbnailListItem_o *)entity, (int32_t)OverwriteEntity, v15, v16);
  }
  return v13;
}
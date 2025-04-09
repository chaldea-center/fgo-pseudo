void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BB990 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__, method);
    byte_49BB990 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    57,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
    sub_1B4D1EC(this, 0LL);
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

  if ( (byte_49BB993 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v1);
    sub_1B4CF90(&SkillLvMaster_TypeInfo, v2);
    byte_49BB993 = 1;
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
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v15; // x2
  SkillLvEntity_o *v16; // x1
  struct System_Int32_array *funcId; // x22
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v19; // x19
  FunctionMaster_o *v20; // x21
  unsigned __int64 v21; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_49BB995 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&skillId);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&int___TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_49BB995 = 1;
  }
  entity = 0LL;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_1B4D038(int___TypeInfo, 1LL);
  v16 = entity;
  if ( !entity )
    goto LABEL_23;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v15);
  v19 = (System_Collections_Generic_List_int__o *)sub_1B4D1DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_3562964 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_23;
  if ( (int)funcId->max_length >= 1 )
  {
    v20 = (FunctionMaster_o *)Master_object;
    v21 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v21 >= SetTypeDataValArray->max_length )
        sub_1B4D1F4(Master_object, v16);
      if ( !v20 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(v20, SetTypeDataValArray->m_Items[v21], 3, 0LL);
      if ( !v19 )
        break;
      items = v19->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !items )
        break;
      size = v19->fields._size;
      v16 = (SkillLvEntity_o *)(unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)Master_object,
          *(const MethodInfo_35631B8 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v21 >= (int)funcId->max_length )
        goto LABEL_19;
    }
LABEL_23:
    sub_1B4D1EC(Master_object, v16);
  }
LABEL_19:
  if ( !v19 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_3564C70 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49BB98D & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, *(_QWORD *)&skillId);
    sub_1B4CF90(&SkillLvMaster_TypeInfo, v7);
    byte_49BB98D = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_31A2454 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
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
  __int64 v15; // x8
  System_Int32_array *v16; // x21
  unsigned __int64 v17; // x24
  int32_t v18; // w22
  const MethodInfo *v19; // x4
  __int64 v20; // x20
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Int32_array *v24; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Array_o *svals; // x0
  Il2CppObject *v28; // x0
  __int64 v29; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  v5 = entity;
  if ( (byte_49BB98F & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillGroupMaster___, entity);
    sub_1B4CF90(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v6);
    sub_1B4CF90(&DataManager_TypeInfo, v7);
    sub_1B4CF90(&int___TypeInfo, v8);
    sub_1B4CF90(&NetworkManager_TypeInfo, v9);
    sub_1B4CF90(&SkillLvEntity_TypeInfo, v10);
    sub_1B4CF90(&string___TypeInfo, v11);
    byte_49BB98F = 1;
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
    Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_object )
      goto LABEL_37;
    Master_object = SkillGroupMaster__GetSkillGroupIdArray(
                      (SkillGroupMaster_o *)Master_object,
                      v5->fields.skillId,
                      v5->fields.lv,
                      v14);
    if ( !Master_object )
      goto LABEL_37;
    v15 = *(_QWORD *)&Master_object->max_length;
    v16 = Master_object;
    if ( (int)v15 >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v15 )
          sub_1B4D1F4(Master_object, v13);
        v18 = v16->m_Items[v17 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                (SkillGroupOverwriteMaster_o *)Master_object,
                                                &entitya,
                                                v18,
                                                time,
                                                v19);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        LODWORD(v15) = v16->max_length;
        if ( (__int64)++v17 >= (int)v15 )
          return v5;
      }
      v20 = sub_1B4D1DC(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_40536124((SkillLvEntity_o *)v20, v5, v21);
      if ( !entitya )
        goto LABEL_37;
      Master_object = entitya->fields.funcId;
      if ( Master_object
        && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0LL)) != 0LL )
      {
        v24 = Master_object;
        Master_object = (System_Int32_array *)sub_1B4D0CC(Master_object, int___TypeInfo);
        v13 = Master_object;
        if ( !Master_object )
          goto LABEL_32;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v20 )
        goto LABEL_37;
      *(_QWORD *)(v20 + 32) = v13;
      sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v13, v22, v23);
      if ( !entitya )
        goto LABEL_37;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_33;
      v28 = System_Array__Clone(svals, 0LL);
      if ( !v28 )
        goto LABEL_33;
      v24 = (System_Int32_array *)v28;
      v29 = sub_1B4D0CC(v28, string___TypeInfo);
      if ( v29 )
        goto LABEL_34;
LABEL_32:
      sub_1B4D4AC(v24);
LABEL_33:
      v29 = 0LL;
LABEL_34:
      *(_QWORD *)(v20 + 40) = v29;
      sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 40), v29, v25, v26);
      if ( entitya )
      {
        v5 = (SkillLvEntity_o *)v20;
        *(_DWORD *)(v20 + 48) = entitya->fields.skillDetailId;
        return v5;
      }
LABEL_37:
      sub_1B4D1EC(Master_object, v13);
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

  if ( (byte_49BB991 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_GetValue_Dictionary_string__object____, *(_QWORD *)&skillId);
    sub_1B4CF90(&StringLiteral_12376/*"SelectAddInfo"*/, v8);
    byte_49BB991 = 1;
  }
  entity = 0LL;
  v10 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v10 )
  {
    if ( !entity )
      sub_1B4D1EC(0LL, v9);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12376/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_2EEF7D0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
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

  if ( (byte_49BB996 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, skillEnity);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    byte_49BB996 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v8 = (FunctionMaster_o *)Master_object,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v6),
        !v8) )
  {
    sub_1B4D1EC(Master_object, v6);
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

  if ( (byte_49BB997 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, ret);
    byte_49BB997 = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_31A2454 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
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

  if ( (byte_49BB994 & 1) == 0 )
  {
    sub_1B4CF90(&SkillLvMaster_TypeInfo, v1);
    byte_49BB994 = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_49BB992 & 1) == 0 )
  {
    sub_1B4CF90(&SkillLvMaster_TypeInfo, method);
    byte_49BB992 = 1;
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

  if ( (byte_49BB98E & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__, entity);
    sub_1B4CF90(&SkillLvMaster_TypeInfo, v9);
    byte_49BB98E = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v11 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_31A24A0 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v13 = v11;
  if ( v11 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v11,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v12);
    *entity = OverwriteEntity;
    sub_1B4CF34((CGThumbnailListItem_o *)entity, (int32_t)OverwriteEntity, v15, v16);
  }
  return v13;
}
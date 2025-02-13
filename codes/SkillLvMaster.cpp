void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD019 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
    byte_4BDD019 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    57,
    (const MethodInfo_325E55C *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
    sub_1C22094(this, 0LL);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, (const MethodInfo *)skillLvEnt);
  v7 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, v6);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v7, v8);
  return entity;
}


int64_t __fastcall SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_4BDD01C & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&SkillLvMaster_TypeInfo);
    byte_4BDD01C = 1;
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


System_Int32_array *__fastcall SkillLvMaster__GetDispValFromSkill(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  Il2CppObject *Master_object; // x0
  const MethodInfo *v9; // x2
  SkillLvEntity_o *v10; // x1
  struct System_Int32_array *funcId; // x22
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v13; // x19
  FunctionMaster_o *v14; // x21
  unsigned __int64 v15; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDD01E & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDD01E = 1;
  }
  entity = 0LL;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_1C21EE0(int___TypeInfo, 1LL);
  v10 = entity;
  if ( !entity )
    goto LABEL_23;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v9);
  v13 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_23;
  if ( (int)funcId->max_length >= 1 )
  {
    v14 = (FunctionMaster_o *)Master_object;
    v15 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v15 >= SetTypeDataValArray->max_length )
        sub_1C2209C(Master_object, v10);
      if ( !v14 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(v14, SetTypeDataValArray->m_Items[v15], 3, 0LL);
      if ( !v13 )
        break;
      items = v13->fields._items;
      v17 = Method_System_Collections_Generic_List_int__Add__;
      ++v13->fields._version;
      if ( !items )
        break;
      size = v13->fields._size;
      v10 = (SkillLvEntity_o *)(unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v13,
          (int32_t)Master_object,
          *(const MethodInfo_3632090 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v15 >= (int)funcId->max_length )
        goto LABEL_19;
    }
LABEL_23:
    sub_1C22094(Master_object, v10);
  }
LABEL_19:
  if ( !v13 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *__fastcall SkillLvMaster__GetEntity(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_4BDD016 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    sub_1C21E38(&SkillLvMaster_TypeInfo);
    byte_4BDD016 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_3260880 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
  return SkillLvMaster__GetOverwriteEntity(
           (SkillLvMaster_o *)Entity,
           (SkillLvEntity_o *)Entity,
           SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
           v9);
}


SkillLvEntity_o *__fastcall SkillLvMaster__GetOverwriteEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o *entity,
        int64_t time,
        const MethodInfo *method)
{
  System_Int32_array *Master_object; // x0
  int64_t v7; // x1
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  System_Int32_array *v10; // x21
  unsigned __int64 v11; // x24
  int32_t v12; // w22
  const MethodInfo *v13; // x4
  __int64 v14; // x20
  const MethodInfo *v15; // x2
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Int32_array *v22; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v30; // x0
  int64_t v31; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDD018 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&SkillLvEntity_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    byte_4BDD018 = 1;
  }
  entitya = 0LL;
  if ( entity )
  {
    if ( !time )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      time = NetworkManager__getTime(0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_object )
      goto LABEL_37;
    Master_object = SkillGroupMaster__GetSkillGroupIdArray(
                      (SkillGroupMaster_o *)Master_object,
                      entity->fields.skillId,
                      entity->fields.lv,
                      v8);
    if ( !Master_object )
      goto LABEL_37;
    v9 = *(_QWORD *)&Master_object->max_length;
    v10 = Master_object;
    if ( (int)v9 >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( v11 >= (unsigned int)v9 )
          sub_1C2209C(Master_object, v7);
        v12 = v10->m_Items[v11 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
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
        LODWORD(v9) = v10->max_length;
        if ( (__int64)++v11 >= (int)v9 )
          return entity;
      }
      v14 = sub_1C22084(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_41217024((SkillLvEntity_o *)v14, entity, v15);
      if ( !entitya )
        goto LABEL_37;
      Master_object = entitya->fields.funcId;
      if ( Master_object
        && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0LL)) != 0LL )
      {
        v22 = Master_object;
        Master_object = (System_Int32_array *)sub_1C21F74(Master_object, int___TypeInfo);
        v7 = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_32;
      }
      else
      {
        v7 = 0LL;
      }
      if ( !v14 )
        goto LABEL_37;
      *(_QWORD *)(v14 + 32) = v7;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 32), v7, v16, v17, v18, v19, v20, v21);
      if ( !entitya )
        goto LABEL_37;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_33;
      v30 = System_Array__Clone(svals, 0LL);
      if ( !v30 )
        goto LABEL_33;
      v22 = (System_Int32_array *)v30;
      v31 = sub_1C21F74(v30, string___TypeInfo);
      if ( v31 )
        goto LABEL_34;
LABEL_32:
      sub_1C22354(v22);
LABEL_33:
      v31 = 0LL;
LABEL_34:
      *(_QWORD *)(v14 + 40) = v31;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v14 + 40), v31, v23, v24, v25, v26, v27, v28);
      if ( entitya )
      {
        entity = (SkillLvEntity_o *)v14;
        *(_DWORD *)(v14 + 48) = entitya->fields.skillDetailId;
        return entity;
      }
LABEL_37:
      sub_1C22094(Master_object, v7);
    }
  }
  return entity;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall SkillLvMaster__GetSelectAddFuncInfo(
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

  if ( (byte_4BDD01A & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_1C21E38(&StringLiteral_12817/*"SelectAddInfo"*/);
    byte_4BDD01A = 1;
  }
  entity = 0LL;
  v9 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_1C22094(0LL, v8);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12817/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_2F9DDA0 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *__fastcall SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  DataVals_array *Master_object; // x0
  const MethodInfo *v5; // x1
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v7; // x20

  if ( (byte_4BDD01F & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDD01F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v7 = (FunctionMaster_o *)Master_object,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v5),
        !v7) )
  {
    sub_1C22094(Master_object, v5);
  }
  return FunctionMaster__GetSetTypeDataValArray(v7, funcId, Master_object, 0LL);
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

  if ( (byte_4BDD020 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    byte_4BDD020 = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_3260880 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds((SkillLvEntity_o *)Entity, ret, v13);
  }
  v14 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v14 )
    SkillLvEntity__GetUniqueFuncIds(v14, ret, v15);
}


void __fastcall SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  if ( (byte_4BDD01D & 1) == 0 )
  {
    sub_1C21E38(&SkillLvMaster_TypeInfo);
    byte_4BDD01D = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_4BDD01B & 1) == 0 )
  {
    sub_1C21E38(&SkillLvMaster_TypeInfo);
    byte_4BDD01B = 1;
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
  Il2CppObject *PK; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  bool v12; // w20
  SkillLvEntity_o *OverwriteEntity; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDD017 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
    sub_1C21E38(&SkillLvMaster_TypeInfo);
    byte_4BDD017 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v10 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_32608CC *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v12 = v10;
  if ( v10 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v10,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v11);
    *entity = OverwriteEntity;
    sub_1C21DDC((PartyOrganizationUtility_o *)entity, (int64_t)OverwriteEntity, v14, v15, v16, v17, v18, v19);
  }
  return v12;
}
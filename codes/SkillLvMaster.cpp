void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__, method, v2);
    byte_4B16C82 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    53,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
    sub_1BCAA3C(this, 0LL);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, (const MethodInfo *)skillLvEnt);
  v7 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, v6);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v7, v8);
  return entity;
}


int64_t __fastcall SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  int64_t result; // x0

  if ( (byte_4B16C85 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&SkillLvMaster_TypeInfo, v3, v4);
    byte_4B16C85 = 1;
  }
  result = SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime;
  if ( !result )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v1);
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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Master_object; // x0
  const MethodInfo *v21; // x2
  SkillLvEntity_o *v22; // x1
  struct System_Int32_array *funcId; // x22
  DataVals_array *SetTypeDataValArray; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_List_int__o *v28; // x19
  __int64 v29; // x1
  FunctionMaster_o *v30; // x21
  unsigned __int64 v31; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B16C87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&skillId, *(_QWORD *)&skillLv);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v18, v19);
    byte_4B16C87 = 1;
  }
  entity = 0LL;
  Master_object = (Il2CppObject *)SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    return (System_Int32_array *)sub_1BCA888(int___TypeInfo, 1LL);
  v22 = entity;
  if ( !entity )
    goto LABEL_23;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)Master_object, entity, v21);
  v28 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v25,
                                                    v26,
                                                    v27);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v29);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_23;
  if ( (int)funcId->max_length >= 1 )
  {
    v30 = (FunctionMaster_o *)Master_object;
    v31 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v31 >= SetTypeDataValArray->max_length )
        sub_1BCAA44(Master_object, v22);
      if ( !v30 )
        break;
      Master_object = (Il2CppObject *)FunctionMaster__GetDispValFromFunc(v30, SetTypeDataValArray->m_Items[v31], 3, 0LL);
      if ( !v28 )
        break;
      items = v28->fields._items;
      v33 = Method_System_Collections_Generic_List_int__Add__;
      ++v28->fields._version;
      if ( !items )
        break;
      size = v28->fields._size;
      v22 = (SkillLvEntity_o *)(unsigned int)Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v28,
          (int32_t)Master_object,
          *(const MethodInfo_3584C38 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v28->fields._size = size + 1;
        items->m_Items[size + 1] = (int)Master_object;
      }
      if ( (__int64)++v31 >= (int)funcId->max_length )
        goto LABEL_19;
    }
LABEL_23:
    sub_1BCAA3C(Master_object, v22);
  }
LABEL_19:
  if ( !v28 )
    goto LABEL_23;
  return System_Collections_Generic_List_int___ToArray(
           v28,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *__fastcall SkillLvMaster__GetEntity(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *PK; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4B16C7F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__,
      *(_QWORD *)&skillId,
      *(_QWORD *)&lv);
    sub_1BCA7E0(&SkillLvMaster_TypeInfo, v7, v8);
    byte_4B16C7F = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = DataMasterBase_object__object__object___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             PK,
             (const MethodInfo_31B3198 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
  return SkillLvMaster__GetOverwriteEntity(
           (SkillLvMaster_o *)Entity,
           (SkillLvEntity_o *)Entity,
           SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
           v11);
}


SkillLvEntity_o *__fastcall SkillLvMaster__GetOverwriteEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o *entity,
        int64_t time,
        const MethodInfo *method)
{
  int64_t v4; // x20
  SkillLvEntity_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Int32_array *Master_object; // x0
  int64_t v19; // x1
  const MethodInfo *v20; // x3
  __int64 v21; // x8
  System_Int32_array *v22; // x21
  unsigned __int64 v23; // x24
  int32_t v24; // w22
  const MethodInfo *v25; // x4
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x20
  const MethodInfo *v29; // x2
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Int32_array *v36; // x19
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v44; // x0
  int64_t v45; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  v4 = time;
  v5 = entity;
  if ( (byte_4B16C81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillGroupMaster___, entity, time);
    sub_1BCA7E0(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&int___TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&SkillLvEntity_TypeInfo, v14, v15);
    sub_1BCA7E0(&string___TypeInfo, v16, v17);
    byte_4B16C81 = 1;
  }
  entitya = 0LL;
  if ( v5 )
  {
    if ( !v4 )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, entity);
      v4 = NetworkManager__getTime(0LL);
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
    Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_object )
      goto LABEL_37;
    Master_object = SkillGroupMaster__GetSkillGroupIdArray(
                      (SkillGroupMaster_o *)Master_object,
                      v5->fields.skillId,
                      v5->fields.lv,
                      v20);
    if ( !Master_object )
      goto LABEL_37;
    v21 = *(_QWORD *)&Master_object->max_length;
    v22 = Master_object;
    if ( (int)v21 >= 1 )
    {
      v23 = 0LL;
      while ( 1 )
      {
        if ( v23 >= (unsigned int)v21 )
          sub_1BCAA44(Master_object, v19);
        v24 = v22->m_Items[v23 + 1];
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v19);
        Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_object )
          goto LABEL_37;
        Master_object = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                (SkillGroupOverwriteMaster_o *)Master_object,
                                                &entitya,
                                                v24,
                                                v4,
                                                v25);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
          break;
        LODWORD(v21) = v22->max_length;
        if ( (__int64)++v23 >= (int)v21 )
          return v5;
      }
      v28 = sub_1BCAA2C(SkillLvEntity_TypeInfo, v19, v26, v27);
      SkillLvEntity___ctor_40676768((SkillLvEntity_o *)v28, v5, v29);
      if ( !entitya )
        goto LABEL_37;
      Master_object = entitya->fields.funcId;
      if ( Master_object
        && (Master_object = (System_Int32_array *)System_Array__Clone((System_Array_o *)Master_object, 0LL)) != 0LL )
      {
        v36 = Master_object;
        Master_object = (System_Int32_array *)sub_1BCA91C(Master_object, int___TypeInfo);
        v19 = (int64_t)Master_object;
        if ( !Master_object )
          goto LABEL_32;
      }
      else
      {
        v19 = 0LL;
      }
      if ( !v28 )
        goto LABEL_37;
      *(_QWORD *)(v28 + 32) = v19;
      sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 32), v19, v30, v31, v32, v33, v34, v35);
      if ( !entitya )
        goto LABEL_37;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_33;
      v44 = System_Array__Clone(svals, 0LL);
      if ( !v44 )
        goto LABEL_33;
      v36 = (System_Int32_array *)v44;
      v45 = sub_1BCA91C(v44, string___TypeInfo);
      if ( v45 )
        goto LABEL_34;
LABEL_32:
      sub_1BCACFC(v36);
LABEL_33:
      v45 = 0LL;
LABEL_34:
      *(_QWORD *)(v28 + 40) = v45;
      sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 40), v45, v37, v38, v39, v40, v41, v42);
      if ( entitya )
      {
        v5 = (SkillLvEntity_o *)v28;
        *(_DWORD *)(v28 + 48) = entitya->fields.skillDetailId;
        return v5;
      }
LABEL_37:
      sub_1BCAA3C(Master_object, v19);
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
  __int64 v9; // x2
  __int64 v10; // x1
  bool v11; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16C83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_Dictionary_string__object____, *(_QWORD *)&skillId, *(_QWORD *)&skillLv);
    sub_1BCA7E0(&StringLiteral_12728/*"SelectAddInfo"*/, v8, v9);
    byte_4B16C83 = 1;
  }
  entity = 0LL;
  v11 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v11 )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v10);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_object_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12728/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *__fastcall SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  DataVals_array *Master_object; // x0
  const MethodInfo *v7; // x1
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v9; // x20

  if ( (byte_4B16C88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_FunctionMaster___, skillEnity, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16C88 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, skillEnity);
  Master_object = (DataVals_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v9 = (FunctionMaster_o *)Master_object,
        Master_object = SkillLvEntity__getDataValsList(skillEnity, v7),
        !v9) )
  {
    sub_1BCAA3C(Master_object, v7);
  }
  return FunctionMaster__GetSetTypeDataValArray(v9, funcId, Master_object, 0LL);
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

  if ( (byte_4B16C89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, ret, *(_QWORD *)&skillId);
    byte_4B16C89 = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, skillLv, *(const MethodInfo **)&skillId);
    Entity = DataMasterBase_object__object__object___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               PK,
               (const MethodInfo_31B3198 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
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
  __int64 v2; // x2

  if ( (byte_4B16C86 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillLvMaster_TypeInfo, v1, v2);
    byte_4B16C86 = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16C84 & 1) == 0 )
  {
    sub_1BCA7E0(&SkillLvMaster_TypeInfo, method, v2);
    byte_4B16C84 = 1;
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
  __int64 v10; // x2
  Il2CppObject *PK; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x3
  bool v14; // w20
  SkillLvEntity_o *OverwriteEntity; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B16C80 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&skillId);
    sub_1BCA7E0(&SkillLvMaster_TypeInfo, v9, v10);
    byte_4B16C80 = 1;
  }
  PK = (Il2CppObject *)SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v12 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          (Il2CppObject **)entity,
          PK,
          (const MethodInfo_31B31E8 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  v14 = v12;
  if ( v12 )
  {
    OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                        (SkillLvMaster_o *)v12,
                        *entity,
                        SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                        v13);
    *entity = OverwriteEntity;
    sub_1BCA784((PartyOrganizationUtility_o *)entity, (int64_t)OverwriteEntity, v16, v17, v18, v19, v20, v21);
  }
  return v14;
}
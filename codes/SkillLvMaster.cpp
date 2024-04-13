void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E78C8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E78C8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    52,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
  int32_t v6; // w0
  const MethodInfo *v7; // x4
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( !skillLvEnt )
    sub_B5D69C(this, 0LL);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, 0LL);
  v6 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, 0LL);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v6, v7);
  return entity;
}


int64_t __fastcall SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int64_t result; // x0

  if ( (byte_42E78CB & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&SkillLvMaster_TypeInfo, v4, v5, v6);
    byte_42E78CB = 1;
  }
  result = SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime;
  if ( !result )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
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
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v27; // x2
  SkillLvEntity_o *v28; // x1
  struct System_Int32_array *funcId; // x22
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v31; // x19
  FunctionMaster_o *v32; // x21
  unsigned __int64 v33; // x23
  __int64 v35; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E78CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, skillId, skillLv, method);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v23, v24, v25);
    byte_42E78CD = 1;
  }
  entity = 0LL;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)SkillLvMaster__TryGetEntity(
                                                                  this,
                                                                  &entity,
                                                                  skillId,
                                                                  skillLv,
                                                                  v4);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 1LL);
  v28 = entity;
  if ( !entity )
    goto LABEL_19;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray(
                          (SkillLvMaster_o *)Master_WarQuestSelectionMaster,
                          entity,
                          v27);
  v31 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_19;
  if ( (int)funcId->max_length >= 1 )
  {
    v32 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v33 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v33 >= SetTypeDataValArray->max_length )
      {
        v35 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v35, 0LL);
      }
      if ( !v32 )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)FunctionMaster__GetDispValFromFunc(
                                                                      v32,
                                                                      SetTypeDataValArray->m_Items[v33],
                                                                      3,
                                                                      0LL);
      if ( !v31 )
        break;
      System_Collections_Generic_List_int___Add(
        v31,
        (int32_t)Master_WarQuestSelectionMaster,
        (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v33 >= (int)funcId->max_length )
        goto LABEL_16;
    }
LABEL_19:
    sub_B5D69C(Master_WarQuestSelectionMaster, v28);
  }
LABEL_16:
  if ( !v31 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v31,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


SkillLvEntity_o *__fastcall SkillLvMaster__GetEntity(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *PK; // x0
  SkillLvMaster_o *Entity; // x0
  const MethodInfo *v12; // x3

  if ( (byte_42E78C5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, skillId, lv, method);
    sub_B5D5C4(&SkillLvMaster_TypeInfo, v7, v8, v9);
    byte_42E78C5 = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, 0LL);
  Entity = (SkillLvMaster_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_23FB260 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
  return SkillLvMaster__GetOverwriteEntity(
           Entity,
           (SkillLvEntity_o *)Entity,
           SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
           v12);
}


SkillLvEntity_o *__fastcall SkillLvMaster__GetOverwriteEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o *entity,
        int64_t time,
        const MethodInfo *method)
{
  int64_t v4; // x20
  SkillLvEntity_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  SkillGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array **v25; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  SkillGroupMaster_o *v27; // x21
  unsigned __int64 v28; // x24
  int32_t v29; // w22
  __int64 v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  Il2CppObject *v37; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v45; // x0
  System_Int32_array **v46; // x1
  __int64 v48; // x0
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  v4 = time;
  v5 = entity;
  if ( (byte_42E78C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillGroupMaster___, (_DWORD)entity, time, method);
    sub_B5D5C4(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&int___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SkillLvEntity_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&string___TypeInfo, v21, v22, v23);
    byte_42E78C7 = 1;
  }
  entitya = 0LL;
  if ( v5 )
  {
    if ( !v4 )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v4 = NetworkManager__getTime(0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_40;
    Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupMaster__GetSkillGroupIdArray(
                                                             Master_WarQuestSelectionMaster,
                                                             v5->fields.skillId,
                                                             v5->fields.lv,
                                                             0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_40;
    MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v27 = Master_WarQuestSelectionMaster;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)MasterName_k__BackingField )
        {
          v48 = sub_B5D6C8(Master_WarQuestSelectionMaster);
          sub_B5D668(v48, 0LL);
        }
        v29 = *((_DWORD *)&v27->fields.list + v28);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_40;
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                                 (SkillGroupOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                                                 &entitya,
                                                                 v29,
                                                                 v4,
                                                                 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          break;
        LODWORD(MasterName_k__BackingField) = v27->fields._MasterName_k__BackingField;
        if ( (__int64)++v28 >= (int)MasterName_k__BackingField )
          return v5;
      }
      v30 = sub_B5D694(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_26830032((SkillLvEntity_o *)v30, v5, 0LL);
      if ( !entitya )
        goto LABEL_40;
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)entitya->fields.funcId;
      if ( Master_WarQuestSelectionMaster
        && (Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)System_Array__Clone(
                                                                     (System_Array_o *)Master_WarQuestSelectionMaster,
                                                                     0LL)) != 0LL )
      {
        v37 = (Il2CppObject *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)sub_B5D684(
                                                                 Master_WarQuestSelectionMaster,
                                                                 int___TypeInfo);
        v25 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_35;
      }
      else
      {
        v25 = 0LL;
      }
      if ( !v30 )
        goto LABEL_40;
      *(_QWORD *)(v30 + 32) = v25;
      sub_B5D560((BattleServantConfConponent_o *)(v30 + 32), v25, v31, v32, v33, v34, v35, v36);
      if ( !entitya )
        goto LABEL_40;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_36;
      v45 = System_Array__Clone(svals, 0LL);
      if ( !v45 )
        goto LABEL_36;
      v37 = v45;
      v46 = (System_Int32_array **)sub_B5D684(v45, string___TypeInfo);
      if ( v46 )
        goto LABEL_37;
LABEL_35:
      sub_B5D990(v37);
LABEL_36:
      v46 = 0LL;
LABEL_37:
      *(_QWORD *)(v30 + 40) = v46;
      sub_B5D560((BattleServantConfConponent_o *)(v30 + 40), v46, v38, v39, v40, v41, v42, v43);
      if ( entitya )
      {
        v5 = (SkillLvEntity_o *)v30;
        *(_DWORD *)(v30 + 48) = entitya->fields.skillDetailId;
        return v5;
      }
LABEL_40:
      sub_B5D69C(Master_WarQuestSelectionMaster, v25);
    }
  }
  return v5;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall SkillLvMaster__GetSelectAddFuncInfo(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t skillLv,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  bool v12; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E78C9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_GetValue_Dictionary_string__object____, skillId, skillLv, method);
    sub_B5D5C4(&StringLiteral_12805/*"SelectAddInfo"*/, v8, v9, v10);
    byte_42E78C9 = 1;
  }
  entity = 0LL;
  v12 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v12 )
  {
    if ( !entity )
      sub_B5D69C(0LL, v11);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_string_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12805/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_1AD8A70 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *__fastcall SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataVals_array *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v11; // x20

  if ( (byte_42E78CE & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_FunctionMaster___, (_DWORD)skillEnity, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E78CE = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataVals_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v11 = (FunctionMaster_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = SkillLvEntity__getDataValsList(skillEnity, 0LL),
        !v11) )
  {
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
  }
  return FunctionMaster__GetSetTypeDataValArray(v11, funcId, Master_WarQuestSelectionMaster, 0LL);
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
  System_String_o *PK; // x0
  SkillLvEntity_o *Entity; // x0
  SkillLvEntity_o *v13; // x0

  if ( (byte_42E78CF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__,
      (_DWORD)ret,
      skillId,
      *(_QWORD *)&skillLv);
    byte_42E78CF = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = SkillLvEntity__CreatePK(skillId, skillLv, 0LL);
    Entity = (SkillLvEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_23FB260 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds(Entity, ret, 0LL);
  }
  v13 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v13 )
    SkillLvEntity__GetUniqueFuncIds(v13, ret, 0LL);
}


void __fastcall SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E78CC & 1) == 0 )
  {
    sub_B5D5C4(&SkillLvMaster_TypeInfo, v1, v2, v3);
    byte_42E78CC = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E78CA & 1) == 0 )
  {
    sub_B5D5C4(&SkillLvMaster_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E78CA = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *PK; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x3
  SkillLvEntity_o *OverwriteEntity; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E78C6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__,
      (_DWORD)entity,
      skillId,
      *(_QWORD *)&lv);
    sub_B5D5C4(&SkillLvMaster_TypeInfo, v9, v10, v11);
    byte_42E78C6 = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, 0LL);
  v13 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          (WarQuestSelectionEntity_o **)entity,
          PK,
          (const MethodInfo_23FB2B8 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  if ( !v13 )
    return 0;
  OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                      (SkillLvMaster_o *)v13,
                      *entity,
                      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                      v14);
  *entity = OverwriteEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)entity,
    (System_Int32_array **)OverwriteEntity,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return 1;
}
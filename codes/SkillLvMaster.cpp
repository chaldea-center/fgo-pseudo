void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4186DE0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__, method);
    byte_4186DE0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    51,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  if ( !skillLvEnt )
    sub_B2C434(this, 0LL);
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

  if ( (byte_4186DE3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, v1);
    sub_B2C35C(&SkillLvMaster_TypeInfo, v2);
    byte_4186DE3 = 1;
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v15; // x2
  SkillLvEntity_o *v16; // x1
  struct System_Int32_array *funcId; // x22
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v19; // x19
  FunctionMaster_o *v20; // x21
  unsigned __int64 v21; // x23
  __int64 v23; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4186DE5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&skillId);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&int___TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_4186DE5 = 1;
  }
  entity = 0LL;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)SkillLvMaster__TryGetEntity(
                                                                  this,
                                                                  &entity,
                                                                  skillId,
                                                                  skillLv,
                                                                  v4);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 1LL);
  v16 = entity;
  if ( !entity )
    goto LABEL_19;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray(
                          (SkillLvMaster_o *)Master_WarQuestSelectionMaster,
                          entity,
                          v15);
  v19 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_19;
  if ( (int)funcId->max_length >= 1 )
  {
    v20 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v21 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v21 >= SetTypeDataValArray->max_length )
      {
        v23 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v23, 0LL);
      }
      if ( !v20 )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)FunctionMaster__GetDispValFromFunc(
                                                                      v20,
                                                                      SetTypeDataValArray->m_Items[v21],
                                                                      3,
                                                                      0LL);
      if ( !v19 )
        break;
      System_Collections_Generic_List_int___Add(
        v19,
        (int32_t)Master_WarQuestSelectionMaster,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v21 >= (int)funcId->max_length )
        goto LABEL_16;
    }
LABEL_19:
    sub_B2C434(Master_WarQuestSelectionMaster, v16);
  }
LABEL_16:
  if ( !v19 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
SkillLvEntity_o *__fastcall SkillLvMaster__GetEntity(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *PK; // x0
  SkillLvMaster_o *Entity; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4186DDD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, *(_QWORD *)&skillId);
    sub_B2C35C(&SkillLvMaster_TypeInfo, v7);
    byte_4186DDD = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = (SkillLvMaster_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_24E4520 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
  return SkillLvMaster__GetOverwriteEntity(
           Entity,
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
  SkillGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array **v13; // x1
  const MethodInfo *v14; // x3
  struct System_String_o *MasterName_k__BackingField; // x8
  SkillGroupMaster_o *v16; // x21
  unsigned __int64 v17; // x24
  int32_t v18; // w22
  const MethodInfo *v19; // x4
  __int64 v20; // x20
  const MethodInfo *v21; // x2
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  Il2CppObject *v28; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v36; // x0
  System_Int32_array **v37; // x1
  __int64 v39; // x0
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  v5 = entity;
  if ( (byte_4186DDF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_SkillGroupMaster___, entity);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&NetworkManager_TypeInfo, v9);
    sub_B2C35C(&SkillLvEntity_TypeInfo, v10);
    sub_B2C35C(&string___TypeInfo, v11);
    byte_4186DDF = 1;
  }
  entitya = 0LL;
  if ( v5 )
  {
    if ( !time )
    {
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      time = NetworkManager__getTime(0LL);
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_40;
    Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupMaster__GetSkillGroupIdArray(
                                                             Master_WarQuestSelectionMaster,
                                                             v5->fields.skillId,
                                                             v5->fields.lv,
                                                             v14);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_40;
    MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v16 = Master_WarQuestSelectionMaster;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)MasterName_k__BackingField )
        {
          v39 = sub_B2C460(Master_WarQuestSelectionMaster);
          sub_B2C400(v39, 0LL);
        }
        v18 = *((_DWORD *)&v16->fields.list + v17);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_40;
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                                 (SkillGroupOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                                                 &entitya,
                                                                 v18,
                                                                 time,
                                                                 v19);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          break;
        LODWORD(MasterName_k__BackingField) = v16->fields._MasterName_k__BackingField;
        if ( (__int64)++v17 >= (int)MasterName_k__BackingField )
          return v5;
      }
      v20 = sub_B2C42C(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_23795280((SkillLvEntity_o *)v20, v5, v21);
      if ( !entitya )
        goto LABEL_40;
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)entitya->fields.funcId;
      if ( Master_WarQuestSelectionMaster
        && (Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)System_Array__Clone(
                                                                     (System_Array_o *)Master_WarQuestSelectionMaster,
                                                                     0LL)) != 0LL )
      {
        v28 = (Il2CppObject *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)sub_B2C41C(
                                                                 Master_WarQuestSelectionMaster,
                                                                 int___TypeInfo);
        v13 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_35;
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v20 )
        goto LABEL_40;
      *(_QWORD *)(v20 + 32) = v13;
      sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 32), v13, v22, v23, v24, v25, v26, v27);
      if ( !entitya )
        goto LABEL_40;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_36;
      v36 = System_Array__Clone(svals, 0LL);
      if ( !v36 )
        goto LABEL_36;
      v28 = v36;
      v37 = (System_Int32_array **)sub_B2C41C(v36, string___TypeInfo);
      if ( v37 )
        goto LABEL_37;
LABEL_35:
      sub_B2C728(v28);
LABEL_36:
      v37 = 0LL;
LABEL_37:
      *(_QWORD *)(v20 + 40) = v37;
      sub_B2C2F8((BattleServantConfConponent_o *)(v20 + 40), v37, v29, v30, v31, v32, v33, v34);
      if ( entitya )
      {
        v5 = (SkillLvEntity_o *)v20;
        *(_DWORD *)(v20 + 48) = entitya->fields.skillDetailId;
        return v5;
      }
LABEL_40:
      sub_B2C434(Master_WarQuestSelectionMaster, v13);
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

  if ( (byte_4186DE1 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_GetValue_Dictionary_string__object____, *(_QWORD *)&skillId);
    sub_B2C35C(&StringLiteral_12655/*"SelectAddInfo"*/, v8);
    byte_4186DE1 = 1;
  }
  entity = 0LL;
  v10 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v10 )
  {
    if ( !entity )
      sub_B2C434(0LL, v9);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_string_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12655/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_17283E8 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *__fastcall SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  DataVals_array *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x1
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v8; // x20

  if ( (byte_4186DE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, skillEnity);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    byte_4186DE6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataVals_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v8 = (FunctionMaster_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = SkillLvEntity__getDataValsList(skillEnity, v6),
        !v8) )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v6);
  }
  return FunctionMaster__GetSetTypeDataValArray(v8, funcId, Master_WarQuestSelectionMaster, 0LL);
}


void __fastcall SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4186DE4 & 1) == 0 )
  {
    sub_B2C35C(&SkillLvMaster_TypeInfo, v1);
    byte_4186DE4 = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_4186DE2 & 1) == 0 )
  {
    sub_B2C35C(&SkillLvMaster_TypeInfo, method);
    byte_4186DE2 = 1;
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
  System_String_o *PK; // x0
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x3
  SkillLvEntity_o *OverwriteEntity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4186DDE & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__, entity);
    sub_B2C35C(&SkillLvMaster_TypeInfo, v9);
    byte_4186DDE = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v11 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          (WarQuestSelectionEntity_o **)entity,
          PK,
          (const MethodInfo_24E4578 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  if ( !v11 )
    return 0;
  OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                      (SkillLvMaster_o *)v11,
                      *entity,
                      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                      v12);
  *entity = OverwriteEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)entity,
    (System_Int32_array **)OverwriteEntity,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return 1;
}
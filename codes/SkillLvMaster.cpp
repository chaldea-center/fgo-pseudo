void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F9273 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__, method);
    byte_40F9273 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    51,
    (const MethodInfo_266F73C *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
    sub_B170D4();
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

  if ( (byte_40F9276 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, v1);
    sub_B16FFC(&SkillLvMaster_TypeInfo, v2);
    byte_40F9276 = 1;
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
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x2
  struct System_Int32_array *funcId; // x22
  DataVals_array *SetTypeDataValArray; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_int__o *v22; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  FunctionMaster_o *v26; // x21
  unsigned __int64 v27; // x23
  int32_t DispValFromFunc; // w0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9278 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, *(_QWORD *)&skillId);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&int___TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_40F9278 = 1;
  }
  entity = 0LL;
  v14 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  if ( !v14 )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 1LL, v15);
  if ( !entity )
    goto LABEL_19;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray((SkillLvMaster_o *)v14, entity, v15);
  v22 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v18,
                                                    v19,
                                                    v20,
                                                    v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_19;
  if ( (int)funcId->max_length >= 1 )
  {
    v26 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v27 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v27 >= SetTypeDataValArray->max_length )
      {
        sub_B17100(Master_WarQuestSelectionMaster, v24, v25);
        sub_B170A0();
      }
      if ( !v26 )
        break;
      DispValFromFunc = FunctionMaster__GetDispValFromFunc(v26, SetTypeDataValArray->m_Items[v27], 3, 0LL);
      if ( !v22 )
        break;
      System_Collections_Generic_List_int___Add(
        v22,
        DispValFromFunc,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v27 >= (int)funcId->max_length )
        goto LABEL_16;
    }
LABEL_19:
    sub_B170D4();
  }
LABEL_16:
  if ( !v22 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v22,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_40F9270 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__, *(_QWORD *)&skillId);
    sub_B16FFC(&SkillLvMaster_TypeInfo, v7);
    byte_40F9270 = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&lv);
  Entity = (SkillLvMaster_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                PK,
                                (const MethodInfo_266F7D8 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
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
  const MethodInfo *v13; // x3
  System_Int32_array *SkillGroupIdArray; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x8
  System_Int32_array *v18; // x21
  unsigned __int64 v19; // x24
  int32_t v20; // w22
  SkillGroupOverwriteMaster_o *v21; // x0
  const MethodInfo *v22; // x4
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x20
  const MethodInfo *v26; // x2
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Array_o *funcId; // x0
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x19
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v44; // x0
  System_Int32_array **v45; // x1
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  v5 = entity;
  if ( (byte_40F9272 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SkillGroupMaster___, entity);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&NetworkManager_TypeInfo, v9);
    sub_B16FFC(&SkillLvEntity_TypeInfo, v10);
    sub_B16FFC(&string___TypeInfo, v11);
    byte_40F9272 = 1;
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
    Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_40;
    SkillGroupIdArray = SkillGroupMaster__GetSkillGroupIdArray(
                          Master_WarQuestSelectionMaster,
                          v5->fields.skillId,
                          v5->fields.lv,
                          v13);
    if ( !SkillGroupIdArray )
      goto LABEL_40;
    v17 = *(_QWORD *)&SkillGroupIdArray->max_length;
    v18 = SkillGroupIdArray;
    if ( (int)v17 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( v19 >= (unsigned int)v17 )
        {
          sub_B17100(SkillGroupIdArray, v15, v16);
          sub_B170A0();
        }
        v20 = v18->m_Items[v19 + 1];
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v21 = (SkillGroupOverwriteMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !v21 )
          goto LABEL_40;
        SkillGroupIdArray = (System_Int32_array *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                    v21,
                                                    &entitya,
                                                    v20,
                                                    time,
                                                    v22);
        if ( ((unsigned __int8)SkillGroupIdArray & 1) != 0 )
          break;
        LODWORD(v17) = v18->max_length;
        if ( (__int64)++v19 >= (int)v17 )
          return v5;
      }
      v25 = sub_B170CC(SkillLvEntity_TypeInfo, v15, v16, v23, v24);
      SkillLvEntity___ctor_23621364((SkillLvEntity_o *)v25, v5, v26);
      if ( !entitya )
        goto LABEL_40;
      funcId = (System_Array_o *)entitya->fields.funcId;
      if ( funcId && (v34 = System_Array__Clone(funcId, 0LL)) != 0LL )
      {
        v35 = v34;
        v36 = (System_Int32_array **)sub_B170BC(v34, int___TypeInfo);
        if ( !v36 )
          goto LABEL_35;
      }
      else
      {
        v36 = 0LL;
      }
      if ( !v25 )
        goto LABEL_40;
      *(_QWORD *)(v25 + 32) = v36;
      sub_B16F98((BattleServantConfConponent_o *)(v25 + 32), v36, v27, v28, v29, v30, v31, v32);
      if ( !entitya )
        goto LABEL_40;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_36;
      v44 = System_Array__Clone(svals, 0LL);
      if ( !v44 )
        goto LABEL_36;
      v35 = v44;
      v45 = (System_Int32_array **)sub_B170BC(v44, string___TypeInfo);
      if ( v45 )
        goto LABEL_37;
LABEL_35:
      sub_B173C8(v35);
LABEL_36:
      v45 = 0LL;
LABEL_37:
      *(_QWORD *)(v25 + 40) = v45;
      sub_B16F98((BattleServantConfConponent_o *)(v25 + 40), v45, v37, v38, v39, v40, v41, v42);
      if ( entitya )
      {
        v5 = (SkillLvEntity_o *)v25;
        *(_DWORD *)(v25 + 48) = entitya->fields.skillDetailId;
        return v5;
      }
LABEL_40:
      sub_B170D4();
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
  bool v9; // w8
  System_Collections_Generic_Dictionary_string__object__o *result; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F9274 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_GetValue_Dictionary_string__object____, *(_QWORD *)&skillId);
    sub_B16FFC(&StringLiteral_12599/*"SelectAddInfo"*/, v8);
    byte_40F9274 = 1;
  }
  entity = 0LL;
  v9 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B170D4();
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_string_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12599/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_18B7D04 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *__fastcall SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v6; // x1
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v8; // x20
  DataVals_array *DataValsList; // x0

  if ( (byte_40F9279 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, skillEnity);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    byte_40F9279 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v8 = (FunctionMaster_o *)Master_WarQuestSelectionMaster,
        DataValsList = SkillLvEntity__getDataValsList(skillEnity, v6),
        !v8) )
  {
    sub_B170D4();
  }
  return FunctionMaster__GetSetTypeDataValArray(v8, funcId, DataValsList, 0LL);
}


void __fastcall SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F9277 & 1) == 0 )
  {
    sub_B16FFC(&SkillLvMaster_TypeInfo, v1);
    byte_40F9277 = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_40F9275 & 1) == 0 )
  {
    sub_B16FFC(&SkillLvMaster_TypeInfo, method);
    byte_40F9275 = 1;
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

  if ( (byte_40F9271 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__, entity);
    sub_B16FFC(&SkillLvMaster_TypeInfo, v9);
    byte_40F9271 = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, *(const MethodInfo **)&skillId);
  v11 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          (WarQuestSelectionEntity_o **)entity,
          PK,
          (const MethodInfo_266F830 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  if ( !v11 )
    return 0;
  OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                      (SkillLvMaster_o *)v11,
                      *entity,
                      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                      v12);
  *entity = OverwriteEntity;
  sub_B16F98(
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
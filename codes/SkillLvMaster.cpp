void __fastcall SkillLvMaster___ctor(SkillLvMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438A0E7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
    byte_438A0E7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    52,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string___ctor__);
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
    sub_B7769C(this, 0LL);
  v5 = SkillLvEntity__GetAddInvokeSkillId(skillLvEnt, 0LL);
  v6 = SkillLvEntity__GetAddInvokeSkillLv(skillLvEnt, 0LL);
  SkillLvMaster__TryGetEntity(this, &entity, v5, v6, v7);
  return entity;
}


int64_t __fastcall SkillLvMaster__GetBaseTime(const MethodInfo *method)
{
  int64_t result; // x0

  if ( (byte_438A0EA & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&SkillLvMaster_TypeInfo);
    byte_438A0EA = 1;
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x2
  SkillLvEntity_o *v10; // x1
  struct System_Int32_array *funcId; // x22
  DataVals_array *SetTypeDataValArray; // x20
  System_Collections_Generic_List_int__o *v13; // x19
  FunctionMaster_o *v14; // x21
  unsigned __int64 v15; // x23
  __int64 v17; // x0
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438A0EC & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438A0EC = 1;
  }
  entity = 0LL;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)SkillLvMaster__TryGetEntity(
                                                                  this,
                                                                  &entity,
                                                                  skillId,
                                                                  skillLv,
                                                                  v4);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    return (System_Int32_array *)sub_B775DC(int___TypeInfo, 1LL);
  v10 = entity;
  if ( !entity )
    goto LABEL_19;
  funcId = entity->fields.funcId;
  SetTypeDataValArray = SkillLvMaster__GetSetTypeDataValArray(
                          (SkillLvMaster_o *)Master_WarQuestSelectionMaster,
                          entity,
                          v9);
  v13 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !funcId )
    goto LABEL_19;
  if ( (int)funcId->max_length >= 1 )
  {
    v14 = (FunctionMaster_o *)Master_WarQuestSelectionMaster;
    v15 = 0LL;
    while ( SetTypeDataValArray )
    {
      if ( v15 >= SetTypeDataValArray->max_length )
      {
        v17 = sub_B776C8(Master_WarQuestSelectionMaster);
        sub_B77668(v17, 0LL);
      }
      if ( !v14 )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)FunctionMaster__GetDispValFromFunc(
                                                                      v14,
                                                                      SetTypeDataValArray->m_Items[v15],
                                                                      3,
                                                                      0LL);
      if ( !v13 )
        break;
      System_Collections_Generic_List_int___Add(
        v13,
        (int32_t)Master_WarQuestSelectionMaster,
        (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      if ( (__int64)++v15 >= (int)funcId->max_length )
        goto LABEL_16;
    }
LABEL_19:
    sub_B7769C(Master_WarQuestSelectionMaster, v10);
  }
LABEL_16:
  if ( !v13 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v13,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


SkillLvEntity_o *__fastcall SkillLvMaster__GetEntity(
        SkillLvMaster_o *this,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x0
  SkillLvMaster_o *Entity; // x0
  const MethodInfo *v9; // x3

  if ( (byte_438A0E4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    sub_B775C4(&SkillLvMaster_TypeInfo);
    byte_438A0E4 = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, 0LL);
  Entity = (SkillLvMaster_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                PK,
                                (const MethodInfo_21FBCE4 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
  return SkillLvMaster__GetOverwriteEntity(
           Entity,
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
  SkillGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array **v7; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  SkillGroupMaster_o *v9; // x21
  unsigned __int64 v10; // x24
  int32_t v11; // w22
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  Il2CppObject *v19; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Array_o *svals; // x0
  Il2CppObject *v27; // x0
  System_Int32_array **v28; // x1
  __int64 v30; // x0
  SkillGroupOverwriteEntity_o *entitya; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438A0E6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_SkillGroupMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&SkillLvEntity_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    byte_438A0E6 = 1;
  }
  entitya = 0LL;
  if ( entity )
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
    Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillGroupMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_40;
    Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupMaster__GetSkillGroupIdArray(
                                                             Master_WarQuestSelectionMaster,
                                                             entity->fields.skillId,
                                                             entity->fields.lv,
                                                             0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_40;
    MasterName_k__BackingField = Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
    v9 = Master_WarQuestSelectionMaster;
    if ( (int)MasterName_k__BackingField >= 1 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        if ( v10 >= (unsigned int)MasterName_k__BackingField )
        {
          v30 = sub_B776C8(Master_WarQuestSelectionMaster);
          sub_B77668(v30, 0LL);
        }
        v11 = *((_DWORD *)&v9->fields.list + v10);
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillGroupOverwriteMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_40;
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)SkillGroupOverwriteMaster__TryGetSkillGroupOverwriteEntity(
                                                                 (SkillGroupOverwriteMaster_o *)Master_WarQuestSelectionMaster,
                                                                 &entitya,
                                                                 v11,
                                                                 time,
                                                                 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
          break;
        LODWORD(MasterName_k__BackingField) = v9->fields._MasterName_k__BackingField;
        if ( (__int64)++v10 >= (int)MasterName_k__BackingField )
          return entity;
      }
      v12 = sub_B77694(SkillLvEntity_TypeInfo);
      SkillLvEntity___ctor_26852020((SkillLvEntity_o *)v12, entity, 0LL);
      if ( !entitya )
        goto LABEL_40;
      Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)entitya->fields.funcId;
      if ( Master_WarQuestSelectionMaster
        && (Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)System_Array__Clone(
                                                                     (System_Array_o *)Master_WarQuestSelectionMaster,
                                                                     0LL)) != 0LL )
      {
        v19 = (Il2CppObject *)Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (SkillGroupMaster_o *)sub_B77684(
                                                                 Master_WarQuestSelectionMaster,
                                                                 int___TypeInfo);
        v7 = (System_Int32_array **)Master_WarQuestSelectionMaster;
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_35;
      }
      else
      {
        v7 = 0LL;
      }
      if ( !v12 )
        goto LABEL_40;
      *(_QWORD *)(v12 + 32) = v7;
      sub_B77560((BattleServantConfConponent_o *)(v12 + 32), v7, v13, v14, v15, v16, v17, v18);
      if ( !entitya )
        goto LABEL_40;
      svals = (System_Array_o *)entitya->fields.svals;
      if ( !svals )
        goto LABEL_36;
      v27 = System_Array__Clone(svals, 0LL);
      if ( !v27 )
        goto LABEL_36;
      v19 = v27;
      v28 = (System_Int32_array **)sub_B77684(v27, string___TypeInfo);
      if ( v28 )
        goto LABEL_37;
LABEL_35:
      sub_B77990(v19);
LABEL_36:
      v28 = 0LL;
LABEL_37:
      *(_QWORD *)(v12 + 40) = v28;
      sub_B77560((BattleServantConfConponent_o *)(v12 + 40), v28, v20, v21, v22, v23, v24, v25);
      if ( entitya )
      {
        entity = (SkillLvEntity_o *)v12;
        *(_DWORD *)(v12 + 48) = entitya->fields.skillDetailId;
        return entity;
      }
LABEL_40:
      sub_B7769C(Master_WarQuestSelectionMaster, v7);
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

  if ( (byte_438A0E8 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_GetValue_Dictionary_string__object____);
    sub_B775C4(&StringLiteral_12890/*"SelectAddInfo"*/);
    byte_438A0E8 = 1;
  }
  entity = 0LL;
  v9 = SkillLvMaster__TryGetEntity(this, &entity, skillId, skillLv, v4);
  result = 0LL;
  if ( v9 )
  {
    if ( !entity )
      sub_B7769C(0LL, v8);
    return (System_Collections_Generic_Dictionary_string__object__o *)BasicHelper__GetValue_string_(
                                                                        entity->fields.script,
                                                                        (System_String_o *)StringLiteral_12890/*"SelectAddInfo"*/,
                                                                        0LL,
                                                                        (const MethodInfo_1C67E80 *)Method_BasicHelper_GetValue_Dictionary_string__object____);
  }
  return result;
}


DataVals_array *__fastcall SkillLvMaster__GetSetTypeDataValArray(
        SkillLvMaster_o *this,
        SkillLvEntity_o *skillEnity,
        const MethodInfo *method)
{
  DataVals_array *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  System_Int32_array *funcId; // x21
  FunctionMaster_o *v7; // x20

  if ( (byte_438A0ED & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438A0ED = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataVals_array *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !skillEnity
    || (funcId = skillEnity->fields.funcId,
        v7 = (FunctionMaster_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = SkillLvEntity__getDataValsList(skillEnity, 0LL),
        !v7) )
  {
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
  }
  return FunctionMaster__GetSetTypeDataValArray(v7, funcId, Master_WarQuestSelectionMaster, 0LL);
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

  if ( (byte_438A0EE & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    byte_438A0EE = 1;
  }
  if ( includeBeforeOverwrite )
  {
    PK = SkillLvEntity__CreatePK(skillId, skillLv, 0LL);
    Entity = (SkillLvEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                  (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                  PK,
                                  (const MethodInfo_21FBCE4 *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__GetEntity__);
    if ( Entity )
      SkillLvEntity__GetUniqueFuncIds(Entity, ret, 0LL);
  }
  v13 = SkillLvMaster__GetEntity(this, skillId, skillLv, *(const MethodInfo **)&skillLv);
  if ( v13 )
    SkillLvEntity__GetUniqueFuncIds(v13, ret, 0LL);
}


void __fastcall SkillLvMaster__ResetBaseTime(const MethodInfo *method)
{
  if ( (byte_438A0EB & 1) == 0 )
  {
    sub_B775C4(&SkillLvMaster_TypeInfo);
    byte_438A0EB = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = 0LL;
}


void __fastcall SkillLvMaster__SetBaseTime(int64_t value, const MethodInfo *method)
{
  if ( (byte_438A0E9 & 1) == 0 )
  {
    sub_B775C4(&SkillLvMaster_TypeInfo);
    byte_438A0E9 = 1;
  }
  SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = value;
}


bool __fastcall SkillLvMaster__TryGetEntity(
        SkillLvMaster_o *this,
        SkillLvEntity_o **entity,
        int32_t skillId,
        int32_t lv,
        const MethodInfo *method)
{
  System_String_o *PK; // x0
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  SkillLvEntity_o *OverwriteEntity; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_438A0E5 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
    sub_B775C4(&SkillLvMaster_TypeInfo);
    byte_438A0E5 = 1;
  }
  PK = SkillLvEntity__CreatePK(skillId, lv, 0LL);
  v10 = DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
          (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
          (WarQuestSelectionEntity_o **)entity,
          PK,
          (const MethodInfo_21FBD3C *)Method_DataMasterBase_SkillLvMaster__SkillLvEntity__string__TryGetEntity__);
  if ( !v10 )
    return 0;
  OverwriteEntity = SkillLvMaster__GetOverwriteEntity(
                      (SkillLvMaster_o *)v10,
                      *entity,
                      SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime,
                      v11);
  *entity = OverwriteEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)entity,
    (System_Int32_array **)OverwriteEntity,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return 1;
}
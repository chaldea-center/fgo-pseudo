void __fastcall ClassBoardSquareEntity___ctor(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B447FA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B447FA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ClassBoardSquareEntity__CreatePK(
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4B447F9 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4B447F9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           classBoardBaseId,
           id,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ClassBoardSquareEntity__CreatePrimaryKey(
        ClassBoardSquareEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ClassBoardSquareEntity__CreatePK(this->fields.classBoardBaseId, this->fields.id, v2);
}


bool __fastcall ClassBoardSquareEntity__IsGrand(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B447F7 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v4);
    byte_4B447F7 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.classBoardBaseId,
                                    (const MethodInfo_32E1E88 *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return SLODWORD(entity[4].monitor) > 0;
LABEL_11:
    sub_1BDBAD4(Master_object, v6);
  }
  return 0;
}


bool __fastcall ClassBoardSquareEntity__IsSetGrandSvt(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  _QWORD *EntityByClassBoardBaseId; // x0
  _QWORD *v8; // x19

  if ( (byte_4B447F8 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GrandGraphMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantGrandMaster___, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    byte_4B447F8 = 1;
  }
  if ( !ClassBoardSquareEntity__IsGrand(this, method) )
  {
    LOBYTE(EntityByClassBoardBaseId) = 0;
    return (char)EntityByClassBoardBaseId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GrandGraphMaster___);
  if ( !Master_object )
    goto LABEL_15;
  EntityByClassBoardBaseId = GrandGraphMaster__GetEntityByClassBoardBaseId(
                               (GrandGraphMaster_o *)Master_object,
                               this->fields.classBoardBaseId,
                               0LL);
  if ( !EntityByClassBoardBaseId )
    return (char)EntityByClassBoardBaseId;
  v8 = EntityByClassBoardBaseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !Master_object )
LABEL_15:
    sub_1BDBAD4(Master_object, v6);
  EntityByClassBoardBaseId = UserServantGrandMaster__GetEntityFromGrandGraphId(
                               (UserServantGrandMaster_o *)Master_object,
                               *((_DWORD *)v8 + 4),
                               0LL);
  if ( EntityByClassBoardBaseId )
    LOBYTE(EntityByClassBoardBaseId) = EntityByClassBoardBaseId[4] > 0LL;
  return (char)EntityByClassBoardBaseId;
}


bool __fastcall ClassBoardSquareEntity__get_HasLockId(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.lockId != 0;
}


bool __fastcall ClassBoardSquareEntity__get_IsBlank(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall ClassBoardSquareEntity__get_IsCommandSpell(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillType == 2;
}


bool __fastcall ClassBoardSquareEntity__get_IsPassive(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.skillType == 1;
}


bool __fastcall ClassBoardSquareEntity__get_IsStart(ClassBoardSquareEntity_o *this, const MethodInfo *method)
{
  return this->fields.flag & 1;
}
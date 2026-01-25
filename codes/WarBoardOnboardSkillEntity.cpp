void WarBoardOnboardSkillEntity___ctor(WarBoardOnboardSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF802 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF802 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardOnboardSkillEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEF7FE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF7FE = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardOnboardSkillEntity__CreatePrimaryKey(
        WarBoardOnboardSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardOnboardSkillEntity__CreatePK(this->fields.stageId, this->fields.idx, v2);
}


int32_t WarBoardOnboardSkillEntity__GetBreakPointDamageType(
        WarBoardOnboardSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4CEF800 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_15638/*"WarBoardBreakPointDamageType"*/);
    byte_4CEF800 = 1;
  }
  return WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15638/*"WarBoardBreakPointDamageType"*/, 0, v2);
}


int32_t WarBoardOnboardSkillEntity__GetIntFromScript(
        WarBoardOnboardSkillEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  WarBoardOnboardSkillEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CEF7FF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEF7FF = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_1C7BD40(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v10, v11);
  sub_1C7C0DC(Item);
  return WarBoardOnboardSkillEntity__GetBreakPointDamageType(v13, v14);
}


System_Int32_array *WarBoardOnboardSkillEntity__GetSquareIndexGroup(
        WarBoardOnboardSkillEntity_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t IntFromScript; // w0
  int32_t v7; // w21
  WarBoardSquareIndexGroupMaster_o *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4CEF801 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C7BAE8(&StringLiteral_23852/*"squareIndexGroup"*/);
    byte_4CEF801 = 1;
  }
  IntFromScript = WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23852/*"squareIndexGroup"*/, -1, v3);
  if ( IntFromScript == -1 )
    return this->fields.targetSquareIndex;
  v7 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Master_object
    || (Master_object = (WarBoardSquareIndexGroupMaster_o *)WarBoardSquareIndexGroupMaster__GetStageList(
                                                              Master_object,
                                                              v7,
                                                              stageId,
                                                              v10)) == 0 )
  {
    sub_1C7BD40(Master_object, v9);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_3823890 *)Method_System_Collections_Generic_List_int__ToArray__);
}
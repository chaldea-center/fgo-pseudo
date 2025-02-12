void __fastcall WarBoardOnboardSkillEntity___ctor(WarBoardOnboardSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC8AF4 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_string___ctor__, method);
    byte_4BC8AF4 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_324620C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardOnboardSkillEntity__CreatePK(
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4BC8AF0 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4BC8AF0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_2F9D6B4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardOnboardSkillEntity__CreatePrimaryKey(
        WarBoardOnboardSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardOnboardSkillEntity__CreatePK(this->fields.stageId, this->fields.idx, v2);
}


int32_t __fastcall WarBoardOnboardSkillEntity__GetBreakPointDamageType(
        WarBoardOnboardSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BC8AF2 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_15836/*"WarBoardBreakPointDamageType"*/, method);
    byte_4BC8AF2 = 1;
  }
  return WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15836/*"WarBoardBreakPointDamageType"*/, 0, v2);
}


int32_t __fastcall WarBoardOnboardSkillEntity__GetIntFromScript(
        WarBoardOnboardSkillEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  WarBoardOnboardSkillEntity_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_4BC8AF1 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_1C1ABD4(&long_TypeInfo, v8);
    byte_4BC8AF1 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3302EE4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3302C70 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_1C1AE30(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v12, v13);
  sub_1C1B0F0(Item);
  return WarBoardOnboardSkillEntity__GetBreakPointDamageType(v15, v16);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardOnboardSkillEntity__GetSquareIndexGroup(
        WarBoardOnboardSkillEntity_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t IntFromScript; // w0
  int32_t v10; // w21
  WarBoardSquareIndexGroupMaster_o *Master_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3

  if ( (byte_4BC8AF3 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, *(_QWORD *)&stageId);
    sub_1C1ABD4(&DataManager_TypeInfo, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1C1ABD4(&StringLiteral_23863/*"squareIndexGroup"*/, v8);
    byte_4BC8AF3 = 1;
  }
  IntFromScript = WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23863/*"squareIndexGroup"*/, -1, v3);
  if ( IntFromScript == -1 )
    return this->fields.targetSquareIndex;
  v10 = IntFromScript;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Master_object
    || (Master_object = (WarBoardSquareIndexGroupMaster_o *)WarBoardSquareIndexGroupMaster__GetStageList(
                                                              Master_object,
                                                              v10,
                                                              stageId,
                                                              v13)) == 0LL )
  {
    sub_1C1AE30(Master_object, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_3621324 *)Method_System_Collections_Generic_List_int__ToArray__);
}
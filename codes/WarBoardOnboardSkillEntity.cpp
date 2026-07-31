void WarBoardOnboardSkillEntity___ctor(WarBoardOnboardSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59398BB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59398BB = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardOnboardSkillEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_59398B7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59398B7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_59398B9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16161/*"WarBoardBreakPointDamageType"*/);
    byte_59398B9 = 1;
  }
  return WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_16161/*"WarBoardBreakPointDamageType"*/, 0, v2);
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
  WarBoardOnboardSkillEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_59398B8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    byte_59398B8 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)key,
                                                                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
    sub_21FFECC(Item, v8);
  }
  if ( Item->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item, qword_594C090, v10);
  sub_220024C(Item, qword_594C090, v10);
  return WarBoardOnboardSkillEntity__GetBreakPointDamageType(v12, v13);
}


System_Int32_array *WarBoardOnboardSkillEntity__GetSquareIndexGroup(
        WarBoardOnboardSkillEntity_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t IntFromScript; // w0
  __int64 v7; // x1
  int32_t v8; // w21
  WarBoardSquareIndexGroupMaster_o *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_59398BA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&StringLiteral_24834/*"squareIndexGroup"*/);
    byte_59398BA = 1;
  }
  IntFromScript = WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24834/*"squareIndexGroup"*/, -1, v3);
  if ( IntFromScript == -1 )
    return this->fields.targetSquareIndex;
  v8 = IntFromScript;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7);
  Master_object = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Master_object
    || (Master_object = (WarBoardSquareIndexGroupMaster_o *)WarBoardSquareIndexGroupMaster__GetStageList(
                                                              Master_object,
                                                              v8,
                                                              stageId,
                                                              v11)) == 0 )
  {
    sub_21FFECC(Master_object, v10);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}
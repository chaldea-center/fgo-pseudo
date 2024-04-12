void __fastcall WarBoardOnboardSkillEntity___ctor(WarBoardOnboardSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AEA73 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AEA73 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardOnboardSkillEntity__CreatePK(
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_42AEA6F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42AEA6F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_42AEA71 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15515/*"WarBoardBreakPointDamageType"*/);
    byte_42AEA71 = 1;
  }
  return WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15515/*"WarBoardBreakPointDamageType"*/, 0, v2);
}


int32_t __fastcall WarBoardOnboardSkillEntity__GetIntFromScript(
        WarBoardOnboardSkillEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  WarBoardOnboardSkillEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42AEA70 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&long_TypeInfo);
    byte_42AEA70 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B52A5C(Item, v8);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  v11 = (WarBoardOnboardSkillEntity_o *)sub_B52D50(Item);
  return WarBoardOnboardSkillEntity__GetBreakPointDamageType(v11, v12);
}


System_Int32_array *__fastcall WarBoardOnboardSkillEntity__GetSquareIndexGroup(
        WarBoardOnboardSkillEntity_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t IntFromScript; // w0
  int32_t v7; // w21
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42AEA72 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&StringLiteral_22428/*"squareIndexGroup"*/);
    byte_42AEA72 = 1;
  }
  IntFromScript = WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22428/*"squareIndexGroup"*/, -1, v3);
  if ( IntFromScript == -1 )
    return this->fields.targetSquareIndex;
  v7 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)WarBoardSquareIndexGroupMaster__GetStageList(
                                                                               Master_WarQuestSelectionMaster,
                                                                               v7,
                                                                               stageId,
                                                                               0LL)) == 0LL )
  {
    sub_B52A5C(Master_WarQuestSelectionMaster, v9);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}
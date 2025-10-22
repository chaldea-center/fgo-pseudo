void BattleScriptActionData___ctor(BattleScriptActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4C59430 & 1) == 0 )
  {
    sub_1C3E564(&BattleActionData_TypeInfo);
    byte_4C59430 = 1;
  }
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)this, method);
  this->fields.state = 9;
}


void BattleScriptActionData__SetBattleScript(
        BattleScriptActionData_o *this,
        BattleLogicBattleScript_o *logic,
        BattleScriptEntity_array *entities,
        bool isEach,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x24
  struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o **p_ListBattleScriptData_k__BackingField; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *BattleScriptData; // x0
  Il2CppObject *v14; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v16; // x24
  bool v17; // w23
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8

  if ( (byte_4C59431 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
    byte_4C59431 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
  p_ListBattleScriptData_k__BackingField = &this->fields._ListBattleScriptData_k__BackingField;
  this->fields._ListBattleScriptData_k__BackingField = (struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._ListBattleScriptData_k__BackingField, (int32_t)v9, v11, v12);
  if ( !entities )
    goto LABEL_16;
  max_length = entities->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = isEach;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        sub_1C3E7C8(BattleScriptData, v14);
      if ( !logic )
        break;
      BattleScriptData = (System_Collections_Generic_List_object__o *)BattleLogicBattleScript__CreateBattleScriptData(
                                                                        logic,
                                                                        this->fields.actorId,
                                                                        entities->m_Items[v16],
                                                                        v17,
                                                                        0);
      if ( BattleScriptData )
      {
        v14 = (Il2CppObject *)BattleScriptData;
        BattleScriptData = (System_Collections_Generic_List_object__o *)*p_ListBattleScriptData_k__BackingField;
        if ( !*p_ListBattleScriptData_k__BackingField )
          break;
        items = BattleScriptData->fields._items;
        v21 = Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__;
        ++BattleScriptData->fields._version;
        if ( !items )
          break;
        size = BattleScriptData->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            BattleScriptData,
            v14,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          BattleScriptData->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v14;
          sub_1C3E508((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
        }
      }
      LODWORD(max_length) = entities->max_length;
      if ( (__int64)++v16 >= (int)max_length )
        return;
    }
LABEL_16:
    sub_1C3E7C0(BattleScriptData, v14);
  }
}


System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o *BattleScriptActionData__get_ListBattleScriptData(
        BattleScriptActionData_o *this,
        const MethodInfo *method)
{
  return this->fields._ListBattleScriptData_k__BackingField;
}


void BattleScriptActionData__set_ListBattleScriptData(
        BattleScriptActionData_o *this,
        System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ListBattleScriptData_k__BackingField = value;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields._ListBattleScriptData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}
void BattleScriptActionData___ctor(BattleScriptActionData_o *this, const MethodInfo *method)
{
  if ( (byte_4CC9AE7 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_TypeInfo);
    byte_4CC9AE7 = 1;
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
        BaseAiActArgument_o *arg,
        bool isEach,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x25
  struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o **p_ListBattleScriptData_k__BackingField; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *BattleScriptData; // x0
  Il2CppObject *v20; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x25
  bool v23; // w24
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x8

  if ( (byte_4CC9AE8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
    byte_4CC9AE8 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
  p_ListBattleScriptData_k__BackingField = &this->fields._ListBattleScriptData_k__BackingField;
  this->fields._ListBattleScriptData_k__BackingField = (struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o *)v11;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ListBattleScriptData_k__BackingField,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !entities )
    goto LABEL_16;
  max_length = entities->max_length;
  if ( (int)max_length >= 1 )
  {
    v22 = 0;
    v23 = isEach;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)max_length )
        sub_1C71610(BattleScriptData);
      if ( !logic )
        break;
      BattleScriptData = (System_Collections_Generic_List_object__o *)BattleLogicBattleScript__CreateBattleScriptData(
                                                                        logic,
                                                                        this->fields.actorId,
                                                                        entities->m_Items[v22],
                                                                        arg,
                                                                        v23,
                                                                        0);
      if ( BattleScriptData )
      {
        v20 = (Il2CppObject *)BattleScriptData;
        BattleScriptData = (System_Collections_Generic_List_object__o *)*p_ListBattleScriptData_k__BackingField;
        if ( !*p_ListBattleScriptData_k__BackingField )
          break;
        items = BattleScriptData->fields._items;
        v31 = Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__;
        ++BattleScriptData->fields._version;
        if ( !items )
          break;
        size = BattleScriptData->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            BattleScriptData,
            v20,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          BattleScriptData->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v20;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v20, v24, v25, v26, v27, v28, v29);
        }
      }
      LODWORD(max_length) = entities->max_length;
      if ( (__int64)++v22 >= (int)max_length )
        return;
    }
LABEL_16:
    sub_1C71608(BattleScriptData, v20);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ListBattleScriptData_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._ListBattleScriptData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
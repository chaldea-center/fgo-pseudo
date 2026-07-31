void BattleScriptActionData___ctor(BattleScriptActionData_o *this, const MethodInfo *method)
{
  if ( (byte_593AF1D & 1) == 0 )
  {
    sub_21FFC50(&BattleActionData_TypeInfo);
    byte_593AF1D = 1;
  }
  if ( !*(&BattleActionData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo, method);
  BattleActionData___ctor((BattleActionData_o *)this, 0);
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
  struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o **p_ListBattleScriptData_k__BackingField; // x24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *BattleScriptData; // x0
  Il2CppObject *v20; // x1
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v22; // x25
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x8

  if ( (byte_593AF1E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
    byte_593AF1E = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
  p_ListBattleScriptData_k__BackingField = &this->fields._ListBattleScriptData_k__BackingField;
  this->fields._ListBattleScriptData_k__BackingField = (struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ListBattleScriptData_k__BackingField,
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
    while ( 1 )
    {
      if ( v22 >= (unsigned int)max_length )
        sub_21FFED4(BattleScriptData);
      if ( !logic )
        break;
      BattleScriptData = (System_Collections_Generic_List_object__o *)BattleLogicBattleScript__CreateBattleScriptData(
                                                                        logic,
                                                                        this->fields.actorId,
                                                                        entities->m_Items[v22],
                                                                        arg,
                                                                        isEach,
                                                                        0);
      if ( BattleScriptData )
      {
        v20 = (Il2CppObject *)BattleScriptData;
        BattleScriptData = (System_Collections_Generic_List_object__o *)*p_ListBattleScriptData_k__BackingField;
        if ( !*p_ListBattleScriptData_k__BackingField )
          break;
        items = BattleScriptData->fields._items;
        v30 = Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__;
        ++BattleScriptData->fields._version;
        if ( !items )
          break;
        size = BattleScriptData->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            BattleScriptData,
            v20,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          BattleScriptData->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v20;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v20, v23, v24, v25, v26, v27, v28);
        }
      }
      LODWORD(max_length) = entities->max_length;
      if ( (__int64)++v22 >= (int)max_length )
        return;
    }
LABEL_16:
    sub_21FFECC(BattleScriptData, v20);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ListBattleScriptData_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ListBattleScriptData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}
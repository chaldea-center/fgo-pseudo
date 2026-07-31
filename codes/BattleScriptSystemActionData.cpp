void BattleScriptSystemActionData___ctor(BattleScriptSystemActionData_o *this, const MethodInfo *method)
{
  BattleScriptActionData___ctor((BattleScriptActionData_o *)this, method);
  this->fields.state = 9;
}


void BattleScriptSystemActionData__SetBattleScriptSystem(
        BattleScriptSystemActionData_o *this,
        BattleLogicBattleScript_o *logic,
        BattleScriptEntity_array *entities,
        int32_t systemType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *BattleScriptSystemData; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *ListBattleScriptData_k__BackingField; // x22
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppObject *v28; // x1
  Il2CppClass **v29; // x0

  if ( (byte_593AF1F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
    byte_593AF1F = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
  this->fields._ListBattleScriptData_k__BackingField = (struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o *)v9;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ListBattleScriptData_k__BackingField,
    (int32_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( !logic
    || (ListBattleScriptData_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ListBattleScriptData_k__BackingField,
        BattleScriptSystemData = (Il2CppObject *)BattleLogicBattleScript__CreateBattleScriptSystemData(
                                                   logic,
                                                   entities,
                                                   systemType,
                                                   0),
        !ListBattleScriptData_k__BackingField)
    || (items = ListBattleScriptData_k__BackingField->fields._items,
        v26 = Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__,
        ++ListBattleScriptData_k__BackingField->fields._version,
        !items) )
  {
    sub_21FFECC(BattleScriptSystemData, v17);
  }
  size = ListBattleScriptData_k__BackingField->fields._size;
  v28 = BattleScriptSystemData;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ListBattleScriptData_k__BackingField,
      BattleScriptSystemData,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    ListBattleScriptData_k__BackingField->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v28;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v28, v19, v20, v21, v22, v23, v24);
  }
}
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *BattleScriptSystemData; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ListBattleScriptData_k__BackingField; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_4CB89B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
    byte_4CB89B5 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData___ctor__);
  this->fields._ListBattleScriptData_k__BackingField = (struct System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ListBattleScriptData_k__BackingField, (int32_t)v9, v10, v11);
  if ( !logic
    || (ListBattleScriptData_k__BackingField = (System_Collections_Generic_List_object__o *)this->fields._ListBattleScriptData_k__BackingField,
        BattleScriptSystemData = (Il2CppObject *)BattleLogicBattleScript__CreateBattleScriptSystemData(
                                                   logic,
                                                   entities,
                                                   systemType,
                                                   0),
        !ListBattleScriptData_k__BackingField)
    || (items = ListBattleScriptData_k__BackingField->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicBattleScript_BattleScriptData__Add__,
        ++ListBattleScriptData_k__BackingField->fields._version,
        !items) )
  {
    sub_1C6BC60(BattleScriptSystemData, v13);
  }
  size = ListBattleScriptData_k__BackingField->fields._size;
  v20 = BattleScriptSystemData;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      ListBattleScriptData_k__BackingField,
      BattleScriptSystemData,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    ListBattleScriptData_k__BackingField->fields._size = size + 1;
    v21 = &items->obj.klass + size;
    v21[4] = (Il2CppClass *)v20;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
  }
}
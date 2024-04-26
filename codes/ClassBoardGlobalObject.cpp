void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  if ( (byte_4353AEB & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
    sub_B70694(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_4353AEB = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2CE9F98 *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  clsQuestCheck_o *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4353AEA & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    sub_B70694(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_4353AEA = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  v3[1].klass = (clsQuestCheck_c *)mapCamera;
  sub_B70630((BattleServantConfConponent_o *)&v3[1], (System_Int32_array **)mapCamera, v5, v6, v7, v8, v9, v10);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  clsQuestCheck_o *v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Int32_array **IconAtlasManagerUnit_k__BackingField; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_4353AE9 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    sub_B70694(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_4353AE9 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !v3
    || (IconAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._IconAtlasManagerUnit_k__BackingField,
        v3->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)IconAtlasManagerUnit_k__BackingField,
        sub_B70630(
          (BattleServantConfConponent_o *)&v3->fields,
          IconAtlasManagerUnit_k__BackingField,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_B7076C(v3, v4);
  }
  BoardUiAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  v3->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)BoardUiAtlasManagerUnit_k__BackingField;
  sub_B70630(
    (BattleServantConfConponent_o *)&v3->fields.cQuestReleaseListP,
    BoardUiAtlasManagerUnit_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  clsQuestCheck_o *v1; // x0
  __int64 v2; // x1

  if ( (byte_4353AE6 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    sub_B70694(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_4353AE6 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v1 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v1 )
    sub_B7076C(0LL, v2);
  return (AtlasManagerUnit_o *)v1->fields.qrs;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  clsQuestCheck_o *v1; // x0
  __int64 v2; // x1

  if ( (byte_4353AE8 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    sub_B70694(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_4353AE8 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v1 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v1 )
    sub_B7076C(0LL, v2);
  return (MapCamera_o *)v1[1].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  clsQuestCheck_o *v1; // x0
  __int64 v2; // x1

  if ( (byte_4353AE7 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    sub_B70694(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
    byte_4353AE7 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v1 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v1 )
    sub_B7076C(0LL, v2);
  return (AtlasManagerUnit_o *)v1->fields.cQuestReleaseListP;
}
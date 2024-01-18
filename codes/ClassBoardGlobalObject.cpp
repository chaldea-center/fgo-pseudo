void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_41894E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__, method);
    sub_B2C35C(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_41894E3 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2841CD4 *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  __int64 v3; // x1
  clsQuestCheck_o *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_41894E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_41894E2 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
  v4[1].klass = (clsQuestCheck_c *)mapCamera;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4[1], (System_Int32_array **)mapCamera, v6, v7, v8, v9, v10, v11);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  __int64 v3; // x1
  clsQuestCheck_o *v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **IconAtlasManagerUnit_k__BackingField; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_41894E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_41894E1 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !v4
    || (IconAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._IconAtlasManagerUnit_k__BackingField,
        v4->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)IconAtlasManagerUnit_k__BackingField,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v4->fields,
          IconAtlasManagerUnit_k__BackingField,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_B2C434(v4, v5);
  }
  BoardUiAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  v4->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)BoardUiAtlasManagerUnit_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v4->fields.cQuestReleaseListP,
    BoardUiAtlasManagerUnit_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_41894DE & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B2C35C(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_41894DE = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  return (AtlasManagerUnit_o *)v3->fields.qrs;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_41894E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B2C35C(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_41894E0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  return (MapCamera_o *)v3[1].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_41894DF & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B2C35C(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_41894DF = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  return (AtlasManagerUnit_o *)v3->fields.cQuestReleaseListP;
}
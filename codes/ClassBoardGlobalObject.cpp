void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3

  if ( (byte_42EA7F7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v5, v6, v7);
    byte_42EA7F7 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A304CC *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  clsQuestCheck_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42EA7F6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v5, v6, v7);
    byte_42EA7F6 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  v8[1].klass = (clsQuestCheck_c *)mapCamera;
  sub_B5D560((BattleServantConfConponent_o *)&v8[1], (System_Int32_array **)mapCamera, v10, v11, v12, v13, v14, v15);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  clsQuestCheck_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **IconAtlasManagerUnit_k__BackingField; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_42EA7F5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v5, v6, v7);
    byte_42EA7F5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !v8
    || (IconAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._IconAtlasManagerUnit_k__BackingField,
        v8->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)IconAtlasManagerUnit_k__BackingField,
        sub_B5D560(
          (BattleServantConfConponent_o *)&v8->fields,
          IconAtlasManagerUnit_k__BackingField,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        (v8 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_B5D69C(v8, v9);
  }
  BoardUiAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  v8->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)BoardUiAtlasManagerUnit_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v8->fields.cQuestReleaseListP,
    BoardUiAtlasManagerUnit_k__BackingField,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  clsQuestCheck_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42EA7F2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1, v2, v3);
    sub_B5D5C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v4, v5, v6);
    byte_42EA7F2 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  return (AtlasManagerUnit_o *)v7->fields.qrs;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  clsQuestCheck_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42EA7F4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1, v2, v3);
    sub_B5D5C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v4, v5, v6);
    byte_42EA7F4 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  return (MapCamera_o *)v7[1].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  clsQuestCheck_o *v7; // x0
  __int64 v8; // x1

  if ( (byte_42EA7F3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1, v2, v3);
    sub_B5D5C4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v4, v5, v6);
    byte_42EA7F3 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v7 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v7 )
    sub_B5D69C(0LL, v8);
  return (AtlasManagerUnit_o *)v7->fields.cQuestReleaseListP;
}
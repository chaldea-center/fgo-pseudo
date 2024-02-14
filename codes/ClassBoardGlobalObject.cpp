void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4217B12 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__, method);
    sub_B0D8A4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_4217B12 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A716D0 *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  __int64 v3; // x1
  clsQuestCheck_o *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4217B11 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_4217B11 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v4 )
    sub_B0D97C(0LL);
  v4[1].klass = (clsQuestCheck_c *)mapCamera;
  sub_B0D840((BattleServantConfConponent_o *)&v4[1], (System_Int32_array **)mapCamera, v5, v6, v7, v8, v9, v10);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  __int64 v3; // x1
  clsQuestCheck_o *v4; // x0
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

  if ( (byte_4217B10 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_4217B10 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !v4
    || (IconAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._IconAtlasManagerUnit_k__BackingField,
        v4->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)IconAtlasManagerUnit_k__BackingField,
        sub_B0D840(
          (BattleServantConfConponent_o *)&v4->fields,
          IconAtlasManagerUnit_k__BackingField,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_B0D97C(v4);
  }
  BoardUiAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  v4->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)BoardUiAtlasManagerUnit_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v4->fields.cQuestReleaseListP,
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
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0

  if ( (byte_4217B0D & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B0D8A4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_4217B0D = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  return (AtlasManagerUnit_o *)v3->fields.qrs;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0

  if ( (byte_4217B0F & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B0D8A4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_4217B0F = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  return (MapCamera_o *)v3[1].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0

  if ( (byte_4217B0E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B0D8A4(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_4217B0E = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B0D97C(0LL);
  return (AtlasManagerUnit_o *)v3->fields.cQuestReleaseListP;
}
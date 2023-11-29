void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_40FB95D & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__, method);
    sub_B16FFC(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_40FB95D = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  SingletonTemplate_clsQuestCheck____ctor(
    (SingletonTemplate_clsQuestCheck__o *)this,
    (const MethodInfo_2A555A4 *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
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

  if ( (byte_40FB95C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_40FB95C = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v4 )
    sub_B170D4();
  v4[1].klass = (clsQuestCheck_c *)mapCamera;
  sub_B16F98((BattleServantConfConponent_o *)&v4[1], (System_Int32_array **)mapCamera, v5, v6, v7, v8, v9, v10);
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
  clsQuestCheck_o *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_40FB95B & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v3);
    byte_40FB95B = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v4 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !v4
    || (IconAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._IconAtlasManagerUnit_k__BackingField,
        v4->fields.qrs = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)IconAtlasManagerUnit_k__BackingField,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v4->fields,
          IconAtlasManagerUnit_k__BackingField,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (v12 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_B170D4();
  }
  BoardUiAtlasManagerUnit_k__BackingField = (System_Int32_array **)contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  v12->fields.cQuestReleaseListP = (struct System_Collections_Generic_List_QuestReleaseEntity__o *)BoardUiAtlasManagerUnit_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v12->fields.cQuestReleaseListP,
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

  if ( (byte_40FB958 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B16FFC(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_40FB958 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B170D4();
  return (AtlasManagerUnit_o *)v3->fields.qrs;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0

  if ( (byte_40FB95A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B16FFC(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_40FB95A = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B170D4();
  return (MapCamera_o *)v3[1].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  clsQuestCheck_o *v3; // x0

  if ( (byte_40FB959 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    sub_B16FFC(&SingletonTemplate_ClassBoardGlobalObject__TypeInfo, v2);
    byte_40FB959 = 1;
  }
  if ( (BYTE3(SingletonTemplate_ClassBoardGlobalObject__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_ClassBoardGlobalObject__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_ClassBoardGlobalObject__TypeInfo);
  }
  v3 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !v3 )
    sub_B170D4();
  return (AtlasManagerUnit_o *)v3->fields.cQuestReleaseListP;
}
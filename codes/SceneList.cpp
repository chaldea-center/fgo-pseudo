void __fastcall SceneList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v34; // x19
  __int64 v35; // x0
  __int64 v36; // x1
  struct SceneList_StaticFields *static_fields; // x0

  if ( (byte_4183AD3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v3);
    sub_B2C35C(&SceneList_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_2785/*"BattleScriptScene"*/, v5);
    sub_B2C35C(&StringLiteral_13159/*"SummonEffectScene"*/, v6);
    sub_B2C35C(&StringLiteral_10595/*"PartyOrganizationScene"*/, v7);
    sub_B2C35C(&StringLiteral_4008/*"ClassBoardSelectScene"*/, v8);
    sub_B2C35C(&StringLiteral_15427/*"WarehouseScene"*/, v9);
    sub_B2C35C(&StringLiteral_8970/*"MasterFormationScene"*/, v10);
    sub_B2C35C(&StringLiteral_4007/*"ClassBoardScene"*/, v11);
    sub_B2C35C(&StringLiteral_12719/*"ServantListScene"*/, v12);
    sub_B2C35C(&StringLiteral_6730/*"FollowerScene"*/, v13);
    sub_B2C35C(&StringLiteral_13163/*"SummonScene"*/, v14);
    sub_B2C35C(&StringLiteral_12712/*"ServantEquipListScene"*/, v15);
    sub_B2C35C(&StringLiteral_7617/*"InitScene"*/, v16);
    sub_B2C35C(&StringLiteral_6191/*"EventRewardScene"*/, v17);
    sub_B2C35C(&StringLiteral_8972/*"MasterMissionScene"*/, v18);
    sub_B2C35C(&StringLiteral_6807/*"FriendScene"*/, v19);
    sub_B2C35C(&StringLiteral_6761/*"FormationScene"*/, v20);
    sub_B2C35C(&StringLiteral_12846/*"ShopScene"*/, v21);
    sub_B2C35C(&StringLiteral_15422/*"WarBoardScene"*/, v22);
    sub_B2C35C(&StringLiteral_2784/*"BattleScene"*/, v23);
    sub_B2C35C(&StringLiteral_2777/*"BattleDemoScene"*/, v24);
    sub_B2C35C(&StringLiteral_5191/*"DebugTestScene"*/, v25);
    sub_B2C35C(&StringLiteral_13627/*"TerminalScene"*/, v26);
    sub_B2C35C(&StringLiteral_5916/*"EmptyScene"*/, v27);
    sub_B2C35C(&StringLiteral_13169/*"SupportSelectScene"*/, v28);
    sub_B2C35C(&StringLiteral_4158/*"CombineScene"*/, v29);
    sub_B2C35C(&StringLiteral_1/*""*/, v30);
    sub_B2C35C(&StringLiteral_9262/*"MyRoomScene"*/, v31);
    sub_B2C35C(&StringLiteral_14478/*"TitleScene"*/, v32);
    sub_B2C35C(&StringLiteral_4120/*"CoinRoomScene"*/, v33);
    byte_4183AD3 = 1;
  }
  v34 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v34,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v34 )
    sub_B2C434(v35, v36);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    -1,
    (System_String_o *)StringLiteral_1/*""*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    0,
    (System_String_o *)StringLiteral_7617/*"InitScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    4,
    (System_String_o *)StringLiteral_5191/*"DebugTestScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    9,
    (System_String_o *)StringLiteral_14478/*"TitleScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    10,
    (System_String_o *)StringLiteral_2784/*"BattleScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    20,
    (System_String_o *)StringLiteral_13163/*"SummonScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    22,
    (System_String_o *)StringLiteral_12846/*"ShopScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    23,
    (System_String_o *)StringLiteral_6807/*"FriendScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    30,
    (System_String_o *)StringLiteral_9262/*"MyRoomScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    32,
    (System_String_o *)StringLiteral_4158/*"CombineScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    34,
    (System_String_o *)StringLiteral_13627/*"TerminalScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    35,
    (System_String_o *)StringLiteral_6730/*"FollowerScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    38,
    (System_String_o *)StringLiteral_2785/*"BattleScriptScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    39,
    (System_String_o *)StringLiteral_6761/*"FormationScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    40,
    (System_String_o *)StringLiteral_10595/*"PartyOrganizationScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    41,
    (System_String_o *)StringLiteral_12719/*"ServantListScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    42,
    (System_String_o *)StringLiteral_12712/*"ServantEquipListScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    44,
    (System_String_o *)StringLiteral_8970/*"MasterFormationScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    50,
    (System_String_o *)StringLiteral_2777/*"BattleDemoScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    60,
    (System_String_o *)StringLiteral_13169/*"SupportSelectScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    71,
    (System_String_o *)StringLiteral_15427/*"WarehouseScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    72,
    (System_String_o *)StringLiteral_6191/*"EventRewardScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    1000,
    (System_String_o *)StringLiteral_5916/*"EmptyScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    1001,
    (System_String_o *)StringLiteral_13159/*"SummonEffectScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    80,
    (System_String_o *)StringLiteral_15422/*"WarBoardScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    90,
    (System_String_o *)StringLiteral_4120/*"CoinRoomScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    91,
    (System_String_o *)StringLiteral_4007/*"ClassBoardScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    92,
    (System_String_o *)StringLiteral_4008/*"ClassBoardSelectScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v34,
    100,
    (System_String_o *)StringLiteral_8972/*"MasterMissionScene"*/,
    (const MethodInfo_2E46384 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  static_fields = SceneList_TypeInfo->static_fields;
  static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v34;
  sub_B2C2F8(static_fields, v34);
}


void __fastcall SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SceneList_c *v5; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0
  SceneList_c *v7; // x0

  if ( (byte_4183AD1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v3);
    sub_B2C35C(&SceneList_TypeInfo, v4);
    byte_4183AD1 = 1;
  }
  v5 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v5 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->nameList;
  if ( !nameList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         nameList,
         type,
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v7 = SceneList_TypeInfo;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      v7 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->nameList;
    if ( nameList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               nameList,
               type,
               (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_14:
    sub_B2C434(nameList, method);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  SceneList___c__DisplayClass3_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  SceneList_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_KeyValuePair_SceneList_Type__string___bool__o *v14; // x21

  if ( (byte_4183AD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method);
    sub_B2C35C(&Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__, v3);
    sub_B2C35C(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v5);
    sub_B2C35C(&SceneList_TypeInfo, v6);
    sub_B2C35C(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v7);
    sub_B2C35C(&SceneList___c__DisplayClass3_0_TypeInfo, v8);
    byte_4183AD2 = 1;
  }
  v9 = (SceneList___c__DisplayClass3_0_o *)sub_B2C42C(SceneList___c__DisplayClass3_0_TypeInfo);
  SceneList___c__DisplayClass3_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.name = name;
  sub_B2C2F8(&v9->fields, name);
  v12 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v12 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->nameList;
  v14 = (System_Func_KeyValuePair_SceneList_Type__string___bool__o *)sub_B2C42C(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_SceneList_Type__string___bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    (const MethodInfo_2704F74 *)Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_SceneList_Type__string__(
           nameList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_1A90DE0 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
}


void __fastcall SceneList___c__DisplayClass3_0___ctor(SceneList___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SceneList___c__DisplayClass3_0___getSceneType_b__0(
        SceneList___c__DisplayClass3_0_o *this,
        System_Collections_Generic_KeyValuePair_SceneList_Type__string__o c,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = c.fields.value;
  if ( (byte_418566A & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key);
    byte_418566A = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
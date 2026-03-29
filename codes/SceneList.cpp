void SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F8FB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C93AD4(&SceneList_TypeInfo);
    sub_1C93AD4(&StringLiteral_3142/*"BattleScriptScene"*/);
    sub_1C93AD4(&StringLiteral_13268/*"SummonEffectScene"*/);
    sub_1C93AD4(&StringLiteral_10639/*"PartyOrganizationScene"*/);
    sub_1C93AD4(&StringLiteral_4496/*"ClassBoardSelectScene"*/);
    sub_1C93AD4(&StringLiteral_15697/*"WarehouseScene"*/);
    sub_1C93AD4(&StringLiteral_8998/*"MasterFormationScene"*/);
    sub_1C93AD4(&StringLiteral_11316/*"RecommendSupportSelectScene"*/);
    sub_1C93AD4(&StringLiteral_4495/*"ClassBoardScene"*/);
    sub_1C93AD4(&StringLiteral_12835/*"ServantListScene"*/);
    sub_1C93AD4(&StringLiteral_6810/*"FollowerScene"*/);
    sub_1C93AD4(&StringLiteral_13272/*"SummonScene"*/);
    sub_1C93AD4(&StringLiteral_12826/*"ServantEquipListScene"*/);
    sub_1C93AD4(&StringLiteral_7701/*"InitScene"*/);
    sub_1C93AD4(&StringLiteral_6280/*"EventRewardScene"*/);
    sub_1C93AD4(&StringLiteral_9001/*"MasterMissionScene"*/);
    sub_1C93AD4(&StringLiteral_6909/*"FriendScene"*/);
    sub_1C93AD4(&StringLiteral_6866/*"FormationScene"*/);
    sub_1C93AD4(&StringLiteral_12951/*"ShopScene"*/);
    sub_1C93AD4(&StringLiteral_15692/*"WarBoardScene"*/);
    sub_1C93AD4(&StringLiteral_3139/*"BattleScene"*/);
    sub_1C93AD4(&StringLiteral_3130/*"BattleDemoScene"*/);
    sub_1C93AD4(&StringLiteral_5198/*"DebugTestScene"*/);
    sub_1C93AD4(&StringLiteral_13810/*"TerminalScene"*/);
    sub_1C93AD4(&StringLiteral_5993/*"EmptyScene"*/);
    sub_1C93AD4(&StringLiteral_13278/*"SupportSelectScene"*/);
    sub_1C93AD4(&StringLiteral_7201/*"GrandServantListScene"*/);
    sub_1C93AD4(&StringLiteral_4595/*"CombineScene"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_9282/*"MyRoomScene"*/);
    sub_1C93AD4(&StringLiteral_14618/*"TitleScene"*/);
    sub_1C93AD4(&StringLiteral_4551/*"CoinRoomScene"*/);
    byte_4D2F8FB = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34F52C0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C93D2C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7701/*"InitScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5198/*"DebugTestScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14618/*"TitleScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3139/*"BattleScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13272/*"SummonScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12951/*"ShopScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6909/*"FriendScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9282/*"MyRoomScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4595/*"CombineScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13810/*"TerminalScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6810/*"FollowerScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3142/*"BattleScriptScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6866/*"FormationScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10639/*"PartyOrganizationScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12835/*"ServantListScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12826/*"ServantEquipListScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8998/*"MasterFormationScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3130/*"BattleDemoScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13278/*"SupportSelectScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11316/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15697/*"WarehouseScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6280/*"EventRewardScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5993/*"EmptyScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13268/*"SummonEffectScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15692/*"WarBoardScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4551/*"CoinRoomScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4495/*"ClassBoardScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4496/*"ClassBoardSelectScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_9001/*"MasterMissionScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7201/*"GrandServantListScene"*/,
    (const MethodInfo_34F5C94 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
}


void SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  SceneList_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0
  SceneList_c *v5; // x0

  if ( (byte_4D2F8F9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C93AD4(&SceneList_TypeInfo);
    byte_4D2F8F9 = 1;
  }
  v3 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v3 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->nameList;
  if ( !nameList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         nameList,
         type,
         (const MethodInfo_34F5E88 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v5 = SceneList_TypeInfo;
    if ( !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      v5 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->nameList;
    if ( nameList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  nameList,
                                  type,
                                  (const MethodInfo_34F5BF4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C93D2C(nameList, method);
  }
  return 0;
}


int32_t SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  SceneList_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v14; // x21

  if ( (byte_4D2F8FA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C93AD4(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C93AD4(&SceneList_TypeInfo);
    sub_1C93AD4(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C93AD4(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4D2F8FA = 1;
  }
  v3 = sub_1C93D20(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C93D2C(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)name, v6, v7, v8, v9, v10, v11);
  v12 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v12 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->nameList;
  v14 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_31CD054 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
}


void SceneList___c__DisplayClass3_0___ctor(SceneList___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SceneList___c__DisplayClass3_0___getSceneType_b__0(
        SceneList___c__DisplayClass3_0_o *this,
        System_Collections_Generic_KeyValuePair_SceneList_Type__string__o c,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = c.fields.value;
  if ( (byte_4D2F8FC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4D2F8FC = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
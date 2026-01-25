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

  if ( (byte_4CED5A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C7BAE8(&SceneList_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3129/*"BattleScriptScene"*/);
    sub_1C7BAE8(&StringLiteral_13227/*"SummonEffectScene"*/);
    sub_1C7BAE8(&StringLiteral_10605/*"PartyOrganizationScene"*/);
    sub_1C7BAE8(&StringLiteral_4480/*"ClassBoardSelectScene"*/);
    sub_1C7BAE8(&StringLiteral_15655/*"WarehouseScene"*/);
    sub_1C7BAE8(&StringLiteral_8971/*"MasterFormationScene"*/);
    sub_1C7BAE8(&StringLiteral_11279/*"RecommendSupportSelectScene"*/);
    sub_1C7BAE8(&StringLiteral_4479/*"ClassBoardScene"*/);
    sub_1C7BAE8(&StringLiteral_12794/*"ServantListScene"*/);
    sub_1C7BAE8(&StringLiteral_6788/*"FollowerScene"*/);
    sub_1C7BAE8(&StringLiteral_13231/*"SummonScene"*/);
    sub_1C7BAE8(&StringLiteral_12785/*"ServantEquipListScene"*/);
    sub_1C7BAE8(&StringLiteral_7677/*"InitScene"*/);
    sub_1C7BAE8(&StringLiteral_6258/*"EventRewardScene"*/);
    sub_1C7BAE8(&StringLiteral_8974/*"MasterMissionScene"*/);
    sub_1C7BAE8(&StringLiteral_6887/*"FriendScene"*/);
    sub_1C7BAE8(&StringLiteral_6844/*"FormationScene"*/);
    sub_1C7BAE8(&StringLiteral_12910/*"ShopScene"*/);
    sub_1C7BAE8(&StringLiteral_15650/*"WarBoardScene"*/);
    sub_1C7BAE8(&StringLiteral_3126/*"BattleScene"*/);
    sub_1C7BAE8(&StringLiteral_3117/*"BattleDemoScene"*/);
    sub_1C7BAE8(&StringLiteral_5182/*"DebugTestScene"*/);
    sub_1C7BAE8(&StringLiteral_13769/*"TerminalScene"*/);
    sub_1C7BAE8(&StringLiteral_5975/*"EmptyScene"*/);
    sub_1C7BAE8(&StringLiteral_13237/*"SupportSelectScene"*/);
    sub_1C7BAE8(&StringLiteral_7179/*"GrandServantListScene"*/);
    sub_1C7BAE8(&StringLiteral_4579/*"CombineScene"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_9254/*"MyRoomScene"*/);
    sub_1C7BAE8(&StringLiteral_14577/*"TitleScene"*/);
    sub_1C7BAE8(&StringLiteral_4535/*"CoinRoomScene"*/);
    byte_4CED5A9 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34BBB78 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C7BD40(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7677/*"InitScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5182/*"DebugTestScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14577/*"TitleScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3126/*"BattleScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13231/*"SummonScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12910/*"ShopScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6887/*"FriendScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9254/*"MyRoomScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4579/*"CombineScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13769/*"TerminalScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6788/*"FollowerScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3129/*"BattleScriptScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6844/*"FormationScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10605/*"PartyOrganizationScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12794/*"ServantListScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12785/*"ServantEquipListScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8971/*"MasterFormationScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3117/*"BattleDemoScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13237/*"SupportSelectScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11279/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15655/*"WarehouseScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6258/*"EventRewardScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5975/*"EmptyScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13227/*"SummonEffectScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15650/*"WarBoardScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4535/*"CoinRoomScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4479/*"ClassBoardScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4480/*"ClassBoardSelectScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_8974/*"MasterMissionScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7179/*"GrandServantListScene"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4CED5A7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C7BAE8(&SceneList_TypeInfo);
    byte_4CED5A7 = 1;
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
         (const MethodInfo_34BC740 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_34BC4AC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C7BD40(nameList, method);
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

  if ( (byte_4CED5A8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C7BAE8(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C7BAE8(&SceneList_TypeInfo);
    sub_1C7BAE8(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C7BAE8(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4CED5A8 = 1;
  }
  v3 = sub_1C7BD34(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)name, v6, v7, v8, v9, v10, v11);
  v12 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v12 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->nameList;
  v14 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_31986DC *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4CED5AA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4CED5AA = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
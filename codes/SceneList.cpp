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

  if ( (byte_4CC62F1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C713B0(&SceneList_TypeInfo);
    sub_1C713B0(&StringLiteral_3122/*"BattleScriptScene"*/);
    sub_1C713B0(&StringLiteral_13180/*"SummonEffectScene"*/);
    sub_1C713B0(&StringLiteral_10573/*"PartyOrganizationScene"*/);
    sub_1C713B0(&StringLiteral_4469/*"ClassBoardSelectScene"*/);
    sub_1C713B0(&StringLiteral_15601/*"WarehouseScene"*/);
    sub_1C713B0(&StringLiteral_8948/*"MasterFormationScene"*/);
    sub_1C713B0(&StringLiteral_11235/*"RecommendSupportSelectScene"*/);
    sub_1C713B0(&StringLiteral_4468/*"ClassBoardScene"*/);
    sub_1C713B0(&StringLiteral_12747/*"ServantListScene"*/);
    sub_1C713B0(&StringLiteral_6775/*"FollowerScene"*/);
    sub_1C713B0(&StringLiteral_13184/*"SummonScene"*/);
    sub_1C713B0(&StringLiteral_12738/*"ServantEquipListScene"*/);
    sub_1C713B0(&StringLiteral_7658/*"InitScene"*/);
    sub_1C713B0(&StringLiteral_6241/*"EventRewardScene"*/);
    sub_1C713B0(&StringLiteral_8951/*"MasterMissionScene"*/);
    sub_1C713B0(&StringLiteral_6871/*"FriendScene"*/);
    sub_1C713B0(&StringLiteral_6828/*"FormationScene"*/);
    sub_1C713B0(&StringLiteral_12864/*"ShopScene"*/);
    sub_1C713B0(&StringLiteral_15596/*"WarBoardScene"*/);
    sub_1C713B0(&StringLiteral_3119/*"BattleScene"*/);
    sub_1C713B0(&StringLiteral_3110/*"BattleDemoScene"*/);
    sub_1C713B0(&StringLiteral_5170/*"DebugTestScene"*/);
    sub_1C713B0(&StringLiteral_13720/*"TerminalScene"*/);
    sub_1C713B0(&StringLiteral_5959/*"EmptyScene"*/);
    sub_1C713B0(&StringLiteral_13190/*"SupportSelectScene"*/);
    sub_1C713B0(&StringLiteral_7161/*"GrandServantListScene"*/);
    sub_1C713B0(&StringLiteral_4568/*"CombineScene"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    sub_1C713B0(&StringLiteral_9229/*"MyRoomScene"*/);
    sub_1C713B0(&StringLiteral_14527/*"TitleScene"*/);
    sub_1C713B0(&StringLiteral_4524/*"CoinRoomScene"*/);
    byte_4CC62F1 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3494CFC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C71608(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7658/*"InitScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5170/*"DebugTestScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14527/*"TitleScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3119/*"BattleScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13184/*"SummonScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12864/*"ShopScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6871/*"FriendScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9229/*"MyRoomScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4568/*"CombineScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13720/*"TerminalScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6775/*"FollowerScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3122/*"BattleScriptScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6828/*"FormationScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10573/*"PartyOrganizationScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12747/*"ServantListScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12738/*"ServantEquipListScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8948/*"MasterFormationScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3110/*"BattleDemoScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13190/*"SupportSelectScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11235/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15601/*"WarehouseScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6241/*"EventRewardScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5959/*"EmptyScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13180/*"SummonEffectScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15596/*"WarBoardScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4524/*"CoinRoomScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4468/*"ClassBoardScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4469/*"ClassBoardSelectScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_8951/*"MasterMissionScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7161/*"GrandServantListScene"*/,
    (const MethodInfo_34956D0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C71354((GrandQuestFolderBoardItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4CC62EF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C713B0(&SceneList_TypeInfo);
    byte_4CC62EF = 1;
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
         (const MethodInfo_34958C4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_3495630 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C71608(nameList, method);
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

  if ( (byte_4CC62F0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C713B0(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C713B0(&SceneList_TypeInfo);
    sub_1C713B0(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C713B0(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4CC62F0 = 1;
  }
  v3 = sub_1C715FC(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C71608(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)name, v6, v7, v8, v9, v10, v11);
  v12 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v12 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->nameList;
  v14 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_31745C8 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4CC62F2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4CC62F2 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
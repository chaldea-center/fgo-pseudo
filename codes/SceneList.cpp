void SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4C368DF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C32C20(&SceneList_TypeInfo);
    sub_1C32C20(&StringLiteral_3127/*"BattleScriptScene"*/);
    sub_1C32C20(&StringLiteral_13172/*"SummonEffectScene"*/);
    sub_1C32C20(&StringLiteral_10568/*"PartyOrganizationScene"*/);
    sub_1C32C20(&StringLiteral_4476/*"ClassBoardSelectScene"*/);
    sub_1C32C20(&StringLiteral_15595/*"WarehouseScene"*/);
    sub_1C32C20(&StringLiteral_8946/*"MasterFormationScene"*/);
    sub_1C32C20(&StringLiteral_11230/*"RecommendSupportSelectScene"*/);
    sub_1C32C20(&StringLiteral_4475/*"ClassBoardScene"*/);
    sub_1C32C20(&StringLiteral_12736/*"ServantListScene"*/);
    sub_1C32C20(&StringLiteral_6779/*"FollowerScene"*/);
    sub_1C32C20(&StringLiteral_13176/*"SummonScene"*/);
    sub_1C32C20(&StringLiteral_12727/*"ServantEquipListScene"*/);
    sub_1C32C20(&StringLiteral_7656/*"InitScene"*/);
    sub_1C32C20(&StringLiteral_6248/*"EventRewardScene"*/);
    sub_1C32C20(&StringLiteral_8949/*"MasterMissionScene"*/);
    sub_1C32C20(&StringLiteral_6875/*"FriendScene"*/);
    sub_1C32C20(&StringLiteral_6832/*"FormationScene"*/);
    sub_1C32C20(&StringLiteral_12853/*"ShopScene"*/);
    sub_1C32C20(&StringLiteral_15590/*"WarBoardScene"*/);
    sub_1C32C20(&StringLiteral_3125/*"BattleScene"*/);
    sub_1C32C20(&StringLiteral_3116/*"BattleDemoScene"*/);
    sub_1C32C20(&StringLiteral_5179/*"DebugTestScene"*/);
    sub_1C32C20(&StringLiteral_13710/*"TerminalScene"*/);
    sub_1C32C20(&StringLiteral_5965/*"EmptyScene"*/);
    sub_1C32C20(&StringLiteral_13182/*"SupportSelectScene"*/);
    sub_1C32C20(&StringLiteral_7163/*"GrandServantListScene"*/);
    sub_1C32C20(&StringLiteral_4575/*"CombineScene"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_9227/*"MyRoomScene"*/);
    sub_1C32C20(&StringLiteral_14520/*"TitleScene"*/);
    sub_1C32C20(&StringLiteral_4531/*"CoinRoomScene"*/);
    byte_4C368DF = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34223E4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C32E7C(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7656/*"InitScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5179/*"DebugTestScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14520/*"TitleScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3125/*"BattleScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13176/*"SummonScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12853/*"ShopScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6875/*"FriendScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9227/*"MyRoomScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4575/*"CombineScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13710/*"TerminalScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6779/*"FollowerScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3127/*"BattleScriptScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6832/*"FormationScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10568/*"PartyOrganizationScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12736/*"ServantListScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12727/*"ServantEquipListScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8946/*"MasterFormationScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3116/*"BattleDemoScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13182/*"SupportSelectScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11230/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15595/*"WarehouseScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6248/*"EventRewardScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5965/*"EmptyScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13172/*"SummonEffectScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15590/*"WarBoardScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4531/*"CoinRoomScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4475/*"ClassBoardScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4476/*"ClassBoardSelectScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_8949/*"MasterMissionScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7163/*"GrandServantListScene"*/,
    (const MethodInfo_3422DB8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v3, v4);
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

  if ( (byte_4C368DD & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C32C20(&SceneList_TypeInfo);
    byte_4C368DD = 1;
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
         (const MethodInfo_3422FAC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_3422D18 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C32E7C(nameList);
  }
  return 0;
}


int32_t SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  SceneList_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v9; // x21

  if ( (byte_4C368DE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C32C20(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C32C20(&SceneList_TypeInfo);
    sub_1C32C20(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C32C20(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4C368DE = 1;
  }
  v3 = sub_1C32E6C(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C32E7C(v4);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)name, v5, v6);
  v7 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v7 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->nameList;
  v9 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_31067D0 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4C368E0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4C368E0 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
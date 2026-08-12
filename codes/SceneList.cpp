void SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596F6C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_2213A60(&SceneList_TypeInfo);
    sub_2213A60(&StringLiteral_3251/*"BattleScriptScene"*/);
    sub_2213A60(&StringLiteral_13727/*"SummonEffectScene"*/);
    sub_2213A60(&StringLiteral_11007/*"PartyOrganizationScene"*/);
    sub_2213A60(&StringLiteral_4649/*"ClassBoardSelectScene"*/);
    sub_2213A60(&StringLiteral_16209/*"WarehouseScene"*/);
    sub_2213A60(&StringLiteral_9315/*"MasterFormationScene"*/);
    sub_2213A60(&StringLiteral_11719/*"RecommendSupportSelectScene"*/);
    sub_2213A60(&StringLiteral_4648/*"ClassBoardScene"*/);
    sub_2213A60(&StringLiteral_13277/*"ServantListScene"*/);
    sub_2213A60(&StringLiteral_7063/*"FollowerScene"*/);
    sub_2213A60(&StringLiteral_13731/*"SummonScene"*/);
    sub_2213A60(&StringLiteral_13268/*"ServantEquipListScene"*/);
    sub_2213A60(&StringLiteral_7987/*"InitScene"*/);
    sub_2213A60(&StringLiteral_6513/*"EventRewardScene"*/);
    sub_2213A60(&StringLiteral_9318/*"MasterMissionScene"*/);
    sub_2213A60(&StringLiteral_7166/*"FriendScene"*/);
    sub_2213A60(&StringLiteral_7121/*"FormationScene"*/);
    sub_2213A60(&StringLiteral_13397/*"ShopScene"*/);
    sub_2213A60(&StringLiteral_16204/*"WarBoardScene"*/);
    sub_2213A60(&StringLiteral_3248/*"BattleScene"*/);
    sub_2213A60(&StringLiteral_3238/*"BattleDemoScene"*/);
    sub_2213A60(&StringLiteral_5367/*"DebugTestScene"*/);
    sub_2213A60(&StringLiteral_14281/*"TerminalScene"*/);
    sub_2213A60(&StringLiteral_6219/*"EmptyScene"*/);
    sub_2213A60(&StringLiteral_13737/*"SupportSelectScene"*/);
    sub_2213A60(&StringLiteral_7461/*"GrandServantListScene"*/);
    sub_2213A60(&StringLiteral_4749/*"CombineScene"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9613/*"MyRoomScene"*/);
    sub_2213A60(&StringLiteral_15110/*"TitleScene"*/);
    sub_2213A60(&StringLiteral_4704/*"CoinRoomScene"*/);
    byte_596F6C8 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3FBB9EC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_2213CDC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7987/*"InitScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5367/*"DebugTestScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_15110/*"TitleScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3248/*"BattleScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13731/*"SummonScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_13397/*"ShopScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_7166/*"FriendScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9613/*"MyRoomScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4749/*"CombineScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_14281/*"TerminalScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_7063/*"FollowerScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3251/*"BattleScriptScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_7121/*"FormationScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_11007/*"PartyOrganizationScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_13277/*"ServantListScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_13268/*"ServantEquipListScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_9315/*"MasterFormationScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3238/*"BattleDemoScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13737/*"SupportSelectScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11719/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_16209/*"WarehouseScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6513/*"EventRewardScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_6219/*"EmptyScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13727/*"SummonEffectScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_16204/*"WarBoardScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4704/*"CoinRoomScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4648/*"ClassBoardScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4649/*"ClassBoardSelectScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_9318/*"MasterMissionScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7461/*"GrandServantListScene"*/,
    (const MethodInfo_3FBC3A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SceneList_TypeInfo->static_fields,
    (int32_t)v1,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


void SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  SceneList_c *v4; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0
  __int64 v6; // x2
  SceneList_c *v7; // x0

  if ( (byte_596F6C6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_2213A60(&SceneList_TypeInfo);
    byte_596F6C6 = 1;
  }
  v4 = SceneList_TypeInfo;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method, v2);
    v4 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v4->static_fields->nameList;
  if ( !nameList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         nameList,
         type,
         (const MethodInfo_3FBC594 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v7 = SceneList_TypeInfo;
    if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method, v6);
      v7 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->nameList;
    if ( nameList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  nameList,
                                  type,
                                  (const MethodInfo_3FBC300 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_2213CDC(nameList, method);
  }
  return 0;
}


int32_t SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  __int64 v13; // x2
  SceneList_c *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v16; // x21

  if ( (byte_596F6C7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_2213A60(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_2213A60(&SceneList_TypeInfo);
    sub_2213A60(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_2213A60(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_596F6C7 = 1;
  }
  v3 = sub_2213CCC(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)name, v6, v7, v8, v9, v10, v11);
  v14 = SceneList_TypeInfo;
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v12, v13);
    v14 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v14->static_fields->nameList;
  v16 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v16,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_38821F4 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_596F6C9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_596F6C9 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
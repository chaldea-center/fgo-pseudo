void __fastcall SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A189 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&StringLiteral_3246/*"BattleScriptScene"*/);
    sub_1B885B0(&StringLiteral_13078/*"SummonEffectScene"*/);
    sub_1B885B0(&StringLiteral_10564/*"PartyOrganizationScene"*/);
    sub_1B885B0(&StringLiteral_4507/*"ClassBoardSelectScene"*/);
    sub_1B885B0(&StringLiteral_15596/*"WarehouseScene"*/);
    sub_1B885B0(&StringLiteral_8904/*"MasterFormationScene"*/);
    sub_1B885B0(&StringLiteral_11202/*"RecommendSupportSelectScene"*/);
    sub_1B885B0(&StringLiteral_4506/*"ClassBoardScene"*/);
    sub_1B885B0(&StringLiteral_12637/*"ServantListScene"*/);
    sub_1B885B0(&StringLiteral_6746/*"FollowerScene"*/);
    sub_1B885B0(&StringLiteral_13082/*"SummonScene"*/);
    sub_1B885B0(&StringLiteral_12628/*"ServantEquipListScene"*/);
    sub_1B885B0(&StringLiteral_7599/*"InitScene"*/);
    sub_1B885B0(&StringLiteral_6209/*"EventRewardScene"*/);
    sub_1B885B0(&StringLiteral_8907/*"MasterMissionScene"*/);
    sub_1B885B0(&StringLiteral_6846/*"FriendScene"*/);
    sub_1B885B0(&StringLiteral_6797/*"FormationScene"*/);
    sub_1B885B0(&StringLiteral_12750/*"ShopScene"*/);
    sub_1B885B0(&StringLiteral_15591/*"WarBoardScene"*/);
    sub_1B885B0(&StringLiteral_3244/*"BattleScene"*/);
    sub_1B885B0(&StringLiteral_3235/*"BattleDemoScene"*/);
    sub_1B885B0(&StringLiteral_5212/*"DebugTestScene"*/);
    sub_1B885B0(&StringLiteral_13614/*"TerminalScene"*/);
    sub_1B885B0(&StringLiteral_5926/*"EmptyScene"*/);
    sub_1B885B0(&StringLiteral_13088/*"SupportSelectScene"*/);
    sub_1B885B0(&StringLiteral_4606/*"CombineScene"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_9202/*"MyRoomScene"*/);
    sub_1B885B0(&StringLiteral_14497/*"TitleScene"*/);
    sub_1B885B0(&StringLiteral_4560/*"CoinRoomScene"*/);
    byte_4A5A189 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1B8880C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7599/*"InitScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5212/*"DebugTestScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14497/*"TitleScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3244/*"BattleScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13082/*"SummonScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12750/*"ShopScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6846/*"FriendScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9202/*"MyRoomScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4606/*"CombineScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13614/*"TerminalScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6746/*"FollowerScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3246/*"BattleScriptScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6797/*"FormationScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10564/*"PartyOrganizationScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12637/*"ServantListScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12628/*"ServantEquipListScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8904/*"MasterFormationScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3235/*"BattleDemoScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13088/*"SupportSelectScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11202/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15596/*"WarehouseScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6209/*"EventRewardScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5926/*"EmptyScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13078/*"SummonEffectScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15591/*"WarBoardScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4560/*"CoinRoomScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4506/*"ClassBoardScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4507/*"ClassBoardSelectScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_8907/*"MasterMissionScene"*/,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5);
}


void __fastcall SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  SceneList_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0
  SceneList_c *v5; // x0

  if ( (byte_4A5A187 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1B885B0(&SceneList_TypeInfo);
    byte_4A5A187 = 1;
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
         (const MethodInfo_319D434 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_319D1A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1B8880C(nameList, method);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  SceneList_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v10; // x21

  if ( (byte_4A5A188 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1B885B0(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1B885B0(&SceneList_TypeInfo);
    sub_1B885B0(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1B885B0(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4A5A188 = 1;
  }
  v3 = sub_1B887FC(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)name, v6, v7);
  v8 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v8 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->static_fields->nameList;
  v10 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2EA42DC *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4A5A18A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4A5A18A = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
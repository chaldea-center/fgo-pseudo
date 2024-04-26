void __fastcall SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  struct SceneList_StaticFields *static_fields; // x0

  if ( (byte_434DD06 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&StringLiteral_2849/*"BattleScriptScene"*/);
    sub_B70694(&StringLiteral_13343/*"SummonEffectScene"*/);
    sub_B70694(&StringLiteral_10736/*"PartyOrganizationScene"*/);
    sub_B70694(&StringLiteral_4084/*"ClassBoardSelectScene"*/);
    sub_B70694(&StringLiteral_15648/*"WarehouseScene"*/);
    sub_B70694(&StringLiteral_9079/*"MasterFormationScene"*/);
    sub_B70694(&StringLiteral_4083/*"ClassBoardScene"*/);
    sub_B70694(&StringLiteral_12893/*"ServantListScene"*/);
    sub_B70694(&StringLiteral_6823/*"FollowerScene"*/);
    sub_B70694(&StringLiteral_13347/*"SummonScene"*/);
    sub_B70694(&StringLiteral_12884/*"ServantEquipListScene"*/);
    sub_B70694(&StringLiteral_7716/*"InitScene"*/);
    sub_B70694(&StringLiteral_6283/*"EventRewardScene"*/);
    sub_B70694(&StringLiteral_9081/*"MasterMissionScene"*/);
    sub_B70694(&StringLiteral_6902/*"FriendScene"*/);
    sub_B70694(&StringLiteral_6856/*"FormationScene"*/);
    sub_B70694(&StringLiteral_13025/*"ShopScene"*/);
    sub_B70694(&StringLiteral_15643/*"WarBoardScene"*/);
    sub_B70694(&StringLiteral_2848/*"BattleScene"*/);
    sub_B70694(&StringLiteral_2841/*"BattleDemoScene"*/);
    sub_B70694(&StringLiteral_5275/*"DebugTestScene"*/);
    sub_B70694(&StringLiteral_13811/*"TerminalScene"*/);
    sub_B70694(&StringLiteral_6008/*"EmptyScene"*/);
    sub_B70694(&StringLiteral_13353/*"SupportSelectScene"*/);
    sub_B70694(&StringLiteral_4236/*"CombineScene"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_9372/*"MyRoomScene"*/);
    sub_B70694(&StringLiteral_14663/*"TitleScene"*/);
    sub_B70694(&StringLiteral_4198/*"CoinRoomScene"*/);
    byte_434DD06 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_B7076C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    -1,
    (System_String_o *)StringLiteral_1/*""*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    (System_String_o *)StringLiteral_7716/*"InitScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_5275/*"DebugTestScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_14663/*"TitleScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_2848/*"BattleScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_13347/*"SummonScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_13025/*"ShopScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_6902/*"FriendScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_9372/*"MyRoomScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_4236/*"CombineScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_13811/*"TerminalScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_6823/*"FollowerScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_2849/*"BattleScriptScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_6856/*"FormationScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_10736/*"PartyOrganizationScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_12893/*"ServantListScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_12884/*"ServantEquipListScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)StringLiteral_9079/*"MasterFormationScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    (System_String_o *)StringLiteral_2841/*"BattleDemoScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    (System_String_o *)StringLiteral_13353/*"SupportSelectScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)StringLiteral_15648/*"WarehouseScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)StringLiteral_6283/*"EventRewardScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1000,
    (System_String_o *)StringLiteral_6008/*"EmptyScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1001,
    (System_String_o *)StringLiteral_13343/*"SummonEffectScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)StringLiteral_15643/*"WarBoardScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    (System_String_o *)StringLiteral_4198/*"CoinRoomScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    (System_String_o *)StringLiteral_4083/*"ClassBoardScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    (System_String_o *)StringLiteral_4084/*"ClassBoardSelectScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)StringLiteral_9081/*"MasterMissionScene"*/,
    (const MethodInfo_2F72024 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  static_fields = SceneList_TypeInfo->static_fields;
  static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_B70630(static_fields);
}


void __fastcall SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  SceneList_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0
  SceneList_c *v5; // x0

  if ( (byte_434DD04 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_B70694(&SceneList_TypeInfo);
    byte_434DD04 = 1;
  }
  v3 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v3 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v3->static_fields->nameList;
  if ( !nameList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         nameList,
         type,
         (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v5 = SceneList_TypeInfo;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      v5 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->nameList;
    if ( nameList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               nameList,
               type,
               (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_14:
    sub_B7076C(nameList, method);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  SceneList___c__DisplayClass3_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  SceneList_c *v6; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_KeyValuePair_Voice_BATTLE__string___bool__o *v8; // x21

  if ( (byte_434DD05 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_B70694(&Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
    sub_B70694(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_B70694(&SceneList_TypeInfo);
    sub_B70694(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_B70694(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_434DD05 = 1;
  }
  v3 = (SceneList___c__DisplayClass3_0_o *)sub_B70764(SceneList___c__DisplayClass3_0_TypeInfo);
  SceneList___c__DisplayClass3_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  v3->fields.name = name;
  sub_B70630(&v3->fields);
  v6 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v6 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v6->static_fields->nameList;
  v8 = (System_Func_KeyValuePair_Voice_BATTLE__string___bool__o *)sub_B70764(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Voice_BATTLE__string___bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    (const MethodInfo_299B34C *)Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Voice_BATTLE__string__(
           nameList,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_1CBCE38 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_434F44D & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_434F44D = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
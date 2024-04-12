void __fastcall SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  struct SceneList_StaticFields *static_fields; // x0

  if ( (byte_42AC107 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_B52984(&SceneList_TypeInfo);
    sub_B52984(&StringLiteral_2816/*"BattleScriptScene"*/);
    sub_B52984(&StringLiteral_13256/*"SummonEffectScene"*/);
    sub_B52984(&StringLiteral_10669/*"PartyOrganizationScene"*/);
    sub_B52984(&StringLiteral_4042/*"ClassBoardSelectScene"*/);
    sub_B52984(&StringLiteral_15532/*"WarehouseScene"*/);
    sub_B52984(&StringLiteral_9026/*"MasterFormationScene"*/);
    sub_B52984(&StringLiteral_4041/*"ClassBoardScene"*/);
    sub_B52984(&StringLiteral_12813/*"ServantListScene"*/);
    sub_B52984(&StringLiteral_6774/*"FollowerScene"*/);
    sub_B52984(&StringLiteral_13260/*"SummonScene"*/);
    sub_B52984(&StringLiteral_12804/*"ServantEquipListScene"*/);
    sub_B52984(&StringLiteral_7664/*"InitScene"*/);
    sub_B52984(&StringLiteral_6234/*"EventRewardScene"*/);
    sub_B52984(&StringLiteral_9028/*"MasterMissionScene"*/);
    sub_B52984(&StringLiteral_6853/*"FriendScene"*/);
    sub_B52984(&StringLiteral_6807/*"FormationScene"*/);
    sub_B52984(&StringLiteral_12943/*"ShopScene"*/);
    sub_B52984(&StringLiteral_15527/*"WarBoardScene"*/);
    sub_B52984(&StringLiteral_2815/*"BattleScene"*/);
    sub_B52984(&StringLiteral_2808/*"BattleDemoScene"*/);
    sub_B52984(&StringLiteral_5231/*"DebugTestScene"*/);
    sub_B52984(&StringLiteral_13724/*"TerminalScene"*/);
    sub_B52984(&StringLiteral_5959/*"EmptyScene"*/);
    sub_B52984(&StringLiteral_13266/*"SupportSelectScene"*/);
    sub_B52984(&StringLiteral_4194/*"CombineScene"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_9319/*"MyRoomScene"*/);
    sub_B52984(&StringLiteral_14576/*"TitleScene"*/);
    sub_B52984(&StringLiteral_4156/*"CoinRoomScene"*/);
    byte_42AC107 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B52A54(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v1,
    (const MethodInfo_2F3E9EC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_B52A5C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    -1,
    (System_String_o *)StringLiteral_1/*""*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    0,
    (System_String_o *)StringLiteral_7664/*"InitScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    4,
    (System_String_o *)StringLiteral_5231/*"DebugTestScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    9,
    (System_String_o *)StringLiteral_14576/*"TitleScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    10,
    (System_String_o *)StringLiteral_2815/*"BattleScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    20,
    (System_String_o *)StringLiteral_13260/*"SummonScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    22,
    (System_String_o *)StringLiteral_12943/*"ShopScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    23,
    (System_String_o *)StringLiteral_6853/*"FriendScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    30,
    (System_String_o *)StringLiteral_9319/*"MyRoomScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    32,
    (System_String_o *)StringLiteral_4194/*"CombineScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    34,
    (System_String_o *)StringLiteral_13724/*"TerminalScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    35,
    (System_String_o *)StringLiteral_6774/*"FollowerScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    38,
    (System_String_o *)StringLiteral_2816/*"BattleScriptScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    39,
    (System_String_o *)StringLiteral_6807/*"FormationScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    40,
    (System_String_o *)StringLiteral_10669/*"PartyOrganizationScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    41,
    (System_String_o *)StringLiteral_12813/*"ServantListScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    42,
    (System_String_o *)StringLiteral_12804/*"ServantEquipListScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    44,
    (System_String_o *)StringLiteral_9026/*"MasterFormationScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    50,
    (System_String_o *)StringLiteral_2808/*"BattleDemoScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    60,
    (System_String_o *)StringLiteral_13266/*"SupportSelectScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    71,
    (System_String_o *)StringLiteral_15532/*"WarehouseScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    72,
    (System_String_o *)StringLiteral_6234/*"EventRewardScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1000,
    (System_String_o *)StringLiteral_5959/*"EmptyScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    1001,
    (System_String_o *)StringLiteral_13256/*"SummonEffectScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    80,
    (System_String_o *)StringLiteral_15527/*"WarBoardScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    90,
    (System_String_o *)StringLiteral_4156/*"CoinRoomScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    91,
    (System_String_o *)StringLiteral_4041/*"ClassBoardScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    92,
    (System_String_o *)StringLiteral_4042/*"ClassBoardSelectScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v1,
    100,
    (System_String_o *)StringLiteral_9028/*"MasterMissionScene"*/,
    (const MethodInfo_2F3F5A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  static_fields = SceneList_TypeInfo->static_fields;
  static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42AC105 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_B52984(&SceneList_TypeInfo);
    byte_42AC105 = 1;
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
         (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
               (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_14:
    sub_B52A5C(nameList, method);
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
  System_Func_KeyValuePair_SceneList_Type__string___bool__o *v8; // x21

  if ( (byte_42AC106 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_B52984(&Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
    sub_B52984(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_B52984(&SceneList_TypeInfo);
    sub_B52984(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_B52984(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_42AC106 = 1;
  }
  v3 = (SceneList___c__DisplayClass3_0_o *)sub_B52A54(SceneList___c__DisplayClass3_0_TypeInfo);
  SceneList___c__DisplayClass3_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  v3->fields.name = name;
  sub_B52920(&v3->fields);
  v6 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v6 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v6->static_fields->nameList;
  v8 = (System_Func_KeyValuePair_SceneList_Type__string___bool__o *)sub_B52A54(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_SceneList_Type__string___bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    (const MethodInfo_277B310 *)Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_SceneList_Type__string__(
           nameList,
           (System_Func_TSource__bool__o *)v8,
           (const MethodInfo_1B6361C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_42AF2BB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_42AF2BB = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
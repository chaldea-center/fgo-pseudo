void __fastcall SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDB527 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&StringLiteral_3293/*"BattleScriptScene"*/);
    sub_1C21E38(&StringLiteral_13332/*"SummonEffectScene"*/);
    sub_1C21E38(&StringLiteral_10770/*"PartyOrganizationScene"*/);
    sub_1C21E38(&StringLiteral_4601/*"ClassBoardSelectScene"*/);
    sub_1C21E38(&StringLiteral_15864/*"WarehouseScene"*/);
    sub_1C21E38(&StringLiteral_9094/*"MasterFormationScene"*/);
    sub_1C21E38(&StringLiteral_11417/*"RecommendSupportSelectScene"*/);
    sub_1C21E38(&StringLiteral_4600/*"ClassBoardScene"*/);
    sub_1C21E38(&StringLiteral_12884/*"ServantListScene"*/);
    sub_1C21E38(&StringLiteral_6918/*"FollowerScene"*/);
    sub_1C21E38(&StringLiteral_13336/*"SummonScene"*/);
    sub_1C21E38(&StringLiteral_12875/*"ServantEquipListScene"*/);
    sub_1C21E38(&StringLiteral_7776/*"InitScene"*/);
    sub_1C21E38(&StringLiteral_6377/*"EventRewardScene"*/);
    sub_1C21E38(&StringLiteral_9097/*"MasterMissionScene"*/);
    sub_1C21E38(&StringLiteral_7020/*"FriendScene"*/);
    sub_1C21E38(&StringLiteral_6970/*"FormationScene"*/);
    sub_1C21E38(&StringLiteral_13000/*"ShopScene"*/);
    sub_1C21E38(&StringLiteral_15859/*"WarBoardScene"*/);
    sub_1C21E38(&StringLiteral_3291/*"BattleScene"*/);
    sub_1C21E38(&StringLiteral_3282/*"BattleDemoScene"*/);
    sub_1C21E38(&StringLiteral_5321/*"DebugTestScene"*/);
    sub_1C21E38(&StringLiteral_13872/*"TerminalScene"*/);
    sub_1C21E38(&StringLiteral_6084/*"EmptyScene"*/);
    sub_1C21E38(&StringLiteral_13342/*"SupportSelectScene"*/);
    sub_1C21E38(&StringLiteral_4699/*"CombineScene"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_9395/*"MyRoomScene"*/);
    sub_1C21E38(&StringLiteral_14758/*"TitleScene"*/);
    sub_1C21E38(&StringLiteral_4654/*"CoinRoomScene"*/);
    byte_4BDB527 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C22094(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7776/*"InitScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5321/*"DebugTestScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14758/*"TitleScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3291/*"BattleScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13336/*"SummonScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_13000/*"ShopScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_7020/*"FriendScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9395/*"MyRoomScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4699/*"CombineScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13872/*"TerminalScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6918/*"FollowerScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3293/*"BattleScriptScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6970/*"FormationScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10770/*"PartyOrganizationScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12884/*"ServantListScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12875/*"ServantEquipListScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_9094/*"MasterFormationScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3282/*"BattleDemoScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13342/*"SupportSelectScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11417/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15864/*"WarehouseScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6377/*"EventRewardScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_6084/*"EmptyScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13332/*"SummonEffectScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15859/*"WarBoardScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4654/*"CoinRoomScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4600/*"ClassBoardScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4601/*"ClassBoardSelectScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_9097/*"MasterMissionScene"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)SceneList_TypeInfo->static_fields, (int64_t)v1, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4BDB525 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C21E38(&SceneList_TypeInfo);
    byte_4BDB525 = 1;
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
         (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C22094(nameList, method);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  SceneList_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v14; // x21

  if ( (byte_4BDB526 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C21E38(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C21E38(&SceneList_TypeInfo);
    sub_1C21E38(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C21E38(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4BDB526 = 1;
  }
  v3 = sub_1C22084(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)name, v6, v7, v8, v9, v10, v11);
  v12 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v12 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->nameList;
  v14 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2FD338C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4BDB528 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4BDB528 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
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

  if ( (byte_4D2B752 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C94098(&SceneList_TypeInfo);
    sub_1C94098(&StringLiteral_3130/*"BattleScriptScene"*/);
    sub_1C94098(&StringLiteral_13225/*"SummonEffectScene"*/);
    sub_1C94098(&StringLiteral_10603/*"PartyOrganizationScene"*/);
    sub_1C94098(&StringLiteral_4479/*"ClassBoardSelectScene"*/);
    sub_1C94098(&StringLiteral_15654/*"WarehouseScene"*/);
    sub_1C94098(&StringLiteral_8967/*"MasterFormationScene"*/);
    sub_1C94098(&StringLiteral_11276/*"RecommendSupportSelectScene"*/);
    sub_1C94098(&StringLiteral_4478/*"ClassBoardScene"*/);
    sub_1C94098(&StringLiteral_12791/*"ServantListScene"*/);
    sub_1C94098(&StringLiteral_6788/*"FollowerScene"*/);
    sub_1C94098(&StringLiteral_13229/*"SummonScene"*/);
    sub_1C94098(&StringLiteral_12782/*"ServantEquipListScene"*/);
    sub_1C94098(&StringLiteral_7674/*"InitScene"*/);
    sub_1C94098(&StringLiteral_6254/*"EventRewardScene"*/);
    sub_1C94098(&StringLiteral_8970/*"MasterMissionScene"*/);
    sub_1C94098(&StringLiteral_6884/*"FriendScene"*/);
    sub_1C94098(&StringLiteral_6841/*"FormationScene"*/);
    sub_1C94098(&StringLiteral_12908/*"ShopScene"*/);
    sub_1C94098(&StringLiteral_15649/*"WarBoardScene"*/);
    sub_1C94098(&StringLiteral_3127/*"BattleScene"*/);
    sub_1C94098(&StringLiteral_3118/*"BattleDemoScene"*/);
    sub_1C94098(&StringLiteral_5180/*"DebugTestScene"*/);
    sub_1C94098(&StringLiteral_13767/*"TerminalScene"*/);
    sub_1C94098(&StringLiteral_5971/*"EmptyScene"*/);
    sub_1C94098(&StringLiteral_13235/*"SupportSelectScene"*/);
    sub_1C94098(&StringLiteral_7176/*"GrandServantListScene"*/);
    sub_1C94098(&StringLiteral_4578/*"CombineScene"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_9249/*"MyRoomScene"*/);
    sub_1C94098(&StringLiteral_14575/*"TitleScene"*/);
    sub_1C94098(&StringLiteral_4534/*"CoinRoomScene"*/);
    byte_4D2B752 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_34EA2E0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C942F0(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7674/*"InitScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5180/*"DebugTestScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14575/*"TitleScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3127/*"BattleScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13229/*"SummonScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12908/*"ShopScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6884/*"FriendScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9249/*"MyRoomScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4578/*"CombineScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13767/*"TerminalScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6788/*"FollowerScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3130/*"BattleScriptScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6841/*"FormationScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10603/*"PartyOrganizationScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12791/*"ServantListScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12782/*"ServantEquipListScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8967/*"MasterFormationScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3118/*"BattleDemoScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13235/*"SupportSelectScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11276/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15654/*"WarehouseScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6254/*"EventRewardScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5971/*"EmptyScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13225/*"SummonEffectScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15649/*"WarBoardScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4534/*"CoinRoomScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4478/*"ClassBoardScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4479/*"ClassBoardSelectScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_8970/*"MasterMissionScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7176/*"GrandServantListScene"*/,
    (const MethodInfo_34EACB4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4D2B750 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C94098(&SceneList_TypeInfo);
    byte_4D2B750 = 1;
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
         (const MethodInfo_34EAEA8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_34EAC14 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C942F0(nameList, method);
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

  if ( (byte_4D2B751 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C94098(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C94098(&SceneList_TypeInfo);
    sub_1C94098(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C94098(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4D2B751 = 1;
  }
  v3 = sub_1C942E4(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C942F0(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)name, v6, v7, v8, v9, v10, v11);
  v12 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v12 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->nameList;
  v14 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_31C5888 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4D2B753 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4D2B753 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
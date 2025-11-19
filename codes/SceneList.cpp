void SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB51D2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C6BA08(&SceneList_TypeInfo);
    sub_1C6BA08(&StringLiteral_3119/*"BattleScriptScene"*/);
    sub_1C6BA08(&StringLiteral_13174/*"SummonEffectScene"*/);
    sub_1C6BA08(&StringLiteral_10567/*"PartyOrganizationScene"*/);
    sub_1C6BA08(&StringLiteral_4466/*"ClassBoardSelectScene"*/);
    sub_1C6BA08(&StringLiteral_15594/*"WarehouseScene"*/);
    sub_1C6BA08(&StringLiteral_8944/*"MasterFormationScene"*/);
    sub_1C6BA08(&StringLiteral_11229/*"RecommendSupportSelectScene"*/);
    sub_1C6BA08(&StringLiteral_4465/*"ClassBoardScene"*/);
    sub_1C6BA08(&StringLiteral_12741/*"ServantListScene"*/);
    sub_1C6BA08(&StringLiteral_6773/*"FollowerScene"*/);
    sub_1C6BA08(&StringLiteral_13178/*"SummonScene"*/);
    sub_1C6BA08(&StringLiteral_12732/*"ServantEquipListScene"*/);
    sub_1C6BA08(&StringLiteral_7654/*"InitScene"*/);
    sub_1C6BA08(&StringLiteral_6239/*"EventRewardScene"*/);
    sub_1C6BA08(&StringLiteral_8947/*"MasterMissionScene"*/);
    sub_1C6BA08(&StringLiteral_6869/*"FriendScene"*/);
    sub_1C6BA08(&StringLiteral_6826/*"FormationScene"*/);
    sub_1C6BA08(&StringLiteral_12858/*"ShopScene"*/);
    sub_1C6BA08(&StringLiteral_15589/*"WarBoardScene"*/);
    sub_1C6BA08(&StringLiteral_3117/*"BattleScene"*/);
    sub_1C6BA08(&StringLiteral_3108/*"BattleDemoScene"*/);
    sub_1C6BA08(&StringLiteral_5167/*"DebugTestScene"*/);
    sub_1C6BA08(&StringLiteral_13714/*"TerminalScene"*/);
    sub_1C6BA08(&StringLiteral_5956/*"EmptyScene"*/);
    sub_1C6BA08(&StringLiteral_13184/*"SupportSelectScene"*/);
    sub_1C6BA08(&StringLiteral_7157/*"GrandServantListScene"*/);
    sub_1C6BA08(&StringLiteral_4565/*"CombineScene"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_9225/*"MyRoomScene"*/);
    sub_1C6BA08(&StringLiteral_14521/*"TitleScene"*/);
    sub_1C6BA08(&StringLiteral_4521/*"CoinRoomScene"*/);
    byte_4CB51D2 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C6BC60(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7654/*"InitScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5167/*"DebugTestScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14521/*"TitleScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3117/*"BattleScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13178/*"SummonScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12858/*"ShopScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6869/*"FriendScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9225/*"MyRoomScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4565/*"CombineScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13714/*"TerminalScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6773/*"FollowerScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3119/*"BattleScriptScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6826/*"FormationScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10567/*"PartyOrganizationScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12741/*"ServantListScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12732/*"ServantEquipListScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8944/*"MasterFormationScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3108/*"BattleDemoScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13184/*"SupportSelectScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11229/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15594/*"WarehouseScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6239/*"EventRewardScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5956/*"EmptyScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13174/*"SummonEffectScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15589/*"WarBoardScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4521/*"CoinRoomScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4465/*"ClassBoardScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4466/*"ClassBoardSelectScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_8947/*"MasterMissionScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7157/*"GrandServantListScene"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5);
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

  if ( (byte_4CB51D0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C6BA08(&SceneList_TypeInfo);
    byte_4CB51D0 = 1;
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
         (const MethodInfo_3485B20 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_348588C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C6BC60(nameList, method);
  }
  return 0;
}


int32_t SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  SceneList_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v10; // x21

  if ( (byte_4CB51D1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C6BA08(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C6BA08(&SceneList_TypeInfo);
    sub_1C6BA08(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C6BA08(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4CB51D1 = 1;
  }
  v3 = sub_1C6BC54(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)name, v6, v7);
  v8 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v8 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->static_fields->nameList;
  v10 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3164824 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4CB51D3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4CB51D3 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
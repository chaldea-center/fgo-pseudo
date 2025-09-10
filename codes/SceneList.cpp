void SceneList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C26207 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&StringLiteral_3124/*"BattleScriptScene"*/);
    sub_1C2D490(&StringLiteral_13169/*"SummonEffectScene"*/);
    sub_1C2D490(&StringLiteral_10562/*"PartyOrganizationScene"*/);
    sub_1C2D490(&StringLiteral_4468/*"ClassBoardSelectScene"*/);
    sub_1C2D490(&StringLiteral_15594/*"WarehouseScene"*/);
    sub_1C2D490(&StringLiteral_8940/*"MasterFormationScene"*/);
    sub_1C2D490(&StringLiteral_11224/*"RecommendSupportSelectScene"*/);
    sub_1C2D490(&StringLiteral_4467/*"ClassBoardScene"*/);
    sub_1C2D490(&StringLiteral_12732/*"ServantListScene"*/);
    sub_1C2D490(&StringLiteral_6774/*"FollowerScene"*/);
    sub_1C2D490(&StringLiteral_13173/*"SummonScene"*/);
    sub_1C2D490(&StringLiteral_12723/*"ServantEquipListScene"*/);
    sub_1C2D490(&StringLiteral_7650/*"InitScene"*/);
    sub_1C2D490(&StringLiteral_6240/*"EventRewardScene"*/);
    sub_1C2D490(&StringLiteral_8943/*"MasterMissionScene"*/);
    sub_1C2D490(&StringLiteral_6870/*"FriendScene"*/);
    sub_1C2D490(&StringLiteral_6827/*"FormationScene"*/);
    sub_1C2D490(&StringLiteral_12850/*"ShopScene"*/);
    sub_1C2D490(&StringLiteral_15589/*"WarBoardScene"*/);
    sub_1C2D490(&StringLiteral_3122/*"BattleScene"*/);
    sub_1C2D490(&StringLiteral_3113/*"BattleDemoScene"*/);
    sub_1C2D490(&StringLiteral_5171/*"DebugTestScene"*/);
    sub_1C2D490(&StringLiteral_13707/*"TerminalScene"*/);
    sub_1C2D490(&StringLiteral_5957/*"EmptyScene"*/);
    sub_1C2D490(&StringLiteral_13179/*"SupportSelectScene"*/);
    sub_1C2D490(&StringLiteral_7158/*"GrandServantListScene"*/);
    sub_1C2D490(&StringLiteral_4567/*"CombineScene"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_9221/*"MyRoomScene"*/);
    sub_1C2D490(&StringLiteral_14517/*"TitleScene"*/);
    sub_1C2D490(&StringLiteral_4523/*"CoinRoomScene"*/);
    byte_4C26207 = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_3413944 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1C2D6EC(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7650/*"InitScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5171/*"DebugTestScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14517/*"TitleScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3122/*"BattleScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13173/*"SummonScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_12850/*"ShopScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6870/*"FriendScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9221/*"MyRoomScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4567/*"CombineScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13707/*"TerminalScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6774/*"FollowerScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3124/*"BattleScriptScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6827/*"FormationScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10562/*"PartyOrganizationScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12732/*"ServantListScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12723/*"ServantEquipListScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_8940/*"MasterFormationScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3113/*"BattleDemoScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13179/*"SupportSelectScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11224/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15594/*"WarehouseScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6240/*"EventRewardScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_5957/*"EmptyScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13169/*"SummonEffectScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15589/*"WarBoardScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4523/*"CoinRoomScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4467/*"ClassBoardScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4468/*"ClassBoardSelectScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_8943/*"MasterMissionScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7158/*"GrandServantListScene"*/,
    (const MethodInfo_3414318 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5);
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

  if ( (byte_4C26205 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1C2D490(&SceneList_TypeInfo);
    byte_4C26205 = 1;
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
         (const MethodInfo_341450C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_3414278 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1C2D6EC(nameList, method);
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

  if ( (byte_4C26206 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1C2D490(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1C2D490(&SceneList_TypeInfo);
    sub_1C2D490(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1C2D490(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4C26206 = 1;
  }
  v3 = sub_1C2D6DC(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)name, v6, v7);
  v8 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v8 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->static_fields->nameList;
  v10 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_30F7D30 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4C26208 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4C26208 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
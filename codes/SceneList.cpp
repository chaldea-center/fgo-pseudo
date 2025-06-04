void __fastcall SceneList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v36; // x19
  __int64 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4B00F7E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v2);
    sub_1BC3008(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v3);
    sub_1BC3008(&SceneList_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_3104/*"BattleScriptScene"*/, v5);
    sub_1BC3008(&StringLiteral_13045/*"SummonEffectScene"*/, v6);
    sub_1BC3008(&StringLiteral_10476/*"PartyOrganizationScene"*/, v7);
    sub_1BC3008(&StringLiteral_4437/*"ClassBoardSelectScene"*/, v8);
    sub_1BC3008(&StringLiteral_15451/*"WarehouseScene"*/, v9);
    sub_1BC3008(&StringLiteral_8865/*"MasterFormationScene"*/, v10);
    sub_1BC3008(&StringLiteral_11116/*"RecommendSupportSelectScene"*/, v11);
    sub_1BC3008(&StringLiteral_4436/*"ClassBoardScene"*/, v12);
    sub_1BC3008(&StringLiteral_12611/*"ServantListScene"*/, v13);
    sub_1BC3008(&StringLiteral_6723/*"FollowerScene"*/, v14);
    sub_1BC3008(&StringLiteral_13049/*"SummonScene"*/, v15);
    sub_1BC3008(&StringLiteral_12602/*"ServantEquipListScene"*/, v16);
    sub_1BC3008(&StringLiteral_7579/*"InitScene"*/, v17);
    sub_1BC3008(&StringLiteral_6194/*"EventRewardScene"*/, v18);
    sub_1BC3008(&StringLiteral_8868/*"MasterMissionScene"*/, v19);
    sub_1BC3008(&StringLiteral_6818/*"FriendScene"*/, v20);
    sub_1BC3008(&StringLiteral_6775/*"FormationScene"*/, v21);
    sub_1BC3008(&StringLiteral_12729/*"ShopScene"*/, v22);
    sub_1BC3008(&StringLiteral_15446/*"WarBoardScene"*/, v23);
    sub_1BC3008(&StringLiteral_3102/*"BattleScene"*/, v24);
    sub_1BC3008(&StringLiteral_3093/*"BattleDemoScene"*/, v25);
    sub_1BC3008(&StringLiteral_5134/*"DebugTestScene"*/, v26);
    sub_1BC3008(&StringLiteral_13581/*"TerminalScene"*/, v27);
    sub_1BC3008(&StringLiteral_5911/*"EmptyScene"*/, v28);
    sub_1BC3008(&StringLiteral_13055/*"SupportSelectScene"*/, v29);
    sub_1BC3008(&StringLiteral_7088/*"GrandServantListScene"*/, v30);
    sub_1BC3008(&StringLiteral_4535/*"CombineScene"*/, v31);
    sub_1BC3008(&StringLiteral_1/*""*/, v32);
    sub_1BC3008(&StringLiteral_9146/*"MyRoomScene"*/, v33);
    sub_1BC3008(&StringLiteral_14388/*"TitleScene"*/, v34);
    sub_1BC3008(&StringLiteral_4491/*"CoinRoomScene"*/, v35);
    byte_4B00F7E = 1;
  }
  v36 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v36,
    (const MethodInfo_33393F4 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v36 )
    sub_1BC3264(v37, v38);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    0,
    (Il2CppObject *)StringLiteral_7579/*"InitScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    4,
    (Il2CppObject *)StringLiteral_5134/*"DebugTestScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    9,
    (Il2CppObject *)StringLiteral_14388/*"TitleScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    10,
    (Il2CppObject *)StringLiteral_3102/*"BattleScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    20,
    (Il2CppObject *)StringLiteral_13049/*"SummonScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    22,
    (Il2CppObject *)StringLiteral_12729/*"ShopScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    23,
    (Il2CppObject *)StringLiteral_6818/*"FriendScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    30,
    (Il2CppObject *)StringLiteral_9146/*"MyRoomScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    32,
    (Il2CppObject *)StringLiteral_4535/*"CombineScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    34,
    (Il2CppObject *)StringLiteral_13581/*"TerminalScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    35,
    (Il2CppObject *)StringLiteral_6723/*"FollowerScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    38,
    (Il2CppObject *)StringLiteral_3104/*"BattleScriptScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    39,
    (Il2CppObject *)StringLiteral_6775/*"FormationScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    40,
    (Il2CppObject *)StringLiteral_10476/*"PartyOrganizationScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    41,
    (Il2CppObject *)StringLiteral_12611/*"ServantListScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    42,
    (Il2CppObject *)StringLiteral_12602/*"ServantEquipListScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    44,
    (Il2CppObject *)StringLiteral_8865/*"MasterFormationScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    50,
    (Il2CppObject *)StringLiteral_3093/*"BattleDemoScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    60,
    (Il2CppObject *)StringLiteral_13055/*"SupportSelectScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    61,
    (Il2CppObject *)StringLiteral_11116/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    71,
    (Il2CppObject *)StringLiteral_15451/*"WarehouseScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    72,
    (Il2CppObject *)StringLiteral_6194/*"EventRewardScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    1000,
    (Il2CppObject *)StringLiteral_5911/*"EmptyScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    1001,
    (Il2CppObject *)StringLiteral_13045/*"SummonEffectScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    80,
    (Il2CppObject *)StringLiteral_15446/*"WarBoardScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    90,
    (Il2CppObject *)StringLiteral_4491/*"CoinRoomScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    91,
    (Il2CppObject *)StringLiteral_4436/*"ClassBoardScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    92,
    (Il2CppObject *)StringLiteral_4437/*"ClassBoardSelectScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    100,
    (Il2CppObject *)StringLiteral_8868/*"MasterMissionScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v36,
    43,
    (Il2CppObject *)StringLiteral_7088/*"GrandServantListScene"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v36;
  sub_1BC2FAC((CGThumbnailListItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v36, v39, v40);
}


void __fastcall SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  SceneList_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0
  SceneList_c *v7; // x0

  if ( (byte_4B00F7C & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v3);
    sub_1BC3008(&SceneList_TypeInfo, v4);
    byte_4B00F7C = 1;
  }
  v5 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v5 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->nameList;
  if ( !nameList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         nameList,
         type,
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v7 = SceneList_TypeInfo;
    if ( !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      v7 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->nameList;
    if ( nameList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  nameList,
                                  type,
                                  (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1BC3264(nameList, method);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  SceneList_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v15; // x21

  if ( (byte_4B00F7D & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method);
    sub_1BC3008(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v4);
    sub_1BC3008(&SceneList_TypeInfo, v5);
    sub_1BC3008(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v6);
    sub_1BC3008(&SceneList___c__DisplayClass3_0_TypeInfo, v7);
    byte_4B00F7D = 1;
  }
  v8 = sub_1BC3254(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_QWORD *)(v8 + 16) = name;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)name, v11, v12);
  v13 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v13 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->nameList;
  v15 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_302726C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4B00F7F & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key);
    byte_4B00F7F = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v35; // x19
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4A4D46B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v2);
    sub_1B863B8(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v3);
    sub_1B863B8(&SceneList_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_3155/*"BattleScriptScene"*/, v5);
    sub_1B863B8(&StringLiteral_12949/*"SummonEffectScene"*/, v6);
    sub_1B863B8(&StringLiteral_10408/*"PartyOrganizationScene"*/, v7);
    sub_1B863B8(&StringLiteral_4450/*"ClassBoardSelectScene"*/, v8);
    sub_1B863B8(&StringLiteral_15370/*"WarehouseScene"*/, v9);
    sub_1B863B8(&StringLiteral_8794/*"MasterFormationScene"*/, v10);
    sub_1B863B8(&StringLiteral_11043/*"RecommendSupportSelectScene"*/, v11);
    sub_1B863B8(&StringLiteral_4449/*"ClassBoardScene"*/, v12);
    sub_1B863B8(&StringLiteral_12513/*"ServantListScene"*/, v13);
    sub_1B863B8(&StringLiteral_6710/*"FollowerScene"*/, v14);
    sub_1B863B8(&StringLiteral_12953/*"SummonScene"*/, v15);
    sub_1B863B8(&StringLiteral_12504/*"ServantEquipListScene"*/, v16);
    sub_1B863B8(&StringLiteral_7509/*"InitScene"*/, v17);
    sub_1B863B8(&StringLiteral_6178/*"EventRewardScene"*/, v18);
    sub_1B863B8(&StringLiteral_8797/*"MasterMissionScene"*/, v19);
    sub_1B863B8(&StringLiteral_6804/*"FriendScene"*/, v20);
    sub_1B863B8(&StringLiteral_6760/*"FormationScene"*/, v21);
    sub_1B863B8(&StringLiteral_12630/*"ShopScene"*/, v22);
    sub_1B863B8(&StringLiteral_15365/*"WarBoardScene"*/, v23);
    sub_1B863B8(&StringLiteral_3153/*"BattleScene"*/, v24);
    sub_1B863B8(&StringLiteral_3144/*"BattleDemoScene"*/, v25);
    sub_1B863B8(&StringLiteral_5146/*"DebugTestScene"*/, v26);
    sub_1B863B8(&StringLiteral_13482/*"TerminalScene"*/, v27);
    sub_1B863B8(&StringLiteral_5897/*"EmptyScene"*/, v28);
    sub_1B863B8(&StringLiteral_12959/*"SupportSelectScene"*/, v29);
    sub_1B863B8(&StringLiteral_4547/*"CombineScene"*/, v30);
    sub_1B863B8(&StringLiteral_1/*""*/, v31);
    sub_1B863B8(&StringLiteral_9080/*"MyRoomScene"*/, v32);
    sub_1B863B8(&StringLiteral_14291/*"TitleScene"*/, v33);
    sub_1B863B8(&StringLiteral_4503/*"CoinRoomScene"*/, v34);
    byte_4A4D46B = 1;
  }
  v35 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B86604(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v35,
    (const MethodInfo_329DB24 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v35 )
    sub_1B86614(v36, v37);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    0,
    (Il2CppObject *)StringLiteral_7509/*"InitScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    4,
    (Il2CppObject *)StringLiteral_5146/*"DebugTestScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    9,
    (Il2CppObject *)StringLiteral_14291/*"TitleScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    10,
    (Il2CppObject *)StringLiteral_3153/*"BattleScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    20,
    (Il2CppObject *)StringLiteral_12953/*"SummonScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    22,
    (Il2CppObject *)StringLiteral_12630/*"ShopScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    23,
    (Il2CppObject *)StringLiteral_6804/*"FriendScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    30,
    (Il2CppObject *)StringLiteral_9080/*"MyRoomScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    32,
    (Il2CppObject *)StringLiteral_4547/*"CombineScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    34,
    (Il2CppObject *)StringLiteral_13482/*"TerminalScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    35,
    (Il2CppObject *)StringLiteral_6710/*"FollowerScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    38,
    (Il2CppObject *)StringLiteral_3155/*"BattleScriptScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    39,
    (Il2CppObject *)StringLiteral_6760/*"FormationScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    40,
    (Il2CppObject *)StringLiteral_10408/*"PartyOrganizationScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    41,
    (Il2CppObject *)StringLiteral_12513/*"ServantListScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    42,
    (Il2CppObject *)StringLiteral_12504/*"ServantEquipListScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    44,
    (Il2CppObject *)StringLiteral_8794/*"MasterFormationScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    50,
    (Il2CppObject *)StringLiteral_3144/*"BattleDemoScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    60,
    (Il2CppObject *)StringLiteral_12959/*"SupportSelectScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    61,
    (Il2CppObject *)StringLiteral_11043/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    71,
    (Il2CppObject *)StringLiteral_15370/*"WarehouseScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    72,
    (Il2CppObject *)StringLiteral_6178/*"EventRewardScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    1000,
    (Il2CppObject *)StringLiteral_5897/*"EmptyScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    1001,
    (Il2CppObject *)StringLiteral_12949/*"SummonEffectScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    80,
    (Il2CppObject *)StringLiteral_15365/*"WarBoardScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    90,
    (Il2CppObject *)StringLiteral_4503/*"CoinRoomScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    91,
    (Il2CppObject *)StringLiteral_4449/*"ClassBoardScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    92,
    (Il2CppObject *)StringLiteral_4450/*"ClassBoardSelectScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    100,
    (Il2CppObject *)StringLiteral_8797/*"MasterMissionScene"*/,
    (const MethodInfo_329E4F8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v35;
  sub_1B8635C((CGThumbnailListItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v35, v38, v39);
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

  if ( (byte_4A4D469 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v3);
    sub_1B863B8(&SceneList_TypeInfo, v4);
    byte_4A4D469 = 1;
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
         (const MethodInfo_329E6EC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_329E458 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1B86614(nameList, method);
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

  if ( (byte_4A4D46A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method);
    sub_1B863B8(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v4);
    sub_1B863B8(&SceneList_TypeInfo, v5);
    sub_1B863B8(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v6);
    sub_1B863B8(&SceneList___c__DisplayClass3_0_TypeInfo, v7);
    byte_4A4D46A = 1;
  }
  v8 = sub_1B86604(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B86614(v9, v10);
  *(_QWORD *)(v8 + 16) = name;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)name, v11, v12);
  v13 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v13 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->nameList;
  v15 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2F94944 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4A4D46C & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key);
    byte_4A4D46C = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
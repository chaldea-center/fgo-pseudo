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
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x19
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_48E1894 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v2);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v3);
    sub_1B00CCC(&SceneList_TypeInfo, v4);
    sub_1B00CCC(&StringLiteral_3206/*"BattleScriptScene"*/, v5);
    sub_1B00CCC(&StringLiteral_12861/*"SummonEffectScene"*/, v6);
    sub_1B00CCC(&StringLiteral_10433/*"PartyOrganizationScene"*/, v7);
    sub_1B00CCC(&StringLiteral_4463/*"ClassBoardSelectScene"*/, v8);
    sub_1B00CCC(&StringLiteral_15365/*"WarehouseScene"*/, v9);
    sub_1B00CCC(&StringLiteral_8802/*"MasterFormationScene"*/, v10);
    sub_1B00CCC(&StringLiteral_4462/*"ClassBoardScene"*/, v11);
    sub_1B00CCC(&StringLiteral_12426/*"ServantListScene"*/, v12);
    sub_1B00CCC(&StringLiteral_6681/*"FollowerScene"*/, v13);
    sub_1B00CCC(&StringLiteral_12865/*"SummonScene"*/, v14);
    sub_1B00CCC(&StringLiteral_12417/*"ServantEquipListScene"*/, v15);
    sub_1B00CCC(&StringLiteral_7514/*"InitScene"*/, v16);
    sub_1B00CCC(&StringLiteral_6145/*"EventRewardScene"*/, v17);
    sub_1B00CCC(&StringLiteral_8804/*"MasterMissionScene"*/, v18);
    sub_1B00CCC(&StringLiteral_6778/*"FriendScene"*/, v19);
    sub_1B00CCC(&StringLiteral_6730/*"FormationScene"*/, v20);
    sub_1B00CCC(&StringLiteral_12537/*"ShopScene"*/, v21);
    sub_1B00CCC(&StringLiteral_15360/*"WarBoardScene"*/, v22);
    sub_1B00CCC(&StringLiteral_3204/*"BattleScene"*/, v23);
    sub_1B00CCC(&StringLiteral_3197/*"BattleDemoScene"*/, v24);
    sub_1B00CCC(&StringLiteral_5158/*"DebugTestScene"*/, v25);
    sub_1B00CCC(&StringLiteral_13392/*"TerminalScene"*/, v26);
    sub_1B00CCC(&StringLiteral_5863/*"EmptyScene"*/, v27);
    sub_1B00CCC(&StringLiteral_12871/*"SupportSelectScene"*/, v28);
    sub_1B00CCC(&StringLiteral_4557/*"CombineScene"*/, v29);
    sub_1B00CCC(&StringLiteral_1/*""*/, v30);
    sub_1B00CCC(&StringLiteral_9099/*"MyRoomScene"*/, v31);
    sub_1B00CCC(&StringLiteral_14273/*"TitleScene"*/, v32);
    sub_1B00CCC(&StringLiteral_4516/*"CoinRoomScene"*/, v33);
    byte_48E1894 = 1;
  }
  v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B00F18(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v34,
    (const MethodInfo_30634E8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v34 )
    sub_1B00F28(v35, v36);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    0,
    (Il2CppObject *)StringLiteral_7514/*"InitScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    4,
    (Il2CppObject *)StringLiteral_5158/*"DebugTestScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    9,
    (Il2CppObject *)StringLiteral_14273/*"TitleScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    10,
    (Il2CppObject *)StringLiteral_3204/*"BattleScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    20,
    (Il2CppObject *)StringLiteral_12865/*"SummonScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    22,
    (Il2CppObject *)StringLiteral_12537/*"ShopScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    23,
    (Il2CppObject *)StringLiteral_6778/*"FriendScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    30,
    (Il2CppObject *)StringLiteral_9099/*"MyRoomScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    32,
    (Il2CppObject *)StringLiteral_4557/*"CombineScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    34,
    (Il2CppObject *)StringLiteral_13392/*"TerminalScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    35,
    (Il2CppObject *)StringLiteral_6681/*"FollowerScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    38,
    (Il2CppObject *)StringLiteral_3206/*"BattleScriptScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    39,
    (Il2CppObject *)StringLiteral_6730/*"FormationScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    40,
    (Il2CppObject *)StringLiteral_10433/*"PartyOrganizationScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    41,
    (Il2CppObject *)StringLiteral_12426/*"ServantListScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    42,
    (Il2CppObject *)StringLiteral_12417/*"ServantEquipListScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    44,
    (Il2CppObject *)StringLiteral_8802/*"MasterFormationScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    50,
    (Il2CppObject *)StringLiteral_3197/*"BattleDemoScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    60,
    (Il2CppObject *)StringLiteral_12871/*"SupportSelectScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    71,
    (Il2CppObject *)StringLiteral_15365/*"WarehouseScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    72,
    (Il2CppObject *)StringLiteral_6145/*"EventRewardScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    1000,
    (Il2CppObject *)StringLiteral_5863/*"EmptyScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    1001,
    (Il2CppObject *)StringLiteral_12861/*"SummonEffectScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    80,
    (Il2CppObject *)StringLiteral_15360/*"WarBoardScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    90,
    (Il2CppObject *)StringLiteral_4516/*"CoinRoomScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    91,
    (Il2CppObject *)StringLiteral_4462/*"ClassBoardScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    92,
    (Il2CppObject *)StringLiteral_4463/*"ClassBoardSelectScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v34,
    100,
    (Il2CppObject *)StringLiteral_8804/*"MasterMissionScene"*/,
    (const MethodInfo_3063EBC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v34;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v34, v37, v38);
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

  if ( (byte_48E1892 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v3);
    sub_1B00CCC(&SceneList_TypeInfo, v4);
    byte_48E1892 = 1;
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
         (const MethodInfo_30640B0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_3063E1C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1B00F28(nameList, method);
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
  int32_t v12; // w3
  SceneList_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v15; // x21

  if ( (byte_48E1893 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method);
    sub_1B00CCC(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v4);
    sub_1B00CCC(&SceneList_TypeInfo, v5);
    sub_1B00CCC(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v6);
    sub_1B00CCC(&SceneList___c__DisplayClass3_0_TypeInfo, v7);
    byte_48E1893 = 1;
  }
  v8 = sub_1B00F18(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B00F28(v9, v10);
  *(_QWORD *)(v8 + 16) = name;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)name, v11, v12);
  v13 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v13 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->nameList;
  v15 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2D849B8 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_48E1895 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key);
    byte_48E1895 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
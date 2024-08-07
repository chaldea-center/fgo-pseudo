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
  int32_t v39; // w3

  if ( (byte_49FDB6D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v2);
    sub_1B64A00(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v3);
    sub_1B64A00(&SceneList_TypeInfo, v4);
    sub_1B64A00(&StringLiteral_3225/*"BattleScriptScene"*/, v5);
    sub_1B64A00(&StringLiteral_13019/*"SummonEffectScene"*/, v6);
    sub_1B64A00(&StringLiteral_10516/*"PartyOrganizationScene"*/, v7);
    sub_1B64A00(&StringLiteral_4485/*"ClassBoardSelectScene"*/, v8);
    sub_1B64A00(&StringLiteral_15531/*"WarehouseScene"*/, v9);
    sub_1B64A00(&StringLiteral_8865/*"MasterFormationScene"*/, v10);
    sub_1B64A00(&StringLiteral_11152/*"RecommendSupportSelectScene"*/, v11);
    sub_1B64A00(&StringLiteral_4484/*"ClassBoardScene"*/, v12);
    sub_1B64A00(&StringLiteral_12580/*"ServantListScene"*/, v13);
    sub_1B64A00(&StringLiteral_6719/*"FollowerScene"*/, v14);
    sub_1B64A00(&StringLiteral_13023/*"SummonScene"*/, v15);
    sub_1B64A00(&StringLiteral_12571/*"ServantEquipListScene"*/, v16);
    sub_1B64A00(&StringLiteral_7567/*"InitScene"*/, v17);
    sub_1B64A00(&StringLiteral_6183/*"EventRewardScene"*/, v18);
    sub_1B64A00(&StringLiteral_8868/*"MasterMissionScene"*/, v19);
    sub_1B64A00(&StringLiteral_6819/*"FriendScene"*/, v20);
    sub_1B64A00(&StringLiteral_6770/*"FormationScene"*/, v21);
    sub_1B64A00(&StringLiteral_12693/*"ShopScene"*/, v22);
    sub_1B64A00(&StringLiteral_15526/*"WarBoardScene"*/, v23);
    sub_1B64A00(&StringLiteral_3223/*"BattleScene"*/, v24);
    sub_1B64A00(&StringLiteral_3214/*"BattleDemoScene"*/, v25);
    sub_1B64A00(&StringLiteral_5190/*"DebugTestScene"*/, v26);
    sub_1B64A00(&StringLiteral_13550/*"TerminalScene"*/, v27);
    sub_1B64A00(&StringLiteral_5901/*"EmptyScene"*/, v28);
    sub_1B64A00(&StringLiteral_13029/*"SupportSelectScene"*/, v29);
    sub_1B64A00(&StringLiteral_4584/*"CombineScene"*/, v30);
    sub_1B64A00(&StringLiteral_1/*""*/, v31);
    sub_1B64A00(&StringLiteral_9163/*"MyRoomScene"*/, v32);
    sub_1B64A00(&StringLiteral_14431/*"TitleScene"*/, v33);
    sub_1B64A00(&StringLiteral_4538/*"CoinRoomScene"*/, v34);
    byte_49FDB6D = 1;
  }
  v35 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v35,
    (const MethodInfo_3154760 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v35 )
    sub_1B64C5C(v36, v37);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    0,
    (Il2CppObject *)StringLiteral_7567/*"InitScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    4,
    (Il2CppObject *)StringLiteral_5190/*"DebugTestScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    9,
    (Il2CppObject *)StringLiteral_14431/*"TitleScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    10,
    (Il2CppObject *)StringLiteral_3223/*"BattleScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    20,
    (Il2CppObject *)StringLiteral_13023/*"SummonScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    22,
    (Il2CppObject *)StringLiteral_12693/*"ShopScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    23,
    (Il2CppObject *)StringLiteral_6819/*"FriendScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    30,
    (Il2CppObject *)StringLiteral_9163/*"MyRoomScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    32,
    (Il2CppObject *)StringLiteral_4584/*"CombineScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    34,
    (Il2CppObject *)StringLiteral_13550/*"TerminalScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    35,
    (Il2CppObject *)StringLiteral_6719/*"FollowerScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    38,
    (Il2CppObject *)StringLiteral_3225/*"BattleScriptScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    39,
    (Il2CppObject *)StringLiteral_6770/*"FormationScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    40,
    (Il2CppObject *)StringLiteral_10516/*"PartyOrganizationScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    41,
    (Il2CppObject *)StringLiteral_12580/*"ServantListScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    42,
    (Il2CppObject *)StringLiteral_12571/*"ServantEquipListScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    44,
    (Il2CppObject *)StringLiteral_8865/*"MasterFormationScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    50,
    (Il2CppObject *)StringLiteral_3214/*"BattleDemoScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    60,
    (Il2CppObject *)StringLiteral_13029/*"SupportSelectScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    61,
    (Il2CppObject *)StringLiteral_11152/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    71,
    (Il2CppObject *)StringLiteral_15531/*"WarehouseScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    72,
    (Il2CppObject *)StringLiteral_6183/*"EventRewardScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    1000,
    (Il2CppObject *)StringLiteral_5901/*"EmptyScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    1001,
    (Il2CppObject *)StringLiteral_13019/*"SummonEffectScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    80,
    (Il2CppObject *)StringLiteral_15526/*"WarBoardScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    90,
    (Il2CppObject *)StringLiteral_4538/*"CoinRoomScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    91,
    (Il2CppObject *)StringLiteral_4484/*"ClassBoardScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    92,
    (Il2CppObject *)StringLiteral_4485/*"ClassBoardSelectScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v35,
    100,
    (Il2CppObject *)StringLiteral_8868/*"MasterMissionScene"*/,
    (const MethodInfo_3155134 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v35;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v35, v38, v39);
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

  if ( (byte_49FDB6B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v3);
    sub_1B64A00(&SceneList_TypeInfo, v4);
    byte_49FDB6B = 1;
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
         (const MethodInfo_3155328 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_3155094 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1B64C5C(nameList, method);
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

  if ( (byte_49FDB6C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method);
    sub_1B64A00(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v3);
    sub_1B64A00(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v4);
    sub_1B64A00(&SceneList_TypeInfo, v5);
    sub_1B64A00(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v6);
    sub_1B64A00(&SceneList___c__DisplayClass3_0_TypeInfo, v7);
    byte_49FDB6C = 1;
  }
  v8 = sub_1B64C4C(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64C5C(v9, v10);
  *(_QWORD *)(v8 + 16) = name;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)name, v11, v12);
  v13 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v13 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->nameList;
  v15 = (System_Func_T__TResult__o *)sub_1B64C4C(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2E5FE64 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_49FDB6E & 1) == 0 )
  {
    sub_1B64A00(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key);
    byte_49FDB6E = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
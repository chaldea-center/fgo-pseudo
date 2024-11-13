void __fastcall SceneList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v70; // x19
  __int64 v71; // x0
  __int64 v72; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4B151F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v6, v7);
    sub_1BCA7E0(&SceneList_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_3270/*"BattleScriptScene"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_13239/*"SummonEffectScene"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_10698/*"PartyOrganizationScene"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_4575/*"ClassBoardSelectScene"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_15763/*"WarehouseScene"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_9033/*"MasterFormationScene"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_11339/*"RecommendSupportSelectScene"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_4574/*"ClassBoardScene"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_12795/*"ServantListScene"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_6867/*"FollowerScene"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_13243/*"SummonScene"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_12786/*"ServantEquipListScene"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_7724/*"InitScene"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_6329/*"EventRewardScene"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_9036/*"MasterMissionScene"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_6969/*"FriendScene"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_6919/*"FormationScene"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_12908/*"ShopScene"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_15758/*"WarBoardScene"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_3268/*"BattleScene"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_3259/*"BattleDemoScene"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_5286/*"DebugTestScene"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_13778/*"TerminalScene"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_6040/*"EmptyScene"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_13249/*"SupportSelectScene"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_4673/*"CombineScene"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_9333/*"MyRoomScene"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_14662/*"TitleScene"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_4628/*"CoinRoomScene"*/, v68, v69);
    byte_4B151F2 = 1;
  }
  v70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo,
                                                                   v1,
                                                                   v2,
                                                                   v3);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v70,
    (const MethodInfo_3234624 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v70 )
    sub_1BCAA3C(v71, v72);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    0,
    (Il2CppObject *)StringLiteral_7724/*"InitScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    4,
    (Il2CppObject *)StringLiteral_5286/*"DebugTestScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    9,
    (Il2CppObject *)StringLiteral_14662/*"TitleScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    10,
    (Il2CppObject *)StringLiteral_3268/*"BattleScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    20,
    (Il2CppObject *)StringLiteral_13243/*"SummonScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    22,
    (Il2CppObject *)StringLiteral_12908/*"ShopScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    23,
    (Il2CppObject *)StringLiteral_6969/*"FriendScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    30,
    (Il2CppObject *)StringLiteral_9333/*"MyRoomScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    32,
    (Il2CppObject *)StringLiteral_4673/*"CombineScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    34,
    (Il2CppObject *)StringLiteral_13778/*"TerminalScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    35,
    (Il2CppObject *)StringLiteral_6867/*"FollowerScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    38,
    (Il2CppObject *)StringLiteral_3270/*"BattleScriptScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    39,
    (Il2CppObject *)StringLiteral_6919/*"FormationScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    40,
    (Il2CppObject *)StringLiteral_10698/*"PartyOrganizationScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    41,
    (Il2CppObject *)StringLiteral_12795/*"ServantListScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    42,
    (Il2CppObject *)StringLiteral_12786/*"ServantEquipListScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    44,
    (Il2CppObject *)StringLiteral_9033/*"MasterFormationScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    50,
    (Il2CppObject *)StringLiteral_3259/*"BattleDemoScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    60,
    (Il2CppObject *)StringLiteral_13249/*"SupportSelectScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    61,
    (Il2CppObject *)StringLiteral_11339/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    71,
    (Il2CppObject *)StringLiteral_15763/*"WarehouseScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    72,
    (Il2CppObject *)StringLiteral_6329/*"EventRewardScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    1000,
    (Il2CppObject *)StringLiteral_6040/*"EmptyScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    1001,
    (Il2CppObject *)StringLiteral_13239/*"SummonEffectScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    80,
    (Il2CppObject *)StringLiteral_15758/*"WarBoardScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    90,
    (Il2CppObject *)StringLiteral_4628/*"CoinRoomScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    91,
    (Il2CppObject *)StringLiteral_4574/*"ClassBoardScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    92,
    (Il2CppObject *)StringLiteral_4575/*"ClassBoardSelectScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v70,
    100,
    (Il2CppObject *)StringLiteral_9036/*"MasterMissionScene"*/,
    (const MethodInfo_3234FF8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v70;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SceneList_TypeInfo->static_fields,
    (int64_t)v70,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
}


void __fastcall SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  SceneList_c *v8; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *nameList; // x0
  SceneList_c *v10; // x0

  if ( (byte_4B151F0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v4, v5);
    sub_1BCA7E0(&SceneList_TypeInfo, v6, v7);
    byte_4B151F0 = 1;
  }
  v8 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method);
    v8 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v8->static_fields->nameList;
  if ( !nameList )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         nameList,
         type,
         (const MethodInfo_32351EC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v10 = SceneList_TypeInfo;
    if ( !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, method);
      v10 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v10->static_fields->nameList;
    if ( nameList )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  nameList,
                                  type,
                                  (const MethodInfo_3234F58 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1BCAA3C(nameList, method);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  SceneList_c *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_T__TResult__o *v29; // x21

  if ( (byte_4B151F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method, v2);
    sub_1BCA7E0(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v7, v8);
    sub_1BCA7E0(&SceneList_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v11, v12);
    sub_1BCA7E0(&SceneList___c__DisplayClass3_0_TypeInfo, v13, v14);
    byte_4B151F1 = 1;
  }
  v15 = sub_1BCAA2C(SceneList___c__DisplayClass3_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_QWORD *)(v15 + 16) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)name, v18, v19, v20, v21, v22, v23);
  v27 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v24);
    v27 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v27->static_fields->nameList;
  v29 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                       System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo,
                                       v24,
                                       v25,
                                       v26);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v29,
    (Il2CppObject *)v15,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v29,
           (const MethodInfo_2F35844 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4B151F3 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key,
      c.fields.value);
    byte_4B151F3 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
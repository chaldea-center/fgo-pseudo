void __fastcall SceneList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v35; // x19
  __int64 v36; // x0
  struct SceneList_StaticFields *static_fields; // x0

  if ( (byte_42106AB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v4);
    sub_B0D8A4(&SceneList_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_2796/*"BattleScriptScene"*/, v6);
    sub_B0D8A4(&StringLiteral_13203/*"SummonEffectScene"*/, v7);
    sub_B0D8A4(&StringLiteral_10620/*"PartyOrganizationScene"*/, v8);
    sub_B0D8A4(&StringLiteral_4021/*"ClassBoardSelectScene"*/, v9);
    sub_B0D8A4(&StringLiteral_15474/*"WarehouseScene"*/, v10);
    sub_B0D8A4(&StringLiteral_8993/*"MasterFormationScene"*/, v11);
    sub_B0D8A4(&StringLiteral_4020/*"ClassBoardScene"*/, v12);
    sub_B0D8A4(&StringLiteral_12760/*"ServantListScene"*/, v13);
    sub_B0D8A4(&StringLiteral_6747/*"FollowerScene"*/, v14);
    sub_B0D8A4(&StringLiteral_13207/*"SummonScene"*/, v15);
    sub_B0D8A4(&StringLiteral_12751/*"ServantEquipListScene"*/, v16);
    sub_B0D8A4(&StringLiteral_7638/*"InitScene"*/, v17);
    sub_B0D8A4(&StringLiteral_6208/*"EventRewardScene"*/, v18);
    sub_B0D8A4(&StringLiteral_8995/*"MasterMissionScene"*/, v19);
    sub_B0D8A4(&StringLiteral_6826/*"FriendScene"*/, v20);
    sub_B0D8A4(&StringLiteral_6780/*"FormationScene"*/, v21);
    sub_B0D8A4(&StringLiteral_12890/*"ShopScene"*/, v22);
    sub_B0D8A4(&StringLiteral_15469/*"WarBoardScene"*/, v23);
    sub_B0D8A4(&StringLiteral_2795/*"BattleScene"*/, v24);
    sub_B0D8A4(&StringLiteral_2788/*"BattleDemoScene"*/, v25);
    sub_B0D8A4(&StringLiteral_5207/*"DebugTestScene"*/, v26);
    sub_B0D8A4(&StringLiteral_13671/*"TerminalScene"*/, v27);
    sub_B0D8A4(&StringLiteral_5933/*"EmptyScene"*/, v28);
    sub_B0D8A4(&StringLiteral_13213/*"SupportSelectScene"*/, v29);
    sub_B0D8A4(&StringLiteral_4171/*"CombineScene"*/, v30);
    sub_B0D8A4(&StringLiteral_1/*""*/, v31);
    sub_B0D8A4(&StringLiteral_9285/*"MyRoomScene"*/, v32);
    sub_B0D8A4(&StringLiteral_14523/*"TitleScene"*/, v33);
    sub_B0D8A4(&StringLiteral_4133/*"CoinRoomScene"*/, v34);
    byte_42106AB = 1;
  }
  v35 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo,
                                                                           v1,
                                                                           v2);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v35,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v35 )
    sub_B0D97C(v36);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    -1,
    (System_String_o *)StringLiteral_1/*""*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    0,
    (System_String_o *)StringLiteral_7638/*"InitScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    4,
    (System_String_o *)StringLiteral_5207/*"DebugTestScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    9,
    (System_String_o *)StringLiteral_14523/*"TitleScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    10,
    (System_String_o *)StringLiteral_2795/*"BattleScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    20,
    (System_String_o *)StringLiteral_13207/*"SummonScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    22,
    (System_String_o *)StringLiteral_12890/*"ShopScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    23,
    (System_String_o *)StringLiteral_6826/*"FriendScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    30,
    (System_String_o *)StringLiteral_9285/*"MyRoomScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    32,
    (System_String_o *)StringLiteral_4171/*"CombineScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    34,
    (System_String_o *)StringLiteral_13671/*"TerminalScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    35,
    (System_String_o *)StringLiteral_6747/*"FollowerScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    38,
    (System_String_o *)StringLiteral_2796/*"BattleScriptScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    39,
    (System_String_o *)StringLiteral_6780/*"FormationScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    40,
    (System_String_o *)StringLiteral_10620/*"PartyOrganizationScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    41,
    (System_String_o *)StringLiteral_12760/*"ServantListScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    42,
    (System_String_o *)StringLiteral_12751/*"ServantEquipListScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    44,
    (System_String_o *)StringLiteral_8993/*"MasterFormationScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    50,
    (System_String_o *)StringLiteral_2788/*"BattleDemoScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    60,
    (System_String_o *)StringLiteral_13213/*"SupportSelectScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    71,
    (System_String_o *)StringLiteral_15474/*"WarehouseScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    72,
    (System_String_o *)StringLiteral_6208/*"EventRewardScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    1000,
    (System_String_o *)StringLiteral_5933/*"EmptyScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    1001,
    (System_String_o *)StringLiteral_13203/*"SummonEffectScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    80,
    (System_String_o *)StringLiteral_15469/*"WarBoardScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    90,
    (System_String_o *)StringLiteral_4133/*"CoinRoomScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    91,
    (System_String_o *)StringLiteral_4020/*"ClassBoardScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    92,
    (System_String_o *)StringLiteral_4021/*"ClassBoardSelectScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v35,
    100,
    (System_String_o *)StringLiteral_8995/*"MasterMissionScene"*/,
    (const MethodInfo_2EA6CC0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  static_fields = SceneList_TypeInfo->static_fields;
  static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v35;
  sub_B0D840(static_fields, v35);
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0
  SceneList_c *v7; // x0

  if ( (byte_42106A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v3);
    sub_B0D8A4(&SceneList_TypeInfo, v4);
    byte_42106A9 = 1;
  }
  v5 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v5 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v5->static_fields->nameList;
  if ( !nameList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         nameList,
         type,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v7 = SceneList_TypeInfo;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      v7 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v7->static_fields->nameList;
    if ( nameList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               nameList,
               type,
               (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_14:
    sub_B0D97C(nameList);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SceneList___c__DisplayClass3_0_o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  SceneList_c *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_KeyValuePair_SceneList_Type__string___bool__o *v16; // x21

  if ( (byte_42106AA & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____, method);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__, v4);
    sub_B0D8A4(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v6);
    sub_B0D8A4(&SceneList_TypeInfo, v7);
    sub_B0D8A4(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v8);
    sub_B0D8A4(&SceneList___c__DisplayClass3_0_TypeInfo, v9);
    byte_42106AA = 1;
  }
  v10 = (SceneList___c__DisplayClass3_0_o *)sub_B0D974(SceneList___c__DisplayClass3_0_TypeInfo, method, v2);
  SceneList___c__DisplayClass3_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.name = name;
  sub_B0D840(&v10->fields, name);
  v14 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v14 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v14->static_fields->nameList;
  v16 = (System_Func_KeyValuePair_SceneList_Type__string___bool__o *)sub_B0D974(
                                                                       System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo,
                                                                       v12,
                                                                       v13);
  System_Func_KeyValuePair_SceneList_Type__string___bool____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    (const MethodInfo_260BD28 *)Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_SceneList_Type__string__(
           nameList,
           (System_Func_TSource__bool__o *)v16,
           (const MethodInfo_1B4C0AC *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_421253B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      *(_QWORD *)&c.fields.key);
    byte_421253B = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
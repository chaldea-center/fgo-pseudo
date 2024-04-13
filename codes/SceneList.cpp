void __fastcall SceneList___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v100; // x19
  __int64 v101; // x0
  __int64 v102; // x1
  struct SceneList_StaticFields *static_fields; // x0

  if ( (byte_42E4983 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SceneList_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2840/*"BattleScriptScene"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_13315/*"SummonEffectScene"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10715/*"PartyOrganizationScene"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_4075/*"ClassBoardSelectScene"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_15617/*"WarehouseScene"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_9064/*"MasterFormationScene"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_4074/*"ClassBoardScene"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_12872/*"ServantListScene"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_6810/*"FollowerScene"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_13319/*"SummonScene"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_12863/*"ServantEquipListScene"*/, v43, v44, v45);
    sub_B5D5C4(&StringLiteral_7701/*"InitScene"*/, v46, v47, v48);
    sub_B5D5C4(&StringLiteral_6270/*"EventRewardScene"*/, v49, v50, v51);
    sub_B5D5C4(&StringLiteral_9066/*"MasterMissionScene"*/, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_6889/*"FriendScene"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_6843/*"FormationScene"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_13002/*"ShopScene"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_15612/*"WarBoardScene"*/, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_2839/*"BattleScene"*/, v67, v68, v69);
    sub_B5D5C4(&StringLiteral_2832/*"BattleDemoScene"*/, v70, v71, v72);
    sub_B5D5C4(&StringLiteral_5265/*"DebugTestScene"*/, v73, v74, v75);
    sub_B5D5C4(&StringLiteral_13783/*"TerminalScene"*/, v76, v77, v78);
    sub_B5D5C4(&StringLiteral_5995/*"EmptyScene"*/, v79, v80, v81);
    sub_B5D5C4(&StringLiteral_13325/*"SupportSelectScene"*/, v82, v83, v84);
    sub_B5D5C4(&StringLiteral_4227/*"CombineScene"*/, v85, v86, v87);
    sub_B5D5C4(&StringLiteral_1/*""*/, v88, v89, v90);
    sub_B5D5C4(&StringLiteral_9357/*"MyRoomScene"*/, v91, v92, v93);
    sub_B5D5C4(&StringLiteral_14635/*"TitleScene"*/, v94, v95, v96);
    sub_B5D5C4(&StringLiteral_4189/*"CoinRoomScene"*/, v97, v98, v99);
    byte_42E4983 = 1;
  }
  v100 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v100,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v100 )
    sub_B5D69C(v101, v102);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    -1,
    (System_String_o *)StringLiteral_1/*""*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    0,
    (System_String_o *)StringLiteral_7701/*"InitScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    4,
    (System_String_o *)StringLiteral_5265/*"DebugTestScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    9,
    (System_String_o *)StringLiteral_14635/*"TitleScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    10,
    (System_String_o *)StringLiteral_2839/*"BattleScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    20,
    (System_String_o *)StringLiteral_13319/*"SummonScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    22,
    (System_String_o *)StringLiteral_13002/*"ShopScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    23,
    (System_String_o *)StringLiteral_6889/*"FriendScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    30,
    (System_String_o *)StringLiteral_9357/*"MyRoomScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    32,
    (System_String_o *)StringLiteral_4227/*"CombineScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    34,
    (System_String_o *)StringLiteral_13783/*"TerminalScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    35,
    (System_String_o *)StringLiteral_6810/*"FollowerScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    38,
    (System_String_o *)StringLiteral_2840/*"BattleScriptScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    39,
    (System_String_o *)StringLiteral_6843/*"FormationScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    40,
    (System_String_o *)StringLiteral_10715/*"PartyOrganizationScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    41,
    (System_String_o *)StringLiteral_12872/*"ServantListScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    42,
    (System_String_o *)StringLiteral_12863/*"ServantEquipListScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    44,
    (System_String_o *)StringLiteral_9064/*"MasterFormationScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    50,
    (System_String_o *)StringLiteral_2832/*"BattleDemoScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    60,
    (System_String_o *)StringLiteral_13325/*"SupportSelectScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    71,
    (System_String_o *)StringLiteral_15617/*"WarehouseScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    72,
    (System_String_o *)StringLiteral_6270/*"EventRewardScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    1000,
    (System_String_o *)StringLiteral_5995/*"EmptyScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    1001,
    (System_String_o *)StringLiteral_13315/*"SummonEffectScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    80,
    (System_String_o *)StringLiteral_15612/*"WarBoardScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    90,
    (System_String_o *)StringLiteral_4189/*"CoinRoomScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    91,
    (System_String_o *)StringLiteral_4074/*"ClassBoardScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    92,
    (System_String_o *)StringLiteral_4075/*"ClassBoardSelectScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v100,
    100,
    (System_String_o *)StringLiteral_9066/*"MasterMissionScene"*/,
    (const MethodInfo_2F4995C *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  static_fields = SceneList_TypeInfo->static_fields;
  static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v100;
  sub_B5D560(static_fields);
}


void __fastcall SceneList___ctor(SceneList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall SceneList__getSceneName(int32_t type, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SceneList_c *v11; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *nameList; // x0
  SceneList_c *v13; // x0

  if ( (byte_42E4981 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__, v5, v6, v7);
    sub_B5D5C4(&SceneList_TypeInfo, v8, v9, v10);
    byte_42E4981 = 1;
  }
  v11 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v11 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v11->static_fields->nameList;
  if ( !nameList )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         nameList,
         type,
         (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
  {
    v13 = SceneList_TypeInfo;
    if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
      v13 = SceneList_TypeInfo;
    }
    nameList = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v13->static_fields->nameList;
    if ( nameList )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               nameList,
               type,
               (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_14:
    sub_B5D69C(nameList, method);
  }
  return 0LL;
}


int32_t __fastcall SceneList__getSceneType(System_String_o *name, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  SceneList___c__DisplayClass3_0_o *v23; // x20
  __int64 v24; // x0
  __int64 v25; // x1
  SceneList_c *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *nameList; // x19
  System_Func_KeyValuePair_Voice_BATTLE__string___bool__o *v28; // x21

  if ( (byte_42E4982 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__, v11, v12, v13);
    sub_B5D5C4(&SceneList_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__, v17, v18, v19);
    sub_B5D5C4(&SceneList___c__DisplayClass3_0_TypeInfo, v20, v21, v22);
    byte_42E4982 = 1;
  }
  v23 = (SceneList___c__DisplayClass3_0_o *)sub_B5D694(SceneList___c__DisplayClass3_0_TypeInfo);
  SceneList___c__DisplayClass3_0___ctor(v23, 0LL);
  if ( !v23 )
    sub_B5D69C(v24, v25);
  v23->fields.name = name;
  sub_B5D560(&v23->fields);
  v26 = SceneList_TypeInfo;
  if ( (BYTE3(SceneList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v26 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v26->static_fields->nameList;
  v28 = (System_Func_KeyValuePair_Voice_BATTLE__string___bool__o *)sub_B5D694(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Voice_BATTLE__string___bool____ctor(
    v28,
    (Il2CppObject *)v23,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    (const MethodInfo_27949E4 *)Method_System_Func_KeyValuePair_SceneList_Type__string___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Voice_BATTLE__string__(
           nameList,
           (System_Func_TSource__bool__o *)v28,
           (const MethodInfo_1CAC4F4 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_42E7F61 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__,
      c.fields.key,
      c.fields.value,
      method);
    byte_42E7F61 = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0LL);
}
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

  if ( (byte_4E765BA & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
    sub_1D0F0B4(&System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
    sub_1D0F0B4(&SceneList_TypeInfo);
    sub_1D0F0B4(&StringLiteral_3155/*"BattleScriptScene"*/);
    sub_1D0F0B4(&StringLiteral_13358/*"SummonEffectScene"*/);
    sub_1D0F0B4(&StringLiteral_10716/*"PartyOrganizationScene"*/);
    sub_1D0F0B4(&StringLiteral_4517/*"ClassBoardSelectScene"*/);
    sub_1D0F0B4(&StringLiteral_15801/*"WarehouseScene"*/);
    sub_1D0F0B4(&StringLiteral_9052/*"MasterFormationScene"*/);
    sub_1D0F0B4(&StringLiteral_11397/*"RecommendSupportSelectScene"*/);
    sub_1D0F0B4(&StringLiteral_4516/*"ClassBoardScene"*/);
    sub_1D0F0B4(&StringLiteral_12923/*"ServantListScene"*/);
    sub_1D0F0B4(&StringLiteral_6852/*"FollowerScene"*/);
    sub_1D0F0B4(&StringLiteral_13362/*"SummonScene"*/);
    sub_1D0F0B4(&StringLiteral_12914/*"ServantEquipListScene"*/);
    sub_1D0F0B4(&StringLiteral_7753/*"InitScene"*/);
    sub_1D0F0B4(&StringLiteral_6314/*"EventRewardScene"*/);
    sub_1D0F0B4(&StringLiteral_9055/*"MasterMissionScene"*/);
    sub_1D0F0B4(&StringLiteral_6951/*"FriendScene"*/);
    sub_1D0F0B4(&StringLiteral_6908/*"FormationScene"*/);
    sub_1D0F0B4(&StringLiteral_13039/*"ShopScene"*/);
    sub_1D0F0B4(&StringLiteral_15796/*"WarBoardScene"*/);
    sub_1D0F0B4(&StringLiteral_3152/*"BattleScene"*/);
    sub_1D0F0B4(&StringLiteral_3142/*"BattleDemoScene"*/);
    sub_1D0F0B4(&StringLiteral_5226/*"DebugTestScene"*/);
    sub_1D0F0B4(&StringLiteral_13905/*"TerminalScene"*/);
    sub_1D0F0B4(&StringLiteral_6027/*"EmptyScene"*/);
    sub_1D0F0B4(&StringLiteral_13368/*"SupportSelectScene"*/);
    sub_1D0F0B4(&StringLiteral_7244/*"GrandServantListScene"*/);
    sub_1D0F0B4(&StringLiteral_4616/*"CombineScene"*/);
    sub_1D0F0B4(&StringLiteral_1/*""*/);
    sub_1D0F0B4(&StringLiteral_9341/*"MyRoomScene"*/);
    sub_1D0F0B4(&StringLiteral_14715/*"TitleScene"*/);
    sub_1D0F0B4(&StringLiteral_4572/*"CoinRoomScene"*/);
    byte_4E765BA = 1;
  }
  v1 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1D0F300(System_Collections_Generic_Dictionary_SceneList_Type__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v1,
    (const MethodInfo_35C7DCC *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string___ctor__);
  if ( !v1 )
    sub_1D0F30C(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    -1,
    (Il2CppObject *)StringLiteral_1/*""*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    0,
    (Il2CppObject *)StringLiteral_7753/*"InitScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    4,
    (Il2CppObject *)StringLiteral_5226/*"DebugTestScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    9,
    (Il2CppObject *)StringLiteral_14715/*"TitleScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    10,
    (Il2CppObject *)StringLiteral_3152/*"BattleScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    20,
    (Il2CppObject *)StringLiteral_13362/*"SummonScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    22,
    (Il2CppObject *)StringLiteral_13039/*"ShopScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    23,
    (Il2CppObject *)StringLiteral_6951/*"FriendScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    30,
    (Il2CppObject *)StringLiteral_9341/*"MyRoomScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    32,
    (Il2CppObject *)StringLiteral_4616/*"CombineScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    34,
    (Il2CppObject *)StringLiteral_13905/*"TerminalScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    35,
    (Il2CppObject *)StringLiteral_6852/*"FollowerScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    38,
    (Il2CppObject *)StringLiteral_3155/*"BattleScriptScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    39,
    (Il2CppObject *)StringLiteral_6908/*"FormationScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    40,
    (Il2CppObject *)StringLiteral_10716/*"PartyOrganizationScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    41,
    (Il2CppObject *)StringLiteral_12923/*"ServantListScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    42,
    (Il2CppObject *)StringLiteral_12914/*"ServantEquipListScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    44,
    (Il2CppObject *)StringLiteral_9052/*"MasterFormationScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    50,
    (Il2CppObject *)StringLiteral_3142/*"BattleDemoScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    60,
    (Il2CppObject *)StringLiteral_13368/*"SupportSelectScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    61,
    (Il2CppObject *)StringLiteral_11397/*"RecommendSupportSelectScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    71,
    (Il2CppObject *)StringLiteral_15801/*"WarehouseScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    72,
    (Il2CppObject *)StringLiteral_6314/*"EventRewardScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1000,
    (Il2CppObject *)StringLiteral_6027/*"EmptyScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    1001,
    (Il2CppObject *)StringLiteral_13358/*"SummonEffectScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    80,
    (Il2CppObject *)StringLiteral_15796/*"WarBoardScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    90,
    (Il2CppObject *)StringLiteral_4572/*"CoinRoomScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    91,
    (Il2CppObject *)StringLiteral_4516/*"ClassBoardScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    92,
    (Il2CppObject *)StringLiteral_4517/*"ClassBoardSelectScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    100,
    (Il2CppObject *)StringLiteral_9055/*"MasterMissionScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v1,
    43,
    (Il2CppObject *)StringLiteral_7244/*"GrandServantListScene"*/,
    (const MethodInfo_35C87A0 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__Add__);
  SceneList_TypeInfo->static_fields->nameList = (struct System_Collections_Generic_Dictionary_SceneList_Type__string__o *)v1;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)SceneList_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_4E765B8 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__);
    sub_1D0F0B4(&Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
    sub_1D0F0B4(&SceneList_TypeInfo);
    byte_4E765B8 = 1;
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
         (const MethodInfo_35C8994 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__ContainsKey__) )
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
                                  (const MethodInfo_35C8700 *)Method_System_Collections_Generic_Dictionary_SceneList_Type__string__get_Item__);
LABEL_12:
    sub_1D0F30C(nameList, method);
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

  if ( (byte_4E765B9 & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____);
    sub_1D0F0B4(&System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Key__);
    sub_1D0F0B4(&SceneList_TypeInfo);
    sub_1D0F0B4(&Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__);
    sub_1D0F0B4(&SceneList___c__DisplayClass3_0_TypeInfo);
    byte_4E765B9 = 1;
  }
  v3 = sub_1D0F300(SceneList___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1D0F30C(v4, v5);
  *(_QWORD *)(v3 + 16) = name;
  sub_1D0F058((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)name, v6, v7, v8, v9, v10, v11);
  v12 = SceneList_TypeInfo;
  if ( !SceneList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
    v12 = SceneList_TypeInfo;
  }
  nameList = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->nameList;
  v14 = (System_Func_T__TResult__o *)sub_1D0F300(System_Func_KeyValuePair_SceneList_Type__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_SceneList___c__DisplayClass3_0__getSceneType_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           nameList,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_32786F0 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_SceneList_Type__string____).fields.key;
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
  if ( (byte_4E765BB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_System_Collections_Generic_KeyValuePair_SceneList_Type__string__get_Value__);
    byte_4E765BB = 1;
  }
  return System_String__op_Equality(value, this->fields.name, 0);
}
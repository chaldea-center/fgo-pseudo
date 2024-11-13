void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B196C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__, method, v2);
    byte_4B196C5 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_37DF02C *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B196C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method, v2);
    byte_4B196C4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  Instance[2].klass = (Il2CppClass *)mapCamera;
  sub_1BCA784((PartyOrganizationUtility_o *)&Instance[2], (int64_t)mapCamera, v6, v7, v8, v9, v10, v11);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct AtlasManagerUnit_o *IconAtlasManagerUnit_k__BackingField; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_4B196C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method, v2);
    byte_4B196C3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !Instance
    || (IconAtlasManagerUnit_k__BackingField = contents->fields._IconAtlasManagerUnit_k__BackingField,
        Instance[1].klass = (Il2CppClass *)IconAtlasManagerUnit_k__BackingField,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&Instance[1],
          (int64_t)IconAtlasManagerUnit_k__BackingField,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
  }
  BoardUiAtlasManagerUnit_k__BackingField = contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  Instance[1].monitor = BoardUiAtlasManagerUnit_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&Instance[1].monitor,
    (int64_t)BoardUiAtlasManagerUnit_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B196C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1, v2);
    byte_4B196C0 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return (AtlasManagerUnit_o *)Instance[1].klass;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B196C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1, v2);
    byte_4B196C2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return (MapCamera_o *)Instance[2].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B196C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1, v2);
    byte_4B196C1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  return (AtlasManagerUnit_o *)Instance[1].monitor;
}
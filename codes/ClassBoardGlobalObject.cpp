void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C255E6 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__, method);
    byte_4C255E6 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_38C8C4C *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C255E5 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    byte_4C255E5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  Instance[2].klass = (Il2CppClass *)mapCamera;
  sub_1C3B708((PartyOrganizationUtility_o *)&Instance[2], (int64_t)mapCamera, v5, v6, v7, v8, v9, v10);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct AtlasManagerUnit_o *IconAtlasManagerUnit_k__BackingField; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_4C255E4 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    byte_4C255E4 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !Instance
    || (IconAtlasManagerUnit_k__BackingField = contents->fields._IconAtlasManagerUnit_k__BackingField,
        Instance[1].klass = (Il2CppClass *)IconAtlasManagerUnit_k__BackingField,
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&Instance[1],
          (int64_t)IconAtlasManagerUnit_k__BackingField,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_1C3B9C0(Instance, v4);
  }
  BoardUiAtlasManagerUnit_k__BackingField = contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  Instance[1].monitor = BoardUiAtlasManagerUnit_k__BackingField;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&Instance[1].monitor,
    (int64_t)BoardUiAtlasManagerUnit_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C255E1 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    byte_4C255E1 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  return (AtlasManagerUnit_o *)Instance[1].klass;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C255E3 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    byte_4C255E3 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  return (MapCamera_o *)Instance[2].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C255E2 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    byte_4C255E2 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v3);
  return (AtlasManagerUnit_o *)Instance[1].monitor;
}
void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E597 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
    byte_4A5E597 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_3739C30 *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5E596 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4A5E596 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  Instance[2].klass = (Il2CppClass *)mapCamera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&Instance[2], (int32_t)mapCamera, v5, v6);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct AtlasManagerUnit_o *IconAtlasManagerUnit_k__BackingField; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_4A5E595 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4A5E595 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !Instance
    || (IconAtlasManagerUnit_k__BackingField = contents->fields._IconAtlasManagerUnit_k__BackingField,
        Instance[1].klass = (Il2CppClass *)IconAtlasManagerUnit_k__BackingField,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&Instance[1],
          (int32_t)IconAtlasManagerUnit_k__BackingField,
          v5,
          v6),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(Instance, v4);
  }
  BoardUiAtlasManagerUnit_k__BackingField = contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  Instance[1].monitor = BoardUiAtlasManagerUnit_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&Instance[1].monitor,
    (int32_t)BoardUiAtlasManagerUnit_k__BackingField,
    v8,
    v9);
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5E592 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4A5E592 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (AtlasManagerUnit_o *)Instance[1].klass;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5E594 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4A5E594 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (MapCamera_o *)Instance[2].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4A5E593 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4A5E593 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v2);
  return (AtlasManagerUnit_o *)Instance[1].monitor;
}
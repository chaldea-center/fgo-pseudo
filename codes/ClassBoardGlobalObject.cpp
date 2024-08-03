void __fastcall ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  if ( (byte_49FF7B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__, method);
    byte_49FF7B0 = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_36EC554 *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void __fastcall ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF7AF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    byte_49FF7AF = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  Instance[2].klass = (Il2CppClass *)mapCamera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&Instance[2], (int32_t)mapCamera, v4, v5);
}


void __fastcall ClassBoardGlobalObject__SetResourceContents(
        ClassBoardResourceContents_o *contents,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  struct AtlasManagerUnit_o *IconAtlasManagerUnit_k__BackingField; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_49FF7AE & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, method);
    byte_49FF7AE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !Instance
    || (IconAtlasManagerUnit_k__BackingField = contents->fields._IconAtlasManagerUnit_k__BackingField,
        Instance[1].klass = (Il2CppClass *)IconAtlasManagerUnit_k__BackingField,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&Instance[1],
          (int32_t)IconAtlasManagerUnit_k__BackingField,
          v4,
          v5),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0LL) )
  {
    sub_1B64324(Instance);
  }
  BoardUiAtlasManagerUnit_k__BackingField = contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  Instance[1].monitor = BoardUiAtlasManagerUnit_k__BackingField;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&Instance[1].monitor,
    (int32_t)BoardUiAtlasManagerUnit_k__BackingField,
    v7,
    v8);
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FF7AB & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    byte_49FF7AB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (AtlasManagerUnit_o *)Instance[1].klass;
}


MapCamera_o *__fastcall ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FF7AD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    byte_49FF7AD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (MapCamera_o *)Instance[2].klass;
}


AtlasManagerUnit_o *__fastcall ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FF7AC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__, v1);
    byte_49FF7AC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return (AtlasManagerUnit_o *)Instance[1].monitor;
}
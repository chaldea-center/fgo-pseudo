void ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B40E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
    byte_4C3B40E = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39E2EEC *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B40D & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C3B40D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  Instance[2].klass = (Il2CppClass *)mapCamera;
  sub_1C32BC4((CGThumbnailListItem_o *)&Instance[2], (int32_t)mapCamera, v4, v5);
}


void ClassBoardGlobalObject__SetResourceContents(ClassBoardResourceContents_o *contents, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct AtlasManagerUnit_o *IconAtlasManagerUnit_k__BackingField; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_4C3B40C & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C3B40C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !Instance
    || (IconAtlasManagerUnit_k__BackingField = contents->fields._IconAtlasManagerUnit_k__BackingField,
        Instance[1].klass = (Il2CppClass *)IconAtlasManagerUnit_k__BackingField,
        sub_1C32BC4((CGThumbnailListItem_o *)&Instance[1], (int32_t)IconAtlasManagerUnit_k__BackingField, v4, v5),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0) )
  {
    sub_1C32E7C(Instance);
  }
  BoardUiAtlasManagerUnit_k__BackingField = contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  Instance[1].monitor = BoardUiAtlasManagerUnit_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)&Instance[1].monitor, (int32_t)BoardUiAtlasManagerUnit_k__BackingField, v7, v8);
}


AtlasManagerUnit_o *ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B409 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C3B409 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (AtlasManagerUnit_o *)Instance[1].klass;
}


MapCamera_o *ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B40B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C3B40B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (MapCamera_o *)Instance[2].klass;
}


AtlasManagerUnit_o *ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B40A & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C3B40A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  return (AtlasManagerUnit_o *)Instance[1].monitor;
}
void ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  if ( (byte_4C46ADE & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
    byte_4C46ADE = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_39ED754 *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46ADD & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C46ADD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  Instance[2].klass = (Il2CppClass *)mapCamera;
  sub_1C36FFC((CGThumbnailListItem_o *)&Instance[2], (int32_t)mapCamera, v4, v5);
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

  if ( (byte_4C46ADC & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C46ADC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !Instance
    || (IconAtlasManagerUnit_k__BackingField = contents->fields._IconAtlasManagerUnit_k__BackingField,
        Instance[1].klass = (Il2CppClass *)IconAtlasManagerUnit_k__BackingField,
        sub_1C36FFC((CGThumbnailListItem_o *)&Instance[1], (int32_t)IconAtlasManagerUnit_k__BackingField, v4, v5),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  BoardUiAtlasManagerUnit_k__BackingField = contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  Instance[1].monitor = BoardUiAtlasManagerUnit_k__BackingField;
  sub_1C36FFC((CGThumbnailListItem_o *)&Instance[1].monitor, (int32_t)BoardUiAtlasManagerUnit_k__BackingField, v7, v8);
}


AtlasManagerUnit_o *ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46AD9 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C46AD9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return (AtlasManagerUnit_o *)Instance[1].klass;
}


MapCamera_o *ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46ADB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C46ADB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return (MapCamera_o *)Instance[2].klass;
}


AtlasManagerUnit_o *ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C46ADA & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_4C46ADA = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  return (AtlasManagerUnit_o *)Instance[1].monitor;
}
void ClassBoardGlobalObject___ctor(ClassBoardGlobalObject_o *this, const MethodInfo *method)
{
  if ( (byte_59746BA & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
    byte_59746BA = 1;
  }
  SingletonTemplate_object____ctor(
    (SingletonTemplate_CLASS__o *)this,
    (const MethodInfo_47A304C *)Method_SingletonTemplate_ClassBoardGlobalObject___ctor__);
}


void ClassBoardGlobalObject__SetCamera(MapCamera_o *mapCamera, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59746B9 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_59746B9 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  Instance[2].klass = (Il2CppClass *)mapCamera;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&Instance[2], (int32_t)mapCamera, v5, v6, v7, v8, v9, v10);
}


void ClassBoardGlobalObject__SetResourceContents(ClassBoardResourceContents_o *contents, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct AtlasManagerUnit_o *IconAtlasManagerUnit_k__BackingField; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct AtlasManagerUnit_o *BoardUiAtlasManagerUnit_k__BackingField; // x1

  if ( (byte_59746B8 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_59746B8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !contents
    || !Instance
    || (IconAtlasManagerUnit_k__BackingField = contents->fields._IconAtlasManagerUnit_k__BackingField,
        Instance[1].klass = (Il2CppClass *)IconAtlasManagerUnit_k__BackingField,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&Instance[1],
          (int32_t)IconAtlasManagerUnit_k__BackingField,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  BoardUiAtlasManagerUnit_k__BackingField = contents->fields._BoardUiAtlasManagerUnit_k__BackingField;
  Instance[1].monitor = BoardUiAtlasManagerUnit_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&Instance[1].monitor,
    (int32_t)BoardUiAtlasManagerUnit_k__BackingField,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


AtlasManagerUnit_o *ClassBoardGlobalObject__get_IconAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_59746B5 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_59746B5 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (AtlasManagerUnit_o *)Instance[1].klass;
}


MapCamera_o *ClassBoardGlobalObject__get_MapCamera(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_59746B7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_59746B7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (MapCamera_o *)Instance[2].klass;
}


AtlasManagerUnit_o *ClassBoardGlobalObject__get_UiAtlasManagerUnit(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_59746B6 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
    byte_59746B6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_ClassBoardGlobalObject__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (AtlasManagerUnit_o *)Instance[1].monitor;
}
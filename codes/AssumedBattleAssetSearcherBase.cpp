void AssumedBattleAssetSearcherBase___ctor(AssumedBattleAssetSearcherBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D32ED8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    byte_4D32ED8 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetPathList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.assetPathList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.audioPathList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.audioPathList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *assetPathList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4D32ED3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    byte_4D32ED3 = 1;
  }
  assetPathList = (System_Collections_Generic_List_object__o *)this->fields.assetPathList;
  if ( !assetPathList
    || (items = assetPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++assetPathList->fields._version,
        !items) )
  {
    sub_1C93D2C(assetPathList, path);
  }
  size = assetPathList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      assetPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    assetPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)path, (int32_t)method, v3, v4, v5, v6, v7);
  }
}


void AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *audioPathList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4D32ED5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    byte_4D32ED5 = 1;
  }
  audioPathList = (System_Collections_Generic_List_object__o *)this->fields.audioPathList;
  if ( !audioPathList
    || (items = audioPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++audioPathList->fields._version,
        !items) )
  {
    sub_1C93D2C(audioPathList, path);
  }
  size = audioPathList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      audioPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    audioPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)path, (int32_t)method, v3, v4, v5, v6, v7);
  }
}


System_String_array *AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_4D32ED4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    byte_4D32ED4 = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_1C93D2C(0, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)assetPathList,
                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *audioPathList; // x0

  if ( (byte_4D32ED6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    byte_4D32ED6 = 1;
  }
  audioPathList = this->fields.audioPathList;
  if ( !audioPathList )
    sub_1C93D2C(0, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)audioPathList,
                                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


bool AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v2; // x19
  struct System_Collections_Generic_List_string__o *assetPathList; // x8
  struct System_Collections_Generic_List_string__o *audioPathList; // x9

  v2 = this;
  if ( (byte_4D32ED7 & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4D32ED7 = 1;
  }
  assetPathList = v2->fields.assetPathList;
  if ( !assetPathList || (audioPathList = v2->fields.audioPathList) == 0 )
    sub_1C93D2C(this, method);
  return audioPathList->fields._size + assetPathList->fields._size > 0;
}


void AssumedBattleAssetSearcherBase__SetManager(
        AssumedBattleAssetSearcherBase_o *this,
        AssumedBattleAssetLoadManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.manager = manager;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t AssumedBattleAssetSearcherBase__get_LoadStatus(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  return this->fields._LoadStatus_k__BackingField;
}


void AssumedBattleAssetSearcherBase__set_LoadStatus(
        AssumedBattleAssetSearcherBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LoadStatus_k__BackingField = value;
}
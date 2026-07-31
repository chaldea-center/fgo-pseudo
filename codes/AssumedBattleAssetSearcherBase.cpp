void AssumedBattleAssetSearcherBase___ctor(AssumedBattleAssetSearcherBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_593AC2F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_593AC2F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetPathList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetPathList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.audioPathList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.audioPathList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssumedBattleAssetSearcherBase_o *v9; // x20
  System_Collections_Generic_List_object__o *assetPathList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_593AC2A & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    byte_593AC2A = 1;
  }
  assetPathList = (System_Collections_Generic_List_object__o *)v9->fields.assetPathList;
  if ( !assetPathList
    || (items = assetPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++assetPathList->fields._version,
        !items) )
  {
    sub_21FFECC(this, path);
  }
  size = assetPathList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      assetPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    assetPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)path,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssumedBattleAssetSearcherBase_o *v9; // x20
  System_Collections_Generic_List_object__o *audioPathList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v12; // x10
  __int64 size; // x11
  Il2CppClass **v14; // x0

  v9 = this;
  if ( (byte_593AC2C & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    byte_593AC2C = 1;
  }
  audioPathList = (System_Collections_Generic_List_object__o *)v9->fields.audioPathList;
  if ( !audioPathList
    || (items = audioPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++audioPathList->fields._version,
        !items) )
  {
    sub_21FFECC(this, path);
  }
  size = audioPathList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      audioPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    audioPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v14 + 4),
      (int32_t)path,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


System_String_array *AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_593AC2B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    byte_593AC2B = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_21FFECC(0, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)assetPathList,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *audioPathList; // x0

  if ( (byte_593AC2D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    byte_593AC2D = 1;
  }
  audioPathList = this->fields.audioPathList;
  if ( !audioPathList )
    sub_21FFECC(0, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)audioPathList,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}


bool AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v2; // x19
  struct System_Collections_Generic_List_string__o *assetPathList; // x8
  struct System_Collections_Generic_List_string__o *audioPathList; // x9

  v2 = this;
  if ( (byte_593AC2E & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_593AC2E = 1;
  }
  assetPathList = v2->fields.assetPathList;
  if ( !assetPathList || (audioPathList = v2->fields.audioPathList) == 0 )
    sub_21FFECC(this, method);
  return audioPathList->fields._size + assetPathList->fields._size > 0;
}


void AssumedBattleAssetSearcherBase__SetManager(
        AssumedBattleAssetSearcherBase_o *this,
        AssumedBattleAssetLoadManager_o *manager,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.manager = manager;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.manager,
    (int32_t)manager,
    (System_String_o *)method,
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
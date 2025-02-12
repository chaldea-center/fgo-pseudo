void __fastcall AssumedBattleAssetSearcherBase___ctor(AssumedBattleAssetSearcherBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  System_Collections_Generic_List_object__o *v11; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BB6938 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4BB6938 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetPathList = (struct System_Collections_Generic_List_string__o *)v4;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.assetPathList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.audioPathList = (struct System_Collections_Generic_List_string__o *)v11;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.audioPathList, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *assetPathList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BB6933 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, path);
    byte_4BB6933 = 1;
  }
  assetPathList = (System_Collections_Generic_List_object__o *)this->fields.assetPathList;
  if ( !assetPathList
    || (items = assetPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++assetPathList->fields._version,
        !items) )
  {
    sub_1C13F80(assetPathList, path);
  }
  size = assetPathList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      assetPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    assetPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)path, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


void __fastcall AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Collections_Generic_List_object__o *audioPathList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4BB6935 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, path);
    byte_4BB6935 = 1;
  }
  audioPathList = (System_Collections_Generic_List_object__o *)this->fields.audioPathList;
  if ( !audioPathList
    || (items = audioPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++audioPathList->fields._version,
        !items) )
  {
    sub_1C13F80(audioPathList, path);
  }
  size = audioPathList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      audioPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    audioPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)path, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_4BB6934 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_4BB6934 = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_1C13F80(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)assetPathList,
                                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *audioPathList; // x0

  if ( (byte_4BB6936 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_4BB6936 = 1;
  }
  audioPathList = this->fields.audioPathList;
  if ( !audioPathList )
    sub_1C13F80(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)audioPathList,
                                  (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


bool __fastcall AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v2; // x19
  struct System_Collections_Generic_List_string__o *assetPathList; // x8
  struct System_Collections_Generic_List_string__o *audioPathList; // x9

  v2 = this;
  if ( (byte_4BB6937 & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_1C13D24(
                                                 &Method_System_Collections_Generic_List_string__get_Count__,
                                                 method);
    byte_4BB6937 = 1;
  }
  assetPathList = v2->fields.assetPathList;
  if ( !assetPathList || (audioPathList = v2->fields.audioPathList) == 0LL )
    sub_1C13F80(this, method);
  return audioPathList->fields._size + assetPathList->fields._size > 0;
}


void __fastcall AssumedBattleAssetSearcherBase__SetManager(
        AssumedBattleAssetSearcherBase_o *this,
        AssumedBattleAssetLoadManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.manager = manager;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.manager,
    (int64_t)manager,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t __fastcall AssumedBattleAssetSearcherBase__get_LoadStatus(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  return this->fields._LoadStatus_k__BackingField;
}


void __fastcall AssumedBattleAssetSearcherBase__set_LoadStatus(
        AssumedBattleAssetSearcherBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LoadStatus_k__BackingField = value;
}
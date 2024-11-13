void __fastcall AssumedBattleAssetSearcherBase___ctor(AssumedBattleAssetSearcherBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_List_object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B183BE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v5, v6);
    byte_4B183BE = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetPathList = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetPathList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.audioPathList = (struct System_Collections_Generic_List_string__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.audioPathList, (int64_t)v17, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4B183B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, path, method);
    byte_4B183B9 = 1;
  }
  assetPathList = (System_Collections_Generic_List_object__o *)this->fields.assetPathList;
  if ( !assetPathList
    || (items = assetPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++assetPathList->fields._version,
        !items) )
  {
    sub_1BCAA3C(assetPathList, path);
  }
  size = assetPathList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      assetPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    assetPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)path, (int64_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4B183BB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, path, method);
    byte_4B183BB = 1;
  }
  audioPathList = (System_Collections_Generic_List_object__o *)this->fields.audioPathList;
  if ( !audioPathList
    || (items = audioPathList->fields._items,
        v12 = Method_System_Collections_Generic_List_string__Add__,
        ++audioPathList->fields._version,
        !items) )
  {
    sub_1BCAA3C(audioPathList, path);
  }
  size = audioPathList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      audioPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    audioPathList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)path;
    sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 4), (int64_t)path, (int64_t)method, v3, v4, v5, v6, v7);
  }
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_4B183BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, method, v2);
    byte_4B183BA = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_1BCAA3C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)assetPathList,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_string__o *audioPathList; // x0

  if ( (byte_4B183BC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, method, v2);
    byte_4B183BC = 1;
  }
  audioPathList = this->fields.audioPathList;
  if ( !audioPathList )
    sub_1BCAA3C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)audioPathList,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


bool __fastcall AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  AssumedBattleAssetSearcherBase_o *v3; // x19
  struct System_Collections_Generic_List_string__o *assetPathList; // x8
  struct System_Collections_Generic_List_string__o *audioPathList; // x9

  v3 = this;
  if ( (byte_4B183BD & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_List_string__get_Count__,
                                                 method,
                                                 v2);
    byte_4B183BD = 1;
  }
  assetPathList = v3->fields.assetPathList;
  if ( !assetPathList || (audioPathList = v3->fields.audioPathList) == 0LL )
    sub_1BCAA3C(this, method);
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
  sub_1BCA784(
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
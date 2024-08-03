void __fastcall AssumedBattleAssetSearcherBase___ctor(AssumedBattleAssetSearcherBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FE464 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v4);
    byte_49FE464 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.assetPathList = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetPathList, (int32_t)v5, v6, v7);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v8,
                                                       v9);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.audioPathList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.audioPathList, (int32_t)v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AssumedBattleAssetSearcherBase__AppendPreloadedAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *assetPathList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49FE45F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, path);
    byte_49FE45F = 1;
  }
  assetPathList = (System_Collections_Generic_List_object__o *)this->fields.assetPathList;
  if ( !assetPathList
    || (items = assetPathList->fields._items,
        v8 = Method_System_Collections_Generic_List_string__Add__,
        ++assetPathList->fields._version,
        !items) )
  {
    sub_1B64324(assetPathList);
  }
  size = assetPathList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      assetPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    assetPathList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)path;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)path, (int32_t)method, v3);
  }
}


void __fastcall AssumedBattleAssetSearcherBase__AppendPreloadedAudioAssetPath(
        AssumedBattleAssetSearcherBase_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *audioPathList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_49FE461 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, path);
    byte_49FE461 = 1;
  }
  audioPathList = (System_Collections_Generic_List_object__o *)this->fields.audioPathList;
  if ( !audioPathList
    || (items = audioPathList->fields._items,
        v8 = Method_System_Collections_Generic_List_string__Add__,
        ++audioPathList->fields._version,
        !items) )
  {
    sub_1B64324(audioPathList);
  }
  size = audioPathList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      audioPathList,
      (Il2CppObject *)path,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    audioPathList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)path;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)path, (int32_t)method, v3);
  }
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *assetPathList; // x0

  if ( (byte_49FE460 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_49FE460 = 1;
  }
  assetPathList = this->fields.assetPathList;
  if ( !assetPathList )
    sub_1B64324(0LL);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)assetPathList,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *__fastcall AssumedBattleAssetSearcherBase__GetPreloadedAudioAssetPathsAsArray(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *audioPathList; // x0

  if ( (byte_49FE462 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_49FE462 = 1;
  }
  audioPathList = this->fields.audioPathList;
  if ( !audioPathList )
    sub_1B64324(0LL);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)audioPathList,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
}


bool __fastcall AssumedBattleAssetSearcherBase__HasAnyPreloadedAssetPaths(
        AssumedBattleAssetSearcherBase_o *this,
        const MethodInfo *method)
{
  AssumedBattleAssetSearcherBase_o *v2; // x19
  struct System_Collections_Generic_List_string__o *assetPathList; // x8
  struct System_Collections_Generic_List_string__o *audioPathList; // x9

  v2 = this;
  if ( (byte_49FE463 & 1) == 0 )
  {
    this = (AssumedBattleAssetSearcherBase_o *)sub_1B640C8(
                                                 &Method_System_Collections_Generic_List_string__get_Count__,
                                                 method);
    byte_49FE463 = 1;
  }
  assetPathList = v2->fields.assetPathList;
  if ( !assetPathList || (audioPathList = v2->fields.audioPathList) == 0LL )
    sub_1B64324(this);
  return audioPathList->fields._size + assetPathList->fields._size > 0;
}


void __fastcall AssumedBattleAssetSearcherBase__SetManager(
        AssumedBattleAssetSearcherBase_o *this,
        AssumedBattleAssetLoadManager_o *manager,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.manager = manager;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.manager, (int32_t)manager, (int32_t)method, v3);
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
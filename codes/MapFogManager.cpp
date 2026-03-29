void MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D42A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapFogData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MapFogData__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_MapFogManager___ctor__);
    byte_4D2D42A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MapFogData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fogList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.fogColor = _Q0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
}


void MapFogManager__ApplyColor(MapFogManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fogList; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  System_Nullable_Color__o v8; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D2D429 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Nullable_Color__get_HasValue__);
    byte_4D2D429 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    fogList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
  {
    current = v9.fields._current;
    if ( v9.fields._current && MapFogData__get_HasRenderer((MapFogData_o *)v9.fields._current, v4) )
    {
      MapFogData__get_Color(&v8, (MapFogData_o *)current, v6);
      if ( v8.fields.hasValue )
        MapFogData__ApplyColor((MapFogData_o *)current, this->fields.fogColor, v7);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fogList; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_4D2D427 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapFogData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapFogData__Contains__);
    byte_4D2D427 = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    goto LABEL_11;
  fogList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                           fogList,
                                                           (Il2CppObject *)fogData,
                                                           (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData
    || (MapFogData__ApplyColor(fogData, this->fields.fogColor, (const MethodInfo *)fogData),
        (fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList) == 0)
    || (items = fogList->fields._items,
        v13 = Method_System_Collections_Generic_List_MapFogData__Add__,
        ++fogList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C93D2C(fogList, fogData);
  }
  size = fogList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      fogList,
      (Il2CppObject *)fogData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    fogList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)fogData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)fogData, v6, v7, v8, v9, v10, v11);
  }
}


void MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fogList; // x0

  if ( (byte_4D2D428 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapFogData__Remove__);
    byte_4D2D428 = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    sub_1C93D2C(0, fogData);
  System_Collections_Generic_List_object___Remove(
    fogList,
    (Il2CppObject *)fogData,
    (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}
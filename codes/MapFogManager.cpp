void MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo_476EDF0 *v15; // x1

  if ( (byte_5934FBC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MapFogData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MapFogData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_MapFogManager___ctor__);
    byte_5934FBC = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MapFogData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fogList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  __asm { FMOV            V0.4S, #1.0 }
  v15 = (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_MapFogManager___ctor__;
  this->fields.fogColor = _Q0;
  SingletonMonoBehaviour_object____ctor((SingletonMonoBehaviour_T__o *)this, v15);
}


void MapFogManager__ApplyColor(MapFogManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fogList; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  System_Nullable_Color__o v8; // [xsp+4h] [xbp-6Ch] BYREF
  __int64 v9; // [xsp+18h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_object__o *v10; // [xsp+20h] [xbp-50h]
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_5934FBB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
    sub_21FFC50(&Method_System_Nullable_Color__get_HasValue__);
    byte_5934FBB = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  memset(&v11, 0, sizeof(v11));
  if ( !fogList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    fogList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  v9 = 0;
  v10 = &v11;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
  {
    current = v11.fields._current;
    if ( v11.fields._current && MapFogData__get_HasRenderer((MapFogData_o *)v11.fields._current, v4) )
    {
      MapFogData__get_Color(&v8, (MapFogData_o *)current, v6);
      if ( v8.fields.hasValue )
        MapFogData__ApplyColor((MapFogData_o *)current, this->fields.fogColor, v7);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  struct System_Collections_Generic_List_MapFogData__o *fogList; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x8
  struct System_Object_array *items; // x9
  _QWORD *v14; // x10
  __int64 size; // x11
  Il2CppClass **v16; // x0

  if ( (byte_5934FB9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MapFogData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MapFogData__Contains__);
    byte_5934FB9 = 1;
  }
  fogList = this->fields.fogList;
  if ( !fogList )
    goto LABEL_11;
  fogList = (struct System_Collections_Generic_List_MapFogData__o *)System_Collections_Generic_List_object___Contains(
                                                                      (System_Collections_Generic_List_object__o *)fogList,
                                                                      (Il2CppObject *)fogData,
                                                                      (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData
    || (MapFogData__ApplyColor(fogData, this->fields.fogColor, (const MethodInfo *)fogData),
        (v12 = (System_Collections_Generic_List_object__o *)this->fields.fogList) == 0)
    || (items = v12->fields._items,
        v14 = Method_System_Collections_Generic_List_MapFogData__Add__,
        ++v12->fields._version,
        !items) )
  {
LABEL_11:
    sub_21FFECC(fogList, fogData);
  }
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)fogData,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v16[4] = (Il2CppClass *)fogData;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)fogData, v6, v7, v8, v9, v10, v11);
  }
}


void MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fogList; // x0

  if ( (byte_5934FBA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MapFogData__Remove__);
    byte_5934FBA = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    sub_21FFECC(0, fogData);
  System_Collections_Generic_List_object___Remove(
    fogList,
    (Il2CppObject *)fogData,
    (const MethodInfo_445101C *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}
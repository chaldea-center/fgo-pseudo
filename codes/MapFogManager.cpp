void __fastcall MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49F92D2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapFogData___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_MapFogData__TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_MapFogManager___ctor__, v5);
    byte_49F92D2 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_MapFogData__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.fogList, (int32_t)v6, v7, v8);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.fogColor = _Q0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
}


void __fastcall MapFogManager__ApplyColor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *fogList; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  System_Nullable_Color__o v12; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49F92D1 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__, v5);
    sub_1B640C8(&Method_System_Nullable_Color__get_HasValue__, v6);
    byte_49F92D1 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    fogList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
  {
    current = v13.fields._current;
    if ( v13.fields._current && MapFogData__get_HasRenderer((MapFogData_o *)v13.fields._current, v8) )
    {
      MapFogData__get_Color(&v12, (MapFogData_o *)current, v10);
      if ( v12.fields.hasValue )
        MapFogData__ApplyColor((MapFogData_o *)current, this->fields.fogColor, v11);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void __fastcall MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *fogList; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x8

  if ( (byte_49F92CF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapFogData__Add__, fogData);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapFogData__Contains__, v5);
    byte_49F92CF = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    goto LABEL_11;
  fogList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                           fogList,
                                                           (Il2CppObject *)fogData,
                                                           (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData
    || (MapFogData__ApplyColor(fogData, this->fields.fogColor, v7),
        (fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList) == 0LL)
    || (items = fogList->fields._items,
        v11 = Method_System_Collections_Generic_List_MapFogData__Add__,
        ++fogList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B64324(fogList);
  }
  size = fogList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      fogList,
      (Il2CppObject *)fogData,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    fogList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)fogData;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)fogData, v8, v9);
  }
}


void __fastcall MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fogList; // x0

  if ( (byte_49F92D0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_MapFogData__Remove__, fogData);
    byte_49F92D0 = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___Remove(
    fogList,
    (Il2CppObject *)fogData,
    (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}
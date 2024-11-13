void __fastcall MapFogManager___ctor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B12F6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapFogData___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_MapFogData__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_MapFogManager___ctor__, v7, v8);
    byte_4B12F6B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_MapFogData__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_MapFogData___ctor__);
  this->fields.fogList = (struct System_Collections_Generic_List_MapFogData__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.fogList, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  __asm { FMOV            V0.4S, #1.0 }
  this->fields.fogColor = _Q0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_MapFogManager___ctor__);
}


void __fastcall MapFogManager__ApplyColor(MapFogManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *fogList; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  System_Nullable_Color__o v17; // [xsp+0h] [xbp-60h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B12F6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapFogData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapFogData__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v10, v11);
    byte_4B12F6A = 1;
  }
  memset(&v18, 0, sizeof(v18));
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    fogList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapFogData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapFogData__MoveNext__) )
  {
    current = v18.fields._current;
    if ( v18.fields._current && MapFogData__get_HasRenderer((MapFogData_o *)v18.fields._current, v13) )
    {
      MapFogData__get_Color(&v17, (MapFogData_o *)current, v15);
      if ( v17.fields.hasValue )
        MapFogData__ApplyColor((MapFogData_o *)current, this->fields.fogColor, v16);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapFogData__Dispose__);
}


void __fastcall MapFogManager__Attach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *fogList; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8

  if ( (byte_4B12F68 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapFogData__Add__, fogData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapFogData__Contains__, v5, v6);
    byte_4B12F68 = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    goto LABEL_11;
  fogList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                           fogList,
                                                           (Il2CppObject *)fogData,
                                                           (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_MapFogData__Contains__);
  if ( ((unsigned __int8)fogList & 1) != 0 )
    return;
  if ( !fogData
    || (MapFogData__ApplyColor(fogData, this->fields.fogColor, (const MethodInfo *)fogData),
        (fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList) == 0LL)
    || (items = fogList->fields._items,
        v15 = Method_System_Collections_Generic_List_MapFogData__Add__,
        ++fogList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BCAA3C(fogList, fogData);
  }
  size = fogList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      fogList,
      (Il2CppObject *)fogData,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    fogList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)fogData;
    sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)fogData, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall MapFogManager__Detach(MapFogManager_o *this, MapFogData_o *fogData, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *fogList; // x0

  if ( (byte_4B12F69 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapFogData__Remove__, fogData, method);
    byte_4B12F69 = 1;
  }
  fogList = (System_Collections_Generic_List_object__o *)this->fields.fogList;
  if ( !fogList )
    sub_1BCAA3C(0LL, fogData);
  System_Collections_Generic_List_object___Remove(
    fogList,
    (Il2CppObject *)fogData,
    (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_MapFogData__Remove__);
}
void EventUpValInfo___ctor(
        EventUpValInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t npcFlag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v13; // x25
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventUpValInfo_Fields *p_fields; // x24
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_59381D9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    byte_59381D9 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.dropList, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)setupInfo, v21, v22, v23, v24, v25, v26);
  p_fields->svtId = svtId;
  p_fields->limitCount = limitCount;
  p_fields->dispLimitCount = dispLimitCount;
  p_fields->npcFlag = npcFlag;
}


EventDropItemUpValInfo_array *EventUpValInfo__GetDropItemList(
        EventUpValInfo_o *this,
        int32_t member,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x23
  _DWORD *monitor; // x8
  unsigned int v12; // w8
  int32_t equipSvtId; // w22
  EventDropItemUpValInfo_o *v14; // x24
  const MethodInfo *v15; // x4
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v29; // x1
  ItemEntity_array *v30; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v32; // x29
  ItemEntity_o *v33; // x26
  EventDropItemUpValInfo_o *v34; // x25
  const MethodInfo *v35; // x4
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_59381DA & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_21FFC50(&EventDropItemUpValInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59381DA = 1;
  }
  memset(&v51, 0, sizeof(v51));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_39;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v51 = v50;
  v50.fields._list = 0;
  *(_QWORD *)&v50.fields._index = &v51;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v51,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_21FFECC(v8, v9);
    monitor = v51.fields._current[1].monitor;
    if ( !monitor )
      sub_21FFECC(v8, v9);
    v12 = monitor[6];
    if ( v12 - 111 <= 0x15 && ((1 << (v12 - 111)) & 0x240019) != 0 || v12 <= 0x10 && ((1 << v12) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v14 = (EventDropItemUpValInfo_o *)sub_21FFEBC(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v14, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v15);
      if ( !v7
        || (items = v7->fields._items,
            v25 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_21FFECC(v16, v17);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v14,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v14;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v14, v18, v19, v20, v21, v22, v23);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_21FFECC(0, v9);
      IndividualityList = ItemMaster__GetIndividualityList(MasterData_object, (int32_t)v51.fields._current[2].klass, 0);
      v30 = IndividualityList;
      if ( !IndividualityList )
        sub_21FFECC(0, v29);
      max_length = IndividualityList->max_length;
      if ( (int)max_length >= 1 )
      {
        v32 = 0;
        do
        {
          if ( v32 >= (unsigned int)max_length )
            sub_21FFED4(IndividualityList);
          v33 = v30->m_Items[v32];
          v34 = (EventDropItemUpValInfo_o *)sub_21FFEBC(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_48668376(v34, member, (EventDropUpValInfo_o *)current, v33, v35);
          if ( !v7
            || (v44 = v7->fields._items,
                v45 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__,
                ++v7->fields._version,
                !v44) )
          {
            sub_21FFECC(v36, v37);
          }
          v46 = v7->fields._size;
          if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v34,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &v44->obj.klass + v46;
            v7->fields._size = v46 + 1;
            v47[4] = (Il2CppClass *)v34;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v47 + 4), (int32_t)v34, v38, v39, v40, v41, v42, v43);
          }
          LODWORD(max_length) = v30->max_length;
          ++v32;
        }
        while ( (__int64)v32 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v7 )
LABEL_39:
    sub_21FFECC(Instance, v6);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool EventUpValInfo__IsEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipSvtId > 0;
}


// local variable allocation has failed, the output may be wrong!
void EventUpValInfo__RemoveDropItem(EventUpValInfo_o *this, int32_t funcId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x8
  System_Collections_Generic_List_object__o *v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_59381DB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
    byte_59381DB = 1;
  }
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  memset(&v9, 0, sizeof(v9));
  if ( !dropList )
    sub_21FFECC(0, *(_QWORD *)&funcId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    dropList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_21FFECC(v6, 0);
    v7 = *(__int64 *)((char *)&v9.fields._current->klass + (unsigned __int64)off_18);
    if ( !v7 )
      sub_21FFECC(v6, v9.fields._current);
    if ( *(_DWORD *)(v7 + 16) == funcId )
    {
      v8 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v8 )
        sub_21FFECC(0, v9.fields._current);
      System_Collections_Generic_List_object___Remove(
        v8,
        v9.fields._current,
        (const MethodInfo_445101C *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
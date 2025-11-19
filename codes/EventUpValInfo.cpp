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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  EventUpValInfo_Fields *p_fields; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4CB5E23 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    byte_4CB5E23 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.dropList, (int32_t)v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_fields, (int32_t)setupInfo, v17, v18);
  p_fields->svtId = svtId;
  p_fields->limitCount = limitCount;
  p_fields->dispLimitCount = dispLimitCount;
  p_fields->npcFlag = npcFlag;
}


void EventUpValInfo__ClearEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.equipSvtId = 0;
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v25; // x1
  ItemEntity_array *v26; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v28; // x29
  ItemEntity_o *v29; // x26
  EventDropItemUpValInfo_o *v30; // x25
  const MethodInfo *v31; // x4
  __int64 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB5E25 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C6BA08(&EventDropItemUpValInfo_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB5E25 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ItemMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v43,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v43.fields._current;
    if ( !v43.fields._current )
      sub_1C6BC60(v8, v9);
    monitor = v43.fields._current[1].monitor;
    if ( !monitor )
      sub_1C6BC60(v8, v9);
    v12 = monitor[6];
    if ( v12 - 111 <= 0x15 && ((1 << (v12 - 111)) & 0x240019) != 0 || v12 <= 0x10 && ((1 << v12) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v14 = (EventDropItemUpValInfo_o *)sub_1C6BC54(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v14, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v15);
      if ( !v7 )
        sub_1C6BC60(v16, v17);
      items = v7->fields._items;
      v21 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C6BC60(v16, v17);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v14,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v14;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1C6BC60(0, v9);
      IndividualityList = ItemMaster__GetIndividualityList(MasterData_object, (int32_t)v43.fields._current[2].klass, 0);
      v26 = IndividualityList;
      if ( !IndividualityList )
        sub_1C6BC60(0, v25);
      max_length = IndividualityList->max_length;
      if ( (int)max_length >= 1 )
      {
        v28 = 0;
        do
        {
          if ( v28 >= (unsigned int)max_length )
            sub_1C6BC68(IndividualityList);
          v29 = v26->m_Items[v28];
          v30 = (EventDropItemUpValInfo_o *)sub_1C6BC54(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_41951328(v30, member, (EventDropUpValInfo_o *)current, v29, v31);
          if ( !v7 )
            sub_1C6BC60(v32, v33);
          v36 = v7->fields._items;
          v37 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v7->fields._version;
          if ( !v36 )
            sub_1C6BC60(v32, v33);
          v38 = v7->fields._size;
          if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v30,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
          }
          else
          {
            v39 = &v36->obj.klass + v38;
            v7->fields._size = v38 + 1;
            v39[4] = (Il2CppClass *)v30;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v30, v34, v35);
          }
          LODWORD(max_length) = v26->max_length;
          ++v28;
        }
        while ( (__int64)v28 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v7 )
LABEL_41:
    sub_1C6BC60(Instance, v6);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_4CB5E24 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    byte_4CB5E24 = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_1C6BC60(this, method);
  return dropList->fields._size < 1;
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
  __int64 v7; // x1
  _DWORD *monitor; // x9
  System_Collections_Generic_List_object__o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4CB5E26 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
    byte_4CB5E26 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C6BC60(0, *(_QWORD *)&funcId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    dropList,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields._current )
      sub_1C6BC60(v6, v7);
    monitor = v11.fields._current[1].monitor;
    if ( !monitor )
      sub_1C6BC60(v6, v7);
    if ( monitor[4] == funcId )
    {
      v9 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v9 )
        sub_1C6BC60(0, v7);
      System_Collections_Generic_List_object___Remove(
        v9,
        v11.fields._current,
        (const MethodInfo_3801E9C *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
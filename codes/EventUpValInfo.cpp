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

  if ( (byte_4C26E4F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    byte_4C26E4F = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v13;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dropList, (int32_t)v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1C2D434((CGThumbnailListItem_o *)p_fields, (int32_t)setupInfo, v17, v18);
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
  __int64 v26; // x2
  ItemEntity_array *v27; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v29; // x29
  ItemEntity_o *v30; // x26
  EventDropItemUpValInfo_o *v31; // x25
  const MethodInfo *v32; // x4
  __int64 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C26E51 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C2D490(&EventDropItemUpValInfo_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26E51 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v43,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v44 = v43;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v44,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v44.fields._current;
    if ( !v44.fields._current )
      sub_1C2D6EC(v8, v9);
    monitor = v44.fields._current[1].monitor;
    if ( !monitor )
      sub_1C2D6EC(v8, v9);
    v12 = monitor[6];
    if ( v12 - 111 <= 0x15 && ((1 << (v12 - 111)) & 0x240019) != 0 || v12 <= 0x10 && ((1 << v12) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v14 = (EventDropItemUpValInfo_o *)sub_1C2D6DC(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v14, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v15);
      if ( !v7 )
        sub_1C2D6EC(v16, v17);
      items = v7->fields._items;
      v21 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C2D6EC(v16, v17);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v14,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v14;
        sub_1C2D434((CGThumbnailListItem_o *)(v23 + 4), (int32_t)v14, v18, v19);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1C2D6EC(0, v9);
      IndividualityList = ItemMaster__GetIndividualityList(MasterData_object, (int32_t)v44.fields._current[2].klass, 0);
      v27 = IndividualityList;
      if ( !IndividualityList )
        sub_1C2D6EC(0, v25);
      max_length = IndividualityList->max_length;
      if ( (int)max_length >= 1 )
      {
        v29 = 0;
        do
        {
          if ( v29 >= (unsigned int)max_length )
            sub_1C2D6F4(IndividualityList, v25, v26);
          v30 = v27->m_Items[v29];
          v31 = (EventDropItemUpValInfo_o *)sub_1C2D6DC(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_41494348(v31, member, (EventDropUpValInfo_o *)current, v30, v32);
          if ( !v7 )
            sub_1C2D6EC(v33, v34);
          v37 = v7->fields._items;
          v38 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v7->fields._version;
          if ( !v37 )
            sub_1C2D6EC(v33, v34);
          v39 = v7->fields._size;
          if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v31,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &v37->obj.klass + v39;
            v7->fields._size = v39 + 1;
            v40[4] = (Il2CppClass *)v31;
            sub_1C2D434((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v31, v35, v36);
          }
          LODWORD(max_length) = v27->max_length;
          ++v29;
        }
        while ( (__int64)v29 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v44,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v7 )
LABEL_41:
    sub_1C2D6EC(Instance, v6);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_4C26E50 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    byte_4C26E50 = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C26E52 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
    byte_4C26E52 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C2D6EC(0, *(_QWORD *)&funcId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    dropList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields._current )
      sub_1C2D6EC(v6, v7);
    monitor = v11.fields._current[1].monitor;
    if ( !monitor )
      sub_1C2D6EC(v6, v7);
    if ( monitor[4] == funcId )
    {
      v9 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v9 )
        sub_1C2D6EC(0, v7);
      System_Collections_Generic_List_object___Remove(
        v9,
        v11.fields._current,
        (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
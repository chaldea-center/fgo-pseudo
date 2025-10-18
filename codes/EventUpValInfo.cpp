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

  if ( (byte_4C42B1A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    byte_4C42B1A = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.dropList, (int32_t)v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1C36FFC((CGThumbnailListItem_o *)p_fields, (int32_t)setupInfo, v17, v18);
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
  System_Collections_Generic_List_object__o *v6; // x19
  _BOOL8 v7; // x0
  Il2CppObject *current; // x23
  _DWORD *monitor; // x8
  unsigned int v10; // w8
  int32_t equipSvtId; // w22
  EventDropItemUpValInfo_o *v12; // x24
  const MethodInfo *v13; // x4
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  ItemEntity_array *IndividualityList; // x0
  ItemEntity_array *v22; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v24; // x29
  ItemEntity_o *v25; // x26
  EventDropItemUpValInfo_o *v26; // x25
  const MethodInfo *v27; // x4
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C42B1C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C37058(&EventDropItemUpValInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42B1C = 1;
  }
  memset(&v38, 0, sizeof(v38));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v38,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v7 )
      break;
    current = v38.fields._current;
    if ( !v38.fields._current )
      sub_1C372B4(v7);
    monitor = v38.fields._current[1].monitor;
    if ( !monitor )
      sub_1C372B4(v7);
    v10 = monitor[6];
    if ( v10 - 111 <= 0x15 && ((1 << (v10 - 111)) & 0x240019) != 0 || v10 <= 0x10 && ((1 << v10) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v12 = (EventDropItemUpValInfo_o *)sub_1C372A4(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v12, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v13);
      if ( !v6 )
        sub_1C372B4(v14);
      items = v6->fields._items;
      v18 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v6->fields._version;
      if ( !items )
        sub_1C372B4(v14);
      size = v6->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v6,
          (Il2CppObject *)v12,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v6->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v12;
        sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v12, v15, v16);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1C372B4(0);
      IndividualityList = ItemMaster__GetIndividualityList(MasterData_object, (int32_t)v38.fields._current[2].klass, 0);
      v22 = IndividualityList;
      if ( !IndividualityList )
        sub_1C372B4(0);
      max_length = IndividualityList->max_length;
      if ( (int)max_length >= 1 )
      {
        v24 = 0;
        do
        {
          if ( v24 >= (unsigned int)max_length )
            sub_1C372BC(IndividualityList);
          v25 = v22->m_Items[v24];
          v26 = (EventDropItemUpValInfo_o *)sub_1C372A4(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_41716964(v26, member, (EventDropUpValInfo_o *)current, v25, v27);
          if ( !v6 )
            sub_1C372B4(v28);
          v31 = v6->fields._items;
          v32 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v6->fields._version;
          if ( !v31 )
            sub_1C372B4(v28);
          v33 = v6->fields._size;
          if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              (Il2CppObject *)v26,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &v31->obj.klass + v33;
            v6->fields._size = v33 + 1;
            v34[4] = (Il2CppClass *)v26;
            sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v26, v29, v30);
          }
          LODWORD(max_length) = v22->max_length;
          ++v24;
        }
        while ( (__int64)v24 < (int)max_length );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v6 )
LABEL_41:
    sub_1C372B4(Instance);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v6,
                                           (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_4C42B1B & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    byte_4C42B1B = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_1C372B4(this);
  return dropList->fields._size < 1;
}


bool EventUpValInfo__IsEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipSvtId > 0;
}


void EventUpValInfo__RemoveDropItem(EventUpValInfo_o *this, int32_t funcId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  _BOOL8 v6; // x0
  _DWORD *monitor; // x9
  System_Collections_Generic_List_object__o *v8; // x0
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C42B1D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
    byte_4C42B1D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    dropList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v10 = v9;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v10.fields._current )
      sub_1C372B4(v6);
    monitor = v10.fields._current[1].monitor;
    if ( !monitor )
      sub_1C372B4(v6);
    if ( monitor[4] == funcId )
    {
      v8 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v8 )
        sub_1C372B4(0);
      System_Collections_Generic_List_object___Remove(
        v8,
        v10.fields._current,
        (const MethodInfo_37A454C *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
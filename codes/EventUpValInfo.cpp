void __fastcall EventUpValInfo___ctor(
        EventUpValInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t npcFlag,
        const MethodInfo *method)
{
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x25
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  EventUpValInfo_Fields *p_fields; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BB42A3 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, setupInfo);
    sub_1C13D24(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v13);
    byte_4BB42A3 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.dropList, (int64_t)v14, v15, v16, v17, v18, v19, v20);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_fields, (int64_t)setupInfo, v22, v23, v24, v25, v26, v27);
  p_fields->svtId = svtId;
  p_fields->limitCount = limitCount;
  p_fields->dispLimitCount = dispLimitCount;
  p_fields->npcFlag = npcFlag;
}


void __fastcall EventUpValInfo__ClearEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.equipSvtId = 0;
}


// local variable allocation has failed, the output may be wrong!
EventDropItemUpValInfo_array *__fastcall EventUpValInfo__GetDropItemList(
        EventUpValInfo_o *this,
        int32_t member,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x19
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x23
  _DWORD *monitor; // x8
  unsigned int v22; // w8
  int32_t equipSvtId; // w22
  EventDropItemUpValInfo_o *v24; // x24
  const MethodInfo *v25; // x4
  __int64 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v39; // x1
  ItemEntity_array *v40; // x24
  __int64 v41; // x8
  unsigned __int64 v42; // x29
  ItemEntity_o *v43; // x26
  EventDropItemUpValInfo_o *v44; // x25
  const MethodInfo *v45; // x4
  __int64 v46; // x0
  __int64 v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB42A5 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&member);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v7);
    sub_1C13D24(&EventDropItemUpValInfo_TypeInfo, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4BB42A5 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_ItemMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v18 )
      break;
    current = v61.fields._current;
    if ( !v61.fields._current )
      sub_1C13F80(v18, v19);
    monitor = v61.fields._current[1].monitor;
    if ( !monitor )
      sub_1C13F80(v18, v19);
    v22 = monitor[6];
    if ( v22 - 111 <= 0x15 && ((1 << (v22 - 111)) & 0x240019) != 0 || v22 <= 0x10 && ((1 << v22) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v24 = (EventDropItemUpValInfo_o *)sub_1C13F70(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v24, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v25);
      if ( !v17 )
        sub_1C13F80(v26, v27);
      items = v17->fields._items;
      v35 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1C13F80(v26, v27);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v24,
          *(const MethodInfo_362D1CC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v24;
        sub_1C13CC8((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v24, v28, v29, v30, v31, v32, v33);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1C13F80(0LL, v19);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_object,
                            (int32_t)v61.fields._current[2].klass,
                            0LL);
      v40 = IndividualityList;
      if ( !IndividualityList )
        sub_1C13F80(0LL, v39);
      v41 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v41 >= 1 )
      {
        v42 = 0LL;
        do
        {
          if ( v42 >= (unsigned int)v41 )
            sub_1C13F88(IndividualityList, v39);
          v43 = v40->m_Items[v42];
          v44 = (EventDropItemUpValInfo_o *)sub_1C13F70(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_40047576(v44, member, (EventDropUpValInfo_o *)current, v43, v45);
          if ( !v17 )
            sub_1C13F80(v46, v47);
          v54 = v17->fields._items;
          v55 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v17->fields._version;
          if ( !v54 )
            sub_1C13F80(v46, v47);
          v56 = v17->fields._size;
          if ( (unsigned int)v56 >= v54->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v44,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &v54->obj.klass + v56;
            v17->fields._size = v56 + 1;
            v57[4] = (Il2CppClass *)v44;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v44, v48, v49, v50, v51, v52, v53);
          }
          LODWORD(v41) = v40->max_length;
          ++v42;
        }
        while ( (__int64)v42 < (int)v41 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v17 )
LABEL_41:
    sub_1C13F80(Instance, v16);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v17,
                                           (const MethodInfo_362ED24 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_4BB42A4 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1C13D24(
                                 &Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__,
                                 method);
    byte_4BB42A4 = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_1C13F80(this, method);
  return dropList->fields._size < 1;
}


bool __fastcall EventUpValInfo__IsEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipSvtId > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValInfo__RemoveDropItem(EventUpValInfo_o *this, int32_t funcId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *dropList; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  _DWORD *monitor; // x9
  System_Collections_Generic_List_object__o *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BB42A6 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, *(_QWORD *)&funcId);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__, v8);
    byte_4BB42A6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C13F80(0LL, *(_QWORD *)&funcId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    dropList,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v15.fields._current )
      sub_1C13F80(v10, v11);
    monitor = v15.fields._current[1].monitor;
    if ( !monitor )
      sub_1C13F80(v10, v11);
    if ( monitor[4] == funcId )
    {
      v13 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v13 )
        sub_1C13F80(0LL, v11);
      System_Collections_Generic_List_object___Remove(
        v13,
        v15.fields._current,
        (const MethodInfo_362E6F4 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
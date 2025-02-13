void __fastcall EventUpValInfo___ctor(
        EventUpValInfo_o *this,
        EventUpValSetupInfo_o *setupInfo,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        int32_t npcFlag,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v13; // x25
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  EventUpValInfo_Fields *p_fields; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BDC108 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    byte_4BDC108 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dropList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_fields, (int64_t)setupInfo, v21, v22, v23, v24, v25, v26);
  p_fields->svtId = svtId;
  p_fields->limitCount = limitCount;
  p_fields->dispLimitCount = dispLimitCount;
  p_fields->npcFlag = npcFlag;
}


void __fastcall EventUpValInfo__ClearEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  this->fields.equipSvtId = 0;
}


EventDropItemUpValInfo_array *__fastcall EventUpValInfo__GetDropItemList(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v29; // x1
  ItemEntity_array *v30; // x24
  __int64 v31; // x8
  unsigned __int64 v32; // x29
  ItemEntity_o *v33; // x26
  EventDropItemUpValInfo_o *v34; // x25
  const MethodInfo *v35; // x4
  __int64 v36; // x0
  __int64 v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BDC10A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C21E38(&EventDropItemUpValInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC10A = 1;
  }
  memset(&v51, 0, sizeof(v51));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ItemMaster___);
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v51,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v8 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1C22094(v8, v9);
    monitor = v51.fields._current[1].monitor;
    if ( !monitor )
      sub_1C22094(v8, v9);
    v12 = monitor[6];
    if ( v12 - 111 <= 0x15 && ((1 << (v12 - 111)) & 0x240019) != 0 || v12 <= 0x10 && ((1 << v12) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v14 = (EventDropItemUpValInfo_o *)sub_1C22084(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v14, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v15);
      if ( !v7 )
        sub_1C22094(v16, v17);
      items = v7->fields._items;
      v25 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C22094(v16, v17);
      size = v7->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v14,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v14;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)v14, v18, v19, v20, v21, v22, v23);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1C22094(0LL, v9);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_object,
                            (int32_t)v51.fields._current[2].klass,
                            0LL);
      v30 = IndividualityList;
      if ( !IndividualityList )
        sub_1C22094(0LL, v29);
      v31 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v31 >= 1 )
      {
        v32 = 0LL;
        do
        {
          if ( v32 >= (unsigned int)v31 )
            sub_1C2209C(IndividualityList, v29);
          v33 = v30->m_Items[v32];
          v34 = (EventDropItemUpValInfo_o *)sub_1C22084(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_40148704(v34, member, (EventDropUpValInfo_o *)current, v33, v35);
          if ( !v7 )
            sub_1C22094(v36, v37);
          v44 = v7->fields._items;
          v45 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v7->fields._version;
          if ( !v44 )
            sub_1C22094(v36, v37);
          v46 = v7->fields._size;
          if ( (unsigned int)v46 >= v44->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              (Il2CppObject *)v34,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
          }
          else
          {
            v47 = &v44->obj.klass + v46;
            v7->fields._size = v46 + 1;
            v47[4] = (Il2CppClass *)v34;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v34, v38, v39, v40, v41, v42, v43);
          }
          LODWORD(v31) = v30->max_length;
          ++v32;
        }
        while ( (__int64)v32 < (int)v31 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v7 )
LABEL_41:
    sub_1C22094(Instance, v6);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v7,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_4BDC109 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__);
    byte_4BDC109 = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_1C22094(this, method);
  return dropList->fields._size < 1;
}


bool __fastcall EventUpValInfo__IsEquipSvtId(EventUpValInfo_o *this, const MethodInfo *method)
{
  return this->fields.equipSvtId > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventUpValInfo__RemoveDropItem(EventUpValInfo_o *this, int32_t funcId, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *dropList; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  _DWORD *monitor; // x9
  System_Collections_Generic_List_object__o *v9; // x0
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDC10B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
    byte_4BDC10B = 1;
  }
  memset(&v11, 0, sizeof(v11));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1C22094(0LL, *(_QWORD *)&funcId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    dropList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v11 = v10;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v11.fields._current )
      sub_1C22094(v6, v7);
    monitor = v11.fields._current[1].monitor;
    if ( !monitor )
      sub_1C22094(v6, v7);
    if ( monitor[4] == funcId )
    {
      v9 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v9 )
        sub_1C22094(0LL, v7);
      System_Collections_Generic_List_object___Remove(
        v9,
        v11.fields._current,
        (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
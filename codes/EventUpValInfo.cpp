// local variable allocation has failed, the output may be wrong!
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
  int32_t v15; // w2
  int32_t v16; // w3
  EventUpValInfo_Fields *p_fields; // x22
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FBFF5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, setupInfo);
    sub_1B640C8(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v13);
    byte_49FBFF5 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventDropUpValInfo__TypeInfo,
                                                       setupInfo,
                                                       *(_QWORD *)&svtId);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.dropList, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)setupInfo, v18, v19);
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
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *current; // x23
  _DWORD *monitor; // x8
  unsigned int v24; // w8
  int32_t equipSvtId; // w22
  EventDropItemUpValInfo_o *v26; // x24
  const MethodInfo *v27; // x4
  __int64 v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  ItemEntity_array *v38; // x24
  __int64 v39; // x8
  unsigned __int64 v40; // x29
  ItemEntity_o *v41; // x26
  EventDropItemUpValInfo_o *v42; // x25
  const MethodInfo *v43; // x4
  __int64 v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FBFF7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&member);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v7);
    sub_1B640C8(&EventDropItemUpValInfo_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FBFF7 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v19 )
      break;
    current = v54.fields._current;
    if ( !v54.fields._current )
      sub_1B64324(v19);
    monitor = v54.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64324(v19);
    v24 = monitor[6];
    if ( v24 - 111 <= 0x15 && ((1 << (v24 - 111)) & 0x240019) != 0 || v24 <= 0x10 && ((1 << v24) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v26 = (EventDropItemUpValInfo_o *)sub_1B64314(EventDropItemUpValInfo_TypeInfo, v20, v21);
      EventDropItemUpValInfo___ctor(v26, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v27);
      if ( !v18 )
        sub_1B64324(v28);
      items = v18->fields._items;
      v32 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1B64324(v28);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v26,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v26, v29, v30);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1B64324(0LL);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_object,
                            (int32_t)v54.fields._current[2].klass,
                            0LL);
      v38 = IndividualityList;
      if ( !IndividualityList )
        sub_1B64324(0LL);
      v39 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v39 >= 1 )
      {
        v40 = 0LL;
        do
        {
          if ( v40 >= (unsigned int)v39 )
            sub_1B6432C(IndividualityList, v36);
          v41 = v38->m_Items[v40];
          v42 = (EventDropItemUpValInfo_o *)sub_1B64314(EventDropItemUpValInfo_TypeInfo, v36, v37);
          EventDropItemUpValInfo___ctor_38571828(v42, member, (EventDropUpValInfo_o *)current, v41, v43);
          if ( !v18 )
            sub_1B64324(v44);
          v47 = v18->fields._items;
          v48 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v18->fields._version;
          if ( !v47 )
            sub_1B64324(v44);
          v49 = v18->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v42,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            v18->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v42;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v42, v45, v46);
          }
          LODWORD(v39) = v38->max_length;
          ++v40;
        }
        while ( (__int64)v40 < (int)v39 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v18 )
LABEL_41:
    sub_1B64324(Instance);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v18,
                                           (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_49FBFF6 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1B640C8(
                                 &Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__,
                                 method);
    byte_49FBFF6 = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_1B64324(this);
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
  _DWORD *monitor; // x9
  System_Collections_Generic_List_object__o *v12; // x0
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_49FBFF8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, *(_QWORD *)&funcId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__, v8);
    byte_49FBFF8 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    dropList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v14,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v14.fields._current )
      sub_1B64324(v10);
    monitor = v14.fields._current[1].monitor;
    if ( !monitor )
      sub_1B64324(v10);
    if ( monitor[4] == funcId )
    {
      v12 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v12 )
        sub_1B64324(0LL);
      System_Collections_Generic_List_object___Remove(
        v12,
        v14.fields._current,
        (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
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
  const MethodInfo *v16; // x3
  EventUpValInfo_Fields *p_fields; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4B01BB1 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, setupInfo);
    sub_1BC3008(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v13);
    byte_4B01BB1 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v14;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.dropList, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1BC2FAC((CGThumbnailListItem_o *)p_fields, (int32_t)setupInfo, v18, v19);
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
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  ItemEntity_array *v37; // x24
  __int64 v38; // x8
  unsigned __int64 v39; // x29
  ItemEntity_o *v40; // x26
  EventDropItemUpValInfo_o *v41; // x25
  const MethodInfo *v42; // x4
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B01BB3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&member);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v7);
    sub_1BC3008(&EventDropItemUpValInfo_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B01BB3 = 1;
  }
  memset(&v54, 0, sizeof(v54));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ItemMaster___);
  v17 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v53,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v54 = v53;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v54,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v18 )
      break;
    current = v54.fields._current;
    if ( !v54.fields._current )
      sub_1BC3264(v18, v19);
    monitor = v54.fields._current[1].monitor;
    if ( !monitor )
      sub_1BC3264(v18, v19);
    v22 = monitor[6];
    if ( v22 - 111 <= 0x15 && ((1 << (v22 - 111)) & 0x240019) != 0 || v22 <= 0x10 && ((1 << v22) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v24 = (EventDropItemUpValInfo_o *)sub_1BC3254(EventDropItemUpValInfo_TypeInfo);
      EventDropItemUpValInfo___ctor(v24, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v25);
      if ( !v17 )
        sub_1BC3264(v26, v27);
      items = v17->fields._items;
      v31 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v17->fields._version;
      if ( !items )
        sub_1BC3264(v26, v27);
      size = v17->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v17,
          (Il2CppObject *)v24,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v17->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v24;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v24, v28, v29);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1BC3264(0LL, v19);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_object,
                            (int32_t)v54.fields._current[2].klass,
                            0LL);
      v37 = IndividualityList;
      if ( !IndividualityList )
        sub_1BC3264(0LL, v35);
      v38 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v38 >= 1 )
      {
        v39 = 0LL;
        do
        {
          if ( v39 >= (unsigned int)v38 )
            sub_1BC326C(IndividualityList, v35, v36);
          v40 = v37->m_Items[v39];
          v41 = (EventDropItemUpValInfo_o *)sub_1BC3254(EventDropItemUpValInfo_TypeInfo);
          EventDropItemUpValInfo___ctor_40735116(v41, member, (EventDropUpValInfo_o *)current, v40, v42);
          if ( !v17 )
            sub_1BC3264(v43, v44);
          v47 = v17->fields._items;
          v48 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v17->fields._version;
          if ( !v47 )
            sub_1BC3264(v43, v44);
          v49 = v17->fields._size;
          if ( (unsigned int)v49 >= v47->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              (Il2CppObject *)v41,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &v47->obj.klass + v49;
            v17->fields._size = v49 + 1;
            v50[4] = (Il2CppClass *)v41;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v41, v45, v46);
          }
          LODWORD(v38) = v37->max_length;
          ++v39;
        }
        while ( (__int64)v39 < (int)v38 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v54,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v17 )
LABEL_41:
    sub_1BC3264(Instance, v16);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v17,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  EventUpValInfo_o *v2; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v2 = this;
  if ( (byte_4B01BB2 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1BC3008(
                                 &Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__,
                                 method);
    byte_4B01BB2 = 1;
  }
  dropList = v2->fields.dropList;
  if ( !dropList )
    sub_1BC3264(this, method);
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

  if ( (byte_4B01BB4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, *(_QWORD *)&funcId);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__, v8);
    byte_4B01BB4 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1BC3264(0LL, *(_QWORD *)&funcId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    dropList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v15 = v14;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v10 )
      break;
    if ( !v15.fields._current )
      sub_1BC3264(v10, v11);
    monitor = v15.fields._current[1].monitor;
    if ( !monitor )
      sub_1BC3264(v10, v11);
    if ( monitor[4] == funcId )
    {
      v13 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v13 )
        sub_1BC3264(0LL, v11);
      System_Collections_Generic_List_object___Remove(
        v13,
        v15.fields._current,
        (const MethodInfo_36A2368 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
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
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *v15; // x25
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  EventUpValInfo_Fields *p_fields; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B15DC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__, setupInfo, *(_QWORD *)&svtId);
    sub_1BCA7E0(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo, v13, v14);
    byte_4B15DC1 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventDropUpValInfo__TypeInfo,
                                                       setupInfo,
                                                       *(_QWORD *)&svtId,
                                                       *(_QWORD *)&limitCount);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  this->fields.dropList = (struct System_Collections_Generic_List_EventDropUpValInfo__o *)v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.dropList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.setupInfo = setupInfo;
  p_fields = &this->fields;
  sub_1BCA784((PartyOrganizationUtility_o *)p_fields, (int64_t)setupInfo, v23, v24, v25, v26, v27, v28);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_object__o *v30; // x19
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Il2CppObject *current; // x23
  _DWORD *monitor; // x8
  unsigned int v37; // w8
  int32_t equipSvtId; // w22
  EventDropItemUpValInfo_o *v39; // x24
  const MethodInfo *v40; // x4
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  ItemEntity_array *IndividualityList; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  ItemEntity_array *v57; // x24
  __int64 v58; // x8
  unsigned __int64 v59; // x29
  ItemEntity_o *v60; // x26
  EventDropItemUpValInfo_o *v61; // x25
  const MethodInfo *v62; // x4
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  ItemMaster_o *MasterData_object; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B15DC3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ItemMaster___, *(_QWORD *)&member, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v9, v10);
    sub_1BCA7E0(&EventDropItemUpValInfo_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    byte_4B15DC3 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  MasterData_object = (ItemMaster_o *)DataManager__GetMasterData_object_(
                                        Instance,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ItemMaster___);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventDropItemUpValInfo__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo___ctor__);
  Instance = (DataManager_o *)this->fields.dropList;
  if ( !Instance )
    goto LABEL_41;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v77,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v78 = v77;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v78,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v31 )
      break;
    current = v78.fields._current;
    if ( !v78.fields._current )
      sub_1BCAA3C(v31, v32);
    monitor = v78.fields._current[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(v31, v32);
    v37 = monitor[6];
    if ( v37 - 111 <= 0x15 && ((1 << (v37 - 111)) & 0x240019) != 0 || v37 <= 0x10 && ((1 << v37) & 0x10082) != 0 )
    {
      equipSvtId = this->fields.equipSvtId;
      v39 = (EventDropItemUpValInfo_o *)sub_1BCAA2C(EventDropItemUpValInfo_TypeInfo, v32, v33, v34);
      EventDropItemUpValInfo___ctor(v39, member, (EventDropUpValInfo_o *)current, equipSvtId > 0, v40);
      if ( !v30 )
        sub_1BCAA3C(v41, v42);
      items = v30->fields._items;
      v50 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
      ++v30->fields._version;
      if ( !items )
        sub_1BCAA3C(v41, v42);
      size = v30->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)v39,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        v30->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v39;
        sub_1BCA784((PartyOrganizationUtility_o *)(v52 + 4), (int64_t)v39, v43, v44, v45, v46, v47, v48);
      }
    }
    else
    {
      if ( !MasterData_object )
        sub_1BCAA3C(0LL, v32);
      IndividualityList = ItemMaster__GetIndividualityList(
                            MasterData_object,
                            (int32_t)v78.fields._current[2].klass,
                            0LL);
      v57 = IndividualityList;
      if ( !IndividualityList )
        sub_1BCAA3C(0LL, v54);
      v58 = *(_QWORD *)&IndividualityList->max_length;
      if ( (int)v58 >= 1 )
      {
        v59 = 0LL;
        do
        {
          if ( v59 >= (unsigned int)v58 )
            sub_1BCAA44(IndividualityList, v54);
          v60 = v57->m_Items[v59];
          v61 = (EventDropItemUpValInfo_o *)sub_1BCAA2C(EventDropItemUpValInfo_TypeInfo, v54, v55, v56);
          EventDropItemUpValInfo___ctor_39608560(v61, member, (EventDropUpValInfo_o *)current, v60, v62);
          if ( !v30 )
            sub_1BCAA3C(v63, v64);
          v71 = v30->fields._items;
          v72 = Method_System_Collections_Generic_List_EventDropItemUpValInfo__Add__;
          ++v30->fields._version;
          if ( !v71 )
            sub_1BCAA3C(v63, v64);
          v73 = v30->fields._size;
          if ( (unsigned int)v73 >= v71->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v61,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v71->obj.klass + v73;
            v30->fields._size = v73 + 1;
            v74[4] = (Il2CppClass *)v61;
            sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v61, v65, v66, v67, v68, v69, v70);
          }
          LODWORD(v58) = v57->max_length;
          ++v59;
        }
        while ( (__int64)v59 < (int)v58 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v78,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
  if ( !v30 )
LABEL_41:
    sub_1BCAA3C(Instance, v26);
  return (EventDropItemUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                           v30,
                                           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventDropItemUpValInfo__ToArray__);
}


bool __fastcall EventUpValInfo__IsEmpry(EventUpValInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventUpValInfo_o *v3; // x19
  struct System_Collections_Generic_List_EventDropUpValInfo__o *dropList; // x8

  v3 = this;
  if ( (byte_4B15DC2 & 1) == 0 )
  {
    this = (EventUpValInfo_o *)sub_1BCA7E0(
                                 &Method_System_Collections_Generic_List_EventDropUpValInfo__get_Count__,
                                 method,
                                 v2);
    byte_4B15DC2 = 1;
  }
  dropList = v3->fields.dropList;
  if ( !dropList )
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *dropList; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  _DWORD *monitor; // x9
  System_Collections_Generic_List_object__o *v17; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B15DC4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__,
      *(_QWORD *)&funcId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__, v11, v12);
    byte_4B15DC4 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  dropList = (System_Collections_Generic_List_object__o *)this->fields.dropList;
  if ( !dropList )
    sub_1BCAA3C(0LL, *(_QWORD *)&funcId);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    dropList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventDropUpValInfo__GetEnumerator__);
  v19 = v18;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__MoveNext__);
    if ( !v14 )
      break;
    if ( !v19.fields._current )
      sub_1BCAA3C(v14, v15);
    monitor = v19.fields._current[1].monitor;
    if ( !monitor )
      sub_1BCAA3C(v14, v15);
    if ( monitor[4] == funcId )
    {
      v17 = (System_Collections_Generic_List_object__o *)this->fields.dropList;
      if ( !v17 )
        sub_1BCAA3C(0LL, v15);
      System_Collections_Generic_List_object___Remove(
        v17,
        v19.fields._current,
        (const MethodInfo_35A3184 *)Method_System_Collections_Generic_List_EventDropUpValInfo__Remove__);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventDropUpValInfo__Dispose__);
}


void __fastcall EventUpValInfo__SetEquipSvtId(EventUpValInfo_o *this, int32_t equipSvtId, const MethodInfo *method)
{
  this->fields.equipSvtId = equipSvtId;
}
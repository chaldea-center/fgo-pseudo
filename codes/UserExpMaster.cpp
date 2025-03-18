void __fastcall UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22CF5 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__, method);
    byte_4C22CF5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


System_Collections_Generic_List_UserExpEntity__o *__fastcall UserExpMaster__GetCondExpEntityList(
        UserExpMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v24; // x8
  __int64 v25; // x9
  int32_t *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x8
  struct System_Object_array *items; // x9
  _QWORD *v38; // x10
  __int64 size; // x11
  Il2CppClass **v40; // x0
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  UserExpMaster___c_c *v45; // x8
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v47; // x21
  struct UserExpMaster___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0

  if ( (byte_4C22CF4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__, method);
    sub_1C3B764(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__getEntityList__, v3);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___, v4);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToList_UserExpEntity___, v5);
    sub_1C3B764(&System_Func_UserExpEntity__int__TypeInfo, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserExpEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_UserExpEntity___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_UserExpEntity__TypeInfo, v12);
    sub_1C3B764(&Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__, v13);
    sub_1C3B764(&UserExpMaster___c_TypeInfo, v14);
    byte_4C22CF4 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_UserExpEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_UserExpEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, v16);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v18);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v24 = Enumerator->klass;
    v25 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserExpEntity__c **)v26 - 1) != System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_16;
      }
      v27 = (__int64)&v24->vtable[*v26].method;
    }
    else
    {
LABEL_16:
      v27 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v27)(
            Enumerator,
            *(_QWORD *)(v27 + 8));
    v36 = v28;
    if ( !v28 )
      sub_1C3B9C0(0LL, v29);
    if ( *(_DWORD *)(v28 + 56) )
    {
      if ( !v15 )
        sub_1C3B9C0(v28, v29);
      items = v15->fields._items;
      v38 = Method_System_Collections_Generic_List_UserExpEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1C3B9C0(v28, v29);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)v28,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_1C3B708((PartyOrganizationUtility_o *)(v40 + 4), v36, v30, v31, v32, v33, v34, v35);
      }
    }
  }
  v41 = Enumerator->klass;
  v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v43 = &v41->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_29;
    }
    v44 = (__int64)&v41->vtable[*v43].method;
  }
  else
  {
LABEL_29:
    v44 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v44)(Enumerator, *(_QWORD *)(v44 + 8));
  v45 = UserExpMaster___c_TypeInfo;
  if ( !UserExpMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserExpMaster___c_TypeInfo);
    v45 = UserExpMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v45->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = UserExpMaster___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v45->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_UserExpEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v47, Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__, 0LL);
    static_fields = UserExpMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserExpEntity__int__o *)_9__3_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v49, v50, v51, v52, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_301A1E4 *)Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___);
  return (System_Collections_Generic_List_UserExpEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v55,
                                                               (const MethodInfo_302EAAC *)Method_System_Linq_Enumerable_ToList_UserExpEntity___);
}


int32_t __fastcall UserExpMaster__GetLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  UserExpMaster_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v9; // x1
  int32_t lv; // w22
  System_Collections_Generic_List_object__o *CondExpEntityList; // x0
  __int64 v12; // x1
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x25
  int32_t monitor_high; // w19
  int32_t monitor; // w21
  int64_t klass_low; // x20
  int32_t v19; // w19
  BalanceConfig_c *v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4C22CF2 & 1) == 0 )
  {
    sub_1C3B764(&BalanceConfig_TypeInfo, method);
    sub_1C3B764(&CondType_TypeInfo, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__get_Current__, v6);
    this = (UserExpMaster_o *)sub_1C3B764(&Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__, v7);
    byte_4C22CF2 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( SelfUserGame )
  {
    lv = SelfUserGame->fields.lv;
    CondExpEntityList = (System_Collections_Generic_List_object__o *)UserExpMaster__GetCondExpEntityList(v2, v9);
    if ( !CondExpEntityList )
      sub_1C3B9C0(0LL, v12);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      CondExpEntityList,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v23,
              (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__);
      if ( !v13 )
        break;
      current = v23.fields._current;
      if ( !v23.fields._current )
        sub_1C3B9C0(v13, v14);
      if ( SLODWORD(v23.fields._current[1].klass) >= lv )
      {
        monitor = (int32_t)v23.fields._current[3].monitor;
        monitor_high = HIDWORD(v23.fields._current[3].monitor);
        klass_low = SLODWORD(v23.fields._current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
        {
          v19 = LODWORD(current[1].klass) - 1;
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v23,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
          return v19;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
  }
  v20 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v20 = BalanceConfig_TypeInfo;
  }
  return v20->static_fields->UserLevelMax;
}


// local variable allocation has failed, the output may be wrong!
UserExpEntity_o *__fastcall UserExpMaster__getEntityFromLevel(
        UserExpMaster_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4C22CF1 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, *(_QWORD *)&lv);
    byte_4C22CF1 = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              lv,
                              (const MethodInfo_329AE48 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
}


int32_t __fastcall UserExpMaster__getLevel(
        UserExpMaster_o *this,
        int64_t exp,
        int32_t start_lv,
        const MethodInfo *method)
{
  int32_t LevelMax; // w0
  int32_t v8; // w22
  Il2CppObject *Entity; // x0
  int32_t v10; // w23

  if ( (byte_4C22CF3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__, exp);
    byte_4C22CF3 = 1;
  }
  LevelMax = UserExpMaster__GetLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= start_lv )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               start_lv,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    if ( Entity )
    {
      v10 = start_lv + 1;
      do
      {
        start_lv = (int32_t)Entity[1].klass;
        if ( (__int64)Entity[1].monitor > exp )
          break;
        if ( v10 > v8 )
          break;
        Entity = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                   v10++,
                   (const MethodInfo_329AE48 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


void __fastcall UserExpMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C22CF6 & 1) == 0 )
  {
    sub_1C3B764(&UserExpMaster___c_TypeInfo, v1);
    byte_4C22CF6 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(UserExpMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  UserExpMaster___c_TypeInfo->static_fields->__9 = (struct UserExpMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)UserExpMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall UserExpMaster___c___ctor(UserExpMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall UserExpMaster___c___GetCondExpEntityList_b__3_0(
        UserExpMaster___c_o *this,
        UserExpEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C3B9C0(this, 0LL);
  return a->fields.lv;
}
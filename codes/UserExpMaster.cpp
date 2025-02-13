void __fastcall UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDD29A & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
    byte_4BDD29A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


System_Collections_Generic_List_UserExpEntity__o *__fastcall UserExpMaster__GetCondExpEntityList(
        UserExpMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x8
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  UserExpMaster___c_c *v33; // x8
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v35; // x21
  struct UserExpMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0

  if ( (byte_4BDD299 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__);
    sub_1C21E38(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__getEntityList__);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_UserExpEntity___);
    sub_1C21E38(&System_Func_UserExpEntity__int__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserExpEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserExpEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_UserExpEntity__TypeInfo);
    sub_1C21E38(&Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__);
    sub_1C21E38(&UserExpMaster___c_TypeInfo);
    byte_4BDD299 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_UserExpEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_UserExpEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C22094(0LL, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C22094(0LL, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C73E18(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserExpEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1C73E18(Enumerator, System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8));
    v24 = v16;
    if ( !v16 )
      sub_1C22094(0LL, v17);
    if ( *(_DWORD *)(v16 + 56) )
    {
      if ( !v3 )
        sub_1C22094(v16, v17);
      items = v3->fields._items;
      v26 = Method_System_Collections_Generic_List_UserExpEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C22094(v16, v17);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v16,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v28 + 4), v24, v18, v19, v20, v21, v22, v23);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_29;
    }
    v32 = (__int64)&v29->vtable[*v31].method;
  }
  else
  {
LABEL_29:
    v32 = sub_1C73E18(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  v33 = UserExpMaster___c_TypeInfo;
  if ( !UserExpMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserExpMaster___c_TypeInfo);
    v33 = UserExpMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v33->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = UserExpMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_UserExpEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v35, Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__, 0LL);
    static_fields = UserExpMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserExpEntity__int__o *)_9__3_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v37, v38, v39, v40, v41, v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_2FD8EDC *)Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___);
  return (System_Collections_Generic_List_UserExpEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v43,
                                                               (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_UserExpEntity___);
}


int32_t __fastcall UserExpMaster__GetLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1
  int32_t lv; // w22
  System_Collections_Generic_List_object__o *CondExpEntityList; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x25
  int32_t monitor_high; // w19
  int32_t monitor; // w21
  int64_t klass_low; // x20
  int32_t v14; // w19
  BalanceConfig_c *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDD297 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__);
    byte_4BDD297 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( SelfUserGame )
  {
    lv = SelfUserGame->fields.lv;
    CondExpEntityList = (System_Collections_Generic_List_object__o *)UserExpMaster__GetCondExpEntityList(this, v4);
    if ( !CondExpEntityList )
      sub_1C22094(0LL, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      CondExpEntityList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__);
    v18 = v17;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v18,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__);
      if ( !v8 )
        break;
      current = v18.fields._current;
      if ( !v18.fields._current )
        sub_1C22094(v8, v9);
      if ( SLODWORD(v18.fields._current[1].klass) >= lv )
      {
        monitor = (int32_t)v18.fields._current[3].monitor;
        monitor_high = HIDWORD(v18.fields._current[3].monitor);
        klass_low = SLODWORD(v18.fields._current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0LL, 0LL) )
        {
          v14 = LODWORD(current[1].klass) - 1;
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v18,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
          return v14;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v18,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v15 = BalanceConfig_TypeInfo;
  }
  return v15->static_fields->UserLevelMax;
}


UserExpEntity_o *__fastcall UserExpMaster__getEntityFromLevel(
        UserExpMaster_o *this,
        int32_t lv,
        const MethodInfo *method)
{
  if ( (byte_4BDD296 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_4BDD296 = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              lv,
                              (const MethodInfo_325BDC8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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

  if ( (byte_4BDD298 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_4BDD298 = 1;
  }
  LevelMax = UserExpMaster__GetLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= start_lv )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               start_lv,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


void __fastcall UserExpMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD29B & 1) == 0 )
  {
    sub_1C21E38(&UserExpMaster___c_TypeInfo);
    byte_4BDD29B = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(UserExpMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  UserExpMaster___c_TypeInfo->static_fields->__9 = (struct UserExpMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)UserExpMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return a->fields.lv;
}
void UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38844 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
    byte_4C38844 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_3394514 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


System_Collections_Generic_List_UserExpEntity__o *UserExpMaster__GetCondExpEntityList(
        UserExpMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  struct System_Object_array *items; // x9
  _QWORD *v19; // x10
  __int64 size; // x11
  Il2CppClass **v21; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  UserExpMaster___c_c *v26; // x8
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v28; // x21
  struct UserExpMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_4C38843 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__);
    sub_1C32C20(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__getEntityList__);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_UserExpEntity___);
    sub_1C32C20(&System_Func_UserExpEntity__int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserExpEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_UserExpEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_UserExpEntity__TypeInfo);
    sub_1C32C20(&Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__);
    sub_1C32C20(&UserExpMaster___c_TypeInfo);
    byte_4C38843 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_UserExpEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_UserExpEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserExpEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    v17 = v14;
    if ( !v14 )
      sub_1C32E7C(0);
    if ( *(_DWORD *)(v14 + 56) )
    {
      if ( !v3 )
        sub_1C32E7C(v14);
      items = v3->fields._items;
      v19 = Method_System_Collections_Generic_List_UserExpEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C32E7C(v14);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v14,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1C32BC4((CGThumbnailListItem_o *)(v21 + 4), v17, v15, v16);
      }
    }
  }
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_29;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_29:
    v25 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  v26 = UserExpMaster___c_TypeInfo;
  if ( !UserExpMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UserExpMaster___c_TypeInfo);
    v26 = UserExpMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v26->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = UserExpMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_UserExpEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v28, Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__, 0);
    static_fields = UserExpMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_UserExpEntity__int__o *)_9__3_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___);
  return (System_Collections_Generic_List_UserExpEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v32,
                                                               (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_UserExpEntity___);
}


int32_t UserExpMaster__GetLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  UserExpMaster_o *v2; // x19
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1
  int32_t lv; // w22
  System_Collections_Generic_List_object__o *CondExpEntityList; // x0
  _BOOL8 v7; // x0
  Il2CppObject *current; // x25
  int32_t monitor_high; // w19
  int32_t monitor; // w21
  int64_t klass_low; // x20
  int32_t v12; // w19
  BalanceConfig_c *v13; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_4C38841 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__get_Current__);
    this = (UserExpMaster_o *)sub_1C32C20(&Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__);
    byte_4C38841 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( SelfUserGame )
  {
    lv = SelfUserGame->fields.lv;
    CondExpEntityList = (System_Collections_Generic_List_object__o *)UserExpMaster__GetCondExpEntityList(v2, v4);
    if ( !CondExpEntityList )
      sub_1C32E7C(0);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      CondExpEntityList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v16,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__);
      if ( !v7 )
        break;
      current = v16.fields._current;
      if ( !v16.fields._current )
        sub_1C32E7C(v7);
      if ( SLODWORD(v16.fields._current[1].klass) >= lv )
      {
        monitor = (int32_t)v16.fields._current[3].monitor;
        monitor_high = HIDWORD(v16.fields._current[3].monitor);
        klass_low = SLODWORD(v16.fields._current[4].klass);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsOpen(monitor, monitor_high, klass_low, 0, 0, 0) )
        {
          v12 = LODWORD(current[1].klass) - 1;
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v16,
            (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
          return v12;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
  }
  v13 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  return v13->static_fields->UserLevelMax;
}


UserExpEntity_o *UserExpMaster__getEntityFromLevel(UserExpMaster_o *this, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4C38840 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_4C38840 = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              lv,
                              (const MethodInfo_3396838 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
}


int32_t UserExpMaster__getLevel(UserExpMaster_o *this, int64_t exp, int32_t start_lv, const MethodInfo *method)
{
  int32_t LevelMax; // w0
  int32_t v8; // w22
  Il2CppObject *Entity; // x0
  int32_t v10; // w23

  if ( (byte_4C38842 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_4C38842 = 1;
  }
  LevelMax = UserExpMaster__GetLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= start_lv )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               start_lv,
               (const MethodInfo_3396838 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
                   (const MethodInfo_3396838 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


void UserExpMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38845 & 1) == 0 )
  {
    sub_1C32C20(&UserExpMaster___c_TypeInfo);
    byte_4C38845 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(UserExpMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserExpMaster___c_TypeInfo->static_fields->__9 = (struct UserExpMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)UserExpMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void UserExpMaster___c___ctor(UserExpMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t UserExpMaster___c___GetCondExpEntityList_b__3_0(
        UserExpMaster___c_o *this,
        UserExpEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C32E7C(this);
  return a->fields.lv;
}
void UserExpMaster___ctor(UserExpMaster_o *this, const MethodInfo *method)
{
  if ( (byte_597174E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
    byte_597174E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    65,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int___ctor__);
}


System_Collections_Generic_List_UserExpEntity__o *UserExpMaster__GetCondExpEntityList(
        UserExpMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  UserExpMaster___c_c *v35; // x0
  struct UserExpMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v38; // x21
  struct UserExpMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_IEnumerator_T__o *v48; // [xsp+18h] [xbp-38h]

  if ( (byte_597174D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__);
    sub_2213A60(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__getEntityList__);
    sub_2213A60(&Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToList_UserExpEntity___);
    sub_2213A60(&System_Func_UserExpEntity__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UserExpEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserExpEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UserExpEntity__TypeInfo);
    sub_2213A60(&Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__);
    sub_2213A60(&UserExpMaster___c_TypeInfo);
    byte_597174D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UserExpEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UserExpEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v4);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_UserExpEntity__GetEnumerator__);
  v48 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v7);
  for ( i = Enumerator; ; i = v48 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
      break;
    if ( !v48 )
      sub_2213CDC(v13, v14);
    v15 = v48->klass;
    v16 = *(unsigned __int16 *)&v48->klass->_2.rank;
    if ( *(_WORD *)&v48->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_UserExpEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_224BC3C(v48, System_Collections_Generic_IEnumerator_UserExpEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v48,
            *(_QWORD *)(v18 + 8));
    v26 = v19;
    if ( !v19 )
      sub_2213CDC(0, 0);
    if ( *(_DWORD *)(v19 + 56) )
    {
      if ( !v3
        || (items = v3->fields._items,
            v28 = Method_System_Collections_Generic_List_UserExpEntity__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(v19, v19);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          (Il2CppObject *)v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  if ( v48 )
  {
    v31 = v48->klass;
    v32 = *(unsigned __int16 *)&v48->klass->_2.rank;
    if ( *(_WORD *)&v48->klass->_2.rank )
    {
      v33 = &v31->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_34;
      }
      v34 = (__int64)&v31->vtable[*v33];
    }
    else
    {
LABEL_34:
      v34 = sub_224BC3C(v48, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(v48, *(_QWORD *)(v34 + 8));
  }
  v35 = UserExpMaster___c_TypeInfo;
  if ( !*(&UserExpMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UserExpMaster___c_TypeInfo, v14);
    v35 = UserExpMaster___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v35, v14);
      static_fields = UserExpMaster___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_UserExpEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v38, Method_UserExpMaster___c__GetCondExpEntityList_b__3_0__, 0);
    v39 = UserExpMaster___c_TypeInfo->static_fields;
    v39->__9__3_0 = (struct System_Func_UserExpEntity__int__o *)_9__3_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v39->__9__3_0, (int32_t)_9__3_0, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_3888BA0 *)Method_System_Linq_Enumerable_OrderBy_UserExpEntity__int___);
  return (System_Collections_Generic_List_UserExpEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                               v46,
                                                               (const MethodInfo_38A0DF0 *)Method_System_Linq_Enumerable_ToList_UserExpEntity___);
}


int32_t UserExpMaster__GetLevelMax(UserExpMaster_o *this, const MethodInfo *method)
{
  UserExpMaster_o *v2; // x19
  UserGameEntity_o *SelfUserGame; // x0
  const MethodInfo *v4; // x1
  int32_t lv; // w22
  System_Collections_Generic_List_object__o *CondExpEntityList; // x0
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x25
  int64_t v11; // x21
  int32_t v12; // w19
  int32_t v13; // w20
  int32_t v14; // w19
  BalanceConfig_c *v15; // x0
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+18h] [xbp-58h] BYREF

  v2 = this;
  if ( (byte_597174B & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserExpEntity__get_Current__);
    this = (UserExpMaster_o *)sub_2213A60(&Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__);
    byte_597174B = 1;
  }
  memset(&v17, 0, sizeof(v17));
  SelfUserGame = UserGameMaster__getSelfUserGame((const MethodInfo *)this);
  if ( SelfUserGame )
  {
    lv = SelfUserGame->fields.lv;
    CondExpEntityList = (System_Collections_Generic_List_object__o *)UserExpMaster__GetCondExpEntityList(v2, v4);
    if ( !CondExpEntityList )
      sub_2213CDC(0, v7);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      CondExpEntityList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserExpEntity__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__MoveNext__);
      if ( !v8 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current )
        sub_2213CDC(v8, v9);
      if ( *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&word_10) >= lv )
      {
        v11 = *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&dword_40);
        v12 = *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&word_38);
        v13 = *(_DWORD *)((char *)&v17.fields._current->klass + (unsigned __int64)&word_38 + 4);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v9);
        if ( !CondType__IsOpen(v12, v13, v11, 0, 0, 0) )
        {
          v14 = *(_DWORD *)((char *)&word_10 + (_QWORD)current) - 1;
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v17,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
          return v14;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserExpEntity__Dispose__);
  }
  v15 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4);
    v15 = BalanceConfig_TypeInfo;
  }
  return v15->static_fields->UserLevelMax;
}


UserExpEntity_o *UserExpMaster__getEntityFromLevel(UserExpMaster_o *this, int32_t lv, const MethodInfo *method)
{
  if ( (byte_597174A & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_597174A = 1;
  }
  return (UserExpEntity_o *)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                              lv,
                              (const MethodInfo_3F10B30 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
}


int32_t UserExpMaster__getLevel(UserExpMaster_o *this, int64_t exp, int32_t start_lv, const MethodInfo *method)
{
  int32_t LevelMax; // w0
  int32_t v8; // w22
  Il2CppObject *Entity; // x0
  int32_t v10; // w23

  if ( (byte_597174C & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
    byte_597174C = 1;
  }
  LevelMax = UserExpMaster__GetLevelMax(this, (const MethodInfo *)exp);
  if ( LevelMax >= start_lv )
  {
    v8 = LevelMax;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               start_lv,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
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
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_UserExpMaster__UserExpEntity__int__GetEntity__);
      }
      while ( Entity );
    }
  }
  return start_lv;
}


void UserExpMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597174F & 1) == 0 )
  {
    sub_2213A60(&UserExpMaster___c_TypeInfo);
    byte_597174F = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(UserExpMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  UserExpMaster___c_TypeInfo->static_fields->__9 = (struct UserExpMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)UserExpMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_2213CDC(this, 0);
  return a->fields.lv;
}
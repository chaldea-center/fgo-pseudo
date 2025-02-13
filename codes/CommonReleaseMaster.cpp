void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC35D & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
    byte_4BDC35D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    293,
    (const MethodInfo_325E55C *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


bool __fastcall CommonReleaseMaster__ContainQuestClear(
        CommonReleaseMaster_o *this,
        int32_t commonReleaseId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v12; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_4BDC362 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C21E38(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C21E38(&Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__);
    sub_1C21E38(&CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
    byte_4BDC362 = 1;
  }
  v7 = sub_1C22084(CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_DWORD *)(v7 + 16) = questId;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v10);
  if ( List )
  {
    v12 = (System_Object_array *)List;
    v13 = (System_Func_object__bool__o *)sub_1C22084(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__49917468(
                     v12,
                     (System_Func_T__bool__o *)v13,
                     (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


bool __fastcall CommonReleaseMaster__ContainQuestClearPhase(
        CommonReleaseMaster_o *this,
        int32_t commonReleaseId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v14; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4BDC361 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C21E38(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C21E38(&Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__);
    sub_1C21E38(&CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
    byte_4BDC361 = 1;
  }
  v9 = sub_1C22084(CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v12);
  if ( List )
  {
    v14 = (System_Object_array *)List;
    v15 = (System_Func_object__bool__o *)sub_1C22084(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)v9,
      Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__49917468(
                     v14,
                     (System_Func_T__bool__o *)v15,
                     (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


void __fastcall CommonReleaseMaster__CreateCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  int64_t v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x23
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  void **v25; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDC363 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_4BDC363 = 1;
  }
  value = 0LL;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.idCache, (int64_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C22094(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v13,
                                                                   (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
        if ( list )
        {
          v14 = (int64_t)list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    *(_DWORD *)(v14 + 16),
                    &value,
                    (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
            {
              v21 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v21,
                (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
              value = (Il2CppObject *)v21;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                *(_DWORD *)(v14 + 16),
                (Il2CppObject *)v21,
                (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v23 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v14,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v25[4] = (void *)v14;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 4), v14, v15, v16, v17, v18, v19, v20);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v13;
                if ( list )
                  continue;
              }
            }
          }
        }
      }
      goto LABEL_19;
    }
  }
}


void __fastcall CommonReleaseMaster__DeleteCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x19

  this->fields.idCache = 0LL;
  p_idCache = &this->fields.idCache;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.idCache, 0LL, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_CommonReleaseEntity__o *__fastcall CommonReleaseMaster__GetCacheById(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDC364 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    byte_4BDC364 = 1;
  }
  value = 0LL;
  CommonReleaseMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C22094(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_CommonReleaseEntity__o *)value;
  }
  else
  {
    return 0LL;
  }
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BDC35B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
    byte_4BDC35B = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3260880 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsContainCondType(
        CommonReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v10; // x3
  int monitor_high; // w8

  if ( (byte_4BDC35F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    byte_4BDC35F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C22094(list, *(_QWORD *)&targetId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v10) )
        {
          return 1;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_13;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsMatch(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t condType,
        int32_t condId,
        int32_t condNum,
        const MethodInfo *method)
{
  bool v8; // w8
  CommonReleaseEntity_array *List; // x0
  __int64 v12; // x1
  CommonReleaseEntity_o *v13; // x8
  CommonReleaseEntity_array *v14; // x19
  const MethodInfo *v15; // x2
  int max_length; // w9
  int v17; // w10
  CommonReleaseEntity_o *v18; // x8
  CommonReleaseEntity_o *v19; // x11

  if ( condType != 113 )
  {
    List = CommonReleaseMaster__getList(this, id, *(const MethodInfo **)&condType);
    if ( List && List->max_length == 1 )
    {
      v13 = List->m_Items[0];
      if ( !v13 )
        goto LABEL_26;
      if ( v13->fields.condType == condType && v13->fields.condId == condId )
        return v13->fields.condNum == condNum;
    }
    return 0;
  }
  if ( id != condId )
  {
    v14 = CommonReleaseMaster__getList(this, id, *(const MethodInfo **)&condType);
    List = CommonReleaseMaster__getList(this, condId, v15);
    if ( !v14 || !List )
      goto LABEL_26;
    max_length = v14->max_length;
    if ( max_length == List->max_length )
    {
      if ( max_length < 1 )
        return 1;
      v17 = 0;
      while ( 1 )
      {
        if ( max_length == v17 )
          sub_1C2209C(List, v12);
        v18 = v14->m_Items[v17];
        if ( !v18 )
          break;
        v19 = List->m_Items[v17];
        if ( !v19
          || v18->fields.condGroup != v19->fields.condGroup
          || v18->fields.condType != v19->fields.condType
          || v18->fields.condId != v19->fields.condId
          || v18->fields.condNum != v19->fields.condNum )
        {
          return 0;
        }
        ++v17;
        v8 = 1;
        if ( max_length == v17 )
          return v8;
      }
LABEL_26:
      sub_1C22094(List, v12);
    }
    return 0;
  }
  return 1;
}


bool __fastcall CommonReleaseMaster__IsOpen(
        CommonReleaseMaster_o *this,
        int32_t id,
        CommonReleaseCondOverwriter_o *overwriter,
        bool isCheckMaterialHistory,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v9; // x19
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *list; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t *current; // x22
  bool v17; // w0
  CommonReleaseCondOverwriter_c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v22; // w23
  int32_t v23; // w25
  int64_t v24; // x24
  char IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__c *v26; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v27; // x22
  unsigned int v28; // w27
  int32_t *v29; // x23
  CommonReleaseCondOverwriter_c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0
  int32_t v34; // w24
  int32_t v35; // w26
  int64_t v36; // x25
  char v37; // w0
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-A0h] BYREF
  bool value; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4BDC360 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C21E38(&CommonReleaseCondOverwriter_TypeInfo);
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
    byte_4BDC360 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  value = 0;
  memset(&v40, 0, sizeof(v40));
  if ( (id & 0x80000000) != 0 )
    goto LABEL_65;
  v9 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v9,
    (const MethodInfo_32A64B0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this->fields.list;
  if ( !list )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) >= 1 )
  {
    list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !list )
      goto LABEL_67;
    if ( BYTE1(list[3].klass) )
    {
      CacheById = (System_Collections_Generic_List_object__o *)CommonReleaseMaster__GetCacheById(this, id, v12);
      if ( !CacheById )
        return (char)CacheById;
      if ( CacheById->fields._size )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v39,
          CacheById,
          (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
        v42 = v39;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
          if ( !v14 )
            break;
          current = (int32_t *)v42.fields._current;
          if ( !v42.fields._current )
            sub_1C22094(v14, v15);
          if ( !v9 )
            sub_1C22094(v14, v15);
          v17 = System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                  v9,
                  (int32_t)v42.fields._current[1].monitor,
                  &value,
                  (const MethodInfo_32A853C *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
          if ( value || !v17 )
          {
            if ( overwriter )
            {
              klass = overwriter->klass;
              v19 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
                {
                  --v19;
                  p_offset += 4;
                  if ( !v19 )
                    goto LABEL_20;
                }
                p_method = (__int64)&klass->vtable[*p_offset].method;
              }
              else
              {
LABEL_20:
                p_method = sub_1C73E18(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
              }
              IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                         overwriter,
                         current,
                         *(_QWORD *)(p_method + 8));
            }
            else
            {
              v23 = current[7];
              v22 = current[8];
              v24 = current[9];
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsOpen = CondType__IsOpen(v23, v22, v24, isCheckMaterialHistory, 0LL, 0LL);
            }
            System_Collections_Generic_Dictionary_int__bool___set_Item(
              v9,
              current[6],
              IsOpen & 1,
              (const MethodInfo_32A6E70 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
        if ( !v9 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v9,
               (const MethodInfo_32A6B30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) > 0 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v9,
                   (const MethodInfo_32A6C90 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
              list,
              (const MethodInfo_397C1EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v40 = v39;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
                      (const MethodInfo_3402414 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v40.fields._current) )
                goto LABEL_62;
            }
LABEL_64:
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
              (const MethodInfo_3402410 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
            goto LABEL_65;
          }
          goto LABEL_67;
        }
        goto LABEL_63;
      }
    }
    else
    {
      list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)CommonReleaseMaster__getList(
                                                                                        this,
                                                                                        id,
                                                                                        v12);
      if ( !list )
        goto LABEL_67;
      v26 = list[1].klass;
      v27 = list;
      if ( v26 )
      {
        if ( (int)v26 >= 1 )
        {
          v28 = 0;
          do
          {
            if ( v28 >= (unsigned int)v26 )
              sub_1C2209C(list, v10);
            v29 = (int32_t *)*((_QWORD *)&v27[1].monitor + (int)v28);
            if ( !v29 || !v9 )
              goto LABEL_67;
            if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                    v9,
                    v29[6],
                    (const MethodInfo_32A7084 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
              || (list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                    v9,
                                                                                                    v29[6],
                                                                                                    (const MethodInfo_32A6DE0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
                  ((unsigned __int8)list & 1) != 0) )
            {
              if ( overwriter )
              {
                v30 = overwriter->klass;
                v31 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
                {
                  v32 = &v30->_1.interfaceOffsets->offset;
                  while ( *((CommonReleaseCondOverwriter_c **)v32 - 1) != CommonReleaseCondOverwriter_TypeInfo )
                  {
                    --v31;
                    v32 += 4;
                    if ( !v31 )
                      goto LABEL_41;
                  }
                  v33 = (__int64)&v30->vtable[*v32].method;
                }
                else
                {
LABEL_41:
                  v33 = sub_1C73E18(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
                }
                v37 = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v33)(
                        overwriter,
                        v29,
                        *(_QWORD *)(v33 + 8));
              }
              else
              {
                v35 = v29[7];
                v34 = v29[8];
                v36 = v29[9];
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                v37 = CondType__IsOpen(v35, v34, v36, isCheckMaterialHistory, 0LL, 0LL);
              }
              System_Collections_Generic_Dictionary_int__bool___set_Item(
                v9,
                v29[6],
                v37 & 1,
                (const MethodInfo_32A6E70 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
            }
            LODWORD(v26) = v27[1].klass;
          }
          while ( (int)++v28 < (int)v26 );
        }
        if ( !v9 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v9,
               (const MethodInfo_32A6B30 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) >= 1 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v9,
                   (const MethodInfo_32A6C90 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
              list,
              (const MethodInfo_397C1EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v40 = v39;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
                      (const MethodInfo_3402414 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v40.fields._current) )
              {
LABEL_62:
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
                  (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
                  (const MethodInfo_3402410 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
                goto LABEL_63;
              }
            }
            goto LABEL_64;
          }
LABEL_67:
          sub_1C22094(list, v10);
        }
        goto LABEL_63;
      }
    }
LABEL_65:
    LOBYTE(CacheById) = 0;
    return (char)CacheById;
  }
LABEL_63:
  LOBYTE(CacheById) = 1;
  return (char)CacheById;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsQuestContain(
        CommonReleaseMaster_o *this,
        int32_t questId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  CommonReleaseEntity_array *List; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  int v8; // w9
  CommonReleaseEntity_o *v9; // x12
  unsigned int condType; // w13

  List = CommonReleaseMaster__getList(this, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  if ( List )
  {
    v7 = *(_QWORD *)&List->max_length;
    if ( v7 && (int)v7 >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = List->m_Items[v8];
        if ( !v9 )
          sub_1C22094(List, v6);
        condType = v9->fields.condType;
        if ( condType <= 0x2E && ((1LL << condType) & 0x400002000002LL) != 0 && v9->fields.condId == questId )
          break;
        if ( (_DWORD)v7 == ++v8 )
          goto LABEL_10;
      }
      LOBYTE(List) = 1;
    }
    else
    {
LABEL_10:
      LOBYTE(List) = 0;
    }
  }
  return (char)List;
}


void __fastcall CommonReleaseMaster__OnListChangedImplementation(
        CommonReleaseMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__TryGetEntity(
        CommonReleaseMaster_o *this,
        CommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BDC35C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
    byte_4BDC35C = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32608CC *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x1
  int64_t list; // x0
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4BDC35E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_4BDC35E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_31F60CC *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v8,
                      (const MethodInfo_31F615C *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( *(_DWORD *)(list + 16) == id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C22094(list, v6);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}


void __fastcall CommonReleaseMaster___c__DisplayClass7_0___ctor(
        CommonReleaseMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CommonReleaseMaster___c__DisplayClass7_0___ContainQuestClearPhase_b__0(
        CommonReleaseMaster___c__DisplayClass7_0_o *this,
        CommonReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C22094(this, 0LL);
  return v->fields.condType == 46
      && v->fields.condId == this->fields.questId
      && v->fields.condNum == this->fields.questPhase;
}


void __fastcall CommonReleaseMaster___c__DisplayClass8_0___ctor(
        CommonReleaseMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CommonReleaseMaster___c__DisplayClass8_0___ContainQuestClear_b__0(
        CommonReleaseMaster___c__DisplayClass8_0_o *this,
        CommonReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C22094(this, 0LL);
  return v->fields.condType == 1 && v->fields.condId == this->fields.questId;
}
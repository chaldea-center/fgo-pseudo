void CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C377CF & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
    byte_4C377CF = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    295,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


bool CommonReleaseMaster__ContainQuestClear(
        CommonReleaseMaster_o *this,
        int32_t commonReleaseId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  const MethodInfo *v9; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v11; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4C377D4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C32C20(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__);
    sub_1C32C20(&CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
    byte_4C377D4 = 1;
  }
  v7 = sub_1C32E6C(CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_DWORD *)(v7 + 16) = questId;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v9);
  if ( List )
  {
    v11 = (System_Object_array *)List;
    v12 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v12,
      (Il2CppObject *)v7,
      Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__,
      0);
    LOBYTE(List) = BasicHelper__Any_object__51144764(
                     v11,
                     (System_Func_T__bool__o *)v12,
                     (const MethodInfo_30C683C *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


bool CommonReleaseMaster__ContainQuestClearPhase(
        CommonReleaseMaster_o *this,
        int32_t commonReleaseId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  const MethodInfo *v11; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4C377D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C32C20(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C32C20(&Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__);
    sub_1C32C20(&CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
    byte_4C377D3 = 1;
  }
  v9 = sub_1C32E6C(CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C32E7C(v10);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v11);
  if ( List )
  {
    v13 = (System_Object_array *)List;
    v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v9,
      Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__,
      0);
    LOBYTE(List) = BasicHelper__Any_object__51144764(
                     v13,
                     (System_Func_T__bool__o *)v14,
                     (const MethodInfo_30C683C *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


void CommonReleaseMaster__CreateCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w21
  System_Collections_ObjectModel_Collection_T__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x23
  Il2CppClass *klass; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  void **v16; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C377D5 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_4C377D5 = 1;
  }
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_33EF348 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C32E7C(list);
    v8 = 0;
    while ( v8 < System_Collections_ObjectModel_Collection_object___get_Count(
                   list,
                   (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v8,
                                                                   (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
        if ( list )
        {
          v9 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v9->fields.items,
                    &value,
                    (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
            {
              v12 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v12,
                (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
              value = (Il2CppObject *)v12;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v9->fields.items,
                (Il2CppObject *)v12,
                (const MethodInfo_33EFD08 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v14 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v9,
                    *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
                }
                else
                {
                  v16 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v16[4] = v9;
                  sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v9, v10, v11);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v8;
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


void CommonReleaseMaster__DeleteCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_CommonReleaseEntity__o *CommonReleaseMaster__GetCacheById(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C377D6 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    byte_4C377D6 = 1;
  }
  value = 0;
  CommonReleaseMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C32E7C(0);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_33F14A8 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_CommonReleaseEntity__o *)value;
  }
  else
  {
    return 0;
  }
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C377CD & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
    byte_4C377CD = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_339B2F0 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


bool CommonReleaseMaster__IsContainCondType(
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

  if ( (byte_4C377D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    byte_4C377D1 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C32E7C(list);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
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
bool CommonReleaseMaster__IsMatch(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t condType,
        int32_t condId,
        int32_t condNum,
        const MethodInfo *method)
{
  bool v8; // w8
  CommonReleaseEntity_array *List; // x0
  CommonReleaseEntity_o *v12; // x8
  CommonReleaseEntity_array *v13; // x19
  const MethodInfo *v14; // x2
  int max_length; // w9
  int v16; // w10
  CommonReleaseEntity_o *v17; // x8
  CommonReleaseEntity_o *v18; // x11

  if ( condType != 113 )
  {
    List = CommonReleaseMaster__getList(this, id, *(const MethodInfo **)&condType);
    if ( List && LODWORD(List->max_length) == 1 )
    {
      v12 = List->m_Items[0];
      if ( !v12 )
        goto LABEL_26;
      if ( v12->fields.condType == condType && v12->fields.condId == condId )
        return v12->fields.condNum == condNum;
    }
    return 0;
  }
  if ( id != condId )
  {
    v13 = CommonReleaseMaster__getList(this, id, *(const MethodInfo **)&condType);
    List = CommonReleaseMaster__getList(this, condId, v14);
    if ( !v13 || !List )
      goto LABEL_26;
    max_length = v13->max_length;
    if ( max_length == LODWORD(List->max_length) )
    {
      if ( max_length < 1 )
        return 1;
      v16 = 0;
      while ( 1 )
      {
        if ( max_length == v16 )
          sub_1C32E84(List);
        v17 = v13->m_Items[v16];
        if ( !v17 )
          break;
        v18 = List->m_Items[v16];
        if ( !v18
          || v17->fields.condGroup != v18->fields.condGroup
          || v17->fields.condType != v18->fields.condType
          || v17->fields.condId != v18->fields.condId
          || v17->fields.condNum != v18->fields.condNum )
        {
          return 0;
        }
        ++v16;
        v8 = 1;
        if ( max_length == v16 )
          return v8;
      }
LABEL_26:
      sub_1C32E7C(List);
    }
    return 0;
  }
  return 1;
}


bool CommonReleaseMaster__IsOpen(
        CommonReleaseMaster_o *this,
        int32_t id,
        CommonReleaseCondOverwriter_o *overwriter,
        bool isCheckMaterialHistory,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__bool__o *v9; // x19
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *list; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  _BOOL8 v13; // x0
  int32_t *current; // x22
  bool v15; // w0
  CommonReleaseCondOverwriter_c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  int32_t v20; // w23
  int32_t v21; // w25
  int64_t v22; // x24
  char IsOpen; // w0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__c *v24; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v25; // x22
  unsigned int v26; // w27
  int32_t *v27; // x23
  CommonReleaseCondOverwriter_c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0
  int32_t v32; // w24
  int32_t v33; // w26
  int64_t v34; // x25
  char v35; // w0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-A0h] BYREF
  bool value; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C377D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C32C20(&CommonReleaseCondOverwriter_TypeInfo);
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__);
    sub_1C32C20(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
    byte_4C377D2 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  value = 0;
  memset(&v38, 0, sizeof(v38));
  if ( id < 0 )
    goto LABEL_65;
  v9 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v9,
    (const MethodInfo_33E0AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this->fields.list;
  if ( !list )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) >= 1 )
  {
    list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !list )
      goto LABEL_67;
    if ( BYTE1(list[3].klass) )
    {
      CacheById = (System_Collections_Generic_List_object__o *)CommonReleaseMaster__GetCacheById(this, id, v11);
      if ( !CacheById )
        return (char)CacheById;
      if ( CacheById->fields._size )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v37,
          CacheById,
          (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
        v40 = v37;
        while ( 1 )
        {
          v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v40,
                  (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
          if ( !v13 )
            break;
          current = (int32_t *)v40.fields._current;
          if ( !v40.fields._current )
            sub_1C32E7C(v13);
          if ( !v9 )
            sub_1C32E7C(v13);
          v15 = System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                  v9,
                  (int32_t)v40.fields._current[1].monitor,
                  &value,
                  (const MethodInfo_33E2B74 *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
          if ( value || !v15 )
          {
            if ( overwriter )
            {
              klass = overwriter->klass;
              v17 = *(unsigned __int16 *)&overwriter->klass->_2.rank;
              if ( *(_WORD *)&overwriter->klass->_2.rank )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
                {
                  --v17;
                  p_offset += 4;
                  if ( !v17 )
                    goto LABEL_20;
                }
                v19 = (__int64)&klass->vtable[*p_offset];
              }
              else
              {
LABEL_20:
                v19 = sub_1C83438(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0);
              }
              IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v19)(
                         overwriter,
                         current,
                         *(_QWORD *)(v19 + 8));
            }
            else
            {
              v21 = current[7];
              v20 = current[8];
              v22 = current[9];
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsOpen = CondType__IsOpen(v21, v20, v22, isCheckMaterialHistory, 0, 0);
            }
            System_Collections_Generic_Dictionary_int__bool___set_Item(
              v9,
              current[6],
              IsOpen & 1,
              (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v40,
          (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
        if ( !v9 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v9,
               (const MethodInfo_33E1168 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) > 0 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v9,
                   (const MethodInfo_33E12C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v37,
              list,
              (const MethodInfo_3ACD2AC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v38 = v37;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v38,
                      (const MethodInfo_3544764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v38.fields._current) )
                goto LABEL_62;
            }
LABEL_64:
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v38,
              (const MethodInfo_3544760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
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
                                                                                        v11);
      if ( !list )
        goto LABEL_67;
      v24 = list[1].klass;
      v25 = list;
      if ( v24 )
      {
        if ( (int)v24 >= 1 )
        {
          v26 = 0;
          do
          {
            if ( v26 >= (unsigned int)v24 )
              sub_1C32E84(list);
            v27 = (int32_t *)*((_QWORD *)&v25[1].monitor + (int)v26);
            if ( !v27 || !v9 )
              goto LABEL_67;
            if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                    v9,
                    v27[6],
                    (const MethodInfo_33E16BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
              || (list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                    v9,
                                                                                                    v27[6],
                                                                                                    (const MethodInfo_33E1418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
                  ((unsigned __int8)list & 1) != 0) )
            {
              if ( overwriter )
              {
                v28 = overwriter->klass;
                v29 = *(unsigned __int16 *)&overwriter->klass->_2.rank;
                if ( *(_WORD *)&overwriter->klass->_2.rank )
                {
                  v30 = &v28->_1.interfaceOffsets->offset;
                  while ( *((CommonReleaseCondOverwriter_c **)v30 - 1) != CommonReleaseCondOverwriter_TypeInfo )
                  {
                    --v29;
                    v30 += 4;
                    if ( !v29 )
                      goto LABEL_41;
                  }
                  v31 = (__int64)&v28->vtable[*v30];
                }
                else
                {
LABEL_41:
                  v31 = sub_1C83438(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0);
                }
                v35 = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v31)(
                        overwriter,
                        v27,
                        *(_QWORD *)(v31 + 8));
              }
              else
              {
                v33 = v27[7];
                v32 = v27[8];
                v34 = v27[9];
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                v35 = CondType__IsOpen(v33, v32, v34, isCheckMaterialHistory, 0, 0);
              }
              System_Collections_Generic_Dictionary_int__bool___set_Item(
                v9,
                v27[6],
                v35 & 1,
                (const MethodInfo_33E14A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
            }
            LODWORD(v24) = v25[1].klass;
          }
          while ( (int)++v26 < (int)v24 );
        }
        if ( !v9 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v9,
               (const MethodInfo_33E1168 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) >= 1 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v9,
                   (const MethodInfo_33E12C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v37,
              list,
              (const MethodInfo_3ACD2AC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v38 = v37;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v38,
                      (const MethodInfo_3544764 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v38.fields._current) )
              {
LABEL_62:
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
                  (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v38,
                  (const MethodInfo_3544760 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
                goto LABEL_63;
              }
            }
            goto LABEL_64;
          }
LABEL_67:
          sub_1C32E7C(list);
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
bool CommonReleaseMaster__IsQuestContain(
        CommonReleaseMaster_o *this,
        int32_t questId,
        int32_t commonReleaseId,
        const MethodInfo *method)
{
  CommonReleaseEntity_array *List; // x0
  il2cpp_array_size_t max_length; // x8
  int v7; // w9
  CommonReleaseEntity_o *v8; // x12
  unsigned int condType; // w13

  List = CommonReleaseMaster__getList(this, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  if ( List )
  {
    max_length = List->max_length;
    if ( max_length && (int)max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        v8 = List->m_Items[v7];
        if ( !v8 )
          sub_1C32E7C(List);
        condType = v8->fields.condType;
        if ( condType <= 0x2E && ((1LL << condType) & 0x400002000002LL) != 0 && v8->fields.condId == questId )
          break;
        if ( (_DWORD)max_length == ++v7 )
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


void CommonReleaseMaster__OnListChangedImplementation(
        CommonReleaseMaster_o *this,
        System_Collections_Specialized_NotifyCollectionChangedEventArgs_o *e,
        const MethodInfo *method)
{
  this->fields.isDirty = 1;
}


// local variable allocation has failed, the output may be wrong!
bool CommonReleaseMaster__TryGetEntity(
        CommonReleaseMaster_o *this,
        CommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C377CE & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
    byte_4C377CE = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


CommonReleaseEntity_array *CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v7; // w22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_ObjectModel_Collection_T__o *v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C377D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_4C377D0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v7 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_332FCA8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    if ( v7 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v7,
                                                               (const MethodInfo_332FD38 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( list )
    {
      v10 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v12 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v10;
          sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v10, v8, v9);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v7;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C32E7C(list);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}


void CommonReleaseMaster___c__DisplayClass7_0___ctor(
        CommonReleaseMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CommonReleaseMaster___c__DisplayClass7_0___ContainQuestClearPhase_b__0(
        CommonReleaseMaster___c__DisplayClass7_0_o *this,
        CommonReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return v->fields.condType == 46
      && v->fields.condId == this->fields.questId
      && v->fields.condNum == this->fields.questPhase;
}


void CommonReleaseMaster___c__DisplayClass8_0___ctor(
        CommonReleaseMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CommonReleaseMaster___c__DisplayClass8_0___ContainQuestClear_b__0(
        CommonReleaseMaster___c__DisplayClass8_0_o *this,
        CommonReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C32E7C(this);
  return v->fields.condType == 1 && v->fields.condId == this->fields.questId;
}
void CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D2C66A & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
    byte_4D2C66A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    295,
    (const MethodInfo_345DC54 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


bool CommonReleaseMaster__ContainQuestClear(
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

  if ( (byte_4D2C66F & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C94098(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C94098(&Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__);
    sub_1C94098(&CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
    byte_4D2C66F = 1;
  }
  v7 = sub_1C942E4(CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C942F0(v8, v9);
  *(_DWORD *)(v7 + 16) = questId;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v10);
  if ( List )
  {
    v12 = (System_Object_array *)List;
    v13 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__,
      0);
    LOBYTE(List) = BasicHelper__Any_object__51926292(
                     v12,
                     (System_Func_T__bool__o *)v13,
                     (const MethodInfo_3185514 *)Method_BasicHelper_Any_CommonReleaseEntity___);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v14; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4D2C66E & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C94098(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_1C94098(&Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__);
    sub_1C94098(&CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
    byte_4D2C66E = 1;
  }
  v9 = sub_1C942E4(CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v12);
  if ( List )
  {
    v14 = (System_Object_array *)List;
    v15 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)v9,
      Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__,
      0);
    LOBYTE(List) = BasicHelper__Any_object__51926292(
                     v14,
                     (System_Func_T__bool__o *)v15,
                     (const MethodInfo_3185514 *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


void CommonReleaseMaster__CreateCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x21
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w21
  System_Collections_ObjectModel_Collection_T__o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x23
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  void **v25; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D2C671 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_4D2C671 = 1;
  }
  value = 0;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v3,
      (const MethodInfo_34B3F00 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *)v3;
    p_idCache = &this->fields.idCache;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.idCache, (int32_t)v3, v5, v6, v7, v8, v9, v10);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1C942F0(list, v11);
    v13 = 0;
    while ( v13 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v13,
                                                                   (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
        if ( list )
        {
          v14 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v14->fields.items,
                    &value,
                    (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
            {
              v21 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v21,
                (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
              value = (Il2CppObject *)v21;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v14->fields.items,
                (Il2CppObject *)v21,
                (const MethodInfo_34B48C0 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
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
                    *(const MethodInfo_386AE34 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v25[4] = v14;
                  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v14, v15, v16, v17, v18, v19, v20);
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


void CommonReleaseMaster__DeleteCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.idCache, 0, v2, v3, v4, v5, v6, v7);
  *((_BYTE *)p_idCache - 8) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_CommonReleaseEntity__o *CommonReleaseMaster__GetCacheById(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *idCache; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2C672 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    byte_4D2C672 = 1;
  }
  value = 0;
  CommonReleaseMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1C942F0(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_34B6060 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
  {
    return (System_Collections_Generic_List_CommonReleaseEntity__o *)value;
  }
  else
  {
    return 0;
  }
}


System_Collections_Generic_List_int__o *CommonReleaseMaster__GetCondIdsByTargetAndOpenCondType(
        CommonReleaseMaster_o *this,
        int32_t condId,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x20
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  unsigned int *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4D2C670 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__GetEnumerator__);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2C670 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C942F0(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33F413C *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C942F0(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C6A420(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C6A420(Enumerator, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0);
    }
    v20 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                            Enumerator,
                            *(_QWORD *)(v19 + 8));
    if ( v20 && v20[8] == condId && v20[7] == condType )
    {
      if ( !v7 )
        sub_1C942F0(v20, v21);
      v22 = v20[4];
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_int__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C942F0(v20, v22);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          v22,
          *(const MethodInfo_384DE10 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = v22;
      }
    }
  }
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_30;
    }
    v29 = (__int64)&v26->vtable[*v28];
  }
  else
  {
LABEL_30:
    v29 = sub_1C6A420(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v7;
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D2C668 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
    byte_4D2C668 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_345FF78 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4D2C66C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    byte_4D2C66C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1C942F0(list, *(_QWORD *)&targetId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
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
    if ( List && LODWORD(List->max_length) == 1 )
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
    if ( max_length == LODWORD(List->max_length) )
    {
      if ( max_length < 1 )
        return 1;
      v17 = 0;
      while ( 1 )
      {
        if ( max_length == v17 )
          sub_1C942F8(List);
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
      sub_1C942F0(List, v12);
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
  __int64 v21; // x0
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

  if ( (byte_4D2C66D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C94098(&CommonReleaseCondOverwriter_TypeInfo);
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__);
    sub_1C94098(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
    byte_4D2C66D = 1;
  }
  memset(&v42, 0, sizeof(v42));
  value = 0;
  memset(&v40, 0, sizeof(v40));
  if ( id < 0 )
    goto LABEL_65;
  v9 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v9,
    (const MethodInfo_34A56A0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this->fields.list;
  if ( !list )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) >= 1 )
  {
    list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
          (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
        v42 = v39;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v42,
                  (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
          if ( !v14 )
            break;
          current = (int32_t *)v42.fields._current;
          if ( !v42.fields._current )
            sub_1C942F0(v14, v15);
          if ( !v9 )
            sub_1C942F0(v14, v15);
          v17 = System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                  v9,
                  (int32_t)v42.fields._current[1].monitor,
                  &value,
                  (const MethodInfo_34A772C *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
          if ( value || !v17 )
          {
            if ( overwriter )
            {
              klass = overwriter->klass;
              v19 = *(unsigned __int16 *)&overwriter->klass->_2.rank;
              if ( *(_WORD *)&overwriter->klass->_2.rank )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
                {
                  --v19;
                  p_offset += 4;
                  if ( !v19 )
                    goto LABEL_20;
                }
                v21 = (__int64)&klass->vtable[*p_offset];
              }
              else
              {
LABEL_20:
                v21 = sub_1C6A420(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0);
              }
              IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v21)(
                         overwriter,
                         current,
                         *(_QWORD *)(v21 + 8));
            }
            else
            {
              v23 = current[7];
              v22 = current[8];
              v24 = current[9];
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsOpen = CondType__IsOpen(v23, v22, v24, isCheckMaterialHistory, 0, 0);
            }
            System_Collections_Generic_Dictionary_int__bool___set_Item(
              v9,
              current[6],
              IsOpen & 1,
              (const MethodInfo_34A6060 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v42,
          (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
        if ( !v9 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v9,
               (const MethodInfo_34A5D20 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) > 0 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v9,
                   (const MethodInfo_34A5E80 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
              list,
              (const MethodInfo_3BA69E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v40 = v39;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
                      (const MethodInfo_360DB80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v40.fields._current) )
                goto LABEL_62;
            }
LABEL_64:
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
              (const MethodInfo_360DB7C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
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
              sub_1C942F8(list);
            v29 = (int32_t *)*((_QWORD *)&v27[1].monitor + (int)v28);
            if ( !v29 || !v9 )
              goto LABEL_67;
            if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                    v9,
                    v29[6],
                    (const MethodInfo_34A6274 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
              || (list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                    v9,
                                                                                                    v29[6],
                                                                                                    (const MethodInfo_34A5FD0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
                  ((unsigned __int8)list & 1) != 0) )
            {
              if ( overwriter )
              {
                v30 = overwriter->klass;
                v31 = *(unsigned __int16 *)&overwriter->klass->_2.rank;
                if ( *(_WORD *)&overwriter->klass->_2.rank )
                {
                  v32 = &v30->_1.interfaceOffsets->offset;
                  while ( *((CommonReleaseCondOverwriter_c **)v32 - 1) != CommonReleaseCondOverwriter_TypeInfo )
                  {
                    --v31;
                    v32 += 4;
                    if ( !v31 )
                      goto LABEL_41;
                  }
                  v33 = (__int64)&v30->vtable[*v32];
                }
                else
                {
LABEL_41:
                  v33 = sub_1C6A420(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0);
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
                v37 = CondType__IsOpen(v35, v34, v36, isCheckMaterialHistory, 0, 0);
              }
              System_Collections_Generic_Dictionary_int__bool___set_Item(
                v9,
                v29[6],
                v37 & 1,
                (const MethodInfo_34A6060 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
            }
            LODWORD(v26) = v27[1].klass;
          }
          while ( (int)++v28 < (int)v26 );
        }
        if ( !v9 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v9,
               (const MethodInfo_34A5D20 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) >= 1 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v9,
                   (const MethodInfo_34A5E80 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
              list,
              (const MethodInfo_3BA69E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v40 = v39;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
                      (const MethodInfo_360DB80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v40.fields._current) )
              {
LABEL_62:
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
                  (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v40,
                  (const MethodInfo_360DB7C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
                goto LABEL_63;
              }
            }
            goto LABEL_64;
          }
LABEL_67:
          sub_1C942F0(list, v10);
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
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  int v8; // w9
  CommonReleaseEntity_o *v9; // x12
  unsigned int condType; // w13

  List = CommonReleaseMaster__getList(this, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  if ( List )
  {
    max_length = List->max_length;
    if ( max_length && (int)max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        v9 = List->m_Items[v8];
        if ( !v9 )
          sub_1C942F0(List, v6);
        condType = v9->fields.condType;
        if ( condType <= 0x2E && ((1LL << condType) & 0x400002000002LL) != 0 && v9->fields.condId == questId )
          break;
        if ( (_DWORD)max_length == ++v8 )
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

  if ( (byte_4D2C669 & 1) == 0 )
  {
    sub_1C94098(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
    byte_4D2C669 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_345FFC4 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


CommonReleaseEntity_array *CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  System_Collections_ObjectModel_Collection_T__o *v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v8; // w22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_4D2C66B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_1C94098(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_1C94098(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_4D2C66B = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_33F3B64 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_33F3BF4 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_18;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v5 )
LABEL_18:
    sub_1C942F0(list, v6);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return v->fields.condType == 1 && v->fields.condId == this->fields.questId;
}
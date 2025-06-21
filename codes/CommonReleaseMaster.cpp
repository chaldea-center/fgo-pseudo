void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C32D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__, method);
    byte_4B1C32D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    295,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__ContainQuestClear(
        CommonReleaseMaster_o *this,
        int32_t commonReleaseId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  CommonReleaseMaster___c__DisplayClass8_0_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v15; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4B1C332 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_CommonReleaseEntity___, *(_QWORD *)&commonReleaseId);
    sub_1BCAFF8(&System_Func_CommonReleaseEntity__bool__TypeInfo, v7);
    sub_1BCAFF8(&Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__, v8);
    sub_1BCAFF8(&CommonReleaseMaster___c__DisplayClass8_0_TypeInfo, v9);
    byte_4B1C332 = 1;
  }
  v10 = (CommonReleaseMaster___c__DisplayClass8_0_o *)sub_1BCB244(CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
  CommonReleaseMaster___c__DisplayClass8_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_1BCB254(v11, v12);
  v10->fields.questId = questId;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v13);
  if ( List )
  {
    v15 = (System_Object_array *)List;
    v16 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v10,
      Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__50347976(
                     v15,
                     (System_Func_T__bool__o *)v16,
                     (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__ContainQuestClearPhase(
        CommonReleaseMaster_o *this,
        int32_t commonReleaseId,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonReleaseMaster___c__DisplayClass7_0_o *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B1C331 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_CommonReleaseEntity___, *(_QWORD *)&commonReleaseId);
    sub_1BCAFF8(&System_Func_CommonReleaseEntity__bool__TypeInfo, v9);
    sub_1BCAFF8(&Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__, v10);
    sub_1BCAFF8(&CommonReleaseMaster___c__DisplayClass7_0_TypeInfo, v11);
    byte_4B1C331 = 1;
  }
  v12 = (CommonReleaseMaster___c__DisplayClass7_0_o *)sub_1BCB244(CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
  CommonReleaseMaster___c__DisplayClass7_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCB254(v13, v14);
  v12->fields.questId = questId;
  v12->fields.questPhase = questPhase;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v15);
  if ( List )
  {
    v17 = (System_Object_array *)List;
    v18 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v12,
      Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__50347976(
                     v17,
                     (System_Func_T__bool__o *)v18,
                     (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


void __fastcall CommonReleaseMaster__CreateCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__object__o *v11; // x21
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v17; // w21
  System_Collections_ObjectModel_Collection_T__o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x23
  Il2CppClass *klass; // x8
  _QWORD *v23; // x9
  __int64 klass_low; // x10
  void **v25; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1C333 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__, v6);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v10);
    byte_4B1C333 = 1;
  }
  value = 0LL;
  if ( this->fields.isDirty )
  {
    this->fields.isDirty = 0;
    v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v11,
      (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *)v11;
    p_idCache = &this->fields.idCache;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.idCache, (int32_t)v11, v13, v14);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_1BCB254(list, v15);
    v17 = 0;
    while ( v17 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v17,
                                                                   (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
        if ( list )
        {
          v18 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v18->fields.items,
                    &value,
                    (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
            {
              v21 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v21,
                (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
              value = (Il2CppObject *)v21;
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              if ( !*p_idCache )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v18->fields.items,
                (Il2CppObject *)v21,
                (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
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
                    (Il2CppObject *)v18,
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
                }
                else
                {
                  v25 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v25[4] = v18;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v18, v19, v20);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v17;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x19

  this->fields.idCache = 0LL;
  p_idCache = &this->fields.idCache;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.idCache, 0, v2, v3);
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

  if ( (byte_4B1C334 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__,
      *(_QWORD *)&id);
    byte_4B1C334 = 1;
  }
  value = 0LL;
  CommonReleaseMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_1BCB254(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
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

  if ( (byte_4B1C32B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B1C32B = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32CC8B8 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsContainCondType(
        CommonReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x3
  int monitor_high; // w8

  if ( (byte_4B1C32F & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__,
      *(_QWORD *)&targetId);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__, v7);
    byte_4B1C32F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_1BCB254(list, *(_QWORD *)&targetId);
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v9,
             (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v11) )
        {
          return 1;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v9;
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
  __int64 v16; // x2
  int max_length; // w9
  int v18; // w10
  CommonReleaseEntity_o *v19; // x8
  CommonReleaseEntity_o *v20; // x11

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
      v18 = 0;
      while ( 1 )
      {
        if ( max_length == v18 )
          sub_1BCB25C(List, v12, v16);
        v19 = v14->m_Items[v18];
        if ( !v19 )
          break;
        v20 = List->m_Items[v18];
        if ( !v20
          || v19->fields.condGroup != v20->fields.condGroup
          || v19->fields.condType != v20->fields.condType
          || v19->fields.condId != v20->fields.condId
          || v19->fields.condNum != v20->fields.condNum )
        {
          return 0;
        }
        ++v18;
        v8 = 1;
        if ( max_length == v18 )
          return v8;
      }
LABEL_26:
      sub_1BCB254(List, v12);
    }
    return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsOpen(
        CommonReleaseMaster_o *this,
        int32_t id,
        CommonReleaseCondOverwriter_o *overwriter,
        bool isCheckMaterialHistory,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_Dictionary_int__bool__o *v29; // x19
  __int64 v30; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *list; // x0
  const MethodInfo *v32; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int32_t *current; // x22
  bool v37; // w0
  CommonReleaseCondOverwriter_c *klass; // x8
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v42; // w23
  int32_t v43; // w25
  int64_t v44; // x24
  char IsOpen; // w0
  __int64 v46; // x2
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__c *v47; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v48; // x22
  unsigned int v49; // w27
  int32_t *v50; // x23
  CommonReleaseCondOverwriter_c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0
  int32_t v55; // w24
  int32_t v56; // w26
  int64_t v57; // x25
  char v58; // w0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-A0h] BYREF
  bool value; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B1C330 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__, *(_QWORD *)&id);
    sub_1BCAFF8(&CommonReleaseCondOverwriter_TypeInfo, v9);
    sub_1BCAFF8(&CondType_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v17);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__, v22);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__, v23);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__, v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__, v25);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__, v26);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__, v28);
    byte_4B1C330 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  value = 0;
  memset(&v61, 0, sizeof(v61));
  if ( (id & 0x80000000) != 0 )
    goto LABEL_65;
  v29 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v29,
    (const MethodInfo_3311D70 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this->fields.list;
  if ( !list )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) >= 1 )
  {
    list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
    if ( !list )
      goto LABEL_67;
    if ( BYTE1(list[3].klass) )
    {
      CacheById = (System_Collections_Generic_List_object__o *)CommonReleaseMaster__GetCacheById(this, id, v32);
      if ( !CacheById )
        return (char)CacheById;
      if ( CacheById->fields._size )
      {
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v60,
          CacheById,
          (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
        v63 = v60;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v63,
                  (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
          if ( !v34 )
            break;
          current = (int32_t *)v63.fields._current;
          if ( !v63.fields._current )
            sub_1BCB254(v34, v35);
          if ( !v29 )
            sub_1BCB254(v34, v35);
          v37 = System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                  v29,
                  (int32_t)v63.fields._current[1].monitor,
                  &value,
                  (const MethodInfo_3313DFC *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
          if ( value || !v37 )
          {
            if ( overwriter )
            {
              klass = overwriter->klass;
              v39 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
                {
                  --v39;
                  p_offset += 4;
                  if ( !v39 )
                    goto LABEL_20;
                }
                p_method = (__int64)&klass->vtable[*p_offset].method;
              }
              else
              {
LABEL_20:
                p_method = sub_1C1B560(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
              }
              IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                         overwriter,
                         current,
                         *(_QWORD *)(p_method + 8));
            }
            else
            {
              v43 = current[7];
              v42 = current[8];
              v44 = current[9];
              if ( !CondType_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
              IsOpen = CondType__IsOpen(v43, v42, v44, isCheckMaterialHistory, 0LL, 0LL);
            }
            System_Collections_Generic_Dictionary_int__bool___set_Item(
              v29,
              current[6],
              IsOpen & 1,
              (const MethodInfo_3312730 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v63,
          (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
        if ( !v29 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v29,
               (const MethodInfo_33123F0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) > 0 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v29,
                   (const MethodInfo_3312550 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v60,
              list,
              (const MethodInfo_39E05EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v61 = v60;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v61,
                      (const MethodInfo_34708E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v61.fields._current) )
                goto LABEL_62;
            }
LABEL_64:
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v61,
              (const MethodInfo_34708E0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
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
                                                                                        v32);
      if ( !list )
        goto LABEL_67;
      v47 = list[1].klass;
      v48 = list;
      if ( v47 )
      {
        if ( (int)v47 >= 1 )
        {
          v49 = 0;
          do
          {
            if ( v49 >= (unsigned int)v47 )
              sub_1BCB25C(list, v30, v46);
            v50 = (int32_t *)*((_QWORD *)&v48[1].monitor + (int)v49);
            if ( !v50 || !v29 )
              goto LABEL_67;
            if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                    v29,
                    v50[6],
                    (const MethodInfo_3312944 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
              || (list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                    v29,
                                                                                                    v50[6],
                                                                                                    (const MethodInfo_33126A0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
                  ((unsigned __int8)list & 1) != 0) )
            {
              if ( overwriter )
              {
                v51 = overwriter->klass;
                v52 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
                {
                  v53 = &v51->_1.interfaceOffsets->offset;
                  while ( *((CommonReleaseCondOverwriter_c **)v53 - 1) != CommonReleaseCondOverwriter_TypeInfo )
                  {
                    --v52;
                    v53 += 4;
                    if ( !v52 )
                      goto LABEL_41;
                  }
                  v54 = (__int64)&v51->vtable[*v53].method;
                }
                else
                {
LABEL_41:
                  v54 = sub_1C1B560(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
                }
                v58 = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v54)(
                        overwriter,
                        v50,
                        *(_QWORD *)(v54 + 8));
              }
              else
              {
                v56 = v50[7];
                v55 = v50[8];
                v57 = v50[9];
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                v58 = CondType__IsOpen(v56, v55, v57, isCheckMaterialHistory, 0LL, 0LL);
              }
              System_Collections_Generic_Dictionary_int__bool___set_Item(
                v29,
                v50[6],
                v58 & 1,
                (const MethodInfo_3312730 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
            }
            LODWORD(v47) = v48[1].klass;
          }
          while ( (int)++v49 < (int)v47 );
        }
        if ( !v29 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v29,
               (const MethodInfo_33123F0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) >= 1 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v29,
                   (const MethodInfo_3312550 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v60,
              list,
              (const MethodInfo_39E05EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v61 = v60;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v61,
                      (const MethodInfo_34708E4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v61.fields._current) )
              {
LABEL_62:
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
                  (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v61,
                  (const MethodInfo_34708E0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
                goto LABEL_63;
              }
            }
            goto LABEL_64;
          }
LABEL_67:
          sub_1BCB254(list, v30);
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
          sub_1BCB254(List, v6);
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

  if ( (byte_4B1C32C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__, entity);
    byte_4B1C32C = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x21
  System_Collections_ObjectModel_Collection_T__o *v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v13; // w22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4B1C32E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__, *(_QWORD *)&id);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v9);
    byte_4B1C32E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_18;
  v13 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    if ( v13 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_18;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v13,
                                                               (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( list )
    {
      v11 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v10 )
          goto LABEL_18;
        items = v10->fields._items;
        v17 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v10->fields._version;
        if ( !items )
          goto LABEL_18;
        size = v10->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            (Il2CppObject *)list,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v10->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v11;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)v11, v14, v15);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v13;
    if ( !list )
      goto LABEL_18;
  }
  if ( !v10 )
LABEL_18:
    sub_1BCB254(list, v11);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v10,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
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
    sub_1BCB254(this, 0LL);
  return CommonReleaseEntity__IsMatchQuestClearPhase(v, this->fields.questId, this->fields.questPhase, 0LL);
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
    sub_1BCB254(this, 0LL);
  return CommonReleaseEntity__IsMatchQuestClear(v, this->fields.questId, 0LL);
}
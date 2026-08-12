void CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970635 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
    byte_5970635 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    297,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
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

  if ( (byte_597063A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_2213A60(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__);
    sub_2213A60(&CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
    byte_597063A = 1;
  }
  v7 = sub_2213CCC(CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_DWORD *)(v7 + 16) = questId;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v10);
  if ( List )
  {
    v12 = (System_Object_array *)List;
    v13 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__,
      0);
    LOBYTE(List) = BasicHelper__Any_object__58785420(
                     v12,
                     (System_Func_T__bool__o *)v13,
                     (const MethodInfo_380FE8C *)Method_BasicHelper_Any_CommonReleaseEntity___);
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

  if ( (byte_5970639 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_2213A60(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__);
    sub_2213A60(&CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
    byte_5970639 = 1;
  }
  v9 = sub_2213CCC(CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = questPhase;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v12);
  if ( List )
  {
    v14 = (System_Object_array *)List;
    v15 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v15,
      (Il2CppObject *)v9,
      Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__,
      0);
    LOBYTE(List) = BasicHelper__Any_object__58785420(
                     v14,
                     (System_Func_T__bool__o *)v15,
                     (const MethodInfo_380FE8C *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


void CommonReleaseMaster__CreateCache(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  _BOOL4 isDirty; // w8
  System_Collections_Generic_Dictionary_int__object__o *v4; // x21
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w21
  System_Collections_ObjectModel_Collection_T__o *v15; // x22
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_object__o *v22; // x23
  Il2CppClass *klass; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  void **v26; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_597063C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_597063C = 1;
  }
  isDirty = this->fields.isDirty;
  value = 0;
  if ( isDirty )
  {
    this->fields.isDirty = 0;
    v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v4,
      (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    this->fields.idCache = (struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o *)v4;
    p_idCache = &this->fields.idCache;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, (int32_t)v4, v6, v7, v8, v9, v10, v11);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_19:
      sub_2213CDC(list, v12);
    v14 = 0;
    while ( v14 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v14,
                                                                   (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
        if ( list )
        {
          v15 = list;
          list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
          if ( *p_idCache )
          {
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    (int32_t)v15->fields.items,
                    &value,
                    (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
            {
              v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
              System_Collections_Generic_List_object____ctor(
                v22,
                (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
              list = (System_Collections_ObjectModel_Collection_T__o *)*p_idCache;
              value = (Il2CppObject *)v22;
              if ( !list )
                goto LABEL_19;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                (int32_t)v15->fields.items,
                (Il2CppObject *)v22,
                (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( value )
            {
              klass = value[1].klass;
              v24 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
              ++HIDWORD(value[1].monitor);
              if ( klass )
              {
                klass_low = SLODWORD(list[1].klass);
                if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)list,
                    (Il2CppObject *)v15,
                    *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
                }
                else
                {
                  v26 = &klass->_1.image + klass_low;
                  LODWORD(list[1].klass) = klass_low + 1;
                  v26[4] = v15;
                  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v15, v16, v17, v18, v19, v20, v21);
                }
                list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                ++v14;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___o **p_idCache; // x19

  this->fields.idCache = 0;
  p_idCache = &this->fields.idCache;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.idCache, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_597063D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__);
    byte_597063D = 1;
  }
  value = 0;
  CommonReleaseMaster__CreateCache(this, *(const MethodInfo **)&id);
  idCache = this->fields.idCache;
  if ( !idCache )
    sub_2213CDC(0, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)idCache,
         id,
         &value,
         (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
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
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  unsigned int *v23; // x0
  __int64 v24; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_Collections_Generic_IEnumerator_T__o *v33; // [xsp+18h] [xbp-48h]

  if ( (byte_597063B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__GetEnumerator__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_597063B = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_2213CDC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__GetEnumerator__);
  v33 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v11);
  for ( i = Enumerator; ; i = v33 )
  {
    klass = i->klass;
    v14 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            i,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    if ( !v33 )
      sub_2213CDC(v17, v18);
    v19 = v33->klass;
    v20 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_CommonReleaseEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_224BC3C(v33, System_Collections_Generic_IEnumerator_CommonReleaseEntity__TypeInfo, 0);
    }
    v23 = (unsigned int *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                            v33,
                            *(_QWORD *)(v22 + 8));
    if ( v23 && v23[8] == condId && v23[7] == condType )
    {
      if ( !v7
        || (items = v7->fields._items,
            v24 = v23[4],
            v26 = Method_System_Collections_Generic_List_int__Add__,
            ++v7->fields._version,
            !items) )
      {
        sub_2213CDC(v23, v24);
      }
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v7,
          v24,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v7->fields._size = size + 1;
        items->m_Items[size] = v24;
      }
    }
  }
  if ( v33 )
  {
    v28 = v33->klass;
    v29 = *(unsigned __int16 *)&v33->klass->_2.rank;
    if ( *(_WORD *)&v33->klass->_2.rank )
    {
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_35;
      }
      v31 = (__int64)&v28->vtable[*v30];
    }
    else
    {
LABEL_35:
      v31 = sub_224BC3C(v33, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(v33, *(_QWORD *)(v31 + 8));
  }
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

  if ( (byte_5970633 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
    byte_5970633 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_3F157EC *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
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
  int32_t Count; // w23
  Il2CppObject *Item; // x0
  const MethodInfo *v11; // x3
  int monitor_high; // w8

  if ( (byte_5970637 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    byte_5970637 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_13:
    sub_2213CDC(list, *(_QWORD *)&targetId);
  v8 = 0;
  while ( 1 )
  {
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    if ( v8 >= Count )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_13;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( Item )
    {
      if ( LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v11) )
        {
          break;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_13;
  }
  return v8 < Count;
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
  CommonReleaseEntity_array *List; // x0
  __int64 v11; // x1
  CommonReleaseEntity_o *v12; // x8
  CommonReleaseEntity_array *v13; // x20
  const MethodInfo *v14; // x2
  int max_length; // w8
  CommonReleaseEntity_o **m_Items; // x9
  CommonReleaseEntity_o **v17; // x10
  CommonReleaseEntity_o *v18; // x11
  CommonReleaseEntity_o *v19; // x12

  if ( condType != 113 )
  {
    List = CommonReleaseMaster__getList(this, id, *(const MethodInfo **)&condType);
    if ( !List )
      return (char)List;
    if ( LODWORD(List->max_length) == 1 )
    {
      v12 = List->m_Items[0];
      if ( !v12 )
        goto LABEL_25;
      if ( v12->fields.condType == condType && v12->fields.condId == condId )
      {
        LOBYTE(List) = v12->fields.condNum == condNum;
        return (char)List;
      }
    }
    goto LABEL_23;
  }
  if ( id != condId )
  {
    v13 = CommonReleaseMaster__getList(this, id, *(const MethodInfo **)&condType);
    List = CommonReleaseMaster__getList(this, condId, v14);
    if ( !v13 || !List )
      goto LABEL_25;
    max_length = v13->max_length;
    if ( max_length == LODWORD(List->max_length) )
    {
      if ( max_length < 1 )
        goto LABEL_3;
      m_Items = v13->m_Items;
      v17 = List->m_Items;
      List = (CommonReleaseEntity_array *)(&dword_0 + 1);
      while ( 1 )
      {
        v18 = *m_Items;
        if ( !*m_Items )
          break;
        v19 = *v17;
        if ( !*v17
          || v18->fields.condGroup != v19->fields.condGroup
          || v18->fields.condType != v19->fields.condType
          || v18->fields.condId != v19->fields.condId
          || v18->fields.condNum != v19->fields.condNum )
        {
          goto LABEL_23;
        }
        --max_length;
        ++m_Items;
        ++v17;
        if ( !max_length )
          return (char)List;
      }
LABEL_25:
      sub_2213CDC(List, v11);
    }
LABEL_23:
    LOBYTE(List) = 0;
    return (char)List;
  }
LABEL_3:
  LOBYTE(List) = 1;
  return (char)List;
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_object__o *CacheById; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t *current; // x22
  bool v17; // w0
  __int64 v18; // x1
  CommonReleaseCondOverwriter_c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  int64_t v23; // x25
  int32_t v24; // w23
  int32_t v25; // w24
  char IsOpen; // w0
  System_Collections_ObjectModel_Collection_T__c *v27; // x8
  System_Collections_ObjectModel_Collection_T__o *v28; // x22
  unsigned __int64 v29; // x27
  unsigned __int64 klass_low; // x8
  int32_t *v31; // x23
  CommonReleaseCondOverwriter_c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0
  int64_t v36; // x26
  int32_t v37; // w24
  int32_t v38; // w25
  char v39; // w0
  bool v40; // w19
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v43; // [xsp+20h] [xbp-A0h] BYREF
  bool value; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_5970638 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_2213A60(&CommonReleaseCondOverwriter_TypeInfo);
    sub_2213A60(&CondType_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
    byte_5970638 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  value = 0;
  memset(&v43, 0, sizeof(v43));
  if ( id < 0 )
    return 0;
  v9 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v9,
    (const MethodInfo_3F88990 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_63;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !list )
    goto LABEL_63;
  if ( BYTE1(list[3].klass) )
  {
    CacheById = (System_Collections_Generic_List_object__o *)CommonReleaseMaster__GetCacheById(this, id, v12);
    if ( CacheById && CacheById->fields._size )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v42,
        CacheById,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
      v45 = v42;
      v42.fields._list = 0;
      *(_QWORD *)&v42.fields._index = &v45;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v45,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
        if ( !v14 )
          break;
        current = (int32_t *)v45.fields._current;
        if ( !v45.fields._current )
          sub_2213CDC(v14, v15);
        if ( !v9 )
          sub_2213CDC(v14, v15);
        v17 = System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                v9,
                (int32_t)v45.fields._current[1].monitor,
                &value,
                (const MethodInfo_3F8ACC4 *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
        if ( value || !v17 )
        {
          if ( overwriter )
          {
            klass = overwriter->klass;
            v20 = *(unsigned __int16 *)&overwriter->klass->_2.rank;
            if ( *(_WORD *)&overwriter->klass->_2.rank )
            {
              p_offset = &klass->_1.interfaceOffsets->offset;
              while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
              {
                --v20;
                p_offset += 4;
                if ( !v20 )
                  goto LABEL_20;
              }
              v22 = (__int64)&klass->vtable[*p_offset];
            }
            else
            {
LABEL_20:
              v22 = sub_224BC3C(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0);
            }
            IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v22)(
                       overwriter,
                       current,
                       *(_QWORD *)(v22 + 8));
          }
          else
          {
            v23 = current[9];
            v24 = current[7];
            v25 = current[8];
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v18);
            IsOpen = CondType__IsOpen(v24, v25, v23, isCheckMaterialHistory, 0, 0);
          }
          System_Collections_Generic_Dictionary_int__bool___set_Item(
            v9,
            current[6],
            IsOpen & 1,
            (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v45,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
      if ( !v9 )
        goto LABEL_63;
      if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
             v9,
             (const MethodInfo_3F88FD8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) > 0 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                                   v9,
                                                                   (const MethodInfo_3F89144 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
        if ( list )
        {
          System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
            &v43,
            (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
            (const MethodInfo_3CC101C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
          v42.fields._list = 0;
          *(_QWORD *)&v42.fields._index = &v43;
          while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                    &v43,
                    (const MethodInfo_41557BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
          {
            if ( LOBYTE(v43.fields._currentValue) )
            {
              sub_200057C(&v42);
              return 1;
            }
          }
          sub_200057C(&v42);
          return 0;
        }
LABEL_63:
        sub_2213CDC(list, v10);
      }
      return 1;
    }
    return 0;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__getList(this, id, v12);
  if ( !list )
    goto LABEL_63;
  v27 = list[1].klass;
  v28 = list;
  if ( !v27 )
    return 0;
  if ( (int)v27 >= 1 )
  {
    v29 = 0;
    klass_low = (unsigned int)list[1].klass;
    do
    {
      if ( v29 >= klass_low )
        sub_2213CE4(list);
      v31 = (int32_t *)*((_QWORD *)&v28[1].monitor + v29);
      if ( !v31 || !v9 )
        goto LABEL_63;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v9,
              v31[6],
              (const MethodInfo_3F8953C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v9,
                                                                       v31[6],
                                                                       (const MethodInfo_3F892A0 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        if ( overwriter )
        {
          v32 = overwriter->klass;
          v33 = *(unsigned __int16 *)&overwriter->klass->_2.rank;
          if ( *(_WORD *)&overwriter->klass->_2.rank )
          {
            v34 = &v32->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)v34 - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              --v33;
              v34 += 4;
              if ( !v33 )
                goto LABEL_41;
            }
            v35 = (__int64)&v32->vtable[*v34];
          }
          else
          {
LABEL_41:
            v35 = sub_224BC3C(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0);
          }
          v39 = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v35)(
                  overwriter,
                  v31,
                  *(_QWORD *)(v35 + 8));
        }
        else
        {
          v36 = v31[9];
          v37 = v31[7];
          v38 = v31[8];
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
          v39 = CondType__IsOpen(v37, v38, v36, isCheckMaterialHistory, 0, 0);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v9,
          v31[6],
          v39 & 1,
          (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      klass_low = LODWORD(v28[1].klass);
    }
    while ( (int)++v29 < (int)klass_low );
  }
  if ( !v9 )
    goto LABEL_63;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v9,
         (const MethodInfo_3F88FD8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                             v9,
                                                             (const MethodInfo_3F89144 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !list )
    goto LABEL_63;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v43,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
    (const MethodInfo_3CC101C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v42.fields._list = 0;
  *(_QWORD *)&v42.fields._index = &v43;
  do
    v40 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v43,
            (const MethodInfo_41557BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
  while ( v40 && LOBYTE(v43.fields._currentValue) == 0 );
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v43,
    (const MethodInfo_41557B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return v40;
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
  CommonReleaseEntity_o **m_Items; // x9
  CommonReleaseEntity_o *v9; // x12
  unsigned int condType; // w13
  bool v11; // cc
  __int64 v12; // x13
  bool v13; // zf

  List = CommonReleaseMaster__getList(this, commonReleaseId, *(const MethodInfo **)&commonReleaseId);
  if ( List )
  {
    max_length = List->max_length;
    if ( max_length && (int)max_length >= 1 )
    {
      m_Items = List->m_Items;
      while ( 1 )
      {
        v9 = *m_Items;
        if ( !*m_Items )
          sub_2213CDC(List, v6);
        condType = v9->fields.condType;
        v11 = condType > 0x2E;
        v12 = (1LL << condType) & 0x400002000002LL;
        v13 = v11 || v12 == 0;
        if ( !v13 && v9->fields.condId == questId )
          break;
        LODWORD(max_length) = max_length - 1;
        ++m_Items;
        if ( !(_DWORD)max_length )
          goto LABEL_12;
      }
      LOBYTE(List) = 1;
    }
    else
    {
LABEL_12:
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

  if ( (byte_5970634 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
    byte_5970634 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0

  if ( (byte_5970636 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_5970636 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_15;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3E94214 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_3E942A8 *)Method_System_Collections_ObjectModel_Collection_CommonReleaseEntity__get_Item__);
    if ( list )
    {
      v6 = list;
      if ( LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_15;
        items = v5->fields._items;
        v16 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_15;
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v6;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 4), (int32_t)v6, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_15;
  }
  if ( !v5 )
LABEL_15:
    sub_2213CDC(list, v6);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return v->fields.condType == 1 && v->fields.condId == this->fields.questId;
}
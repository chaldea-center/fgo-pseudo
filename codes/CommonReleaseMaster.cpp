void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B36FC6 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__, method);
    byte_4B36FC6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    289,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
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
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v15; // x19
  System_Func_object__bool__o *v16; // x20

  if ( (byte_4B36FCB & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_Any_CommonReleaseEntity___, *(_QWORD *)&commonReleaseId);
    sub_1BD3458(&System_Func_CommonReleaseEntity__bool__TypeInfo, v7);
    sub_1BD3458(&Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__, v8);
    sub_1BD3458(&CommonReleaseMaster___c__DisplayClass8_0_TypeInfo, v9);
    byte_4B36FCB = 1;
  }
  v10 = sub_1BD36A4(CommonReleaseMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BD36B4(v11, v12);
  *(_DWORD *)(v10 + 16) = questId;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v13);
  if ( List )
  {
    v15 = (System_Object_array *)List;
    v16 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v16,
      (Il2CppObject *)v10,
      Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__49399452(
                     v15,
                     (System_Func_T__bool__o *)v16,
                     (const MethodInfo_2F1C69C *)Method_BasicHelper_Any_CommonReleaseEntity___);
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
  __int64 v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  CommonReleaseEntity_array *List; // x0
  System_Object_array *v17; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B36FCA & 1) == 0 )
  {
    sub_1BD3458(&Method_BasicHelper_Any_CommonReleaseEntity___, *(_QWORD *)&commonReleaseId);
    sub_1BD3458(&System_Func_CommonReleaseEntity__bool__TypeInfo, v9);
    sub_1BD3458(&Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__, v10);
    sub_1BD3458(&CommonReleaseMaster___c__DisplayClass7_0_TypeInfo, v11);
    byte_4B36FCA = 1;
  }
  v12 = sub_1BD36A4(CommonReleaseMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BD36B4(v13, v14);
  *(_DWORD *)(v12 + 16) = questId;
  *(_DWORD *)(v12 + 20) = questPhase;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v15);
  if ( List )
  {
    v17 = (System_Object_array *)List;
    v18 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v12,
      Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__49399452(
                     v17,
                     (System_Func_T__bool__o *)v18,
                     (const MethodInfo_2F1C69C *)Method_BasicHelper_Any_CommonReleaseEntity___);
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
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__object__o *v12; // x21
  bool *p_isDirty; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v22; // w21
  int64_t v23; // x22
  __int64 methodPtr_low; // x10
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_List_object__o *v31; // x23
  Il2CppClass *klass; // x8
  _QWORD *v33; // x9
  __int64 klass_low; // x10
  void **v35; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B36FCC & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, method);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v3);
    sub_1BD3458(&CommonReleaseEntity_TypeInfo, v4);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__, v6);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__, v7);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v10);
    sub_1BD3458(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v11);
    byte_4B36FCC = 1;
  }
  value = 0LL;
  if ( *((_BYTE *)&this->fields.revision + 4) )
  {
    *((_BYTE *)&this->fields.revision + 4) = 0;
    v12 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v12,
      (const MethodInfo_32245C0 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity____ctor__);
    *(_QWORD *)&this->fields.isDirty = v12;
    p_isDirty = &this->fields.isDirty;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, (int64_t)v12, v14, v15, v16, v17, v18, v19);
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
LABEL_21:
      sub_1BD36B4(list, v20);
    v22 = 0;
    while ( v22 < System_Collections_ObjectModel_Collection_object___get_Count(
                    list,
                    (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( list )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                   list,
                                                                   v22,
                                                                   (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( list )
        {
          v23 = (int64_t)list;
          methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
            && (CommonReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonReleaseEntity_TypeInfo )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
            if ( *(_QWORD *)p_isDirty )
            {
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)list,
                      *(_DWORD *)(v23 + 16),
                      &value,
                      (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
              {
                v31 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v31,
                  (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
                value = (Il2CppObject *)v31;
                list = *(System_Collections_ObjectModel_Collection_T__o **)p_isDirty;
                if ( !*(_QWORD *)p_isDirty )
                  goto LABEL_21;
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  *(_DWORD *)(v23 + 16),
                  (Il2CppObject *)v31,
                  (const MethodInfo_3224F80 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___set_Item__);
              }
              list = (System_Collections_ObjectModel_Collection_T__o *)value;
              if ( value )
              {
                klass = value[1].klass;
                v33 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
                ++HIDWORD(value[1].monitor);
                if ( klass )
                {
                  klass_low = SLODWORD(list[1].klass);
                  if ( (unsigned int)klass_low >= LODWORD(klass->_1.namespaze) )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      (System_Collections_Generic_List_object__o *)list,
                      (Il2CppObject *)v23,
                      *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v35 = &klass->_1.image + klass_low;
                    LODWORD(list[1].klass) = klass_low + 1;
                    v35[4] = (void *)v23;
                    sub_1BD33FC((PartyOrganizationUtility_o *)(v35 + 4), v23, v25, v26, v27, v28, v29, v30);
                  }
                  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
                  ++v22;
                  if ( list )
                    continue;
                }
              }
            }
          }
        }
      }
      goto LABEL_21;
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
  bool *p_isDirty; // x19

  *(_QWORD *)&this->fields.isDirty = 0LL;
  p_isDirty = &this->fields.isDirty;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.isDirty, 0LL, v2, v3, v4, v5, v6, v7);
  *(p_isDirty - 4) = 1;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_CommonReleaseEntity__o *__fastcall CommonReleaseMaster__GetCacheById(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B36FCD & 1) == 0 )
  {
    sub_1BD3458(
      &Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__,
      *(_QWORD *)&id);
    byte_4B36FCD = 1;
  }
  value = 0LL;
  CommonReleaseMaster__CreateCache(this, *(const MethodInfo **)&id);
  v6 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isDirty;
  if ( !v6 )
    sub_1BD36B4(0LL, v5);
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         v6,
         id,
         &value,
         (const MethodInfo_3226720 *)Method_System_Collections_Generic_Dictionary_int__List_CommonReleaseEntity___TryGetValue__) )
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

  if ( (byte_4B36FC4 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B36FC4 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31D2248 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsContainCondType(
        CommonReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v10; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v12; // x3
  __int64 methodPtr_low; // x10
  int monitor_high; // w8

  if ( (byte_4B36FC8 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1BD3458(&CommonReleaseEntity_TypeInfo, v8);
    byte_4B36FC8 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BD36B4(list, *(_QWORD *)&targetId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v12) )
        {
          return 1;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v10;
    if ( !list )
      goto LABEL_15;
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
          sub_1BD36BC(List, v12);
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
      sub_1BD36B4(List, v12);
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
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__c *v46; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v47; // x22
  unsigned int v48; // w27
  int32_t *v49; // x23
  CommonReleaseCondOverwriter_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  int32_t v54; // w24
  int32_t v55; // w26
  int64_t v56; // x25
  char v57; // w0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-A0h] BYREF
  bool value; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v62; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4B36FC9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1BD3458(&CommonReleaseCondOverwriter_TypeInfo, v9);
    sub_1BD3458(&CondType_TypeInfo, v10);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__, v12);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v13);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v14);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v15);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v16);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v17);
    sub_1BD3458(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v18);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__, v19);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__, v20);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__, v21);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__, v22);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__get_Current__, v23);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__, v24);
    sub_1BD3458(&Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__, v25);
    sub_1BD3458(&Method_System_Collections_Generic_List_CommonReleaseEntity__get_Count__, v26);
    sub_1BD3458(&Method_SingletonTemplate_QuestTree__get_Instance__, v27);
    sub_1BD3458(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__, v28);
    byte_4B36FC9 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  value = 0;
  memset(&v60, 0, sizeof(v60));
  if ( (id & 0x80000000) != 0 )
    goto LABEL_65;
  v29 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BD36A4(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v29,
    (const MethodInfo_3215B98 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this->fields.list;
  if ( !list )
    goto LABEL_67;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         (System_Collections_ObjectModel_Collection_T__o *)list,
         (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) >= 1 )
  {
    list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)SingletonTemplate_object___get_Instance((const MethodInfo_37FE068 *)Method_SingletonTemplate_QuestTree__get_Instance__);
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
          (System_Collections_Generic_List_Enumerator_T__o *)&v59,
          CacheById,
          (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_CommonReleaseEntity__GetEnumerator__);
        v62 = v59;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v62,
                  (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__MoveNext__);
          if ( !v34 )
            break;
          current = (int32_t *)v62.fields._current;
          if ( !v62.fields._current )
            sub_1BD36B4(v34, v35);
          if ( !v29 )
            sub_1BD36B4(v34, v35);
          v37 = System_Collections_Generic_Dictionary_int__bool___TryGetValue(
                  v29,
                  (int32_t)v62.fields._current[1].monitor,
                  &value,
                  (const MethodInfo_3217C24 *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
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
                p_method = sub_1C25438(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
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
              (const MethodInfo_3216558 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v62,
          (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_CommonReleaseEntity__Dispose__);
        if ( !v29 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v29,
               (const MethodInfo_3216218 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) > 0 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v29,
                   (const MethodInfo_3216378 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v59,
              list,
              (const MethodInfo_38EA8C0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v60 = v59;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v60,
                      (const MethodInfo_3373424 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v60.fields._current) )
                goto LABEL_62;
            }
LABEL_64:
            System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v60,
              (const MethodInfo_3373420 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
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
      v46 = list[1].klass;
      v47 = list;
      if ( v46 )
      {
        if ( (int)v46 >= 1 )
        {
          v48 = 0;
          do
          {
            if ( v48 >= (unsigned int)v46 )
              sub_1BD36BC(list, v30);
            v49 = (int32_t *)*((_QWORD *)&v47[1].monitor + (int)v48);
            if ( !v49 || !v29 )
              goto LABEL_67;
            if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
                    v29,
                    v49[6],
                    (const MethodInfo_321676C *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
              || (list = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                                                    v29,
                                                                                                    v49[6],
                                                                                                    (const MethodInfo_32164C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
                  ((unsigned __int8)list & 1) != 0) )
            {
              if ( overwriter )
              {
                v50 = overwriter->klass;
                v51 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
                {
                  v52 = &v50->_1.interfaceOffsets->offset;
                  while ( *((CommonReleaseCondOverwriter_c **)v52 - 1) != CommonReleaseCondOverwriter_TypeInfo )
                  {
                    --v51;
                    v52 += 4;
                    if ( !v51 )
                      goto LABEL_41;
                  }
                  v53 = (__int64)&v50->vtable[*v52].method;
                }
                else
                {
LABEL_41:
                  v53 = sub_1C25438(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
                }
                v57 = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))v53)(
                        overwriter,
                        v49,
                        *(_QWORD *)(v53 + 8));
              }
              else
              {
                v55 = v49[7];
                v54 = v49[8];
                v56 = v49[9];
                if ( !CondType_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
                v57 = CondType__IsOpen(v55, v54, v56, isCheckMaterialHistory, 0LL, 0LL);
              }
              System_Collections_Generic_Dictionary_int__bool___set_Item(
                v29,
                v49[6],
                v57 & 1,
                (const MethodInfo_3216558 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
            }
            LODWORD(v46) = v47[1].klass;
          }
          while ( (int)++v48 < (int)v46 );
        }
        if ( !v29 )
          goto LABEL_67;
        if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
               v29,
               (const MethodInfo_3216218 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) >= 1 )
        {
          list = System_Collections_Generic_Dictionary_int__bool___get_Values(
                   v29,
                   (const MethodInfo_3216378 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
          if ( list )
          {
            System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v59,
              list,
              (const MethodInfo_38EA8C0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
            v60 = v59;
            while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
                      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v60,
                      (const MethodInfo_3373424 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__) )
            {
              if ( LOBYTE(v60.fields._current) )
              {
LABEL_62:
                System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
                  (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v60,
                  (const MethodInfo_3373420 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
                goto LABEL_63;
              }
            }
            goto LABEL_64;
          }
LABEL_67:
          sub_1BD36B4(list, v30);
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
          sub_1BD36B4(List, v6);
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
  *((_BYTE *)&this->fields.revision + 4) = 1;
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

  if ( (byte_4B36FC5 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__, entity);
    byte_4B36FC5 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
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
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x21
  int64_t v12; // x1
  int64_t list; // x0
  int32_t v14; // w22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4B36FC7 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1BD3458(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BD3458(&CommonReleaseEntity_TypeInfo, v6);
    sub_1BD3458(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v9);
    sub_1BD3458(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v10);
    byte_4B36FC7 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_316E4C0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v14,
                      (const MethodInfo_316E550 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(CommonReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == CommonReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 16) == id )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v23 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v12;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v25 + 4), v12, v15, v16, v17, v18, v19, v20);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1BD36B4(list, v12);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
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
    sub_1BD36B4(this, 0LL);
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
    sub_1BD36B4(this, 0LL);
  return v->fields.condType == 1 && v->fields.condId == this->fields.questId;
}
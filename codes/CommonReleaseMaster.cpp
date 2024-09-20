void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AF8D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
    byte_4A5AF8D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    289,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5AF8B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
    byte_4A5AF8B = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_311DC8C *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
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
  __int64 methodPtr_low; // x10
  int monitor_high; // w8

  if ( (byte_4A5AF8F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CommonReleaseEntity_TypeInfo);
    byte_4A5AF8F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B8880C(list, *(_QWORD *)&targetId);
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= System_Collections_ObjectModel_Collection_object___get_Count(
                 list,
                 (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v8,
             (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
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
          sub_1B88814(List, v12);
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
      sub_1B8880C(List, v12);
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
  System_Collections_Generic_Dictionary_int__bool__o *v9; // x20
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v12; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v14; // x21
  unsigned int v15; // w27
  bool v16; // w22
  int32_t *v17; // x23
  CommonReleaseCondOverwriter_c *v18; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v22; // w24
  int32_t v23; // w26
  int64_t v24; // x25
  char IsOpen; // w0
  bool v26; // w19
  int v27; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v29; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v30; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5AF90 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&CommonReleaseCondOverwriter_TypeInfo);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
    byte_4A5AF90 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  if ( (id & 0x80000000) != 0 )
    return 0;
  v9 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v9,
    (const MethodInfo_315E6FC *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__getList(this, id, v12);
  if ( !list )
    goto LABEL_39;
  klass = list[1].klass;
  v14 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v15 = 0;
    v16 = isCheckMaterialHistory;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)klass )
        sub_1B88814(list, v10);
      v17 = (int32_t *)*((_QWORD *)&v14[1].monitor + (int)v15);
      if ( !v17 || !v9 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v9,
              v17[6],
              (const MethodInfo_315F2D0 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v9,
                                                                       v17[6],
                                                                       (const MethodInfo_315F02C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        if ( overwriter )
        {
          v18 = overwriter->klass;
          v19 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
          {
            p_offset = &v18->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              --v19;
              p_offset += 4;
              if ( !v19 )
                goto LABEL_20;
            }
            p_method = (__int64)&v18->vtable[*p_offset].method;
          }
          else
          {
LABEL_20:
            p_method = sub_1BDA590(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
          }
          IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                     overwriter,
                     v17,
                     *(_QWORD *)(p_method + 8));
        }
        else
        {
          v23 = v17[7];
          v22 = v17[8];
          v24 = v17[9];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v23, v22, v24, v16, 0LL, 0LL);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v9,
          v17[6],
          IsOpen & 1,
          (const MethodInfo_315F0BC *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v14[1].klass;
      if ( (int)++v15 >= (int)klass )
        goto LABEL_28;
    }
LABEL_39:
    sub_1B8880C(list, v10);
  }
LABEL_28:
  if ( !v9 )
    goto LABEL_39;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v9,
         (const MethodInfo_315ED7C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                             v9,
                                                             (const MethodInfo_315EEDC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !list )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v29,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
    (const MethodInfo_3802BE4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v30 = v29;
  while ( 1 )
  {
    v26 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v30,
            (const MethodInfo_32B4FEC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    if ( !v26 )
      break;
    if ( LOBYTE(v30.fields._currentValue) )
    {
      v27 = 14;
      goto LABEL_38;
    }
  }
  v27 = 15;
LABEL_38:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v30,
    (const MethodInfo_32B4FE8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return v26 && v27 == 14;
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
          sub_1B8880C(List, v6);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__TryGetEntity(
        CommonReleaseMaster_o *this,
        CommonReleaseEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5AF8C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
    byte_4A5AF8C = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5AF8E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&CommonReleaseEntity_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
    byte_4A5AF8E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v8 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v8 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v8,
                                                               (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v6 = list;
      methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CommonReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v5 )
          goto LABEL_20;
        items = v5->fields._items;
        v13 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v5->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v5->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            (Il2CppObject *)list,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v15[4] = (Il2CppClass *)v6;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v8;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v5 )
LABEL_20:
    sub_1B8880C(list, v6);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}
void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A08A96 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__, method);
    byte_4A08A96 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    289,
    (const MethodInfo_30E47D8 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A08A94 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4A08A94 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_30E4818 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
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

  if ( (byte_4A08A98 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&targetId);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7);
    sub_1B686D4(&CommonReleaseEntity_TypeInfo, v8);
    byte_4A08A98 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1B68930(list, *(_QWORD *)&targetId);
  v10 = 0;
  while ( 1 )
  {
    if ( v10 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v10,
             (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
          sub_1B68938(List, v12);
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
      sub_1B68930(List, v12);
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
  System_Collections_Generic_Dictionary_int__bool__o *v22; // x20
  __int64 v23; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v25; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v27; // x21
  unsigned int v28; // w27
  bool v29; // w22
  int32_t *v30; // x23
  CommonReleaseCondOverwriter_c *v31; // x8
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v35; // w24
  int32_t v36; // w26
  int64_t v37; // x25
  char IsOpen; // w0
  bool v39; // w19
  int v40; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A08A99 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B686D4(&CommonReleaseCondOverwriter_TypeInfo, v9);
    sub_1B686D4(&CondType_TypeInfo, v10);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v11);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v12);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v13);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v14);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v15);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v16);
    sub_1B686D4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v17);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__, v18);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__, v19);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__, v20);
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__, v21);
    byte_4A08A99 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( (id & 0x80000000) != 0 )
    return 0;
  v22 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1B68920(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v22,
    (const MethodInfo_3124D44 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__getList(this, id, v25);
  if ( !list )
    goto LABEL_39;
  klass = list[1].klass;
  v27 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v28 = 0;
    v29 = isCheckMaterialHistory;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)klass )
        sub_1B68938(list, v23);
      v30 = (int32_t *)*((_QWORD *)&v27[1].monitor + (int)v28);
      if ( !v30 || !v22 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v22,
              v30[6],
              (const MethodInfo_3125918 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v22,
                                                                       v30[6],
                                                                       (const MethodInfo_3125674 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        if ( overwriter )
        {
          v31 = overwriter->klass;
          v32 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
          {
            p_offset = &v31->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              --v32;
              p_offset += 4;
              if ( !v32 )
                goto LABEL_20;
            }
            p_method = (__int64)&v31->vtable[*p_offset].method;
          }
          else
          {
LABEL_20:
            p_method = sub_1BBA6B4(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
          }
          IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                     overwriter,
                     v30,
                     *(_QWORD *)(p_method + 8));
        }
        else
        {
          v36 = v30[7];
          v35 = v30[8];
          v37 = v30[9];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(v36, v35, v37, v29, 0LL, 0LL);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v22,
          v30[6],
          IsOpen & 1,
          (const MethodInfo_3125704 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v27[1].klass;
      if ( (int)++v28 >= (int)klass )
        goto LABEL_28;
    }
LABEL_39:
    sub_1B68930(list, v23);
  }
LABEL_28:
  if ( !v22 )
    goto LABEL_39;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v22,
         (const MethodInfo_31253C4 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                             v22,
                                                             (const MethodInfo_3125524 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !list )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v42,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
    (const MethodInfo_37BFA98 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v43 = v42;
  while ( 1 )
  {
    v39 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v43,
            (const MethodInfo_3278A68 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    if ( !v39 )
      break;
    if ( LOBYTE(v43.fields._currentValue) )
    {
      v40 = 14;
      goto LABEL_38;
    }
  }
  v40 = 15;
LABEL_38:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v43,
    (const MethodInfo_3278A64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return v39 && v40 == 14;
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
          sub_1B68930(List, v6);
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

  if ( (byte_4A08A95 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__, entity);
    byte_4A08A95 = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30E4868 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w22
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_4A08A97 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id);
    sub_1B686D4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B686D4(&CommonReleaseEntity_TypeInfo, v6);
    sub_1B686D4(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v7);
    sub_1B686D4(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__, v8);
    sub_1B686D4(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v9);
    sub_1B686D4(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v10);
    byte_4A08A97 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B68920(System_Collections_Generic_List_CommonReleaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34BBA44 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v14 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Count(
                                                               list,
                                                               (const MethodInfo_3081124 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v14 >= (int)list )
      break;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_30811B4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v12 = list;
      methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
        && (CommonReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(list->fields.items) == id )
      {
        if ( !v11 )
          goto LABEL_20;
        items = v11->fields._items;
        v19 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v11->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)list,
            *(const MethodInfo_34BC278 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v21[4] = (Il2CppClass *)v12;
          sub_1B68678((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v12, v15, v16);
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v14;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v11 )
LABEL_20:
    sub_1B68930(list, v12);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v11,
                                        (const MethodInfo_34BDDD0 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
}
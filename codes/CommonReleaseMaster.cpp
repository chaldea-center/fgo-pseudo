void __fastcall CommonReleaseMaster___ctor(CommonReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1601D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__, method, v2);
    byte_4B1601D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    289,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__ContainQuestClear(
        CommonReleaseMaster_o *this,
        int32_t commonReleaseId,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  CommonReleaseEntity_array *List; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Object_array *v21; // x19
  System_Func_object__bool__o *v22; // x20

  if ( (byte_4B16022 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_CommonReleaseEntity___, *(_QWORD *)&commonReleaseId, *(_QWORD *)&questId);
    sub_1BCA7E0(&System_Func_CommonReleaseEntity__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__, v9, v10);
    sub_1BCA7E0(&CommonReleaseMaster___c__DisplayClass8_0_TypeInfo, v11, v12);
    byte_4B16022 = 1;
  }
  v13 = sub_1BCAA2C(
          CommonReleaseMaster___c__DisplayClass8_0_TypeInfo,
          *(_QWORD *)&commonReleaseId,
          *(_QWORD *)&questId,
          method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = questId;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v16);
  if ( List )
  {
    v21 = (System_Object_array *)List;
    v22 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_CommonReleaseEntity__bool__TypeInfo, v18, v19, v20);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v13,
      Method_CommonReleaseMaster___c__DisplayClass8_0__ContainQuestClear_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__49274176(
                     v21,
                     (System_Func_T__bool__o *)v22,
                     (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_CommonReleaseEntity___);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  CommonReleaseEntity_array *List; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Object_array *v23; // x19
  System_Func_object__bool__o *v24; // x20

  if ( (byte_4B16021 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_CommonReleaseEntity___, *(_QWORD *)&commonReleaseId, *(_QWORD *)&questId);
    sub_1BCA7E0(&System_Func_CommonReleaseEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__, v11, v12);
    sub_1BCA7E0(&CommonReleaseMaster___c__DisplayClass7_0_TypeInfo, v13, v14);
    byte_4B16021 = 1;
  }
  v15 = sub_1BCAA2C(
          CommonReleaseMaster___c__DisplayClass7_0_TypeInfo,
          *(_QWORD *)&commonReleaseId,
          *(_QWORD *)&questId,
          *(_QWORD *)&questPhase);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v16, v17);
  *(_DWORD *)(v15 + 16) = questId;
  *(_DWORD *)(v15 + 20) = questPhase;
  List = CommonReleaseMaster__getList(this, commonReleaseId, v18);
  if ( List )
  {
    v23 = (System_Object_array *)List;
    v24 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_CommonReleaseEntity__bool__TypeInfo, v20, v21, v22);
    System_Func_object__bool____ctor(
      v24,
      (Il2CppObject *)v15,
      Method_CommonReleaseMaster___c__DisplayClass7_0__ContainQuestClearPhase_b__0__,
      0LL);
    LOBYTE(List) = BasicHelper__Any_object__49274176(
                     v23,
                     (System_Func_T__bool__o *)v24,
                     (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_CommonReleaseEntity___);
  }
  return (char)List;
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_o *__fastcall CommonReleaseMaster__GetEntity(
        CommonReleaseMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1601B & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&priority);
    byte_4B1601B = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (CommonReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonReleaseMaster__IsContainCondType(
        CommonReleaseMaster_o *this,
        int32_t targetId,
        int32_t condType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  Il2CppObject *Item; // x0
  const MethodInfo *v14; // x3
  __int64 methodPtr_low; // x10
  int monitor_high; // w8

  if ( (byte_4B1601F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&targetId,
      *(_QWORD *)&condType);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&CommonReleaseEntity_TypeInfo, v9, v10);
    byte_4B1601F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_15:
    sub_1BCAA3C(list, *(_QWORD *)&targetId);
  v12 = 0;
  while ( 1 )
  {
    if ( v12 >= System_Collections_ObjectModel_Collection_object___get_Count(
                  list,
                  (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) )
      return 0;
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_15;
    Item = System_Collections_ObjectModel_Collection_object___get_Item(
             list,
             v12,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( Item )
    {
      methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
        && (CommonReleaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == CommonReleaseEntity_TypeInfo
        && LODWORD(Item[1].klass) == targetId )
      {
        monitor_high = HIDWORD(Item[1].monitor);
        if ( monitor_high == condType
          || monitor_high == 113 && CommonReleaseMaster__IsContainCondType(this, (int32_t)Item[2].klass, condType, v14) )
        {
          return 1;
        }
      }
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    ++v12;
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
          sub_1BCAA44(List, v12);
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
      sub_1BCAA3C(List, v12);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v35; // x20
  __int64 v36; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  const MethodInfo *v38; // x2
  System_Collections_ObjectModel_Collection_T__c *klass; // x8
  System_Collections_ObjectModel_Collection_T__o *v40; // x21
  unsigned int v41; // w27
  bool v42; // w22
  int32_t *v43; // x23
  CommonReleaseCondOverwriter_c *v44; // x8
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  int32_t v48; // w24
  int32_t v49; // w26
  int64_t v50; // x25
  char IsOpen; // w0
  bool v52; // w19
  int v53; // w20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v55; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v56; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B16020 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&id,
      overwriter);
    sub_1BCA7E0(&CommonReleaseCondOverwriter_TypeInfo, v9, v10);
    sub_1BCA7E0(&CondType_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__get_Values__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__, v27, v28);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__,
      v29,
      v30);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__get_Current__,
      v31,
      v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__, v33, v34);
    byte_4B16020 = 1;
  }
  memset(&v56, 0, sizeof(v56));
  if ( (id & 0x80000000) != 0 )
    return 0;
  v35 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                *(_QWORD *)&id,
                                                                overwriter,
                                                                isCheckMaterialHistory);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v35,
    (const MethodInfo_31F6AE8 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_39;
  if ( System_Collections_ObjectModel_Collection_object___get_Count(
         list,
         (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)CommonReleaseMaster__getList(this, id, v38);
  if ( !list )
    goto LABEL_39;
  klass = list[1].klass;
  v40 = list;
  if ( !klass )
    return 0;
  if ( (int)klass >= 1 )
  {
    v41 = 0;
    v42 = isCheckMaterialHistory;
    while ( 1 )
    {
      if ( v41 >= (unsigned int)klass )
        sub_1BCAA44(list, v36);
      v43 = (int32_t *)*((_QWORD *)&v40[1].monitor + (int)v41);
      if ( !v43 || !v35 )
        break;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v35,
              v43[6],
              (const MethodInfo_31F76BC *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__)
        || (list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                       v35,
                                                                       v43[6],
                                                                       (const MethodInfo_31F7418 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__),
            ((unsigned __int8)list & 1) != 0) )
      {
        if ( overwriter )
        {
          v44 = overwriter->klass;
          v45 = *(unsigned __int16 *)(&overwriter->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&overwriter->klass->_2.bitflags2 + 3) )
          {
            p_offset = &v44->_1.interfaceOffsets->offset;
            while ( *((CommonReleaseCondOverwriter_c **)p_offset - 1) != CommonReleaseCondOverwriter_TypeInfo )
            {
              --v45;
              p_offset += 4;
              if ( !v45 )
                goto LABEL_20;
            }
            p_method = (__int64)&v44->vtable[*p_offset].method;
          }
          else
          {
LABEL_20:
            p_method = sub_1C1C7C0(overwriter, CommonReleaseCondOverwriter_TypeInfo, 0LL);
          }
          IsOpen = (*(__int64 (__fastcall **)(CommonReleaseCondOverwriter_o *, int32_t *, _QWORD))p_method)(
                     overwriter,
                     v43,
                     *(_QWORD *)(p_method + 8));
        }
        else
        {
          v49 = v43[7];
          v48 = v43[8];
          v50 = v43[9];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v36);
          IsOpen = CondType__IsOpen(v49, v48, v50, v42, 0LL, 0LL);
        }
        System_Collections_Generic_Dictionary_int__bool___set_Item(
          v35,
          v43[6],
          IsOpen & 1,
          (const MethodInfo_31F74A8 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
      }
      LODWORD(klass) = v40[1].klass;
      if ( (int)++v41 >= (int)klass )
        goto LABEL_28;
    }
LABEL_39:
    sub_1BCAA3C(list, v36);
  }
LABEL_28:
  if ( !v35 )
    goto LABEL_39;
  if ( System_Collections_Generic_Dictionary_int__bool___get_Count(
         v35,
         (const MethodInfo_31F7168 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Count__) < 1 )
    return 1;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__bool___get_Values(
                                                             v35,
                                                             (const MethodInfo_31F72C8 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Values__);
  if ( !list )
    goto LABEL_39;
  System_Collections_Generic_Dictionary_ValueCollection_int__bool___GetEnumerator(
    &v55,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)list,
    (const MethodInfo_38CC444 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__bool__GetEnumerator__);
  v56 = v55;
  while ( 1 )
  {
    v52 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___MoveNext(
            &v56,
            (const MethodInfo_33542F0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__MoveNext__);
    if ( !v52 )
      break;
    if ( LOBYTE(v56.fields._currentValue) )
    {
      v53 = 14;
      goto LABEL_38;
    }
  }
  v53 = 15;
LABEL_38:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool___Dispose(
    &v56,
    (const MethodInfo_33542EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__bool__Dispose__);
  return v52 && v53 == 14;
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
          sub_1BCAA3C(List, v6);
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

  if ( (byte_4B1601C & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B1601C = 1;
  }
  PK = (Il2CppObject *)CommonReleaseEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_CommonReleaseMaster__CommonReleaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
CommonReleaseEntity_array *__fastcall CommonReleaseMaster__getList(
        CommonReleaseMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_List_object__o *v18; // x21
  int64_t v19; // x1
  int64_t list; // x0
  int32_t v21; // w22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0

  if ( (byte_4B1601E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&id, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v6, v7);
    sub_1BCA7E0(&CommonReleaseEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonReleaseEntity__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_CommonReleaseEntity__TypeInfo, v16, v17);
    byte_4B1601E = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_CommonReleaseEntity__TypeInfo,
                                                       *(_QWORD *)&id,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_CommonReleaseEntity___ctor__);
  list = (int64_t)this->fields.list;
  if ( !list )
    goto LABEL_20;
  v21 = 0;
  while ( 1 )
  {
    list = System_Collections_ObjectModel_Collection_object___get_Count(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( v21 >= (int)list )
      break;
    list = (int64_t)this->fields.list;
    if ( !list )
      goto LABEL_20;
    list = (int64_t)System_Collections_ObjectModel_Collection_object___get_Item(
                      (System_Collections_ObjectModel_Collection_T__o *)list,
                      v21,
                      (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( list )
    {
      v19 = list;
      methodPtr_low = LOBYTE(CommonReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) >= (unsigned int)methodPtr_low
        && *(CommonReleaseEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) == CommonReleaseEntity_TypeInfo
        && *(_DWORD *)(list + 16) == id )
      {
        if ( !v18 )
          goto LABEL_20;
        items = v18->fields._items;
        v30 = Method_System_Collections_Generic_List_CommonReleaseEntity__Add__;
        ++v18->fields._version;
        if ( !items )
          goto LABEL_20;
        size = v18->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v18,
            (Il2CppObject *)list,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v18->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v19;
          sub_1BCA784((PartyOrganizationUtility_o *)(v32 + 4), v19, v22, v23, v24, v25, v26, v27);
        }
      }
    }
    list = (int64_t)this->fields.list;
    ++v21;
    if ( !list )
      goto LABEL_20;
  }
  if ( !v18 )
LABEL_20:
    sub_1BCAA3C(list, v19);
  return (CommonReleaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v18,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_CommonReleaseEntity__ToArray__);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return v->fields.condType == 1 && v->fields.condId == this->fields.questId;
}
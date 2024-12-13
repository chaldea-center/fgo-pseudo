void __fastcall TreasureDeviceSequenceWeightMaster___ctor(
        TreasureDeviceSequenceWeightMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B37D33 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__,
      method);
    byte_4B37D33 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    454,
    (const MethodInfo_31D2208 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B37D34 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__,
      *(_QWORD *)&treasureDeviceId);
    byte_4B37D34 = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   PK,
                                                   (const MethodInfo_31D2248 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntityByDescendingPriority(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeState,
        int32_t genderType,
        int32_t patternId,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *v22; // x25
  TreasureDeviceSequenceWeightEntity_o *result; // x0
  _BOOL8 v24; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x23
  System_Func_object__bool__o *v26; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x23
  System_Func_object__int__o *_9__3_1; // x24
  Il2CppObject *v31; // x25
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Object_array *v40; // x23
  bool IsNullOrEmpty; // w8
  int max_length; // w8
  int v43; // w9
  int32_t v44; // w10

  if ( (byte_4B37D31 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_getEntitys_TreasureDeviceSequenceWeightEntity___, *(_QWORD *)&treasureDeviceId);
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___, v13);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___, v14);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___, v15);
    sub_1BD3458(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo, v16);
    sub_1BD3458(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo, v17);
    sub_1BD3458(&Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__, v18);
    sub_1BD3458(
      &Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
      v19);
    sub_1BD3458(&TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo, v20);
    sub_1BD3458(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v21);
    byte_4B37D31 = 1;
  }
  v22 = (TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *)sub_1BD36A4(TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
  TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_23;
  v22->fields.treasureDeviceId = treasureDeviceId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2F31F18 *)Method_DataMasterBase_getEntitys_TreasureDeviceSequenceWeightEntity___);
  v26 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v22,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
    0LL);
  v27 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v28 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v29 = v27;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v28 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v28->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v31,
      Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__3_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__3_1, (int64_t)_9__3_1, v33, v34, v35, v36, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v29,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_2F5AC70 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v40 = System_Linq_Enumerable__ToArray_object_(
          v39,
          (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v40, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( !v40 )
      goto LABEL_23;
    max_length = v40->max_length;
    if ( max_length >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        if ( max_length == v43 )
          sub_1BD36BC(result, v24);
        result = (TreasureDeviceSequenceWeightEntity_o *)v40->m_Items[v43];
        if ( !result )
          break;
        v44 = result->fields.limitCount;
        v24 = v44 != -1;
        if ( (v44 == limitCount || !v24)
          && (result->fields.npChargeStage == npChargeState || result->fields.npChargeStage == -1)
          && (result->fields.playerGenderType == genderType || result->fields.playerGenderType == -1)
          && (result->fields.patternId == patternId || result->fields.patternId == -1) )
        {
          return result;
        }
        if ( max_length == ++v43 )
          return 0LL;
      }
LABEL_23:
      sub_1BD36B4(result, v24);
    }
    return 0LL;
  }
  return result;
}


TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntityWithCommonPattern(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v10; // x5
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x5
  TreasureDeviceSequenceWeightEntity_o *v14; // [xsp+8h] [xbp-48h] BYREF
  TreasureDeviceSequenceWeightEntity_o *v15; // [xsp+10h] [xbp-40h] BYREF
  TreasureDeviceSequenceWeightEntity_o *v16; // [xsp+18h] [xbp-38h] BYREF
  TreasureDeviceSequenceWeightEntity_o *entity; // [xsp+28h] [xbp-28h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v14 = 0LL;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &entity, treasureDeviceId, limitCount, npChargeStage, v5) )
    return entity;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v16, treasureDeviceId, limitCount, -1, v10) )
    return v16;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v15, treasureDeviceId, -1, npChargeStage, v12) )
    return v15;
  if ( TreasureDeviceSequenceWeightMaster__TryGetEntity(this, &v14, treasureDeviceId, -1, -1, v13) )
    return v14;
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall TreasureDeviceSequenceWeightMaster__GetMaxPatternId(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *v14; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_object; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v23; // x21
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x19
  Il2CppObject *v34; // x8

  if ( (byte_4B37D32 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataMasterBase_getEntitys_TreasureDeviceSequenceWeightEntity___, *(_QWORD *)&treasureDeviceId);
    sub_1BD3458(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___, v5);
    sub_1BD3458(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___, v6);
    sub_1BD3458(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___, v7);
    sub_1BD3458(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo, v8);
    sub_1BD3458(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo, v9);
    sub_1BD3458(&Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__, v10);
    sub_1BD3458(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__, v11);
    sub_1BD3458(&TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo, v12);
    sub_1BD3458(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v13);
    byte_4B37D32 = 1;
  }
  v14 = (TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *)sub_1BD36A4(TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
  TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  v14->fields.treasureDeviceId = treasureDeviceId;
  Entitys_object = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_object_(
                                                                          (DataMasterBase_o *)this,
                                                                          (const MethodInfo_2F31F18 *)Method_DataMasterBase_getEntitys_TreasureDeviceSequenceWeightEntity___);
  v18 = (System_Func_object__bool__o *)sub_1BD36A4(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          Entitys_object,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2F70C40 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v21 = v19;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v20->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1BD36A4(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v23,
      Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__4_1;
    sub_1BD33FC((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2F5AC70 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_2F6ADB4 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v32, 0LL);
  if ( IsNullOrEmpty )
    return -1;
  if ( !v32 )
    goto LABEL_16;
  if ( !v32->max_length )
    sub_1BD36BC(IsNullOrEmpty, v16);
  v34 = v32->m_Items[0];
  if ( !v34 )
LABEL_16:
    sub_1BD36B4(IsNullOrEmpty, v16);
  return HIDWORD(v34[3].monitor);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TreasureDeviceSequenceWeightMaster__TryGetEntity(
        TreasureDeviceSequenceWeightMaster_o *this,
        TreasureDeviceSequenceWeightEntity_o **entity,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeStage,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B37D35 & 1) == 0 )
  {
    sub_1BD3458(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__,
      entity);
    byte_4B37D35 = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&limitCount);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31D2298 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
}


void __fastcall TreasureDeviceSequenceWeightMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B37D36 & 1) == 0 )
  {
    sub_1BD3458(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v1);
    byte_4B37D36 = 1;
  }
  v2 = (Il2CppObject *)sub_1BD36A4(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields->__9 = (struct TreasureDeviceSequenceWeightMaster___c_o *)v2;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall TreasureDeviceSequenceWeightMaster___c___ctor(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall TreasureDeviceSequenceWeightMaster___c___GetEntityByDescendingPriority_b__3_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BD36B4(this, 0LL);
  return e->fields.priority;
}


int32_t __fastcall TreasureDeviceSequenceWeightMaster___c___GetMaxPatternId_b__4_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BD36B4(this, 0LL);
  return e->fields.patternId;
}


void __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0___ctor(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0___GetEntityByDescendingPriority_b__0(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BD36B4(this, 0LL);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}


void __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0___ctor(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0___GetMaxPatternId_b__0(
        TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BD36B4(this, 0LL);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}
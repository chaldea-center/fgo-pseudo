void __fastcall TreasureDeviceSequenceWeightMaster___ctor(
        TreasureDeviceSequenceWeightMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BDD114 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
    byte_4BDD114 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    458,
    (const MethodInfo_325E55C *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
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

  if ( (byte_4BDD115 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
    byte_4BDD115 = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   PK,
                                                   (const MethodInfo_3260880 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
}


TreasureDeviceSequenceWeightEntity_o *__fastcall TreasureDeviceSequenceWeightMaster__GetEntityByDescendingPriority(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        int32_t limitCount,
        int32_t npChargeState,
        int32_t genderType,
        int32_t patternId,
        const MethodInfo *method)
{
  __int64 v13; // x25
  TreasureDeviceSequenceWeightEntity_o *result; // x0
  _BOOL8 v15; // x1
  __int64 v16; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x23
  System_Func_object__bool__o *v18; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x23
  System_Func_object__int__o *_9__3_1; // x24
  Il2CppObject *v23; // x25
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x23
  bool IsNullOrEmpty; // w8
  int max_length; // w8
  int v35; // w9
  int32_t v36; // w10

  if ( (byte_4BDD112 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
    sub_1C21E38(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    sub_1C21E38(&Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__);
    sub_1C21E38(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__);
    sub_1C21E38(&TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C21E38(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_4BDD112 = 1;
  }
  v13 = sub_1C22084(TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_23;
  *(_DWORD *)(v13 + 16) = treasureDeviceId;
  v16 = sub_1C21F6C(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___
                      + 40)));
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(TreasureDeviceSequenceWeightMaster_o *, __int64))(v16 + 8))(
                                                               this,
                                                               v16);
  v18 = (System_Func_object__bool__o *)sub_1C22084(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v13,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v21 = v19;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v20->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v23,
      Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__3_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__3_1, (int64_t)_9__3_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v21,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v32, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( !v32 )
      goto LABEL_23;
    max_length = v32->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( max_length == v35 )
          sub_1C2209C(result, v15);
        result = (TreasureDeviceSequenceWeightEntity_o *)v32->m_Items[v35];
        if ( !result )
          break;
        v36 = result->fields.limitCount;
        v15 = v36 != -1;
        if ( (v36 == limitCount || !v15)
          && (result->fields.npChargeStage == npChargeState || result->fields.npChargeStage == -1)
          && (result->fields.playerGenderType == genderType || result->fields.playerGenderType == -1)
          && (result->fields.patternId == patternId || result->fields.patternId == -1) )
        {
          return result;
        }
        if ( max_length == ++v35 )
          return 0LL;
      }
LABEL_23:
      sub_1C22094(result, v15);
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


int32_t __fastcall TreasureDeviceSequenceWeightMaster__GetMaxPatternId(
        TreasureDeviceSequenceWeightMaster_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v15; // x21
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Object_array *v24; // x19
  Il2CppObject *v26; // x8

  if ( (byte_4BDD113 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
    sub_1C21E38(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    sub_1C21E38(&Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__);
    sub_1C21E38(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__);
    sub_1C21E38(&TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
    sub_1C21E38(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_4BDD113 = 1;
  }
  v5 = sub_1C22084(TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_DWORD *)(v5 + 16) = treasureDeviceId;
  v8 = sub_1C21F6C(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                   + 2
                   * *((unsigned __int16 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___
                     + 40)));
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(TreasureDeviceSequenceWeightMaster_o *, __int64))(v8 + 8))(
                                                              this,
                                                              v8);
  v10 = (System_Func_object__bool__o *)sub_1C22084(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__,
    0LL);
  v11 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v12 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v13 = v11;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v12 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v12->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v15,
      Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__4_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v17, v18, v19, v20, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v13,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v24 = System_Linq_Enumerable__ToArray_object_(
          v23,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v24, 0LL);
  if ( IsNullOrEmpty )
    return -1;
  if ( !v24 )
    goto LABEL_16;
  if ( !v24->max_length )
    sub_1C2209C(IsNullOrEmpty, v7);
  v26 = v24->m_Items[0];
  if ( !v26 )
LABEL_16:
    sub_1C22094(IsNullOrEmpty, v7);
  return HIDWORD(v26[3].monitor);
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

  if ( (byte_4BDD116 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
    byte_4BDD116 = 1;
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
           (const MethodInfo_32608CC *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
}


void __fastcall TreasureDeviceSequenceWeightMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDD117 & 1) == 0 )
  {
    sub_1C21E38(&TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    byte_4BDD117 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields->__9 = (struct TreasureDeviceSequenceWeightMaster___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return e->fields.priority;
}


int32_t __fastcall TreasureDeviceSequenceWeightMaster___c___GetMaxPatternId_b__4_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(this, 0LL);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}
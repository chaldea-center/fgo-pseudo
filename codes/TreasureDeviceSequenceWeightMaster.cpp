void __fastcall TreasureDeviceSequenceWeightMaster___ctor(
        TreasureDeviceSequenceWeightMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22B6F & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__,
      method);
    byte_4C22B6F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    460,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string___ctor__);
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

  if ( (byte_4C22B70 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__,
      *(_QWORD *)&treasureDeviceId);
    byte_4C22B70 = 1;
  }
  PK = (Il2CppObject *)TreasureDeviceSequenceWeightEntity__CreatePK(
                         treasureDeviceId,
                         limitCount,
                         npChargeStage,
                         *(const MethodInfo **)&npChargeStage);
  return (TreasureDeviceSequenceWeightEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                   PK,
                                                   (const MethodInfo_329F900 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__GetEntity__);
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
  __int64 v22; // x25
  TreasureDeviceSequenceWeightEntity_o *result; // x0
  _BOOL8 v24; // x1
  __int64 v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x23
  System_Func_object__bool__o *v27; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x23
  System_Func_object__int__o *_9__3_1; // x24
  Il2CppObject *v32; // x25
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Object_array *v41; // x23
  bool IsNullOrEmpty; // w8
  int max_length; // w8
  int v44; // w9
  int32_t v45; // w10

  if ( (byte_4C22B6D & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___,
      *(_QWORD *)&treasureDeviceId);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___, v13);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___, v14);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___, v15);
    sub_1C3B764(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo, v16);
    sub_1C3B764(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo, v17);
    sub_1C3B764(&Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__, v18);
    sub_1C3B764(
      &Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
      v19);
    sub_1C3B764(&TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo, v20);
    sub_1C3B764(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v21);
    byte_4C22B6D = 1;
  }
  v22 = sub_1C3B9B0(TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_23;
  *(_DWORD *)(v22 + 16) = treasureDeviceId;
  v25 = sub_1C3B898(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___
                      + 40)));
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(TreasureDeviceSequenceWeightMaster_o *, __int64))(v25 + 8))(
                                                               this,
                                                               v25);
  v27 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v22,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass3_0__GetEntityByDescendingPriority_b__0__,
    0LL);
  v28 = System_Linq_Enumerable__Where_object_(
          v26,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v29 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v30 = v28;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v29 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__int__o *)v29->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__3_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_1,
      v32,
      Method_TreasureDeviceSequenceWeightMaster___c__GetEntityByDescendingPriority_b__3_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__3_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__3_1, (int64_t)_9__3_1, v34, v35, v36, v37, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v30,
                                                               (System_Func_TSource__TKey__o *)_9__3_1,
                                                               (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v41 = System_Linq_Enumerable__ToArray_object_(
          v40,
          (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v41, 0LL);
  result = 0LL;
  if ( !IsNullOrEmpty )
  {
    if ( !v41 )
      goto LABEL_23;
    max_length = v41->max_length;
    if ( max_length >= 1 )
    {
      v44 = 0;
      while ( 1 )
      {
        if ( max_length == v44 )
          sub_1C3B9C8(result, v24);
        result = (TreasureDeviceSequenceWeightEntity_o *)v41->m_Items[v44];
        if ( !result )
          break;
        v45 = result->fields.limitCount;
        v24 = v45 != -1;
        if ( (v45 == limitCount || !v24)
          && (result->fields.npChargeStage == npChargeState || result->fields.npChargeStage == -1)
          && (result->fields.playerGenderType == genderType || result->fields.playerGenderType == -1)
          && (result->fields.patternId == patternId || result->fields.patternId == -1) )
        {
          return result;
        }
        if ( max_length == ++v44 )
          return 0LL;
      }
LABEL_23:
      sub_1C3B9C0(result, v24);
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
  __int64 v14; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  System_Func_object__bool__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  TreasureDeviceSequenceWeightMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  System_Func_object__int__o *_9__4_1; // x20
  Il2CppObject *v24; // x21
  struct TreasureDeviceSequenceWeightMaster___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Object_array *v33; // x19
  Il2CppObject *v35; // x8

  if ( (byte_4C22B6E & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___,
      *(_QWORD *)&treasureDeviceId);
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___, v6);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___, v7);
    sub_1C3B764(&System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo, v8);
    sub_1C3B764(&System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo, v9);
    sub_1C3B764(&Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__, v10);
    sub_1C3B764(&Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__, v11);
    sub_1C3B764(&TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo, v12);
    sub_1C3B764(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v13);
    byte_4C22B6E = 1;
  }
  v14 = sub_1C3B9B0(TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_16;
  *(_DWORD *)(v14 + 16) = treasureDeviceId;
  v17 = sub_1C3B898(*((_QWORD *)&this->klass->vtable._1_Finalize.methodPtr
                    + 2
                    * *((unsigned __int16 *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__getEntitys_TreasureDeviceSequenceWeightEntity___
                      + 40)));
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(TreasureDeviceSequenceWeightMaster_o *, __int64))(v17 + 8))(
                                                               this,
                                                               v17);
  v19 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_TreasureDeviceSequenceWeightEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_TreasureDeviceSequenceWeightMaster___c__DisplayClass4_0__GetMaxPatternId_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_TreasureDeviceSequenceWeightEntity___);
  v21 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  v22 = v20;
  if ( !TreasureDeviceSequenceWeightMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
    v21 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
  }
  _9__4_1 = (System_Func_object__int__o *)v21->static_fields->__9__4_1;
  if ( !_9__4_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = TreasureDeviceSequenceWeightMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__4_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_TreasureDeviceSequenceWeightEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__4_1,
      v24,
      Method_TreasureDeviceSequenceWeightMaster___c__GetMaxPatternId_b__4_1__,
      0LL);
    static_fields = TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_1 = (struct System_Func_TreasureDeviceSequenceWeightEntity__int__o *)_9__4_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__4_1, (int64_t)_9__4_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v22,
                                                               (System_Func_TSource__TKey__o *)_9__4_1,
                                                               (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_TreasureDeviceSequenceWeightEntity__int___);
  v33 = System_Linq_Enumerable__ToArray_object_(
          v32,
          (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_TreasureDeviceSequenceWeightEntity___);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v33, 0LL);
  if ( IsNullOrEmpty )
    return -1;
  if ( !v33 )
    goto LABEL_16;
  if ( !v33->max_length )
    sub_1C3B9C8(IsNullOrEmpty, v16);
  v35 = v33->m_Items[0];
  if ( !v35 )
LABEL_16:
    sub_1C3B9C0(IsNullOrEmpty, v16);
  return HIDWORD(v35[3].monitor);
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

  if ( (byte_4C22B71 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__,
      entity);
    byte_4C22B71 = 1;
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
           (const MethodInfo_329F94C *)Method_DataMasterBase_TreasureDeviceSequenceWeightMaster__TreasureDeviceSequenceWeightEntity__string__TryGetEntity__);
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

  if ( (byte_4C22B72 & 1) == 0 )
  {
    sub_1C3B764(&TreasureDeviceSequenceWeightMaster___c_TypeInfo, v1);
    byte_4C22B72 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(TreasureDeviceSequenceWeightMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  TreasureDeviceSequenceWeightMaster___c_TypeInfo->static_fields->__9 = (struct TreasureDeviceSequenceWeightMaster___c_o *)v2;
  sub_1C3B708(
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
    sub_1C3B9C0(this, 0LL);
  return e->fields.priority;
}


int32_t __fastcall TreasureDeviceSequenceWeightMaster___c___GetMaxPatternId_b__4_1(
        TreasureDeviceSequenceWeightMaster___c_o *this,
        TreasureDeviceSequenceWeightEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return e->fields.treasureDeviceId == this->fields.treasureDeviceId;
}
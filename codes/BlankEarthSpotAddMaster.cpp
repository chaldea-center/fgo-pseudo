void __fastcall BlankEarthSpotAddMaster___ctor(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7764 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__, method);
    byte_4BC7764 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    19,
    (const MethodInfo_324AE0C *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *__fastcall BlankEarthSpotAddMaster__GetEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BC7765 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__,
      *(_QWORD *)&blankEarthSpotId);
    byte_4BC7765 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&overwriteType);
  return (BlankEarthSpotAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_324D130 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *__fastcall BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
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
  __int64 v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  BlankEarthSpotAddMaster___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_object__int__o *_9__1_1; // x21
  Il2CppObject *v30; // x22
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  System_Func_object__bool__o *v39; // x21

  if ( (byte_4BC7763 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___, *(_QWORD *)&type);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___, v11);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___, v12);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___, v13);
    sub_1C1ABD4(&System_Func_BlankEarthSpotAddEntity__int__TypeInfo, v14);
    sub_1C1ABD4(&System_Func_BlankEarthSpotAddEntity__bool__TypeInfo, v15);
    sub_1C1ABD4(&Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__, v16);
    sub_1C1ABD4(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__, v17);
    sub_1C1ABD4(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__, v18);
    sub_1C1ABD4(&BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo, v19);
    sub_1C1ABD4(&BlankEarthSpotAddMaster___c_TypeInfo, v20);
    byte_4BC7763 = 1;
  }
  v21 = sub_1C1AE20(BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    sub_1C1AE30(v22, v23);
  *(_DWORD *)(v21 + 20) = type;
  *(_DWORD *)(v21 + 24) = beforeClearQuestId;
  *(_DWORD *)(v21 + 16) = blankEarthSpotId;
  *(_BYTE *)(v21 + 28) = isCheckResetFlag;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2FC80C8 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
  v25 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__Where_object_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2FDED84 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
  v27 = BlankEarthSpotAddMaster___c_TypeInfo;
  v28 = v26;
  if ( !BlankEarthSpotAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotAddMaster___c_TypeInfo);
    v27 = BlankEarthSpotAddMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v27->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BlankEarthSpotAddMaster___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C1AE20(System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__1_1,
      v30,
      Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__,
      0LL);
    static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_1 = (struct System_Func_BlankEarthSpotAddEntity__int__o *)_9__1_1;
    sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->__9__1_1, (int64_t)_9__1_1, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v28,
                                                               (System_Func_TSource__TKey__o *)_9__1_1,
                                                               (const MethodInfo_2FC8568 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
  v39 = (System_Func_object__bool__o *)sub_1C1AE20(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v39,
    (Il2CppObject *)v21,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__,
    0LL);
  return (BlankEarthSpotAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50081164(
                                        v38,
                                        (System_Func_TSource__bool__o *)v39,
                                        (const MethodInfo_2FC2D8C *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
}


bool __fastcall BlankEarthSpotAddMaster__HasAnyRecord(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0

  if ( (byte_4BC7762 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__, method);
    byte_4BC7762 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C1AE30(0LL, method);
  return System_Collections_ObjectModel_Collection_object___get_Count(
           list,
           (const MethodInfo_31E297C *)Method_System_Collections_ObjectModel_Collection_BlankEarthSpotAddEntity__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthSpotAddMaster__TryGetEntity(
        BlankEarthSpotAddMaster_o *this,
        BlankEarthSpotAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BC7766 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__, entity);
    byte_4BC7766 = 1;
  }
  PK = (Il2CppObject *)BlankEarthSpotAddEntity__CreatePK(
                         blankEarthSpotId,
                         priority,
                         overwriteType,
                         *(const MethodInfo **)&priority);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_324D17C *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
}


void __fastcall BlankEarthSpotAddMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC7767 & 1) == 0 )
  {
    sub_1C1ABD4(&BlankEarthSpotAddMaster___c_TypeInfo, v1);
    byte_4BC7767 = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BlankEarthSpotAddMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BlankEarthSpotAddMaster___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAddMaster___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BlankEarthSpotAddMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BlankEarthSpotAddMaster___c___ctor(BlankEarthSpotAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotAddMaster___c___GetPrioredAvailableEntity_b__1_1(
        BlankEarthSpotAddMaster___c_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return -x->fields.priority;
}


void __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___ctor(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__0(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C1AE30(this, 0LL);
  return x->fields.blankEarthSpotId == this->fields.blankEarthSpotId
      && x->fields.overwriteType == this->fields.typeAsInt;
}


bool __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__2(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1C1AE30(this, 0LL);
  return BlankEarthSpotAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, v3);
}
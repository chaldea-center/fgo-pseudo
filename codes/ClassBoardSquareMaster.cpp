void __fastcall ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FBA09 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__, method);
    byte_40FBA09 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    427,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetAllEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ClassBoardSquareMaster___c__DisplayClass0_0_o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_40FBA07 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v8);
    sub_B16FFC(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v9);
    sub_B16FFC(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v10);
    sub_B16FFC(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__, v11);
    sub_B16FFC(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo, v12);
    byte_40FBA07 = 1;
  }
  v13 = (ClassBoardSquareMaster___c__DisplayClass0_0_o *)sub_B170CC(
                                                           ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo,
                                                           *(_QWORD *)&baseId,
                                                           method,
                                                           v3,
                                                           v4);
  ClassBoardSquareMaster___c__DisplayClass0_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ClassBoardSquareEntity__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v20,
                                           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FBA0A & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_40FBA0A = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266F7D8 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetOtherThanNoneEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  ClassBoardSquareMaster___c__DisplayClass1_0_o *v13; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_40FBA08 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v8);
    sub_B16FFC(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v9);
    sub_B16FFC(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v10);
    sub_B16FFC(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__, v11);
    sub_B16FFC(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v12);
    byte_40FBA08 = 1;
  }
  v13 = (ClassBoardSquareMaster___c__DisplayClass1_0_o *)sub_B170CC(
                                                           ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo,
                                                           *(_QWORD *)&baseId,
                                                           method,
                                                           v3,
                                                           v4);
  ClassBoardSquareMaster___c__DisplayClass1_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ClassBoardSquareEntity__bool__TypeInfo,
                                                                             v15,
                                                                             v16,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v20,
                                           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardSquareMaster__TryGetEntity(
        ClassBoardSquareMaster_o *this,
        ClassBoardSquareEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FBA0B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__, entity);
    byte_40FBA0B = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
}


void __fastcall ClassBoardSquareMaster___c__DisplayClass0_0___ctor(
        ClassBoardSquareMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareMaster___c__DisplayClass0_0___GetAllEntity_b__0(
        ClassBoardSquareMaster___c__DisplayClass0_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.classBoardBaseId == this->fields.baseId;
}


void __fastcall ClassBoardSquareMaster___c__DisplayClass1_0___ctor(
        ClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardSquareMaster___c__DisplayClass1_0___GetOtherThanNoneEntity_b__0(
        ClassBoardSquareMaster___c__DisplayClass1_0_o *this,
        ClassBoardSquareEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}
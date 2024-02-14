void __fastcall ClassBoardSquareMaster___ctor(ClassBoardSquareMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42146B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__, method);
    byte_42146B9 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    427,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetAllEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ClassBoardSquareMaster___c__DisplayClass0_0_o *v11; // x21
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_42146B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_B0D8A4(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__, v9);
    sub_B0D8A4(&ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo, v10);
    byte_42146B7 = 1;
  }
  v11 = (ClassBoardSquareMaster___c__DisplayClass0_0_o *)sub_B0D974(
                                                           ClassBoardSquareMaster___c__DisplayClass0_0_TypeInfo,
                                                           *(_QWORD *)&baseId,
                                                           method);
  ClassBoardSquareMaster___c__DisplayClass0_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ClassBoardSquareEntity__bool__TypeInfo,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_ClassBoardSquareMaster___c__DisplayClass0_0__GetAllEntity_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v17,
                                           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_o *__fastcall ClassBoardSquareMaster__GetEntity(
        ClassBoardSquareMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42146BA & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_42146BA = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardSquareEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                       (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                       PK,
                                       (const MethodInfo_266A024 *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardSquareEntity_array *__fastcall ClassBoardSquareMaster__GetOtherThanNoneEntity(
        ClassBoardSquareMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ClassBoardSquareMaster___c__DisplayClass1_0_o *v11; // x21
  __int64 v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_42146B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___, *(_QWORD *)&baseId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___, v6);
    sub_B0D8A4(&Method_System_Func_ClassBoardSquareEntity__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_ClassBoardSquareEntity__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__, v9);
    sub_B0D8A4(&ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo, v10);
    byte_42146B8 = 1;
  }
  v11 = (ClassBoardSquareMaster___c__DisplayClass1_0_o *)sub_B0D974(
                                                           ClassBoardSquareMaster___c__DisplayClass1_0_TypeInfo,
                                                           *(_QWORD *)&baseId,
                                                           method);
  ClassBoardSquareMaster___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_ClassBoardSquareEntity___);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ClassBoardSquareEntity__bool__TypeInfo,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_ClassBoardSquareMaster___c__DisplayClass1_0__GetOtherThanNoneEntity_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardSquareEntity__bool___ctor__);
  v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          Entitys_WarQuestSelectionEntity,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ClassBoardSquareEntity___);
  return (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                           v17,
                                           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
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

  if ( (byte_42146BB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__, entity);
    byte_42146BB = 1;
  }
  PK = ClassBoardSquareEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ClassBoardSquareMaster__ClassBoardSquareEntity__string__TryGetEntity__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.classBoardBaseId == this->fields.baseId && x->fields.skillType != 0;
}
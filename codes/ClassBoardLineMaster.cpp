void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40FB96F & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__, method);
    byte_40FB96F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    425,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *AllEntityEnumerable; // x0

  if ( (byte_40FB96D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___, *(_QWORD *)&baseId);
    byte_40FB96D = 1;
  }
  AllEntityEnumerable = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardLineMaster__GetAllEntityEnumerable(
                                                                               this,
                                                                               baseId,
                                                                               method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         AllEntityEnumerable,
                                         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
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
  ClassBoardLineMaster___c__DisplayClass1_0_o *v12; // x21
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40FB96E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_getEntitys_ClassBoardLineEntity___, *(_QWORD *)&baseId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___, v7);
    sub_B16FFC(&Method_System_Func_ClassBoardLineEntity__bool___ctor__, v8);
    sub_B16FFC(&System_Func_ClassBoardLineEntity__bool__TypeInfo, v9);
    sub_B16FFC(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__, v10);
    sub_B16FFC(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo, v11);
    byte_40FB96E = 1;
  }
  v12 = (ClassBoardLineMaster___c__DisplayClass1_0_o *)sub_B170CC(
                                                         ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo,
                                                         *(_QWORD *)&baseId,
                                                         method,
                                                         v3,
                                                         v4);
  ClassBoardLineMaster___c__DisplayClass1_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ClassBoardLineEntity__bool__TypeInfo,
                                                                             v14,
                                                                             v15,
                                                                             v16,
                                                                             v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ClassBoardLineEntity__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                             Entitys_WarQuestSelectionEntity,
                                                                             (System_Func_TSource__bool__o *)v18,
                                                                             (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40FB970 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_40FB970 = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardLineEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266F7D8 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardLineMaster__TryGetEntity(
        ClassBoardLineMaster_o *this,
        ClassBoardLineEntity_o **entity,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40FB971 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__, entity);
    byte_40FB971 = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
}


void __fastcall ClassBoardLineMaster___c__DisplayClass1_0___ctor(
        ClassBoardLineMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardLineMaster___c__DisplayClass1_0___GetAllEntityEnumerable_b__0(
        ClassBoardLineMaster___c__DisplayClass1_0_o *this,
        ClassBoardLineEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.classBoardBaseId == this->fields.baseId;
}
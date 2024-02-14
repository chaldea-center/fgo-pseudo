void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4217B24 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__, method);
    byte_4217B24 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    425,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *AllEntityEnumerable; // x0

  if ( (byte_4217B22 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___, *(_QWORD *)&baseId);
    byte_4217B22 = 1;
  }
  AllEntityEnumerable = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardLineMaster__GetAllEntityEnumerable(
                                                                               this,
                                                                               baseId,
                                                                               method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         AllEntityEnumerable,
                                         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ClassBoardLineMaster___c__DisplayClass1_0_o *v10; // x21
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4217B23 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_ClassBoardLineEntity___, *(_QWORD *)&baseId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___, v5);
    sub_B0D8A4(&Method_System_Func_ClassBoardLineEntity__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_ClassBoardLineEntity__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__, v8);
    sub_B0D8A4(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_4217B23 = 1;
  }
  v10 = (ClassBoardLineMaster___c__DisplayClass1_0_o *)sub_B0D974(
                                                         ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo,
                                                         *(_QWORD *)&baseId,
                                                         method);
  ClassBoardLineMaster___c__DisplayClass1_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_ClassBoardLineEntity__bool__TypeInfo,
                                                                             v13,
                                                                             v14);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_ClassBoardLineEntity__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                             Entitys_WarQuestSelectionEntity,
                                                                             (System_Func_TSource__bool__o *)v15,
                                                                             (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4217B25 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__,
      *(_QWORD *)&classBoardBaseId);
    byte_4217B25 = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardLineEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                     (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_266A024 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
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

  if ( (byte_4217B26 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__, entity);
    byte_4217B26 = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
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
    sub_B0D97C(this);
  return x->fields.classBoardBaseId == this->fields.baseId;
}
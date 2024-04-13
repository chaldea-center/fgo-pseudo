void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA80A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42EA80A = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    426,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *AllEntityEnumerable; // x0

  if ( (byte_42EA808 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___, baseId, (_DWORD)method, v3);
    byte_42EA808 = 1;
  }
  AllEntityEnumerable = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardLineMaster__GetAllEntityEnumerable(
                                                                               this,
                                                                               baseId,
                                                                               method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         AllEntityEnumerable,
                                         (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  ClassBoardLineMaster___c__DisplayClass1_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20

  if ( (byte_42EA809 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_ClassBoardLineEntity___, baseId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_ClassBoardLineEntity__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_ClassBoardLineEntity__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__, v15, v16, v17);
    sub_B5D5C4(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo, v18, v19, v20);
    byte_42EA809 = 1;
  }
  v21 = (ClassBoardLineMaster___c__DisplayClass1_0_o *)sub_B5D694(ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
  ClassBoardLineMaster___c__DisplayClass1_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ClassBoardLineEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ClassBoardLineEntity__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                             Entitys_WarQuestSelectionEntity,
                                                                             (System_Func_TSource__bool__o *)v25,
                                                                             (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA80B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__,
      classBoardBaseId,
      id,
      method);
    byte_42EA80B = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardLineEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_23FB260 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
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

  if ( (byte_42EA80C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__,
      (_DWORD)entity,
      classBoardBaseId,
      *(_QWORD *)&id);
    byte_42EA80C = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
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
    sub_B5D69C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}
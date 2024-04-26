void __fastcall ClassBoardLineMaster___ctor(ClassBoardLineMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4353AFE & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
    byte_4353AFE = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    426,
    (const MethodInfo_21C07F4 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string___ctor__);
}


ClassBoardLineEntity_array *__fastcall ClassBoardLineMaster__GetAllEntity(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *AllEntityEnumerable; // x0

  if ( (byte_4353AFC & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
    byte_4353AFC = 1;
  }
  AllEntityEnumerable = (System_Collections_Generic_IEnumerable_TSource__o *)ClassBoardLineMaster__GetAllEntityEnumerable(
                                                                               this,
                                                                               baseId,
                                                                               method);
  return (ClassBoardLineEntity_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         AllEntityEnumerable,
                                         (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_ClassBoardLineEntity___);
}


System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *__fastcall ClassBoardLineMaster__GetAllEntityEnumerable(
        ClassBoardLineMaster_o *this,
        int32_t baseId,
        const MethodInfo *method)
{
  ClassBoardLineMaster___c__DisplayClass1_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entitys_WarQuestSelectionEntity; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_4353AFD & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
    sub_B70694(&Method_System_Func_ClassBoardLineEntity__bool___ctor__);
    sub_B70694(&System_Func_ClassBoardLineEntity__bool__TypeInfo);
    sub_B70694(&Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__);
    sub_B70694(&ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
    byte_4353AFD = 1;
  }
  v5 = (ClassBoardLineMaster___c__DisplayClass1_0_o *)sub_B70764(ClassBoardLineMaster___c__DisplayClass1_0_TypeInfo);
  ClassBoardLineMaster___c__DisplayClass1_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.baseId = baseId;
  Entitys_WarQuestSelectionEntity = (System_Collections_Generic_IEnumerable_TSource__o *)DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                                                                           (DataMasterBase_o *)this,
                                                                                           (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_ClassBoardLineEntity___);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_ClassBoardLineEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ClassBoardLineMaster___c__DisplayClass1_0__GetAllEntityEnumerable_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_ClassBoardLineEntity__bool___ctor__);
  return (System_Collections_Generic_IEnumerable_ClassBoardLineEntity__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                             Entitys_WarQuestSelectionEntity,
                                                                             (System_Func_TSource__bool__o *)v9,
                                                                             (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_ClassBoardLineEntity___);
}


// local variable allocation has failed, the output may be wrong!
ClassBoardLineEntity_o *__fastcall ClassBoardLineMaster__GetEntity(
        ClassBoardLineMaster_o *this,
        int32_t classBoardBaseId,
        int32_t id,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_4353AFF & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
    byte_4353AFF = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&id);
  return (ClassBoardLineEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                     (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                     PK,
                                     (const MethodInfo_21C0890 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__GetEntity__);
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

  if ( (byte_4353B00 & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
    byte_4353B00 = 1;
  }
  PK = ClassBoardLineEntity__CreatePK(classBoardBaseId, id, *(const MethodInfo **)&classBoardBaseId);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21C08E8 *)Method_DataMasterBase_ClassBoardLineMaster__ClassBoardLineEntity__string__TryGetEntity__);
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
    sub_B7076C(this, 0LL);
  return x->fields.classBoardBaseId == this->fields.baseId;
}